# To clone a repo to your local machine
git clone "RepoLink"
RepoLink can be HTTPS or SSH but SSH is preferred.
To clone it with a custom name
git clone "RepoLink" "CustomName"

# To start a new repo from local device
Go to the folder you want to use as a repo
git init
Note: Make sure you have atleast one file inside your repo before pushing.
You can't push before connecting the local repo to an online one.

# Connecting a local repo to Github
Create an empty repo on github. Copy its SSH link.
git remote add origin "SSHLink"
Note: origin is just a name. You can give it another name.

# To check remotes of current local git repo
git remote
This gives just names
or
git remote -v
This gives names, url, fetch/push

# To check the status of the local files
After going inside the local projects's folder
git status

# To choose/stage files to commit
git add FileName1 FileName2
or to choose all files
git add .
or
git add --a
or
git add --all
Note: Any

# To commit changes
After adding files to be committed
git commit

## To pass commit message and/or description
git commit -m "CommitMessage" -m "CommitDescription"

## To add commit all files
git commit -a

# Pushing the changes to Github
git push origin master

If you don't want to write origin master everytime you can set an upstream.
git push -u origin master
Now I can just use
git push

# To check branches
git branch

# To create a new branch
git checkout -b branchName
This will automatically switch to this branch.

# To switch to another branch
git checkout branchName

# To check difference between current branch and another one
git diff otherBranch