def dna_to_rna(string)
	string.each_char do |k|
		a+=1 if k=='A'
		c+=1 if k=='C'
		g+=1 if k=='G'
		t+=1 if k=='T'
		#puts k
	end
	puts "#{a} #{c} #{g} #{t}"
end
count_letters("")