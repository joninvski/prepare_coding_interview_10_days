

mergesort(array, size)

mergesort_aux(array, beginning, end) 
{
    if array is one element
    {
        return
    }

    else
    {
        mergesort_aux(array, beginning, middle)
        mergesort_aux(array, new_middle+1, end)
        
        # Now that both lists are ordered
        simple_merge(beginning, new_middle, new_middle + 1, end)
    }
}

merge(array,start_first_half, end_first_half, start_second_half, end_second_half)
{
    int temp[end_second_half + 1];
    int stored_elements_in_temp;

    while(start_first_half < end_first_half && start_second_half < end_first_half)
    {
        if(array[start_first_half] < array[start_second_half] )
        {
            temp[start_first_half] = array[start_first_half] 
            start_first_half++; 
            stored_elements_in_temp++;
        }

        else{
            temp[start_second_half] = array[start_second_half] 
            start_second_half++; 
            stored_elements_in_temp++;
        }
    }

    while(start_first_half < end_first_half)
    {
        temp[stored_elements_in_temp] = array[start_first_half]
        start_first_half++;
        stored_elements_in_temp++;
    }

    while(start_second_half < end_second_half)
    {
        temp[stored_elements_in_temp] = array[start_first_half]
        start_second_half++;
        stored_elements_in_temp++;
    }
}

