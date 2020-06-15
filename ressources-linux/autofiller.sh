export you="../amaragre.filler"

echo "    .    _    _ _______ ____      ______ _____ _      _      ___________";
echo "    /\  | |  | |__   __/ __ \     |  ___|_   _| |    | |    |  ___| ___ \\";
echo "   /  \ | |  | |  | | | |  | |    | |_    | | | |    | |    | |__ | |_/ /";
echo "  / /\ \| |  | |  | | | |  | |    |  _|   | | | |    | |    |  __||    /";
echo " / ____ \ |__| |  | | | |__| |    | |    _| |_| |____| |____| |___| |\ \\";
echo "/_/    \_\____/   |_|  \____/     \_|    \___/\_____/\_____/\____/\_| \_|";

echo "         ___        _  __  ___   _   _   __ ___  ___   ___";
echo "        / o.)_ __  / |/ /,' _/ .' \ / \,' // o |/ o | / _/";
echo "       / o \ \V / / || /_\ \`. / o // \,' // _,'/  ,' / _/";
echo "      /___,'  )/ /_/|_//___,'/_n_//_/ /_//_/  /_/\`_\/___/";
echo "             //";

for k in {0..75}; do printf "*"; done; echo ""; for k in {0..75}; do printf "*"; done; echo "\n";

for map in {01};	do

	for j in "abanlin.filler" "carli.filler" "champely.filler" "grati.filler" "hcao.filler" "superjeannot.filler"; do

		for i in {1..5}; do
			echo "MAP0$map -- Round $i NORMAL -- [P1] $you vs [P2] $j";
			./filler_vm -f maps/map0$map -p1 $you -p2 ./players/$j | grep fin;
		done;

		for i in {1..5}; do
			echo "$map -- Round $i REVERSE -- [P1] $j vs [P2] $you";
			./filler_vm -f maps/map0$map -p2 $you -p1 ./players/$j | grep fin;
		done;

		for k in {0..75}; do printf "*"; done; echo ""; for k in {0..75}; do printf "*"; done; echo "\n";

	done;
done;

printf "Bonus round ? (y/n) : "; read bonus;
if [ $bonus = "y" ]; then
	echo "1\ -- [P1] $you vs [P2] $you";
	./filler_vm -f maps/map01 -p1 $you -p2 $you | grep fin;
fi;
echo "Done."

exit;
