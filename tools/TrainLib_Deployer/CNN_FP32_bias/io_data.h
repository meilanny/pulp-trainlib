// Init weights
#define WGT_SIZE_L0 72
PI_L2 float init_WGT_l0[WGT_SIZE_L0] = {1.2059739828109741f, 0.8844369649887085f, -0.28695356845855713f, -0.6346498727798462f, -1.3639074563980103f, -0.6773535013198853f, -0.6969150900840759f, 0.6386538147926331f, 0.4228894114494324f, 0.377608060836792f, 0.056540265679359436f, -0.9931911826133728f, 0.36092638969421387f, -0.6966665387153625f, 1.0743412971496582f, -0.4250401556491852f, -0.3360699415206909f, 0.07572448253631592f, 1.32602858543396f, -0.7962822318077087f, -0.6915813088417053f, -0.2910962402820587f, 1.5549547672271729f, -0.0840778648853302f, -1.6547660827636719f, -1.1515313386917114f, 0.8994800448417664f, -0.08061003684997559f, -1.0203943252563477f, -0.797113835811615f, -0.98776775598526f, 0.1544969379901886f, 0.10832685232162476f, -0.8037904500961304f, -0.8207108974456787f, 0.5929847359657288f, 0.19132018089294434f, -0.07755592465400696f, 0.07435906678438187f, -1.5134451389312744f, 2.0623042583465576f, -0.6449191570281982f, -1.0519365072250366f, -1.2605180740356445f, 0.7130483984947205f, -0.506534993648529f, 0.978744387626648f, 0.7720978260040283f, 0.5903745293617249f, -1.2585982084274292f, -0.09312529861927032f, -1.0997505187988281f, 0.6927283406257629f, 0.9330856800079346f, -0.44136109948158264f, 0.35594385862350464f, -0.5054761171340942f, 1.5812679529190063f, 2.266268730163574f, -0.8195926547050476f, -0.7364721298217773f, 0.8043879270553589f, 0.4683045744895935f, -0.005333526059985161f, -0.8426421880722046f, 1.186508297920227f, -0.27652233839035034f, -0.880876898765564f, -0.5146231651306152f, -0.9969354271888733f, 0.4536728858947754f, 0.19254082441329956f, };
#define WGT_SIZE_L1 16
PI_L2 float init_WGT_l1[WGT_SIZE_L1];
#define WGT_SIZE_L2 288
#define BIAS_SIZE_L2 2
PI_L2 float init_WGT_l2[WGT_SIZE_L2] = {-1.3452224731445312f, -2.0962727069854736f, 0.32213446497917175f, -0.3384481966495514f, 0.42076191306114197f, -1.8670867681503296f, 1.592707633972168f, -0.4302777647972107f, 0.41434237360954285f, 0.036066245287656784f, 1.0044533014297485f, -1.448429822921753f, 0.7923833727836609f, 2.2248129844665527f, -1.1293730735778809f, 1.0018351078033447f, -0.010208711959421635f, -0.6560965180397034f, -1.1256030797958374f, 1.0183604955673218f, -0.9131423830986023f, 0.005827556364238262f, 2.1633353233337402f, -0.5839592218399048f, -0.4991896152496338f, -0.9959603548049927f, 1.0666664838790894f, 0.033621981739997864f, -0.055906977504491806f, -0.2552034854888916f, -0.5410312414169312f, -1.5303899049758911f, 0.7718632221221924f, -0.04666634649038315f, 0.8631356358528137f, -0.05693213269114494f, -0.4865151643753052f, 0.08262698352336884f, 0.03132956102490425f, 1.4338136911392212f, 1.0996922254562378f, -2.177138328552246f, -0.7630943655967712f, 0.6972392201423645f, 0.28456342220306396f, -0.2263747602701187f, 0.44940370321273804f, -0.5155227780342102f, 0.9094253182411194f, 1.5181218385696411f, 1.67122483253479f, 0.26460176706314087f, -2.3630175590515137f, 0.24592655897140503f, -0.6394635438919067f, -0.5125524401664734f, 1.965528964996338f, -0.7324075102806091f, -0.9397010803222656f, -0.8206039667129517f, -0.8446163535118103f, -2.073983669281006f, 0.9076751470565796f, -0.40076944231987f, 0.8634223937988281f, 0.0940554291009903f, 1.0862629413604736f, -1.2754848003387451f, -1.3693745136260986f, -1.9160652160644531f, 0.2089705765247345f, -0.5245841145515442f, 0.6041489243507385f, -0.0218635443598032f, 0.20556706190109253f, -0.069947250187397f, 0.8450565338134766f, 0.22903648018836975f, 1.3974632024765015f, 0.6348793506622314f, 2.22017502784729f, 0.26281893253326416f, 0.5622504353523254f, -1.7140952348709106f, -0.8936377167701721f, 0.485773503780365f, 0.4610467255115509f, 0.34952566027641296f, -0.4074211120605469f, 0.855948269367218f, -1.242059588432312f, 0.08167217671871185f, -1.6707441806793213f, -0.7273158431053162f, 0.393158495426178f, 0.011266125366091728f, -0.1668568104505539f, 0.20330928266048431f, -0.6398176550865173f, 2.4045159816741943f, 0.2607954442501068f, -0.11932041496038437f, -0.03661017864942551f, 0.22132588922977448f, 1.1555320024490356f, -1.765212059020996f, -0.3698749244213104f, 1.2293516397476196f, -0.8969481587409973f, 1.328792929649353f, -0.4449874460697174f, -0.3787330687046051f, -1.0681114196777344f, -0.1370839923620224f, 1.7372220754623413f, -0.9323019981384277f, -0.603093147277832f, 0.6813808679580688f, -0.42688560485839844f, -0.0606822669506073f, 2.7857022285461426f, 1.333418846130371f, 0.5196216702461243f, 2.032745599746704f, 0.11020825058221817f, -0.011889460496604443f, -1.1247146129608154f, -1.340640664100647f, 1.3726611137390137f, 2.8325703144073486f, 1.4688526391983032f, 1.3403377532958984f, 0.5180676579475403f, 1.2219784259796143f, -0.40946164727211f, 0.44005241990089417f, 1.3004621267318726f, 0.3092087507247925f, -1.712524175643921f, -0.1199411004781723f, 0.8182701468467712f, -0.15616802871227264f, -0.4807349443435669f, 1.1852608919143677f, 0.42340394854545593f, 0.19643408060073853f, 0.017321527004241943f, 0.001627730904147029f, -0.4579003155231476f, -0.41586586833000183f, -1.0452836751937866f, 0.41549500823020935f, 0.2003069818019867f, 0.344350665807724f, 1.1117056608200073f, -0.7057216167449951f, 1.9892150163650513f, 0.8425147533416748f, 0.9472244381904602f, 1.1333650350570679f, -0.596116304397583f, 0.08620566874742508f, 0.9897671341896057f, 0.40220019221305847f, -1.3425166606903076f, -0.658652663230896f, 0.5300450325012207f, 1.2834761142730713f, 1.503579020500183f, -0.5518451929092407f, -0.03135963901877403f, -0.2814796566963196f, -1.5322002172470093f, 1.3803036212921143f, 0.4174194037914276f, -0.6706108450889587f, 0.43793603777885437f, 0.6206870675086975f, 1.7538584470748901f, -0.31559279561042786f, 0.02883778139948845f, 0.9883166551589966f, 0.1762111634016037f, 0.4038184583187103f, 0.27076151967048645f, 0.9365667700767517f, -0.17088685929775238f, -0.5451690554618835f, 0.3785536587238312f, 0.6222357153892517f, -0.8864030241966248f, -0.5107200741767883f, 0.8704598546028137f, 1.4669955968856812f, 0.7905487418174744f, -1.2944751977920532f, 0.2600212097167969f, 1.011690616607666f, -0.34076955914497375f, -0.619381844997406f, 0.54184889793396f, -0.5566500425338745f, -1.1146442890167236f, -2.155512571334839f, 0.6211267709732056f, 0.90339595079422f, -1.4206691980361938f, -1.3790425062179565f, -1.2302205562591553f, 0.8356976509094238f, 1.3989274501800537f, 0.5231858491897583f, -1.860512137413025f, 1.0469377040863037f, 3.3827078342437744f, -0.6372442245483398f, -2.02815842628479f, -0.8226524591445923f, -1.3570102453231812f, 0.7201101779937744f, 0.6239789724349976f, 0.403843492269516f, -0.8303719162940979f, -0.5189523100852966f, 1.1438965797424316f, 0.00807300116866827f, -0.3333490788936615f, 0.00479945819824934f, 1.74759042263031f, -1.1825402975082397f, -1.4558908939361572f, 0.5269467234611511f, 0.33497220277786255f, -1.1114017963409424f, 1.1712877750396729f, 0.49653682112693787f, 0.9404988884925842f, -0.047326065599918365f, 0.09626919776201248f, -0.36123836040496826f, 0.7073256969451904f, -0.2987940311431885f, -0.6194408535957336f, 1.9481638669967651f, 0.07714017480611801f, -0.2209751456975937f, 0.6177323460578918f, -0.09317058324813843f, -1.7758924961090088f, -2.5722126960754395f, 0.16578152775764465f, 0.5351736545562744f, 1.108978033065796f, 0.6723477840423584f, -1.6038538217544556f, -0.33473116159439087f, 1.3497931957244873f, 1.6593292951583862f, -0.04299600422382355f, -0.304276704788208f, 0.8970149159431458f, -0.29267606139183044f, -1.579201340675354f, -0.1853569597005844f, 0.8907705545425415f, 0.3588603734970093f, -0.8135072588920593f, -0.1448165327310562f, 0.5452088117599487f, -0.900620698928833f, 0.9137786626815796f, -1.5686358213424683f, -1.0079227685928345f, -0.3885480463504791f, -0.031940702348947525f, -0.4670473635196686f, 0.04905600845813751f, 0.7085567116737366f, -0.6634101867675781f, 0.12017940729856491f, -0.8258475065231323f, 0.7998403906822205f, -0.51883864402771f, 0.33730271458625793f, -0.7071778178215027f, 1.4170219898223877f, -0.8904619216918945f, -0.44673952460289f, };
PI_L2 float init_BIAS_l2[BIAS_SIZE_L2] = {0.4809138774871826f, -0.06811627745628357f, };
// Input and Output data
#define IN_SIZE 128
PI_L1 float INPUT[IN_SIZE] = {5.1384876087468e-07f, 7.826172918612428e-07f, 2.83152473912196e-07f, 8.111104534691549e-07f, 6.773755671929393e-07f, 1.876058632888089e-07f, 6.230058033906971e-07f, 3.5374085882722284e-07f, 5.955952246949892e-07f, 6.207006890690536e-07f, 4.960892283634166e-07f, 2.5064181841116806e-07f, 8.303135956566621e-08f, 5.165092602510413e-07f, 9.8103281054307e-10f, 9.397959956913837e-07f, 6.582655487363809e-07f, 1.3409531618435722e-07f, 6.264301646297099e-07f, 6.46041030449851e-07f, 2.070850158020221e-08f, 6.79165225392353e-07f, 7.559483492514119e-07f, 7.156038606126458e-08f, 1.895306098731453e-07f, 6.575342013093177e-07f, 3.4985052366209857e-07f, 7.587041181977838e-07f, 6.789236408621946e-07f, 1.0292255581134668e-07f, 2.3019200057206035e-07f, 2.540752745971986e-07f, 6.746828429271545e-09f, 8.648276406120203e-08f, 9.827524394268039e-08f, 4.834848610357767e-08f, 3.61116775593473e-07f, 9.202897111038055e-09f, 7.874447049971423e-08f, 6.707858233312436e-07f, 7.01692783877661e-07f, 6.769984679522167e-07f, 2.7419019943408784e-07f, 1.5275610110165871e-07f, 2.229524795893667e-07f, 7.075357189023634e-08f, 3.459381332504563e-07f, 6.005955697219179e-07f, 1.3260209641430265e-07f, 4.282243821762677e-07f, 8.137610620906344e-07f, 1.452856110972789e-07f, 4.4058936055080267e-07f, 9.937845106833265e-07f, 7.018196868102677e-08f, 9.761506589711644e-07f, 3.6596478025785473e-07f, 5.849814783687179e-07f, 5.876362152434922e-08f, 9.919681360770483e-07f, 1.4346898069561576e-07f, 5.879122113583435e-07f, 8.92778928118787e-07f, 9.404367915522016e-07f, 1.3997363623730052e-07f, 7.952071428007912e-07f, 1.0515790904719324e-07f, 8.773731963174214e-08f, 6.799046445848944e-07f, 3.138378872336034e-07f, 3.769833369915432e-07f, 4.354512839199742e-08f, 8.786170155872242e-07f, 9.46860893691337e-07f, 7.237142085614323e-08f, 2.7798856194749533e-07f, 2.3672008353514684e-07f, 6.504504312943027e-07f, 3.226535341127601e-07f, 9.2492058456628e-07f, 6.839875368314097e-07f, 1.826109325975267e-07f, 4.751952928927494e-07f, 5.063642447566963e-07f, 1.597957037802189e-07f, 6.399450285243802e-07f, 1.4014989346833318e-07f, 2.477746079421195e-07f, 1.2750339806189004e-07f, 5.390795649873326e-07f, 5.747687836787918e-08f, 2.1572471098352253e-07f, 1.1312115333339534e-07f, 8.722993243281962e-07f, 4.5526331859946367e-07f, 6.727707102527347e-08f, 1.1523127341206418e-08f, 1.9770843096011959e-07f, 3.480004124867264e-07f, 1.3782965879727271e-07f, 4.831360911339289e-07f, 5.608881110674702e-07f, 1.5449046486537554e-08f, 7.197169793471403e-07f, 8.087990295280179e-07f, 5.977606747364916e-07f, 5.863498131475353e-07f, 4.5577944973729245e-08f, 6.557631309078715e-07f, 5.960561111351126e-07f, 5.573136832026648e-07f, 7.523964882238943e-07f, 3.50542137539378e-07f, 4.1991108901129337e-07f, 8.449839015156613e-07f, 3.000836841238197e-07f, 8.120242114273424e-07f, 4.319772699545865e-07f, 4.597829104113771e-07f, 6.078424803490634e-07f, 4.6094970684862346e-07f, 7.746085657345247e-07f, 9.095430755223788e-07f, 2.2513567898840847e-08f, 5.509471634468355e-07f, 1.65823578868185e-07f, 6.364975888573099e-07f, 5.872583983546065e-07f, };
#define OUT_SIZE 2
PI_L2 float REFERENCE_OUTPUT[OUT_SIZE] = {0.6934939026832581f, 0.3692883253097534f, };
PI_L1 float LABEL[OUT_SIZE] = {1.0f, 1.0f, };
PI_L2 float TRAIN_LOSS[5] = {0.7051528692245483f, 0.5711738467216492f, 0.4626508057117462f, 0.3747471272945404f, 0.303545206785202f, };
