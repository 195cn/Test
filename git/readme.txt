HOW TO USE GIT

First:
	set user name and email

	git config user.name XXXXX
	git config user.email XXXXX@XXX.com

Second:
	clone or init a git project

	(1)clone
	git clone https://github.com/XXXXX/XXXXX
	(2)init
	mkdir project
	cd prongject
	git init

Third:
	track and commit file into git project
	
	(1)add
	git add file
	(2)commit
	git commit -m "P.S."
	
Fourth:
	get git project info and different

	(1)status
	git status
	(2)diff
	git diff
		--cached

Fifth:
	creat ,upload ,downlodad remote origin
	
	(1)remote
	git remote add origin https://github.com/XXXXX/XXXX
	(2)push
	git push origin master
	(3)pull
	git pull origin master

Sixth:
	manage branch(creat,change,merge,delete)

	(1)new branch
	git branch XXXXX
	(2)show branch
	git branch
	(3)change to another branch
	git checkout XXXXX
	(4)merge two branch
	git merge -m "annotation" branch2
	(5)delete branch
	git branch -d XXXXXX
	(6)reset merge
	git reset --head HEAD^

Seventh:
	show the log

	git log
		--stat
		--pretty=oneline
		--pretty=short
		--graph
