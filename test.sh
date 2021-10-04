/usr/mysql/bin/mysqldump -u root DUMP > ~/backups/DUMP.sql

COMMIT_TIMESTAMP=`date +'%Y-%m-%d %H:%M:%S %Z'`
DATELOG=`date +'%Y-%m-%d-%H-%M-%S'`

cd ~/backups
git add DUMP.sql
git commit -m "Automated database dump commit on ${COMMIT_TIMESTAMP}"
git push git@github.com:repo/backups.git
