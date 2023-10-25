###
# Sort integer arguments (ascending)
###

result = []  # Initialize an empty array to store sorted integers

ARGV.each do |arg|
    # Skip if the argument is not an integer
    next if arg !~ /^-?[0-9]+$/

    # Convert the argument to an integer
    i_arg = arg.to_i

    # Insert the integer into the result array at the right position
    is_inserted = false
    i = 0
    l = result.size
    while !is_inserted && i < l do
        if result[i] < i_arg
            i += 1
        else
            result.insert(i, i_arg)
            is_inserted = true
            break
        end
    end
    result << i_arg if !is_inserted  # Add the integer to the end if it wasn't inserted
end

puts result  # Print the sorted array of integers
