# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map_gen.pl                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcrawn <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/18 09:58:45 by lcrawn            #+#    #+#              #
#    Updated: 2019/02/18 10:00:30 by lcrawn           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#!/usr/bin/perl
use warnings;
use strict;
die "program x y density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++) {
	for (my $j = 0; $j < $x; $j++) {
		if (int(rand($y) * 2) < $density) {
			print "o";
			}
		else {
		print ".";
		}
	}
	print "\n";
}
