def main():
    score=0
    print("1. Who was the first Indian woman in Space?\n")
    print("a. Kalpana Chawla")
    print("b. Sunita Williams ")
    print("c. Koneru Humpi")
    print("d. None of the above\n")
    r1=str(input("Input your option:"))
    if r1=="a":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n2. Who was the first Indian in space?\n\n")
    print("a. Vikram Ambalal")
    print("b. Raish Malhotra")  
    print(" c. Rakesh Sharma ")
    print(" d. Nagapathi Bhat\n\n")
    r2=str(input("Input your option:"))
    if r2=="c":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n3. Who was the first Man to Climb Mount Everest Without Oxygen?\n\n")
    print("a. Junko Tabei ") 
    print(" b.Reinhold Messner ")
    print("c. Peter Habeler ")
    print(" d. Phu Dorji\n\n")
    r3=str(input("Input your option:"))
    if r3=="d":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n4. Who built the Jama Masjid?\n\n")
    print("a.Jahangir ")
    print("b.Akbar ")
    print("c.Imam Bukhari d.Shah Jahan")
    print("d.Shah Jahan")
    r4=str(input("Input your option:"))
    if r4=="d":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n5. Who wrote the Indian National Anthem?\n\n")    
    print("\na.Bakim Chandra Chatterji\n")
    print("\nb.Rabindranath Tagore\n")
    print("\nc.Swami Vivekanand\n")
    print("\n4.None of the above\n")
    r5=str(input("Input your option:"))
    if r5=="b":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n6. Who was the first Indian Scientist to win a Nobel Prize?\n\n")
    print("\na.CV Raman\n")
    print("\nb.Amartya Sen\n")
    print("\nc.Hargobind Khorana\n")
    print("\nd.Subramanian Chrandrashekar\n")
    r6=str(input("Input your option:"))
    if r6=="a":
        print("Next:")
        score+=1
    else:
        print("Next:")
    
    print("\n\n7. Who is the first Indian to win a Nobel Prize?\n\n")
    print("\na.Rabindranath Tagore\n")
    print("\nb.CV Raman\n")
    print("\nc.Mother Theresa\n")
    print("\nd.Hargobind Khorana\n")
    r7=str(input("Input your option:"))
    if r7=="a":
        print("Next:")
        score+=1
    else:
        print("Next:")
    print("\n\n8. Who was the first Indian woman to win the Miss World Title?\n\n")
    print("\na.Aishwarya Rai\n")
    print("\nb.Sushmita Sen\n")
    print("\nc.Reita Faria\n")
    print("\nd.Diya Mirza\n")
    r8=str(input("Input your option:"))
    if r8=="c":
        print("Next:")
        score+=1
    else:
        print("Next:")
    
    print("\n\n9. Who was the first President of India?\n\n")
    print("\na.Abdul Kalam\n")
    print("\nb.Lal Bahadur Shastri\n")
    print("\nc.Dr. Rajendra Prasad\n")
    print("\nd.Zakir Hussain\n")
    r9=str(input("Input your option:"))
    if r9=="c":
        print("Next:")
        score+=1
    else:
        print("Next:")
    
    print("\n\n10. Who was the first Indian to win the Booker Prize?\n\n")
    print("\na.Dhan Gopal Mukerji\n")
    print("\nb.Nirad C. Chaudhuri\n")
    print("\nc.Arundhati Roy\n")
    print("\nd.Aravind Adiga\n")
    r10=str(input("Input your option:"))
    if r10=="c":
        score+=1
        pass
    else:
        pass
    print("\t\t\tYour test is completed\n\n")
    if score <=5:
        print("\t\t\tYour Total score is ",score," out of 10\n")
        print("\t\t\tFAIL::\n")
        print("\t\t\tBetter luck Next time\n\n")
    else:
        print("\t\t\tYour Total score is ",score," out of 10\n")
        print("\t\t\tPASS::\n")
        print("\t\t\tCongratulations\n\n\n\n")
    print("\t\tDo you want to retake the test?\n")
    print("\t\t1.YES  2.NO\n")
    retake=int(input("Enter your choice::"))
    if retake ==1:
        main()
    else:
        print("\t\t\tThank You:)\n")
            


print("\t\t\t\tWELCOME\n\n")
print("\t\t\tGENERAL KNOWLEDGE TEST\n\n\n")
print("\t\tDO YOU WANT TO START THE TEST?\n\n")
print("\t\t1.YES  2.NO\n\n\n")
r=int(input("enter your choice"))
if r==1:
    main()
else:
    print("\t\t\tThank You:)\n")
    
    
    