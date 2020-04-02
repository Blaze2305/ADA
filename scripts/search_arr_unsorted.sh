n=$1
echo $n
echo $(seq 1 $n|shuf)
echo $(seq 1 $n| shuf -n 1)

