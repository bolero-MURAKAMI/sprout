#ifndef SPROUT_MATH_FACTORIAL_HPP
#define SPROUT_MATH_FACTORIAL_HPP

#include <cstddef>
#include <cstdint>
#include <stdexcept>
#include <sprout/config.hpp>
#include <sprout/array.hpp>

namespace sprout {
	namespace math {
		namespace detail {
			template<typename T>
			struct factorials;
			template<>
			struct factorials<std::int8_t> {
			public:
				typedef std::int8_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 5;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::int8_t>::table_type sprout::math::detail::factorials<std::int8_t>::table;
			template<>
			struct factorials<std::uint8_t> {
			public:
				typedef std::uint8_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 5;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::uint8_t>::table_type sprout::math::detail::factorials<std::uint8_t>::table;
			template<>
			struct factorials<std::int16_t> {
			public:
				typedef std::int16_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 7;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120,
					720,
					5040
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::int16_t>::table_type sprout::math::detail::factorials<std::int16_t>::table;
			template<>
			struct factorials<std::uint16_t> {
			public:
				typedef std::uint16_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 8;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120,
					720,
					5040,
					40320
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::uint16_t>::table_type sprout::math::detail::factorials<std::uint16_t>::table;
			template<>
			struct factorials<std::int32_t> {
			public:
				typedef std::int32_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 11;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120,
					720,
					5040,
					40320,
					362880,
					3628800,
					39916800
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::int32_t>::table_type sprout::math::detail::factorials<std::int32_t>::table;
			template<>
			struct factorials<std::uint32_t> {
			public:
				typedef std::uint32_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 11;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1,
					1,
					2,
					6,
					24,
					120,
					720,
					5040,
					40320,
					362880,
					3628800,
					39916800
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::uint32_t>::table_type sprout::math::detail::factorials<std::uint32_t>::table;
			template<>
			struct factorials<std::int64_t> {
			public:
				typedef std::int64_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 20;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					INT64_C(1),
					INT64_C(1),
					INT64_C(2),
					INT64_C(6),
					INT64_C(24),
					INT64_C(120),
					INT64_C(720),
					INT64_C(5040),
					INT64_C(40320),
					INT64_C(362880),
					INT64_C(3628800),
					INT64_C(39916800),
					INT64_C(479001600),
					INT64_C(6227020800),
					INT64_C(87178291200),
					INT64_C(1307674368000),
					INT64_C(20922789888000),
					INT64_C(355687428096000),
					INT64_C(6402373705728000),
					INT64_C(121645100408832000),
					INT64_C(2432902008176640000)
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::int64_t>::table_type sprout::math::detail::factorials<std::int64_t>::table;
			template<>
			struct factorials<std::uint64_t> {
			public:
				typedef std::uint64_t type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 20;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					UINT64_C(1),
					UINT64_C(1),
					UINT64_C(2),
					UINT64_C(6),
					UINT64_C(24),
					UINT64_C(120),
					UINT64_C(720),
					UINT64_C(5040),
					UINT64_C(40320),
					UINT64_C(362880),
					UINT64_C(3628800),
					UINT64_C(39916800),
					UINT64_C(479001600),
					UINT64_C(6227020800),
					UINT64_C(87178291200),
					UINT64_C(1307674368000),
					UINT64_C(20922789888000),
					UINT64_C(355687428096000),
					UINT64_C(6402373705728000),
					UINT64_C(121645100408832000),
					UINT64_C(2432902008176640000)
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<std::uint64_t>::table_type sprout::math::detail::factorials<std::uint64_t>::table;
			template<>
			struct factorials<float> {
			public:
				typedef float type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 34;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1.0F,
					1.0F,
					2.0F,
					6.0F,
					24.0F,
					120.0F,
					720.0F,
					5040.0F,
					40320.0F,
					362880.0F,
					3628800.0F,
					39916800.0F,
					479001600.0F,
					6227020800.0F,
					87178291200.0F,
					1307674368000.0F,
					20922789888000.0F,
					355687428096000.0F,
					6402373705728000.0F,
					121645100408832000.0F,
					0.243290200817664e19F,
					0.5109094217170944e20F,
					0.112400072777760768e22F,
					0.2585201673888497664e23F,
					0.62044840173323943936e24F,
					0.15511210043330985984e26F,
					0.403291461126605635584e27F,
					0.10888869450418352160768e29F,
					0.304888344611713860501504e30F,
					0.8841761993739701954543616e31F,
					0.26525285981219105863630848e33F,
					0.822283865417792281772556288e34F,
					0.26313083693369353016721801216e36F,
					0.868331761881188649551819440128e37F,
					0.29523279903960414084761860964352e39F
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<float>::table_type sprout::math::detail::factorials<float>::table;
			template<>
			struct factorials<double> {
			public:
				typedef double type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 170;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1.0,
					1.0,
					2.0,
					6.0,
					24.0,
					120.0,
					720.0,
					5040.0,
					40320.0,
					362880.0,
					3628800.0,
					39916800.0,
					479001600.0,
					6227020800.0,
					87178291200.0,
					1307674368000.0,
					20922789888000.0,
					355687428096000.0,
					6402373705728000.0,
					121645100408832000.0,
					0.243290200817664e19,
					0.5109094217170944e20,
					0.112400072777760768e22,
					0.2585201673888497664e23,
					0.62044840173323943936e24,
					0.15511210043330985984e26,
					0.403291461126605635584e27,
					0.10888869450418352160768e29,
					0.304888344611713860501504e30,
					0.8841761993739701954543616e31,
					0.26525285981219105863630848e33,
					0.822283865417792281772556288e34,
					0.26313083693369353016721801216e36,
					0.868331761881188649551819440128e37,
					0.29523279903960414084761860964352e39,
					0.103331479663861449296666513375232e41,
					0.3719933267899012174679994481508352e42,
					0.137637530912263450463159795815809024e44,
					0.5230226174666011117600072241000742912e45,
					0.203978820811974433586402817399028973568e47,
					0.815915283247897734345611269596115894272e48,
					0.3345252661316380710817006205344075166515e50,
					0.1405006117752879898543142606244511569936e52,
					0.6041526306337383563735513206851399750726e53,
					0.265827157478844876804362581101461589032e55,
					0.1196222208654801945619631614956577150644e57,
					0.5502622159812088949850305428800254892962e58,
					0.2586232415111681806429643551536119799692e60,
					0.1241391559253607267086228904737337503852e62,
					0.6082818640342675608722521633212953768876e63,
					0.3041409320171337804361260816606476884438e65,
					0.1551118753287382280224243016469303211063e67,
					0.8065817517094387857166063685640376697529e68,
					0.427488328406002556429801375338939964969e70,
					0.2308436973392413804720927426830275810833e72,
					0.1269640335365827592596510084756651695958e74,
					0.7109985878048634518540456474637249497365e75,
					0.4052691950487721675568060190543232213498e77,
					0.2350561331282878571829474910515074683829e79,
					0.1386831185456898357379390197203894063459e81,
					0.8320987112741390144276341183223364380754e82,
					0.507580213877224798800856812176625227226e84,
					0.3146997326038793752565312235495076408801e86,
					0.1982608315404440064116146708361898137545e88,
					0.1268869321858841641034333893351614808029e90,
					0.8247650592082470666723170306785496252186e91,
					0.5443449390774430640037292402478427526443e93,
					0.3647111091818868528824985909660546442717e95,
					0.2480035542436830599600990418569171581047e97,
					0.1711224524281413113724683388812728390923e99,
					0.1197857166996989179607278372168909873646e101,
					0.8504785885678623175211676442399260102886e102,
					0.6123445837688608686152407038527467274078e104,
					0.4470115461512684340891257138125051110077e106,
					0.3307885441519386412259530282212537821457e108,
					0.2480914081139539809194647711659403366093e110,
					0.188549470166605025498793226086114655823e112,
					0.1451830920282858696340707840863082849837e114,
					0.1132428117820629783145752115873204622873e116,
					0.8946182130782975286851441715398316520698e117,
					0.7156945704626380229481153372318653216558e119,
					0.5797126020747367985879734231578109105412e121,
					0.4753643337012841748421382069894049466438e123,
					0.3945523969720658651189747118012061057144e125,
					0.3314240134565353266999387579130131288001e127,
					0.2817104114380550276949479442260611594801e129,
					0.2422709538367273238176552320344125971528e131,
					0.210775729837952771721360051869938959523e133,
					0.1854826422573984391147968456455462843802e135,
					0.1650795516090846108121691926245361930984e137,
					0.1485715964481761497309522733620825737886e139,
					0.1352001527678402962551665687594951421476e141,
					0.1243841405464130725547532432587355307758e143,
					0.1156772507081641574759205162306240436215e145,
					0.1087366156656743080273652852567866010042e147,
					0.103299784882390592625997020993947270954e149,
					0.9916779348709496892095714015418938011582e150,
					0.9619275968248211985332842594956369871234e152,
					0.942689044888324774562618574305724247381e154,
					0.9332621544394415268169923885626670049072e156,
					0.9332621544394415268169923885626670049072e158,
					0.9425947759838359420851623124482936749562e160,
					0.9614466715035126609268655586972595484554e162,
					0.990290071648618040754671525458177334909e164,
					0.1029901674514562762384858386476504428305e167,
					0.1081396758240290900504101305800329649721e169,
					0.1146280563734708354534347384148349428704e171,
					0.1226520203196137939351751701038733888713e173,
					0.132464181945182897449989183712183259981e175,
					0.1443859583202493582204882102462797533793e177,
					0.1588245541522742940425370312709077287172e179,
					0.1762952551090244663872161047107075788761e181,
					0.1974506857221074023536820372759924883413e183,
					0.2231192748659813646596607021218715118256e185,
					0.2543559733472187557120132004189335234812e187,
					0.2925093693493015690688151804817735520034e189,
					0.339310868445189820119825609358857320324e191,
					0.396993716080872089540195962949863064779e193,
					0.4684525849754290656574312362808384164393e195,
					0.5574585761207605881323431711741977155627e197,
					0.6689502913449127057588118054090372586753e199,
					0.8094298525273443739681622845449350829971e201,
					0.9875044200833601362411579871448208012564e203,
					0.1214630436702532967576624324188129585545e206,
					0.1506141741511140879795014161993280686076e208,
					0.1882677176888926099743767702491600857595e210,
					0.237217324288004688567714730513941708057e212,
					0.3012660018457659544809977077527059692324e214,
					0.3856204823625804217356770659234636406175e216,
					0.4974504222477287440390234150412680963966e218,
					0.6466855489220473672507304395536485253155e220,
					0.8471580690878820510984568758152795681634e222,
					0.1118248651196004307449963076076169029976e225,
					0.1487270706090685728908450891181304809868e227,
					0.1992942746161518876737324194182948445223e229,
					0.269047270731805048359538766214698040105e231,
					0.3659042881952548657689727220519893345429e233,
					0.5012888748274991661034926292112253883237e235,
					0.6917786472619488492228198283114910358867e237,
					0.9615723196941089004197195613529725398826e239,
					0.1346201247571752460587607385894161555836e242,
					0.1898143759076170969428526414110767793728e244,
					0.2695364137888162776588507508037290267094e246,
					0.3854370717180072770521565736493325081944e248,
					0.5550293832739304789551054660550388118e250,
					0.80479260574719919448490292577980627711e252,
					0.1174997204390910823947958271638517164581e255,
					0.1727245890454638911203498659308620231933e257,
					0.2556323917872865588581178015776757943262e259,
					0.380892263763056972698595524350736933546e261,
					0.571338395644585459047893286526105400319e263,
					0.8627209774233240431623188626544191544816e265,
					0.1311335885683452545606724671234717114812e268,
					0.2006343905095682394778288746989117185662e270,
					0.308976961384735088795856467036324046592e272,
					0.4789142901463393876335775239063022722176e274,
					0.7471062926282894447083809372938315446595e276,
					0.1172956879426414428192158071551315525115e279,
					0.1853271869493734796543609753051078529682e281,
					0.2946702272495038326504339507351214862195e283,
					0.4714723635992061322406943211761943779512e285,
					0.7590705053947218729075178570936729485014e287,
					0.1229694218739449434110178928491750176572e290,
					0.2004401576545302577599591653441552787813e292,
					0.3287218585534296227263330311644146572013e294,
					0.5423910666131588774984495014212841843822e296,
					0.9003691705778437366474261723593317460744e298,
					0.1503616514864999040201201707840084015944e301,
					0.2526075744973198387538018869171341146786e303,
					0.4269068009004705274939251888899566538069e305,
					0.7257415615307998967396728211129263114717e307
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<double>::table_type sprout::math::detail::factorials<double>::table;
			template<>
			struct factorials<long double> {
			public:
				typedef long double type;
			public:
				SPROUT_STATIC_CONSTEXPR std::size_t limit = 170;
			public:
				typedef sprout::array<type, limit + 1> table_type;
			public:
				SPROUT_STATIC_CONSTEXPR table_type table = table_type{{
					1.0L,
					1.0L,
					2.0L,
					6.0L,
					24.0L,
					120.0L,
					720.0L,
					5040.0L,
					40320.0L,
					362880.0L,
					3628800.0L,
					39916800.0L,
					479001600.0L,
					6227020800.0L,
					87178291200.0L,
					1307674368000.0L,
					20922789888000.0L,
					355687428096000.0L,
					6402373705728000.0L,
					121645100408832000.0L,
					0.243290200817664e19L,
					0.5109094217170944e20L,
					0.112400072777760768e22L,
					0.2585201673888497664e23L,
					0.62044840173323943936e24L,
					0.15511210043330985984e26L,
					0.403291461126605635584e27L,
					0.10888869450418352160768e29L,
					0.304888344611713860501504e30L,
					0.8841761993739701954543616e31L,
					0.26525285981219105863630848e33L,
					0.822283865417792281772556288e34L,
					0.26313083693369353016721801216e36L,
					0.868331761881188649551819440128e37L,
					0.29523279903960414084761860964352e39L,
					0.103331479663861449296666513375232e41L,
					0.3719933267899012174679994481508352e42L,
					0.137637530912263450463159795815809024e44L,
					0.5230226174666011117600072241000742912e45L,
					0.203978820811974433586402817399028973568e47L,
					0.815915283247897734345611269596115894272e48L,
					0.3345252661316380710817006205344075166515e50L,
					0.1405006117752879898543142606244511569936e52L,
					0.6041526306337383563735513206851399750726e53L,
					0.265827157478844876804362581101461589032e55L,
					0.1196222208654801945619631614956577150644e57L,
					0.5502622159812088949850305428800254892962e58L,
					0.2586232415111681806429643551536119799692e60L,
					0.1241391559253607267086228904737337503852e62L,
					0.6082818640342675608722521633212953768876e63L,
					0.3041409320171337804361260816606476884438e65L,
					0.1551118753287382280224243016469303211063e67L,
					0.8065817517094387857166063685640376697529e68L,
					0.427488328406002556429801375338939964969e70L,
					0.2308436973392413804720927426830275810833e72L,
					0.1269640335365827592596510084756651695958e74L,
					0.7109985878048634518540456474637249497365e75L,
					0.4052691950487721675568060190543232213498e77L,
					0.2350561331282878571829474910515074683829e79L,
					0.1386831185456898357379390197203894063459e81L,
					0.8320987112741390144276341183223364380754e82L,
					0.507580213877224798800856812176625227226e84L,
					0.3146997326038793752565312235495076408801e86L,
					0.1982608315404440064116146708361898137545e88L,
					0.1268869321858841641034333893351614808029e90L,
					0.8247650592082470666723170306785496252186e91L,
					0.5443449390774430640037292402478427526443e93L,
					0.3647111091818868528824985909660546442717e95L,
					0.2480035542436830599600990418569171581047e97L,
					0.1711224524281413113724683388812728390923e99L,
					0.1197857166996989179607278372168909873646e101L,
					0.8504785885678623175211676442399260102886e102L,
					0.6123445837688608686152407038527467274078e104L,
					0.4470115461512684340891257138125051110077e106L,
					0.3307885441519386412259530282212537821457e108L,
					0.2480914081139539809194647711659403366093e110L,
					0.188549470166605025498793226086114655823e112L,
					0.1451830920282858696340707840863082849837e114L,
					0.1132428117820629783145752115873204622873e116L,
					0.8946182130782975286851441715398316520698e117L,
					0.7156945704626380229481153372318653216558e119L,
					0.5797126020747367985879734231578109105412e121L,
					0.4753643337012841748421382069894049466438e123L,
					0.3945523969720658651189747118012061057144e125L,
					0.3314240134565353266999387579130131288001e127L,
					0.2817104114380550276949479442260611594801e129L,
					0.2422709538367273238176552320344125971528e131L,
					0.210775729837952771721360051869938959523e133L,
					0.1854826422573984391147968456455462843802e135L,
					0.1650795516090846108121691926245361930984e137L,
					0.1485715964481761497309522733620825737886e139L,
					0.1352001527678402962551665687594951421476e141L,
					0.1243841405464130725547532432587355307758e143L,
					0.1156772507081641574759205162306240436215e145L,
					0.1087366156656743080273652852567866010042e147L,
					0.103299784882390592625997020993947270954e149L,
					0.9916779348709496892095714015418938011582e150L,
					0.9619275968248211985332842594956369871234e152L,
					0.942689044888324774562618574305724247381e154L,
					0.9332621544394415268169923885626670049072e156L,
					0.9332621544394415268169923885626670049072e158L,
					0.9425947759838359420851623124482936749562e160L,
					0.9614466715035126609268655586972595484554e162L,
					0.990290071648618040754671525458177334909e164L,
					0.1029901674514562762384858386476504428305e167L,
					0.1081396758240290900504101305800329649721e169L,
					0.1146280563734708354534347384148349428704e171L,
					0.1226520203196137939351751701038733888713e173L,
					0.132464181945182897449989183712183259981e175L,
					0.1443859583202493582204882102462797533793e177L,
					0.1588245541522742940425370312709077287172e179L,
					0.1762952551090244663872161047107075788761e181L,
					0.1974506857221074023536820372759924883413e183L,
					0.2231192748659813646596607021218715118256e185L,
					0.2543559733472187557120132004189335234812e187L,
					0.2925093693493015690688151804817735520034e189L,
					0.339310868445189820119825609358857320324e191L,
					0.396993716080872089540195962949863064779e193L,
					0.4684525849754290656574312362808384164393e195L,
					0.5574585761207605881323431711741977155627e197L,
					0.6689502913449127057588118054090372586753e199L,
					0.8094298525273443739681622845449350829971e201L,
					0.9875044200833601362411579871448208012564e203L,
					0.1214630436702532967576624324188129585545e206L,
					0.1506141741511140879795014161993280686076e208L,
					0.1882677176888926099743767702491600857595e210L,
					0.237217324288004688567714730513941708057e212L,
					0.3012660018457659544809977077527059692324e214L,
					0.3856204823625804217356770659234636406175e216L,
					0.4974504222477287440390234150412680963966e218L,
					0.6466855489220473672507304395536485253155e220L,
					0.8471580690878820510984568758152795681634e222L,
					0.1118248651196004307449963076076169029976e225L,
					0.1487270706090685728908450891181304809868e227L,
					0.1992942746161518876737324194182948445223e229L,
					0.269047270731805048359538766214698040105e231L,
					0.3659042881952548657689727220519893345429e233L,
					0.5012888748274991661034926292112253883237e235L,
					0.6917786472619488492228198283114910358867e237L,
					0.9615723196941089004197195613529725398826e239L,
					0.1346201247571752460587607385894161555836e242L,
					0.1898143759076170969428526414110767793728e244L,
					0.2695364137888162776588507508037290267094e246L,
					0.3854370717180072770521565736493325081944e248L,
					0.5550293832739304789551054660550388118e250L,
					0.80479260574719919448490292577980627711e252L,
					0.1174997204390910823947958271638517164581e255L,
					0.1727245890454638911203498659308620231933e257L,
					0.2556323917872865588581178015776757943262e259L,
					0.380892263763056972698595524350736933546e261L,
					0.571338395644585459047893286526105400319e263L,
					0.8627209774233240431623188626544191544816e265L,
					0.1311335885683452545606724671234717114812e268L,
					0.2006343905095682394778288746989117185662e270L,
					0.308976961384735088795856467036324046592e272L,
					0.4789142901463393876335775239063022722176e274L,
					0.7471062926282894447083809372938315446595e276L,
					0.1172956879426414428192158071551315525115e279L,
					0.1853271869493734796543609753051078529682e281L,
					0.2946702272495038326504339507351214862195e283L,
					0.4714723635992061322406943211761943779512e285L,
					0.7590705053947218729075178570936729485014e287L,
					0.1229694218739449434110178928491750176572e290L,
					0.2004401576545302577599591653441552787813e292L,
					0.3287218585534296227263330311644146572013e294L,
					0.5423910666131588774984495014212841843822e296L,
					0.9003691705778437366474261723593317460744e298L,
					0.1503616514864999040201201707840084015944e301L,
					0.2526075744973198387538018869171341146786e303L,
					0.4269068009004705274939251888899566538069e305L,
					0.7257415615307998967396728211129263114717e307L
				}};
			};
			SPROUT_CONSTEXPR typename sprout::math::detail::factorials<long double>::table_type sprout::math::detail::factorials<long double>::table;
		}	// namespace detail
		//
		// factorial
		//
		template<typename T>
		SPROUT_CONSTEXPR T factorial(std::size_t x) {
			return x <= sprout::math::detail::factorials<T>::limit
				? sprout::math::detail::factorials<T>::table[x]
				: throw std::invalid_argument("factorial(): argument limit exceeded")
				;
		}
	}	// namespace math

	using sprout::math::factorial;
}	// namespace sprout

#endif	// #ifndef SPROUT_MATH_FACTORIAL_HPP

