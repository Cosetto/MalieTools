#pragma once

// pre-computed
static const unsigned long KEY_COUNT = 20;
static const unsigned long KEYS[KEY_COUNT][56] = {
	// Dies irae
	{ 0x6F388B64, 0xBB5B3676, 0x2317DD18, 0x7CCD3736,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
	  0x9B9B379C, 0x45B25DAD, 0x9B3B118B, 0xEE8C3E66,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,

	  0xFBA30F99, 0xA6E6CDE7, 0x116C976B, 0x66CEC462,
	  0x88C5F746, 0x1F334DCD, 0x00000000, 0x00000000,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
	  0x9B3B118B, 0xEE8C3E66, 0x9B9B379C, 0x45B25DAD,
	  0xBB5B3676, 0x2317DD18, 0x7CCD3736, 0x6F388B64,

	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
	  0x16C976B6, 0x6CEC462F, 0xBA30F99A, 0x6E6CDE71,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000,
	  0x00000000, 0x00000000, 0x00000000, 0x00000000 },
	  // さかしき人にみるこころ
	  { 0x62C0A28C, 0x16D7E2CB, 0xDDD7A527, 0xDAEF18BB,
		0x06860181, 0x00800383, 0x02820585, 0x04840787,
		0x8C5DB160, 0x51460B6B, 0xF165EEEB, 0xD293ED77,
		0x03C38343, 0x00C08040, 0x01C18141, 0x02C28242,
		0x412101E1, 0xC1A18060, 0x402000E0, 0xC0A08161,

		0xF4A4FB5D, 0xE3176C58, 0x145182DA, 0xFC597BBA,
		0xF775E949, 0xF6BBC62E, 0xC0302010, 0x00706050,
		0xC0A08161, 0x412101E1, 0xC1A18060, 0x402000E0,
		0xF165EEEB, 0xD293ED77, 0x8C5DB160, 0x51460B6B,
		0x16D7E2CB, 0xDDD7A527, 0xDAEF18BB, 0x62C0A28C,

		0x00800383, 0x02820585, 0x04840787, 0x06860181,
		0x45182DAF, 0xC597BBAF, 0x4A4FB5DE, 0x3176C581,
		0x03020100, 0x07060504, 0x0B0A0908, 0x0F0E0D0C,
		0x00000000, 0x00000000, 0x00000000, 0x00000000 },
		// あるす☆まぐな！−ARS：MAGNA−
		{ 0xA486D040, 0x2B74C103, 0xB34CF566, 0xD8B03018,
		  0xAC252A1B, 0x3AB53338, 0x9CB3AB29, 0x3C28B1AB,
		  0x180C5243, 0x682015BA, 0x6081D9A6, 0x7AB36C58,
		  0x58D5D612, 0x950D9D5A, 0x999C4E59, 0xD5949E14,
		  0x4F0A2C6A, 0xEB094A86, 0xCEAD4CCE, 0x272CEACA,
		  0x9EACDB16, 0x06031490, 0xDA08056E, 0x98207669,
		  0xECD33D59, 0xB62C0C06, 0xA5436756, 0xA6671396,
		  0x272CEACA, 0x4F0A2C6A, 0xEB094A86, 0xCEAD4CCE,
		  0x6081D9A6, 0x7AB36C58, 0x180C5243, 0x682015BA,
		  0x2B74C103, 0xB34CF566, 0xD8B03018, 0xA486D040,
		  0x3AB53338, 0x9CB3AB29, 0x3C28B1AB, 0xAC252A1B,
		  0xA08056E9, 0x82076699, 0xEACDB160, 0x6031490D,
		  0x5436756A, 0x66713967, 0x56527851, 0x6357584A,
		  0x00000000, 0x00000000, 0x00000000, 0x00000000 },
		  // タペストリー tapestry -you will meet yourself-
		  { 0x3D78DDFF, 0x6C883688, 0x75C4BBCA, 0xAD413C13,
			0xA62428A6, 0x9B1ABB37, 0x23BAA125, 0xB7B1A32A,
			0x9E099EBC, 0x6EFFB644, 0x1B443AE2, 0x5DE556A0,
			0xD1955312, 0x14534D8D, 0x5D9B91DD, 0x5092DBD8,
			0x6DEC68CA, 0xA9890A29, 0xA6C6AECD, 0xC8EEA849,
			0x977955A8, 0x278267AF, 0x1BBFED91, 0x06D10EB8,
			0x1D712EF2, 0xAB504F04, 0x8514D363, 0x5766E477,
			0xC8EEA849, 0x6DEC68CA, 0xA9890A29, 0xA6C6AECD,
			0x1B443AE2, 0x5DE556A0, 0x9E099EBC, 0x6EFFB644,
			0x6C883688, 0x75C4BBCA, 0xAD413C13, 0x3D78DDFF,
			0x9B1ABB37, 0x23BAA125, 0xB7B1A32A, 0xA62428A6,
			0xBBFED910, 0x6D10EB89, 0x77955A82, 0x78267AF1,
			0x514D3635, 0x766E4775, 0x424B6F63, 0x46554C48,
			0x00000000, 0x00000000, 0x00000000, 0x00000000 },
			// どんちゃんがきゅ〜
			{ 0x8A771B7A, 0x60CE2824, 0x7705206A, 0x4E5F1F4C,
			  0xB4A338B1, 0xA3B13628, 0xA9A2B22C, 0x3AB730A6,
			  0x8FA6453B, 0x8DBD3067, 0x14123B82, 0x9035272F,
			  0x98535A51, 0x9C58D1D8, 0x9B1454D1, 0x59161D5B,
			  0x0EADCC29, 0xAD28CE2C, 0x68EC4D8A, 0x2A68AC8B,
			  0xA40D49CB, 0xE3E9914E, 0xE36F4C19, 0xC5048EE0,
			  0x1DC1481A, 0x9397C7D3, 0x67163476, 0x26C51534,
			  0x2A68AC8B, 0x0EADCC29, 0xAD28CE2C, 0x68EC4D8A,
			  0x14123B82, 0x9035272F, 0x8FA6453B, 0x8DBD3067,
			  0x60CE2824, 0x7705206A, 0x4E5F1F4C, 0x8A771B7A,
			  0xA3B13628, 0xA9A2B22C, 0x3AB730A6, 0xB4A338B1,
			  0x36F4C19C, 0x5048EE0A, 0x40D49CBE, 0x3E9914EE,
			  0x71634762, 0x6C515345, 0x6458756E, 0x614D6946,
			  0x00000000, 0x00000000, 0x00000000, 0x00000000 },
			  // Dies irae Also sprach Zarathustra -die Wiederkunft-
			  { 0x6F388B64, 0xBB5B3676, 0x2317DD18, 0x7CCD3736,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0x9B9B379C, 0x45B25DAD, 0x9B3B118B, 0xEE8C3E66,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0xFBA30F99, 0xA6E6CDE7, 0x116C976B, 0x66CEC462,
				0x88C5F746, 0x1F334DCD, 0x00000000, 0x00000000,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0x9B3B118B, 0xEE8C3E66, 0x9B9B379C, 0x45B25DAD,
				0xBB5B3676, 0x2317DD18, 0x7CCD3736, 0x6F388B64,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0x16C976B6, 0x6CEC462F, 0xBA30F99A, 0x6E6CDE71,
				0x00000000, 0x00000000, 0x00000000, 0x00000000,
				0x00000000, 0x00000000, 0x00000000, 0x00000000 },
				// Soranica Ele−ソラニカ エレ−
				{ 0xF733B00A, 0x624E7A7B, 0x1F55713F, 0xA95D016E,
				  0x9DBA2EA6, 0x2FA437BA, 0xB33BBEA2, 0x2A3DAA96,
				  0x80B77B99, 0xD8053127, 0x3D3D8FAA, 0xB89FD4AE,
				  0xD54B4EDD, 0x175317D2, 0x1BDD599D, 0xDF51151E,
				  0x8A8F6AA5, 0xA76E8BA9, 0x8BE90DEE, 0xACCEEFA8,
				  0xAE27F52B, 0xA02DDEE6, 0x76014C49, 0xCF4F63EA,
				  0xC7D55C4F, 0xEA57405B, 0x45D4C5F4, 0x86F75667,
				  0xACCEEFA8, 0x8A8F6AA5, 0xA76E8BA9, 0x8BE90DEE,
				  0x3D3D8FAA, 0xB89FD4AE, 0x80B77B99, 0xD8053127,
				  0x624E7A7B, 0x1F55713F, 0xA95D016E, 0xF733B00A,
				  0x2FA437BA, 0xB33BBEA2, 0x2A3DAA96, 0x9DBA2EA6,
				  0x6014C49C, 0xF4F63EAA, 0xE27F52BA, 0x02DDEE67,
				  0x5D4C5F48, 0x6F756677, 0x7D44547B, 0x552D3B74,
				  0x00000000, 0x00000000, 0x00000000, 0x00000000 },
				  // まじのコンプレックス DL版
				  { 0x203664F2, 0x1FC80284, 0x30155435, 0x88AC5FD5,
					0x1A93303A, 0xD25E4DE8, 0x97C1A46D, 0x3C80837E,
					0x2FEA901B, 0x32790FE4, 0x0142180A, 0xAA1AC456,
					0x41BF0D49, 0x981D692F, 0x26F44BE0, 0xD2369E40,
					0x4F2020DF, 0x86A4CC0E, 0xB497937A, 0x25F0691B,
					0xAA86B115, 0x8BFAA406, 0xCC9E43F9, 0x00508602,
					0x0C05550D, 0x622B17F5, 0x66075A4B, 0xC9BD12F8,
					0x25F0691B, 0x4F2020DF, 0x86A4CC0E, 0xB497937A,
					0x0142180A, 0xAA1AC456, 0x2FEA901B, 0x32790FE4,
					0x1FC80284, 0x30155435, 0x88AC5FD5, 0x203664F2,
					0xD25E4DE8, 0x97C1A46D, 0x3C80837E, 0x1A93303A,
					0xC9E43F90, 0x0508602A, 0xA86B1158, 0xBFAA406C,
					0x6075A4BC, 0x9BD12F83, 0x48DA7901, 0x06FC3526,
					0x00000000, 0x00000000, 0x00000000, 0x00000000, },
					// PARADISE LOST 新装版
					{ 0x745A5511, 0xFC188446, 0x6729696A, 0xB7C80D5E,
					  0x9AA598A4, 0xB8331AAC, 0xBD2B2BA7, 0x28A3BC2C,
					  0x06AF3A2D, 0x2A88FE0C, 0x42233394, 0xB4B55BE4,
					  0xDE164D52, 0xCC525C19, 0x8D565E95, 0x95D39451,
					  0xCA28EF0B, 0x26A96629, 0x2E0CC6AB, 0x2F4ACAE9,
					  0x2D2D56F9, 0x01ABCE8B, 0x4AA23F83, 0x1088CCE5,
					  0x99CA5A5A, 0xADF20357, 0xB3149706, 0x635597A5,
					  0x2F4ACAE9, 0xCA28EF0B, 0x26A96629, 0x2E0CC6AB,
					  0x42233394, 0xB4B55BE4, 0x06AF3A2D, 0x2A88FE0C,
					  0xFC188446, 0x6729696A, 0xB7C80D5E, 0x745A5511,
					  0xB8331AAC, 0xBD2B2BA7, 0x28A3BC2C, 0x9AA598A4,
					  0xAA23F831, 0x088CCE52, 0xD2D56F90, 0x1ABCE8B4,
					  0x31497066, 0x35597A56, 0x574E5147, 0x7859354B,
					  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
					  // 	神咒神威神楽 超先行 体験版
					  { 0x146EB6BB, 0xED25AA5F, 0x289548E2, 0x097772BB,
						0xBAABAC37, 0xB3A93919, 0x2335262B, 0x983BB0A0,
						0xB95D8A37, 0x5B5DF692, 0xD52F944A, 0xA47104BB,
						0xD8505D55, 0xD61BD9D4, 0x9C8C919A, 0x9315CC1D,
						0xE60EEC28, 0x2EAAEB0D, 0xECEA4E46, 0x48CD498A,
						0xA91C412E, 0xEE57628D, 0xD6D77DA4, 0xB54BE512,
						0xCA255238, 0x825DDCAE, 0x7586F675, 0x27232466,
						0x48CD498A, 0xE60EEC28, 0x2EAAEB0D, 0xECEA4E46,
						0xD52F944A, 0xA47104BB, 0xB95D8A37, 0x5B5DF692,
						0xED25AA5F, 0x289548E2, 0x097772BB, 0x146EB6BB,
						0xB3A93919, 0x2335262B, 0x983BB0A0, 0xBAABAC37,
						0x6D77DA4B, 0x54BE512A, 0x91C412EE, 0xE57628DD,
						0x586F6752, 0x7232466A, 0x4C573077, 0x61417557,
						0x00000000, 0x00000000, 0x00000000, 0x00000000, },
						// Vermilion -Bind of Blood-
						{ 0x79777A52, 0x2599BEF7, 0x8C70A73E, 0xAD058A9B,
						  0xB295AD17, 0x98BBB8BB, 0x30AC1DA2, 0xB6B52014,
						  0xC54DBCBB, 0xBD2912CC, 0xDF7BC638, 0x539F5682,
						  0x900A594A, 0xD68BCC5D, 0xDC5D9856, 0x0ED15B5A,
						  0xADAD4805, 0x2CA56B45, 0xE62EEE2E, 0xCC2B0768,
						  0x14E7D5A0, 0xB1536F2E, 0xEF4A44B3, 0x37DEF18E,
						  0xE31C29CF, 0xAB4162A6, 0xB5A2F317, 0x77176615,
						  0xCC2B0768, 0xADAD4805, 0x2CA56B45, 0xE62EEE2E,
						  0xDF7BC638, 0x539F5682, 0xC54DBCBB, 0xBD2912CC,
						  0x2599BEF7, 0x8C70A73E, 0xAD058A9B, 0x79777A52,
						  0x98BBB8BB, 0x30AC1DA2, 0xB6B52014, 0xB295AD17,
						  0xF4A44B33, 0x7DEF18E1, 0x4E7D5A0B, 0x1536F2EE,
						  0x5A2F3177, 0x71766158, 0x3B456D6A, 0x4029652B,
						  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
						  // オメルタ〜沈黙の掟〜
						  { 0x4E7821AE, 0xA80DC2D4, 0x8609511B, 0xF13BF262,
							0x2EAD1925, 0x22AB3F33, 0x21AE9614, 0xB5BB16A6,
							0xF931273C, 0x10D75406, 0xE16A4304, 0xA88DF89D,
							0x8B531756, 0x8C929155, 0x9F9990D7, 0x4B0A5ADD,
							0x2D6EC5A9, 0x8BAB4649, 0x48AACFCC, 0xC86BA585,
							0x2A237E27, 0x7E4C49CF, 0x0435D501, 0xB85A90C1,
							0x21825446, 0xFC4EFC98, 0xA324A455, 0x67E66435,
							0xC86BA585, 0x2D6EC5A9, 0x8BAB4649, 0x48AACFCC,
							0xE16A4304, 0xA88DF89D, 0xF931273C, 0x10D75406,
							0xA80DC2D4, 0x8609511B, 0xF13BF262, 0x4E7821AE,
							0x22AB3F33, 0x21AE9614, 0xB5BB16A6, 0x2EAD1925,
							0x435D501B, 0x85A90C12, 0xA237E277, 0xE4C49CF0,
							0x324A4556, 0x7E66435D, 0x2C296B76, 0x2D4C5D5A,
							0x00000000, 0x00000000, 0x00000000, 0x00000000, },
							// 神咒神威神楽
							{ 0x32E790E9, 0xC9042AC3, 0x04FC3003, 0x973E1BD0,
							  0x3E9FBDB8, 0x17372CA2, 0x3CA73523, 0x3417A220,
							  0x0DE81973, 0xC874E482, 0x1561827E, 0x1801CB9F,
							  0xD1101F4F, 0xDEDC0B9B, 0x96511E53, 0x9A919A0B,
							  0xCD05E888, 0x0FA7EF6E, 0x05CDCB28, 0x8F29CD48,
							  0x860072E7, 0xC37A065C, 0xF21D3920, 0x8558609F,
							  0xC13F0C00, 0xE5CF86F4, 0xF7B702E6, 0xE5944794,
							  0x8F29CD48, 0xCD05E888, 0x0FA7EF6E, 0x05CDCB28,
							  0x1561827E, 0x1801CB9F, 0x0DE81973, 0xC874E482,
							  0xC9042AC3, 0x04FC3003, 0x973E1BD0, 0x32E790E9,
							  0x17372CA2, 0x3CA73523, 0x3417A220, 0x3E9FBDB8,
							  0x21D39208, 0x558609F8, 0x60072E7C, 0x37A065CF,
							  0x7B702E6E, 0x5944794E, 0x6A46682F, 0x44407D3F,
							  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
							  // かみのゆ
							  { 0x4D632126, 0xD3108D6F, 0xB91E9781, 0x080D08F4,
								0x399835A5, 0x1B98A23B, 0x26AB9AA5, 0x3D34B536,
								0x847A26B1, 0x90936988, 0x46B7DC8F, 0x4BC08406,
								0x5A9B1CCC, 0x1AD28DCC, 0x511D9355, 0xCD529E9A,
								0x4F4D2D4D, 0x8E660D69, 0x46E6288E, 0xC9AAE6A9,
								0xD2F02101, 0xA11E89AC, 0x6424DA62, 0x11ADF723,
								0xEE47A5E0, 0x4203423D, 0x06B4A373, 0x144764D5,
								0xC9AAE6A9, 0x4F4D2D4D, 0x8E660D69, 0x46E6288E,
								0x46B7DC8F, 0x4BC08406, 0x847A26B1, 0x90936988,
								0xD3108D6F, 0xB91E9781, 0x080D08F4, 0x4D632126,
								0x1B98A23B, 0x26AB9AA5, 0x3D34B536, 0x399835A5,
								0x424DA621, 0x1ADF723D, 0x2F02101A, 0x11E89AC6,
								0x6B4A3731, 0x44764D57, 0x354A7A69, 0x6A6C7330,
								0x00000000, 0x00000000, 0x00000000, 0x00000000, },
								// Zero Infinity -Devil of Maxwell-
								{ 0x11331B5A, 0xCBCCC121, 0xD56421E8, 0x511390E9,
								  0x3CBA3338, 0xB638BC9C, 0xBA33B29C, 0x2119B0B6,
								  0xC8748899, 0x8DAD65E6, 0x6090EAB2, 0x10F42889,
								  0xD85B1E5D, 0x199C5B1C, 0x5E4E5D19, 0xD94E108C,
								  0x08466C2D, 0x8F2E8CCE, 0x2D8E2F27, 0x2E8CECA7,
								  0x843D0A22, 0x721D2226, 0x636B5979, 0x98243AAC,
								  0x7559087A, 0x1444E43A, 0x466716C7, 0x17939746,
								  0x2E8CECA7, 0x08466C2D, 0x8F2E8CCE, 0x2D8E2F27,
								  0x6090EAB2, 0x10F42889, 0xC8748899, 0x8DAD65E6,
								  0xCBCCC121, 0xD56421E8, 0x511390E9, 0x11331B5A,
								  0xB638BC9C, 0xBA33B29C, 0x2119B0B6, 0x3CBA3338,
								  0x36B59799, 0x8243AAC8, 0x43D0A227, 0x21D22266,
								  0x66716C71, 0x79397467, 0x65384233, 0x616C7974,
								  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
								  // しろのぴかぴかお星さま
								  { 0x5E8FC313, 0x7993ADCD, 0x8774A797, 0xE8620324,
									0xBA3837BB, 0x36321C32, 0x3B1A3AB8, 0xB9B730BB,
									0x01922F47, 0xE189BCC9, 0xD6E6C3BA, 0x53CBF431,
									0x985DDD1C, 0x1BDD9B19, 0x0E191D8D, 0x1D5C5CDB,
									0x2E6DCC2E, 0xEE8E0DEE, 0xCD8C870C, 0x8EC68EAE,
									0x94F2FD0C, 0x40648BD1, 0xF8626F32, 0x75B9B0EE,
									0x61DD29E5, 0xFA1880C9, 0x06F766C6, 0x43864763,
									0x8EC68EAE, 0x2E6DCC2E, 0xEE8E0DEE, 0xCD8C870C,
									0xD6E6C3BA, 0x53CBF431, 0x01922F47, 0xE189BCC9,
									0x7993ADCD, 0x8774A797, 0xE8620324, 0x5E8FC313,
									0x36321C32, 0x3B1A3AB8, 0xB9B730BB, 0xBA3837BB,
									0x8626F327, 0x5B9B0EE9, 0x4F2FD0C4, 0x0648BD1F,
									0x6F766C64, 0x38647634, 0x7571736E, 0x61777470,
									0x00000000, 0x00000000, 0x00000000, 0x00000000, },
									// 神咒神威神楽 曙之光 (v1)
									{ 0xDA871141, 0x258625F5, 0xA50F1488, 0x29DD9EAE,
									  0x17B81A3B, 0x1239B220, 0x3894359B, 0x1FBC1899,
									  0xCF576D43, 0x88A092C3, 0x12FAD287, 0x8A4414EE,
									  0x0C4C8BDC, 0x0D1D891C, 0xD9101C4A, 0x1ACD8FDE,
									  0xC7EF0626, 0x45EE068E, 0xC48E6C88, 0x0E250D66,
									  0xE291053B, 0xB3D5DB50, 0xE22824B0, 0xC4BEB4A1,
									  0x6943C522, 0x0A7767AB, 0x03476247, 0x36440712,
									  0x0E250D66, 0xC7EF0626, 0x45EE068E, 0xC48E6C88,
									  0x12FAD287, 0x8A4414EE, 0xCF576D43, 0x88A092C3,
									  0x258625F5, 0xA50F1488, 0x29DD9EAE, 0xDA871141,
									  0x1239B220, 0x3894359B, 0x1FBC1899, 0x17B81A3B,
									  0x22824B0C, 0x4BEB4A1E, 0x291053BB, 0x3D5DB50E,
									  0x34762473, 0x64407128, 0x6B363F78, 0x31322F70,
									  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
									  // BRAVA!! (v2)
									  { 0xD661046B, 0x4D19B61A, 0x633552FB, 0xD9CA9A6E,
										0x18B69935, 0x3A30B7BB, 0x313320B5, 0x34B49CB3,
										0x4D376B30, 0x8235A68C, 0xDB0D319A, 0xA97DECE5,
										0x4E598C5B, 0x4C9A9D18, 0x5BDD9899, 0x905A9A5A,
										0x4D2D272C, 0xC62DA64D, 0x4E8C2DEE, 0xCC4CC82D,
										0xAA5F7B39, 0x534DDACC, 0x208D69A3, 0x36C34C66,
										0x98CD54BE, 0xF672A69B, 0xD326A746, 0x16F76626,
										0xCC4CC82D, 0x4D2D272C, 0xC62DA64D, 0x4E8C2DEE,
										0xDB0D319A, 0xA97DECE5, 0x4D376B30, 0x8235A68C,
										0x4D19B61A, 0x633552FB, 0xD9CA9A6E, 0xD661046B,
										0x3A30B7BB, 0x313320B5, 0x34B49CB3, 0x18B69935,
										0x08D69A33, 0x6C34C66A, 0xA5F7B395, 0x34DDACC2,
										0x326A7461, 0x6F766266, 0x416A6969, 0x3966316D,
										0x00000000, 0x00000000, 0x00000000, 0x00000000, },
										// Electro Arms -Realize Digital Dimension- (v2)
										{ 0xB4A3F581, 0xADCED465, 0x8869EBBB, 0xF908A308,
										  0xB99B1A32, 0xA231319C, 0xBB9C2299, 0x99312133,
										  0x51845A51, 0xFAC0D6E7, 0x6A32C434, 0xF5DDFC84,
										  0x9099DCCD, 0x8D195118, 0x98CE5DCE, 0x114CCC98,
										  0x664C484C, 0xEE66C68C, 0xA88C4C67, 0x2EE708A6,
										  0x3D777F21, 0x14611694, 0x7EB035B9, 0xDA8CB10D,
										  0x621A7AEE, 0xFE4228C2, 0x63465446, 0x26339773,
										  0x2EE708A6, 0x664C484C, 0xEE66C68C, 0xA88C4C67,
										  0x6A32C434, 0xF5DDFC84, 0x51845A51, 0xFAC0D6E7,
										  0xADCED465, 0x8869EBBB, 0xF908A308, 0xB4A3F581,
										  0xA231319C, 0xBB9C2299, 0x99312133, 0xB99B1A32,
										  0xEB035B9D, 0xA8CB10D3, 0xD777F211, 0x46116947,
										  0x34654462, 0x63397738, 0x45333262, 0x42677336,
										  0x00000000, 0x00000000, 0x00000000, 0x00000000, },
										  // 相州戦神館學園 八命陣 (v2)
										  { 0x5C68292E, 0x77966CFC, 0x8FCB8DCC, 0xE2F8FE93,
											0x9CB09BB9, 0x19B4A133, 0xB695BD19, 0x1B10B8BC,
											0x7F49AE34, 0x14973BCB, 0x367E47E5, 0xC6E6717C,
											0x5C5E4E58, 0x4DDC8CDA, 0x5099DB4A, 0xDE8C8D88,
											0x46C42E2F, 0x272C26EE, 0x466D284C, 0xEDA56F46,
											0x71B99C5F, 0x1FD26B8D, 0x0525CEF2, 0xCD9F91F9,
											0x23F2E373, 0x38BE3FA4, 0x13772336, 0x942676D2,
											0xEDA56F46, 0x46C42E2F, 0x272C26EE, 0x466D284C,
											0x367E47E5, 0xC6E6717C, 0x7F49AE34, 0x14973BCB,
											0x77966CFC, 0x8FCB8DCC, 0xE2F8FE93, 0x5C68292E,
											0x19B4A133, 0xB695BD19, 0x1B10B8BC, 0x9CB09BB9,
											0x525CEF2C, 0xD9F91F97, 0x1B99C5F1, 0xFD26B8D0,
											0x37723369, 0x42676D2B, 0x7A323621, 0x71793961,
											0x00000000, 0x00000000, 0x00000000, 0x00000000, },
};