my_array=(1 2 "three" "four" 5)
my_array+=("six")
my_array+=(7)

for item in ${my_array[@]}; do
  echo $item
done

for i in ${!my_array[@]}; do
  echo ${my_array[i]}
done


