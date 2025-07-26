#!/bin/bash

KEY_PATH=~/.ssh/id_rsa
date=$(date)

if ! [ -n "$SSH_AGENT_PID" ]
then
    echo "Setting SSH-AGENT......."
    eval "$(ssh-agent -s)" 1> git.log 2> git_err.log
    ssh-add "$KEY_PATH" 1> git.log 2> git_err.log
fi

if [ "$1" = "push" ]
then
    echo "Pushing to git repo......"
    git add .
    git commit -m "updated on $date" 1>> git.log 2>> git_err.log
    git push origin master 1>> git.log 2>> git_err.log
    if [ $? -eq 0 ]; then
        echo "Pushed succesfully"
    fi

elif [ "$1" = "pull" ]
then
    echo "git pull"
else
    echo "put argument for \"push\" or \"pull\""
fi

