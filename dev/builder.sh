

# for beginning developers of rattish implementations

git add *

read info

git commit -m "$info"

cmake . -DRATTISH_VERSION=$(npm version patch)
make 
