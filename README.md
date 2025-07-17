git branch -m main
git remote add "name" "ssh"
git push -u "name" "branch"
git remote -v

git clone first later git pull
git checkout "branch"
git merge "branch"

## NO sé usar aún
git reset --soft HEAD~1  //`HEAD~1` Retrocede 1 commit desde donde estás. `--soft` Los cambios del commit deshecho quedan en staging.
git stash -u //Save without commit
git stash pop //load that save
