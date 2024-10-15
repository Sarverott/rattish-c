

# for beginning developers of rattish implementations

git add *

read commit_note

git commit -m "$commit_note"

cmake . -D RATTISH_VERSION=${npm version patch}
make 
