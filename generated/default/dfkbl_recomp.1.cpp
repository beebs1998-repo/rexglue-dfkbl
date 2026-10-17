#include "dfkbl_funcs.1.h"

DEFINE_REX_FUNC(sub_820900D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82091438
	ctx.lr = 0x820900F4;
	sub_82091438(ctx, base);
	// stw r30,2308(r31)
	REX_STORE_U32(ctx.r31.u32 + 2308, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8209f730
	ctx.lr = 0x82090104;
	sub_8209F730(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,2308(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2308);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r30,2319(r31)
	REX_STORE_U8(ctx.r31.u32 + 2319, ctx.r30.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r30,2318(r31)
	REX_STORE_U8(ctx.r31.u32 + 2318, ctx.r30.u8);
	// stb r30,2317(r31)
	REX_STORE_U8(ctx.r31.u32 + 2317, ctx.r30.u8);
	// stb r30,2316(r31)
	REX_STORE_U8(ctx.r31.u32 + 2316, ctx.r30.u8);
	// stb r30,2323(r31)
	REX_STORE_U8(ctx.r31.u32 + 2323, ctx.r30.u8);
	// stb r30,2322(r31)
	REX_STORE_U8(ctx.r31.u32 + 2322, ctx.r30.u8);
	// stb r30,2321(r31)
	REX_STORE_U8(ctx.r31.u32 + 2321, ctx.r30.u8);
	// stb r30,2320(r31)
	REX_STORE_U8(ctx.r31.u32 + 2320, ctx.r30.u8);
	// stb r30,2327(r31)
	REX_STORE_U8(ctx.r31.u32 + 2327, ctx.r30.u8);
	// stb r30,2326(r31)
	REX_STORE_U8(ctx.r31.u32 + 2326, ctx.r30.u8);
	// stb r30,2325(r31)
	REX_STORE_U8(ctx.r31.u32 + 2325, ctx.r30.u8);
	// stb r30,2324(r31)
	REX_STORE_U8(ctx.r31.u32 + 2324, ctx.r30.u8);
	// stw r30,2312(r31)
	REX_STORE_U32(ctx.r31.u32 + 2312, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82090158;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r30,2307(r31)
	REX_STORE_U8(ctx.r31.u32 + 2307, ctx.r30.u8);
	// stb r30,2306(r31)
	REX_STORE_U8(ctx.r31.u32 + 2306, ctx.r30.u8);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// stb r30,2305(r31)
	REX_STORE_U8(ctx.r31.u32 + 2305, ctx.r30.u8);
	// stb r30,2304(r31)
	REX_STORE_U8(ctx.r31.u32 + 2304, ctx.r30.u8);
	// addi r3,r9,3268
	ctx.r3.s64 = ctx.r9.s64 + 3268;
	// bl 0x82374f34
	ctx.lr = 0x82090174;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r30,2280(r31)
	REX_STORE_U32(ctx.r31.u32 + 2280, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,2284(r31)
	REX_STORE_U32(ctx.r31.u32 + 2284, ctx.r30.u32);
	// lfd f0,1792(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 1792);
	// stfd f0,2264(r31)
	REX_STORE_U64(ctx.r31.u32 + 2264, ctx.f0.u64);
	// stfd f0,2272(r31)
	REX_STORE_U64(ctx.r31.u32 + 2272, ctx.f0.u64);
	// stfd f0,2288(r31)
	REX_STORE_U64(ctx.r31.u32 + 2288, ctx.f0.u64);
	// stfd f0,2296(r31)
	REX_STORE_U64(ctx.r31.u32 + 2296, ctx.f0.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094B58) {
	REX_FUNC_PROLOGUE();
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r11,r11,5544
	ctx.r11.u64 = ctx.r11.u64 | 5544;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094D68) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,238
	ctx.r3.s64 = ctx.r3.s64 + 15597568;
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// b 0x820b7148
	sub_820B7148(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095408) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// b 0x820b2dc8
	sub_820B2DC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095640) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// b 0x820b3420
	sub_820B3420(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095A40) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8c48
	sub_820A8C48(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095D00) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8dc8
	sub_820A8DC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095E00) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82095e10
	if (ctx.cr6.eq) goto loc_82095E10;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82095E10:
	// stw r11,6476(r3)
	REX_STORE_U32(ctx.r3.u32 + 6476, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82096218) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209c110
	sub_8209C110(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096338) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209bc08
	sub_8209BC08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 2359296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r31,21888
	ctx.r31.s64 = ctx.r31.s64 + 21888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209be88
	ctx.lr = 0x82096590;
	sub_8209BE88(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820965a4
	if (ctx.cr6.eq) goto loc_820965A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209cb60
	ctx.lr = 0x820965A4;
	sub_8209CB60(ctx, base);
loc_820965A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209AA38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8209AA40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,6340(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 6340);
	// bl 0x82374c84
	ctx.lr = 0x8209AA5C;
	__imp__XNotifyGetNext(ctx, base);
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// li r26,1
	ctx.r26.s64 = 1;
	// ori r27,r11,4200
	ctx.r27.u64 = ctx.r11.u64 | 4200;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ad44
	if (ctx.cr6.eq) goto loc_8209AD44;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209ab54
	if (ctx.cr6.gt) goto loc_8209AB54;
	// beq cr6,0x8209ab2c
	if (ctx.cr6.eq) goto loc_8209AB2C;
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8209ad44
	if (ctx.cr6.gt) goto loc_8209AD44;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-21840
	ctx.r12.s64 = ctx.r12.s64 + -21840;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8209AAD8;
	case 1:
		goto loc_8209AAFC;
	case 2:
		goto loc_8209AB14;
	case 3:
		goto loc_8209AD44;
	case 4:
		goto loc_8209AD44;
	case 5:
		goto loc_8209AB0C;
	case 6:
		goto loc_8209AD44;
	case 7:
		goto loc_8209AD44;
	case 8:
		goto loc_8209AB24;
	case 9:
		goto loc_8209AAEC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8209AAD8:
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// bl 0x820a8be0
	ctx.lr = 0x8209AAE8;
	sub_820A8BE0(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AAEC:
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// bl 0x820a8be8
	ctx.lr = 0x8209AAF8;
	sub_820A8BE8(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AAFC:
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820b7960
	ctx.lr = 0x8209AB08;
	sub_820B7960(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB0C:
	// stw r26,6436(r31)
	REX_STORE_U32(ctx.r31.u32 + 6436, ctx.r26.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB14:
	// addis r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// bl 0x8209bb60
	ctx.lr = 0x8209AB20;
	sub_8209BB60(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB24:
	// stw r26,6444(r31)
	REX_STORE_U32(ctx.r31.u32 + 6444, ctx.r26.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB2C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addis r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -1376256;
	// addic. r11,r11,-4336
	ctx.xer.ca = ctx.r11.u32 > 4335;
	ctx.r11.s64 = ctx.r11.s64 + -4336;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8209ab4c
	if (ctx.cr0.eq) goto loc_8209AB4C;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8209ad44
	if (!ctx.cr6.eq) goto loc_8209AD44;
	// stw r25,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r25.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB4C:
	// stw r26,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r26.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB54:
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8209ace0
	if (ctx.cr6.gt) goto loc_8209ACE0;
	// beq cr6,0x8209acd8
	if (ctx.cr6.eq) goto loc_8209ACD8;
	// addis r11,r11,-512
	ctx.r11.s64 = ctx.r11.s64 + -33554432;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8209ab90
	if (ctx.cr0.eq) goto loc_8209AB90;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8209ad44
	if (!ctx.cr6.eq) goto loc_8209AD44;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// stw r11,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r11.u32);
	// bl 0x820b71c0
	ctx.lr = 0x8209AB8C;
	sub_820B71C0(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AB90:
	// addi r28,r31,6344
	ctx.r28.s64 = ctx.r31.s64 + 6344;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820e4a30
	ctx.lr = 0x8209ABA0;
	sub_820E4A30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209abc0
	if (ctx.cr6.eq) goto loc_8209ABC0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r4,r11,2340
	ctx.r4.s64 = ctx.r11.s64 + 2340;
	// addi r3,r3,5048
	ctx.r3.s64 = ctx.r3.s64 + 5048;
	// bl 0x82113c30
	ctx.lr = 0x8209ABBC;
	sub_82113C30(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209ABC0:
	// lis r11,17242
	ctx.r11.s64 = 1129971712;
	// lwz r5,6360(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 6360);
	// ori r10,r11,2015
	ctx.r10.u64 = ctx.r11.u64 | 2015;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8209abec
	if (ctx.cr6.eq) goto loc_8209ABEC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// addi r4,r11,2292
	ctx.r4.s64 = ctx.r11.s64 + 2292;
	// addi r3,r3,5048
	ctx.r3.s64 = ctx.r3.s64 + 5048;
	// bl 0x82113c30
	ctx.lr = 0x8209ABE8;
	sub_82113C30(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209ABEC:
	// add r30,r31,r27
	ctx.r30.u64 = ctx.r31.u64 + ctx.r27.u64;
	// ld r4,6352(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 6352);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b74e8
	ctx.lr = 0x8209ABFC;
	sub_820B74E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209ad44
	if (!ctx.cr6.eq) goto loc_8209AD44;
	// addis r29,r31,24
	ctx.r29.s64 = ctx.r31.s64 + 1572864;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r29,r29,-7528
	ctx.r29.s64 = ctx.r29.s64 + -7528;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a8b68
	ctx.lr = 0x8209AC18;
	sub_820A8B68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8209ac28
	if (ctx.cr6.eq) goto loc_8209AC28;
	// stw r26,6432(r31)
	REX_STORE_U32(ctx.r31.u32 + 6432, ctx.r26.u32);
	// b 0x8209ac2c
	goto loc_8209AC2C;
loc_8209AC28:
	// stw r25,6432(r31)
	REX_STORE_U32(ctx.r31.u32 + 6432, ctx.r25.u32);
loc_8209AC2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7318
	ctx.lr = 0x8209AC34;
	sub_820B7318(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ac6c
	if (ctx.cr6.eq) goto loc_8209AC6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7130
	ctx.lr = 0x8209AC44;
	sub_820B7130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209ac6c
	if (ctx.cr6.eq) goto loc_8209AC6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b7430
	ctx.lr = 0x8209AC54;
	sub_820B7430(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// bne cr6,0x8209ac6c
	if (!ctx.cr6.eq) goto loc_8209AC6C;
	// bl 0x82092018
	ctx.lr = 0x8209AC64;
	sub_82092018(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8209acd0
	if (!ctx.cr6.eq) goto loc_8209ACD0;
loc_8209AC6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094de0
	ctx.lr = 0x8209AC74;
	sub_82094DE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a8b78
	ctx.lr = 0x8209AC7C;
	sub_820A8B78(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82097838
	ctx.lr = 0x8209AC84;
	sub_82097838(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r28.u32 + 0);
	// bl 0x820b7488
	ctx.lr = 0x8209AC90;
	sub_820B7488(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a8b48
	ctx.lr = 0x8209ACA4;
	sub_820A8B48(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82094c28
	ctx.lr = 0x8209ACB0;
	sub_82094C28(ctx, base);
	// addis r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 2359296;
	// addi r30,r30,21888
	ctx.r30.s64 = ctx.r30.s64 + 21888;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209e0b0
	ctx.lr = 0x8209ACC0;
	sub_8209E0B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209e570
	ctx.lr = 0x8209ACC8;
	sub_8209E570(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8209bc18
	ctx.lr = 0x8209ACD0;
	sub_8209BC18(ctx, base);
loc_8209ACD0:
	// stw r26,6428(r31)
	REX_STORE_U32(ctx.r31.u32 + 6428, ctx.r26.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209ACD8:
	// stw r26,6272(r31)
	REX_STORE_U32(ctx.r31.u32 + 6272, ctx.r26.u32);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209ACE0:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8209ad44
	if (ctx.cr6.lt) goto loc_8209AD44;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8209ad3c
	if (!ctx.cr6.gt) goto loc_8209AD3C;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8209ad44
	if (!ctx.cr6.eq) goto loc_8209AD44;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// bne cr6,0x8209ad30
	if (!ctx.cr6.eq) goto loc_8209AD30;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820b3480
	ctx.lr = 0x8209AD2C;
	sub_820B3480(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AD30:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820b3480
	ctx.lr = 0x8209AD38;
	sub_820B3480(ctx, base);
	// b 0x8209ad44
	goto loc_8209AD44;
loc_8209AD3C:
	// addi r3,r31,6536
	ctx.r3.s64 = ctx.r31.s64 + 6536;
	// bl 0x820ac930
	ctx.lr = 0x8209AD44;
	sub_820AC930(ctx, base);
loc_8209AD44:
	// bl 0x820e8b88
	ctx.lr = 0x8209AD48;
	sub_820E8B88(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// bl 0x820b7130
	ctx.lr = 0x8209AD54;
	sub_820B7130(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8209ad78
	if (!ctx.cr6.eq) goto loc_8209AD78;
	// lwz r3,6456(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ad6c
	if (ctx.cr6.eq) goto loc_8209AD6C;
	// bl 0x820e5508
	ctx.lr = 0x8209AD6C;
	sub_820E5508(ctx, base);
loc_8209AD6C:
	// stw r25,6456(r31)
	REX_STORE_U32(ctx.r31.u32 + 6456, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_8209AD78:
	// lwz r11,6452(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6452);
	// addi r11,r11,9000
	ctx.r11.s64 = ctx.r11.s64 + 9000;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8209ad94
	if (ctx.cr6.gt) goto loc_8209AD94;
	// lwz r11,6456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209ae24
	if (ctx.cr6.eq) goto loc_8209AE24;
loc_8209AD94:
	// lwz r11,6456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6456);
	// addi r30,r31,6456
	ctx.r30.s64 = ctx.r31.s64 + 6456;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209add8
	if (!ctx.cr6.eq) goto loc_8209ADD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e54f0
	ctx.lr = 0x8209ADB4;
	sub_820E54F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209add4
	if (ctx.cr6.eq) goto loc_8209ADD4;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209adcc
	if (ctx.cr6.eq) goto loc_8209ADCC;
	// bl 0x820e5508
	ctx.lr = 0x8209ADCC;
	sub_820E5508(ctx, base);
loc_8209ADCC:
	// stw r25,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x8209add8
	goto loc_8209ADD8;
loc_8209ADD4:
	// stw r25,6460(r31)
	REX_STORE_U32(ctx.r31.u32 + 6460, ctx.r25.u32);
loc_8209ADD8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209ae14
	if (ctx.cr6.eq) goto loc_8209AE14;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8209ae14
	if (ctx.cr6.eq) goto loc_8209AE14;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ae08
	if (!ctx.cr6.eq) goto loc_8209AE08;
	// stw r25,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r25.u32);
	// b 0x8209ae0c
	goto loc_8209AE0C;
loc_8209AE08:
	// stw r26,6440(r31)
	REX_STORE_U32(ctx.r31.u32 + 6440, ctx.r26.u32);
loc_8209AE0C:
	// bl 0x820e5508
	ctx.lr = 0x8209AE10;
	sub_820E5508(ctx, base);
	// stw r25,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_8209AE14:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8209ae24
	if (!ctx.cr6.eq) goto loc_8209AE24;
	// stw r29,6452(r31)
	REX_STORE_U32(ctx.r31.u32 + 6452, ctx.r29.u32);
loc_8209AE24:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A6048) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820A6050;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820a60a4
	if (ctx.cr6.eq) goto loc_820A60A4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820a60e8
	if (!ctx.cr6.eq) goto loc_820A60E8;
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// li r31,9
	ctx.r31.s64 = 9;
loc_820A607C:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x820921f0
	ctx.lr = 0x820A6084;
	sub_820921F0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x820a607c
	if (!ctx.cr0.eq) goto loc_820A607C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820A60A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,14
	ctx.r31.s64 = 14;
	// addi r30,r29,144
	ctx.r30.s64 = ctx.r29.s64 + 144;
	// lfs f30,4680(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4680);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,4676(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4676);
	ctx.f31.f64 = double(temp.f32);
loc_820A60BC:
	// li r6,30
	ctx.r6.s64 = 30;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820921d8
	ctx.lr = 0x820A60D0;
	sub_820921D8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// cmpwi cr6,r31,22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 22, ctx.xer);
	// ble cr6,0x820a60bc
	if (!ctx.cr6.gt) goto loc_820A60BC;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,144(r29)
	REX_STORE_U32(ctx.r29.u32 + 144, ctx.r11.u32);
loc_820A60E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A8808) {
	REX_FUNC_PROLOGUE();
	// lis r11,-18933
	ctx.r11.s64 = -1240793088;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r11,24759
	ctx.r10.u64 = ctx.r11.u64 | 24759;
	// cmpwi cr6,r4,90
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 90, ctx.xer);
	// mulhw r11,r4,r10
	ctx.r11.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32)) >> 32;
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srawi r11,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 8;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r6,r7,360
	ctx.r6.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(360));
	// subf r5,r6,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r6.u64;
	// stw r5,160(r3)
	REX_STORE_U32(ctx.r3.u32 + 160, ctx.r5.u32);
	// bgt cr6,0x820a8860
	if (ctx.cr6.gt) goto loc_820A8860;
	// beq cr6,0x820a8858
	if (ctx.cr6.eq) goto loc_820A8858;
	// cmpwi cr6,r4,-180
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -180, ctx.xer);
	// beq cr6,0x820a8858
	if (ctx.cr6.eq) goto loc_820A8858;
	// cmpwi cr6,r4,-90
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -90, ctx.xer);
	// beq cr6,0x820a8858
	if (ctx.cr6.eq) goto loc_820A8858;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x820a8870
	if (!ctx.cr6.eq) goto loc_820A8870;
loc_820A8858:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
loc_820A8860:
	// cmpwi cr6,r4,180
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 180, ctx.xer);
	// beq cr6,0x820a8858
	if (ctx.cr6.eq) goto loc_820A8858;
	// cmpwi cr6,r4,270
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 270, ctx.xer);
	// beq cr6,0x820a8858
	if (ctx.cr6.eq) goto loc_820A8858;
loc_820A8870:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AA730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820AA738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8800);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820aa77c
	if (!ctx.cr6.gt) goto loc_820AA77C;
	// addi r11,r3,4272
	ctx.r11.s64 = ctx.r3.s64 + 4272;
loc_820AA75C:
	// lwz r9,-232(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -232);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// ld r8,3744(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 3744);
	// stdu r8,12(r11)
	ea = 12 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r11.u32 = ea;
	// lwz r7,8800(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820aa75c
	if (ctx.cr6.lt) goto loc_820AA75C;
loc_820AA77C:
	// lwz r3,4520(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4520);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aa78c
	if (ctx.cr6.eq) goto loc_820AA78C;
	// bl 0x8210f568
	ctx.lr = 0x820AA78C;
	sub_8210F568(ctx, base);
loc_820AA78C:
	// lwz r11,8800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,4524(r31)
	REX_STORE_U32(ctx.r31.u32 + 4524, ctx.r3.u32);
	// bl 0x820ef2e0
	ctx.lr = 0x820AA7A0;
	sub_820EF2E0(ctx, base);
	// stw r3,4520(r31)
	REX_STORE_U32(ctx.r31.u32 + 4520, ctx.r3.u32);
	// lwz r3,3660(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3660);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820aa7bc
	if (ctx.cr6.eq) goto loc_820AA7BC;
	// bl 0x820e8f80
	ctx.lr = 0x820AA7B4;
	sub_820E8F80(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,3660(r31)
	REX_STORE_U32(ctx.r31.u32 + 3660, ctx.r11.u32);
loc_820AA7BC:
	// std r30,3664(r31)
	REX_STORE_U64(ctx.r31.u32 + 3664, ctx.r30.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r30,3672(r31)
	REX_STORE_U64(ctx.r31.u32 + 3672, ctx.r30.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r30,3680(r31)
	REX_STORE_U64(ctx.r31.u32 + 3680, ctx.r30.u64);
	// stw r30,3688(r31)
	REX_STORE_U32(ctx.r31.u32 + 3688, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,3664
	ctx.r30.s64 = ctx.r31.s64 + 3664;
	// bl 0x820e8ee0
	ctx.lr = 0x820AA7E4;
	sub_820E8EE0(ctx, base);
	// stw r3,3660(r31)
	REX_STORE_U32(ctx.r31.u32 + 3660, ctx.r3.u32);
	// stw r3,3676(r31)
	REX_STORE_U32(ctx.r31.u32 + 3676, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r4,r31,4280
	ctx.r4.s64 = ctx.r31.s64 + 4280;
	// lwz r6,4520(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4520);
	// lwz r5,4524(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4524);
	// lwz r3,8800(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// bl 0x820e5310
	ctx.lr = 0x820AA804;
	sub_820E5310(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820aa818
	if (!ctx.cr6.eq) goto loc_820AA818;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820AA818:
	// stw r3,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AE550) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AE6D0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bgelr 
	if (!ctx.cr0.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AF8C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820AF8D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820AF8E4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af900
	if (ctx.cr6.eq) goto loc_820AF900;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF900:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820af8e4
	if (!ctx.cr0.eq) goto loc_820AF8E4;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r30,4
	ctx.r30.s64 = 4;
loc_820AF914:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af930
	if (ctx.cr6.eq) goto loc_820AF930;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF930;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF930:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// bne 0x820af914
	if (!ctx.cr0.eq) goto loc_820AF914;
	// stw r29,10808(r28)
	REX_STORE_U32(ctx.r28.u32 + 10808, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B1008) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820b10cc
	if (ctx.cr6.eq) goto loc_820B10CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-30320
	ctx.r4.s64 = ctx.r10.s64 + -30320;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B1040;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B105C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B1078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B1094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B10B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B10CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B10CC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B3268) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,33
	ctx.r10.s64 = 33;
	// addi r11,r3,132
	ctx.r11.s64 = ctx.r3.s64 + 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_820B3278:
	// stw r10,-128(r11)
	REX_STORE_U32(ctx.r11.u32 + -128, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b3278
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B3278;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,360(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 360);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820B3820) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b3854
	if (!ctx.cr6.eq) goto loc_820B3854;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_820B3854:
	// bl 0x82093fe8
	ctx.lr = 0x820B3858;
	sub_82093FE8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B386C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B387C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B4A90) {
	REX_FUNC_PROLOGUE();
	// lwz r3,5164(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 5164);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B4C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,5172(r3)
	REX_STORE_U32(ctx.r3.u32 + 5172, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,5176(r3)
	REX_STORE_U32(ctx.r3.u32 + 5176, ctx.r11.u32);
	// stw r11,5180(r3)
	REX_STORE_U32(ctx.r3.u32 + 5180, ctx.r11.u32);
	// stw r11,5184(r3)
	REX_STORE_U32(ctx.r3.u32 + 5184, ctx.r11.u32);
	// stw r11,5188(r3)
	REX_STORE_U32(ctx.r3.u32 + 5188, ctx.r11.u32);
	// lwz r3,5192(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b4c54
	if (ctx.cr6.eq) goto loc_820B4C54;
	// bl 0x820e8f80
	ctx.lr = 0x820B4C54;
	sub_820E8F80(ctx, base);
loc_820B4C54:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e8ee0
	ctx.lr = 0x820B4C68;
	sub_820E8EE0(ctx, base);
	// stw r30,5196(r31)
	REX_STORE_U32(ctx.r31.u32 + 5196, ctx.r30.u32);
	// stw r3,5192(r31)
	REX_STORE_U32(ctx.r31.u32 + 5192, ctx.r3.u32);
	// stw r3,5188(r31)
	REX_STORE_U32(ctx.r31.u32 + 5188, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B6490) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,5152(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5152);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bgt cr6,0x820b6580
	if (ctx.cr6.gt) goto loc_820B6580;
	// beq cr6,0x820b6580
	if (ctx.cr6.eq) goto loc_820B6580;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820b6580
	if (ctx.cr6.gt) goto loc_820B6580;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b64f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B64F0;
	// bdzf 4*cr6+eq,0x820b651c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B651C;
	// bdzf 4*cr6+eq,0x820b6554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B6554;
	// bne cr6,0x820b6580
	if (!ctx.cr6.eq) goto loc_820B6580;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,5153(r31)
	REX_STORE_U8(ctx.r31.u32 + 5153, ctx.r30.u8);
	// stb r30,5154(r31)
	REX_STORE_U8(ctx.r31.u32 + 5154, ctx.r30.u8);
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// stb r30,5155(r31)
	REX_STORE_U8(ctx.r31.u32 + 5155, ctx.r30.u8);
loc_820B64F0:
	// addi r4,r31,3984
	ctx.r4.s64 = ctx.r31.s64 + 3984;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b4ea0
	ctx.lr = 0x820B64FC;
	sub_820B4EA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820b6584
	if (!ctx.cr6.eq) goto loc_820B6584;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,5153(r31)
	REX_STORE_U8(ctx.r31.u32 + 5153, ctx.r30.u8);
	// stb r30,5154(r31)
	REX_STORE_U8(ctx.r31.u32 + 5154, ctx.r30.u8);
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// stb r30,5155(r31)
	REX_STORE_U8(ctx.r31.u32 + 5155, ctx.r30.u8);
	// b 0x820b6584
	goto loc_820B6584;
loc_820B651C:
	// addi r4,r31,4568
	ctx.r4.s64 = ctx.r31.s64 + 4568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b63b0
	ctx.lr = 0x820B6528;
	sub_820B63B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r30,5153(r31)
	REX_STORE_U8(ctx.r31.u32 + 5153, ctx.r30.u8);
	// stb r30,5154(r31)
	REX_STORE_U8(ctx.r31.u32 + 5154, ctx.r30.u8);
	// stb r30,5155(r31)
	REX_STORE_U8(ctx.r31.u32 + 5155, ctx.r30.u8);
	// bne cr6,0x820b6548
	if (!ctx.cr6.eq) goto loc_820B6548;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// b 0x820b6584
	goto loc_820B6584;
loc_820B6548:
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// b 0x820b6584
	goto loc_820B6584;
loc_820B6554:
	// addi r4,r31,4568
	ctx.r4.s64 = ctx.r31.s64 + 4568;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b4ea0
	ctx.lr = 0x820B6560;
	sub_820B4EA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820b6584
	if (!ctx.cr6.eq) goto loc_820B6584;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,5153(r31)
	REX_STORE_U8(ctx.r31.u32 + 5153, ctx.r30.u8);
	// stb r30,5154(r31)
	REX_STORE_U8(ctx.r31.u32 + 5154, ctx.r30.u8);
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// stb r30,5155(r31)
	REX_STORE_U8(ctx.r31.u32 + 5155, ctx.r30.u8);
	// b 0x820b6584
	goto loc_820B6584;
loc_820B6580:
	// li r30,1
	ctx.r30.s64 = 1;
loc_820B6584:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BA638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x820ba694
	if (!ctx.cr6.eq) goto loc_820BA694;
	// addi r11,r4,629
	ctx.r11.s64 = ctx.r4.s64 + 629;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820ba694
	if (!ctx.cr6.eq) goto loc_820BA694;
	// addi r11,r4,617
	ctx.r11.s64 = ctx.r4.s64 + 617;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,2396(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2396);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x820ba680
	if (!ctx.cr6.lt) goto loc_820BA680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4552);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
loc_820BA680:
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// stfsx f12,r11,r3
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
loc_820BA694:
	// addi r11,r4,617
	ctx.r11.s64 = ctx.r4.s64 + 617;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f0,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820ba6c0
	if (!ctx.cr6.gt) goto loc_820BA6C0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,4552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4552);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfsx f0,r11,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
loc_820BA6C0:
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// stfsx f12,r11,r3
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BD4B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820BD4C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,2528(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 2528);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820bd514
	if (ctx.cr6.gt) goto loc_820BD514;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bd4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD4F4;
	// bdzf 4*cr6+eq,0x820bd500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD500;
	// bdzf 4*cr6+eq,0x820bd500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD500;
	// bdzf 4*cr6+eq,0x820bd508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD508;
	// bne cr6,0x820bd508
	if (!ctx.cr6.eq) goto loc_820BD508;
loc_820BD4F4:
	// li r30,1
	ctx.r30.s64 = 1;
	// li r27,2
	ctx.r27.s64 = 2;
	// b 0x820bd51c
	goto loc_820BD51C;
loc_820BD500:
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x820bd518
	goto loc_820BD518;
loc_820BD508:
	// li r30,3
	ctx.r30.s64 = 3;
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x820bd51c
	goto loc_820BD51C;
loc_820BD514:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820BD518:
	// li r27,0
	ctx.r27.s64 = 0;
loc_820BD51C:
	// addi r11,r10,-3
	ctx.r11.s64 = ctx.r10.s64 + -3;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820bd674
	if (ctx.cr6.gt) goto loc_820BD674;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bd5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD5E4;
	// bdzf 4*cr6+eq,0x820bd54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD54C;
	// bdzf 4*cr6+eq,0x820bd54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD54C;
	// bdzf 4*cr6+eq,0x820bd5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD5E4;
	// bdzf 4*cr6+eq,0x820bd5e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD5E4;
	// bdzf 4*cr6+eq,0x820bd54c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD54C;
	// bne cr6,0x820bd5e4
	if (!ctx.cr6.eq) goto loc_820BD5E4;
loc_820BD54C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820BD550:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820bd3a8
	ctx.lr = 0x820BD55C;
	sub_820BD3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820918b8
	ctx.lr = 0x820BD56C;
	sub_820918B8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820bd5c0
	if (ctx.cr6.gt) goto loc_820BD5C0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bd5d0
	if (ctx.cr6.eq) goto loc_820BD5D0;
	// bdz 0x820bd598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD598;
	// bdz 0x820bd5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD5D0;
	// bdz 0x820bd5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD5A0;
	// bdz 0x820bd5a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD5A8;
	// b 0x820bd5b0
	goto loc_820BD5B0;
loc_820BD598:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bd5b4
	goto loc_820BD5B4;
loc_820BD5A0:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820bd5b4
	goto loc_820BD5B4;
loc_820BD5A8:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x820bd5b4
	goto loc_820BD5B4;
loc_820BD5B0:
	// li r3,5
	ctx.r3.s64 = 5;
loc_820BD5B4:
	// bl 0x82092048
	ctx.lr = 0x820BD5B8;
	sub_82092048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bd5d0
	if (!ctx.cr6.eq) goto loc_820BD5D0;
loc_820BD5C0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820918a0
	ctx.lr = 0x820BD5D0;
	sub_820918A0(ctx, base);
loc_820BD5D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x820bd550
	if (ctx.cr6.lt) goto loc_820BD550;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BD5E4:
	// li r29,0
	ctx.r29.s64 = 0;
loc_820BD5E8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820bd3a8
	ctx.lr = 0x820BD5F4;
	sub_820BD3A8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820918b8
	ctx.lr = 0x820BD604;
	sub_820918B8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820bd658
	if (ctx.cr6.gt) goto loc_820BD658;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bd668
	if (ctx.cr6.eq) goto loc_820BD668;
	// bdz 0x820bd630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD630;
	// bdz 0x820bd668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD668;
	// bdz 0x820bd638
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD638;
	// bdz 0x820bd640
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BD640;
	// b 0x820bd648
	goto loc_820BD648;
loc_820BD630:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820bd64c
	goto loc_820BD64C;
loc_820BD638:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x820bd64c
	goto loc_820BD64C;
loc_820BD640:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x820bd64c
	goto loc_820BD64C;
loc_820BD648:
	// li r3,5
	ctx.r3.s64 = 5;
loc_820BD64C:
	// bl 0x82092048
	ctx.lr = 0x820BD650;
	sub_82092048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820bd668
	if (!ctx.cr6.eq) goto loc_820BD668;
loc_820BD658:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820918a0
	ctx.lr = 0x820BD668;
	sub_820918A0(ctx, base);
loc_820BD668:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// blt cr6,0x820bd5e8
	if (ctx.cr6.lt) goto loc_820BD5E8;
loc_820BD674:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820C6330) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x820C6338;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2530(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2530);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r18,4
	ctx.r18.s64 = 4;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c6400
	if (!ctx.cr6.eq) goto loc_820C6400;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r3,2710
	ctx.r11.s64 = ctx.r3.s64 + 2710;
	// addi r10,r3,3226
	ctx.r10.s64 = ctx.r3.s64 + 3226;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C6368:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c6368
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C6368;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,2726
	ctx.r11.s64 = ctx.r30.s64 + 2726;
	// addi r10,r30,3242
	ctx.r10.s64 = ctx.r30.s64 + 3242;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C6384:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c6384
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C6384;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r18,3216(r30)
	REX_STORE_U32(ctx.r30.u32 + 3216, ctx.r18.u32);
	// addi r28,r30,128
	ctx.r28.s64 = ctx.r30.s64 + 128;
	// stw r18,3212(r30)
	REX_STORE_U32(ctx.r30.u32 + 3212, ctx.r18.u32);
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// stw r23,3224(r30)
	REX_STORE_U32(ctx.r30.u32 + 3224, ctx.r23.u32);
	// stw r23,3220(r30)
	REX_STORE_U32(ctx.r30.u32 + 3220, ctx.r23.u32);
	// lfs f31,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
loc_820C63B0:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_820C63B4:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r4,r11,3004
	ctx.r4.s64 = ctx.r11.s64 + 3004;
	// bl 0x820a1ee8
	ctx.lr = 0x820C63D8;
	sub_820A1EE8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,8
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8, ctx.xer);
	// blt cr6,0x820c63b4
	if (ctx.cr6.lt) goto loc_820C63B4;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// blt cr6,0x820c63b0
	if (ctx.cr6.lt) goto loc_820C63B0;
	// lbz r11,2530(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2530);
	// stb r23,2531(r30)
	REX_STORE_U8(ctx.r30.u32 + 2531, ctx.r23.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2530(r30)
	REX_STORE_U8(ctx.r30.u32 + 2530, ctx.r11.u8);
loc_820C6400:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c1000
	ctx.lr = 0x820C6408;
	sub_820C1000(ctx, base);
	// addi r26,r30,3228
	ctx.r26.s64 = ctx.r30.s64 + 3228;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// addi r28,r30,3212
	ctx.r28.s64 = ctx.r30.s64 + 3212;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r20,12
	ctx.r20.s64 = 12;
	// li r21,13
	ctx.r21.s64 = 13;
	// li r22,21
	ctx.r22.s64 = 21;
	// li r19,3
	ctx.r19.s64 = 3;
loc_820C6430:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091ab8
	ctx.lr = 0x820C6438;
	sub_82091AB8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091ac8
	ctx.lr = 0x820C6440;
	sub_82091AC8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091ad8
	ctx.lr = 0x820C644C;
	sub_82091AD8(ctx, base);
	// rlwinm r11,r31,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x400000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c6460
	if (ctx.cr6.eq) goto loc_820C6460;
	// stw r18,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r18.u32);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6460:
	// rlwinm r11,r31,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c64a8
	if (ctx.cr6.eq) goto loc_820C64A8;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820c649c
	if (ctx.cr6.lt) goto loc_820C649C;
	// beq cr6,0x820c6490
	if (ctx.cr6.eq) goto loc_820C6490;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820c672c
	if (!ctx.cr6.lt) goto loc_820C672C;
	// bl 0x82092748
	ctx.lr = 0x820C6488;
	sub_82092748(ctx, base);
	// sth r27,4(r29)
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r27.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6490:
	// bl 0x82092748
	ctx.lr = 0x820C6494;
	sub_82092748(ctx, base);
	// sth r27,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r27.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C649C:
	// bl 0x82092748
	ctx.lr = 0x820C64A0;
	sub_82092748(ctx, base);
	// sth r27,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r27.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C64A8:
	// rlwinm r9,r31,0,10,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x3FF000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820c66b8
	if (ctx.cr6.eq) goto loc_820C66B8;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_820C64BC:
	// and r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820c64d8
	if (!ctx.cr6.eq) goto loc_820C64D8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x820c64bc
	if (ctx.cr6.lt) goto loc_820C64BC;
loc_820C64D8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820c66b0
	if (ctx.cr6.gt) goto loc_820C66B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c6528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C6528;
	// bdzf 4*cr6+eq,0x820c6554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C6554;
	// bdzf 4*cr6+eq,0x820c6580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C6580;
	// bne cr6,0x820c6628
	if (!ctx.cr6.eq) goto loc_820C6628;
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// bl 0x82092748
	ctx.lr = 0x820C6504;
	sub_82092748(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820c6520
	if (ctx.cr6.eq) goto loc_820C6520;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c1fd8
	ctx.lr = 0x820C6520;
	sub_820C1FD8(ctx, base);
loc_820C6520:
	// sth r31,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r31.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6528:
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// bl 0x82092748
	ctx.lr = 0x820C6530;
	sub_82092748(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820c654c
	if (ctx.cr6.eq) goto loc_820C654C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c1fd8
	ctx.lr = 0x820C654C;
	sub_820C1FD8(ctx, base);
loc_820C654C:
	// sth r31,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r31.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6554:
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// bl 0x82092748
	ctx.lr = 0x820C655C;
	sub_82092748(ctx, base);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x820c6578
	if (ctx.cr6.eq) goto loc_820C6578;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820c1fd8
	ctx.lr = 0x820C6578;
	sub_820C1FD8(ctx, base);
loc_820C6578:
	// sth r31,4(r29)
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r31.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6580:
	// rlwinm r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c65b4
	if (ctx.cr6.eq) goto loc_820C65B4;
	// bl 0x82092748
	ctx.lr = 0x820C6590;
	sub_82092748(ctx, base);
	// sth r20,0(r29)
	REX_STORE_U16(ctx.r29.u32 + 0, ctx.r20.u16);
	// sth r21,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r21.u16);
	// sth r22,4(r29)
	REX_STORE_U16(ctx.r29.u32 + 4, ctx.r22.u16);
	// sth r27,6(r29)
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r27.u16);
	// sth r27,8(r29)
	REX_STORE_U16(ctx.r29.u32 + 8, ctx.r27.u16);
	// sth r27,10(r29)
	REX_STORE_U16(ctx.r29.u32 + 10, ctx.r27.u16);
	// sth r27,12(r29)
	REX_STORE_U16(ctx.r29.u32 + 12, ctx.r27.u16);
	// sth r27,14(r29)
	REX_STORE_U16(ctx.r29.u32 + 14, ctx.r27.u16);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C65B4:
	// rlwinm r11,r9,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c672c
	if (ctx.cr6.eq) goto loc_820C672C;
	// bl 0x82092770
	ctx.lr = 0x820C65C4;
	sub_82092770(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820C65D0;
	sub_820A0700(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r30,2710
	ctx.r10.s64 = ctx.r30.s64 + 2710;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C65E0:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c65e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C65E0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,3242
	ctx.r11.s64 = ctx.r30.s64 + 3242;
	// addi r10,r30,2726
	ctx.r10.s64 = ctx.r30.s64 + 2726;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C65FC:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c65fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C65FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b84f0
	ctx.lr = 0x820C6610;
	sub_820B84F0(ctx, base);
	// lbz r11,3900(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 3900);
	// stb r23,2529(r30)
	REX_STORE_U8(ctx.r30.u32 + 2529, ctx.r23.u8);
	// stb r23,2530(r30)
	REX_STORE_U8(ctx.r30.u32 + 2530, ctx.r23.u8);
	// stb r23,2531(r30)
	REX_STORE_U8(ctx.r30.u32 + 2531, ctx.r23.u8);
	// stb r11,2528(r30)
	REX_STORE_U8(ctx.r30.u32 + 2528, ctx.r11.u8);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6628:
	// rlwinm r11,r9,0,18,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c672c
	if (ctx.cr6.eq) goto loc_820C672C;
	// rlwinm r11,r9,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c6648
	if (ctx.cr6.eq) goto loc_820C6648;
	// bl 0x82092748
	ctx.lr = 0x820C6644;
	sub_82092748(ctx, base);
	// b 0x820c664c
	goto loc_820C664C;
loc_820C6648:
	// bl 0x82092770
	ctx.lr = 0x820C664C;
	sub_82092770(ctx, base);
loc_820C664C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r30,128
	ctx.r3.s64 = ctx.r30.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820C6658;
	sub_820A0700(ctx, base);
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r30,2710
	ctx.r10.s64 = ctx.r30.s64 + 2710;
	// addi r11,r26,-2
	ctx.r11.s64 = ctx.r26.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C6668:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c6668
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C6668;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r11,r30,3242
	ctx.r11.s64 = ctx.r30.s64 + 3242;
	// addi r10,r30,2726
	ctx.r10.s64 = ctx.r30.s64 + 2726;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_820C6684:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820c6684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C6684;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b84f0
	ctx.lr = 0x820C6698;
	sub_820B84F0(ctx, base);
	// lbz r11,3900(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 3900);
	// stb r23,2529(r30)
	REX_STORE_U8(ctx.r30.u32 + 2529, ctx.r23.u8);
	// stb r23,2530(r30)
	REX_STORE_U8(ctx.r30.u32 + 2530, ctx.r23.u8);
	// stb r23,2531(r30)
	REX_STORE_U8(ctx.r30.u32 + 2531, ctx.r23.u8);
	// stb r11,2528(r30)
	REX_STORE_U8(ctx.r30.u32 + 2528, ctx.r11.u8);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C66B0:
	// stw r19,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C66B8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091ad8
	ctx.lr = 0x820C66C0;
	sub_82091AD8(ctx, base);
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c66dc
	if (ctx.cr6.eq) goto loc_820C66DC;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820c66fc
	goto loc_820C66FC;
loc_820C66DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82091ad8
	ctx.lr = 0x820C66E4;
	sub_82091AD8(ctx, base);
	// rlwinm r11,r3,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c670c
	if (ctx.cr6.eq) goto loc_820C670C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820C66FC:
	// stw r23,-16(r28)
	REX_STORE_U32(ctx.r28.u32 + -16, ctx.r23.u32);
	// stw r24,-8(r28)
	REX_STORE_U32(ctx.r28.u32 + -8, ctx.r24.u32);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82092720
	ctx.lr = 0x820C670C;
	sub_82092720(ctx, base);
loc_820C670C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820c6720
	if (!ctx.cr6.lt) goto loc_820C6720;
	// stw r18,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r18.u32);
	// b 0x820c672c
	goto loc_820C672C;
loc_820C6720:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x820c672c
	if (ctx.cr6.lt) goto loc_820C672C;
	// stw r23,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r23.u32);
loc_820C672C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// blt cr6,0x820c6430
	if (ctx.cr6.lt) goto loc_820C6430;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D3EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820D3ED0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2528(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2528);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d3f70
	if (ctx.cr6.eq) goto loc_820D3F70;
	// bl 0x820c20b8
	ctx.lr = 0x820D3EF4;
	sub_820C20B8(ctx, base);
	// bl 0x82091800
	ctx.lr = 0x820D3EF8;
	sub_82091800(ctx, base);
	// bl 0x82091820
	ctx.lr = 0x820D3EFC;
	sub_82091820(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9258
	ctx.lr = 0x820D3F0C;
	sub_820B9258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b9258
	ctx.lr = 0x820D3F1C;
	sub_820B9258(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,2796(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2796);
	// bl 0x82091938
	ctx.lr = 0x820D3F28;
	sub_82091938(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bddd8
	ctx.lr = 0x820D3F34;
	sub_820BDDD8(ctx, base);
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x820d3f78
	if (ctx.cr6.gt) goto loc_820D3F78;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bge cr6,0x820d3f58
	if (!ctx.cr6.lt) goto loc_820D3F58;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820d3f78
	if (ctx.cr6.lt) goto loc_820D3F78;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x820d3f78
	if (ctx.cr6.gt) goto loc_820D3F78;
loc_820D3F58:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4a70
	ctx.lr = 0x820D3F64;
	sub_820C4A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820beb10
	ctx.lr = 0x820D3F6C;
	sub_820BEB10(ctx, base);
	// b 0x820d3f78
	goto loc_820D3F78;
loc_820D3F70:
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_820D3F78:
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bgt cr6,0x820d412c
	if (ctx.cr6.gt) goto loc_820D412C;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16284
	ctx.r12.s64 = ctx.r12.s64 + 16284;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D3FFC;
	case 1:
		goto loc_820D40B4;
	case 2:
		goto loc_820D40D8;
	case 3:
		goto loc_820D4108;
	case 4:
		goto loc_820D412C;
	case 5:
		goto loc_820D4198;
	case 6:
		goto loc_820D41A4;
	case 7:
		goto loc_820D41B0;
	case 8:
		goto loc_820D41D8;
	case 9:
		goto loc_820D41E4;
	case 10:
		goto loc_820D41F0;
	case 11:
		goto loc_820D41FC;
	case 12:
		goto loc_820D4214;
	case 13:
		goto loc_820D4230;
	case 14:
		goto loc_820D423C;
	case 15:
		goto loc_820D4248;
	case 16:
		goto loc_820D4288;
	case 17:
		goto loc_820D42D8;
	case 18:
		goto loc_820D42E4;
	case 19:
		goto loc_820D4300;
	case 20:
		goto loc_820D430C;
	case 21:
		goto loc_820D4344;
	case 22:
		goto loc_820D43A8;
	case 23:
		goto loc_820D4328;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D3FFC:
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x820a5d78
	ctx.lr = 0x820D4004;
	sub_820A5D78(ctx, base);
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d4094
	if (ctx.cr6.eq) goto loc_820D4094;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820d4080
	if (ctx.cr6.eq) goto loc_820D4080;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820d405c
	if (ctx.cr6.eq) goto loc_820D405C;
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x820ca7b8
	ctx.lr = 0x820D4028;
	sub_820CA7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4038;
	sub_82091B18(ctx, base);
	// stw r30,4280(r31)
	REX_STORE_U32(ctx.r31.u32 + 4280, ctx.r30.u32);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r9.u8);
	// b 0x820d4778
	goto loc_820D4778;
loc_820D405C:
	// lwz r11,4280(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4280);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,150
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 150, ctx.xer);
	// stw r10,4280(r31)
	REX_STORE_U32(ctx.r31.u32 + 4280, ctx.r10.u32);
	// blt cr6,0x820d4780
	if (ctx.cr6.lt) goto loc_820D4780;
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820d4774
	goto loc_820D4774;
loc_820D4080:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
	// stw r10,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r10.u32);
	// b 0x820d4778
	goto loc_820D4778;
loc_820D4094:
	// bl 0x82092610
	ctx.lr = 0x820D4098;
	sub_82092610(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// stw r30,4280(r31)
	REX_STORE_U32(ctx.r31.u32 + 4280, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
	// b 0x820d4778
	goto loc_820D4778;
loc_820D40B4:
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x820a5d78
	ctx.lr = 0x820D40BC;
	sub_820A5D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091590
	ctx.lr = 0x820D40C4;
	sub_82091590(ctx, base);
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// stw r30,4280(r31)
	REX_STORE_U32(ctx.r31.u32 + 4280, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820d4774
	goto loc_820D4774;
loc_820D40D8:
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x820a5de8
	ctx.lr = 0x820D40E0;
	sub_820A5DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091b18
	ctx.lr = 0x820D40F0;
	sub_82091B18(ctx, base);
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
loc_820D4108:
	// bl 0x82091820
	ctx.lr = 0x820D410C;
	sub_82091820(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// lbz r11,2528(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2528);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
loc_820D412C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7ed8
	ctx.lr = 0x820D4138;
	sub_820B7ED8(ctx, base);
	// cmplwi cr6,r27,15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 15, ctx.xer);
	// bgt cr6,0x820d464c
	if (ctx.cr6.gt) goto loc_820D464C;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r27,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16728
	ctx.r12.s64 = ctx.r12.s64 + 16728;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r27.u32) {
	case 0:
		goto loc_820D4658;
	case 1:
		goto loc_820D43F4;
	case 2:
		goto loc_820D43F4;
	case 3:
		goto loc_820D43F4;
	case 4:
		goto loc_820D43F4;
	case 5:
		goto loc_820D43F4;
	case 6:
		goto loc_820D464C;
	case 7:
		goto loc_820D4658;
	case 8:
		goto loc_820D4658;
	case 9:
		goto loc_820D4658;
	case 10:
		goto loc_820D4480;
	case 11:
		goto loc_820D464C;
	case 12:
		goto loc_820D4658;
	case 13:
		goto loc_820D4658;
	case 14:
		goto loc_820D4658;
	case 15:
		goto loc_820D4658;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D4198:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bebc0
	ctx.lr = 0x820D41A0;
	sub_820BEBC0(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D41A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bf770
	ctx.lr = 0x820D41AC;
	sub_820BF770(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D41B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091b18
	ctx.lr = 0x820D41B8;
	sub_82091B18(ctx, base);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D41CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stb r9,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r9.u8);
	// b 0x820d4774
	goto loc_820D4774;
loc_820D41D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4ce8
	ctx.lr = 0x820D41E0;
	sub_820C4CE8(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D41E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9a80
	ctx.lr = 0x820D41EC;
	sub_820C9A80(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D41F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c2278
	ctx.lr = 0x820D41F8;
	sub_820C2278(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D41FC:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c6b68
	ctx.lr = 0x820D4210;
	sub_820C6B68(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4214:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c9aa0
	ctx.lr = 0x820D422C;
	sub_820C9AA0(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4230:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c27f0
	ctx.lr = 0x820D4238;
	sub_820C27F0(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D423C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c2c28
	ctx.lr = 0x820D4244;
	sub_820C2C28(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4248:
	// bl 0x820919e0
	ctx.lr = 0x820D424C;
	sub_820919E0(ctx, base);
	// rlwinm r11,r3,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbc40
	ctx.lr = 0x820D4264;
	sub_820BBC40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8209ba48
	ctx.lr = 0x820D426C;
	sub_8209BA48(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// bl 0x82091b18
	ctx.lr = 0x820D427C;
	sub_82091B18(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// b 0x820d4774
	goto loc_820D4774;
loc_820D4288:
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d42a4
	if (ctx.cr6.lt) goto loc_820D42A4;
	// beq cr6,0x820d42c0
	if (ctx.cr6.eq) goto loc_820D42C0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820d42d0
	if (ctx.cr6.lt) goto loc_820D42D0;
	// b 0x820d4778
	goto loc_820D4778;
loc_820D42A4:
	// li r4,30
	ctx.r4.s64 = 30;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x820a5c38
	ctx.lr = 0x820D42B0;
	sub_820A5C38(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
loc_820D42C0:
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x820a5d80
	ctx.lr = 0x820D42C8;
	sub_820A5D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
loc_820D42D0:
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x820d4780
	goto loc_820D4780;
loc_820D42D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5660
	ctx.lr = 0x820D42E0;
	sub_820C5660(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D42E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3628
	ctx.lr = 0x820D42EC;
	sub_820C3628(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3d90
	ctx.lr = 0x820D4308;
	sub_820D3D90(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D430C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca4f8
	ctx.lr = 0x820D4314;
	sub_820CA4F8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4328:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c37a0
	ctx.lr = 0x820D4330;
	sub_820C37A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D4344:
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d4384
	if (ctx.cr6.eq) goto loc_820D4384;
	// bl 0x82091e48
	ctx.lr = 0x820D4358;
	sub_82091E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbd20
	ctx.lr = 0x820D4360;
	sub_820BBD20(ctx, base);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4378;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r29,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r29.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
loc_820D4384:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbd40
	ctx.lr = 0x820D4390;
	sub_820BBD40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// stw r29,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r29.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091b18
	ctx.lr = 0x820D43A4;
	sub_82091B18(ctx, base);
	// b 0x820d4780
	goto loc_820D4780;
loc_820D43A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091ac8
	ctx.lr = 0x820D43B0;
	sub_82091AC8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-9632
	ctx.r4.s64 = ctx.r11.s64 + -9632;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x820a1fb0
	ctx.lr = 0x820D43C8;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d4780
	if (!ctx.cr6.eq) goto loc_820D4780;
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D43E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,21
	ctx.r9.s64 = 21;
	// stb r9,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r9.u8);
	// b 0x820d4774
	goto loc_820D4774;
loc_820D43F4:
	// stw r30,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820919c8
	ctx.lr = 0x820D4404;
	sub_820919C8(ctx, base);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4418;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4444
	if (ctx.cr6.eq) goto loc_820D4444;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4428;
	sub_82091B18(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,7
	ctx.r10.s64 = 7;
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,3444(r31)
	REX_STORE_U8(ctx.r31.u32 + 3444, ctx.r10.u8);
loc_820D4444:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d465c
	if (ctx.cr6.eq) goto loc_820D465C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4468;
	sub_82091B18(ctx, base);
	// lbz r11,3445(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3445);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D4480:
	// stw r30,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091ac8
	ctx.lr = 0x820D448C;
	sub_82091AC8(ctx, base);
	// rlwinm r11,r3,0,7,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1C00000;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d44f4
	if (ctx.cr6.eq) goto loc_820D44F4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820d44f4
	if (ctx.cr6.eq) goto loc_820D44F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7f60
	ctx.lr = 0x820D44AC;
	sub_820B7F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbe8
	ctx.lr = 0x820D44C0;
	sub_820BBBE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D44C8;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D44D0;
	sub_82091B18(ctx, base);
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbf0
	ctx.lr = 0x820D44DC;
	sub_820BBBF0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D44F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091ac8
	ctx.lr = 0x820D44FC;
	sub_82091AC8(ctx, base);
	// rlwinm r11,r3,0,7,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1C00000;
	// rlwinm r11,r11,0,9,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4564
	if (ctx.cr6.eq) goto loc_820D4564;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820d4564
	if (ctx.cr6.eq) goto loc_820D4564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7f60
	ctx.lr = 0x820D451C;
	sub_820B7F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbe8
	ctx.lr = 0x820D4530;
	sub_820BBBE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D4538;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4540;
	sub_82091B18(ctx, base);
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbf0
	ctx.lr = 0x820D454C;
	sub_820BBBF0(ctx, base);
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D4564:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091ac8
	ctx.lr = 0x820D456C;
	sub_82091AC8(ctx, base);
	// rlwinm r11,r3,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d45d4
	if (ctx.cr6.eq) goto loc_820D45D4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x820d45d4
	if (ctx.cr6.eq) goto loc_820D45D4;
	// lwz r11,2404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7f60
	ctx.lr = 0x820D4594;
	sub_820B7F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbe8
	ctx.lr = 0x820D45A8;
	sub_820BBBE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D45B0;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D45B8;
	sub_82091B18(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D45D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091ac8
	ctx.lr = 0x820D45DC;
	sub_82091AC8(ctx, base);
	// rlwinm r11,r3,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x800000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d465c
	if (ctx.cr6.eq) goto loc_820D465C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x820d465c
	if (ctx.cr6.eq) goto loc_820D465C;
	// lwz r11,2404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7f60
	ctx.lr = 0x820D4604;
	sub_820B7F60(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4644
	if (ctx.cr6.eq) goto loc_820D4644;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbbe8
	ctx.lr = 0x820D4618;
	sub_820BBBE8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D4620;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4628;
	sub_82091B18(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D4644:
	// bl 0x82092798
	ctx.lr = 0x820D4648;
	sub_82092798(ctx, base);
	// b 0x820d465c
	goto loc_820D465C;
loc_820D464C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820919c8
	ctx.lr = 0x820D4658;
	sub_820919C8(ctx, base);
loc_820D4658:
	// stw r30,2796(r31)
	REX_STORE_U32(ctx.r31.u32 + 2796, ctx.r30.u32);
loc_820D465C:
	// bl 0x820919e0
	ctx.lr = 0x820D4660;
	sub_820919E0(ctx, base);
	// rlwinm r11,r3,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d4694
	if (ctx.cr6.eq) goto loc_820D4694;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbc40
	ctx.lr = 0x820D4678;
	sub_820BBC40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D4680;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4688;
	sub_82091B18(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// b 0x820d4770
	goto loc_820D4770;
loc_820D4694:
	// cmplwi cr6,r27,13
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 13, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// bl 0x82092098
	ctx.lr = 0x820D46A0;
	sub_82092098(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d46b8
	if (!ctx.cr6.eq) goto loc_820D46B8;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// bl 0x82091b18
	ctx.lr = 0x820D46B0;
	sub_82091B18(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x820d4770
	goto loc_820D4770;
loc_820D46B8:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D46CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d46e4
	if (ctx.cr6.eq) goto loc_820D46E4;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D46DC;
	sub_82091B18(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x820d4770
	goto loc_820D4770;
loc_820D46E4:
	// bl 0x82091ec8
	ctx.lr = 0x820D46E8;
	sub_82091EC8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d473c
	if (ctx.cr6.eq) goto loc_820D473C;
	// bl 0x82091d30
	ctx.lr = 0x820D46F4;
	sub_82091D30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d473c
	if (!ctx.cr6.eq) goto loc_820D473C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bcb90
	ctx.lr = 0x820D4704;
	sub_820BCB90(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d4720
	if (!ctx.cr6.eq) goto loc_820D4720;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4718;
	sub_82091B18(ctx, base);
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x820d4770
	goto loc_820D4770;
loc_820D4720:
	// bl 0x82091b98
	ctx.lr = 0x820D4724;
	sub_82091B98(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d473c
	if (!ctx.cr6.eq) goto loc_820D473C;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// bl 0x82091b18
	ctx.lr = 0x820D4734;
	sub_82091B18(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x820d4770
	goto loc_820D4770;
loc_820D473C:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820D4750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d4780
	if (ctx.cr6.eq) goto loc_820D4780;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D4764;
	sub_82091B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7fb0
	ctx.lr = 0x820D476C;
	sub_820B7FB0(ctx, base);
	// li r11,21
	ctx.r11.s64 = 21;
loc_820D4770:
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
loc_820D4774:
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
loc_820D4778:
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
loc_820D4780:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d47c0
	if (!ctx.cr6.eq) goto loc_820D47C0;
	// bl 0x82092018
	ctx.lr = 0x820D4790;
	sub_82092018(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d47c0
	if (ctx.cr6.eq) goto loc_820D47C0;
	// lwz r11,2744(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2744);
	// li r10,10
	ctx.r10.s64 = 10;
	// stw r10,4284(r31)
	REX_STORE_U32(ctx.r31.u32 + 4284, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d47c0
	if (ctx.cr6.eq) goto loc_820D47C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8209ba48
	ctx.lr = 0x820D47B4;
	sub_8209BA48(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820D47BC;
	sub_82091B18(ctx, base);
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
loc_820D47C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820EEE38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x820EEE40;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x820e8d00
	ctx.lr = 0x820EEE60;
	sub_820E8D00(ctx, base);
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x820eee98
	if (ctx.cr0.eq) goto loc_820EEE98;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8be0
	ctx.lr = 0x820EEE78;
	sub_820E8BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x820ef078
	if (ctx.cr0.eq) goto loc_820EF078;
	// ld r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r11,r10
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r10.s64, ctx.xer);
	// blt cr6,0x820ef078
	if (ctx.cr6.lt) goto loc_820EF078;
loc_820EEE90:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820ef07c
	goto loc_820EF07C;
loc_820EEE98:
	// lha r22,6(r29)
	ctx.r22.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + 6));
	// cmpwi cr6,r22,5
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 5, ctx.xer);
	// bgt cr6,0x820ef078
	if (ctx.cr6.gt) goto loc_820EF078;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x820ef078
	if (ctx.cr6.eq) goto loc_820EF078;
	// li r23,0
	ctx.r23.s64 = 0;
	// lhz r25,2(r29)
	ctx.r25.u64 = REX_LOAD_U16(ctx.r29.u32 + 2);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r31,4(r29)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r29.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// bne 0x820eeef8
	if (!ctx.cr0.eq) goto loc_820EEEF8;
	// lhz r11,114(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = ctx.r25.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820eeee8
	if (!ctx.cr6.lt) goto loc_820EEEE8;
	// lhz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// b 0x820eeefc
	goto loc_820EEEFC;
loc_820EEEE8:
	// lhz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x820eeefc
	if (ctx.cr6.gt) goto loc_820EEEFC;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x820eeefc
	goto loc_820EEEFC;
loc_820EEEF8:
	// lhz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r1.u32 + 112);
loc_820EEEFC:
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 12);
	// lhz r8,14(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// sth r25,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r24,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r23,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// bl 0x82375014
	ctx.lr = 0x820EEF38;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ef078
	if (ctx.cr0.eq) goto loc_820EF078;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
loc_820EEF44:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375024
	ctx.lr = 0x820EEF50;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x820eef74
	if (!ctx.cr6.gt) goto loc_820EEF74;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
loc_820EEF6C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x820eef8c
	goto loc_820EEF8C;
loc_820EEF74:
	// bge cr6,0x820eef88
	if (!ctx.cr6.lt) goto loc_820EEF88;
	// lhz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x820eef6c
	goto loc_820EEF6C;
loc_820EEF88:
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
loc_820EEF8C:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// ble cr6,0x820eefe4
	if (!ctx.cr6.gt) goto loc_820EEFE4;
	// b 0x820eefa4
	goto loc_820EEFA4;
loc_820EEFA0:
	// lhz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
loc_820EEFA4:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r11,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r11.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82375014
	ctx.lr = 0x820EEFB8;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820eefe4
	if (ctx.cr0.eq) goto loc_820EEFE4;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375024
	ctx.lr = 0x820EEFCC;
	__imp__RtlTimeToTimeFields(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// lhz r30,132(r1)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r1.u32 + 132);
	// blt cr6,0x820eefa0
	if (ctx.cr6.lt) goto loc_820EEFA0;
loc_820EEFE4:
	// sth r30,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82375014
	ctx.lr = 0x820EEFF4;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ef078
	if (ctx.cr0.eq) goto loc_820EF078;
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820ef084
	if (ctx.cr0.eq) goto loc_820EF084;
	// lhz r11,118(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820ef028
	if (ctx.cr6.lt) goto loc_820EF028;
	// bne cr6,0x820ef084
	if (!ctx.cr6.eq) goto loc_820EF084;
	// ld r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bge cr6,0x820ef084
	if (!ctx.cr6.lt) goto loc_820EF084;
loc_820EF028:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lhz r10,10(r29)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r29.u32 + 10);
	// lhz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// lhz r8,14(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 14);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,96(r1)
	REX_STORE_U16(ctx.r1.u32 + 96, ctx.r28.u16);
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// sth r10,104(r1)
	REX_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// sth r25,98(r1)
	REX_STORE_U16(ctx.r1.u32 + 98, ctx.r25.u16);
	// sth r11,102(r1)
	REX_STORE_U16(ctx.r1.u32 + 102, ctx.r11.u16);
	// sth r9,106(r1)
	REX_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// sth r24,100(r1)
	REX_STORE_U16(ctx.r1.u32 + 100, ctx.r24.u16);
	// sth r8,108(r1)
	REX_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// sth r23,110(r1)
	REX_STORE_U16(ctx.r1.u32 + 110, ctx.r23.u16);
	// bl 0x82375014
	ctx.lr = 0x820EF070;
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x820eef44
	if (!ctx.cr0.eq) goto loc_820EEF44;
loc_820EF078:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820EF07C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
loc_820EF084:
	// std r9,0(r20)
	REX_STORE_U64(ctx.r20.u32 + 0, ctx.r9.u64);
	// b 0x820eee90
	goto loc_820EEE90;
}

DEFINE_REX_FUNC(sub_820F38A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r3,312
	ctx.r3.s64 = ctx.r3.s64 + 312;
	// bl 0x820faa40
	ctx.lr = 0x820F38BC;
	sub_820FAA40(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F40E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820F40E8;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F412C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stfs f30,108(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// bl 0x820f3260
	ctx.lr = 0x820F4158;
	sub_820F3260(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F416C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F52D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f5328
	if (ctx.cr6.eq) goto loc_820F5328;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5328
	if (ctx.cr6.eq) goto loc_820F5328;
loc_820F5310:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820f38d0
	ctx.lr = 0x820F5318;
	sub_820F38D0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f5310
	if (!ctx.cr6.eq) goto loc_820F5310;
loc_820F5328:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F6798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x820ef558
	ctx.lr = 0x820F67B4;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x820f67e0
	if (ctx.cr6.eq) goto loc_820F67E0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r10,5532
	ctx.r9.s64 = ctx.r10.s64 + 5532;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x820f67e4
	goto loc_820F67E4;
loc_820F67E0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_820F67E4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x8210b5c8
	ctx.lr = 0x820F67F0;
	sub_8210B5C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F77F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820F77F8;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32189
	ctx.r31.s64 = -2109538304;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r3,-30156(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30156);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f7858
	if (!ctx.cr6.eq) goto loc_820F7858;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x820ef558
	ctx.lr = 0x820F7840;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7850
	if (ctx.cr6.eq) goto loc_820F7850;
	// bl 0x820f6bf8
	ctx.lr = 0x820F784C;
	sub_820F6BF8(ctx, base);
	// b 0x820f7854
	goto loc_820F7854;
loc_820F7850:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7854:
	// stw r3,-30156(r31)
	REX_STORE_U32(ctx.r31.u32 + -30156, ctx.r3.u32);
loc_820F7858:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820fa8e8
	ctx.lr = 0x820F7860;
	sub_820FA8E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f78a8
	if (ctx.cr6.eq) goto loc_820F78A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820F78A8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F8638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x820F8640;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 540);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r22,8(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r24,12(r4)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r29,16(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// beq cr6,0x820f8670
	if (ctx.cr6.eq) goto loc_820F8670;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f86f8
	if (ctx.cr6.eq) goto loc_820F86F8;
loc_820F8670:
	// vspltisw128 v63,-1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_set1_epi32(int(0xFFFFFFFF)));
	// dcbzl r0,r25
	ea = (ctx.r25.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// lwz r11,288(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 288);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f86a4
	if (!ctx.cr6.gt) goto loc_820F86A4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820F868C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r9,288(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 288);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820f868c
	if (ctx.cr6.lt) goto loc_820F868C;
loc_820F86A4:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r11,-13728(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -13728);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820f86c0
	if (ctx.cr6.eq) goto loc_820F86C0;
	// lwz r11,696(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 696);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f86f8
	if (!ctx.cr6.eq) goto loc_820F86F8;
loc_820F86C0:
	// lwz r11,256(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// dcbzl r0,r11
	ea = (ctx.r11.u32) & ~127;
	memset((void*)REX_RAW_ADDR(ea), 0, 128);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,292(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 292);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x820f86f8
	if (!ctx.cr6.gt) goto loc_820F86F8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820F86DC:
	// lwz r9,256(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 256);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stvx128 v63,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r8,292(r25)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + 292);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x820f86dc
	if (ctx.cr6.lt) goto loc_820F86DC;
loc_820F86F8:
	// lwz r30,700(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 700);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821952f8
	ctx.lr = 0x820F8708;
	sub_821952F8(ctx, base);
	// lwz r9,692(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 692);
	// lwz r8,20(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// lwz r7,24(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r9,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// lwz r6,136(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// lwz r5,128(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r3,132(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// or r7,r4,r10
	ctx.r7.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r6,r8,r3
	ctx.r6.u64 = ctx.r8.u64 | ctx.r3.u64;
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// and r23,r6,r5
	ctx.r23.u64 = ctx.r6.u64 & ctx.r5.u64;
	// or r4,r23,r11
	ctx.r4.u64 = ctx.r23.u64 | ctx.r11.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820f89a0
	if (ctx.cr6.eq) goto loc_820F89A0;
	// lwz r9,300(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,296(r25)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 296);
	// lwz r26,0(r9)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// beq cr6,0x820f8878
	if (ctx.cr6.eq) goto loc_820F8878;
	// addi r31,r24,28
	ctx.r31.s64 = ctx.r24.s64 + 28;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f87c8
	if (ctx.cr6.eq) goto loc_820F87C8;
loc_820F877C:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// lwz r7,64(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F87B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,16(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820f877c
	if (ctx.cr6.lt) goto loc_820F877C;
loc_820F87C8:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f8838
	if (!ctx.cr6.gt) goto loc_820F8838;
loc_820F87D8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,64(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lvlx128 v63,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v62,v63,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v62.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bctrl 
	ctx.lr = 0x820F8824;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820f87d8
	if (ctx.cr6.lt) goto loc_820F87D8;
loc_820F8838:
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f8878
	if (!ctx.cr6.gt) goto loc_820F8878;
loc_820F8848:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F8864;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,24(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820f8848
	if (ctx.cr6.lt) goto loc_820F8848;
loc_820F8878:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x820f89a0
	if (ctx.cr6.eq) goto loc_820F89A0;
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// addi r31,r29,140
	ctx.r31.s64 = ctx.r29.s64 + 140;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f88e4
	if (!ctx.cr6.gt) goto loc_820F88E4;
loc_820F8894:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// lwz r7,468(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 468);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F88D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,128(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x820f8894
	if (ctx.cr6.lt) goto loc_820F8894;
loc_820F88E4:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f8958
	if (!ctx.cr6.gt) goto loc_820F8958;
loc_820F88F4:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lhz r10,2(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r9,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lhz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// add r7,r10,r30
	ctx.r7.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// andc r10,r26,r11
	ctx.r10.u64 = ctx.r26.u64 & ~ctx.r11.u64;
	// and r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,468(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 468);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcfpsxws128 v60,v61,0
	ctx.fpscr.enableFlushMode();
	simde_mm_store_si128((simde__m128i*)ctx.v60.s32, rex::ppc::simde_mm_vctsxs(simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v60,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bctrl 
	ctx.lr = 0x820F8944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,132(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x820f88f4
	if (ctx.cr6.lt) goto loc_820F88F4;
loc_820F8958:
	// lwz r11,136(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820f89a0
	if (!ctx.cr6.gt) goto loc_820F89A0;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_820F896C:
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,-2(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + -2);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r5,2(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2);
	// lwz r8,468(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820F898C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,136(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r7
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820f896c
	if (ctx.cr6.lt) goto loc_820F896C;
loc_820F89A0:
	// lwz r11,692(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 692);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820f8a80
	if (ctx.cr6.eq) goto loc_820F8A80;
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v59,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r25,320
	ctx.r11.s64 = ctx.r25.s64 + 320;
	// lvx128 v58,r0,r29
	ea = (ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r25,384
	ctx.r10.s64 = ctx.r25.s64 + 384;
	// addi r9,r25,400
	ctx.r9.s64 = ctx.r25.s64 + 400;
	// addi r8,r25,416
	ctx.r8.s64 = ctx.r25.s64 + 416;
	// lvx128 v48,r29,r31
	ea = (ctx.r29.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r7,r25,432
	ctx.r7.s64 = ctx.r25.s64 + 432;
	// addi r6,r25,448
	ctx.r6.s64 = ctx.r25.s64 + 448;
	// lvx128 v57,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r5,r25,464
	ctx.r5.s64 = ctx.r25.s64 + 464;
	// lvx128 v56,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r4,r25,480
	ctx.r4.s64 = ctx.r25.s64 + 480;
	// lvx128 v55,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r3,r25,496
	ctx.r3.s64 = ctx.r25.s64 + 496;
	// lvx128 v54,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r30,32
	ctx.r30.s64 = 32;
	// lvx128 v53,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r28,48
	ctx.r28.s64 = 48;
	// lvx128 v52,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r27,64
	ctx.r27.s64 = 64;
	// lvx128 v51,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r26,80
	ctx.r26.s64 = 80;
	// lvx128 v50,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r24,96
	ctx.r24.s64 = 96;
	// lvx128 v49,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r31,112
	ctx.r31.s64 = 112;
	// lvx128 v47,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v45,v57,v59
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)ctx.v59.u8)));
	// lvx128 v44,r29,r27
	ea = (ctx.r29.u32 + ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v43,v56,v58
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v58.u8)));
	// lvx128 v42,r29,r26
	ea = (ctx.r29.u32 + ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v41,v55,v48
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)ctx.v48.u8)));
	// lvx128 v40,r29,r24
	ea = (ctx.r29.u32 + ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v39,v54,v47
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v47.u8)));
	// lvx128 v38,r29,r31
	ea = (ctx.r29.u32 + ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v37,v53,v46
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v53.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// vor128 v36,v52,v44
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v44.u8)));
	// stvx128 v45,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v45.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v35,v51,v42
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v42.u8)));
	// stvx128 v43,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v43.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v34,v50,v40
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v40.u8)));
	// stvx128 v41,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v41.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v33,v49,v38
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v49.u8), simde_mm_load_si128((simde__m128i*)ctx.v38.u8)));
	// stvx128 v39,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v39.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v37,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v37.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v36.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v35.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v34.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r3
	ea = (ctx.r3.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v33.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_820F8A80:
	// stw r22,536(r25)
	REX_STORE_U32(ctx.r25.u32 + 536, ctx.r22.u32);
	// stw r21,532(r25)
	REX_STORE_U32(ctx.r25.u32 + 532, ctx.r21.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210C0C8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8210C0E8) {
	REX_FUNC_PROLOGUE();
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bne cr6,0x8210c108
	if (!ctx.cr6.eq) goto loc_8210C108;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210C108:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,488(r11)
	REX_STORE_U32(ctx.r11.u32 + 488, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210CB10) {
	REX_FUNC_PROLOGUE();
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210CB48) {
	REX_FUNC_PROLOGUE();
	// lwz r11,440(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 440);
	// lwz r10,436(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 436);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r3,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210CF68) {
	REX_FUNC_PROLOGUE();
	// stw r4,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210CFC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8210d000
	if (!ctx.cr6.eq) goto loc_8210D000;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stw r10,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,228(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,232(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 232, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,236(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// blr 
	return;
loc_8210D000:
	// mulli r11,r5,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 136, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,140(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 140, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,144(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 144, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,148(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + 148, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E630) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// addi r9,r11,7212
	ctx.r9.s64 = ctx.r11.s64 + 7212;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8210e664
	if (ctx.cr6.eq) goto loc_8210E664;
	// bl 0x8215e470
	ctx.lr = 0x8210E660;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210E664:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210ECD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,7204
	ctx.r9.s64 = ctx.r11.s64 + 7204;
	// addi r8,r10,7180
	ctx.r8.s64 = ctx.r10.s64 + 7180;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210ed18
	if (ctx.cr6.eq) goto loc_8210ED18;
	// bl 0x8215e470
	ctx.lr = 0x8210ED14;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210ED18:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210F480) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// b 0x8210ae78
	sub_8210AE78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210F4A8) {
	REX_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210F540) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FDA0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FDB0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,7808
	ctx.r9.s64 = ctx.r11.s64 + 7808;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210FE60) {
	REX_FUNC_PROLOGUE();
	// stw r4,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82110140) {
	REX_FUNC_PROLOGUE();
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne cr6,0x82110160
	if (!ctx.cr6.eq) goto loc_82110160;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82110160:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r9,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r9.u32);
	// beq cr6,0x8211024c
	if (ctx.cr6.eq) goto loc_8211024C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r3,32
	ctx.r10.s64 = ctx.r3.s64 + 32;
loc_82110178:
	// lbzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stbx r8,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u8);
	// beq cr6,0x82110244
	if (ctx.cr6.eq) goto loc_82110244;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,1(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 1);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,33(r7)
	REX_STORE_U8(ctx.r7.u32 + 33, ctx.r5.u8);
	// beq cr6,0x82110204
	if (ctx.cr6.eq) goto loc_82110204;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,2(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 2);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,34(r7)
	REX_STORE_U8(ctx.r7.u32 + 34, ctx.r5.u8);
	// beq cr6,0x82110218
	if (ctx.cr6.eq) goto loc_82110218;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,3(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 3);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,35(r7)
	REX_STORE_U8(ctx.r7.u32 + 35, ctx.r5.u8);
	// beq cr6,0x8211022c
	if (ctx.cr6.eq) goto loc_8211022C;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stb r5,36(r7)
	REX_STORE_U8(ctx.r7.u32 + 36, ctx.r5.u8);
	// beq cr6,0x82110240
	if (ctx.cr6.eq) goto loc_82110240;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// cmpwi cr6,r11,255
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 255, ctx.xer);
	// blt cr6,0x82110178
	if (ctx.cr6.lt) goto loc_82110178;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// blr 
	return;
loc_82110204:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// blr 
	return;
loc_82110218:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// blr 
	return;
loc_8211022C:
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
	// blr 
	return;
loc_82110240:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82110244:
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r9,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r9.u8);
loc_8211024C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821158C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821158E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82115920
	if (ctx.cr0.lt) goto loc_82115920;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82115904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82115920
	if (ctx.cr0.lt) goto loc_82115920;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82115920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82115920:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821162A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82116198
	ctx.lr = 0x821162C0;
	sub_82116198(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821162d0
	if (ctx.cr0.eq) goto loc_821162D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x821162D0;
	sub_82118BC8(ctx, base);
loc_821162D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82116A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82116A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82375264
	ctx.lr = 0x82116A4C;
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,524(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 524);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82116a90
	if (ctx.cr6.eq) goto loc_82116A90;
	// lwz r31,508(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 508);
	// stfs f0,524(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 524, temp.u32);
	// b 0x82116a88
	goto loc_82116A88;
loc_82116A68:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82116a80
	if (ctx.cr6.eq) goto loc_82116A80;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82116a84
	goto loc_82116A84;
loc_82116A80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82116A84:
	// bl 0x8211a020
	ctx.lr = 0x82116A88;
	sub_8211A020(ctx, base);
loc_82116A88:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82116a68
	if (!ctx.cr6.eq) goto loc_82116A68;
loc_82116A90:
	// lwz r11,112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// addi r29,r30,112
	ctx.r29.s64 = ctx.r30.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116AA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116af0
	if (ctx.cr6.eq) goto loc_82116AF0;
	// lwz r31,556(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 556);
loc_82116AB8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82116ad0
	if (ctx.cr6.eq) goto loc_82116AD0;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82116ad4
	goto loc_82116AD4;
loc_82116AD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82116AD4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116af0
	if (ctx.cr6.eq) goto loc_82116AF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116AEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82116ab8
	goto loc_82116AB8;
loc_82116AF0:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116B04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8211bb90
	ctx.lr = 0x82116B08;
	sub_8211BB90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82118BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82118BD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,-4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r27,-8(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + -8);
	// subf r30,r11,r3
	ctx.r30.u64 = ctx.r3.u64 - ctx.r11.u64;
	// addi r31,r10,-17520
	ctx.r31.s64 = ctx.r10.s64 + -17520;
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,-8
	ctx.r28.s64 = ctx.r11.s64 + -8;
	// bl 0x823751a4
	ctx.lr = 0x82118C00;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,-8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// subf r9,r9,r29
	ctx.r9.u64 = ctx.r29.u64 - ctx.r9.u64;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// xor r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82375194
	ctx.lr = 0x82118C34;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r27,2,17,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x7FFC;
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r28.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// subf r9,r28,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r28.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82119BF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119C2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119C44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211A7E8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82126b70
	sub_82126B70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211A880) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8211a7f0
	sub_8211A7F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211A988) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8211A990;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211a9b8
	if (!ctx.cr6.eq) goto loc_8211A9B8;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// addi r31,r11,584
	ctx.r31.s64 = ctx.r11.s64 + 584;
loc_8211A9B8:
	// rlwinm. r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211a9c4
	if (ctx.cr0.eq) goto loc_8211A9C4;
	// ori r28,r28,2
	ctx.r28.u64 = ctx.r28.u64 | 2;
loc_8211A9C4:
	// stfs f1,200(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 200, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8211ffa0
	ctx.lr = 0x8211A9D4;
	sub_8211FFA0(ctx, base);
	// stw r3,208(r30)
	REX_STORE_U32(ctx.r30.u32 + 208, ctx.r3.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,212(r30)
	REX_STORE_U32(ctx.r30.u32 + 212, ctx.r11.u32);
	// bl 0x8211fd60
	ctx.lr = 0x8211A9E8;
	sub_8211FD60(ctx, base);
	// sth r3,216(r30)
	REX_STORE_U16(ctx.r30.u32 + 216, ctx.r3.u16);
	// lhz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 12);
	// stw r11,204(r30)
	REX_STORE_U32(ctx.r30.u32 + 204, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211aa08
	if (!ctx.cr6.eq) goto loc_8211AA08;
	// lwz r27,68(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// b 0x8211aa14
	goto loc_8211AA14;
loc_8211AA08:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,68(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
loc_8211AA14:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8211aa44
	if (!ctx.cr6.eq) goto loc_8211AA44;
	// lwz r27,212(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 212);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r27,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r27.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211aa44
	if (ctx.cr0.eq) goto loc_8211AA44;
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// cmplwi cr6,r27,32000
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 32000, ctx.xer);
	// bge cr6,0x8211aa44
	if (!ctx.cr6.lt) goto loc_8211AA44;
	// addi r27,r27,375
	ctx.r27.s64 = ctx.r27.s64 + 375;
loc_8211AA44:
	// lhz r11,2(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 2);
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// stw r27,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r27.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r27,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r27.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r30)
	REX_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// bl 0x82128280
	ctx.lr = 0x8211AA6C;
	sub_82128280(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,4919
	ctx.r11.s64 = 322371584;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r25,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r25,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// ori r22,r11,61441
	ctx.r22.u64 = ctx.r11.u64 | 61441;
	// blt 0x8211aca8
	if (ctx.cr0.lt) goto loc_8211ACA8;
	// lhz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8211aaa0
	if (!ctx.cr6.eq) goto loc_8211AAA0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82119610
	ctx.lr = 0x8211AA9C;
	sub_82119610(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8211AAA0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8211aca8
	if (ctx.cr6.lt) goto loc_8211ACA8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm. r24,r28,0,30,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r26,r11,8256
	ctx.r26.s64 = ctx.r11.s64 + 8256;
	// beq 0x8211aac8
	if (ctx.cr0.eq) goto loc_8211AAC8;
	// lwz r11,212(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 212);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8211ab58
	if (ctx.cr6.eq) goto loc_8211AB58;
loc_8211AAC8:
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821193d0
	ctx.lr = 0x8211AAD0;
	sub_821193D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8211aca8
	if (ctx.cr0.lt) goto loc_8211ACA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// bne cr6,0x8211ab04
	if (!ctx.cr6.eq) goto loc_8211AB04;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,200(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lfs f0,8272(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_8211AB04:
	// stw r25,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AB40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AB54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,220(r30)
	REX_STORE_U32(ctx.r30.u32 + 220, ctx.r28.u32);
loc_8211AB58:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211abe0
	if (!ctx.cr6.eq) goto loc_8211ABE0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8211abe0
	if (!ctx.cr6.eq) goto loc_8211ABE0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82119580
	ctx.lr = 0x8211AB78;
	sub_82119580(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8211aca8
	if (ctx.cr0.lt) goto loc_8211ACA8;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// stw r25,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211ABAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211ABC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211ABDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,224(r30)
	REX_STORE_U32(ctx.r30.u32 + 224, ctx.r28.u32);
loc_8211ABE0:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r4,r30,144
	ctx.r4.s64 = ctx.r30.s64 + 144;
	// lwz r9,120(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// addi r10,r30,140
	ctx.r10.s64 = ctx.r30.s64 + 140;
	// stw r4,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AC24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8211aca8
	if (ctx.cr0.eq) goto loc_8211ACA8;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8211aca8
	if (ctx.cr6.eq) goto loc_8211ACA8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8211aca8
	if (ctx.cr6.eq) goto loc_8211ACA8;
	// srawi r11,r31,16
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x8211aca8
	if (ctx.cr6.eq) goto loc_8211ACA8;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211aca0
	if (ctx.cr0.eq) goto loc_8211ACA0;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x8211aca0
	if (ctx.cr6.eq) goto loc_8211ACA0;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211aca0
	if (ctx.cr6.eq) goto loc_8211ACA0;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8211aca8
	if (!ctx.cr6.eq) goto loc_8211ACA8;
	// lis r31,-30570
	ctx.r31.s64 = -2003435520;
	// ori r31,r31,3
	ctx.r31.u64 = ctx.r31.u64 | 3;
	// b 0x8211aca8
	goto loc_8211ACA8;
loc_8211ACA0:
	// lis r31,-30570
	ctx.r31.s64 = -2003435520;
	// ori r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 4;
loc_8211ACA8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x821517d8
	ctx.lr = 0x8211ACB0;
	sub_821517D8(ctx, base);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x821517d8
	ctx.lr = 0x8211ACB8;
	sub_821517D8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8211ad28
	if (ctx.cr6.lt) goto loc_8211AD28;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211acec
	if (ctx.cr6.eq) goto loc_8211ACEC;
	// lwz r3,144(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211ACE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8211ACEC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x8211ad28
	if (ctx.cr6.lt) goto loc_8211AD28;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211AD10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8211ad28
	if (ctx.cr0.lt) goto loc_8211AD28;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r30,188
	ctx.r3.s64 = ctx.r30.s64 + 188;
	// bl 0x8211ee70
	ctx.lr = 0x8211AD24;
	sub_8211EE70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8211AD28:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82123B78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82123B80;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82123ba4
	if (ctx.cr6.eq) goto loc_82123BA4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82123c18
	goto loc_82123C18;
loc_82123BA4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82123bb4
	if (ctx.cr6.lt) goto loc_82123BB4;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// ble cr6,0x82123bc0
	if (!ctx.cr6.gt) goto loc_82123BC0;
loc_82123BB4:
	// lis r25,-30569
	ctx.r25.s64 = -2003369984;
	// ori r25,r25,1
	ctx.r25.u64 = ctx.r25.u64 | 1;
	// b 0x82123c14
	goto loc_82123C14;
loc_82123BC0:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r26,-1
	ctx.r26.s64 = -1;
	// ori r27,r11,65535
	ctx.r27.u64 = ctx.r11.u64 | 65535;
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82123bdc
	if (!ctx.cr6.gt) goto loc_82123BDC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82123BDC:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// addi r28,r11,-17520
	ctx.r28.s64 = ctx.r11.s64 + -17520;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821160e0
	ctx.lr = 0x82123BF8;
	sub_821160E0(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82123c20
	if (!ctx.cr0.eq) goto loc_82123C20;
loc_82123C04:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// bl 0x82123a60
	ctx.lr = 0x82123C14;
	sub_82123A60(ctx, base);
loc_82123C14:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82123C18:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82123C20:
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82123C30;
	sub_8215EC60(ctx, base);
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ble cr6,0x82123c40
	if (!ctx.cr6.gt) goto loc_82123C40;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82123C40:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// bl 0x821160e0
	ctx.lr = 0x82123C54;
	sub_821160E0(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82123c04
	if (ctx.cr0.eq) goto loc_82123C04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82123C6C;
	sub_8215EC60(ctx, base);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82140460
	ctx.lr = 0x82123C78;
	sub_82140460(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r25,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// rotlwi r9,r25,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// stw r3,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lfs f0,2280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r9,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lfs f13,76(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,80(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// b 0x82123c14
	goto loc_82123C14;
}

DEFINE_REX_FUNC(sub_82129488) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82129490;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// bne cr6,0x821294b8
	if (!ctx.cr6.eq) goto loc_821294B8;
loc_821294A8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_821294B8:
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821294a8
	if (ctx.cr6.eq) goto loc_821294A8;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x821294d4
	if (ctx.cr6.gt) goto loc_821294D4;
	// li r25,4
	ctx.r25.s64 = 4;
loc_821294D4:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82129754
	if (ctx.cr6.eq) goto loc_82129754;
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// bne cr6,0x821297ec
	if (!ctx.cr6.eq) goto loc_821297EC;
	// lwz r11,212(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82129570
	if (!ctx.cr6.eq) goto loc_82129570;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82129570
	if (ctx.cr6.gt) goto loc_82129570;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82129528
	if (!ctx.cr6.lt) goto loc_82129528;
	// stw r26,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r26.u32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
loc_82129528:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// subf. r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82129540
	if (ctx.cr0.eq) goto loc_82129540;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82145590
	ctx.lr = 0x82129540;
	sub_82145590(ctx, base);
loc_82129540:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82129568
	if (!ctx.cr6.eq) goto loc_82129568;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x821452f0
	ctx.lr = 0x82129558;
	sub_821452F0(ctx, base);
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82129568:
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x82129700
	goto loc_82129700;
loc_82129570:
	// li r28,-2
	ctx.r28.s64 = -2;
loc_82129574:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821295d4
	if (!ctx.cr6.eq) goto loc_821295D4;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_82129584:
	// lwz r11,240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821295bc
	if (!ctx.cr6.eq) goto loc_821295BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821452f0
	ctx.lr = 0x82129598;
	sub_821452F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82128688
	ctx.lr = 0x821295A0;
	sub_82128688(ctx, base);
	// clrlwi r5,r3,24
	ctx.r5.u64 = ctx.r3.u32 & 0xFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145be0
	ctx.lr = 0x821295B0;
	sub_82145BE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821297f0
	if (ctx.cr6.lt) goto loc_821297F0;
	// b 0x821295c8
	goto loc_821295C8;
loc_821295BC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r26,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_821295C8:
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82129584
	if (ctx.cr6.eq) goto loc_82129584;
loc_821295D4:
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// ble cr6,0x821296c0
	if (!ctx.cr6.gt) goto loc_821296C0;
	// rlwinm r10,r11,5,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r10,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r10.u16);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r6,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// srw r11,r9,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne cr6,0x8212963c
	if (!ctx.cr6.eq) goto loc_8212963C;
	// sth r27,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r27.u16);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82129658
	if (ctx.cr6.lt) goto loc_82129658;
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_8212963C:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// subfc r7,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r7.u64 = ctx.r10.u64 - ctx.r9.u64;
	// eqv r6,r9,r10
	ctx.r6.u64 = ~(ctx.r9.u64 ^ ctx.r10.u64);
	// rlwinm r5,r6,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// sth r3,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r3.u16);
loc_82129658:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82129678
	if (!ctx.cr6.eq) goto loc_82129678;
	// lhz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821296a0
	if (!ctx.cr6.eq) goto loc_821296A0;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x82129574
	goto loc_82129574;
loc_82129678:
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821296a0
	if (!ctx.cr6.eq) goto loc_821296A0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x821296a0
	if (!ctx.cr6.eq) goto loc_821296A0;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// bl 0x821452f0
	ctx.lr = 0x82129698;
	sub_821452F0(ctx, base);
	// stw r27,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r27.u32);
	// b 0x82129574
	goto loc_82129574;
loc_821296A0:
	// lwz r8,12(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x821296ec
	if (ctx.cr6.lt) goto loc_821296EC;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x821296b8
	if (!ctx.cr6.eq) goto loc_821296B8;
	// stw r28,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r28.u32);
loc_821296B8:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// b 0x82129574
	goto loc_82129574;
loc_821296C0:
	// subfic r10,r25,32
	ctx.xer.ca = ctx.r25.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r25.u64;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r25,4
	ctx.r9.s64 = ctx.r25.s64 + 4;
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// sth r6,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r6.u16);
	// slw r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// subfic r3,r4,29
	ctx.xer.ca = ctx.r4.u32 <= 29;
	ctx.r3.u64 = static_cast<uint64_t>(29) - ctx.r4.u64;
	// srw r11,r7,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r3.u8 & 0x3F));
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_821296EC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821296fc
	if (!ctx.cr6.eq) goto loc_821296FC;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82145590
	ctx.lr = 0x821296FC;
	sub_82145590(ctx, base);
loc_821296FC:
	// stw r26,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
loc_82129700:
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82129748
	if (!ctx.cr6.eq) goto loc_82129748;
	// lhz r11,154(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 154);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821297f8
	if (!ctx.cr6.eq) goto loc_821297F8;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ori r7,r10,38528
	ctx.r7.u64 = ctx.r10.u64 | 38528;
	// mulld r6,r8,r9
	ctx.r6.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// divd r5,r6,r7
	ctx.r5.s64 = (ctx.r7.s64 && !(ctx.r6.s64 == INT64_MIN && ctx.r7.s64 == -1)) ? ctx.r6.s64 / ctx.r7.s64 : 0;
	// std r5,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r5.u64);
loc_8212973C:
	// sth r26,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r26.u16);
	// stw r26,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r26.u32);
loc_82129744:
	// stw r27,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r27.u32);
loc_82129748:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821297ec
	if (ctx.cr6.eq) goto loc_821297EC;
loc_82129754:
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x82129794
	if (!ctx.cr6.gt) goto loc_82129794;
	// addi r30,r31,224
	ctx.r30.s64 = ctx.r31.s64 + 224;
loc_82129768:
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145ee0
	ctx.lr = 0x82129774;
	sub_82145EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821297f0
	if (ctx.cr6.lt) goto loc_821297F0;
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bgt cr6,0x82129768
	if (ctx.cr6.gt) goto loc_82129768;
loc_82129794:
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82145ee0
	ctx.lr = 0x821297A0;
	sub_82145EE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821297f0
	if (ctx.cr6.lt) goto loc_821297F0;
	// lhz r11,34(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821297e0
	if (ctx.cr6.eq) goto loc_821297E0;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// li r8,32767
	ctx.r8.s64 = 32767;
loc_821297BC:
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// mulli r9,r11,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r8,112(r10)
	REX_STORE_U16(ctx.r10.u32 + 112, ctx.r8.u16);
	// lhz r7,34(r29)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r29.u32 + 34);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x821297bc
	if (ctx.cr6.lt) goto loc_821297BC;
loc_821297E0:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// stw r26,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r26.u32);
loc_821297EC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821297F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_821297F8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8212973c
	if (!ctx.cr6.eq) goto loc_8212973C;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ld r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r31.u32 + 168);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// ld r7,176(r31)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r31.u32 + 176);
	// ori r6,r10,38528
	ctx.r6.u64 = ctx.r10.u64 | 38528;
	// sth r27,154(r31)
	REX_STORE_U16(ctx.r31.u32 + 154, ctx.r27.u16);
	// mulld r5,r8,r9
	ctx.r5.s64 = static_cast<int64_t>(ctx.r8.u64 * ctx.r9.u64);
	// std r7,168(r31)
	REX_STORE_U64(ctx.r31.u32 + 168, ctx.r7.u64);
	// divd r4,r5,r6
	ctx.r4.s64 = (ctx.r6.s64 && !(ctx.r5.s64 == INT64_MIN && ctx.r6.s64 == -1)) ? ctx.r5.s64 / ctx.r6.s64 : 0;
	// std r4,184(r31)
	REX_STORE_U64(ctx.r31.u32 + 184, ctx.r4.u64);
	// b 0x82129744
	goto loc_82129744;
}

DEFINE_REX_FUNC(sub_82134668) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82134368
	ctx.lr = 0x82134680;
	sub_82134368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82134690
	if (ctx.cr0.lt) goto loc_82134690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821344e8
	ctx.lr = 0x82134690;
	sub_821344E8(ctx, base);
loc_82134690:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134C68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,26732
	ctx.r11.s64 = ctx.r11.s64 + 26732;
	// addi r10,r10,26688
	ctx.r10.s64 = ctx.r10.s64 + 26688;
	// addi r9,r9,26644
	ctx.r9.s64 = ctx.r9.s64 + 26644;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x82134cac
	if (ctx.cr0.eq) goto loc_82134CAC;
	// bl 0x82118bc8
	ctx.lr = 0x82134CAC;
	sub_82118BC8(ctx, base);
loc_82134CAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821369B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,357
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 357, ctx.xer);
	// beq cr6,0x821369f8
	if (ctx.cr6.eq) goto loc_821369F8;
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_821369F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135410
	ctx.lr = 0x82136A00;
	sub_82135410(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82136b44
	if (ctx.cr6.eq) goto loc_82136B44;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82136b30
	if (ctx.cr6.eq) goto loc_82136B30;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82136aa4
	if (ctx.cr6.eq) goto loc_82136AA4;
	// cmpwi cr6,r11,352
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 352, ctx.xer);
	// ble cr6,0x82136b58
	if (!ctx.cr6.gt) goto loc_82136B58;
	// cmpwi cr6,r11,354
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 354, ctx.xer);
	// ble cr6,0x82136a54
	if (!ctx.cr6.gt) goto loc_82136A54;
	// cmpwi cr6,r11,357
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 357, ctx.xer);
	// beq cr6,0x82136a48
	if (ctx.cr6.eq) goto loc_82136A48;
	// cmpwi cr6,r11,358
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 358, ctx.xer);
	// bne cr6,0x82136b58
	if (!ctx.cr6.eq) goto loc_82136B58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135948
	ctx.lr = 0x82136A44;
	sub_82135948(ctx, base);
	// b 0x82136b38
	goto loc_82136B38;
loc_82136A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135818
	ctx.lr = 0x82136A50;
	sub_82135818(ctx, base);
	// b 0x82136b38
	goto loc_82136B38;
loc_82136A54:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne cr6,0x82136a8c
	if (!ctx.cr6.eq) goto loc_82136A8C;
	// lhz r10,18(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82136A8C:
	// lhz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// b 0x82136b14
	goto loc_82136B14;
loc_82136AA4:
	// lhz r10,14(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// li r11,1
	ctx.r11.s64 = 1;
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r10,-32
	ctx.r8.s64 = ctx.r10.s64 + -32;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// addic r9,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// bne cr6,0x82136ae0
	if (!ctx.cr6.eq) goto loc_82136AE0;
	// lhz r9,18(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 18);
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// beq cr6,0x82136ae0
	if (ctx.cr6.eq) goto loc_82136AE0;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
loc_82136AE0:
	// lhz r9,2(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// lhz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 12);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82136B14:
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82136b58
	if (!ctx.cr6.eq) goto loc_82136B58;
loc_82136B28:
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82136b58
	goto loc_82136B58;
loc_82136B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135548
	ctx.lr = 0x82136B38;
	sub_82135548(ctx, base);
loc_82136B38:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82136b58
	if (!ctx.cr0.eq) goto loc_82136B58;
	// b 0x82136b28
	goto loc_82136B28;
loc_82136B44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135478
	ctx.lr = 0x82136B4C;
	sub_82135478(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82136B58:
	// lhz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82136bac
	if (!ctx.cr6.eq) goto loc_82136BAC;
	// lhz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x82136ba8
	if (ctx.cr6.lt) goto loc_82136BA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82136bac
	if (ctx.cr6.eq) goto loc_82136BAC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82136B80:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// and. r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82136b80
	if (!ctx.cr0.eq) goto loc_82136B80;
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82136bac
	if (ctx.cr6.eq) goto loc_82136BAC;
loc_82136BA8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82136BAC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82136bcc
	if (!ctx.cr6.eq) goto loc_82136BCC;
	// cmplwi cr6,r9,357
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 357, ctx.xer);
	// beq cr6,0x82136bcc
	if (ctx.cr6.eq) goto loc_82136BCC;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82135a78
	ctx.lr = 0x82136BCC;
	sub_82135A78(ctx, base);
loc_82136BCC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213FCC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// lfs f11,26872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26872);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26868(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26868);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2392(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2392);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x8213fde8
	if (ctx.cr6.lt) goto loc_8213FDE8;
	// addi r8,r5,-3
	ctx.r8.s64 = ctx.r5.s64 + -3;
	// addi r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 + 12;
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// subf r7,r3,r4
	ctx.r7.u64 = ctx.r4.u64 - ctx.r3.u64;
loc_8213FCF4:
	// lfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213fd08
	if (!ctx.cr6.lt) goto loc_8213FD08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8213fd14
	goto loc_8213FD14;
loc_8213FD08:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8213fd14
	if (!ctx.cr6.gt) goto loc_8213FD14;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8213FD14:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfsx f0,r7,r11
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// bge cr6,0x8213fd40
	if (!ctx.cr6.lt) goto loc_8213FD40;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8213fd4c
	goto loc_8213FD4C;
loc_8213FD40:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8213fd4c
	if (!ctx.cr6.gt) goto loc_8213FD4C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8213FD4C:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// bge cr6,0x8213fd78
	if (!ctx.cr6.lt) goto loc_8213FD78;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8213fd84
	goto loc_8213FD84;
loc_8213FD78:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8213fd84
	if (!ctx.cr6.gt) goto loc_8213FD84;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8213FD84:
	// fmuls f10,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f0,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f9,f10
	ctx.f9.s64 = std::isnan(ctx.f10.f64) ? int64_t(0x80000000U) : (ctx.f10.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bge cr6,0x8213fdb0
	if (!ctx.cr6.lt) goto loc_8213FDB0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8213fdbc
	goto loc_8213FDBC;
loc_8213FDB0:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8213fdbc
	if (!ctx.cr6.gt) goto loc_8213FDBC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8213FDBC:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r6,-12(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x8213fcf4
	if (ctx.cr6.lt) goto loc_8213FCF4;
loc_8213FDE8:
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r8,r9,r5
	ctx.r8.u64 = ctx.r5.u64 - ctx.r9.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8213FE04:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213fe18
	if (!ctx.cr6.lt) goto loc_8213FE18;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x8213fe24
	goto loc_8213FE24;
loc_8213FE18:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8213fe24
	if (!ctx.cr6.gt) goto loc_8213FE24;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_8213FE24:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f10.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -12);
	// rlwinm r8,r9,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8213fe04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213FE04;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141D30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82141D38;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82141dd8
	if (!ctx.cr6.eq) goto loc_82141DD8;
	// lhz r11,580(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82142060
	if (!ctx.cr6.gt) goto loc_82142060;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82141D70:
	// lwz r8,584(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// lhzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// mulli r8,r4,1776
	ctx.r8.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1776));
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lhz r3,114(r11)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r11.u32 + 114);
	// lwz r8,424(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// extsh r7,r3
	ctx.r7.s64 = ctx.r3.s16;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lhzx r4,r6,r5
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + ctx.r5.u32);
	// sth r4,124(r11)
	REX_STORE_U16(ctx.r11.u32 + 124, ctx.r4.u16);
	// sth r4,118(r11)
	REX_STORE_U16(ctx.r11.u32 + 118, ctx.r4.u16);
	// lhz r3,580(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r11,r3
	ctx.r11.s64 = ctx.r3.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141d70
	if (ctx.cr6.lt) goto loc_82141D70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_82141DD8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82142060
	if (!ctx.cr6.eq) goto loc_82142060;
	// lhz r11,580(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82142058
	if (!ctx.cr6.gt) goto loc_82142058;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lfs f30,2096(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2096);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2236(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2236);
	ctx.f31.f64 = double(temp.f32);
loc_82141E08:
	// lwz r9,584(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 584);
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lhzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r6,424(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// lhz r5,114(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 114);
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// lwz r3,8(r6)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// sth r9,124(r30)
	REX_STORE_U16(ctx.r30.u32 + 124, ctx.r9.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r8,-2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + -2);
	// sth r8,122(r30)
	REX_STORE_U16(ctx.r30.u32 + 122, ctx.r8.u16);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r5,2(r7)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// sth r5,126(r30)
	REX_STORE_U16(ctx.r30.u32 + 126, ctx.r5.u16);
	// lhz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// ble cr6,0x82141efc
	if (!ctx.cr6.gt) goto loc_82141EFC;
	// lwz r8,256(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// li r11,0
	ctx.r11.s64 = 0;
	// divw r7,r8,r10
	ctx.r7.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x82141e9c
	if (!ctx.cr6.gt) goto loc_82141E9C;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// divw r10,r8,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r8.s32 / ctx.r10.s32 : 0);
loc_82141E8C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x82141e8c
	if (ctx.cr6.gt) goto loc_82141E8C;
loc_82141E9C:
	// lwz r10,244(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 244);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82142074
	if (!ctx.cr6.lt) goto loc_82142074;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82141ecc
	if (!ctx.cr6.gt) goto loc_82141ECC;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82141EBC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82141ebc
	if (ctx.cr6.lt) goto loc_82141EBC;
loc_82141ECC:
	// lwz r7,340(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// mulli r11,r11,116
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(116));
	// lwz r5,352(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// lwzx r4,r7,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r4.u32);
	// stw r3,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r3.u32);
	// lwzx r11,r5,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stw r11,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x82141f20
	goto loc_82141F20;
loc_82141EFC:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,344(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r7,352(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r10.u32);
	// stw r6,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r6.u32);
	// lwz r5,0(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r5,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r5.u32);
loc_82141F20:
	// lwz r10,276(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// lwz r7,272(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// divw r3,r5,r6
	ctx.r3.u64 = uint32_t((ctx.r6.s32 && !(ctx.r5.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r5.s32 / ctx.r6.s32 : 0);
	// divw r10,r4,r6
	ctx.r10.u64 = uint32_t((ctx.r6.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r4.s32 / ctx.r6.s32 : 0);
	// stw r3,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r3.u32);
	// stw r10,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r10.u32);
	// sth r9,118(r30)
	REX_STORE_U16(ctx.r30.u32 + 118, ctx.r9.u16);
	// lwz r9,264(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// lwz r7,268(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// subf r6,r9,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r9.u64;
	// stw r6,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r6.u32);
	// lwz r5,40(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82141fe0
	if (!ctx.cr6.eq) goto loc_82141FE0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// std r7,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f8,f10,f31
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fdivs f5,f8,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 / ctx.f6.f64));
	// fadds f4,f5,f30
	ctx.f4.f64 = double(float(ctx.f5.f64 + ctx.f30.f64));
	// fctiwz f3,f4
	ctx.f3.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f3,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f3.u64);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r6,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r6.u32);
	// lhz r5,118(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 118);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82141fcc
	if (!ctx.cr6.gt) goto loc_82141FCC;
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
loc_82141FCC:
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// lwz r10,412(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 412);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r8.u32);
loc_82141FE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82141b88
	ctx.lr = 0x82141FEC;
	sub_82141B88(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82142000
	if (!ctx.cr6.eq) goto loc_82142000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 120);
	// bl 0x82141c98
	ctx.lr = 0x82142000;
	sub_82141C98(ctx, base);
loc_82142000:
	// addi r8,r30,130
	ctx.r8.s64 = ctx.r30.s64 + 130;
	// lhz r6,124(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// addi r7,r30,128
	ctx.r7.s64 = ctx.r30.s64 + 128;
	// lhz r5,122(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 122);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82146ea0
	ctx.lr = 0x8214201C;
	sub_82146EA0(ctx, base);
	// addi r9,r30,134
	ctx.r9.s64 = ctx.r30.s64 + 134;
	// addi r8,r30,132
	ctx.r8.s64 = ctx.r30.s64 + 132;
	// lwz r7,140(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// li r4,1
	ctx.r4.s64 = 1;
	// lhz r6,126(r30)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r30.u32 + 126);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r30.u32 + 124);
	// bl 0x82146f70
	ctx.lr = 0x8214203C;
	sub_82146F70(ctx, base);
	// lhz r9,580(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 580);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82141e08
	if (ctx.cr6.lt) goto loc_82141E08;
loc_82142058:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82147040
	ctx.lr = 0x82142060;
	sub_82147040(ctx, base);
loc_82142060:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_82142074:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214D9C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8214D9D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,24
	ctx.r26.s64 = 24;
	// lwz r9,304(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bgt cr6,0x8214da00
	if (ctx.cr6.gt) goto loc_8214DA00;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_8214DA00:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x8214dbe8
	if (!ctx.cr6.gt) goto loc_8214DBE8;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8214da34
	if (!ctx.cr6.eq) goto loc_8214DA34;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8214da3c
	if (!ctx.cr6.eq) goto loc_8214DA3C;
loc_8214DA34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8214dbe8
	if (!ctx.cr6.eq) goto loc_8214DBE8;
loc_8214DA3C:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8214dad4
	if (ctx.cr6.eq) goto loc_8214DAD4;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8214dc24
	if (!ctx.cr6.eq) goto loc_8214DC24;
	// subf r11,r26,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r26.u64;
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8214fab0
	ctx.lr = 0x8214DA64;
	sub_8214FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214dc2c
	if (ctx.cr6.lt) goto loc_8214DC2C;
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// addi r30,r26,-1
	ctx.r30.s64 = ctx.r26.s64 + -1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8214dc24
	if (!ctx.cr6.lt) goto loc_8214DC24;
loc_8214DA7C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214DA8C;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214dc2c
	if (ctx.cr6.lt) goto loc_8214DC2C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r6,304(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8214da7c
	if (ctx.cr6.lt) goto loc_8214DA7C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8214DAD4:
	// addi r27,r31,224
	ctx.r27.s64 = ctx.r31.s64 + 224;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8214fab0
	ctx.lr = 0x8214DAE4;
	sub_8214FAB0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214dc2c
	if (ctx.cr6.lt) goto loc_8214DC2C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214DAFC;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214dc2c
	if (ctx.cr6.lt) goto loc_8214DC2C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r11,r11,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,20(r8)
	REX_STORE_U32(ctx.r8.u32 + 20, ctx.r9.u32);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x8214db78
	if (!ctx.cr6.eq) goto loc_8214DB78;
	// lwz r10,304(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8214dc24
	if (!ctx.cr6.gt) goto loc_8214DC24;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8214DB3C:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8214db3c
	if (ctx.cr6.lt) goto loc_8214DB3C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8214DB78:
	// addic. r29,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r29.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x8214dbc4
	if (!ctx.cr0.gt) goto loc_8214DBC4;
loc_8214DB80:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214DB90;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214dc2c
	if (ctx.cr6.lt) goto loc_8214DC2C;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r11,r11,38
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(38));
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// cmpw cr6,r30,r29
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r29.s32, ctx.xer);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt cr6,0x8214db80
	if (ctx.cr6.lt) goto loc_8214DB80;
loc_8214DBC4:
	// lwz r11,304(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r26,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,6
	ctx.r8.s64 = ctx.r11.s64 + 6;
	// stw r8,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8214DBE8:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8214dc24
	if (!ctx.cr6.gt) goto loc_8214DC24;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8214DBF8:
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r8,120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mulli r10,r10,38
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(38));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r5,304(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 304);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8214dbf8
	if (ctx.cr6.lt) goto loc_8214DBF8;
loc_8214DC24:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
loc_8214DC2C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82153058) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82153060;
	__savegprlr_14(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82153470
	if (ctx.cr6.eq) goto loc_82153470;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82153470
	if (ctx.cr6.eq) goto loc_82153470;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// clrlwi r15,r7,16
	ctx.r15.u64 = ctx.r7.u32 & 0xFFFF;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r16,12
	ctx.r16.s64 = 12;
	// addi r17,r11,-2848
	ctx.r17.s64 = ctx.r11.s64 + -2848;
	// addi r20,r10,-2876
	ctx.r20.s64 = ctx.r10.s64 + -2876;
	// addi r19,r9,-2904
	ctx.r19.s64 = ctx.r9.s64 + -2904;
loc_82153098:
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// blt cr6,0x821530a8
	if (ctx.cr6.lt) goto loc_821530A8;
	// mr r21,r15
	ctx.r21.u64 = ctx.r15.u64;
loc_821530A8:
	// li r10,5
	ctx.r10.s64 = 5;
	// subf r4,r21,r4
	ctx.r4.u64 = ctx.r4.u64 - ctx.r21.u64;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821530C0:
	// cmplw cr6,r8,r21
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x821530dc
	if (!ctx.cr6.lt) goto loc_821530DC;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// rlwinm r7,r10,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x821530e0
	goto loc_821530E0;
loc_821530DC:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_821530E0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821530c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821530C0;
	// lwz r22,-240(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// lwz r24,-244(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// lwz r26,-248(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// lwz r25,-252(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// lwz r23,-256(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
loc_82153108:
	// lwzx r29,r30,r19
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r19.u32);
	// addi r27,r1,-224
	ctx.r27.s64 = ctx.r1.s64 + -224;
	// lwzx r28,r30,r20
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// mullw r11,r25,r29
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r29.s32);
	// stwx r18,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r18.u32);
	// mullw r10,r23,r28
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r28.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// subf r8,r26,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r26.u64;
	// bgt cr6,0x82153138
	if (ctx.cr6.gt) goto loc_82153138;
	// subf r8,r11,r26
	ctx.r8.u64 = ctx.r26.u64 - ctx.r11.u64;
loc_82153138:
	// mullw r11,r25,r28
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// mullw r10,r26,r29
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// subf r9,r24,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r24.u64;
	// bgt cr6,0x82153158
	if (ctx.cr6.gt) goto loc_82153158;
	// subf r9,r11,r24
	ctx.r9.u64 = ctx.r24.u64 - ctx.r11.u64;
loc_82153158:
	// mullw r10,r24,r29
	ctx.r10.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r26,r28
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// ble cr6,0x8215317c
	if (!ctx.cr6.gt) goto loc_8215317C;
	// subf r11,r22,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r22.u64;
	// b 0x82153180
	goto loc_82153180;
loc_8215317C:
	// subf r11,r11,r22
	ctx.r11.u64 = ctx.r22.u64 - ctx.r11.u64;
loc_82153180:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r8,r11,r16
	ctx.r8.u64 = uint32_t((ctx.r16.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r16.s32 == -1)) ? ctx.r11.s32 / ctx.r16.s32 : 0);
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82153194
	if (!ctx.cr6.lt) goto loc_82153194;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82153194:
	// addi r11,r1,-192
	ctx.r11.s64 = ctx.r1.s64 + -192;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// cmplwi cr6,r21,2
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 2, ctx.xer);
	// stwx r8,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r8.u32);
	// ble cr6,0x8215325c
	if (!ctx.cr6.gt) goto loc_8215325C;
	// addi r11,r21,-2
	ctx.r11.s64 = ctx.r21.s64 + -2;
	// addi r31,r3,-1
	ctx.r31.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821531B8:
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mullw r9,r6,r29
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r29.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,-128
	ctx.r9.s64 = ctx.r11.s64 + -128;
	// srawi r10,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r7,r8
	ctx.r11.u64 = uint32_t((ctx.r8.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r7.s32 / ctx.r8.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x821531ec
	if (!ctx.cr6.gt) goto loc_821531EC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821531f8
	goto loc_821531F8;
loc_821531EC:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x821531f8
	if (!ctx.cr6.lt) goto loc_821531F8;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_821531F8:
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82153210
	if (!ctx.cr6.gt) goto loc_82153210;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x8215321c
	goto loc_8215321C;
loc_82153210:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x8215321c
	if (!ctx.cr6.lt) goto loc_8215321C;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_8215321C:
	// rlwinm r11,r11,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r7,r11,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r17.u32);
	// mullw r11,r7,r8
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// srawi r8,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r8,16
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16, ctx.xer);
	// bge cr6,0x82153238
	if (!ctx.cr6.lt) goto loc_82153238;
	// li r8,16
	ctx.r8.s64 = 16;
loc_82153238:
	// subf r11,r9,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r9.u64;
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mullw r6,r11,r11
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// srawi r11,r6,7
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 7;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stwx r11,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r11.u32);
	// bdnz 0x821531b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821531B8;
loc_8215325C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 28, ctx.xer);
	// blt cr6,0x82153108
	if (ctx.cr6.lt) goto loc_82153108;
	// lwz r10,-224(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -224);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,-220(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -220);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82153284
	if (!ctx.cr6.lt) goto loc_82153284;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82153284:
	// lwz r9,-216(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -216);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82153298
	if (!ctx.cr6.lt) goto loc_82153298;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82153298:
	// lwz r9,-212(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -212);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821532ac
	if (!ctx.cr6.lt) goto loc_821532AC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821532AC:
	// lwz r9,-208(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821532c0
	if (!ctx.cr6.lt) goto loc_821532C0;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821532C0:
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821532d4
	if (!ctx.cr6.lt) goto loc_821532D4;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821532D4:
	// lwz r9,-200(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -200);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821532e4
	if (!ctx.cr6.lt) goto loc_821532E4;
	// li r11,6
	ctx.r11.s64 = 6;
loc_821532E4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addic. r8,r21,-2
	ctx.xer.ca = ctx.r21.u32 > 1;
	ctx.r8.s64 = ctx.r21.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwzx r30,r10,r19
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r29,r10,r20
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r25,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r25.u16);
	ctx.r5.u32 = ea;
	// sthu r23,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r23.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82153460
	if (ctx.cr0.eq) goto loc_82153460;
loc_8215331C:
	// mullw r11,r29,r10
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r30,r31
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r11,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r6,r7,r9
	ctx.r6.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r6,7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 7, ctx.xer);
	// ble cr6,0x82153358
	if (!ctx.cr6.gt) goto loc_82153358;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82153364
	goto loc_82153364;
loc_82153358:
	// cmpwi cr6,r6,-8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -8, ctx.xer);
	// bge cr6,0x82153364
	if (!ctx.cr6.lt) goto loc_82153364;
	// li r6,-8
	ctx.r6.s64 = -8;
loc_82153364:
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r11,32767
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32767, ctx.xer);
	// ble cr6,0x8215337c
	if (!ctx.cr6.gt) goto loc_8215337C;
	// li r11,32767
	ctx.r11.s64 = 32767;
	// b 0x82153388
	goto loc_82153388;
loc_8215337C:
	// cmpwi cr6,r11,-32768
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -32768, ctx.xer);
	// bge cr6,0x82153388
	if (!ctx.cr6.lt) goto loc_82153388;
	// li r11,-32768
	ctx.r11.s64 = -32768;
loc_82153388:
	// rlwinm r10,r6,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3C;
	// lwzx r7,r10,r17
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// mullw r10,r7,r9
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x821533a4
	if (!ctx.cr6.lt) goto loc_821533A4;
	// li r9,16
	ctx.r9.s64 = 16;
loc_821533A4:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82153448
	if (ctx.cr6.eq) goto loc_82153448;
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// lbz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r7,-128
	ctx.r7.s64 = ctx.r7.s64 + -128;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// divw r11,r7,r9
	ctx.r11.u64 = uint32_t((ctx.r9.s32 && !(ctx.r7.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r7.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x821533f0
	if (!ctx.cr6.gt) goto loc_821533F0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821533fc
	goto loc_821533FC;
loc_821533F0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x821533fc
	if (!ctx.cr6.lt) goto loc_821533FC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_821533FC:
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// cmpwi cr6,r7,32767
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 32767, ctx.xer);
	// ble cr6,0x82153414
	if (!ctx.cr6.gt) goto loc_82153414;
	// li r7,32767
	ctx.r7.s64 = 32767;
	// b 0x82153420
	goto loc_82153420;
loc_82153414:
	// cmpwi cr6,r7,-32768
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -32768, ctx.xer);
	// bge cr6,0x82153420
	if (!ctx.cr6.lt) goto loc_82153420;
	// li r7,-32768
	ctx.r7.s64 = -32768;
loc_82153420:
	// rlwinm r10,r11,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r10,r10,r17
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8215343c
	if (!ctx.cr6.lt) goto loc_8215343C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8215343C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// b 0x8215344c
	goto loc_8215344C;
loc_82153448:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8215344C:
	// rlwimi r11,r6,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bne cr6,0x8215331c
	if (!ctx.cr6.eq) goto loc_8215331C;
loc_82153460:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82153098
	if (!ctx.cr6.eq) goto loc_82153098;
	// subf r3,r14,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r14.u64;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_82153470:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__restfpr_23) {
	REX_FUNC_PROLOGUE();
	// lfd f23,-72(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f23.u64 = REX_LOAD_U64(ctx.r12.u32 + -72);
	// lfd f24,-64(r12)
	ctx.f24.u64 = REX_LOAD_U64(ctx.r12.u32 + -64);
	// lfd f25,-56(r12)
	ctx.f25.u64 = REX_LOAD_U64(ctx.r12.u32 + -56);
	// lfd f26,-48(r12)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r12.u32 + -48);
	// lfd f27,-40(r12)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r12.u32 + -40);
	// lfd f28,-32(r12)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r12.u32 + -32);
	// lfd f29,-24(r12)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r12.u32 + -24);
	// lfd f30,-16(r12)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r12.u32 + -16);
	// lfd f31,-8(r12)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r12.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215F0B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8215f8d0
	ctx.lr = 0x8215F0C0;
	sub_8215F8D0(ctx, base);
	// lis r11,3
	ctx.r11.s64 = 196608;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// ori r11,r11,17405
	ctx.r11.u64 = ctx.r11.u64 | 17405;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addis r11,r11,39
	ctx.r11.s64 = ctx.r11.s64 + 2555904;
	// addi r11,r11,-24893
	ctx.r11.s64 = ctx.r11.s64 + -24893;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// rlwinm r3,r11,16,17,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215F780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821626e0
	ctx.lr = 0x8215F798;
	sub_821626E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821626b0
	ctx.lr = 0x8215F7A0;
	sub_821626B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8215f598
	ctx.lr = 0x8215F7AC;
	sub_8215F598(ctx, base);
}

DEFINE_REX_FUNC(sub_8215FD78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfd f0,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// addi r11,r11,-24648
	ctx.r11.s64 = ctx.r11.s64 + -24648;
	// lfd f30,-9888(r10)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + -9888);
	// lfd f11,8(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfs f12,32(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfd f10,40(r11)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fmul f13,f11,f0
	ctx.f13.f64 = ctx.f11.f64 * ctx.f0.f64;
	// lfd f9,48(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 48);
	// lfd f8,112(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 112);
	// lfd f7,104(r11)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r11.u32 + 104);
	// lfd f6,96(r11)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r11.u32 + 96);
	// lfd f5,88(r11)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r11.u32 + 88);
	// lfd f4,80(r11)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r11.u32 + 80);
	// lfd f3,72(r11)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r11.u32 + 72);
	// lfd f2,64(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 64);
	// lfd f31,56(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 56);
	// fctid f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvtsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// lfs f13,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsel f12,f1,f13,f12
	ctx.f12.f64 = ctx.f1.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fcfid f13,f11
	ctx.f13.f64 = double(ctx.f11.s64);
	// fnmsub f11,f10,f13,f0
	ctx.f11.f64 = -std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f0.f64);
	// fctidz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f10.u64);
	// ld r9,-32(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// clrldi r8,r9,63
	ctx.r8.u64 = ctx.r9.u64 & 0x1;
	// fnmsub f9,f9,f13,f11
	ctx.f9.f64 = -std::fma(ctx.f9.f64, ctx.f13.f64, -ctx.f11.f64);
	// cmpdi cr6,r8,0
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 0, ctx.xer);
	// fmul f13,f9,f9
	ctx.f13.f64 = ctx.f9.f64 * ctx.f9.f64;
	// fmadd f11,f8,f13,f7
	ctx.f11.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f7.f64);
	// fmadd f10,f11,f13,f6
	ctx.f10.f64 = std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f6.f64);
	// fmadd f8,f10,f13,f5
	ctx.f8.f64 = std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f5.f64);
	// fmadd f7,f8,f13,f4
	ctx.f7.f64 = std::fma(ctx.f8.f64, ctx.f13.f64, ctx.f4.f64);
	// fmadd f6,f7,f13,f3
	ctx.f6.f64 = std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f3.f64);
	// fmadd f5,f6,f13,f2
	ctx.f5.f64 = std::fma(ctx.f6.f64, ctx.f13.f64, ctx.f2.f64);
	// fmadd f4,f5,f13,f31
	ctx.f4.f64 = std::fma(ctx.f5.f64, ctx.f13.f64, ctx.f31.f64);
	// fmadd f3,f4,f13,f30
	ctx.f3.f64 = std::fma(ctx.f4.f64, ctx.f13.f64, ctx.f30.f64);
	// fmul f13,f3,f9
	ctx.f13.f64 = ctx.f3.f64 * ctx.f9.f64;
	// beq cr6,0x8215fe28
	if (ctx.cr6.eq) goto loc_8215FE28;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
loc_8215FE28:
	// ld r10,-24(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// fmul f12,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64 * ctx.f12.f64;
	// cmpdi cr6,r10,0
	ctx.cr6.compare<int64_t>(ctx.r10.s64, 0, ctx.xer);
	// beq cr6,0x8215fe4c
	if (ctx.cr6.eq) goto loc_8215FE4C;
	// lfd f13,16(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// fsub f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 - ctx.f13.f64;
	// lfd f0,-23496(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -23496);
	// fsel f1,f13,f0,f12
	ctx.f1.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f12.f64;
loc_8215FE4C:
	// lfd f30,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_64) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// stvx128 v64,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v64.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// stvx128 v65,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v65.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-992
	ctx.r11.s64 = -992;
	// stvx128 v66,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v66.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-976
	ctx.r11.s64 = -976;
	// stvx128 v67,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v67.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-960
	ctx.r11.s64 = -960;
	// stvx128 v68,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v68.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-944
	ctx.r11.s64 = -944;
	// stvx128 v69,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v69.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-928
	ctx.r11.s64 = -928;
	// stvx128 v70,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v70.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-912
	ctx.r11.s64 = -912;
	// stvx128 v71,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v71.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-896
	ctx.r11.s64 = -896;
	// stvx128 v72,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v72.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-880
	ctx.r11.s64 = -880;
	// stvx128 v73,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v73.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v74.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v75.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v76.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v77.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v78.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v79.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v80.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v81.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v82.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v83.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v84.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v85.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v86.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v87.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v88.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v89.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v90.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v91.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v92.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v93.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v94.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v95.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v96.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v97.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v98.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v99.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v100.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v101.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v102.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v103.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v104.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v105.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v106.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v107.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v108.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v109.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v110.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v111.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v112.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v113.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v114.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v115.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v116.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v117.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v118.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v119.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v120.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v121.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v122.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v123.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v124.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v125.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v126.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v127.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_77) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v77.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v78.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v79.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v80.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v81.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v82.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v83.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v84.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v85.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v86.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v87.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v88.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v89.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v90.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v91.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v92.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v93.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v94.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v95.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v96.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v97.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v98.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v99.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v100.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v101.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v102.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v103.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v104.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v105.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v106.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v107.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v108.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v109.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v110.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v111.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v112.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v113.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v114.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v115.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v116.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v117.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v118.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v119.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v120.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v121.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v122.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v123.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v124.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v125.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v126.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82164620) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82164530
	ctx.lr = 0x82164644;
	sub_82164530(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821646a4
	if (ctx.cr6.eq) goto loc_821646A4;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r9,r11,21592
	ctx.r9.s64 = ctx.r11.s64 + 21592;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82164664:
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82164694
	if (ctx.cr6.eq) goto loc_82164694;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82164688
	if (ctx.cr6.eq) goto loc_82164688;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82164664
	goto loc_82164664;
loc_82164688:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8215fbe0
	ctx.lr = 0x82164694;
	sub_8215FBE0(ctx, base);
loc_82164694:
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8215fbe0
	ctx.lr = 0x8216469C;
	sub_8215FBE0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_821646A4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	ctx.r12.s64 = ctx.r31.s64 + 112;
	// bl 0x821646c8
	ctx.lr = 0x821646B0;
	sub_821646C8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82166468) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82166470;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// ori r29,r11,65279
	ctx.r29.u64 = ctx.r11.u64 | 65279;
	// li r3,248
	ctx.r3.s64 = 248;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82167100
	ctx.lr = 0x8216649C;
	sub_82167100(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82166528
	if (!ctx.cr6.eq) goto loc_82166528;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82164768
	ctx.lr = 0x821664B8;
	sub_82164768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x821664f4
	if (!ctx.cr0.gt) goto loc_821664F4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8216661c
	if (!ctx.cr6.gt) goto loc_8216661C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x821664f4
	if (!ctx.cr6.eq) goto loc_821664F4;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// li r3,25
	ctx.r3.s64 = 25;
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// bl 0x82166ec0
	ctx.lr = 0x821664F0;
	sub_82166EC0(ctx, base);
	// b 0x8216662c
	goto loc_8216662C;
loc_821664F4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// lfd f0,-9888(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fadd f3,f31,f0
	ctx.f3.f64 = ctx.f31.f64 + ctx.f0.f64;
loc_82166514:
	// li r4,25
	ctx.r4.s64 = 25;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x82167018
	ctx.lr = 0x82166524;
	sub_82167018(ctx, base);
	// b 0x8216662c
	goto loc_8216662C;
loc_82166528:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x8216661c
	if (ctx.cr6.eq) goto loc_8216661C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821647f0
	ctx.lr = 0x82166544;
	sub_821647F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82166564
	if (!ctx.cr6.lt) goto loc_82166564;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821665d8
	if (ctx.cr6.lt) goto loc_821665D8;
	// b 0x82166578
	goto loc_82166578;
loc_82166564:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// subf r10,r31,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82166584
	if (ctx.cr6.gt) goto loc_82166584;
loc_82166578:
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// ble cr6,0x821665b0
	if (!ctx.cr6.gt) goto loc_821665B0;
loc_82166584:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,-23504(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23504);
	// bl 0x821648f8
	ctx.lr = 0x82166594;
	sub_821648F8(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_821665A0:
	// li r3,17
	ctx.r3.s64 = 17;
loc_821665A4:
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
loc_821665A8:
	// fcfid f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(ctx.f0.s64);
	// b 0x82166514
	goto loc_82166514;
loc_821665B0:
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x821665d0
	if (!ctx.cr6.gt) goto loc_821665D0;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821646f0
	ctx.lr = 0x821665C0;
	sub_821646F0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x821665a0
	goto loc_821665A0;
loc_821665D0:
	// cmpwi cr6,r4,-2557
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2557, ctx.xer);
	// bge cr6,0x821665f0
	if (!ctx.cr6.lt) goto loc_821665F0;
loc_821665D8:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fmul f3,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64 * ctx.f30.f64;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x821665a8
	goto loc_821665A8;
loc_821665F0:
	// cmpwi cr6,r4,-1021
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1021, ctx.xer);
	// bge cr6,0x82166614
	if (!ctx.cr6.lt) goto loc_82166614;
	// addi r4,r4,1536
	ctx.r4.s64 = ctx.r4.s64 + 1536;
	// bl 0x821646f0
	ctx.lr = 0x82166600;
	sub_821646F0(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x821665a4
	goto loc_821665A4;
loc_82166614:
	// bl 0x821646f0
	ctx.lr = 0x82166618;
	sub_821646F0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
loc_8216661C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82167100
	ctx.lr = 0x82166628;
	sub_82167100(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_8216662C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216C638) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,10832(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10832);
	ctx.f12.f64 = double(temp.f32);
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f13,28(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x8216c660
	if (!ctx.cr6.eq) goto loc_8216C660;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8216c664
	if (ctx.cr6.eq) goto loc_8216C664;
loc_8216C660:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8216C664:
	// lwz r11,10568(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10568);
	// lfs f12,10840(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 10840);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// rlwimi r11,r10,11,20,20
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x800) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// bne cr6,0x8216c688
	if (!ctx.cr6.eq) goto loc_8216C688;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8216c68c
	if (ctx.cr6.eq) goto loc_8216C68C;
loc_8216C688:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8216C68C:
	// li r12,1
	ctx.r12.s64 = 1;
	// stfs f13,10836(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10836, temp.u32);
	// rlwimi r11,r10,12,19,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// stfs f13,10844(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 10844, temp.u32);
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10568(r3)
	REX_STORE_U32(ctx.r3.u32 + 10568, ctx.r11.u32);
	// ld r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216DD18) {
	REX_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1156);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216E620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8216e338
	sub_8216E338(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821704A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8216fb98
	sub_8216FB98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82171980) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x82171988;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// ld r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// ld r27,32(r3)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ld r28,24(r3)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// ld r30,16(r3)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// ld r29,8(r3)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r3.u32 + 8);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x821719d0
	if (ctx.cr6.eq) goto loc_821719D0;
	// addi r6,r3,1920
	ctx.r6.s64 = ctx.r3.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x82182f88
	ctx.lr = 0x821719CC;
	sub_82182F88(ctx, base);
	// std r26,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
loc_821719D0:
	// cmpldi cr6,r29,0
	ctx.cr6.compare<uint64_t>(ctx.r29.u64, 0, ctx.xer);
	// beq cr6,0x821719f0
	if (ctx.cr6.eq) goto loc_821719F0;
	// addi r6,r31,6016
	ctx.r6.s64 = ctx.r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182f88
	ctx.lr = 0x821719EC;
	sub_82182F88(ctx, base);
	// std r26,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r26.u64);
loc_821719F0:
	// cmpldi cr6,r30,0
	ctx.cr6.compare<uint64_t>(ctx.r30.u64, 0, ctx.xer);
	// beq cr6,0x82171ad0
	if (ctx.cr6.eq) goto loc_82171AD0;
	// rlwinm r11,r30,0,11,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171a14
	if (ctx.cr6.eq) goto loc_82171A14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82183db0
	ctx.lr = 0x82171A10;
	sub_82183DB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82171A14:
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171a38
	if (ctx.cr6.eq) goto loc_82171A38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182858
	ctx.lr = 0x82171A34;
	sub_82182858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82171A38:
	// clrldi r11,r30,52
	ctx.r11.u64 = ctx.r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171a58
	if (ctx.cr6.eq) goto loc_82171A58;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171A58;
	sub_82182BF0(ctx, base);
loc_82171A58:
	// rlwinm r11,r30,0,15,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171a78
	if (ctx.cr6.eq) goto loc_82171A78;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171A78;
	sub_82182BF0(ctx, base);
loc_82171A78:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171aa4
	if (ctx.cr6.eq) goto loc_82171AA4;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171AA4;
	sub_82182BF0(ctx, base);
loc_82171AA4:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	ctx.r11.u64 = ctx.r30.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171acc
	if (ctx.cr6.eq) goto loc_82171ACC;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171ACC;
	sub_82182BF0(ctx, base);
loc_82171ACC:
	// std r26,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r26.u64);
loc_82171AD0:
	// cmpldi cr6,r28,0
	ctx.cr6.compare<uint64_t>(ctx.r28.u64, 0, ctx.xer);
	// beq cr6,0x82171b20
	if (ctx.cr6.eq) goto loc_82171B20;
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171af0
	if (ctx.cr6.eq) goto loc_82171AF0;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182e30
	ctx.lr = 0x82171AF0;
	sub_82182E30(ctx, base);
loc_82171AF0:
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	ctx.r11.u64 = ctx.r28.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171b1c
	if (ctx.cr6.eq) goto loc_82171B1C;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171B1C;
	sub_82182BF0(ctx, base);
loc_82171B1C:
	// std r26,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r26.u64);
loc_82171B20:
	// cmpldi cr6,r27,0
	ctx.cr6.compare<uint64_t>(ctx.r27.u64, 0, ctx.xer);
	// beq cr6,0x82171be4
	if (ctx.cr6.eq) goto loc_82171BE4;
	// li r12,255
	ctx.r12.s64 = 255;
	// rldicr r12,r12,38,25
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171b50
	if (ctx.cr6.eq) goto loc_82171B50;
	// addi r6,r31,10832
	ctx.r6.s64 = ctx.r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171B50;
	sub_82182BF0(ctx, base);
loc_82171B50:
	// li r12,63
	ctx.r12.s64 = 63;
	// rldicr r12,r12,49,14
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171b70
	if (ctx.cr6.eq) goto loc_82171B70;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182cb0
	ctx.lr = 0x82171B70;
	sub_82182CB0(ctx, base);
loc_82171B70:
	// li r12,1
	ctx.r12.s64 = 1;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171b98
	if (ctx.cr6.eq) goto loc_82171B98;
	// addi r6,r31,10112
	ctx.r6.s64 = ctx.r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171B98;
	sub_82182BF0(ctx, base);
loc_82171B98:
	// clrldi r11,r27,26
	ctx.r11.u64 = ctx.r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171bb8
	if (ctx.cr6.eq) goto loc_82171BB8;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82171BB8;
	sub_82182BF0(ctx, base);
loc_82171BB8:
	// rldicr r11,r27,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u64, 0) & 0xC000000000000000;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82171be0
	if (ctx.cr6.eq) goto loc_82171BE0;
	// lbz r11,10944(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10944);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82171bd8
	if (!ctx.cr0.eq) goto loc_82171BD8;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82171be0
	if (ctx.cr0.eq) goto loc_82171BE0;
loc_82171BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217a858
	ctx.lr = 0x82171BE0;
	sub_8217A858(ctx, base);
loc_82171BE0:
	// std r26,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r26.u64);
loc_82171BE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r24,12612(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 12612);
	// addi r23,r31,12298
	ctx.r23.s64 = ctx.r31.s64 + 12298;
	// clrlwi r22,r18,26
	ctx.r22.u64 = ctx.r18.u32 & 0x3F;
	// addi r20,r11,1880
	ctx.r20.s64 = ctx.r11.s64 + 1880;
loc_82171BF8:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82171c10
	if (!ctx.cr6.gt) goto loc_82171C10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181038
	ctx.lr = 0x82171C10;
	sub_82181038(ctx, base);
loc_82171C10:
	// li r11,8450
	ctx.r11.s64 = 8450;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 65535, ctx.xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ble cr6,0x82171c4c
	if (!ctx.cr6.gt) goto loc_82171C4C;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	ctx.r27.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82171C4C:
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r21,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r8,12363(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 12363);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r6,0(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addic r5,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// subfe r5,r5,r8
	temp.u8 = (~ctx.r5.u32 + ctx.r8.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lbzx r4,r23,r8
	ctx.r4.u64 = REX_LOAD_U8(ctx.r23.u32 + ctx.r8.u32);
	// addi r8,r9,512
	ctx.r8.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r5,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r6,1,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = ctx.r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	ctx.r26.u64 = ctx.r4.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// or r30,r7,r22
	ctx.r30.u64 = ctx.r7.u64 | ctx.r22.u64;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 | ctx.r11.u64;
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82171cd0
	if (ctx.cr0.eq) goto loc_82171CD0;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	ctx.r30.u64 = ctx.r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82171CD0:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10940);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82171d00
	if (!ctx.cr0.eq) goto loc_82171D00;
	// lis r11,-16381
	ctx.r11.s64 = -1073545216;
	// ori r11,r11,8705
	ctx.r11.u64 = ctx.r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + ctx.r25.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r25.u32 = ea;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// b 0x82171dc4
	goto loc_82171DC4;
loc_82171D00:
	// lwz r11,13436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13436);
	// addi r3,r31,13424
	ctx.r3.s64 = ctx.r31.s64 + 13424;
	// lwz r10,13440(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 13440);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82171d20
	if (!ctx.cr6.gt) goto loc_82171D20;
	// bl 0x82180060
	ctx.lr = 0x82171D1C;
	sub_82180060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82171D20:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13436(r31)
	REX_STORE_U32(ctx.r31.u32 + 13436, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
loc_82171DC4:
	// subf. r10,r27,r19
	ctx.r10.u64 = ctx.r19.u64 - ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x82171dec
	if (ctx.cr0.eq) goto loc_82171DEC;
	// addi r9,r20,4
	ctx.r9.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r11.u64;
	// add r19,r11,r10
	ctx.r19.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	ctx.r21.u64 = ctx.r9.u64 + ctx.r21.u64;
	// b 0x82171bf8
	goto loc_82171BF8;
loc_82171DEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217FAC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8217FAC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8217fb2c
	if (!ctx.cr6.eq) goto loc_8217FB2C;
	// lwz r11,10900(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 10900);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217faf4
	if (ctx.cr6.eq) goto loc_8217FAF4;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8217FAF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217FAF4:
	// addi r30,r31,10904
	ctx.r30.s64 = ctx.r31.s64 + 10904;
	// lbz r11,268(r13)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r31,10900(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 10900);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x82375524
	ctx.lr = 0x8217FB10;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82375514
	ctx.lr = 0x8217FB28;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x8217fb4c
	goto loc_8217FB4C;
loc_8217FB2C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217fb4c
	if (!ctx.cr6.eq) goto loc_8217FB4C;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	ctx.r11.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 25924);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217fb4c
	if (ctx.cr0.eq) goto loc_8217FB4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217c928
	ctx.lr = 0x8217FB4C;
	sub_8217C928(ctx, base);
loc_8217FB4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82181360) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82181368;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,10908(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10908);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821813ac
	if (ctx.cr6.eq) goto loc_821813AC;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821813ac
	if (ctx.cr6.eq) goto loc_821813AC;
	// bl 0x821812e8
	ctx.lr = 0x82181390;
	sub_821812E8(ctx, base);
	// b 0x8218139c
	goto loc_8218139C;
loc_82181394:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820e9018
	ctx.lr = 0x8218139C;
	sub_820E9018(ctx, base);
loc_8218139C:
	// lwz r10,10988(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10988);
	// lwz r11,10992(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10992);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82181394
	if (!ctx.cr6.eq) goto loc_82181394;
loc_821813AC:
	// lwz r11,15116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 15116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821813f8
	if (ctx.cr6.eq) goto loc_821813F8;
	// lwz r8,15120(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 15120);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r8,3
	ctx.r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r7,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r7.u64;
	// subf r3,r7,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r7.u64;
	// bl 0x82185da8
	ctx.lr = 0x821813F8;
	sub_82185DA8(ctx, base);
loc_821813F8:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15048(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15048);
	// bl 0x8216b138
	ctx.lr = 0x82181404;
	sub_8216B138(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,15052(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 15052);
	// bl 0x8216b138
	ctx.lr = 0x82181410;
	sub_8216B138(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,15048(r31)
	REX_STORE_U32(ctx.r31.u32 + 15048, ctx.r29.u32);
	// stw r29,15052(r31)
	REX_STORE_U32(ctx.r31.u32 + 15052, ctx.r29.u32);
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x82375564
	ctx.lr = 0x8218142C;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8218143c
	if (!ctx.cr6.eq) goto loc_8218143C;
loc_82181434:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82181720
	goto loc_82181720;
loc_8218143C:
	// lwz r25,4(r27)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r26,8(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r28,12(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r30,16(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// bne cr6,0x82181460
	if (!ctx.cr6.eq) goto loc_82181460;
	// lis r25,0
	ctx.r25.s64 = 0;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
loc_82181460:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8218146c
	if (!ctx.cr6.eq) goto loc_8218146C;
	// lis r28,32
	ctx.r28.s64 = 2097152;
loc_8218146C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82181478
	if (!ctx.cr6.eq) goto loc_82181478;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82181478:
	// divwu r27,r28,r11
	ctx.r27.u64 = uint32_t(ctx.r11.u32 ? ctx.r28.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8218149c
	if (!ctx.cr6.eq) goto loc_8218149C;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216b018
	ctx.lr = 0x82181494;
	sub_8216B018(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r3,15048(r31)
	REX_STORE_U32(ctx.r31.u32 + 15048, ctx.r3.u32);
loc_8218149C:
	// li r24,3
	ctx.r24.s64 = 3;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821814d0
	if (!ctx.cr6.eq) goto loc_821814D0;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 & ctx.r24.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x8216b018
	ctx.lr = 0x821814C8;
	sub_8216B018(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,15052(r31)
	REX_STORE_U32(ctx.r31.u32 + 15052, ctx.r3.u32);
loc_821814D0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82181718
	if (ctx.cr6.eq) goto loc_82181718;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82181718
	if (ctx.cr6.eq) goto loc_82181718;
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subfic r23,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r23.u64 = static_cast<uint64_t>(28) - ctx.r11.u64;
	// bl 0x82375274
	ctx.lr = 0x821814F0;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x82375554
	ctx.lr = 0x821814F8;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x82181510
	if (!ctx.cr6.gt) goto loc_82181510;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82181510:
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82375544
	ctx.lr = 0x82181530;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r7,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,15120(r31)
	REX_STORE_U32(ctx.r31.u32 + 15120, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,15148(r31)
	REX_STORE_U32(ctx.r31.u32 + 15148, ctx.r11.u32);
	// stw r26,15108(r31)
	REX_STORE_U32(ctx.r31.u32 + 15108, ctx.r26.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// stw r30,15116(r31)
	REX_STORE_U32(ctx.r31.u32 + 15116, ctx.r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,15136(r31)
	REX_STORE_U32(ctx.r31.u32 + 15136, ctx.r30.u32);
	// stw r30,15140(r31)
	REX_STORE_U32(ctx.r31.u32 + 15140, ctx.r30.u32);
	// stw r27,15124(r31)
	REX_STORE_U32(ctx.r31.u32 + 15124, ctx.r27.u32);
	// stw r8,15112(r31)
	REX_STORE_U32(ctx.r31.u32 + 15112, ctx.r8.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// stw r29,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,10956(r31)
	REX_STORE_U32(ctx.r31.u32 + 10956, ctx.r29.u32);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r29,15128(r31)
	REX_STORE_U32(ctx.r31.u32 + 15128, ctx.r29.u32);
	// bne cr6,0x821815b0
	if (!ctx.cr6.eq) goto loc_821815B0;
	// stw r24,10908(r31)
	REX_STORE_U32(ctx.r31.u32 + 10908, ctx.r24.u32);
loc_821815B0:
	// lwz r11,10908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10908);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,10896(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r9,15132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 15132);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82375564
	ctx.lr = 0x821815E4;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// lis r9,-16367
	ctx.r9.s64 = -1072627712;
	// stw r29,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// ori r8,r9,18432
	ctx.r8.u64 = ctx.r9.u64 | 18432;
	// addi r10,r10,24240
	ctx.r10.s64 = ctx.r10.s64 + 24240;
	// li r7,1023
	ctx.r7.s64 = 1023;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r7,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
loc_82181618:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82181618
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82181618;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,10924(r31)
	REX_STORE_U16(ctx.r31.u32 + 10924, ctx.r10.u16);
	// sth r11,10926(r31)
	REX_STORE_U16(ctx.r31.u32 + 10926, ctx.r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	REX_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x82375534
	ctx.lr = 0x82181664;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217f8e8
	ctx.lr = 0x82181674;
	sub_8217F8E8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8218168c
	if (!ctx.cr6.gt) goto loc_8218168C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181038
	ctx.lr = 0x8218168C;
	sub_82181038(ctx, base);
loc_8218168C:
	// li r11,3330
	ctx.r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	ctx.r11.u64 = ctx.r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r4,476
	ctx.r4.s64 = 476;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// ori r30,r30,55
	ctx.r30.u64 = ctx.r30.u64 | 55;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lwz r10,10900(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10900);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stw r5,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x82181208
	ctx.lr = 0x82181714;
	sub_82181208(ctx, base);
	// b 0x82181434
	goto loc_82181434;
loc_82181718:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82181720:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218D600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8218d598
	ctx.lr = 0x8218D61C;
	sub_8218D598(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82374f94
	ctx.lr = 0x8218D624;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8218d638
	if (!ctx.cr6.eq) goto loc_8218D638;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1596);
	// b 0x8218d640
	goto loc_8218D640;
loc_8218D638:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1592);
loc_8218D640:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,356(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 356);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218d670
	if (ctx.cr6.eq) goto loc_8218D670;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// stw r31,356(r30)
	REX_STORE_U32(ctx.r30.u32 + 356, ctx.r31.u32);
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// ori r11,r11,25088
	ctx.r11.u64 = ctx.r11.u64 | 25088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8217f8e8
	ctx.lr = 0x8218D670;
	sub_8217F8E8(ctx, base);
loc_8218D670:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218E7B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8218E7C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24200);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218e94c
	if (!ctx.cr0.eq) goto loc_8218E94C;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x8216b018
	ctx.lr = 0x8218E7E0;
	sub_8216B018(ctx, base);
	// stw r3,11976(r30)
	REX_STORE_U32(ctx.r30.u32 + 11976, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8218e7f4
	if (!ctx.cr0.eq) goto loc_8218E7F4;
loc_8218E7EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8218e950
	goto loc_8218E950;
loc_8218E7F4:
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r10,24200(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24200);
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r23,256
	ctx.r23.s64 = 16777216;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r26,11016(r30)
	REX_STORE_U32(ctx.r30.u32 + 11016, ctx.r26.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218E814:
	// slw r11,r23,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r9.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218e824
	if (ctx.cr0.eq) goto loc_8218E824;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_8218E824:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8218e814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218E814;
	// lwz r11,15108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 15108);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r7,15112(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 15112);
	// rlwinm. r10,r10,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,11032(r30)
	REX_STORE_U32(ctx.r30.u32 + 11032, ctx.r9.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// stw r8,10988(r30)
	REX_STORE_U32(ctx.r30.u32 + 10988, ctx.r8.u32);
	// stw r26,10992(r30)
	REX_STORE_U32(ctx.r30.u32 + 10992, ctx.r26.u32);
	// stw r11,10952(r30)
	REX_STORE_U32(ctx.r30.u32 + 10952, ctx.r11.u32);
	// stw r7,10960(r30)
	REX_STORE_U32(ctx.r30.u32 + 10960, ctx.r7.u32);
	// beq 0x8218e860
	if (ctx.cr0.eq) goto loc_8218E860;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r25,11324(r30)
	REX_STORE_U32(ctx.r30.u32 + 11324, ctx.r25.u32);
loc_8218E860:
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// lis r27,32512
	ctx.r27.s64 = 2130706432;
	// addi r31,r30,11396
	ctx.r31.s64 = ctx.r30.s64 + 11396;
	// lis r24,-32256
	ctx.r24.s64 = -2113929216;
loc_8218E870:
	// lwz r11,24200(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24200);
	// slw r10,r23,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218e930
	if (ctx.cr0.eq) goto loc_8218E930;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x8218e890
	if (!ctx.cr6.lt) goto loc_8218E890;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r29,11324(r30)
	REX_STORE_U32(ctx.r30.u32 + 11324, ctx.r29.u32);
loc_8218E890:
	// addis r11,r27,16640
	ctx.r11.s64 = ctx.r27.s64 + 1090519040;
	// stw r29,-64(r31)
	REX_STORE_U32(ctx.r31.u32 + -64, ctx.r29.u32);
	// addi r10,r30,10948
	ctx.r10.s64 = ctx.r30.s64 + 10948;
	// stw r27,-40(r31)
	REX_STORE_U32(ctx.r31.u32 + -40, ctx.r27.u32);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r10,-68(r31)
	REX_STORE_U32(ctx.r31.u32 + -68, ctx.r10.u32);
	// addi r28,r31,-68
	ctx.r28.s64 = ctx.r31.s64 + -68;
	// stw r11,-44(r31)
	REX_STORE_U32(ctx.r31.u32 + -44, ctx.r11.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stb r26,-8(r31)
	REX_STORE_U8(ctx.r31.u32 + -8, ctx.r26.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r26,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// addi r4,r11,-9776
	ctx.r4.s64 = ctx.r11.s64 + -9776;
	// stw r31,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r31.u32);
	// addi r3,r31,-36
	ctx.r3.s64 = ctx.r31.s64 + -36;
	// stw r31,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r31.u32);
	// bl 0x823756b4
	ctx.lr = 0x8218E8D4;
	__imp__KeInitializeDpc(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stb r11,-33(r31)
	REX_STORE_U8(ctx.r31.u32 + -33, ctx.r11.u8);
	// addi r8,r31,12
	ctx.r8.s64 = ctx.r31.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r10,-6808
	ctx.r5.s64 = ctx.r10.s64 + -6808;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8216af60
	ctx.lr = 0x8218E8FC;
	sub_8216AF60(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8218e7ec
	if (ctx.cr0.eq) goto loc_8218E7EC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1352(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 1352);
	// bl 0x82375164
	ctx.lr = 0x8218E914;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8218e930
	if (ctx.cr0.lt) goto loc_8218E930;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82375154
	ctx.lr = 0x8218E928;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82374f64
	ctx.lr = 0x8218E930;
	__imp__ObDereferenceObject(ctx, base);
loc_8218E930:
	// lis r11,32512
	ctx.r11.s64 = 2130706432;
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,108
	ctx.r31.s64 = ctx.r31.s64 + 108;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8218e870
	if (ctx.cr6.lt) goto loc_8218E870;
loc_8218E94C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8218E950:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82197170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82197178;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8219719c
	if (!ctx.cr0.eq) goto loc_8219719C;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821971f0
	goto loc_821971F0;
loc_8219719C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x821971b4
	if (ctx.cr0.eq) goto loc_821971B4;
	// lhz r10,6(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
loc_821971B4:
	// subf r9,r11,r4
	ctx.r9.u64 = ctx.r4.u64 - ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// srawi r9,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// divwu r29,r9,r10
	ctx.r29.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// mullw r10,r29,r10
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82197170
	ctx.lr = 0x821971D8;
	sub_82197170(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r10,30,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_821971F0:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82199678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82199680;
	__savegprlr_14(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r4,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// stw r3,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r6,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// stw r8,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r8.u32);
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// stw r5,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r5.u32);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// stw r9,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r9.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// stw r10,492(r1)
	REX_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// stw r22,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// stw r22,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r22.u32);
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// stw r22,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// stw r22,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r22,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r22.u32);
	// stw r22,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// bctrl 
	ctx.lr = 0x82199708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,248(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82199768
	if (ctx.cr6.eq) goto loc_82199768;
loc_8219971C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199750;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r5,248(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8219971c
	if (ctx.cr6.lt) goto loc_8219971C;
loc_82199768:
	// lwz r24,508(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// addi r7,r25,1
	ctx.r7.s64 = ctx.r25.s64 + 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// lwz r10,288(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 288);
	// lwz r8,292(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 292);
	// lwz r11,304(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 304);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,308(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 308);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
	// mullw r26,r11,r7
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// beq cr6,0x821997dc
	if (ctx.cr6.eq) goto loc_821997DC;
	// addi r11,r27,-6156
	ctx.r11.s64 = ctx.r27.s64 + -6156;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
loc_821997B8:
	// lwz r7,8216(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8216);
	// lwz r8,10268(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 10268);
	// lwzu r10,6164(r11)
	ea = 6164 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bdnz 0x821997b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821997B8;
loc_821997DC:
	// lwz r4,500(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// rlwinm r10,r15,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 5) & 0xFFFFFFE0;
	// li r11,144
	ctx.r11.s64 = 144;
	// add r27,r10,r9
	ctx.r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82199834
	if (ctx.cr6.eq) goto loc_82199834;
	// addi r10,r29,268
	ctx.r10.s64 = ctx.r29.s64 + 268;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82199800:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,260(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 260);
	// lwz r6,-260(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + -260);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x8219982c
	if (!ctx.cr6.gt) goto loc_8219982C;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_8219982C:
	// addi r10,r10,788
	ctx.r10.s64 = ctx.r10.s64 + 788;
	// bdnz 0x82199800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199800;
loc_82199834:
	// mulli r10,r4,144
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(144));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r30,8
	ctx.r30.s64 = 8;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r16,r11,r8
	ctx.r16.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r16,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r16.u32);
	// beq cr6,0x82199884
	if (ctx.cr6.eq) goto loc_82199884;
	// addi r11,r14,24
	ctx.r11.s64 = ctx.r14.s64 + 24;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_82199864:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x8219987c
	if (!ctx.cr6.eq) goto loc_8219987C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r10,8
	ctx.r30.s64 = ctx.r10.s64 + 8;
loc_8219987C:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82199864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199864;
loc_82199884:
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821998b8
	if (ctx.cr6.eq) goto loc_821998B8;
	// addi r11,r14,24
	ctx.r11.s64 = ctx.r14.s64 + 24;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_82199898:
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// bne cr6,0x821998b0
	if (!ctx.cr6.eq) goto loc_821998B0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r29,r10,8
	ctx.r29.s64 = ctx.r10.s64 + 8;
loc_821998B0:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82199898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199898;
loc_821998B8:
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8218f000
	ctx.lr = 0x821998CC;
	sub_8218F000(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// bne 0x821998e4
	if (!ctx.cr0.eq) goto loc_821998E4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82199a08
	goto loc_82199A08;
loc_821998E4:
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x821998F8;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199904;
	sub_8218F000(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// stw r14,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r14.u32);
	// bne 0x8219991c
	if (!ctx.cr0.eq) goto loc_8219991C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82199984
	goto loc_82199984;
loc_8219991C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8215ec60
	ctx.lr = 0x8219992C;
	sub_8215EC60(ctx, base);
	// mulli r31,r28,20
	ctx.r31.s64 = static_cast<int64_t>(ctx.r28.u64 * static_cast<uint64_t>(20));
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x8219993C;
	sub_8218F000(ctx, base);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82199a14
	if (!ctx.cr0.eq) goto loc_82199A14;
loc_82199948:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82199954:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82199964;
	sub_8216B138(ctx, base);
	// lwz r23,100(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r21,116(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r20,132(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r19,124(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r18,104(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r17,108(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r25,128(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82199984:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82199990;
	sub_8216B138(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821999a4
	if (ctx.cr6.eq) goto loc_821999A4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821999A4;
	sub_8216B138(ctx, base);
loc_821999A4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821999b8
	if (ctx.cr6.eq) goto loc_821999B8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821999B8;
	sub_8216B138(ctx, base);
loc_821999B8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821999cc
	if (ctx.cr6.eq) goto loc_821999CC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821999CC;
	sub_8216B138(ctx, base);
loc_821999CC:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821999e0
	if (ctx.cr6.eq) goto loc_821999E0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821999E0;
	sub_8216B138(ctx, base);
loc_821999E0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821999f4
	if (ctx.cr6.eq) goto loc_821999F4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r18)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r18.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821999F4;
	sub_8216B138(ctx, base);
loc_821999F4:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82199a08
	if (ctx.cr6.eq) goto loc_82199A08;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r17)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r17.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82199A08;
	sub_8216B138(ctx, base);
loc_82199A08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_82199A14:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82199A20;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199A2C;
	sub_8218F000(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// beq 0x82199948
	if (ctx.cr0.eq) goto loc_82199948;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82199A48;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199A54;
	sub_8218F000(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r25,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// beq 0x82199948
	if (ctx.cr0.eq) goto loc_82199948;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82199A70;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199A7C;
	sub_8218F000(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// beq 0x82199948
	if (ctx.cr0.eq) goto loc_82199948;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82199A98;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199AA4;
	sub_8218F000(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r28.u32);
	// beq 0x82199948
	if (ctx.cr0.eq) goto loc_82199948;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82199AC0;
	sub_8215EC60(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218f000
	ctx.lr = 0x82199ACC;
	sub_8218F000(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// beq 0x82199948
	if (ctx.cr0.eq) goto loc_82199948;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82199AE8;
	sub_8215EC60(ctx, base);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82199be8
	if (ctx.cr6.eq) goto loc_82199BE8;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// addi r30,r11,2064
	ctx.r30.s64 = ctx.r11.s64 + 2064;
loc_82199AFC:
	// lwz r11,-2056(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -2056);
	// addi r10,r30,-2052
	ctx.r10.s64 = ctx.r30.s64 + -2052;
	// lwz r9,-4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// addi r8,r30,2052
	ctx.r8.s64 = ctx.r30.s64 + 2052;
	// lwz r7,2048(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 2048);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r30,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r9,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r9.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r8,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r8.u32);
loc_82199B2C:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r3,r28,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82199bd0
	if (!ctx.cr6.gt) goto loc_82199BD0;
	// addic. r31,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r31.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// beq 0x82199bd0
	if (ctx.cr0.eq) goto loc_82199BD0;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwzx r4,r28,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subfic r29,r4,4
	ctx.xer.ca = ctx.r4.u32 <= 4;
	ctx.r29.u64 = static_cast<uint64_t>(4) - ctx.r4.u64;
loc_82199B58:
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82199b98
	if (!ctx.cr6.lt) goto loc_82199B98;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r6,r7,4
	ctx.r6.s64 = ctx.r7.s64 + 4;
loc_82199B74:
	// lwzx r7,r4,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82199b88
	if (!ctx.cr6.lt) goto loc_82199B88;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82199B88:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82199b74
	if (ctx.cr6.lt) goto loc_82199B74;
loc_82199B98:
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82199b58
	if (ctx.cr6.lt) goto loc_82199B58;
loc_82199BD0:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r28,12
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12, ctx.xer);
	// blt cr6,0x82199b2c
	if (ctx.cr6.lt) goto loc_82199B2C;
	// addi r30,r30,6164
	ctx.r30.s64 = ctx.r30.s64 + 6164;
	// bdnz 0x82199afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199AFC;
	// lwz r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82199BE8:
	// stw r22,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r22.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r22,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r22,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r22,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r21,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// stw r21,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r21.u32);
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// bl 0x82197060
	ctx.lr = 0x82199C1C;
	sub_82197060(ctx, base);
	// stw r28,72(r23)
	REX_STORE_U32(ctx.r23.u32 + 72, ctx.r28.u32);
	// stw r26,76(r23)
	REX_STORE_U32(ctx.r23.u32 + 76, ctx.r26.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// bl 0x8218f058
	ctx.lr = 0x82199C34;
	sub_8218F058(ctx, base);
	// stw r22,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r22.u32);
	// stw r22,20(r25)
	REX_STORE_U32(ctx.r25.u32 + 20, ctx.r22.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r22,24(r25)
	REX_STORE_U32(ctx.r25.u32 + 24, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r22,0(r25)
	REX_STORE_U64(ctx.r25.u32 + 0, ctx.r22.u64);
	// mr r18,r21
	ctx.r18.u64 = ctx.r21.u64;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r22,8(r25)
	REX_STORE_U64(ctx.r25.u32 + 8, ctx.r22.u64);
	// li r20,32
	ctx.r20.s64 = 32;
	// stw r22,128(r27)
	REX_STORE_U32(ctx.r27.u32 + 128, ctx.r22.u32);
	// stw r22,132(r27)
	REX_STORE_U32(ctx.r27.u32 + 132, ctx.r22.u32);
	// stw r22,136(r27)
	REX_STORE_U32(ctx.r27.u32 + 136, ctx.r22.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82199C70;
	sub_8215EC60(ctx, base);
	// lwz r11,248(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// li r17,144
	ctx.r17.s64 = 144;
	// mr r19,r14
	ctx.r19.u64 = ctx.r14.u64;
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// beq cr6,0x8219a5f4
	if (ctx.cr6.eq) goto loc_8219A5F4;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r11,r11,-13696
	ctx.r11.s64 = ctx.r11.s64 + -13696;
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
loc_82199C98:
	// lwz r31,436(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r3.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r19,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r19.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199CE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82199d1c
	if (ctx.cr6.eq) goto loc_82199D1C;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82199d1c
	if (ctx.cr0.eq) goto loc_82199D1C;
	// lwz r11,652(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 652);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,648(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 648);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x8218f0b8
	ctx.lr = 0x82199D14;
	sub_8218F0B8(ctx, base);
	// stw r3,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r3.u32);
	// b 0x82199d20
	goto loc_82199D20;
loc_82199D1C:
	// stw r22,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r22.u32);
loc_82199D20:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// stw r11,4(r19)
	REX_STORE_U32(ctx.r19.u32 + 4, ctx.r11.u32);
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,8(r19)
	REX_STORE_U32(ctx.r19.u32 + 8, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a5c0
	if (ctx.cr6.eq) goto loc_8219A5C0;
	// b 0x82199d48
	goto loc_82199D48;
loc_82199D44:
	// lwz r30,228(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
loc_82199D48:
	// lwz r31,436(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,208(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82199db8
	if (ctx.cr6.eq) goto loc_82199DB8;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82199db8
	if (ctx.cr0.eq) goto loc_82199DB8;
	// lwz r11,652(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 652);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,648(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 648);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x8218f0b8
	ctx.lr = 0x82199DB0;
	sub_8218F0B8(ctx, base);
	// stw r3,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// b 0x82199dbc
	goto loc_82199DBC;
loc_82199DB8:
	// stw r22,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r22.u32);
loc_82199DBC:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lwz r10,468(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// beq cr6,0x82199e28
	if (ctx.cr6.eq) goto loc_82199E28;
	// lwz r11,460(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82199DE0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82199e10
	if (!ctx.cr6.eq) goto loc_82199E10;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82199e10
	if (!ctx.cr6.eq) goto loc_82199E10;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// bne cr6,0x82199e0c
	if (!ctx.cr6.eq) goto loc_82199E0C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x82199e10
	goto loc_82199E10;
loc_82199E0C:
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82199E10:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82199de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82199DE0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82199e30
	if (!ctx.cr6.eq) goto loc_82199E30;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82199e30
	if (!ctx.cr6.eq) goto loc_82199E30;
loc_82199E28:
	// lwz r28,100(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x8219a020
	goto loc_8219A020;
loc_82199E30:
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82199f68
	if (ctx.cr6.eq) goto loc_82199F68;
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82199E48:
	// lwz r30,72(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r28,76(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 76);
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xor. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82199f4c
	if (!ctx.cr0.eq) goto loc_82199F4C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cntlzw r10,r23
	ctx.r10.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xor. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82199f4c
	if (!ctx.cr0.eq) goto loc_82199F4C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82199ee4
	if (ctx.cr6.eq) goto loc_82199EE4;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82199f4c
	if (!ctx.cr6.eq) goto loc_82199F4C;
	// lwz r3,28(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199EA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82199edc
	if (ctx.cr6.eq) goto loc_82199EDC;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82199EBC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82199edc
	if (!ctx.cr0.eq) goto loc_82199EDC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82199ebc
	if (!ctx.cr6.eq) goto loc_82199EBC;
loc_82199EDC:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82199f4c
	if (!ctx.cr0.eq) goto loc_82199F4C;
loc_82199EE4:
	// lwz r31,4(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82199f68
	if (ctx.cr6.eq) goto loc_82199F68;
	// lwz r11,24(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82199f4c
	if (!ctx.cr6.eq) goto loc_82199F4C;
	// lwz r3,28(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82199F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82199f44
	if (ctx.cr6.eq) goto loc_82199F44;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82199F24:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// subf. r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82199f44
	if (!ctx.cr0.eq) goto loc_82199F44;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82199f24
	if (!ctx.cr6.eq) goto loc_82199F24;
loc_82199F44:
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82199f68
	if (ctx.cr0.eq) goto loc_82199F68;
loc_82199F4C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8218f058
	ctx.lr = 0x82199F58;
	sub_8218F058(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82199e48
	if (ctx.cr6.lt) goto loc_82199E48;
loc_82199F68:
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8219a014
	if (!ctx.cr6.eq) goto loc_8219A014;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82199fa0
	if (ctx.cr6.eq) goto loc_82199FA0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// bl 0x82195d38
	ctx.lr = 0x82199F98;
	sub_82195D38(ctx, base);
	// stw r3,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r3.u32);
	// b 0x82199fa8
	goto loc_82199FA8;
loc_82199FA0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
loc_82199FA8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82199fcc
	if (ctx.cr6.eq) goto loc_82199FCC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// bl 0x82195d38
	ctx.lr = 0x82199FC4;
	sub_82195D38(ctx, base);
	// stw r3,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r3.u32);
	// b 0x82199fd4
	goto loc_82199FD4;
loc_82199FCC:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stw r11,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
loc_82199FD4:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,444(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r3,436(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// bl 0x82198bf0
	ctx.lr = 0x82199FEC;
	sub_82198BF0(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82199954
	if (ctx.cr0.lt) goto loc_82199954;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// bl 0x8218f058
	ctx.lr = 0x8219A008;
	sub_8218F058(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_8219A014:
	// lwz r25,132(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lwz r27,124(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
loc_8219A020:
	// lwz r10,484(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// stw r28,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r28.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219a308
	if (ctx.cr6.eq) goto loc_8219A308;
	// lwz r11,476(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
loc_8219A038:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8219a050
	if (!ctx.cr6.eq) goto loc_8219A050;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x8219a060
	if (ctx.cr6.eq) goto loc_8219A060;
loc_8219A050:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,6164
	ctx.r11.s64 = ctx.r11.s64 + 6164;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8219a038
	if (ctx.cr6.lt) goto loc_8219A038;
loc_8219A060:
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8219a308
	if (!ctx.cr6.lt) goto loc_8219A308;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8219a1b4
	if (ctx.cr6.eq) goto loc_8219A1B4;
	// lwz r10,476(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mulli r11,r29,6164
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(6164));
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219A084:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r5,r31,28
	ctx.r5.s64 = ctx.r31.s64 + 28;
	// lwz r6,2060(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 2060);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x8219a184
	if (!ctx.cr6.eq) goto loc_8219A184;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,4112(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 4112);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8219a184
	if (!ctx.cr6.eq) goto loc_8219A184;
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8219a184
	if (!ctx.cr6.eq) goto loc_8219A184;
	// rlwinm. r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r9,r7,12
	ctx.r9.s64 = ctx.r7.s64 + 12;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// beq 0x8219a0fc
	if (ctx.cr0.eq) goto loc_8219A0FC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8219A0DC:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r26,0(r9)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r26,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a0fc
	if (!ctx.cr0.eq) goto loc_8219A0FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8219a0dc
	if (!ctx.cr6.eq) goto loc_8219A0DC;
loc_8219A0FC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a184
	if (!ctx.cr0.eq) goto loc_8219A184;
	// rlwinm. r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r7,2064
	ctx.r9.s64 = ctx.r7.s64 + 2064;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// beq 0x8219a13c
	if (ctx.cr0.eq) goto loc_8219A13C;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
loc_8219A11C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a13c
	if (!ctx.cr0.eq) goto loc_8219A13C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8219a11c
	if (!ctx.cr6.eq) goto loc_8219A11C;
loc_8219A13C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a184
	if (!ctx.cr0.eq) goto loc_8219A184;
	// rlwinm. r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r9,r7,4116
	ctx.r9.s64 = ctx.r7.s64 + 4116;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// beq 0x8219a17c
	if (ctx.cr0.eq) goto loc_8219A17C;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
loc_8219A15C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a17c
	if (!ctx.cr0.eq) goto loc_8219A17C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8219a15c
	if (!ctx.cr6.eq) goto loc_8219A15C;
loc_8219A17C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8219a1b4
	if (ctx.cr0.eq) goto loc_8219A1B4;
loc_8219A184:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,47
	ctx.r11.s64 = ctx.r11.s64 + 47;
	// rlwinm r31,r11,0,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// blt cr6,0x8219a084
	if (ctx.cr6.lt) goto loc_8219A084;
loc_8219A1B4:
	// cmplw cr6,r30,r18
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8219a300
	if (!ctx.cr6.eq) goto loc_8219A300;
	// lwz r10,476(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// mulli r11,r29,6164
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(6164));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r31,r20,r25
	ctx.r31.u64 = ctx.r20.u64 + ctx.r25.u64;
	// addi r4,r30,2064
	ctx.r4.s64 = ctx.r30.s64 + 2064;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// lwz r11,2060(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2060);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4112);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,2060(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2060);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8215e640
	ctx.lr = 0x8219A1FC;
	sub_8215E640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,4112(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4112);
	// addi r4,r30,4116
	ctx.r4.s64 = ctx.r30.s64 + 4116;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// bl 0x8215e640
	ctx.lr = 0x8219A21C;
	sub_8215E640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8215e640
	ctx.lr = 0x8219A244;
	sub_8215E640(ctx, base);
	// stdx r22,r20,r25
	REX_STORE_U64(ctx.r20.u32 + ctx.r25.u32, ctx.r22.u64);
	// std r22,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r22.u64);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8219a2d8
	if (ctx.cr0.eq) goto loc_8219A2D8;
loc_8219A268:
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_8219A274:
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8219a290
	if (ctx.cr6.eq) goto loc_8219A290;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// blt cr6,0x8219a274
	if (ctx.cr6.lt) goto loc_8219A274;
loc_8219A290:
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r11,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFF8;
	// subfic r11,r9,63
	ctx.xer.ca = ctx.r9.u32 <= 63;
	ctx.r11.u64 = static_cast<uint64_t>(63) - ctx.r9.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// ldx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// sld r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r11.u8 & 0x7F));
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// stdx r11,r10,r31
	REX_STORE_U64(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u64);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219a268
	if (ctx.cr6.lt) goto loc_8219A268;
loc_8219A2D8:
	// lwz r11,4112(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4112);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r9,2060(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 2060);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,47
	ctx.r11.s64 = ctx.r11.s64 + 47;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_8219A300:
	// stw r31,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// b 0x8219a30c
	goto loc_8219A30C;
loc_8219A308:
	// stw r25,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
loc_8219A30C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8219a4e4
	if (ctx.cr6.eq) goto loc_8219A4E4;
	// lwz r11,224(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// add r31,r17,r27
	ctx.r31.u64 = ctx.r17.u64 + ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r9,500(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lwz r8,492(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r5,452(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r4,444(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// lwz r3,436(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821990a8
	ctx.lr = 0x8219A348;
	sub_821990A8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82199954
	if (ctx.cr0.lt) goto loc_82199954;
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,128(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8219a374
	if (!ctx.cr0.eq) goto loc_8219A374;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// b 0x8219a4dc
	goto loc_8219A4DC;
loc_8219A374:
	// addi r30,r31,140
	ctx.r30.s64 = ctx.r31.s64 + 140;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82195c70
	ctx.lr = 0x8219A380;
	sub_82195C70(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82195c70
	ctx.lr = 0x8219A398;
	sub_82195C70(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,140
	ctx.r3.s64 = ctx.r11.s64 + 140;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82195c70
	ctx.lr = 0x8219A3B8;
	sub_82195C70(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8219a47c
	if (ctx.cr6.eq) goto loc_8219A47C;
	// lwz r5,128(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
loc_8219A3CC:
	// lwz r4,128(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8219a440
	if (!ctx.cr6.eq) goto loc_8219A440;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8219a440
	if (!ctx.cr6.eq) goto loc_8219A440;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r8,136(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8219a440
	if (!ctx.cr6.eq) goto loc_8219A440;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r11,140
	ctx.r10.s64 = ctx.r11.s64 + 140;
	// rlwinm. r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// beq 0x8219a438
	if (ctx.cr0.eq) goto loc_8219A438;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8219A418:
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r7,r3,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8219a438
	if (!ctx.cr0.eq) goto loc_8219A438;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x8219a418
	if (!ctx.cr6.eq) goto loc_8219A418;
loc_8219A438:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8219a46c
	if (ctx.cr0.eq) goto loc_8219A46C;
loc_8219A440:
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwz r9,132(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,159
	ctx.r11.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// blt cr6,0x8219a3cc
	if (ctx.cr6.lt) goto loc_8219A3CC;
loc_8219A46C:
	// cmplw cr6,r6,r21
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x8219a47c
	if (!ctx.cr6.lt) goto loc_8219A47C;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8219a4a4
	goto loc_8219A4A4;
loc_8219A47C:
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,159
	ctx.r11.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r17,r11,r17
	ctx.r17.u64 = ctx.r11.u64 + ctx.r17.u64;
loc_8219A4A4:
	// li r11,30
	ctx.r11.s64 = 30;
loc_8219A4A8:
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r31.u32);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// bne cr6,0x8219a4c8
	if (!ctx.cr6.eq) goto loc_8219A4C8;
	// addic. r11,r11,-2
	ctx.xer.ca = ctx.r11.u32 > 1;
	ctx.r11.s64 = ctx.r11.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8219a4a8
	if (!ctx.cr0.lt) goto loc_8219A4A8;
	// b 0x8219a4dc
	goto loc_8219A4DC;
loc_8219A4C8:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219a4dc
	if (!ctx.cr6.gt) goto loc_8219A4DC;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_8219A4DC:
	// stw r31,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// b 0x8219a4e8
	goto loc_8219A4E8;
loc_8219A4E4:
	// stw r27,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r27.u32);
loc_8219A4E8:
	// lwz r5,140(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8219a55c
	if (ctx.cr6.eq) goto loc_8219A55C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_8219A500:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r9,20
	ctx.r7.s64 = ctx.r9.s64 + 20;
loc_8219A50C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r3,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a52c
	if (!ctx.cr0.eq) goto loc_8219A52C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8219a50c
	if (!ctx.cr6.eq) goto loc_8219A50C;
loc_8219A52C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8219a54c
	if (!ctx.cr0.eq) goto loc_8219A54C;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a54c
	if (!ctx.cr6.eq) goto loc_8219A54C;
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219a55c
	if (ctx.cr6.eq) goto loc_8219A55C;
loc_8219A54C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,20
	ctx.r9.s64 = ctx.r9.s64 + 20;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8219a500
	if (ctx.cr6.lt) goto loc_8219A500;
loc_8219A55C:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8219a594
	if (!ctx.cr6.eq) goto loc_8219A594;
	// mulli r10,r5,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(20));
	// li r11,5
	ctx.r11.s64 = 5;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8219A580:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8219a580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8219A580;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_8219A594:
	// addi r10,r14,4
	ctx.r10.s64 = ctx.r14.s64 + 4;
	// mulli r11,r6,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(20));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// stwx r11,r10,r19
	REX_STORE_U32(ctx.r10.u32 + ctx.r19.u32, ctx.r11.u32);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82199d44
	if (ctx.cr6.lt) goto loc_82199D44;
	// lwz r26,108(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8219A5C0:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// stw r11,12(r19)
	REX_STORE_U32(ctx.r19.u32 + 12, ctx.r11.u32);
	// lwz r10,248(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r16,r10
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r10.u32, ctx.xer);
	// add r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 + ctx.r19.u64;
	// blt cr6,0x82199c98
	if (ctx.cr6.lt) goto loc_82199C98;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82199954
	if (ctx.cr6.lt) goto loc_82199954;
loc_8219A5F4:
	// lwz r10,232(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r9,140(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r7,516(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r6,524(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// subf r5,r11,r19
	ctx.r5.u64 = ctx.r19.u64 - ctx.r11.u64;
	// lwz r4,532(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r31,540(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 540);
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,160(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r22,156(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r19,172(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r16,164(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// stw r10,524(r24)
	REX_STORE_U32(ctx.r24.u32 + 524, ctx.r10.u32);
	// stw r9,544(r24)
	REX_STORE_U32(ctx.r24.u32 + 544, ctx.r9.u32);
	// stw r8,512(r24)
	REX_STORE_U32(ctx.r24.u32 + 512, ctx.r8.u32);
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// stw r3,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r29,528(r24)
	REX_STORE_U32(ctx.r24.u32 + 528, ctx.r29.u32);
	// stw r15,552(r24)
	REX_STORE_U32(ctx.r24.u32 + 552, ctx.r15.u32);
	// stw r25,584(r24)
	REX_STORE_U32(ctx.r24.u32 + 584, ctx.r25.u32);
	// stw r18,588(r24)
	REX_STORE_U32(ctx.r24.u32 + 588, ctx.r18.u32);
	// stw r20,592(r24)
	REX_STORE_U32(ctx.r24.u32 + 592, ctx.r20.u32);
	// stw r27,596(r24)
	REX_STORE_U32(ctx.r24.u32 + 596, ctx.r27.u32);
	// stw r21,600(r24)
	REX_STORE_U32(ctx.r24.u32 + 600, ctx.r21.u32);
	// stw r17,604(r24)
	REX_STORE_U32(ctx.r24.u32 + 604, ctx.r17.u32);
	// stw r28,560(r24)
	REX_STORE_U32(ctx.r24.u32 + 560, ctx.r28.u32);
	// stw r23,564(r24)
	REX_STORE_U32(ctx.r24.u32 + 564, ctx.r23.u32);
	// stw r22,568(r24)
	REX_STORE_U32(ctx.r24.u32 + 568, ctx.r22.u32);
	// stw r26,572(r24)
	REX_STORE_U32(ctx.r24.u32 + 572, ctx.r26.u32);
	// stw r19,576(r24)
	REX_STORE_U32(ctx.r24.u32 + 576, ctx.r19.u32);
	// stw r16,580(r24)
	REX_STORE_U32(ctx.r24.u32 + 580, ctx.r16.u32);
	// b 0x82199a08
	goto loc_82199A08;
}

DEFINE_REX_FUNC(sub_821D1900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821D1908;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x821d193c
	if (!ctx.cr6.eq) goto loc_821D193C;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x821d1ab8
	goto loc_821D1AB8;
loc_821D193C:
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x821d1ab4
	if (!ctx.cr6.eq) goto loc_821D1AB4;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// lwz r10,52(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x821d1ab4
	if (ctx.cr6.lt) goto loc_821D1AB4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d1988
	if (!ctx.cr6.eq) goto loc_821D1988;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x821d19ac
	if (ctx.cr6.eq) goto loc_821D19AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821d19a4
	if (ctx.cr6.eq) goto loc_821D19A4;
loc_821D1988:
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821d19ac
	if (ctx.cr6.eq) goto loc_821D19AC;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821d1ab4
	if (!ctx.cr6.eq) goto loc_821D1AB4;
loc_821D19A4:
	// li r30,42
	ctx.r30.s64 = 42;
	// b 0x821d19b0
	goto loc_821D19B0;
loc_821D19AC:
	// li r30,43
	ctx.r30.s64 = 43;
loc_821D19B0:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D19B8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d19e4
	if (ctx.cr0.eq) goto loc_821D19E4;
	// addi r9,r29,16
	ctx.r9.s64 = ctx.r29.s64 + 16;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9de8
	ctx.lr = 0x821D19DC;
	sub_821C9DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d19e8
	goto loc_821D19E8;
loc_821D19E4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D19E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D19F8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1a20
	if (ctx.cr0.eq) goto loc_821D1A20;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821c8ae8
	ctx.lr = 0x821D1A1C;
	sub_821C8AE8(ctx, base);
	// b 0x821d1a24
	goto loc_821D1A24;
loc_821D1A20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1A24:
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821c7078
	ctx.lr = 0x821D1A38;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1a58
	if (ctx.cr0.eq) goto loc_821D1A58;
	// addi r7,r29,16
	ctx.r7.s64 = ctx.r29.s64 + 16;
	// lwz r6,52(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r5,48(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// bl 0x821ca2d8
	ctx.lr = 0x821D1A54;
	sub_821CA2D8(ctx, base);
	// b 0x821d1a5c
	goto loc_821D1A5C;
loc_821D1A58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1A5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D1A70;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1a90
	if (ctx.cr0.eq) goto loc_821D1A90;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-29408
	ctx.r6.s64 = ctx.r11.s64 + -29408;
	// bl 0x821c7240
	ctx.lr = 0x821D1A8C;
	sub_821C7240(ctx, base);
	// b 0x821d1a94
	goto loc_821D1A94;
loc_821D1A90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1A94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1ab4
	if (ctx.cr6.eq) goto loc_821D1AB4;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D1AAC;
	sub_821CEFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821d1ab8
	goto loc_821D1AB8;
loc_821D1AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1AB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DE7C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821DE7E4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821de7e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821DE7E4;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x821de638
	ctx.lr = 0x821DE7F8;
	sub_821DE638(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DEF70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821deef0
	ctx.lr = 0x821DEF94;
	sub_821DEEF0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x821defb8
	goto loc_821DEFB8;
loc_821DEFA0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x820e7f58
	ctx.lr = 0x821DEFAC;
	sub_820E7F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821defdc
	if (ctx.cr0.eq) goto loc_821DEFDC;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_821DEFB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821defa0
	if (!ctx.cr6.eq) goto loc_821DEFA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DEFC4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_821DEFDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821defc4
	goto loc_821DEFC4;
}

DEFINE_REX_FUNC(sub_821DF2F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821df374
	if (ctx.cr6.eq) goto loc_821DF374;
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821df374
	if (!ctx.cr6.lt) goto loc_821DF374;
	// stw r4,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r4.u32);
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r5,20(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821DF354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821df368
	if (!ctx.cr0.lt) goto loc_821DF368;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_821DF368:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x821df378
	goto loc_821DF378;
loc_821DF374:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DF378:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821DFBB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x821DFBC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821DFBE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821dfbe4
	if (!ctx.cr6.eq) goto loc_821DFBE4;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x821dfc30
	if (ctx.cr6.gt) goto loc_821DFC30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
loc_821DFC10:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821afae0
	ctx.lr = 0x821DFC24;
	sub_821AFAE0(ctx, base);
loc_821DFC24:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821e0184
	goto loc_821E0184;
loc_821DFC30:
	// lwz r27,260(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r4,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r4,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// addi r10,r9,-12572
	ctx.r10.s64 = ctx.r9.s64 + -12572;
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// stw r4,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
loc_821DFC54:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821dfc74
	if (!ctx.cr0.eq) goto loc_821DFC74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821dfc54
	if (!ctx.cr6.eq) goto loc_821DFC54;
loc_821DFC74:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821dfd6c
	if (!ctx.cr0.eq) goto loc_821DFD6C;
	// lwz r11,180(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 180);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821dfce0
	if (ctx.cr6.lt) goto loc_821DFCE0;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bgt cr6,0x821dfce0
	if (ctx.cr6.gt) goto loc_821DFCE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,81
	ctx.r4.s64 = ctx.r1.s64 + 81;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x821de950
	ctx.lr = 0x821DFCA0;
	sub_821DE950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821dfd24
	if (ctx.cr0.lt) goto loc_821DFD24;
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x821dfcc4
	if (!ctx.cr6.eq) goto loc_821DFCC4;
	// li r10,3
	ctx.r10.s64 = 3;
loc_821DFCB8:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// b 0x821e017c
	goto loc_821E017C;
loc_821DFCC4:
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x821dfcd4
	if (!ctx.cr6.eq) goto loc_821DFCD4;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x821dfcb8
	goto loc_821DFCB8;
loc_821DFCD4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-11996
	ctx.r6.s64 = ctx.r11.s64 + -11996;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFCE0:
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r30,r29,28
	ctx.r30.s64 = ctx.r29.s64 + 28;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821def70
	ctx.lr = 0x821DFCF8;
	sub_821DEF70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dfd0c
	if (ctx.cr0.eq) goto loc_821DFD0C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x821dfd58
	goto loc_821DFD58;
loc_821DFD0C:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x821de950
	ctx.lr = 0x821DFD1C;
	sub_821DE950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821dfd30
	if (!ctx.cr0.lt) goto loc_821DFD30;
loc_821DFD24:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12036
	ctx.r6.s64 = ctx.r11.s64 + -12036;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFD30:
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,156(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 156);
	// bl 0x821df8f8
	ctx.lr = 0x821DFD4C;
	sub_821DF8F8(ctx, base);
	// lwz r11,156(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,156(r29)
	REX_STORE_U32(ctx.r29.u32 + 156, ctx.r11.u32);
loc_821DFD58:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e0180
	if (ctx.cr6.eq) goto loc_821E0180;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12100
	ctx.r6.s64 = ctx.r11.s64 + -12100;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFD6C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-12576
	ctx.r10.s64 = ctx.r10.s64 + -12576;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_821DFD7C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821dfd9c
	if (!ctx.cr0.eq) goto loc_821DFD9C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821dfd7c
	if (!ctx.cr6.eq) goto loc_821DFD7C;
loc_821DFD9C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821dfe08
	if (!ctx.cr0.eq) goto loc_821DFE08;
	// stw r4,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r4.u32);
	// addi r30,r29,84
	ctx.r30.s64 = ctx.r29.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821def70
	ctx.lr = 0x821DFDB8;
	sub_821DEF70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dfdcc
	if (ctx.cr0.eq) goto loc_821DFDCC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x821dfdf4
	goto loc_821DFDF4;
loc_821DFDCC:
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 164);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,164(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x821df8f8
	ctx.lr = 0x821DFDE8;
	sub_821DF8F8(ctx, base);
	// lwz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,164(r29)
	REX_STORE_U32(ctx.r29.u32 + 164, ctx.r11.u32);
loc_821DFDF4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e0180
	if (ctx.cr6.eq) goto loc_821E0180;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12164
	ctx.r6.s64 = ctx.r11.s64 + -12164;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFE08:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r10,-12168
	ctx.r9.s64 = ctx.r10.s64 + -12168;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_821DFE18:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821dfe38
	if (!ctx.cr0.eq) goto loc_821DFE38;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821dfe18
	if (!ctx.cr6.eq) goto loc_821DFE18;
loc_821DFE38:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,-12172
	ctx.r10.s64 = ctx.r11.s64 + -12172;
	// addi r9,r9,-12176
	ctx.r9.s64 = ctx.r9.s64 + -12176;
	// addi r8,r8,-12180
	ctx.r8.s64 = ctx.r8.s64 + -12180;
	// beq 0x821dffd0
	if (ctx.cr0.eq) goto loc_821DFFD0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_821DFE64:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821dfe84
	if (!ctx.cr0.eq) goto loc_821DFE84;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821dfe64
	if (!ctx.cr6.eq) goto loc_821DFE64;
loc_821DFE84:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821dffd0
	if (ctx.cr0.eq) goto loc_821DFFD0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_821DFE98:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821dfeb8
	if (!ctx.cr0.eq) goto loc_821DFEB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821dfe98
	if (!ctx.cr6.eq) goto loc_821DFE98;
loc_821DFEB8:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821dffd0
	if (ctx.cr0.eq) goto loc_821DFFD0;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r5,r31,2
	ctx.r5.s64 = ctx.r31.s64 + 2;
loc_821DFECC:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// subf. r6,r3,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x821dfeec
	if (!ctx.cr0.eq) goto loc_821DFEEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x821dfecc
	if (!ctx.cr6.eq) goto loc_821DFECC;
loc_821DFEEC:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821dffd0
	if (ctx.cr0.eq) goto loc_821DFFD0;
	// lwz r11,176(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821dffc4
	if (ctx.cr6.eq) goto loc_821DFFC4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r10,-12580
	ctx.r10.s64 = ctx.r10.s64 + -12580;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_821DFF10:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821dff30
	if (!ctx.cr0.eq) goto loc_821DFF30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821dff10
	if (!ctx.cr6.eq) goto loc_821DFF10;
loc_821DFF30:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821dffc4
	if (!ctx.cr0.eq) goto loc_821DFFC4;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r30,r29,56
	ctx.r30.s64 = ctx.r29.s64 + 56;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821def70
	ctx.lr = 0x821DFF50;
	sub_821DEF70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dff64
	if (ctx.cr0.eq) goto loc_821DFF64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// b 0x821dffb0
	goto loc_821DFFB0;
loc_821DFF64:
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x821de950
	ctx.lr = 0x821DFF74;
	sub_821DE950(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821dff88
	if (!ctx.cr0.lt) goto loc_821DFF88;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12220
	ctx.r6.s64 = ctx.r11.s64 + -12220;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFF88:
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 160);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r5,160(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 160);
	// bl 0x821df8f8
	ctx.lr = 0x821DFFA4;
	sub_821DF8F8(ctx, base);
	// lwz r11,160(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 160);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,160(r29)
	REX_STORE_U32(ctx.r29.u32 + 160, ctx.r11.u32);
loc_821DFFB0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e0180
	if (ctx.cr6.eq) goto loc_821E0180;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12284
	ctx.r6.s64 = ctx.r11.s64 + -12284;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFFC4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-12424
	ctx.r6.s64 = ctx.r11.s64 + -12424;
	// b 0x821dfc10
	goto loc_821DFC10;
loc_821DFFD0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r6,r31,2
	ctx.r6.s64 = ctx.r31.s64 + 2;
loc_821DFFD8:
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r8)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// subf. r7,r5,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821dfff8
	if (!ctx.cr0.eq) goto loc_821DFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x821dffd8
	if (!ctx.cr6.eq) goto loc_821DFFD8;
loc_821DFFF8:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821e000c
	if (!ctx.cr0.eq) goto loc_821E000C;
	// li r11,14
	ctx.r11.s64 = 14;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x821e008c
	goto loc_821E008C;
loc_821E000C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r7,r31,2
	ctx.r7.s64 = ctx.r31.s64 + 2;
loc_821E0014:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821e0034
	if (!ctx.cr0.eq) goto loc_821E0034;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x821e0014
	if (!ctx.cr6.eq) goto loc_821E0014;
loc_821E0034:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821e0048
	if (!ctx.cr0.eq) goto loc_821E0048;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x821e008c
	goto loc_821E008C;
loc_821E0048:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
loc_821E0050:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821e0070
	if (!ctx.cr0.eq) goto loc_821E0070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x821e0050
	if (!ctx.cr6.eq) goto loc_821E0050;
loc_821E0070:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821e0084
	if (!ctx.cr0.eq) goto loc_821E0084;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x821e008c
	goto loc_821E008C;
loc_821E0084:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,3
	ctx.r30.s64 = 3;
loc_821E008C:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821def70
	ctx.lr = 0x821E009C;
	sub_821DEF70(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e00b8
	if (ctx.cr0.eq) goto loc_821E00B8;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x821e0140
	goto loc_821E0140;
loc_821E00B8:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8224c5d8
	ctx.lr = 0x821E00CC;
	sub_8224C5D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821e0184
	if (ctx.cr0.lt) goto loc_821E0184;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821e0104
	if (!ctx.cr6.eq) goto loc_821E0104;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r31,2
	ctx.r8.s64 = ctx.r31.s64 + 2;
	// addi r6,r11,-12488
	ctx.r6.s64 = ctx.r11.s64 + -12488;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821afae0
	ctx.lr = 0x821E0100;
	sub_821AFAE0(ctx, base);
	// b 0x821dfc24
	goto loc_821DFC24;
loc_821E0104:
	// addi r11,r30,35
	ctx.r11.s64 = ctx.r30.s64 + 35;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwzx r5,r30,r29
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x821df8f8
	ctx.lr = 0x821E0124;
	sub_821DF8F8(ctx, base);
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r11.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	REX_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
loc_821E0140:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821e0180
	if (ctx.cr6.eq) goto loc_821E0180;
	// lwz r9,24(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 24);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821e0174
	if (!ctx.cr6.gt) goto loc_821E0174;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,-12568
	ctx.r6.s64 = ctx.r11.s64 + -12568;
	// li r5,2005
	ctx.r5.s64 = 2005;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821afae0
	ctx.lr = 0x821E0170;
	sub_821AFAE0(ctx, base);
	// b 0x821dfc24
	goto loc_821DFC24;
loc_821E0174:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_821E017C:
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_821E0180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E0184:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EB878) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x821EB880;
	__savegprlr_20(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821eb9e8
	if (ctx.cr6.eq) goto loc_821EB9E8;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821eb9e8
	if (!ctx.cr6.gt) goto loc_821EB9E8;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r27,r7,-12512
	ctx.r27.s64 = ctx.r7.s64 + -12512;
	// addi r29,r8,4852
	ctx.r29.s64 = ctx.r8.s64 + 4852;
	// addi r26,r9,-6524
	ctx.r26.s64 = ctx.r9.s64 + -6524;
	// addi r25,r10,-6500
	ctx.r25.s64 = ctx.r10.s64 + -6500;
	// addi r28,r11,-6512
	ctx.r28.s64 = ctx.r11.s64 + -6512;
loc_821EB8DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EB8E4;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eb9ec
	if (ctx.cr0.lt) goto loc_821EB9EC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a4f40
	ctx.lr = 0x821EB900;
	sub_821A4F40(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821EB918;
	sub_821A4F40(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bne cr6,0x821eb934
	if (!ctx.cr6.eq) goto loc_821EB934;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_821EB934:
	// bl 0x821a4f40
	ctx.lr = 0x821EB938;
	sub_821A4F40(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bne cr6,0x821eb950
	if (!ctx.cr6.eq) goto loc_821EB950;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
loc_821EB950:
	// bl 0x821eb2a0
	ctx.lr = 0x821EB954;
	sub_821EB2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821eb9ec
	if (ctx.cr6.lt) goto loc_821EB9EC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x821eb96c
	if (!ctx.cr6.eq) goto loc_821EB96C;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x821eb988
	goto loc_821EB988;
loc_821EB96C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821a4f40
	ctx.lr = 0x821EB984;
	sub_821A4F40(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_821EB988:
	// andis. r11,r23,3328
	ctx.r11.u64 = ctx.r23.u64 & 218103808;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 400);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x821eb9b0
	if (ctx.cr0.eq) goto loc_821EB9B0;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// b 0x821eb9b8
	goto loc_821EB9B8;
loc_821EB9B0:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_821EB9B8:
	// bctrl 
	ctx.lr = 0x821EB9BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eb9ec
	if (ctx.cr0.lt) goto loc_821EB9EC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EB9D0;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eb9ec
	if (ctx.cr0.lt) goto loc_821EB9EC;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821eb8dc
	if (ctx.cr6.lt) goto loc_821EB8DC;
loc_821EB9E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EB9EC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EE648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-5344
	ctx.r4.s64 = ctx.r11.s64 + -5344;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE664;
	sub_821EB2A0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EF140) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x821EF148;
	__savegprlr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF15C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-4876
	ctx.r4.s64 = ctx.r11.s64 + -4876;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF174;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF184;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6332
	ctx.r4.s64 = ctx.r11.s64 + -6332;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF19C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r25,r11,-6340
	ctx.r25.s64 = ctx.r11.s64 + -6340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,408(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 408);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EF1C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12512
	ctx.r4.s64 = ctx.r11.s64 + -12512;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF1E0;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r26,r11,-6500
	ctx.r26.s64 = ctx.r11.s64 + -6500;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef270
	if (ctx.cr6.eq) goto loc_821EF270;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-4900
	ctx.r29.s64 = ctx.r11.s64 + -4900;
loc_821EF208:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF210;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a4f40
	ctx.lr = 0x821EF230;
	sub_821A4F40(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EF244;
	sub_821A4F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF258;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef208
	if (ctx.cr6.lt) goto loc_821EF208;
loc_821EF270:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r9,-4928
	ctx.r29.s64 = ctx.r9.s64 + -4928;
	// addi r27,r10,-6312
	ctx.r27.s64 = ctx.r10.s64 + -6312;
	// beq cr6,0x821ef2f8
	if (ctx.cr6.eq) goto loc_821EF2F8;
loc_821EF28C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF294;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a4f40
	ctx.lr = 0x821EF2B4;
	sub_821A4F40(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821a4f40
	ctx.lr = 0x821EF2C8;
	sub_821A4F40(ctx, base);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF2E0;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef28c
	if (ctx.cr6.lt) goto loc_821EF28C;
loc_821EF2F8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r28,r10,-6512
	ctx.r28.s64 = ctx.r10.s64 + -6512;
	// beq cr6,0x821ef374
	if (ctx.cr6.eq) goto loc_821EF374;
loc_821EF30C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF314;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821EF330;
	sub_821A4F40(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EF344;
	sub_821A4F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF35C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef30c
	if (ctx.cr6.lt) goto loc_821EF30C;
loc_821EF374:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef408
	if (ctx.cr6.eq) goto loc_821EF408;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-5028
	ctx.r29.s64 = ctx.r11.s64 + -5028;
loc_821EF388:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF390;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821EF3AC;
	sub_821A4F40(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EF3C0;
	sub_821A4F40(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x821a4f40
	ctx.lr = 0x821EF3D4;
	sub_821A4F40(ctx, base);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF3F0;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef388
	if (ctx.cr6.lt) goto loc_821EF388;
loc_821EF408:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ef4a0
	if (ctx.cr6.eq) goto loc_821EF4A0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-5060
	ctx.r29.s64 = ctx.r11.s64 + -5060;
loc_821EF41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EF424;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x821a4f40
	ctx.lr = 0x821EF444;
	sub_821A4F40(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821EF458;
	sub_821A4F40(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EF46C;
	sub_821A4F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EF488;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ef4a4
	if (ctx.cr0.lt) goto loc_821EF4A4;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ef41c
	if (ctx.cr6.lt) goto loc_821EF41C;
loc_821EF4A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EF4A4:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F92E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x821F92E8;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r14,-1
	ctx.r14.s64 = -1;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r10,8336
	ctx.r10.s64 = 546308096;
	// stw r14,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r14.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r14,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r14.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r14,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// stw r27,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r14,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r14.u32);
	// clrlwi r16,r11,12
	ctx.r16.u64 = ctx.r11.u32 & 0xFFFFF;
	// stw r14,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// stw r14,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r14.u32);
	// beq cr6,0x821f9344
	if (ctx.cr6.eq) goto loc_821F9344;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821f9cd4
	goto loc_821F9CD4;
loc_821F9344:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F934C;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f9360
	if (ctx.cr0.eq) goto loc_821F9360;
	// bl 0x8220d6a0
	ctx.lr = 0x821F9358;
	sub_8220D6A0(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x821f9364
	goto loc_821F9364;
loc_821F9360:
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
loc_821F9364:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x821f9378
	if (!ctx.cr6.eq) goto loc_821F9378;
loc_821F936C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821f9cd4
	goto loc_821F9CD4;
loc_821F9378:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8220e150
	ctx.lr = 0x821F9384;
	sub_8220E150(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x821f9cc0
	if (ctx.cr0.lt) goto loc_821F9CC0;
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// li r19,1
	ctx.r19.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r19,12(r18)
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r19.u32);
	// mr r17,r27
	ctx.r17.u64 = ctx.r27.u64;
	// stw r11,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// stw r10,4(r18)
	REX_STORE_U32(ctx.r18.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821f9cc0
	if (ctx.cr6.eq) goto loc_821F9CC0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,4368
	ctx.r8.s64 = 286261248;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lfd f31,1792(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
	// rlwinm r21,r16,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f30,-9888(r9)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -9888);
	// ori r23,r8,1
	ctx.r23.u64 = ctx.r8.u64 | 1;
	// addi r25,r11,3272
	ctx.r25.s64 = ctx.r11.s64 + 3272;
	// b 0x821f93e4
	goto loc_821F93E4;
loc_821F93E0:
	// li r27,0
	ctx.r27.s64 = 0;
loc_821F93E4:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r5,160
	ctx.r5.s64 = 160;
	// lwz r10,16(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// lwzx r11,r11,r21
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8215ec60
	ctx.lr = 0x821F9430;
	sub_8215EC60(ctx, base);
	// addi r5,r25,-224
	ctx.r5.s64 = ctx.r25.s64 + -224;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9468;
	sub_821F4EA8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x821f9520
	if (ctx.cr0.eq) goto loc_821F9520;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r5,r25,128
	ctx.r5.s64 = ctx.r25.s64 + 128;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F949C;
	sub_821F4EA8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x821f94ac
	if (!ctx.cr0.eq) goto loc_821F94AC;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// b 0x821f9520
	goto loc_821F9520;
loc_821F94AC:
	// addi r5,r25,544
	ctx.r5.s64 = ctx.r25.s64 + 544;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F94D8;
	sub_821F4EA8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x821f94e8
	if (!ctx.cr0.eq) goto loc_821F94E8;
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// b 0x821f9520
	goto loc_821F9520;
loc_821F94E8:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r5,r25,960
	ctx.r5.s64 = ctx.r25.s64 + 960;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9514;
	sub_821F4EA8(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne 0x821f9520
	if (!ctx.cr0.eq) goto loc_821F9520;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_821F9520:
	// lwz r11,320(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r26,304(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 304);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9878
	if (ctx.cr6.eq) goto loc_821F9878;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r15,r27
	ctx.r15.u64 = ctx.r27.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,84(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// lwz r5,88(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x821f9878
	if (ctx.cr6.gt) goto loc_821F9878;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821F95A8:
	// lwzx r9,r8,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r4,16(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r4,0(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwz r4,20(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821f95e8
	if (!ctx.cr6.eq) goto loc_821F95E8;
	// lis r4,29808
	ctx.r4.s64 = 1953497088;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821f95e8
	if (!ctx.cr6.eq) goto loc_821F95E8;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// bne cr6,0x821f9890
	if (!ctx.cr6.eq) goto loc_821F9890;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
loc_821F95E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x821f95a8
	if (!ctx.cr6.gt) goto loc_821F95A8;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821f9878
	if (ctx.cr6.eq) goto loc_821F9878;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821f9638
	if (ctx.cr6.eq) goto loc_821F9638;
	// addi r5,r25,1248
	ctx.r5.s64 = ctx.r25.s64 + 1248;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9634;
	sub_821F4EA8(ctx, base);
	// b 0x821f9680
	goto loc_821F9680;
loc_821F9638:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821f9654
	if (ctx.cr6.eq) goto loc_821F9654;
	// addi r5,r25,800
	ctx.r5.s64 = ctx.r25.s64 + 800;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9650;
	sub_821F4EA8(ctx, base);
	// b 0x821f9680
	goto loc_821F9680;
loc_821F9654:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821f9670
	if (ctx.cr6.eq) goto loc_821F9670;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r5,r25,384
	ctx.r5.s64 = ctx.r25.s64 + 384;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// bl 0x821f4ea8
	ctx.lr = 0x821F966C;
	sub_821F4EA8(ctx, base);
	// b 0x821f9680
	goto loc_821F9680;
loc_821F9670:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9680;
	sub_821F4EA8(ctx, base);
loc_821F9680:
	// lwz r11,448(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 448);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lwz r9,288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// lwz r11,464(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 464);
	// beq cr6,0x821f969c
	if (ctx.cr6.eq) goto loc_821F969C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_821F969C:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9878
	if (ctx.cr6.eq) goto loc_821F9878;
	// lwz r10,8(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r11,16(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r28,20(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9878
	if (ctx.cr6.eq) goto loc_821F9878;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,24(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rotlwi r8,r28,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r11,r30
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r27,8(r22)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r8,r8,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821f9878
	if (ctx.cr0.eq) goto loc_821F9878;
	// lwz r8,104(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// std r8,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r11,r28,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r3,r9,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r29,r6,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// b 0x821f97e4
	goto loc_821F97E4;
loc_821F9774:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821f97f0
	if (!ctx.cr6.eq) goto loc_821F97F0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r11,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f97f0
	if (!ctx.cr6.eq) goto loc_821F97F0;
	// clrlwi. r5,r11,12
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x821f97f0
	if (ctx.cr0.eq) goto loc_821F97F0;
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F97B0:
	// lwzx r26,r11,r6
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821f97d0
	if (ctx.cr6.eq) goto loc_821F97D0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821f97b0
	if (ctx.cr6.lt) goto loc_821F97B0;
	// b 0x821f97f0
	goto loc_821F97F0;
loc_821F97D0:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
loc_821F97E4:
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821f9774
	if (!ctx.cr6.eq) goto loc_821F9774;
loc_821F97F0:
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f9878
	if (ctx.cr0.eq) goto loc_821F9878;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f9878
	if (ctx.cr0.eq) goto loc_821F9878;
	// lfd f0,32(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lfd f0,32(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9878
	if (ctx.cr0.eq) goto loc_821F9878;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821f9878
	if (ctx.cr0.eq) goto loc_821F9878;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f9878
	if (!ctx.cr6.eq) goto loc_821F9878;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f98b4
	if (ctx.cr6.eq) goto loc_821F98B4;
loc_821F9878:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x821f93e0
	if (ctx.cr6.lt) goto loc_821F93E0;
	// b 0x821f9cc0
	goto loc_821F9CC0;
loc_821F9890:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4835
	ctx.r5.s64 = 4835;
	// addi r6,r11,5884
	ctx.r6.s64 = ctx.r11.s64 + 5884;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff00
	ctx.lr = 0x821F98A8;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821f9cd4
	goto loc_821F9CD4;
loc_821F98B4:
	// stw r4,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r23,r11,r10
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,84(r23)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821f9bf0
	if (ctx.cr6.gt) goto loc_821F9BF0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,5880
	ctx.r24.s64 = ctx.r11.s64 + 5880;
loc_821F98F4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r29,r25,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f9a64
	if (ctx.cr6.eq) goto loc_821F9A64;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r15)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f9a64
	if (!ctx.cr6.eq) goto loc_821F9A64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f9a64
	if (!ctx.cr6.gt) goto loc_821F9A64;
	// li r28,0
	ctx.r28.s64 = 0;
loc_821F9944:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r28,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821f99e4
	if (ctx.cr6.eq) goto loc_821F99E4;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9a50
	if (ctx.cr6.eq) goto loc_821F9A50;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,4096
	ctx.r7.s64 = 268435456;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821f99e0
	if (!ctx.cr6.eq) goto loc_821F99E0;
	// clrlwi. r6,r11,12
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x821f99e4
	if (ctx.cr0.eq) goto loc_821F99E4;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F99B0:
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f99d0
	if (ctx.cr6.eq) goto loc_821F99D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821f99b0
	if (ctx.cr6.lt) goto loc_821F99B0;
	// b 0x821f99e4
	goto loc_821F99E4;
loc_821F99D0:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821f99e4
	goto loc_821F99E4;
loc_821F99E0:
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
loc_821F99E4:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f9a50
	if (!ctx.cr6.eq) goto loc_821F9A50;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821f9a30
	if (!ctx.cr6.eq) goto loc_821F9A30;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// li r5,21
	ctx.r5.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x821F9A14;
	sub_8220E988(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821F9A2C;
	sub_8220EA28(ctx, base);
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
loc_821F9A30:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r3,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f9a50
	if (ctx.cr6.eq) goto loc_821F9A50;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
loc_821F9A50:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f9944
	if (ctx.cr6.lt) goto loc_821F9944;
loc_821F9A64:
	// lwz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 88);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821f98f4
	if (!ctx.cr6.gt) goto loc_821F98F4;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f9bf0
	if (ctx.cr6.eq) goto loc_821F9BF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821F9A98;
	sub_8220EA28(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821F9AB4;
	sub_8220EA28(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x821f936c
	if (ctx.cr6.eq) goto loc_821F936C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f936c
	if (ctx.cr6.eq) goto loc_821F936C;
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r30,r10,r9
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r8,r9
	ctx.r29.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r28,r11,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8220e3a8
	ctx.lr = 0x821F9AF4;
	sub_8220E3A8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220e3a8
	ctx.lr = 0x821F9B00;
	sub_8220E3A8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r19,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r19.u32);
	// li r3,116
	ctx.r3.s64 = 116;
	// stw r11,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// bl 0x8220dd98
	ctx.lr = 0x821F9B14;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f9b28
	if (ctx.cr0.eq) goto loc_821F9B28;
	// bl 0x8220d6a0
	ctx.lr = 0x821F9B20;
	sub_8220D6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f9b2c
	goto loc_821F9B2C;
loc_821F9B28:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821F9B2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f936c
	if (ctx.cr6.eq) goto loc_821F936C;
	// lis r4,29712
	ctx.r4.s64 = 1947205632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220de30
	ctx.lr = 0x821F9B50;
	sub_8220DE30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x821f9b70
	if (!ctx.cr0.lt) goto loc_821F9B70;
loc_821F9B5C:
	// bl 0x82113c30
	ctx.lr = 0x821F9B60;
	sub_82113C30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F9B68;
	sub_8220DDF0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x821f9cd4
	goto loc_821F9CD4;
loc_821F9B70:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x821F9B78;
	sub_8220D6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x821f9b88
	if (!ctx.cr0.lt) goto loc_821F9B88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821f9b5c
	goto loc_821F9B5C;
loc_821F9B88:
	// lwz r11,16(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x8220e150
	ctx.lr = 0x821F9BD4;
	sub_8220E150(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82113c30
	ctx.lr = 0x821F9BE0;
	sub_82113C30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F9BE8;
	sub_8220DDF0(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt cr6,0x821f9cd0
	if (ctx.cr6.lt) goto loc_821F9CD0;
loc_821F9BF0:
	// lwz r8,84(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 84);
	// lwz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 88);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821f9c70
	if (ctx.cr6.gt) goto loc_821F9C70;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_821F9C04:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r7,8320
	ctx.r7.s64 = 545259520;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r9,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821f9c5c
	if (!ctx.cr6.eq) goto loc_821F9C5C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r15)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x821f9c5c
	if (!ctx.cr6.eq) goto loc_821F9C5C;
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// oris r7,r9,4096
	ctx.r7.u64 = ctx.r9.u64 | 268435456;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_821F9C5C:
	// lwz r11,88(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 88);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821f9c04
	if (!ctx.cr6.gt) goto loc_821F9C04;
loc_821F9C70:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f9cc0
	if (!ctx.cr6.gt) goto loc_821F9CC0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821F9C84:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r15)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r15.u32 + 16);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821f9cac
	if (!ctx.cr6.eq) goto loc_821F9CAC;
	// lwz r8,16(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r8,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
loc_821F9CAC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f9c84
	if (ctx.cr6.lt) goto loc_821F9C84;
loc_821F9CC0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82113c30
	ctx.lr = 0x821F9CC8;
	sub_82113C30(ctx, base);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F9CD0;
	sub_8220DDF0(ctx, base);
loc_821F9CD0:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
loc_821F9CD4:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82213340) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82213348;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822133b4
	if (ctx.cr6.eq) goto loc_822133B4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82213364:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82213364
	if (!ctx.cr6.eq) goto loc_82213364;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216b018
	ctx.lr = 0x82213390;
	sub_8216B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822133a4
	if (!ctx.cr0.eq) goto loc_822133A4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822133c8
	goto loc_822133C8;
loc_822133A4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x822133B4;
	sub_8215E640(ctx, base);
loc_822133B4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 208);
	// bl 0x8216b138
	ctx.lr = 0x822133C0;
	sub_8216B138(ctx, base);
	// stw r31,208(r28)
	REX_STORE_U32(ctx.r28.u32 + 208, ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822133C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82216D10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82216D18;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// li r20,4
	ctx.r20.s64 = 4;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// lwzx r15,r10,r11
	ctx.r15.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r20,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82216db0
	if (!ctx.cr0.eq) goto loc_82216DB0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82216d84
	if (!ctx.cr6.eq) goto loc_82216D84;
	// lwz r10,108(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r10,r10,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82216db0
	if (!ctx.cr0.eq) goto loc_82216DB0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
loc_82216D84:
	// ble cr6,0x82216d94
	if (!ctx.cr6.gt) goto loc_82216D94;
	// lwz r11,108(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 108);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82216db0
	if (!ctx.cr0.eq) goto loc_82216DB0;
loc_82216D94:
	// lwz r11,72(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 72);
	// lwz r10,24(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8220d770
	ctx.lr = 0x82216DA8;
	sub_8220D770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82216db8
	if (ctx.cr0.eq) goto loc_82216DB8;
loc_82216DB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82216DB8:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lwz r9,12(r15)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r19,r1,96
	ctx.r19.s64 = ctx.r1.s64 + 96;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// rlwinm r28,r9,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// std r11,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r11.u64);
loc_82216DE4:
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 24);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwzx r22,r28,r11
	ctx.r22.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// cmpwi cr6,r22,-1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, -1, ctx.xer);
	// beq cr6,0x82216ed0
	if (ctx.cr6.eq) goto loc_82216ED0;
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 48);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwzx r21,r11,r28
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82216ed0
	if (ctx.cr6.eq) goto loc_82216ED0;
	// lwz r26,52(r17)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r17.u32 + 52);
	// lwz r25,56(r17)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r17.u32 + 56);
	// lwz r24,16(r17)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
loc_82216E18:
	// lwzx r11,r28,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r26.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// rlwinm r11,r10,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82216e3c
	if (ctx.cr6.eq) goto loc_82216E3C;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82216E3C:
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82216ea8
	if (!ctx.cr6.eq) goto loc_82216EA8;
	// lwz r11,20(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x82216ea8
	if (ctx.cr6.eq) goto loc_82216EA8;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r29,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82216ea4
	if (!ctx.cr6.eq) goto loc_82216EA4;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82216e84
	if (!ctx.cr6.eq) goto loc_82216E84;
	// cmplw cr6,r23,r31
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82216ea4
	if (!ctx.cr6.eq) goto loc_82216EA4;
loc_82216E84:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82212798
	ctx.lr = 0x82216E9C;
	sub_82212798(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82216eb8
	if (ctx.cr6.eq) goto loc_82216EB8;
loc_82216EA4:
	// lwz r30,348(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_82216EA8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82216e18
	if (ctx.cr6.lt) goto loc_82216E18;
	// b 0x82216ec8
	goto loc_82216EC8;
loc_82216EB8:
	// stwx r23,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r23.u32);
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
	// lwz r30,348(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r31,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
loc_82216EC8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne cr6,0x82216ed4
	if (!ctx.cr6.eq) goto loc_82216ED4;
loc_82216ED0:
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
loc_82216ED4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x82216de4
	if (ctx.cr6.lt) goto loc_82216DE4;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// rlwinm r3,r20,29,0,2
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 29) & 0xE0000000;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8221709c
	if (!ctx.cr6.lt) goto loc_8221709C;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bge cr6,0x82216f14
	if (!ctx.cr6.lt) goto loc_82216F14;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82216f28
	if (ctx.cr0.eq) goto loc_82216F28;
	// b 0x82216f24
	goto loc_82216F24;
loc_82216F14:
	// ble cr6,0x82216f28
	if (!ctx.cr6.gt) goto loc_82216F28;
	// lwz r9,332(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82216f28
	if (!ctx.cr0.eq) goto loc_82216F28;
loc_82216F24:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82216F28:
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// or r25,r11,r3
	ctx.r25.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82217098
	if (!ctx.cr6.lt) goto loc_82217098;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
loc_82216F40:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221705c
	if (!ctx.cr6.eq) goto loc_8221705C;
	// lwz r11,12(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r26
	ctx.r10.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,24(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x8221705c
	if (ctx.cr6.eq) goto loc_8221705C;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217024
	if (ctx.cr6.eq) goto loc_82217024;
loc_82216F7C:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// clrlwi r31,r10,30
	ctx.r31.u64 = ctx.r10.u32 & 0x3;
	// bne cr6,0x82216fd0
	if (!ctx.cr6.eq) goto loc_82216FD0;
	// lwz r11,112(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 112);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82216fcc
	if (ctx.cr0.eq) goto loc_82216FCC;
	// lwz r11,72(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 72);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// lwz r9,24(r14)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82216fcc
	if (!ctx.cr6.eq) goto loc_82216FCC;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82216fd0
	if (ctx.cr6.lt) goto loc_82216FD0;
loc_82216FCC:
	// subfic r31,r31,3
	ctx.xer.ca = ctx.r31.u32 <= 3;
	ctx.r31.u64 = static_cast<uint64_t>(3) - ctx.r31.u64;
loc_82216FD0:
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r30,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82217004
	if (!ctx.cr6.eq) goto loc_82217004;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82212798
	ctx.lr = 0x82216FFC;
	sub_82212798(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82217018
	if (ctx.cr6.eq) goto loc_82217018;
loc_82217004:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82216f7c
	if (ctx.cr6.lt) goto loc_82216F7C;
	// b 0x82217020
	goto loc_82217020;
loc_82217018:
	// stwx r26,r30,r29
	REX_STORE_U32(ctx.r30.u32 + ctx.r29.u32, ctx.r26.u32);
	// stw r31,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_82217020:
	// lwz r30,348(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_82217024:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822170a4
	if (ctx.cr6.eq) goto loc_822170A4;
	// lwz r11,96(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 96);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82217048
	if (ctx.cr0.eq) goto loc_82217048;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8221705c
	if (!ctx.cr6.gt) goto loc_8221705C;
loc_82217048:
	// rlwinm r11,r28,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0xFF000000;
	// lwz r10,356(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82217098
	if (!ctx.cr6.lt) goto loc_82217098;
loc_8221705C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x82216f40
	if (ctx.cr6.lt) goto loc_82216F40;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82217098
	if (ctx.cr6.eq) goto loc_82217098;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82217098:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8221709C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_822170A4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8221709c
	goto loc_8221709C;
}

DEFINE_REX_FUNC(sub_822295E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,216(r3)
	REX_STORE_U32(ctx.r3.u32 + 216, ctx.r11.u32);
	// stw r11,220(r3)
	REX_STORE_U32(ctx.r3.u32 + 220, ctx.r11.u32);
	// beq cr6,0x82229614
	if (ctx.cr6.eq) goto loc_82229614;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82229614:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82228f88
	ctx.lr = 0x8222961C;
	sub_82228F88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222962c
	if (ctx.cr0.eq) goto loc_8222962C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82229648
	if (ctx.cr6.lt) goto loc_82229648;
loc_8222962C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822293b8
	ctx.lr = 0x82229634;
	sub_822293B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82229644
	if (ctx.cr0.eq) goto loc_82229644;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82229648
	if (ctx.cr6.lt) goto loc_82229648;
loc_82229644:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82229648:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82229730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r6,200(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r8,32
	ctx.r8.s64 = 32;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subf. r10,r9,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r6,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r6.u32);
	// beq 0x8222982c
	if (ctx.cr0.eq) goto loc_8222982C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x822297f4
	if (ctx.cr6.eq) goto loc_822297F4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x822297d0
	if (ctx.cr6.eq) goto loc_822297D0;
	// cmplwi cr6,r10,100
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 100, ctx.xer);
	// beq cr6,0x822297d8
	if (ctx.cr6.eq) goto loc_822297D8;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x822297a4
	if (ctx.cr6.eq) goto loc_822297A4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,11024
	ctx.r6.s64 = ctx.r10.s64 + 11024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ff00
	ctx.lr = 0x82229798;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82229890
	goto loc_82229890;
loc_822297A4:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r6,112(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// rlwimi r6,r7,26,5,6
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x6000000) | (ctx.r6.u64 & 0xFFFFFFFFF9FFFFFF);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r6,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r6.u32);
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// b 0x82229850
	goto loc_82229850;
loc_822297D0:
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// ori r9,r9,513
	ctx.r9.u64 = ctx.r9.u64 | 513;
loc_822297D8:
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// stw r8,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// oris r8,r6,8256
	ctx.r8.u64 = ctx.r6.u64 | 541065216;
	// stw r9,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r9.u32);
	// ori r8,r8,16
	ctx.r8.u64 = ctx.r8.u64 | 16;
	// stw r8,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// b 0x82229844
	goto loc_82229844;
loc_822297F4:
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,17
	ctx.r9.s64 = 17;
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lis r6,-1
	ctx.r6.s64 = -65536;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// rlwimi r10,r9,26,5,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x6000000) | (ctx.r10.u64 & 0xFFFFFFFFF9FFFFFF);
	// li r5,22
	ctx.r5.s64 = 22;
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// ori r8,r8,9
	ctx.r8.u64 = ctx.r8.u64 | 9;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// rlwimi r10,r9,26,1,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x40000000) | (ctx.r10.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r6,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r6.u32);
	// stw r8,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// b 0x8222984c
	goto loc_8222984C;
loc_8222982C:
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// oris r9,r8,8256
	ctx.r9.u64 = ctx.r8.u64 | 541065216;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
loc_82229844:
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// oris r10,r10,10240
	ctx.r10.u64 = ctx.r10.u64 | 671088640;
loc_8222984C:
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_82229850:
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r6,10
	ctx.r6.s64 = 10;
	// oris r10,r10,17024
	ctx.r10.u64 = ctx.r10.u64 | 1115684864;
	// stw r9,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r7.u32);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r5,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r5.u32);
	// stw r9,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r10.u32);
	// stw r8,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r8.u32);
loc_82229890:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8222AFD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8222AFE0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// li r29,1
	ctx.r29.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222B02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// bne cr6,0x8222b048
	if (!ctx.cr6.eq) goto loc_8222B048;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bge cr6,0x8222b088
	if (!ctx.cr6.lt) goto loc_8222B088;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8222b05c
	goto loc_8222B05C;
loc_8222B048:
	// cmplwi cr6,r31,13
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 13, ctx.xer);
	// bne cr6,0x8222b064
	if (!ctx.cr6.eq) goto loc_8222B064;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8222b088
	if (!ctx.cr6.eq) goto loc_8222B088;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8222B05C:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8222b074
	goto loc_8222B074;
loc_8222B064:
	// cmplwi cr6,r31,65535
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 65535, ctx.xer);
	// bne cr6,0x8222b088
	if (!ctx.cr6.eq) goto loc_8222B088;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8222B074:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8222b080
	if (ctx.cr6.eq) goto loc_8222B080;
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
loc_8222B080:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8222b090
	goto loc_8222B090;
loc_8222B088:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8222B090:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222C7A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8222C7A8;
	__savegprlr_26(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi. r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8222c7bc
	if (!ctx.cr0.eq) goto loc_8222C7BC;
loc_8222C7B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222c8b0
	goto loc_8222C8B0;
loc_8222C7BC:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu. r28,r11,r7
	ctx.r28.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8222c8ac
	if (ctx.cr0.eq) goto loc_8222C8AC;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r27,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 31;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r29,r11,-9432
	ctx.r29.s64 = ctx.r11.s64 + -9432;
loc_8222C7EC:
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// std r30,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// beq cr6,0x8222c838
	if (ctx.cr6.eq) goto loc_8222C838;
	// addi r11,r1,-84
	ctx.r11.s64 = ctx.r1.s64 + -84;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8222C814:
	// add r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,16(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8222c814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222C814;
loc_8222C838:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8222c89c
	if (ctx.cr6.eq) goto loc_8222C89C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8222C848:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
loc_8222C850:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8222c870
	if (ctx.cr6.eq) goto loc_8222C870;
	// add r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r26,r29
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8222c884
	if (!ctx.cr6.eq) goto loc_8222C884;
loc_8222C870:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8222c850
	if (ctx.cr6.lt) goto loc_8222C850;
	// b 0x8222c894
	goto loc_8222C894;
loc_8222C884:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// blt cr6,0x8222c848
	if (ctx.cr6.lt) goto loc_8222C848;
loc_8222C894:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// beq cr6,0x8222c7b4
	if (ctx.cr6.eq) goto loc_8222C7B4;
loc_8222C89C:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8222c7ec
	if (ctx.cr6.lt) goto loc_8222C7EC;
loc_8222C8AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222C8B0:
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222F858) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8222F860;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,260(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi r16,r11,12
	ctx.r16.u64 = ctx.r11.u32 & 0xFFFFF;
	// beq cr6,0x8222ff60
	if (ctx.cr6.eq) goto loc_8222FF60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222ff60
	if (ctx.cr6.eq) goto loc_8222FF60;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// li r21,0
	ctx.r21.s64 = 0;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// divwu r19,r10,r16
	ctx.r19.u64 = uint32_t(ctx.r16.u32 ? ctx.r10.u32 / ctx.r16.u32 : 0);
	// twllei r16,0
	if (ctx.r16.s32 == 0 || ctx.r16.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8222ff44
	if (ctx.cr6.eq) goto loc_8222FF44;
	// lwz r31,12(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8222ff44
	if (!ctx.cr6.eq) goto loc_8222FF44;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x8222f91c
	if (ctx.cr6.eq) goto loc_8222F91C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8222ead8
	ctx.lr = 0x8222F8CC;
	sub_8222EAD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222f91c
	if (ctx.cr0.eq) goto loc_8222F91C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8222f91c
	if (ctx.cr6.eq) goto loc_8222F91C;
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
loc_8222F8E8:
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x8222f90c
	if (!ctx.cr6.eq) goto loc_8222F90C;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r15,1
	ctx.r15.s64 = 1;
loc_8222F90C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x8222f8e8
	if (ctx.cr6.lt) goto loc_8222F8E8;
loc_8222F91C:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8222fa28
	if (ctx.cr6.eq) goto loc_8222FA28;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
loc_8222F934:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r24,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r24,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r24.u32);
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// beq cr6,0x8222f9f8
	if (ctx.cr6.eq) goto loc_8222F9F8;
	// lwz r8,260(r18)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r18)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// lwz r6,16(r18)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
loc_8222F974:
	// add r10,r29,r5
	ctx.r10.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,16(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r3,4(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8222f9cc
	if (ctx.cr0.eq) goto loc_8222F9CC;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x8222f9e0
	goto loc_8222F9E0;
loc_8222F9CC:
	// add r3,r4,r9
	ctx.r3.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r3,r26
	REX_STORE_U32(ctx.r3.u32 + ctx.r26.u32, ctx.r10.u32);
loc_8222F9E0:
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r21,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r21.u32);
	// bdnz 0x8222f974
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222F974;
loc_8222F9F8:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ea38
	ctx.lr = 0x8222FA08;
	sub_8222EA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222fa14
	if (!ctx.cr0.eq) goto loc_8222FA14;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8222FA14:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 + ctx.r16.u64;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8222f934
	if (ctx.cr6.lt) goto loc_8222F934;
loc_8222FA28:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8222ff20
	if (ctx.cr6.eq) goto loc_8222FF20;
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// bne cr6,0x8222fd04
	if (!ctx.cr6.eq) goto loc_8222FD04;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_8222FA50:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8222fae8
	if (ctx.cr6.eq) goto loc_8222FAE8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// beq cr6,0x8222fabc
	if (ctx.cr6.eq) goto loc_8222FABC;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
loc_8222FA94:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8222ea38
	ctx.lr = 0x8222FAA4;
	sub_8222EA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222fab0
	if (!ctx.cr0.eq) goto loc_8222FAB0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222FAB0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// bne 0x8222fa94
	if (!ctx.cr0.eq) goto loc_8222FA94;
loc_8222FABC:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8222fad0
	if (ctx.cr6.eq) goto loc_8222FAD0;
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// beq cr6,0x8222fad0
	if (ctx.cr6.eq) goto loc_8222FAD0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222FAD0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8222fb88
	if (ctx.cr6.eq) goto loc_8222FB88;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x8222fa50
	if (ctx.cr6.lt) goto loc_8222FA50;
loc_8222FAE8:
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
loc_8222FAF4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8222fc88
	if (ctx.cr6.eq) goto loc_8222FC88;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
loc_8222FB04:
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8222fc60
	if (ctx.cr6.eq) goto loc_8222FC60;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// stw r24,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r24.u32);
	// stw r24,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// stw r24,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r24.u32);
	// stw r24,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r24.u32);
	// stw r30,-16(r28)
	REX_STORE_U32(ctx.r28.u32 + -16, ctx.r30.u32);
	// stw r30,-16(r31)
	REX_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r21,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r21.u32);
	// stw r21,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r21.u32);
	// beq cr6,0x8222fbd4
	if (ctx.cr6.eq) goto loc_8222FBD4;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_8222FB54:
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ea38
	ctx.lr = 0x8222FB64;
	sub_8222EA38(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8222ea38
	ctx.lr = 0x8222FB78;
	sub_8222EA38(ctx, base);
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x8222fbbc
	if (!ctx.cr6.eq) goto loc_8222FBBC;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8222fbc4
	goto loc_8222FBC4;
loc_8222FB88:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FB9C;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FBB8;
	sub_821FDBB0(ctx, base);
	// b 0x8222ff2c
	goto loc_8222FF2C;
loc_8222FBBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8222fbc8
	if (!ctx.cr6.eq) goto loc_8222FBC8;
loc_8222FBC4:
	// li r25,1
	ctx.r25.s64 = 1;
loc_8222FBC8:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x8222fb54
	if (!ctx.cr0.eq) goto loc_8222FB54;
loc_8222FBD4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8222fbe0
	if (ctx.cr6.eq) goto loc_8222FBE0;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8222FBE0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8222fc74
	if (ctx.cr6.eq) goto loc_8222FC74;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8222fc60
	if (!ctx.cr6.eq) goto loc_8222FC60;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8222fc04
	if (ctx.cr6.eq) goto loc_8222FC04;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fc60
	if (ctx.cr6.eq) goto loc_8222FC60;
loc_8222FC04:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stw r5,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r24,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r24.u32);
	// stw r24,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r24.u32);
	// stw r24,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r24.u32);
	// stw r24,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r24.u32);
	// stw r24,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r24.u32);
	// stw r24,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r24,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// stw r24,12(r8)
	REX_STORE_U32(ctx.r8.u32 + 12, ctx.r24.u32);
	// stw r21,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r21.u32);
	// stw r21,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r21.u32);
loc_8222FC60:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x8222fb04
	if (ctx.cr6.lt) goto loc_8222FB04;
	// b 0x8222fc78
	goto loc_8222FC78;
loc_8222FC74:
	// li r17,1
	ctx.r17.s64 = 1;
loc_8222FC78:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x8222faf4
	if (ctx.cr6.lt) goto loc_8222FAF4;
loc_8222FC88:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8222fcb4
	if (ctx.cr6.eq) goto loc_8222FCB4;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FCA4;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// li r6,4
	ctx.r6.s64 = 4;
	// b 0x8222fe8c
	goto loc_8222FE8C;
loc_8222FCB4:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8222feac
	if (ctx.cr6.eq) goto loc_8222FEAC;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FCD4;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FCF0;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// b 0x8222fe90
	goto loc_8222FE90;
loc_8222FD04:
	// cmplwi cr6,r16,3
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 3, ctx.xer);
	// bne cr6,0x8222feac
	if (!ctx.cr6.eq) goto loc_8222FEAC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r30,-1
	ctx.r30.s64 = -1;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222FD24:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8222fd34
	if (!ctx.cr6.eq) goto loc_8222FD34;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8222FD34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8222fd24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222FD24;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
loc_8222FD48:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8222fe6c
	if (!ctx.cr6.eq) goto loc_8222FE6C;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r27,r1,144
	ctx.r27.s64 = ctx.r1.s64 + 144;
loc_8222FD58:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8222fe54
	if (!ctx.cr6.eq) goto loc_8222FE54;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8222fe44
	if (ctx.cr6.eq) goto loc_8222FE44;
	// cmplw cr6,r23,r25
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8222fe44
	if (ctx.cr6.eq) goto loc_8222FE44;
	// cmplw cr6,r22,r25
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8222fe44
	if (ctx.cr6.eq) goto loc_8222FE44;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// stw r21,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r21,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r21.u32);
	// stw r21,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r21.u32);
	// stw r21,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r21.u32);
	// stw r21,-16(r26)
	REX_STORE_U32(ctx.r26.u32 + -16, ctx.r21.u32);
	// stw r21,-16(r27)
	REX_STORE_U32(ctx.r27.u32 + -16, ctx.r21.u32);
	// stw r30,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// stw r30,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// stwx r30,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r30.u32);
	// beq cr6,0x8222fdfc
	if (ctx.cr6.eq) goto loc_8222FDFC;
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
loc_8222FDC8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8222fdfc
	if (!ctx.cr6.eq) goto loc_8222FDFC;
	// li r5,5
	ctx.r5.s64 = 5;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8222ea38
	ctx.lr = 0x8222FDE0;
	sub_8222EA38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222fdec
	if (!ctx.cr0.eq) goto loc_8222FDEC;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222FDEC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8222fdc8
	if (ctx.cr6.lt) goto loc_8222FDC8;
loc_8222FDFC:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222fe38
	if (!ctx.cr6.eq) goto loc_8222FE38;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fe2c
	if (ctx.cr6.eq) goto loc_8222FE2C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8222fe2c
	if (ctx.cr6.eq) goto loc_8222FE2C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8222fe38
	if (!ctx.cr6.eq) goto loc_8222FE38;
loc_8222FE2C:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq cr6,0x8222fe38
	if (ctx.cr6.eq) goto loc_8222FE38;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8222FE38:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8222fe44
	if (!ctx.cr6.eq) goto loc_8222FE44;
	// li r17,1
	ctx.r17.s64 = 1;
loc_8222FE44:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// blt cr6,0x8222fd58
	if (ctx.cr6.lt) goto loc_8222FD58;
loc_8222FE54:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r22,4
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 4, ctx.xer);
	// blt cr6,0x8222fd48
	if (ctx.cr6.lt) goto loc_8222FD48;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq cr6,0x8222feac
	if (ctx.cr6.eq) goto loc_8222FEAC;
loc_8222FE6C:
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FE80;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// li r6,3
	ctx.r6.s64 = 3;
loc_8222FE8C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
loc_8222FE90:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821fdbb0
	ctx.lr = 0x8222FE9C;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x8222ff34
	if (!ctx.cr6.eq) goto loc_8222FF34;
loc_8222FEAC:
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8222ff34
	if (ctx.cr6.eq) goto loc_8222FF34;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_8222FEBC:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,260(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// lwz r9,20(r18)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// std r24,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r24.u64);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// std r24,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r24.u64);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r21.u32);
	// bl 0x821fdbb0
	ctx.lr = 0x8222FF04;
	sub_821FDBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x8222febc
	if (ctx.cr6.lt) goto loc_8222FEBC;
	// b 0x8222ff34
	goto loc_8222FF34;
loc_8222FF20:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8220ec68
	ctx.lr = 0x8222FF2C;
	sub_8220EC68(ctx, base);
loc_8222FF2C:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
loc_8222FF34:
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// b 0x8222ff64
	goto loc_8222FF64;
loc_8222FF44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8220ec68
	ctx.lr = 0x8222FF50;
	sub_8220EC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222ff64
	if (ctx.cr0.lt) goto loc_8222FF64;
	// lwz r11,260(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 260);
	// stw r21,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
loc_8222FF60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222FF64:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822428E0) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82242944
	if (ctx.cr6.eq) goto loc_82242944;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82242900:
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
loc_8224290C:
	// lbz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r30,0(r9)
	ctx.r30.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r6,r30,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x8224292c
	if (!ctx.cr0.eq) goto loc_8224292C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bne cr6,0x8224290c
	if (!ctx.cr6.eq) goto loc_8224290C;
loc_8224292C:
	// cmpwi r6,0
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82242980
	if (ctx.cr0.eq) goto loc_82242980;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82242900
	if (ctx.cr6.lt) goto loc_82242900;
loc_82242944:
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stwx r9,r3,r4
	REX_STORE_U32(ctx.r3.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_82242974:
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_82242980:
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x82242974
	goto loc_82242974;
}

DEFINE_REX_FUNC(sub_82243B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,296(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	// stw r30,288(r3)
	REX_STORE_U32(ctx.r3.u32 + 288, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// stw r11,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r11.u32);
	// stw r30,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r30.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82243BC4;
	sub_8215EC60(ctx, base);
	// stw r30,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r30.u32);
	// stw r30,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r30.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r30,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r30,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r30.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82243BE4;
	sub_8215EC60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r30,212(r31)
	REX_STORE_U16(ctx.r31.u32 + 212, ctx.r30.u16);
	// addi r3,r31,216
	ctx.r3.s64 = ctx.r31.s64 + 216;
	// bl 0x8215ec60
	ctx.lr = 0x82243BF8;
	sub_8215EC60(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r30.u32);
	// addi r3,r31,252
	ctx.r3.s64 = ctx.r31.s64 + 252;
	// bl 0x8215ec60
	ctx.lr = 0x82243C0C;
	sub_8215EC60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247AF0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82247AF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82247b18
	if (!ctx.cr6.eq) goto loc_82247B18;
loc_82247B10:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82247bc8
	goto loc_82247BC8;
loc_82247B18:
	// lwz r31,112(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82247bb8
	if (ctx.cr6.eq) goto loc_82247BB8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,-29804
	ctx.r28.s64 = ctx.r11.s64 + -29804;
loc_82247B34:
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_82247B4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x82247b70
	if (ctx.cr0.eq) goto loc_82247B70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82247b4c
	if (ctx.cr6.eq) goto loc_82247B4C;
loc_82247B70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82247b94
	if (!ctx.cr0.eq) goto loc_82247B94;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82247bd0
	if (!ctx.cr6.eq) goto loc_82247BD0;
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247be8
	if (ctx.cr6.eq) goto loc_82247BE8;
	// addi r29,r11,16
	ctx.r29.s64 = ctx.r11.s64 + 16;
	// b 0x82247bb0
	goto loc_82247BB0;
loc_82247B94:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82247bb0
	if (ctx.cr6.eq) goto loc_82247BB0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822444a0
	ctx.lr = 0x82247BAC;
	sub_822444A0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
loc_82247BB0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82247b34
	if (!ctx.cr6.eq) goto loc_82247B34;
loc_82247BB8:
	// clrlwi r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
loc_82247BC8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_82247BD0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,31864
	ctx.r4.s64 = ctx.r11.s64 + 31864;
loc_82247BD8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822444a0
	ctx.lr = 0x82247BE4;
	sub_822444A0(ctx, base);
	// b 0x82247b10
	goto loc_82247B10;
loc_82247BE8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,32088
	ctx.r4.s64 = ctx.r11.s64 + 32088;
	// b 0x82247bd8
	goto loc_82247BD8;
}

DEFINE_REX_FUNC(sub_82249DA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82249DB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32220
	ctx.r10.s64 = -2111569920;
	// stw r11,300(r3)
	REX_STORE_U32(ctx.r3.u32 + 300, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r6,r10,17568
	ctx.r6.s64 = ctx.r10.s64 + 17568;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x822435b8
	ctx.lr = 0x82249DE4;
	sub_822435B8(ctx, base);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822483b8
	ctx.lr = 0x82249DF8;
	sub_822483B8(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 19, ctx.xer);
	// bgt cr6,0x82249e40
	if (ctx.cr6.gt) goto loc_82249E40;
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1002
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1002, ctx.xer);
	// beq cr6,0x82249e34
	if (ctx.cr6.eq) goto loc_82249E34;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24956
	ctx.r4.s64 = ctx.r11.s64 + -24956;
	// bl 0x822444a0
	ctx.lr = 0x82249E28;
	sub_822444A0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82249ea8
	goto loc_82249EA8;
loc_82249E34:
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r11,r10,20,7,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1F00000) | (ctx.r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_82249E40:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82248e48
	ctx.lr = 0x82249E4C;
	sub_82248E48(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82178700
	ctx.lr = 0x82249E58;
	sub_82178700(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249e78
	if (ctx.cr6.eq) goto loc_82249E78;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82174d78
	ctx.lr = 0x82249E78;
	sub_82174D78(ctx, base);
loc_82249E78:
	// lwz r11,324(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82249ea4
	if (ctx.cr6.eq) goto loc_82249EA4;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,36(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r6,32(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82254e88
	ctx.lr = 0x82249EA4;
	sub_82254E88(ctx, base);
loc_82249EA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82249EA8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224C4A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8224C4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8224c4c4
	if (!ctx.cr6.eq) goto loc_8224C4C4;
	// addi r31,r1,88
	ctx.r31.s64 = ctx.r1.s64 + 88;
loc_8224C4C4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8224c524
	if (!ctx.cr6.eq) goto loc_8224C524;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8224c510
	if (ctx.cr6.eq) goto loc_8224C510;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8224c510
	if (ctx.cr6.eq) goto loc_8224C510;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8224c4fc
	if (!ctx.cr6.eq) goto loc_8224C4FC;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x8224c51c
	goto loc_8224C51C;
loc_8224C4FC:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8224c5c8
	if (!ctx.cr6.eq) goto loc_8224C5C8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8224c51c
	goto loc_8224C51C;
loc_8224C510:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
loc_8224C51C:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8224c5c0
	goto loc_8224C5C0;
loc_8224C524:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x8224c558
	if (!ctx.cr6.eq) goto loc_8224C558;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8224c4a0
	ctx.lr = 0x8224C53C;
	sub_8224C4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224c5d0
	if (ctx.cr0.lt) goto loc_8224C5D0;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8224c5c0
	goto loc_8224C5C0;
loc_8224C558:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224c5c8
	if (!ctx.cr6.eq) goto loc_8224C5C8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8224C56C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,48(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x8224c4a0
	ctx.lr = 0x8224C584;
	sub_8224C4A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224c5d0
	if (ctx.cr0.lt) goto loc_8224C5D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8224c5b0
	if (!ctx.cr6.gt) goto loc_8224C5B0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8224C5B0:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8224c56c
	if (!ctx.cr6.eq) goto loc_8224C56C;
loc_8224C5C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224c5d0
	goto loc_8224C5D0;
loc_8224C5C8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8224C5D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224D8F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x8224d97c
	if (!ctx.cr6.gt) goto loc_8224D97C;
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-10024
	ctx.r3.s64 = ctx.r11.s64 + -10024;
	// bl 0x8220f680
	ctx.lr = 0x8224D930;
	sub_8220F680(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8224d978
	if (!ctx.cr6.gt) goto loc_8224D978;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
loc_8224D94C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,-4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8224d964
	if (ctx.cr6.eq) goto loc_8224D964;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8224D964:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8224d94c
	if (ctx.cr6.lt) goto loc_8224D94C;
loc_8224D978:
	// stw r7,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
loc_8224D97C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224ED40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8224ED48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x821c70d8
	ctx.lr = 0x8224ED70;
	sub_821C70D8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// li r10,2257
	ctx.r10.s64 = 2257;
	// stw r28,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// addi r11,r11,-22632
	ctx.r11.s64 = ctx.r11.s64 + -22632;
	// stw r27,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// li r9,228
	ctx.r9.s64 = 228;
	// stw r26,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r25,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r25.u32);
	// stw r8,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// std r11,48(r31)
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// ld r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 8);
	// std r11,56(r31)
	REX_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
	// ld r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 16);
	// std r11,64(r31)
	REX_STORE_U64(ctx.r31.u32 + 64, ctx.r11.u64);
	// ld r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 24);
	// std r11,72(r31)
	REX_STORE_U64(ctx.r31.u32 + 72, ctx.r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224F5F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8224f65c
	if (ctx.cr6.lt) goto loc_8224F65C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r4,r11,r9
	ctx.r4.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82160230
	ctx.lr = 0x8224F638;
	sub_82160230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224f650
	if (!ctx.cr0.lt) goto loc_8224F650;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8224f65c
	goto loc_8224F65C;
loc_8224F650:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8224F65C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224FD68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,18512
	ctx.r4.s64 = ctx.r11.s64 + 18512;
	// bl 0x8224efb8
	ctx.lr = 0x8224FD88;
	sub_8224EFB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12524
	ctx.r4.s64 = ctx.r11.s64 + -12524;
	// bl 0x8224efb8
	ctx.lr = 0x8224FD98;
	sub_8224EFB8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822509A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x822509A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x8224f010
	ctx.lr = 0x822509C4;
	sub_8224F010(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r19,r10,-15316
	ctx.r19.s64 = ctx.r10.s64 + -15316;
	// addi r27,r11,-15768
	ctx.r27.s64 = ctx.r11.s64 + -15768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822509E4;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x822509EC;
	sub_8224FD68(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r26,r10,-15892
	ctx.r26.s64 = ctx.r10.s64 + -15892;
	// addi r18,r11,-15524
	ctx.r18.s64 = ctx.r11.s64 + -15524;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,20
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(20));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82250b0c
	if (!ctx.cr6.lt) goto loc_82250B0C;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r6,-15904
	ctx.r29.s64 = ctx.r6.s64 + -15904;
	// addi r25,r7,-15324
	ctx.r25.s64 = ctx.r7.s64 + -15324;
	// addi r24,r8,-15332
	ctx.r24.s64 = ctx.r8.s64 + -15332;
	// addi r23,r9,-15340
	ctx.r23.s64 = ctx.r9.s64 + -15340;
	// addi r22,r10,-15348
	ctx.r22.s64 = ctx.r10.s64 + -15348;
	// addi r21,r11,9292
	ctx.r21.s64 = ctx.r11.s64 + 9292;
loc_82250A48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250A50;
	sub_8224F010(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250A60;
	sub_8224EFB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-8(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250A74;
	sub_8224EFB8(ctx, base);
	// lfs f1,-4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250A90;
	sub_8224EFB8(ctx, base);
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250AAC;
	sub_8224EFB8(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250AC8;
	sub_8224EFB8(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250AE4;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82250AEC;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// mulli r11,r11,20
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(20));
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250a48
	if (ctx.cr6.lt) goto loc_82250A48;
loc_82250B0C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82250B18;
	sub_8224F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250B20;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r23,r11,-15360
	ctx.r23.s64 = ctx.r11.s64 + -15360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250B38;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82250B40;
	sub_8224FD68(ctx, base);
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82250c10
	if (!ctx.cr6.lt) goto loc_82250C10;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r8,-15364
	ctx.r29.s64 = ctx.r8.s64 + -15364;
	// addi r28,r9,-23664
	ctx.r28.s64 = ctx.r9.s64 + -23664;
	// addi r25,r10,-15372
	ctx.r25.s64 = ctx.r10.s64 + -15372;
	// addi r24,r11,-15376
	ctx.r24.s64 = ctx.r11.s64 + -15376;
loc_82250B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250B84;
	sub_8224F010(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250B94;
	sub_8224EFB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-2(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + -2);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250BA8;
	sub_8224EFB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,-1(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + -1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250BBC;
	sub_8224EFB8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250BD0;
	sub_8224EFB8(ctx, base);
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// bl 0x8224efb8
	ctx.lr = 0x82250BE8;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82250BF0;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250b7c
	if (ctx.cr6.lt) goto loc_82250B7C;
loc_82250C10:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82250C1C;
	sub_8224F070(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250C24;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r25,r11,-15392
	ctx.r25.s64 = ctx.r11.s64 + -15392;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250C3C;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82250C44;
	sub_8224FD68(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r30,0(r17)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82250cd0
	if (!ctx.cr6.lt) goto loc_82250CD0;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r10,-29408
	ctx.r29.s64 = ctx.r10.s64 + -29408;
	// addi r28,r11,-15400
	ctx.r28.s64 = ctx.r11.s64 + -15400;
loc_82250C6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250C74;
	sub_8224F010(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250C84;
	sub_8224EFB8(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250C98;
	sub_8224EFB8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250CAC;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82250CB4;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82250c6c
	if (ctx.cr6.lt) goto loc_82250C6C;
loc_82250CD0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82250CDC;
	sub_8224F070(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82257348) {
	REX_FUNC_PROLOGUE();
	// b 0x822572d8
	sub_822572D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82257350) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82160230
	ctx.lr = 0x822573A0;
	sub_82160230(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,2143(r1)
	REX_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// bge 0x822573bc
	if (!ctx.cr0.lt) goto loc_822573BC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82257468
	goto loc_82257468;
loc_822573BC:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82257468
	if (!ctx.cr6.gt) goto loc_82257468;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82257438
	if (ctx.cr6.eq) goto loc_82257438;
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82257408
	if (ctx.cr6.eq) goto loc_82257408;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82257408
	if (ctx.cr6.eq) goto loc_82257408;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82257400
	if (ctx.cr6.lt) goto loc_82257400;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82257408
	if (!ctx.cr6.gt) goto loc_82257408;
loc_82257400:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8225740c
	goto loc_8225740C;
loc_82257408:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8225740C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82257438
	if (!ctx.cr0.eq) goto loc_82257438;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,4172
	ctx.r4.s64 = ctx.r10.s64 + 4172;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257430;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82257458
	if (ctx.cr0.lt) goto loc_82257458;
loc_82257438:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82257468
	if (!ctx.cr0.lt) goto loc_82257468;
loc_82257458:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82257468
	if (ctx.cr6.lt) goto loc_82257468;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82257468:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225AE10) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,552(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 552);
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,552(r11)
	REX_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// b 0x8216b138
	sub_8216B138(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225B1A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225aff0
	ctx.lr = 0x8225B1D8;
	sub_8225AFF0(ctx, base);
}

DEFINE_REX_FUNC(sub_8225B518) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225BA1C) {
	REX_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8225BA28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8225BA30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82113c30
	ctx.lr = 0x8225BA3C;
	sub_82113C30(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r30,r31,812
	ctx.r30.s64 = ctx.r31.s64 + 812;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x8225BA64;
	sub_8215EC60(ctx, base);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// addi r29,r31,972
	ctx.r29.s64 = ctx.r31.s64 + 972;
	// stw r31,960(r31)
	REX_STORE_U32(ctx.r31.u32 + 960, ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,968(r31)
	REX_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,964(r31)
	REX_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x8225BA94;
	sub_8215EC60(ctx, base);
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// stw r31,1120(r31)
	REX_STORE_U32(ctx.r31.u32 + 1120, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,1128(r31)
	REX_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// stw r10,1124(r31)
	REX_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
	// bl 0x8225b3d8
	ctx.lr = 0x8225BAB8;
	sub_8225B3D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,944(r31)
	REX_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// stw r11,948(r31)
	REX_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	REX_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// stw r10,956(r31)
	REX_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// bl 0x8225b3d8
	ctx.lr = 0x8225BAD8;
	sub_8225B3D8(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1104(r31)
	REX_STORE_U32(ctx.r31.u32 + 1104, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,1108(r31)
	REX_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// stw r3,1112(r31)
	REX_STORE_U32(ctx.r31.u32 + 1112, ctx.r3.u32);
	// stw r10,1116(r31)
	REX_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,788(r31)
	REX_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// bl 0x822f0c68
	ctx.lr = 0x8225BB00;
	sub_822F0C68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225ED30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x8225ED38;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225ed5c
	if (ctx.cr6.lt) goto loc_8225ED5C;
	// bl 0x823712d0
	ctx.lr = 0x8225ED5C;
	sub_823712D0(ctx, base);
loc_8225ED5C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r26.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r30,r10,21
	ctx.r30.u64 = ctx.r10.u32 & 0x7FF;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x8225ed90
	if (ctx.cr6.eq) goto loc_8225ED90;
	// bl 0x823712d0
	ctx.lr = 0x8225ED90;
	sub_823712D0(ctx, base);
loc_8225ED90:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225c220
	ctx.lr = 0x8225EDA4;
	sub_8225C220(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,34
	ctx.r11.s64 = 34;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8225c9f0
	ctx.lr = 0x8225EDF8;
	sub_8225C9F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82260E40) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.u64 = static_cast<uint64_t>(32) - ctx.r5.u64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r5.u64;
	// lbz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82261BA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82261BB0;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// srawi r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	// addi r4,r10,4172
	ctx.r4.s64 = ctx.r10.s64 + 4172;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi r21,r9,31
	ctx.r21.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82261248
	ctx.lr = 0x82261BEC;
	sub_82261248(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,18488
	ctx.r20.s64 = ctx.r11.s64 + 18488;
	// beq cr6,0x82261c08
	if (ctx.cr6.eq) goto loc_82261C08;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261248
	ctx.lr = 0x82261C08;
	sub_82261248(ctx, base);
loc_82261C08:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82261c1c
	if (!ctx.cr6.eq) goto loc_82261C1C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82261c20
	if (!ctx.cr6.eq) goto loc_82261C20;
loc_82261C1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82261C20:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82261c38
	if (!ctx.cr6.eq) goto loc_82261C38;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82261c3c
	if (!ctx.cr6.eq) goto loc_82261C3C;
loc_82261C38:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82261C3C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,5760
	ctx.r29.s64 = ctx.r10.s64 + 5760;
	// beq 0x82261c64
	if (ctx.cr0.eq) goto loc_82261C64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19632
	ctx.r4.s64 = ctx.r11.s64 + -19632;
	// bl 0x82261248
	ctx.lr = 0x82261C60;
	sub_82261248(ctx, base);
	// b 0x82261c8c
	goto loc_82261C8C;
loc_82261C64:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82261c78
	if (ctx.cr6.eq) goto loc_82261C78;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,13500
	ctx.r5.s64 = ctx.r11.s64 + 13500;
	// b 0x82261c80
	goto loc_82261C80;
loc_82261C78:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-23200
	ctx.r5.s64 = ctx.r11.s64 + -23200;
loc_82261C80:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261248
	ctx.lr = 0x82261C8C;
	sub_82261248(ctx, base);
loc_82261C8C:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82261ca4
	if (ctx.cr0.eq) goto loc_82261CA4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3924
	ctx.r4.s64 = ctx.r11.s64 + 3924;
	// bl 0x82261248
	ctx.lr = 0x82261CA4;
	sub_82261248(ctx, base);
loc_82261CA4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82261cf4
	if (!ctx.cr6.eq) goto loc_82261CF4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82261ce0
	if (ctx.cr6.eq) goto loc_82261CE0;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x82261cd4
	if (ctx.cr6.eq) goto loc_82261CD4;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x82261ce0
	if (!ctx.cr6.eq) goto loc_82261CE0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,31488
	ctx.r5.s64 = ctx.r11.s64 + 31488;
loc_82261CCC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82261cec
	goto loc_82261CEC;
loc_82261CD4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,31484
	ctx.r5.s64 = ctx.r11.s64 + 31484;
	// b 0x82261ccc
	goto loc_82261CCC;
loc_82261CE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,4620
	ctx.r4.s64 = ctx.r11.s64 + 4620;
loc_82261CEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261248
	ctx.lr = 0x82261CF4;
	sub_82261248(ctx, base);
loc_82261CF4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82261d14
	if (!ctx.cr6.eq) goto loc_82261D14;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82261d14
	if (ctx.cr6.eq) goto loc_82261D14;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-208
	ctx.r4.s64 = ctx.r11.s64 + -208;
	// bl 0x82261248
	ctx.lr = 0x82261D14;
	sub_82261248(ctx, base);
loc_82261D14:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82261d2c
	if (ctx.cr6.eq) goto loc_82261D2C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3920
	ctx.r4.s64 = ctx.r11.s64 + 3920;
	// bl 0x82261248
	ctx.lr = 0x82261D2C;
	sub_82261248(ctx, base);
loc_82261D2C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82261da8
	if (!ctx.cr6.eq) goto loc_82261DA8;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x82261f00
	if (ctx.cr6.eq) goto loc_82261F00;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14356
	ctx.r4.s64 = ctx.r11.s64 + -14356;
	// bl 0x82261248
	ctx.lr = 0x82261D4C;
	sub_82261248(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261d64
	if (ctx.cr0.eq) goto loc_82261D64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// bl 0x82261248
	ctx.lr = 0x82261D64;
	sub_82261248(ctx, base);
loc_82261D64:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261d7c
	if (ctx.cr0.eq) goto loc_82261D7C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// bl 0x82261248
	ctx.lr = 0x82261D7C;
	sub_82261248(ctx, base);
loc_82261D7C:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261d94
	if (ctx.cr0.eq) goto loc_82261D94;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3908
	ctx.r4.s64 = ctx.r11.s64 + 3908;
	// bl 0x82261248
	ctx.lr = 0x82261D94;
	sub_82261248(ctx, base);
loc_82261D94:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261f00
	if (ctx.cr0.eq) goto loc_82261F00;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,3916
	ctx.r4.s64 = ctx.r11.s64 + 3916;
	// b 0x82261ef8
	goto loc_82261EF8;
loc_82261DA8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14356
	ctx.r4.s64 = ctx.r11.s64 + -14356;
	// bl 0x82261248
	ctx.lr = 0x82261DB8;
	sub_82261248(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// clrlwi. r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,-1888
	ctx.r28.s64 = ctx.r11.s64 + -1888;
	// addi r30,r10,31492
	ctx.r30.s64 = ctx.r10.s64 + 31492;
	// addi r29,r9,-212
	ctx.r29.s64 = ctx.r9.s64 + -212;
	// beq 0x82261df8
	if (ctx.cr0.eq) goto loc_82261DF8;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82261dec
	if (ctx.cr0.eq) goto loc_82261DEC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82261e18
	goto loc_82261E18;
loc_82261DEC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// b 0x82261e18
	goto loc_82261E18;
loc_82261DF8:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82261e10
	if (ctx.cr6.eq) goto loc_82261E10;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82261e14
	if (!ctx.cr6.eq) goto loc_82261E14;
loc_82261E10:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82261E14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82261E18:
	// bl 0x82261248
	ctx.lr = 0x82261E1C;
	sub_82261248(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261e44
	if (ctx.cr0.eq) goto loc_82261E44;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82261e38
	if (ctx.cr0.eq) goto loc_82261E38;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82261e64
	goto loc_82261E64;
loc_82261E38:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// b 0x82261e64
	goto loc_82261E64;
loc_82261E44:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82261e5c
	if (ctx.cr6.eq) goto loc_82261E5C;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82261e60
	if (!ctx.cr6.eq) goto loc_82261E60;
loc_82261E5C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82261E60:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82261E64:
	// bl 0x82261248
	ctx.lr = 0x82261E68;
	sub_82261248(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261e90
	if (ctx.cr0.eq) goto loc_82261E90;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82261e84
	if (ctx.cr0.eq) goto loc_82261E84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82261eb0
	goto loc_82261EB0;
loc_82261E84:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,3908
	ctx.r4.s64 = ctx.r11.s64 + 3908;
	// b 0x82261eb0
	goto loc_82261EB0;
loc_82261E90:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82261ea8
	if (ctx.cr6.eq) goto loc_82261EA8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82261eac
	if (!ctx.cr6.eq) goto loc_82261EAC;
loc_82261EA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82261EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82261EB0:
	// bl 0x82261248
	ctx.lr = 0x82261EB4;
	sub_82261248(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261edc
	if (ctx.cr0.eq) goto loc_82261EDC;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82261ed0
	if (ctx.cr0.eq) goto loc_82261ED0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82261efc
	goto loc_82261EFC;
loc_82261ED0:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r11,3916
	ctx.r4.s64 = ctx.r11.s64 + 3916;
	// b 0x82261efc
	goto loc_82261EFC;
loc_82261EDC:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82261ef4
	if (ctx.cr6.eq) goto loc_82261EF4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82261ef8
	if (!ctx.cr6.eq) goto loc_82261EF8;
loc_82261EF4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82261EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82261EFC:
	// bl 0x82261248
	ctx.lr = 0x82261F00;
	sub_82261248(ctx, base);
loc_82261F00:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82261f10
	if (ctx.cr6.eq) goto loc_82261F10;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82261f18
	goto loc_82261F18;
loc_82261F10:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r4,r11,9925
	ctx.r4.s64 = ctx.r11.s64 + 9925;
loc_82261F18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82261248
	ctx.lr = 0x82261F20;
	sub_82261248(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82261f38
	if (ctx.cr6.eq) goto loc_82261F38;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-220
	ctx.r4.s64 = ctx.r11.s64 + -220;
	// bl 0x82261248
	ctx.lr = 0x82261F38;
	sub_82261248(ctx, base);
loc_82261F38:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D4F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8226d52c
	if (ctx.cr6.eq) goto loc_8226D52C;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8226d52c
	if (ctx.cr6.eq) goto loc_8226D52C;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8226d52c
	if (ctx.cr6.eq) goto loc_8226D52C;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8226d52c
	if (ctx.cr6.eq) goto loc_8226D52C;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8226d52c
	if (ctx.cr6.eq) goto loc_8226D52C;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8226d530
	if (!ctx.cr6.eq) goto loc_8226D530;
loc_8226D52C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226D530:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226D9F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8226DA1C;
	sub_8226D728(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226E208) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r9,2
	ctx.r8.s64 = ctx.r9.s64 + 2;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822731D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273348
	if (!ctx.cr0.eq) goto loc_82273348;
	// rlwinm. r11,r10,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273348
	if (!ctx.cr0.eq) goto loc_82273348;
	// lwz r11,32(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r10,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82273348
	if (ctx.cr6.gt) goto loc_82273348;
	// rlwinm r9,r10,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82273348
	if (ctx.cr6.gt) goto loc_82273348;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r6,r9,29,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r4,r9,26,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r7,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r6,-12(r1)
	REX_STORE_U32(ctx.r1.u32 + -12, ctx.r6.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r4,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r4.u32);
	// stw r9,-4(r1)
	REX_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// beq cr6,0x8227327c
	if (ctx.cr6.eq) goto loc_8227327C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x82273348
	if (!ctx.cr6.gt) goto loc_82273348;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// ble cr6,0x8227327c
	if (!ctx.cr6.gt) goto loc_8227327C;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// ble cr6,0x82273348
	if (!ctx.cr6.gt) goto loc_82273348;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82273348
	if (ctx.cr6.gt) goto loc_82273348;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
loc_82273260:
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r7,7
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 7, ctx.xer);
	// bne cr6,0x82273348
	if (!ctx.cr6.eq) goto loc_82273348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82273260
	if (ctx.cr6.lt) goto loc_82273260;
loc_8227327C:
	// rlwinm. r11,r10,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273290
	if (!ctx.cr0.eq) goto loc_82273290;
	// lbz r11,40(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82273348
	if (ctx.cr0.eq) goto loc_82273348;
loc_82273290:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
loc_82273298:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82273298
	if (ctx.cr6.lt) goto loc_82273298;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,18,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// rlwinm r10,r11,0,16,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r10,32768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32768, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// rlwinm r10,r11,14,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822732f8
	if (ctx.cr6.eq) goto loc_822732F8;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bge cr6,0x822732f8
	if (!ctx.cr6.lt) goto loc_822732F8;
	// lbz r10,40(r5)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82273348
	if (ctx.cr0.eq) goto loc_82273348;
loc_822732F8:
	// rlwinm r10,r11,0,6,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3000000;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// rlwinm r10,r11,0,4,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC000000;
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82273348
	if (ctx.cr6.eq) goto loc_82273348;
	// rlwinm. r10,r11,0,8,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82273348
	if (!ctx.cr0.eq) goto loc_82273348;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273348
	if (!ctx.cr0.eq) goto loc_82273348;
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// rlwinm r11,r11,0,18,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3E00;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
loc_82273348:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822786D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822786f0
	if (ctx.cr0.eq) goto loc_822786F0;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x822786f4
	if (ctx.cr0.eq) goto loc_822786F4;
loc_822786F0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822786F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r11,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0xFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82278728
	if (ctx.cr6.eq) goto loc_82278728;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
loc_82278728:
	// stwx r6,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82279A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x82279A84;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// stwx r30,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227A7D0) {
	REX_FUNC_PROLOGUE();
	// addi r7,r5,1
	ctx.r7.s64 = ctx.r5.s64 + 1;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// clrlwi r10,r7,27
	ctx.r10.u64 = ctx.r7.u32 & 0x1F;
	// li r9,2
	ctx.r9.s64 = 2;
	// not r5,r8
	ctx.r5.u64 = ~ctx.r8.u64;
	// li r4,-1
	ctx.r4.s64 = -1;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi. r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r5,r4,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// addi r4,r9,-1
	ctx.r4.s64 = ctx.r9.s64 + -1;
	// addi r9,r8,4
	ctx.r9.s64 = ctx.r8.s64 + 4;
	// bne 0x8227a80c
	if (!ctx.cr0.eq) goto loc_8227A80C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8227A80C:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// beq cr6,0x8227a820
	if (ctx.cr6.eq) goto loc_8227A820;
	// addi r3,r8,4
	ctx.r3.s64 = ctx.r8.s64 + 4;
loc_8227A820:
	// rlwinm r11,r7,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8227a844
	if (!ctx.cr6.eq) goto loc_8227A844;
	// and r11,r9,r4
	ctx.r11.u64 = ctx.r9.u64 & ctx.r4.u64;
	// srw r3,r11,r6
	ctx.r3.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// blr 
	return;
loc_8227A844:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r10,r6,32
	ctx.xer.ca = ctx.r6.u32 <= 32;
	ctx.r10.u64 = static_cast<uint64_t>(32) - ctx.r6.u64;
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 | ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227BB38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8227BB40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227bb60
	if (!ctx.cr6.eq) goto loc_8227BB60;
	// bl 0x8227ba70
	ctx.lr = 0x8227BB60;
	sub_8227BA70(ctx, base);
loc_8227BB60:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r10,997
	ctx.r10.s64 = 997;
	// lwz r9,712(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 712);
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mulli r10,r10,997
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(997));
	// subf r29,r10,r11
	ctx.r29.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bne cr6,0x8227bb90
	if (!ctx.cr6.eq) goto loc_8227BB90;
	// li r4,3988
	ctx.r4.s64 = 3988;
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x8226e260
	ctx.lr = 0x8227BB8C;
	sub_8226E260(ctx, base);
	// stw r3,712(r31)
	REX_STORE_U32(ctx.r31.u32 + 712, ctx.r3.u32);
loc_8227BB90:
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 712);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,712(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 712);
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,716(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 716);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,716(r31)
	REX_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// cmplwi cr6,r11,25000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25000, ctx.xer);
	// ble cr6,0x8227bbc4
	if (!ctx.cr6.gt) goto loc_8227BBC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8227bc30
	goto loc_8227BC30;
loc_8227BBC4:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227bc2c
	if (!ctx.cr0.eq) goto loc_8227BC2C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8227bc2c
	if (ctx.cr0.eq) goto loc_8227BC2C;
loc_8227BBD8:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bc14
	if (ctx.cr0.eq) goto loc_8227BC14;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,12,21,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x780;
	// lwz r9,724(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 724);
	// rlwinm r8,r8,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7F;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
loc_8227BC14:
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227bc2c
	if (!ctx.cr0.eq) goto loc_8227BC2C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8227bbd8
	if (!ctx.cr6.eq) goto loc_8227BBD8;
loc_8227BC2C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8227BC30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82281200) {
	REX_FUNC_PROLOGUE();
	// lwz r8,4(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82281258
	if (ctx.cr6.eq) goto loc_82281258;
	// lwz r11,56(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 56);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82281254
	if (!ctx.cr6.eq) goto loc_82281254;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82281220:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82281250
	if (ctx.cr6.eq) goto loc_82281250;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228123c
	if (!ctx.cr6.eq) goto loc_8228123C;
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// b 0x82281220
	goto loc_82281220;
loc_8228123C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281220
	if (ctx.cr6.eq) goto loc_82281220;
	// b 0x82281254
	goto loc_82281254;
loc_82281250:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82281254:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82281258:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82282130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82282138;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282160
	if (ctx.cr0.eq) goto loc_82282160;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822821d8
	goto loc_822821D8;
loc_82282160:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822821d8
	if (ctx.cr0.eq) goto loc_822821D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x822821ac
	if (ctx.cr6.eq) goto loc_822821AC;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x822821ac
	if (ctx.cr6.eq) goto loc_822821AC;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x822821ac
	if (ctx.cr6.eq) goto loc_822821AC;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x822821ac
	if (ctx.cr6.eq) goto loc_822821AC;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x822821ac
	if (ctx.cr6.eq) goto loc_822821AC;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822821b0
	if (!ctx.cr6.eq) goto loc_822821B0;
loc_822821AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822821B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822821d8
	if (ctx.cr0.eq) goto loc_822821D8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822821D0;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_822821D8:
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822821fc
	if (!ctx.cr6.eq) goto loc_822821FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280c80
	ctx.lr = 0x822821E8;
	sub_82280C80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282204
	if (ctx.cr0.eq) goto loc_82282204;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
loc_822821FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_82282204:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// beq cr6,0x822821fc
	if (ctx.cr6.eq) goto loc_822821FC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82282220;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_82286D58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x82286D60;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822871a4
	if (!ctx.cr0.eq) goto loc_822871A4;
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822871a4
	if (!ctx.cr0.eq) goto loc_822871A4;
	// lwz r11,68(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822871a4
	if (!ctx.cr0.eq) goto loc_822871A4;
	// lwz r11,68(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 68);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822871a4
	if (!ctx.cr0.eq) goto loc_822871A4;
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// lwz r10,76(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822871a4
	if (!ctx.cr0.eq) goto loc_822871A4;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82286e00
	if (!ctx.cr0.eq) goto loc_82286E00;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82286e00
	if (ctx.cr0.eq) goto loc_82286E00;
loc_82286DD0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x82286de8
	if (ctx.cr6.eq) goto loc_82286DE8;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x822871a4
	if (!ctx.cr6.eq) goto loc_822871A4;
loc_82286DE8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82286e00
	if (!ctx.cr0.eq) goto loc_82286E00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82286dd0
	if (!ctx.cr6.eq) goto loc_82286DD0;
loc_82286E00:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// bl 0x8226dbe8
	ctx.lr = 0x82286E14;
	sub_8226DBE8(ctx, base);
	// addi r20,r3,4
	ctx.r20.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r20,1
	ctx.r10.u64 = ctx.r20.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82286e68
	if (!ctx.cr0.eq) goto loc_82286E68;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82286e68
	if (ctx.cr0.eq) goto loc_82286E68;
loc_82286E40:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x82287180
	if (!ctx.cr6.eq) goto loc_82287180;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82286e68
	if (!ctx.cr0.eq) goto loc_82286E68;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82286e40
	if (!ctx.cr6.eq) goto loc_82286E40;
loc_82286E68:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82287184
	if (!ctx.cr0.eq) goto loc_82287184;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82287184
	if (ctx.cr0.eq) goto loc_82287184;
loc_82286E80:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82287160
	if (!ctx.cr6.eq) goto loc_82287160;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r22,r23,44
	ctx.r22.s64 = ctx.r23.s64 + 44;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_82286EA8:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82286f08
	if (!ctx.cr6.lt) goto loc_82286F08;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82286efc
	if (!ctx.cr6.eq) goto loc_82286EFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8232c520
	ctx.lr = 0x82286EF0;
	sub_8232C520(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
loc_82286EFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// b 0x82286ea8
	goto loc_82286EA8;
loc_82286F08:
	// subf r28,r24,r11
	ctx.r28.u64 = ctx.r11.u64 - ctx.r24.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82286fd8
	if (ctx.cr6.eq) goto loc_82286FD8;
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
loc_82286F1C:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82286f4c
	if (ctx.cr6.eq) goto loc_82286F4C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_82286F30:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82286f4c
	if (ctx.cr6.eq) goto loc_82286F4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82286f30
	if (ctx.cr6.lt) goto loc_82286F30;
loc_82286F4C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82286fc8
	if (!ctx.cr6.eq) goto loc_82286FC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// rlwinm r11,r11,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x822fa820
	ctx.lr = 0x82286F6C;
	sub_822FA820(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287180
	if (!ctx.cr0.eq) goto loc_82287180;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82286fa4
	if (!ctx.cr0.eq) goto loc_82286FA4;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82286fa4
	if (ctx.cr0.eq) goto loc_82286FA4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82286fb0
	if (!ctx.cr6.gt) goto loc_82286FB0;
loc_82286FA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822fade8
	ctx.lr = 0x82286FB0;
	sub_822FADE8(ctx, base);
loc_82286FB0:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stwx r31,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r31.u32);
loc_82286FC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82286f1c
	if (ctx.cr6.lt) goto loc_82286F1C;
loc_82286FD8:
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// bgt cr6,0x82287180
	if (ctx.cr6.gt) goto loc_82287180;
	// lwz r11,28(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82287160
	if (!ctx.cr0.eq) goto loc_82287160;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82287160
	if (ctx.cr0.eq) goto loc_82287160;
loc_82286FF8:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x82287144
	if (!ctx.cr6.eq) goto loc_82287144;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
loc_82287014:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82287130
	if (!ctx.cr6.lt) goto loc_82287130;
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c520
	ctx.lr = 0x8228704C;
	sub_8232C520(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8228707c
	if (ctx.cr6.eq) goto loc_8228707C;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
loc_8228705C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82287180
	if (ctx.cr6.eq) goto loc_82287180;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8228705c
	if (ctx.cr6.lt) goto loc_8228705C;
loc_8228707C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x82287124
	if (!ctx.cr6.eq) goto loc_82287124;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhz r4,18(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// bl 0x8228cbc0
	ctx.lr = 0x8228709C;
	sub_8228CBC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_822870A8:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82287124
	if (!ctx.cr6.lt) goto loc_82287124;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82287118
	if (!ctx.cr6.eq) goto loc_82287118;
	// clrlwi. r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82287100
	if (ctx.cr0.eq) goto loc_82287100;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822870f4
	if (ctx.cr6.eq) goto loc_822870F4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822870f8
	if (!ctx.cr6.eq) goto loc_822870F8;
loc_822870F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822870F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287118
	if (!ctx.cr0.eq) goto loc_82287118;
loc_82287100:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lhz r4,18(r10)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r10.u32 + 18);
	// bl 0x8228cbc0
	ctx.lr = 0x8228710C;
	sub_8228CBC0(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82287118
	if (!ctx.cr6.eq) goto loc_82287118;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82287118:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// b 0x822870a8
	goto loc_822870A8;
loc_82287124:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82287014
	goto loc_82287014;
loc_82287130:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82287144
	if (ctx.cr0.eq) goto loc_82287144;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
loc_82287144:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82287160
	if (!ctx.cr0.eq) goto loc_82287160;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82286ff8
	if (!ctx.cr6.eq) goto loc_82286FF8;
loc_82287160:
	// rlwinm r11,r23,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82287184
	if (!ctx.cr0.eq) goto loc_82287184;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82286e80
	if (!ctx.cr6.eq) goto loc_82286E80;
	// b 0x82287184
	goto loc_82287184;
loc_82287180:
	// li r18,0
	ctx.r18.s64 = 0;
loc_82287184:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822fa780
	ctx.lr = 0x8228718C;
	sub_822FA780(ctx, base);
	// addi r11,r19,972
	ctx.r11.s64 = ctx.r19.s64 + 972;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,976(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 976);
	// stw r11,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r21,976(r19)
	REX_STORE_U32(ctx.r19.u32 + 976, ctx.r21.u32);
	// b 0x822871a8
	goto loc_822871A8;
loc_822871A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822871A8:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82299CC8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82299ce8
	if (ctx.cr6.lt) goto loc_82299CE8;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82299cec
	if (!ctx.cr6.gt) goto loc_82299CEC;
loc_82299CE8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82299CEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82299d24
	if (ctx.cr0.eq) goto loc_82299D24;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82299d24
	if (!ctx.cr0.eq) goto loc_82299D24;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82299d24
	if (ctx.cr6.eq) goto loc_82299D24;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi. r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82299d24
	if (!ctx.cr0.eq) goto loc_82299D24;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82299D24:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x82299d40
	if (ctx.cr6.lt) goto loc_82299D40;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82299d44
	if (!ctx.cr6.gt) goto loc_82299D44;
loc_82299D40:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82299D44:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82299d7c
	if (ctx.cr0.eq) goto loc_82299D7C;
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82299d7c
	if (!ctx.cr0.eq) goto loc_82299D7C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82299d7c
	if (ctx.cr6.eq) goto loc_82299D7C;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// clrlwi. r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82299d7c
	if (!ctx.cr0.eq) goto loc_82299D7C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82299D7C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r4,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229D480) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x8229D488;
	__savegprlr_15(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8229d4dc
	if (!ctx.cr0.eq) goto loc_8229D4DC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229d4dc
	if (ctx.cr0.eq) goto loc_8229D4DC;
loc_8229D4AC:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// ori r7,r7,8191
	ctx.r7.u64 = ctx.r7.u64 | 8191;
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r7,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// lwz r11,40(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8229d4dc
	if (!ctx.cr0.eq) goto loc_8229D4DC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d4ac
	if (!ctx.cr6.eq) goto loc_8229D4AC;
loc_8229D4DC:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r16,r10,-32472
	ctx.r16.s64 = ctx.r10.s64 + -32472;
	// bne 0x8229d53c
	if (!ctx.cr0.eq) goto loc_8229D53C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229d53c
	if (ctx.cr0.eq) goto loc_8229D53C;
loc_8229D4F8:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x8229d50c
	goto loc_8229D50C;
loc_8229D504:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_8229D50C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8229d504
	if (!ctx.cr6.eq) goto loc_8229D504;
	// stw r16,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r9,0,19,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC001FFF;
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229d53c
	if (!ctx.cr0.eq) goto loc_8229D53C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d4f8
	if (!ctx.cr6.eq) goto loc_8229D4F8;
loc_8229D53C:
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8215ec60
	ctx.lr = 0x8229D550;
	sub_8215EC60(ctx, base);
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r5,r1,216
	ctx.r5.s64 = ctx.r1.s64 + 216;
	// stw r21,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r21.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// stw r18,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r18.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r18,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r18.u32);
	// stw r18,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r18.u32);
	// stw r21,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r21.u32);
	// bl 0x8229b788
	ctx.lr = 0x8229D578;
	sub_8229B788(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8229d5f0
	if (ctx.cr0.eq) goto loc_8229D5F0;
loc_8229D580:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8229d5a4
	goto loc_8229D5A4;
loc_8229D594:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8229d614
	if (ctx.cr6.eq) goto loc_8229D614;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8229D5A4:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8229d594
	if (!ctx.cr6.eq) goto loc_8229D594;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D5B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d5e4
	if (!ctx.cr0.eq) goto loc_8229D5E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82298e10
	ctx.lr = 0x8229D5D0;
	sub_82298E10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d5e4
	if (ctx.cr0.eq) goto loc_8229D5E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229b390
	ctx.lr = 0x8229D5E4;
	sub_8229B390(ctx, base);
loc_8229D5E4:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229d580
	if (!ctx.cr6.eq) goto loc_8229D580;
loc_8229D5F0:
	// addi r30,r15,92
	ctx.r30.s64 = ctx.r15.s64 + 92;
	// li r29,4
	ctx.r29.s64 = 4;
loc_8229D5F8:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d66c
	if (ctx.cr6.eq) goto loc_8229D66C;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x8229d62c
	goto loc_8229D62C;
loc_8229D614:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8229d5b8
	goto loc_8229D5B8;
loc_8229D61C:
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8229d698
	if (ctx.cr6.eq) goto loc_8229D698;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8229D62C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8229d61c
	if (!ctx.cr6.eq) goto loc_8229D61C;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D640:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d66c
	if (!ctx.cr0.eq) goto loc_8229D66C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82298e10
	ctx.lr = 0x8229D658;
	sub_82298E10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d66c
	if (ctx.cr0.eq) goto loc_8229D66C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229b390
	ctx.lr = 0x8229D66C;
	sub_8229B390(ctx, base);
loc_8229D66C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8229d5f8
	if (!ctx.cr0.eq) goto loc_8229D5F8;
	// lwz r11,36(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 36);
	// addi r30,r15,32
	ctx.r30.s64 = ctx.r15.s64 + 32;
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// bne 0x8229d718
	if (!ctx.cr0.eq) goto loc_8229D718;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8229d70c
	goto loc_8229D70C;
loc_8229D698:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8229d640
	goto loc_8229D640;
loc_8229D6A0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229c080
	ctx.lr = 0x8229D6B0;
	sub_8229C080(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d6d0
	if (ctx.cr6.lt) goto loc_8229D6D0;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229d6d4
	if (!ctx.cr6.gt) goto loc_8229D6D4;
loc_8229D6D0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D6D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d6e0
	if (ctx.cr0.eq) goto loc_8229D6E0;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8229D6E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82298d08
	ctx.lr = 0x8229D6EC;
	sub_82298D08(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229cd88
	ctx.lr = 0x8229D6FC;
	sub_8229CD88(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229d718
	if (!ctx.cr0.eq) goto loc_8229D718;
loc_8229D70C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8229d6a0
	if (!ctx.cr0.eq) goto loc_8229D6A0;
loc_8229D718:
	// addi r19,r15,24
	ctx.r19.s64 = ctx.r15.s64 + 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r23,r19,4
	ctx.r23.s64 = ctx.r19.s64 + 4;
	// addi r11,r19,-36
	ctx.r11.s64 = ctx.r19.s64 + -36;
	// ori r20,r23,1
	ctx.r20.u64 = ctx.r23.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r20,24(r15)
	REX_STORE_U32(ctx.r15.u32 + 24, ctx.r20.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r11,28(r15)
	REX_STORE_U32(ctx.r15.u32 + 28, ctx.r11.u32);
	// bl 0x8229ab68
	ctx.lr = 0x8229D740;
	sub_8229AB68(ctx, base);
	// lwz r11,76(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 76);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e078
	if (ctx.cr0.eq) goto loc_8229E078;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82298d88
	ctx.lr = 0x8229D754;
	sub_82298D88(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8229e078
	if (ctx.cr0.eq) goto loc_8229E078;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// stw r8,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r8.u32);
	// bl 0x8229c080
	ctx.lr = 0x8229D798;
	sub_8229C080(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d7b8
	if (ctx.cr6.lt) goto loc_8229D7B8;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229d7bc
	if (!ctx.cr6.gt) goto loc_8229D7BC;
loc_8229D7B8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D7BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d7c8
	if (ctx.cr0.eq) goto loc_8229D7C8;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8229D7C8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x8229e06c
	goto loc_8229E06C;
loc_8229D7D0:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229c8e0
	ctx.lr = 0x8229D7E0;
	sub_8229C8E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8229d8c8
	if (ctx.cr6.eq) goto loc_8229D8C8;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d80c
	if (ctx.cr6.lt) goto loc_8229D80C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229d810
	if (!ctx.cr6.gt) goto loc_8229D810;
loc_8229D80C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D810:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d8c8
	if (ctx.cr0.eq) goto loc_8229D8C8;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d828
	if (ctx.cr0.eq) goto loc_8229D828;
	// li r29,-1
	ctx.r29.s64 = -1;
	// b 0x8229d834
	goto loc_8229D834;
loc_8229D828:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82299f90
	ctx.lr = 0x8229D830;
	sub_82299F90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_8229D834:
	// addi r11,r17,1
	ctx.r11.s64 = ctx.r17.s64 + 1;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8229d8c8
	if (ctx.cr6.lt) goto loc_8229D8C8;
	// lwz r8,4(r24)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8229D84C:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8229d89c
	if (ctx.cr6.eq) goto loc_8229D89C;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d894
	if (ctx.cr6.eq) goto loc_8229D894;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8229d894
	if (!ctx.cr6.eq) goto loc_8229D894;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// beq cr6,0x8229d894
	if (ctx.cr6.eq) goto loc_8229D894;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8229d894
	if (ctx.cr6.lt) goto loc_8229D894;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_8229D894:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8229d84c
	goto loc_8229D84C;
loc_8229D89C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229da38
	if (ctx.cr6.eq) goto loc_8229DA38;
	// add r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// ble cr6,0x8229da24
	if (!ctx.cr6.gt) goto loc_8229DA24;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// ble cr6,0x8229d8c8
	if (!ctx.cr6.gt) goto loc_8229D8C8;
	// addi r10,r22,1
	ctx.r10.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8229da24
	if (!ctx.cr6.gt) goto loc_8229DA24;
loc_8229D8C8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d8e4
	if (ctx.cr6.lt) goto loc_8229D8E4;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229d8e8
	if (!ctx.cr6.gt) goto loc_8229D8E8;
loc_8229D8E4:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D8E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d964
	if (ctx.cr0.eq) goto loc_8229D964;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82278730
	ctx.lr = 0x8229D908;
	sub_82278730(ctx, base);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229c8e0
	ctx.lr = 0x8229D918;
	sub_8229C8E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82299678
	ctx.lr = 0x8229D928;
	sub_82299678(ctx, base);
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229d964
	if (ctx.cr6.eq) goto loc_8229D964;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229d950
	if (ctx.cr6.lt) goto loc_8229D950;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229d954
	if (!ctx.cr6.gt) goto loc_8229D954;
loc_8229D950:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229D954:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d964
	if (ctx.cr0.eq) goto loc_8229D964;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_8229D964:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82298d08
	ctx.lr = 0x8229D970;
	sub_82298D08(ctx, base);
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r10,r31,-36
	ctx.r10.s64 = ctx.r31.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// stw r20,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// bl 0x8229c080
	ctx.lr = 0x8229D9AC;
	sub_8229C080(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229e018
	if (ctx.cr6.eq) goto loc_8229E018;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82298d08
	ctx.lr = 0x8229D9C0;
	sub_82298D08(ctx, base);
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x8229c080
	ctx.lr = 0x8229DA00;
	sub_8229C080(ctx, base);
	// b 0x8229e044
	goto loc_8229E044;
loc_8229DA04:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229da1c
	if (ctx.cr0.eq) goto loc_8229DA1C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8229da24
	goto loc_8229DA24;
loc_8229DA1C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_8229DA24:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8229da04
	if (ctx.cr6.eq) goto loc_8229DA04;
	// b 0x8229da58
	goto loc_8229DA58;
loc_8229DA38:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229da4c
	if (ctx.cr0.eq) goto loc_8229DA4C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8229da58
	goto loc_8229DA58;
loc_8229DA4C:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_8229DA58:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822998b0
	ctx.lr = 0x8229DA6C;
	sub_822998B0(ctx, base);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_8229DA70:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299970
	ctx.lr = 0x8229DA78;
	sub_82299970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229da84
	if (ctx.cr0.eq) goto loc_8229DA84;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8229DA84:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8229da9c
	if (!ctx.cr6.lt) goto loc_8229DA9C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299b68
	ctx.lr = 0x8229DA94;
	sub_82299B68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229da70
	if (!ctx.cr0.eq) goto loc_8229DA70;
loc_8229DA9C:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8229d8c8
	if (ctx.cr6.gt) goto loc_8229D8C8;
	// addi r11,r1,44
	ctx.r11.s64 = ctx.r1.s64 + 44;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229ce50
	ctx.lr = 0x8229DAD0;
	sub_8229CE50(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d8c8
	if (!ctx.cr0.eq) goto loc_8229D8C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x8229d8c8
	if (ctx.cr0.eq) goto loc_8229D8C8;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8229DAF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229db0c
	if (ctx.cr6.lt) goto loc_8229DB0C;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229db10
	if (!ctx.cr6.gt) goto loc_8229DB10;
loc_8229DB0C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229DB10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229db3c
	if (!ctx.cr0.eq) goto loc_8229DB3C;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229db30
	if (ctx.cr0.eq) goto loc_8229DB30;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// b 0x8229daf0
	goto loc_8229DAF0;
loc_8229DB30:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r28,r11,-40
	ctx.r28.s64 = ctx.r11.s64 + -40;
	// b 0x8229daf0
	goto loc_8229DAF0;
loc_8229DB3C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// bl 0x822998b0
	ctx.lr = 0x8229DB54;
	sub_822998B0(ctx, base);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
loc_8229DB58:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299a38
	ctx.lr = 0x8229DB64;
	sub_82299A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229dbe4
	if (ctx.cr0.eq) goto loc_8229DBE4;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8229db7c
	if (!ctx.cr6.eq) goto loc_8229DB7C;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
loc_8229DB7C:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82299678
	ctx.lr = 0x8229DB88;
	sub_82299678(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82278730
	ctx.lr = 0x8229DB94;
	sub_82278730(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82278730
	ctx.lr = 0x8229DBA0;
	sub_82278730(ctx, base);
loc_8229DBA0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229dcbc
	if (!ctx.cr0.eq) goto loc_8229DCBC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8229dcc0
	if (ctx.cr0.eq) goto loc_8229DCC0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229dbd8
	if (ctx.cr6.lt) goto loc_8229DBD8;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229dbdc
	if (!ctx.cr6.gt) goto loc_8229DBDC;
loc_8229DBD8:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229DBDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229dba0
	if (ctx.cr0.eq) goto loc_8229DBA0;
loc_8229DBE4:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299b68
	ctx.lr = 0x8229DBEC;
	sub_82299B68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229db58
	if (!ctx.cr0.eq) goto loc_8229DB58;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229dcc0
	if (ctx.cr6.eq) goto loc_8229DCC0;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229dc18
	if (!ctx.cr0.eq) goto loc_8229DC18;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229dcfc
	if (!ctx.cr0.eq) goto loc_8229DCFC;
loc_8229DC18:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x8229dc34
	if (ctx.cr6.lt) goto loc_8229DC34;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229dc38
	if (!ctx.cr6.gt) goto loc_8229DC38;
loc_8229DC34:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229DC38:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229dcfc
	if (ctx.cr0.eq) goto loc_8229DCFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x822784a8
	ctx.lr = 0x8229DC4C;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229dcfc
	if (ctx.cr0.eq) goto loc_8229DCFC;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229c8e0
	ctx.lr = 0x8229DC64;
	sub_8229C8E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8229dcfc
	if (ctx.cr0.eq) goto loc_8229DCFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82278730
	ctx.lr = 0x8229DC78;
	sub_82278730(ctx, base);
	// stw r31,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299a38
	ctx.lr = 0x8229DC88;
	sub_82299A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// beq 0x8229dd0c
	if (ctx.cr0.eq) goto loc_8229DD0C;
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// bl 0x8229b390
	ctx.lr = 0x8229DCA8;
	sub_8229B390(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// bl 0x8229aac0
	ctx.lr = 0x8229DCB8;
	sub_8229AAC0(ctx, base);
	// b 0x8229d964
	goto loc_8229D964;
loc_8229DCBC:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8229DCC0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299b68
	ctx.lr = 0x8229DCC8;
	sub_82299B68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229dcc0
	if (!ctx.cr0.eq) goto loc_8229DCC0;
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229dcf4
	if (!ctx.cr0.eq) goto loc_8229DCF4;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229dcf4
	if (ctx.cr0.eq) goto loc_8229DCF4;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8229DCF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229dd24
	if (ctx.cr6.eq) goto loc_8229DD24;
loc_8229DCFC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229aac0
	ctx.lr = 0x8229DD08;
	sub_8229AAC0(ctx, base);
	// b 0x8229d8c8
	goto loc_8229D8C8;
loc_8229DD0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x8229b390
	ctx.lr = 0x8229DD20;
	sub_8229B390(ctx, base);
	// b 0x8229dcfc
	goto loc_8229DCFC;
loc_8229DD24:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822998b0
	ctx.lr = 0x8229DD38;
	sub_822998B0(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r28
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r28.u32, ctx.xer);
	// clrlwi r29,r11,19
	ctx.r29.u64 = ctx.r11.u32 & 0x1FFF;
	// beq cr6,0x8229ddb4
	if (ctx.cr6.eq) goto loc_8229DDB4;
loc_8229DD4C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8229dd64
	if (ctx.cr0.eq) goto loc_8229DD64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8229dd6c
	goto loc_8229DD6C;
loc_8229DD64:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_8229DD6C:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82299cc8
	ctx.lr = 0x8229DD98;
	sub_82299CC8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229c080
	ctx.lr = 0x8229DDA8;
	sub_8229C080(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8229dd4c
	if (!ctx.cr6.eq) goto loc_8229DD4C;
loc_8229DDB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299a38
	ctx.lr = 0x8229DDC0;
	sub_82299A38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229df08
	if (ctx.cr0.eq) goto loc_8229DF08;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r29,r9,19
	ctx.r29.u64 = ctx.r9.u32 & 0x1FFF;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8229ddf0
	if (ctx.cr0.eq) goto loc_8229DDF0;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8229ddf8
	goto loc_8229DDF8;
loc_8229DDF0:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_8229DDF8:
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x82299c48
	ctx.lr = 0x8229DE24;
	sub_82299C48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229c080
	ctx.lr = 0x8229DE34;
	sub_8229C080(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r17,r17,-1
	ctx.r17.s64 = ctx.r17.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229df20
	if (ctx.cr6.eq) goto loc_8229DF20;
loc_8229DE44:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229de60
	if (ctx.cr6.lt) goto loc_8229DE60;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229de64
	if (!ctx.cr6.gt) goto loc_8229DE64;
loc_8229DE60:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229DE64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229df00
	if (!ctx.cr0.eq) goto loc_8229DF00;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8229de88
	if (ctx.cr0.eq) goto loc_8229DE88;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x8229de90
	goto loc_8229DE90;
loc_8229DE88:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r10,-40
	ctx.r30.s64 = ctx.r10.s64 + -40;
loc_8229DE90:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r28,r10,-36
	ctx.r28.s64 = ctx.r10.s64 + -36;
	// addi r5,r29,1
	ctx.r5.s64 = ctx.r29.s64 + 1;
	// stw r8,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x8229c080
	ctx.lr = 0x8229DEF0;
	sub_8229C080(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229de44
	if (!ctx.cr6.eq) goto loc_8229DE44;
loc_8229DF00:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229df20
	if (ctx.cr6.eq) goto loc_8229DF20;
loc_8229DF08:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299b68
	ctx.lr = 0x8229DF10;
	sub_82299B68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229ddb4
	if (!ctx.cr0.eq) goto loc_8229DDB4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e08c
	if (!ctx.cr6.eq) goto loc_8229E08C;
loc_8229DF20:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_8229DF24:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229df64
	if (ctx.cr6.eq) goto loc_8229DF64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8229df54
	if (ctx.cr6.eq) goto loc_8229DF54;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8229df54
	if (!ctx.cr6.eq) goto loc_8229DF54;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8229df5c
	if (!ctx.cr0.eq) goto loc_8229DF5C;
loc_8229DF54:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8229df24
	goto loc_8229DF24;
loc_8229DF5C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// b 0x8229df68
	goto loc_8229DF68;
loc_8229DF64:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
loc_8229DF68:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229a5f8
	ctx.lr = 0x8229DF78;
	sub_8229A5F8(ctx, base);
	// li r5,8191
	ctx.r5.s64 = 8191;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229c080
	ctx.lr = 0x8229DF88;
	sub_8229C080(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229cd88
	ctx.lr = 0x8229DF98;
	sub_8229CD88(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82334408
	ctx.lr = 0x8229DFAC;
	sub_82334408(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229e000
	if (!ctx.cr0.eq) goto loc_8229E000;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8229e000
	if (ctx.cr0.eq) goto loc_8229E000;
loc_8229DFC4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8229dfe0
	if (!ctx.cr6.eq) goto loc_8229DFE0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82299db8
	ctx.lr = 0x8229DFE0;
	sub_82299DB8(ctx, base);
loc_8229DFE0:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8229e000
	if (ctx.cr6.eq) goto loc_8229E000;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229e000
	if (!ctx.cr0.eq) goto loc_8229E000;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229dfc4
	if (!ctx.cr6.eq) goto loc_8229DFC4;
loc_8229E000:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229e078
	if (ctx.cr6.eq) goto loc_8229E078;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82299db8
	ctx.lr = 0x8229E014;
	sub_82299DB8(ctx, base);
	// b 0x8229e078
	goto loc_8229E078;
loc_8229E018:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8229e034
	if (ctx.cr6.lt) goto loc_8229E034;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8229e038
	if (!ctx.cr6.gt) goto loc_8229E038;
loc_8229E034:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229E038:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e044
	if (ctx.cr0.eq) goto loc_8229E044;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8229E044:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 8191, ctx.xer);
	// beq cr6,0x8229e098
	if (ctx.cr6.eq) goto loc_8229E098;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229cd88
	ctx.lr = 0x8229E060;
	sub_8229CD88(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229e078
	if (ctx.cr6.eq) goto loc_8229E078;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_8229E06C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8229cd88
	ctx.lr = 0x8229E078;
	sub_8229CD88(ctx, base);
loc_8229E078:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229d7d0
	if (!ctx.cr6.eq) goto loc_8229D7D0;
	// lwz r31,216(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// b 0x8229e124
	goto loc_8229E124;
loc_8229E08C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229E098;
	sub_8225B1A0(ctx, base);
loc_8229E098:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229E0A4;
	sub_8225B1A0(ctx, base);
loc_8229E0A4:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// b 0x8229e0c0
	goto loc_8229E0C0;
loc_8229E0B0:
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8229e0c8
	if (ctx.cr6.eq) goto loc_8229E0C8;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8229E0C0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8229e0b0
	if (!ctx.cr6.eq) goto loc_8229E0B0;
loc_8229E0C8:
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82298d08
	ctx.lr = 0x8229E0D8;
	sub_82298D08(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// stw r9,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r9.u32);
	// bl 0x8229c080
	ctx.lr = 0x8229E114;
	sub_8229C080(ctx, base);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplwi cr6,r22,8191
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 8191, ctx.xer);
	// beq cr6,0x8229e148
	if (ctx.cr6.eq) goto loc_8229E148;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_8229E124:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229e0a4
	if (!ctx.cr6.eq) goto loc_8229E0A4;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8229e2e0
	if (ctx.cr6.eq) goto loc_8229E2E0;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e154
	if (ctx.cr0.eq) goto loc_8229E154;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// b 0x8229e160
	goto loc_8229E160;
loc_8229E148:
	// li r4,3641
	ctx.r4.s64 = 3641;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229E154;
	sub_8225B1A0(ctx, base);
loc_8229E154:
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r11,-40
	ctx.r6.s64 = ctx.r11.s64 + -40;
loc_8229E160:
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822998b0
	ctx.lr = 0x8229E170;
	sub_822998B0(ctx, base);
loc_8229E170:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299970
	ctx.lr = 0x8229E178;
	sub_82299970(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e2d0
	if (ctx.cr0.eq) goto loc_8229E2D0;
	// lwz r30,160(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e2d0
	if (ctx.cr0.eq) goto loc_8229E2D0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82299f90
	ctx.lr = 0x8229E198;
	sub_82299F90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8229e2d0
	if (!ctx.cr6.eq) goto loc_8229E2D0;
	// addi r11,r1,52
	ctx.r11.s64 = ctx.r1.s64 + 52;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229ce50
	ctx.lr = 0x8229E1C8;
	sub_8229CE50(ctx, base);
	// lwz r29,92(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229e2d0
	if (!ctx.cr0.eq) goto loc_8229E2D0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8229e2d0
	if (ctx.cr6.eq) goto loc_8229E2D0;
	// rlwinm r31,r29,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229e1f4
	if (!ctx.cr0.eq) goto loc_8229E1F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8229e2c4
	if (!ctx.cr6.eq) goto loc_8229E2C4;
loc_8229E1F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82299678
	ctx.lr = 0x8229E200;
	sub_82299678(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x822784a8
	ctx.lr = 0x8229E20C;
	sub_822784A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lwz r4,160(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82278730
	ctx.lr = 0x8229E21C;
	sub_82278730(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229e2c4
	if (ctx.cr0.eq) goto loc_8229E2C4;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,36(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// rlwinm r6,r9,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// stw r7,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r7.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8229a5f8
	ctx.lr = 0x8229E288;
	sub_8229A5F8(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8229c080
	ctx.lr = 0x8229E29C;
	sub_8229C080(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8229e2ac
	if (!ctx.cr6.eq) goto loc_8229E2AC;
	// stw r29,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
loc_8229E2AC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82334408
	ctx.lr = 0x8229E2C0;
	sub_82334408(ctx, base);
	// b 0x8229e2d0
	goto loc_8229E2D0;
loc_8229E2C4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229aac0
	ctx.lr = 0x8229E2D0;
	sub_8229AAC0(ctx, base);
loc_8229E2D0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82299b68
	ctx.lr = 0x8229E2D8;
	sub_82299B68(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229e170
	if (!ctx.cr0.eq) goto loc_8229E170;
loc_8229E2E0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82278cf8
	ctx.lr = 0x8229E2F4;
	sub_82278CF8(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D4AC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x822D4AC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r4,44
	ctx.r31.s64 = ctx.r4.s64 + 44;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r27,3
	ctx.r27.s64 = 3;
loc_822D4AF0:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822d4ba0
	if (!ctx.cr6.lt) goto loc_822D4BA0;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_822D4B20:
	// slw r7,r23,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r5.u8 & 0x3F));
	// and. r7,r7,r25
	ctx.r7.u64 = ctx.r7.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x822d4b54
	if (ctx.cr0.eq) goto loc_822D4B54;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// slw r4,r27,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r7,r7,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// andc r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r4.u64;
	// srw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_822D4B54:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// bdnz 0x822d4b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D4B20;
	// rlwinm r10,r8,20,9,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x700000;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r8,r8,0,27,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r8,0,7,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822d49e0
	ctx.lr = 0x822D4B94;
	sub_822D49E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x822d4af0
	goto loc_822D4AF0;
loc_822D4BA0:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_822D4BB4:
	// and. r11,r30,r25
	ctx.r11.u64 = ctx.r30.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4c64
	if (ctx.cr0.eq) goto loc_822D4C64;
	// slw r11,r27,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// slw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// clrlwi. r9,r24,24
	ctx.r9.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bne 0x822d4c58
	if (!ctx.cr0.eq) goto loc_822D4C58;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// li r10,15
	ctx.r10.s64 = 15;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// slw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// srw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822d4c0c
	if (ctx.cr6.eq) goto loc_822D4C0C;
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r11,14(r28)
	REX_STORE_U16(ctx.r28.u32 + 14, ctx.r11.u16);
loc_822D4C0C:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4c58
	if (ctx.cr6.eq) goto loc_822D4C58;
loc_822D4C18:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822d4c30
	if (ctx.cr6.eq) goto loc_822D4C30;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d4c18
	if (!ctx.cr6.eq) goto loc_822D4C18;
loc_822D4C30:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4c58
	if (ctx.cr6.eq) goto loc_822D4C58;
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r29,r5,r11
	ctx.r29.u64 = ctx.r5.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfd f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// stfd f0,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.f0.u64);
	// lfd f0,40(r29)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r29.u32 + 40);
	// stfd f0,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.f0.u64);
loc_822D4C58:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_822D4C64:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// blt cr6,0x822d4bb4
	if (ctx.cr6.lt) goto loc_822D4BB4;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_822D4C80:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d4ce8
	if (ctx.cr6.eq) goto loc_822D4CE8;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d4ce0
	if (ctx.cr6.eq) goto loc_822D4CE0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822d4ce0
	if (ctx.cr0.eq) goto loc_822D4CE0;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r4,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822D4CE0:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822d4c80
	goto loc_822D4C80;
loc_822D4CE8:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4d40
	if (ctx.cr0.eq) goto loc_822D4D40;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4d18
	if (ctx.cr0.eq) goto loc_822D4D18;
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// clrlwi. r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d4d18
	if (ctx.cr0.eq) goto loc_822D4D18;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228deb0
	ctx.lr = 0x822D4D18;
	sub_8228DEB0(ctx, base);
loc_822D4D18:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8228c9c0
	ctx.lr = 0x822D4D20;
	sub_8228C9C0(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwimi r11,r3,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// rlwinm r10,r11,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// slw r11,r23,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r9,r11,1,27,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r9,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
loc_822D4D40:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E49B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x822E49B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// bl 0x822ce408
	ctx.lr = 0x822E49C8;
	sub_822CE408(ctx, base);
loc_822E49C8:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_822E49CC:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822e4b04
	if (ctx.cr6.eq) goto loc_822E4B04;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4ae0
	if (ctx.cr0.eq) goto loc_822E4AE0;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_822E49FC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4a10
	if (ctx.cr6.eq) goto loc_822E4A10;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x822e49fc
	goto loc_822E49FC;
loc_822E4A10:
	// li r29,1
	ctx.r29.s64 = 1;
loc_822E4A14:
	// lwz r27,8(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_822E4A18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822e4ad8
	if (ctx.cr6.eq) goto loc_822E4AD8;
	// lwz r30,4(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4a38
	if (ctx.cr0.eq) goto loc_822E4A38;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822e4a44
	goto loc_822E4A44;
loc_822E4A38:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
loc_822E4A44:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11136
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11136, ctx.xer);
	// beq cr6,0x822e4a68
	if (ctx.cr6.eq) goto loc_822E4A68;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226da80
	ctx.lr = 0x822E4A60;
	sub_8226DA80(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bne cr6,0x822e4a74
	if (!ctx.cr6.eq) goto loc_822E4A74;
loc_822E4A68:
	// lwz r27,12(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x822e4a18
	goto loc_822E4A18;
loc_822E4A74:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822e4a9c
	if (ctx.cr6.eq) goto loc_822E4A9C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d94b8
	ctx.lr = 0x822E4A94;
	sub_822D94B8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x822e4a14
	goto loc_822E4A14;
loc_822E4A9C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_822E4AA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4abc
	if (ctx.cr6.eq) goto loc_822E4ABC;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822e4ac0
	if (!ctx.cr6.eq) goto loc_822E4AC0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e4aa0
	goto loc_822E4AA0;
loc_822E4ABC:
	// li r7,0
	ctx.r7.s64 = 0;
loc_822E4AC0:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d65a0
	ctx.lr = 0x822E4AD8;
	sub_822D65A0(ctx, base);
loc_822E4AD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822e4aec
	if (!ctx.cr6.eq) goto loc_822E4AEC;
loc_822E4AE0:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822e49cc
	goto loc_822E49CC;
loc_822E4AEC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d3150
	ctx.lr = 0x822E4AF4;
	sub_822D3150(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822e2890
	ctx.lr = 0x822E4B00;
	sub_822E2890(ctx, base);
	// b 0x822e49c8
	goto loc_822E49C8;
loc_822E4B04:
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 40);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4e1c
	if (ctx.cr0.eq) goto loc_822E4E1C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4e1c
	if (!ctx.cr0.eq) goto loc_822E4E1C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e4e1c
	if (ctx.cr0.eq) goto loc_822E4E1C;
loc_822E4B28:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4e00
	if (!ctx.cr0.eq) goto loc_822E4E00;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e4e00
	if (ctx.cr0.eq) goto loc_822E4E00;
loc_822E4B40:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c6930
	ctx.lr = 0x822E4B48;
	sub_822C6930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4de4
	if (ctx.cr0.eq) goto loc_822E4DE4;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x822e4b74
	if (!ctx.cr6.eq) goto loc_822E4B74;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822e4b78
	if (ctx.cr6.gt) goto loc_822E4B78;
loc_822E4B74:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E4B78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r26
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82337f70
	ctx.lr = 0x822E4BA8;
	sub_82337F70(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r28,r11,30
	ctx.r28.u64 = ctx.r11.u32 & 0x3;
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822e4c14
	if (!ctx.cr6.eq) goto loc_822E4C14;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x822e4c14
	if (!ctx.cr6.eq) goto loc_822E4C14;
	// lwz r31,44(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d580
	ctx.lr = 0x822E4BE0;
	sub_8226D580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4c14
	if (ctx.cr0.eq) goto loc_822E4C14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x822e4c14
	if (!ctx.cr6.eq) goto loc_822E4C14;
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r28,r11,30
	ctx.r28.u64 = ctx.r11.u32 & 0x3;
loc_822E4C14:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x822e4e40
	if (!ctx.cr6.eq) goto loc_822E4E40;
	// rlwinm. r11,r27,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4e40
	if (!ctx.cr0.eq) goto loc_822E4E40;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c6e20
	ctx.lr = 0x822E4C38;
	sub_822C6E20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4e40
	if (ctx.cr0.eq) goto loc_822E4E40;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822e4de4
	if (ctx.cr6.eq) goto loc_822E4DE4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15104
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15104, ctx.xer);
	// bne cr6,0x822e4db0
	if (!ctx.cr6.eq) goto loc_822E4DB0;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822e4d68
	if (ctx.cr6.eq) goto loc_822E4D68;
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,7040
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7040, ctx.xer);
	// bne cr6,0x822e4e38
	if (!ctx.cr6.eq) goto loc_822E4E38;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8232dbe8
	ctx.lr = 0x822E4C90;
	sub_8232DBE8(ctx, base);
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82281428
	ctx.lr = 0x822E4C9C;
	sub_82281428(ctx, base);
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// stw r25,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r25.u32);
	// rlwinm r10,r28,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,36
	ctx.r31.s64 = ctx.r11.s64 + 36;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// sth r11,14(r28)
	REX_STORE_U16(ctx.r28.u32 + 14, ctx.r11.u16);
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r31,-36
	ctx.r8.s64 = ctx.r31.s64 + -36;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8232dbe8
	ctx.lr = 0x822E4CF0;
	sub_8232DBE8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,44(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82281428
	ctx.lr = 0x822E4D00;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822E4D14;
	sub_82279AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822E4D20;
	sub_82281428(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// stw r25,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r25.u32);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r31,-36
	ctx.r8.s64 = ctx.r31.s64 + -36;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// sth r9,14(r30)
	REX_STORE_U16(ctx.r30.u32 + 14, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_822E4D68:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822e4d80
	goto loc_822E4D80;
loc_822E4D78:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822E4D80:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822e4d78
	if (!ctx.cr6.eq) goto loc_822E4D78;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r11,r9,3,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x822e4de0
	goto loc_822E4DE0;
loc_822E4DB0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822e4dc4
	goto loc_822E4DC4;
loc_822E4DBC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822E4DC4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822e4dbc
	if (!ctx.cr6.eq) goto loc_822E4DBC;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
loc_822E4DE0:
	// stw r30,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
loc_822E4DE4:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4e00
	if (!ctx.cr0.eq) goto loc_822E4E00;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4b40
	if (!ctx.cr6.eq) goto loc_822E4B40;
loc_822E4E00:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4e1c
	if (!ctx.cr0.eq) goto loc_822E4E1C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4b28
	if (!ctx.cr6.eq) goto loc_822E4B28;
loc_822E4E1C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822e4e30
	if (!ctx.cr6.eq) goto loc_822E4E30;
	// lwz r11,40(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 40);
	// addi r11,r11,-1024
	ctx.r11.s64 = ctx.r11.s64 + -1024;
	// stw r11,40(r24)
	REX_STORE_U32(ctx.r24.u32 + 40, ctx.r11.u32);
loc_822E4E30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_822E4E38:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822E4E40;
	sub_8225B1A0(ctx, base);
loc_822E4E40:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822E4E4C;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822F4C10) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4c2c
	if (ctx.cr6.eq) goto loc_822F4C2C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822f4c2c
	if (!ctx.cr6.eq) goto loc_822F4C2C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_822F4C2C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F4CF0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4d0c
	if (ctx.cr6.eq) goto loc_822F4D0C;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822f4d0c
	if (!ctx.cr6.eq) goto loc_822F4D0C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_822F4D0C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F4ED8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x822f4f3c
	if (ctx.cr6.eq) goto loc_822F4F3C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x822f4f00
	if (!ctx.cr6.eq) goto loc_822F4F00;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x822f4f34
	if (ctx.cr6.lt) goto loc_822F4F34;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x822f4f08
	if (ctx.cr6.eq) goto loc_822F4F08;
loc_822F4F00:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822F4F08:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f4f1c
	if (!ctx.cr6.eq) goto loc_822F4F1C;
loc_822F4F14:
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x822f4f48
	goto loc_822F4F48;
loc_822F4F1C:
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x822f4e30
	sub_822F4E30(ctx, base);
	return;
loc_822F4F34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822f4f14
	goto loc_822F4F14;
loc_822F4F3C:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_822F4F48:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F5438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822F5440;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5570
	if (ctx.cr6.eq) goto loc_822F5570;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f5570
	if (!ctx.cr6.eq) goto loc_822F5570;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_822F546C:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f5564
	if (ctx.cr6.eq) goto loc_822F5564;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x822f5564
	if (!ctx.cr6.eq) goto loc_822F5564;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822f5540
	if (!ctx.cr6.eq) goto loc_822F5540;
	// lwz r11,568(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 568);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f54bc
	if (ctx.cr6.eq) goto loc_822F54BC;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_822F54A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f5538
	if (ctx.cr6.eq) goto loc_822F5538;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f54a0
	if (!ctx.cr6.eq) goto loc_822F54A0;
loc_822F54BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822F54C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f5500
	if (ctx.cr6.eq) goto loc_822F5500;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x822f4d90
	ctx.lr = 0x822F54DC;
	sub_822F4D90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f5500
	if (ctx.cr0.eq) goto loc_822F5500;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x822f54f8
	if (ctx.cr6.eq) goto loc_822F54F8;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822f5500
	if (!ctx.cr6.gt) goto loc_822F5500;
loc_822F54F8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822F5500:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5518
	if (ctx.cr6.eq) goto loc_822F5518;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f554c
	if (!ctx.cr6.eq) goto loc_822F554C;
loc_822F5518:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f546c
	if (!ctx.cr6.eq) goto loc_822F546C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822f5558
	if (!ctx.cr6.eq) goto loc_822F5558;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F5538;
	sub_8225B1A0(ctx, base);
loc_822F5538:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x822f54c0
	goto loc_822F54C0;
loc_822F5540:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F554C;
	sub_8225B1A0(ctx, base);
loc_822F554C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F5558;
	sub_8225B1A0(ctx, base);
loc_822F5558:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_822F5564:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F5570;
	sub_8225B1A0(ctx, base);
loc_822F5570:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F557C;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822F6980) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822f69b0
	if (!ctx.cr6.eq) goto loc_822F69B0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x822f6a18
	if (ctx.cr6.eq) goto loc_822F6A18;
loc_822F69B0:
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F69B8;
	sub_8227A448(ctx, base);
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// ori r11,r31,228
	ctx.r11.u64 = ctx.r31.u64 | 228;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r7,r7,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// rlwinm r8,r11,29,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r10,r9,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r11,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// clrlwi r9,r8,30
	ctx.r9.u64 = ctx.r8.u32 & 0x3;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// srw r8,r7,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// srw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r8,r10,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,27,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r11,r8,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,6,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF3FFFFFF;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// or r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 | ctx.r5.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_822F6A18:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F7868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822F7870;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,9
	ctx.r6.s64 = 9;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F7894;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f78b8
	if (ctx.cr6.eq) goto loc_822F78B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F78B4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F78B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F78C0;
	sub_82281428(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F8428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822F8430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,81
	ctx.r6.s64 = 81;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F8454;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8478
	if (ctx.cr6.eq) goto loc_822F8478;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F8474;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F8478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F8480;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r9,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F9598) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F95A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F95C8;
	sub_8232D9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822F95D8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822F95E4;
	sub_82281428(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822F95F4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822F9600;
	sub_82281428(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FAED0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822faf08
	if (ctx.cr0.eq) goto loc_822FAF08;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x822f72c8
	ctx.lr = 0x822FAEF8;
	sub_822F72C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822FAF04;
	sub_82281260(ctx, base);
	// b 0x822faf10
	goto loc_822FAF10;
loc_822FAF08:
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822FAF10;
	sub_8227A448(ctx, base);
loc_822FAF10:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82280d20
	ctx.lr = 0x822FAF1C;
	sub_82280D20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FBD58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FBD60;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// std r4,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r4.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FBD88;
	sub_8232D9E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FBD98;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FBDA4;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x822fbdc8
	if (ctx.cr6.eq) goto loc_822FBDC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822FBDC4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822FBDC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FBDD0;
	sub_82281428(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FD1C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822FD1C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FD1F0;
	sub_8232D9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FD200;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822FD20C;
	sub_82281428(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FD21C;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822FD228;
	sub_82281428(ctx, base);
	// lwz r10,44(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// stw r3,48(r28)
	REX_STORE_U32(ctx.r28.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// rlwimi r9,r10,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// stw r9,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r9.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FFA28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FFA30;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x822a8f48
	ctx.lr = 0x822FFA48;
	sub_822A8F48(ctx, base);
	// rlwinm r4,r29,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822faa28
	ctx.lr = 0x822FFA54;
	sub_822FAA28(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a8f48
	ctx.lr = 0x822FFA60;
	sub_822A8F48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822faa28
	ctx.lr = 0x822FFA6C;
	sub_822FAA28(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fe230
	ctx.lr = 0x822FFA80;
	sub_822FE230(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82300508) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x82300550
	if (!ctx.cr0.eq) goto loc_82300550;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82300550
	if (ctx.cr0.eq) goto loc_82300550;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8230055c
	if (!ctx.cr6.gt) goto loc_8230055C;
loc_82300550:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822facd8
	ctx.lr = 0x82300558;
	sub_822FACD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8230055C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ld r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82301AB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x82301AC0;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r10,28(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mullw r16,r11,r9
	ctx.r16.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x82301b08
	if (ctx.cr6.eq) goto loc_82301B08;
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// beq cr6,0x82301b44
	if (ctx.cr6.eq) goto loc_82301B44;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x8225b1a0
	ctx.lr = 0x82301B08;
	sub_8225B1A0(ctx, base);
loc_82301B08:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// ble cr6,0x82301b44
	if (!ctx.cr6.gt) goto loc_82301B44;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82301b30
	if (ctx.cr6.eq) goto loc_82301B30;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-29944
	ctx.r5.s64 = ctx.r11.s64 + -29944;
	// b 0x82301b38
	goto loc_82301B38;
loc_82301B30:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-29952
	ctx.r5.s64 = ctx.r11.s64 + -29952;
loc_82301B38:
	// li r4,4532
	ctx.r4.s64 = 4532;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301B44;
	sub_8225B1A0(ctx, base);
loc_82301B44:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x82301b74
	if (!ctx.cr6.eq) goto loc_82301B74;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301b68
	if (ctx.cr6.eq) goto loc_82301B68;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82301b88
	if (ctx.cr6.eq) goto loc_82301B88;
loc_82301B68:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301B74;
	sub_8225B1A0(ctx, base);
loc_82301B74:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301e74
	if (ctx.cr6.eq) goto loc_82301E74;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82301e74
	if (!ctx.cr6.eq) goto loc_82301E74;
loc_82301B88:
	// lwz r28,8(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82301e68
	if (ctx.cr6.eq) goto loc_82301E68;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82301e68
	if (!ctx.cr6.eq) goto loc_82301E68;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// bne cr6,0x82301bc4
	if (!ctx.cr6.eq) goto loc_82301BC4;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82301bec
	if (!ctx.cr6.eq) goto loc_82301BEC;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x82301bec
	goto loc_82301BEC;
loc_82301BC4:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82301e5c
	if (ctx.cr6.eq) goto loc_82301E5C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82301e5c
	if (!ctx.cr6.eq) goto loc_82301E5C;
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// ble cr6,0x82301bec
	if (!ctx.cr6.gt) goto loc_82301BEC;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82301BEC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f6458
	ctx.lr = 0x82301BF4;
	sub_822F6458(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82301c08
	if (ctx.cr6.eq) goto loc_82301C08;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301C08;
	sub_8225B1A0(ctx, base);
loc_82301C08:
	// addi r21,r30,1
	ctx.r21.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x82301c20
	if (!ctx.cr6.eq) goto loc_82301C20;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82301c38
	goto loc_82301C38;
loc_82301C20:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x82301c38
	if (!ctx.cr6.eq) goto loc_82301C38;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// ble cr6,0x82301c38
	if (!ctx.cr6.gt) goto loc_82301C38;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_82301C38:
	// clrlwi. r20,r27,24
	ctx.r20.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x82301c44
	if (ctx.cr0.eq) goto loc_82301C44;
	// add r21,r21,r31
	ctx.r21.u64 = ctx.r21.u64 + ctx.r31.u64;
loc_82301C44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f6458
	ctx.lr = 0x82301C50;
	sub_822F6458(ctx, base);
	// cmplw cr6,r21,r3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82301c64
	if (ctx.cr6.eq) goto loc_82301C64;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301C64;
	sub_8225B1A0(ctx, base);
loc_82301C64:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822a8f48
	ctx.lr = 0x82301C70;
	sub_822A8F48(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822faa28
	ctx.lr = 0x82301C7C;
	sub_822FAA28(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226e208
	ctx.lr = 0x82301C84;
	sub_8226E208(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fb620
	ctx.lr = 0x82301CA0;
	sub_822FB620(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x82301cf4
	if (!ctx.cr6.eq) goto loc_82301CF4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fb620
	ctx.lr = 0x82301CD0;
	sub_822FB620(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fb620
	ctx.lr = 0x82301CEC;
	sub_822FB620(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82301d20
	goto loc_82301D20;
loc_82301CF4:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x82301d20
	if (!ctx.cr6.eq) goto loc_82301D20;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// ble cr6,0x82301d20
	if (!ctx.cr6.gt) goto loc_82301D20;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226e208
	ctx.lr = 0x82301D10;
	sub_8226E208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fb480
	ctx.lr = 0x82301D1C;
	sub_822FB480(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82301D20:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82301d78
	if (ctx.cr6.eq) goto loc_82301D78;
	// addi r11,r31,2
	ctx.r11.s64 = ctx.r31.s64 + 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82295980
	ctx.lr = 0x82301D40;
	sub_82295980(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// beq cr6,0x82301d78
	if (ctx.cr6.eq) goto loc_82301D78;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82301D58:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8226e208
	ctx.lr = 0x82301D60;
	sub_8226E208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fb480
	ctx.lr = 0x82301D6C;
	sub_822FB480(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// bne 0x82301d58
	if (!ctx.cr0.eq) goto loc_82301D58;
loc_82301D78:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r25,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fe3e0
	ctx.lr = 0x82301DA4;
	sub_822FE3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82301e00
	if (ctx.cr6.eq) goto loc_82301E00;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82301dd4
	if (ctx.cr6.eq) goto loc_82301DD4;
	// addi r30,r24,4
	ctx.r30.s64 = ctx.r24.s64 + 4;
loc_82301DBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82281428
	ctx.lr = 0x82301DC8;
	sub_82281428(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// bne 0x82301dbc
	if (!ctx.cr0.eq) goto loc_82301DBC;
loc_82301DD4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x82301DEC;
	sub_8226D728(ctx, base);
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stwx r24,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,40(r26)
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r11.u32);
loc_82301E00:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82301e18
	if (ctx.cr6.eq) goto loc_82301E18;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822fa898
	ctx.lr = 0x82301E18;
	sub_822FA898(ctx, base);
loc_82301E18:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82301e54
	if (ctx.cr6.eq) goto loc_82301E54;
loc_82301E24:
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r31,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// rlwinm r11,r11,0,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFFC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x822ffdb0
	ctx.lr = 0x82301E48;
	sub_822FFDB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82301e24
	if (ctx.cr6.lt) goto loc_82301E24;
loc_82301E54:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
loc_82301E5C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301E68;
	sub_8225B1A0(ctx, base);
loc_82301E68:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301E74;
	sub_8225B1A0(ctx, base);
loc_82301E74:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82301E80;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_823167D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x823167D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x823131f0
	ctx.lr = 0x823167FC;
	sub_823131F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823168d8
	if (ctx.cr0.eq) goto loc_823168D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82266830
	ctx.lr = 0x82316810;
	sub_82266830(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82266830
	ctx.lr = 0x82316820;
	sub_82266830(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8233dd28
	ctx.lr = 0x82316838;
	sub_8233DD28(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823168d8
	if (ctx.cr0.eq) goto loc_823168D8;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8233dde8
	ctx.lr = 0x82316848;
	sub_8233DDE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82265a60
	ctx.lr = 0x82316850;
	sub_82265A60(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,14104
	ctx.r26.s64 = ctx.r10.s64 + 14104;
	// bne 0x82316884
	if (!ctx.cr0.eq) goto loc_82316884;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,14848
	ctx.r5.s64 = ctx.r11.s64 + 14848;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,685
	ctx.r7.s64 = 685;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316884;
	sub_82260F30(ctx, base);
loc_82316884:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265d68
	ctx.lr = 0x8231688C;
	sub_82265D68(ctx, base);
	// b 0x823168d0
	goto loc_823168D0;
loc_82316890:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266118
	ctx.lr = 0x82316898;
	sub_82266118(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82267088
	ctx.lr = 0x823168A8;
	sub_82267088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823168c4
	if (ctx.cr0.eq) goto loc_823168C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82267088
	ctx.lr = 0x823168BC;
	sub_82267088(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823168e4
	if (!ctx.cr0.eq) goto loc_823168E4;
loc_823168C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266068
	ctx.lr = 0x823168D0;
	sub_82266068(ctx, base);
loc_823168D0:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82316890
	if (!ctx.cr0.eq) goto loc_82316890;
loc_823168D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823168DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_823168E4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82316540
	ctx.lr = 0x823168F0;
	sub_82316540(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82316910
	if (!ctx.cr0.eq) goto loc_82316910;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,14784
	ctx.r5.s64 = ctx.r11.s64 + 14784;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,699
	ctx.r7.s64 = 699;
	// bl 0x82260f30
	ctx.lr = 0x82316910;
	sub_82260F30(ctx, base);
loc_82316910:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82266710
	ctx.lr = 0x82316918;
	sub_82266710(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82266710
	ctx.lr = 0x82316920;
	sub_82266710(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x823296d8
	ctx.lr = 0x82316930;
	sub_823296D8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823297e0
	ctx.lr = 0x82316940;
	sub_823297E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265fb8
	ctx.lr = 0x8231694C;
	sub_82265FB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82265ab8
	ctx.lr = 0x82316958;
	sub_82265AB8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823168dc
	goto loc_823168DC;
}

DEFINE_REX_FUNC(sub_82318390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82318398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823183C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// beq cr6,0x823183e8
	if (ctx.cr6.eq) goto loc_823183E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
loc_823183E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823183fc
	if (!ctx.cr6.eq) goto loc_823183FC;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82318404
	goto loc_82318404;
loc_823183FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r3.u32);
loc_82318404:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231BE70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82318258
	ctx.lr = 0x8231BE90;
	sub_82318258(ctx, base);
	// li r7,81
	ctx.r7.s64 = 81;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r7,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r7.u16);
	// li r8,17
	ctx.r8.s64 = 17;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r6,r9,0,16,2
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF) | (ctx.r6.u64 & 0x1FFF0000);
	// stw r6,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r10,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r10.u16);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r6,r8,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r6.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r5,r6,0,16,9
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r5.u64 & 0x3F0000);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r5,r6,0,9,7
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r5.u64 & 0x800000);
	// oris r6,r5,64
	ctx.r6.u64 = ctx.r5.u64 | 4194304;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,29,27
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r5.u64 & 0x8);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,4,24,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x80) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,8,20,20
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x800) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,12,16,16
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,12,10
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r5.u64 & 0x100000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r6,r6,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8231bf74
	if (ctx.cr0.eq) goto loc_8231BF74;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BF74:
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r12,-26215
	ctx.r12.s64 = -26215;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r4,r5,0,16,2
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF) | (ctx.r4.u64 & 0x1FFF0000);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r8,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r5,r6,0,16,9
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r5.u64 & 0x3F0000);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r5,r6,0,9,7
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r5.u64 & 0x800000);
	// oris r6,r5,64
	ctx.r6.u64 = ctx.r5.u64 | 4194304;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// ori r6,r6,4369
	ctx.r6.u64 = ctx.r6.u64 | 4369;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,28,28,28
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0x8) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF7);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,25,23
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r5.u64 & 0x80);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,4,20,20
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x800) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,8,16,16
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,12,10
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r5.u64 & 0x100000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r6,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8231c054
	if (ctx.cr0.eq) goto loc_8231C054;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C054:
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r4,r5,0,16,2
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFE000FFFF) | (ctx.r4.u64 & 0x1FFF0000);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r8,18,8,15
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r5.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r5,r6,0,16,9
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r5.u64 & 0x3F0000);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r5,r6,0,9,7
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r5.u64 & 0x800000);
	// oris r6,r5,64
	ctx.r6.u64 = ctx.r5.u64 | 4194304;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// ori r6,r6,8738
	ctx.r6.u64 = ctx.r6.u64 | 8738;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,24,28,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x8) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,28,24,24
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x80) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,21,19
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r5.u64 & 0x800);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r6,r5,4,16,16
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0x8000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r5,32(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r5,r6,0,12,10
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r5.u64 & 0x100000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r6,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8231c130
	if (ctx.cr0.eq) goto loc_8231C130;
	// lwz r6,44(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C130:
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r7,64
	ctx.r7.s64 = 64;
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r5,r6,0,16,2
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF) | (ctx.r5.u64 & 0x1FFF0000);
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r8,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// ori r8,r8,13107
	ctx.r8.u64 = ctx.r8.u64 | 13107;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r8,r7,20,28,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r8,r7,24,24,24
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0x80) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r8,r7,28,20,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x800) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r7,r8,0,17,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r7.u64 & 0x8000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r7,r8,0,12,10
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r7.u64 & 0x100000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8231c20c
	if (ctx.cr0.eq) goto loc_8231C20C;
	// lwz r8,44(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C20C:
	// li r8,73
	ctx.r8.s64 = 73;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r7,r7,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231c258
	if (ctx.cr0.eq) goto loc_8231C258;
	// lwz r7,28(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C258:
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8231c270
	if (ctx.cr0.eq) goto loc_8231C270;
	// lwz r7,40(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C270:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r7,99
	ctx.r7.s64 = 99;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r9,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,16,2
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm. r7,r7,0,9,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8231c320
	if (ctx.cr0.eq) goto loc_8231C320;
	// lwz r7,32(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C320:
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r7,r7,0,8,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8231c338
	if (ctx.cr0.eq) goto loc_8231C338;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C338:
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r8,r8,0,9,9
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8231c380
	if (ctx.cr0.eq) goto loc_8231C380;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C380:
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8231c398
	if (ctx.cr0.eq) goto loc_8231C398;
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231C398:
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232A6D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,11
	ctx.r11.s64 = ctx.r4.s64 + 11;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f1.f64 = double(temp.f32);
	// b 0x8232a460
	sub_8232A460(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232AD80) {
	REX_FUNC_PROLOGUE();
	// li r8,4
	ctx.r8.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8232AD94:
	// srw r8,r3,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x8232ad94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AD94;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232BA00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8232BA08;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x8232ba70
	if (!ctx.cr6.eq) goto loc_8232BA70;
	// bl 0x822c6038
	ctx.lr = 0x8232BA34;
	sub_822C6038(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82164960
	ctx.lr = 0x8232BA3C;
	sub_82164960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232ba50
	if (ctx.cr0.eq) goto loc_8232BA50;
	// stfd f31,0(r29)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f31.u64);
	// stfd f31,0(r28)
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f31.u64);
	// b 0x8232bb60
	goto loc_8232BB60;
loc_8232BA50:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfd f13,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f13.u64);
	// b 0x8232bb5c
	goto loc_8232BB5C;
loc_8232BA70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232bac0
	if (ctx.cr6.eq) goto loc_8232BAC0;
loc_8232BA7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x8232ba94
	if (ctx.cr6.eq) goto loc_8232BA94;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232ba7c
	if (!ctx.cr6.eq) goto loc_8232BA7C;
loc_8232BA94:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232bac0
	if (ctx.cr6.eq) goto loc_8232BAC0;
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// addi r9,r30,5
	ctx.r9.s64 = ctx.r30.s64 + 5;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// stfd f0,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfdx f0,r9,r11
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// stfd f0,0(r28)
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
	// b 0x8232bb60
	goto loc_8232BB60;
loc_8232BAC0:
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x8232bb1c
	if (!ctx.cr6.eq) goto loc_8232BB1C;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r10,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// rlwinm r5,r10,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// rlwinm r4,r10,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8226d728
	ctx.lr = 0x8232BAE8;
	sub_8226D728(ctx, base);
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,0,1,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x60000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8232bb1c
	if (!ctx.cr6.eq) goto loc_8232BB1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// lfd f13,-9888(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + -9888);
	// stfd f0,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// stfd f13,0(r28)
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f13.u64);
	// b 0x8232bb60
	goto loc_8232BB60;
loc_8232BB1C:
	// lhz r11,14(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 14);
	// rlwinm r10,r30,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8232a768
	ctx.lr = 0x8232BB38;
	sub_8232A768(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232bb60
	if (!ctx.cr0.eq) goto loc_8232BB60;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfd f0,0(r29)
	REX_STORE_U64(ctx.r29.u32 + 0, ctx.f0.u64);
	// lfs f0,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
loc_8232BB5C:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
loc_8232BB60:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232F3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8232F3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,62
	ctx.r6.s64 = 62;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x8232F3EC;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f410
	if (ctx.cr6.eq) goto loc_8232F410;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x8232F40C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8232F410:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x8232F418;
	sub_82281428(ctx, base);
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82330208) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82330264
	if (ctx.cr6.eq) goto loc_82330264;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_82330234:
	// rlwinm r7,r11,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwzu r6,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// stfsu f0,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// lwzx r5,r7,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 | ctx.r5.u64;
	// stwx r6,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// bdnz 0x82330234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82330234;
loc_82330264:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82330080
	ctx.lr = 0x82330270;
	sub_82330080(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82333498) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x823334A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r22,r5,40
	ctx.r22.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// add r30,r22,r11
	ctx.r30.u64 = ctx.r22.u64 + ctx.r11.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823334f0
	if (ctx.cr6.eq) goto loc_823334F0;
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823336f0
	if (!ctx.cr6.eq) goto loc_823336F0;
loc_823334F0:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,108
	ctx.r8.s64 = ctx.r1.s64 + 108;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232a138
	ctx.lr = 0x82333514;
	sub_8232A138(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r23,r29,3,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,60(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// lwzx r11,r23,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfze r26,r9
	temp.u8 = ~ctx.r9.u32 + ctx.xer.ca < ~ctx.r9.u32;
	ctx.r26.u64 = ~ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r25,r10,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bl 0x822969a8
	ctx.lr = 0x82333558;
	sub_822969A8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82329e50
	ctx.lr = 0x82333564;
	sub_82329E50(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82300498
	ctx.lr = 0x8233356C;
	sub_82300498(ctx, base);
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823335a4
	if (!ctx.cr6.eq) goto loc_823335A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822f5a40
	ctx.lr = 0x82333584;
	sub_822F5A40(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4b78
	ctx.lr = 0x82333590;
	sub_822F4B78(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3502
	ctx.r4.s64 = 3502;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x823335A4;
	sub_8225B1A0(ctx, base);
loc_823335A4:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwzx r6,r23,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm. r11,r6,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823335cc
	if (!ctx.cr0.eq) goto loc_823335CC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x822f5018
	ctx.lr = 0x823335BC;
	sub_822F5018(ctx, base);
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4502
	ctx.r4.s64 = 4502;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x823335CC;
	sub_8225B1A0(ctx, base);
loc_823335CC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r6,r6,5,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xF;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// beq cr6,0x823336fc
	if (ctx.cr6.eq) goto loc_823336FC;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// addi r7,r9,-13064
	ctx.r7.s64 = ctx.r9.s64 + -13064;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// li r8,21
	ctx.r8.s64 = 21;
	// bl 0x8232cd20
	ctx.lr = 0x82333618;
	sub_8232CD20(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// bl 0x8232e018
	ctx.lr = 0x82333630;
	sub_8232E018(ctx, base);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// beq 0x82333670
	if (ctx.cr0.eq) goto loc_82333670;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// beq 0x8233365c
	if (ctx.cr0.eq) goto loc_8233365C;
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x82333670
	if (ctx.cr6.eq) goto loc_82333670;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x8233366c
	goto loc_8233366C;
loc_8233365C:
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x82333670
	if (ctx.cr6.eq) goto loc_82333670;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
loc_8233366C:
	// sth r11,14(r28)
	REX_STORE_U16(ctx.r28.u32 + 14, ctx.r11.u16);
loc_82333670:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x823336a4
	if (!ctx.cr6.eq) goto loc_823336A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r4,r11,0,15,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF8;
	// bl 0x82295980
	ctx.lr = 0x82333698;
	sub_82295980(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// stw r3,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r3.u32);
loc_823336A4:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8232a278
	ctx.lr = 0x823336C0;
	sub_8232A278(ctx, base);
	// addi r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 + 972;
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// add r9,r11,r23
	ctx.r9.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r27,1004(r31)
	REX_STORE_U32(ctx.r31.u32 + 1004, ctx.r27.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r9,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
loc_823336F0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_823336FC:
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x8232cea0
	ctx.lr = 0x82333714;
	sub_8232CEA0(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,20,14,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x20000) | (ctx.r11.u64 & 0xFFFFFFFFFFFDFFFF);
	// lwz r6,96(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// ld r25,120(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r5,r26,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x82333030
	ctx.lr = 0x8233374C;
	sub_82333030(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82333670
	if (!ctx.cr0.eq) goto loc_82333670;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// rldicr r5,r26,32,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232a338
	ctx.lr = 0x82333770;
	sub_8232A338(ctx, base);
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8233377C;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_823396D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x823396D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82339714
	if (!ctx.cr6.eq) goto loc_82339714;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,27648
	ctx.r6.s64 = ctx.r11.s64 + 27648;
	// addi r5,r10,-13816
	ctx.r5.s64 = ctx.r10.s64 + -13816;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1208
	ctx.r7.s64 = 1208;
	// bl 0x82260f30
	ctx.lr = 0x82339714;
	sub_82260F30(ctx, base);
loc_82339714:
	// li r4,935
	ctx.r4.s64 = 935;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x82339720;
	sub_82266830(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82339784
	if (ctx.cr0.eq) goto loc_82339784;
	// beq cr6,0x82339744
	if (ctx.cr6.eq) goto loc_82339744;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339744;
	sub_82266EC0(ctx, base);
loc_82339744:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233977c
	if (ctx.cr6.eq) goto loc_8233977C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233977c
	if (ctx.cr6.eq) goto loc_8233977C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27632
	ctx.r4.s64 = ctx.r10.s64 + 27632;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x8233977C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233977C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823397d8
	goto loc_823397D8;
loc_82339784:
	// beq cr6,0x8233979c
	if (ctx.cr6.eq) goto loc_8233979C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233979C;
	sub_82266EC0(ctx, base);
loc_8233979C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823397d4
	if (ctx.cr6.eq) goto loc_823397D4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823397d4
	if (ctx.cr6.eq) goto loc_823397D4;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27632
	ctx.r4.s64 = ctx.r10.s64 + 27632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,17
	ctx.r6.s64 = 17;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bctrl 
	ctx.lr = 0x823397D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823397D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823397D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233AE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233AE10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ae50
	if (!ctx.cr6.eq) goto loc_8233AE50;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,27648
	ctx.r6.s64 = ctx.r11.s64 + 27648;
	// addi r5,r10,-13816
	ctx.r5.s64 = ctx.r10.s64 + -13816;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2316
	ctx.r7.s64 = 2316;
	// bl 0x82260f30
	ctx.lr = 0x8233AE50;
	sub_82260F30(ctx, base);
loc_8233AE50:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233AE60;
	sub_82266B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8233aec8
	if (!ctx.cr0.eq) goto loc_8233AEC8;
	// beq cr6,0x8233ae84
	if (ctx.cr6.eq) goto loc_8233AE84;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233AE84;
	sub_82266EC0(ctx, base);
loc_8233AE84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233aec0
	if (ctx.cr6.eq) goto loc_8233AEC0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233aec0
	if (ctx.cr6.eq) goto loc_8233AEC0;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// bctrl 
	ctx.lr = 0x8233AEC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233AEC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233af20
	goto loc_8233AF20;
loc_8233AEC8:
	// beq cr6,0x8233aee0
	if (ctx.cr6.eq) goto loc_8233AEE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233AEE0;
	sub_82266EC0(ctx, base);
loc_8233AEE0:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233af1c
	if (ctx.cr6.eq) goto loc_8233AF1C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233af1c
	if (ctx.cr6.eq) goto loc_8233AF1C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,57
	ctx.r6.s64 = 57;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,228(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// bctrl 
	ctx.lr = 0x8233AF1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233AF1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233AF20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233CC88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,17844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233CCE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233CE10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233CE18;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233ce58
	if (!ctx.cr6.eq) goto loc_8233CE58;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,27648
	ctx.r6.s64 = ctx.r11.s64 + 27648;
	// addi r5,r10,-13816
	ctx.r5.s64 = ctx.r10.s64 + -13816;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,4133
	ctx.r7.s64 = 4133;
	// bl 0x82260f30
	ctx.lr = 0x8233CE58;
	sub_82260F30(ctx, base);
loc_8233CE58:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233CE68;
	sub_82266B60(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// beq cr6,0x8233cec0
	if (ctx.cr6.eq) goto loc_8233CEC0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233cec0
	if (ctx.cr6.eq) goto loc_8233CEC0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82338ea0
	ctx.lr = 0x8233CE98;
	sub_82338EA0(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27976
	ctx.r4.s64 = ctx.r10.s64 + 27976;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,54
	ctx.r6.s64 = 54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,216(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 216);
	// bctrl 
	ctx.lr = 0x8233CEC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CEC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233EE38) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233EE50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82325520
	ctx.lr = 0x8233EE88;
	sub_82325520(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233F698) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x8233F6A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r23,r11,-14148
	ctx.r23.s64 = ctx.r11.s64 + -14148;
	// addi r22,r10,31816
	ctx.r22.s64 = ctx.r10.s64 + 31816;
	// beq cr6,0x8233f764
	if (ctx.cr6.eq) goto loc_8233F764;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// bl 0x8234dfb8
	ctx.lr = 0x8233F6D4;
	sub_8234DFB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233f70c
	if (!ctx.cr0.eq) goto loc_8233F70C;
	// lwz r5,56(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r4,80(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8234e010
	ctx.lr = 0x8233F6EC;
	sub_8234E010(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233f724
	goto loc_8233F724;
loc_8233F70C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,128(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F724:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233f748
	if (!ctx.cr6.eq) goto loc_8233F748;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,32216
	ctx.r5.s64 = ctx.r11.s64 + 32216;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,649
	ctx.r7.s64 = 649;
	// bl 0x82260f30
	ctx.lr = 0x8233F748;
	sub_82260F30(ctx, base);
loc_8233F748:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235d4d0
	ctx.lr = 0x8233F754;
	sub_8235D4D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f338
	ctx.lr = 0x8233F764;
	sub_8235F338(ctx, base);
loc_8233F764:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8233fa24
	if (ctx.cr6.lt) goto loc_8233FA24;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r28,r29,84
	ctx.r28.s64 = ctx.r29.s64 + 84;
	// addi r27,r11,31776
	ctx.r27.s64 = ctx.r11.s64 + 31776;
	// addi r24,r10,-5640
	ctx.r24.s64 = ctx.r10.s64 + -5640;
	// addi r25,r9,32200
	ctx.r25.s64 = ctx.r9.s64 + 32200;
loc_8233F790:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// beq cr6,0x8233f7a4
	if (ctx.cr6.eq) goto loc_8233F7A4;
	// cmpwi cr6,r10,27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 27, ctx.xer);
	// bne cr6,0x8233f7bc
	if (!ctx.cr6.eq) goto loc_8233F7BC;
loc_8233F7A4:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1508(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r9)
	REX_STORE_U32(ctx.r9.u32 + 1508, ctx.r11.u32);
	// stw r11,-24(r28)
	REX_STORE_U32(ctx.r28.u32 + -24, ctx.r11.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_8233F7BC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234dfb8
	ctx.lr = 0x8233F7CC;
	sub_8234DFB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233f804
	if (!ctx.cr0.eq) goto loc_8233F804;
	// lwz r5,-24(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + -24);
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8234e010
	ctx.lr = 0x8233F7E4;
	sub_8234E010(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + -16);
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F800;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233f81c
	goto loc_8233F81C;
loc_8233F804:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,-16(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + -16);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F81C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233F81C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235d520
	ctx.lr = 0x8233F82C;
	sub_8235D520(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f338
	ctx.lr = 0x8233F83C;
	sub_8235F338(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x8233f8c0
	if (!ctx.cr6.eq) goto loc_8233F8C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f520
	ctx.lr = 0x8233F850;
	sub_8233F520(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x8233F860;
	sub_8235EED0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stb r11,2073(r31)
	REX_STORE_U8(ctx.r31.u32 + 2073, ctx.r11.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x8233F878;
	sub_8235F338(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f338
	ctx.lr = 0x8233F888;
	sub_8235F338(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r20)
	REX_STORE_U32(ctx.r20.u32 + 132, ctx.r11.u32);
	// bl 0x8233f698
	ctx.lr = 0x8233F89C;
	sub_8233F698(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82361f18
	ctx.lr = 0x8233F8A8;
	sub_82361F18(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8235ef60
	ctx.lr = 0x8233F8B0;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233f980
	if (!ctx.cr0.eq) goto loc_8233F980;
	// li r7,704
	ctx.r7.s64 = 704;
	// b 0x8233f96c
	goto loc_8233F96C;
loc_8233F8C0:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bne cr6,0x8233f980
	if (!ctx.cr6.eq) goto loc_8233F980;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f520
	ctx.lr = 0x8233F8D0;
	sub_8233F520(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x8233F8E0;
	sub_8235EED0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x8233F8F0;
	sub_8235F338(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f338
	ctx.lr = 0x8233F900;
	sub_8235F338(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233F940;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x8233F94C;
	sub_8233F698(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x82361f18
	ctx.lr = 0x8233F958;
	sub_82361F18(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8235ef60
	ctx.lr = 0x8233F960;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233f980
	if (!ctx.cr0.eq) goto loc_8233F980;
	// li r7,718
	ctx.r7.s64 = 718;
loc_8233F96C:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233F980;
	sub_82260F30(ctx, base);
loc_8233F980:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8233fa10
	if (!ctx.cr0.eq) goto loc_8233FA10;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233fa10
	if (ctx.cr0.eq) goto loc_8233FA10;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x8233fa10
	if (ctx.cr6.eq) goto loc_8233FA10;
	// lbz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8233f9bc
	if (!ctx.cr6.eq) goto loc_8233F9BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8233f9c0
	goto loc_8233F9C0;
loc_8233F9BC:
	// lbz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 48);
loc_8233F9C0:
	// stb r11,48(r28)
	REX_STORE_U8(ctx.r28.u32 + 48, ctx.r11.u8);
	// lbz r11,129(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8233f9d4
	if (ctx.cr6.eq) goto loc_8233F9D4;
	// lbz r11,49(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 49);
loc_8233F9D4:
	// stb r11,49(r28)
	REX_STORE_U8(ctx.r28.u32 + 49, ctx.r11.u8);
	// lbz r11,130(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8233f9ec
	if (!ctx.cr6.eq) goto loc_8233F9EC;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8233f9f0
	goto loc_8233F9F0;
loc_8233F9EC:
	// lbz r11,50(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 50);
loc_8233F9F0:
	// stb r11,50(r28)
	REX_STORE_U8(ctx.r28.u32 + 50, ctx.r11.u8);
	// lbz r11,131(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 131);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8233fa08
	if (!ctx.cr6.eq) goto loc_8233FA08;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8233fa0c
	goto loc_8233FA0C;
loc_8233FA08:
	// lbz r11,51(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 51);
loc_8233FA0C:
	// stb r11,51(r28)
	REX_STORE_U8(ctx.r28.u32 + 51, ctx.r11.u8);
loc_8233FA10:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233f790
	if (!ctx.cr6.gt) goto loc_8233F790;
loc_8233FA24:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234B3A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8234B3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,112(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x823628b8
	ctx.lr = 0x8234B3C4;
	sub_823628B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,116(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x823628b8
	ctx.lr = 0x8234B3D0;
	sub_823628B8(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82260e98
	ctx.lr = 0x8234B3EC;
	sub_82260E98(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82260e98
	ctx.lr = 0x8234B404;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82260e98
	ctx.lr = 0x8234B418;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82260e98
	ctx.lr = 0x8234B42C;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82260e98
	ctx.lr = 0x8234B440;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82260e98
	ctx.lr = 0x8234B454;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// bl 0x82260e98
	ctx.lr = 0x8234B468;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// bl 0x82260e98
	ctx.lr = 0x8234B47C;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// bl 0x82260e98
	ctx.lr = 0x8234B490;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// bl 0x82260e98
	ctx.lr = 0x8234B4A4;
	sub_82260E98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,52(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// bl 0x82260e98
	ctx.lr = 0x8234B4C0;
	sub_82260E98(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234D4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8234D4F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234d534
	if (!ctx.cr6.eq) goto loc_8234D534;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x8234d538
	goto loc_8234D538;
loc_8234D534:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8234D538:
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r6,1384(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 1384);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// addi r7,r11,24568
	ctx.r7.s64 = ctx.r11.s64 + 24568;
	// lwz r3,1536(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 1536);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8233b928
	ctx.lr = 0x8234D558;
	sub_8233B928(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r6,168(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// bl 0x8234c218
	ctx.lr = 0x8234D56C;
	sub_8234C218(ctx, base);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,172(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325650
	ctx.lr = 0x8234D580;
	sub_82325650(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,-16320
	ctx.r9.s64 = ctx.r11.s64 + -16320;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r7,r7,0,13,4
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF807FFFF;
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r6,r5,8,18,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFC0FF);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,100(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// lwz r10,124(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwimi r8,r11,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r8,r8,19,0,12
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 19) & 0xFFF80000;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r5,132(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// stb r10,11(r31)
	REX_STORE_U8(ctx.r31.u32 + 11, ctx.r10.u8);
	// andi. r10,r6,16191
	ctx.r10.u64 = ctx.r6.u64 & 16191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r11,r10,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r7,0,20,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFC00FFF;
	// rlwimi r4,r11,1,0,30
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rlwinm r10,r10,0,8,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0FFFFFF;
	// rlwimi r3,r4,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r7,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 2;
	// rlwimi r28,r3,1,0,30
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r28.u64 & 0xFFFFFFFF00000001);
	// rlwinm r11,r28,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addze r10,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r10.s64 = temp.s64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// rlwinm r26,r5,8,24,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// rlwimi r26,r5,24,16,23
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00) | (ctx.r26.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r26,r5,8,8,15
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF0000) | (ctx.r26.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r26,r5,24,0,7
	ctx.r26.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF000000) | (ctx.r26.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r8,r26,30,0,1
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xC0000000) | (ctx.r8.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwimi r6,r11,8,1,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7FFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF800000FF);
	// stw r6,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwimi r11,r8,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2736);
	// lwz r4,236(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 236);
	// bl 0x8236d3b8
	ctx.lr = 0x8234D668;
	sub_8236D3B8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r3,5,21,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0x7E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF81F);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r9,r9,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// lwz r28,180(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 180);
	// addi r26,r10,-31904
	ctx.r26.s64 = ctx.r10.s64 + -31904;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8234d718
	if (ctx.cr6.eq) goto loc_8234D718;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234d6e8
	if (ctx.cr0.eq) goto loc_8234D6E8;
	// lwz r11,80(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r10,228(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
	// beq 0x8234d6d0
	if (ctx.cr0.eq) goto loc_8234D6D0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-30128
	ctx.r5.s64 = ctx.r11.s64 + -30128;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2944
	ctx.r7.s64 = 2944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D6D0;
	sub_82260F30(ctx, base);
loc_8234D6D0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2736);
	// bl 0x8236d3b8
	ctx.lr = 0x8234D6DC;
	sub_8236D3B8(ctx, base);
	// stw r3,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 128);
	// b 0x8234d6f0
	goto loc_8234D6F0;
loc_8234D6E8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r11,-32328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32328);
loc_8234D6F0:
	// stw r11,128(r30)
	REX_STORE_U32(ctx.r30.u32 + 128, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,184(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,27,2,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x38000000) | (ctx.r10.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x8234d730
	goto loc_8234D730;
loc_8234D718:
	// lbz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234d730
	if (ctx.cr0.eq) goto loc_8234D730;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8234D730:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2736);
	// bl 0x8236d3b8
	ctx.lr = 0x8234D73C;
	sub_8236D3B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r3,12,14,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x3F000) | (ctx.r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lbz r3,128(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 128);
	// bl 0x823478e0
	ctx.lr = 0x8234D750;
	sub_823478E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r11,0,0,28
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r3.u64 & 0xFFFFFFFF00000007);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lbz r3,129(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 129);
	// bl 0x823478e0
	ctx.lr = 0x8234D764;
	sub_823478E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r3,130(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 130);
	// bl 0x823478e0
	ctx.lr = 0x8234D778;
	sub_823478E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,6,23,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 6) & 0x1C0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lbz r3,131(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 131);
	// bl 0x823478e0
	ctx.lr = 0x8234D78C;
	sub_823478E0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xE00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8234d7ec
	if (ctx.cr6.eq) goto loc_8234D7EC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8234d7e4
	if (ctx.cr6.eq) goto loc_8234D7E4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8234d7d4
	if (ctx.cr6.eq) goto loc_8234D7D4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,4180
	ctx.r5.s64 = ctx.r11.s64 + 4180;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2983
	ctx.r7.s64 = 2983;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D7D0;
	sub_82260F30(ctx, base);
	// b 0x8234d800
	goto loc_8234D800;
loc_8234D7D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x8234d7f8
	goto loc_8234D7F8;
loc_8234D7E4:
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// b 0x8234d7f0
	goto loc_8234D7F0;
loc_8234D7EC:
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
loc_8234D7F0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_8234D7F8:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
loc_8234D800:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82358A00) {
	REX_FUNC_PROLOGUE();
	// stw r3,20(r1)
	REX_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// lbz r8,20(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 20);
	// lbz r7,21(r1)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r1.u32 + 21);
	// addi r10,r10,-11960
	ctx.r10.s64 = ctx.r10.s64 + -11960;
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lbz r6,30(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 30);
	// lbz r11,28(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 28);
	// lbz r9,29(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 29);
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// lbz r11,31(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 31);
	// rlwimi r7,r8,1,30,30
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x2) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFD);
	// lbz r5,23(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 23);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// lbz r8,22(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 22);
	// rlwimi r6,r9,1,0,30
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r6.u64 & 0xFFFFFFFF00000001);
	// rlwimi r8,r7,1,0,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r8.u64 & 0xFFFFFFFF00000001);
	// rlwimi r11,r6,1,0,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFF00000001);
	// rlwimi r5,r8,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r11,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r8,r11,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// stb r10,-16(r1)
	REX_STORE_U8(ctx.r1.u32 + -16, ctx.r10.u8);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stb r9,-15(r1)
	REX_STORE_U8(ctx.r1.u32 + -15, ctx.r9.u8);
	// stb r8,-14(r1)
	REX_STORE_U8(ctx.r1.u32 + -14, ctx.r8.u8);
	// stb r11,-13(r1)
	REX_STORE_U8(ctx.r1.u32 + -13, ctx.r11.u8);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235A2A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x8235A2B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2148);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,2152(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2152);
	// stw r11,2148(r30)
	REX_STORE_U32(ctx.r30.u32 + 2148, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,2152(r30)
	REX_STORE_U32(ctx.r30.u32 + 2152, ctx.r10.u32);
	// lwz r4,1456(r9)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x8235A2E0;
	sub_8233EE50(ctx, base);
	// lwz r29,136(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// b 0x8235a36c
	goto loc_8235A36C;
loc_8235A2E8:
	// lwz r31,28(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x8235a35c
	goto loc_8235A35C;
loc_8235A2F0:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a358
	if (ctx.cr0.eq) goto loc_8235A358;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A310;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235a334
	if (!ctx.cr0.eq) goto loc_8235A334;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A32C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a358
	if (ctx.cr0.eq) goto loc_8235A358;
loc_8235A334:
	// lwz r11,2148(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2148);
	// lwz r10,956(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 956);
	// stw r11,892(r31)
	REX_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// lwz r11,2152(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2152);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x8235a354
	if (!ctx.cr6.gt) goto loc_8235A354;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_8235A354:
	// stw r11,956(r31)
	REX_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
loc_8235A358:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8235A35C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235a2f0
	if (!ctx.cr6.eq) goto loc_8235A2F0;
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_8235A36C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235a2e8
	if (!ctx.cr6.eq) goto loc_8235A2E8;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8235A384:
	// lwz r11,2068(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2068);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235a39c
	if (!ctx.cr6.gt) goto loc_8235A39C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8235a3a8
	goto loc_8235A3A8;
loc_8235A39C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r26,r10,r25
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
loc_8235A3A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a4ac
	if (ctx.cr0.eq) goto loc_8235A4AC;
	// lwz r11,228(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a4a0
	if (ctx.cr0.eq) goto loc_8235A4A0;
	// lwz r11,2148(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2148);
	// lwz r10,956(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 956);
	// stw r11,892(r26)
	REX_STORE_U32(ctx.r26.u32 + 892, ctx.r11.u32);
	// lwz r11,2152(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2152);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x8235a3dc
	if (!ctx.cr6.gt) goto loc_8235A3DC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_8235A3DC:
	// stw r11,956(r26)
	REX_STORE_U32(ctx.r26.u32 + 956, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235cb28
	ctx.lr = 0x8235A3EC;
	sub_8235CB28(ctx, base);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
loc_8235A3F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823628b8
	ctx.lr = 0x8235A3F8;
	sub_823628B8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x8235a494
	if (ctx.cr6.lt) goto loc_8235A494;
	// addi r29,r3,236
	ctx.r29.s64 = ctx.r3.s64 + 236;
loc_8235A410:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235a480
	if (ctx.cr6.eq) goto loc_8235A480;
loc_8235A41C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f828
	ctx.lr = 0x8235A424;
	sub_8235F828(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a438
	if (ctx.cr0.eq) goto loc_8235A438;
	// lwz r31,236(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8235a41c
	if (!ctx.cr6.eq) goto loc_8235A41C;
loc_8235A438:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235a480
	if (ctx.cr6.eq) goto loc_8235A480;
	// lwz r11,2152(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2152);
	// lwz r10,956(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 956);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x8235a458
	if (!ctx.cr6.gt) goto loc_8235A458;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_8235A458:
	// lwz r10,892(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 892);
	// stw r11,956(r31)
	REX_STORE_U32(ctx.r31.u32 + 956, ctx.r11.u32);
	// lwz r11,2148(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2148);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8235a480
	if (ctx.cr6.eq) goto loc_8235A480;
	// stw r11,892(r31)
	REX_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8235cb28
	ctx.lr = 0x8235A47C;
	sub_8235CB28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_8235A480:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8235a410
	if (!ctx.cr6.gt) goto loc_8235A410;
loc_8235A494:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235a3f0
	if (!ctx.cr6.eq) goto loc_8235A3F0;
loc_8235A4A0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// b 0x8235a384
	goto loc_8235A384;
loc_8235A4AC:
	// lwz r29,136(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8235a55c
	goto loc_8235A55C;
loc_8235A4BC:
	// lwz r31,28(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x8235a54c
	goto loc_8235A54C;
loc_8235A4C4:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235a548
	if (ctx.cr0.eq) goto loc_8235A548;
	// lwz r11,892(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 892);
	// lwz r10,2148(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 2148);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235a548
	if (ctx.cr6.eq) goto loc_8235A548;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A4F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235a51c
	if (ctx.cr0.eq) goto loc_8235A51C;
	// lbz r11,2116(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2116);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8235a51c
	if (!ctx.cr0.eq) goto loc_8235A51C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r30,184
	ctx.r3.s64 = ctx.r30.s64 + 184;
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8235b3b8
	ctx.lr = 0x8235A51C;
	sub_8235B3B8(ctx, base);
loc_8235A51C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235A530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,137
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 137, ctx.xer);
	// bne cr6,0x8235a544
	if (!ctx.cr6.eq) goto loc_8235A544;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8235a548
	goto loc_8235A548;
loc_8235A544:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8235A548:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8235A54C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235a4c4
	if (!ctx.cr6.eq) goto loc_8235A4C4;
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_8235A55C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235a4bc
	if (!ctx.cr6.eq) goto loc_8235A4BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233faa0
	ctx.lr = 0x8235A570;
	sub_8233FAA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235a59c
	if (!ctx.cr0.eq) goto loc_8235A59C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-26040
	ctx.r6.s64 = ctx.r11.s64 + -26040;
	// addi r5,r10,-28368
	ctx.r5.s64 = ctx.r10.s64 + -28368;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,154
	ctx.r7.s64 = 154;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235A59C;
	sub_82260F30(ctx, base);
loc_8235A59C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8235a5b8
	if (ctx.cr6.eq) goto loc_8235A5B8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-25712
	ctx.r4.s64 = ctx.r11.s64 + -25712;
	// bl 0x82113c30
	ctx.lr = 0x8235A5B8;
	sub_82113C30(ctx, base);
loc_8235A5B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8235a5d4
	if (ctx.cr6.eq) goto loc_8235A5D4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,-25776
	ctx.r4.s64 = ctx.r11.s64 + -25776;
	// bl 0x82113c30
	ctx.lr = 0x8235A5D4;
	sub_82113C30(ctx, base);
loc_8235A5D4:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x823256a8
	ctx.lr = 0x8235A5E0;
	sub_823256A8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235F988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r4,58
	ctx.r10.s64 = ctx.r4.s64 + 58;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r3,r8,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// b 0x8235f9d8
	goto loc_8235F9D8;
loc_8235F9B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8235f9e0
	if (!ctx.cr0.eq) goto loc_8235F9E0;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8235f9cc
	if (ctx.cr0.eq) goto loc_8235F9CC;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235f9f4
	if (ctx.cr6.eq) goto loc_8235F9F4;
loc_8235F9CC:
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
loc_8235F9D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235f9b0
	if (!ctx.cr6.eq) goto loc_8235F9B0;
loc_8235F9E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235F9E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8235F9F4:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8235fa0c
	if (!ctx.cr6.eq) goto loc_8235FA0C;
	// lwz r11,228(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235fa48
	if (!ctx.cr0.eq) goto loc_8235FA48;
loc_8235FA0C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235FA1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235fa48
	if (!ctx.cr0.eq) goto loc_8235FA48;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13408
	ctx.r6.s64 = ctx.r11.s64 + -13408;
	// addi r5,r10,-13136
	ctx.r5.s64 = ctx.r10.s64 + -13136;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,647
	ctx.r7.s64 = 647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235FA48;
	sub_82260F30(ctx, base);
loc_8235FA48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8235f9e4
	goto loc_8235F9E4;
}

DEFINE_REX_FUNC(sub_82360D50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82360D58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,1452(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325520
	ctx.lr = 0x82360D74;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82360dac
	if (ctx.cr0.eq) goto loc_82360DAC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82360D90;
	sub_8235FD90(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-12984
	ctx.r10.s64 = ctx.r10.s64 + -12984;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// b 0x82360db0
	goto loc_82360DB0;
loc_82360DAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360DB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82361F18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8235c830
	ctx.lr = 0x82361F40;
	sub_8235C830(ctx, base);
	// stw r31,948(r30)
	REX_STORE_U32(ctx.r30.u32 + 948, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823624A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82362918) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362944
	if (ctx.cr6.eq) goto loc_82362944;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82362968
	if (!ctx.cr6.eq) goto loc_82362968;
loc_82362944:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-9232
	ctx.r6.s64 = ctx.r11.s64 + -9232;
	// addi r5,r10,-9060
	ctx.r5.s64 = ctx.r10.s64 + -9060;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,40
	ctx.r7.s64 = 40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82362968;
	sub_82260F30(ctx, base);
loc_82362968:
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82362974;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,60(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82362984;
	sub_8235CB28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82363730) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82325520
	ctx.lr = 0x82363750;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823650A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x823650A8;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// extsh r18,r11
	ctx.r18.s64 = ctx.r11.s16;
	// rlwinm r19,r11,16,26,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F;
	// beq 0x823650e8
	if (ctx.cr0.eq) goto loc_823650E8;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r28,r11,23,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// b 0x823650ec
	goto loc_823650EC;
loc_823650E8:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_823650EC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r22,r11,-14148
	ctx.r22.s64 = ctx.r11.s64 + -14148;
	// addi r21,r10,1320
	ctx.r21.s64 = ctx.r10.s64 + 1320;
	// ble cr6,0x823651a8
	if (!ctx.cr6.gt) goto loc_823651A8;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// ble cr6,0x8236512c
	if (!ctx.cr6.gt) goto loc_8236512C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2728
	ctx.r5.s64 = ctx.r11.s64 + 2728;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,871
	ctx.r7.s64 = 871;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236512C;
	sub_82260F30(ctx, base);
loc_8236512C:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// stw r30,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// sth r30,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r30.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x8236515C;
	sub_8235EED0(ctx, base);
	// stw r30,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// stw r30,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r23,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r23.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r23,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r23.u32);
	// addi r11,r11,-8336
	ctx.r11.s64 = ctx.r11.s64 + -8336;
	// li r5,2
	ctx.r5.s64 = 2;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f1,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f3,f1
	ctx.f3.f64 = ctx.f1.f64;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// bl 0x8235feb8
	ctx.lr = 0x8236519C;
	sub_8235FEB8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c8f0
	ctx.lr = 0x823651A8;
	sub_8235C8F0(ctx, base);
loc_823651A8:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823651B0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236fe78
	ctx.lr = 0x823651BC;
	sub_8236FE78(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x823651b0
	if (ctx.cr6.lt) goto loc_823651B0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r25,r11,2708
	ctx.r25.s64 = ctx.r11.s64 + 2708;
	// beq cr6,0x823652bc
	if (ctx.cr6.eq) goto loc_823652BC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82365238
	if (!ctx.cr6.eq) goto loc_82365238;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82365214
	if (ctx.cr6.eq) goto loc_82365214;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,895
	ctx.r7.s64 = 895;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82365214;
	sub_82260F30(ctx, base);
loc_82365214:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// sth r11,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82365238:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82365244;
	sub_8235EED0(ctx, base);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r23,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r23.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f4,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8235feb8
	ctx.lr = 0x82365270;
	sub_8235FEB8(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82365274:
	// sraw r11,r28,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x823652a0
	if (!ctx.cr0.eq) goto loc_823652A0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823652A0:
	// bctrl 
	ctx.lr = 0x823652A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82365274
	if (ctx.cr6.lt) goto loc_82365274;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c8f0
	ctx.lr = 0x823652BC;
	sub_8235C8F0(ctx, base);
loc_823652BC:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823652C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236fe78
	ctx.lr = 0x823652D0;
	sub_8236FE78(ctx, base);
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x823652c4
	if (ctx.cr6.lt) goto loc_823652C4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x823653c8
	if (ctx.cr6.eq) goto loc_823653C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82365344
	if (!ctx.cr6.eq) goto loc_82365344;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82365320
	if (ctx.cr6.eq) goto loc_82365320;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,922
	ctx.r7.s64 = 922;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82365320;
	sub_82260F30(ctx, base);
loc_82365320:
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r11.u32);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// sth r11,2(r26)
	REX_STORE_U16(ctx.r26.u32 + 2, ctx.r11.u16);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwimi r11,r20,18,10,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 18) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82365344:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82365350;
	sub_8235EED0(ctx, base);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r23,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r23.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f4,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8235feb8
	ctx.lr = 0x8236537C;
	sub_8235FEB8(ctx, base);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82365380:
	// sraw r11,r28,r30
	temp.u32 = ctx.r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r11.s64 = ctx.r28.s32 >> temp.u32;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne 0x823653ac
	if (!ctx.cr0.eq) goto loc_823653AC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_823653AC:
	// bctrl 
	ctx.lr = 0x823653B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x82365380
	if (ctx.cr6.lt) goto loc_82365380;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235c8f0
	ctx.lr = 0x823653C8;
	sub_8235C8F0(ctx, base);
loc_823653C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236ff90
	ctx.lr = 0x823653D0;
	sub_8236FF90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365430
	if (ctx.cr0.eq) goto loc_82365430;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823653e8
	if (ctx.cr6.eq) goto loc_823653E8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82365404
	if (!ctx.cr6.eq) goto loc_82365404;
loc_823653E8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2676
	ctx.r5.s64 = ctx.r11.s64 + 2676;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,944
	ctx.r7.s64 = 944;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82365404;
	sub_82260F30(ctx, base);
loc_82365404:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82365410;
	sub_8235EED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r27,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// stw r23,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r23.u32);
	// stw r27,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// stw r23,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r23.u32);
	// bl 0x8235c8f0
	ctx.lr = 0x82365430;
	sub_8235C8F0(ctx, base);
loc_82365430:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82365634
	if (ctx.cr6.eq) goto loc_82365634;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365578
	if (ctx.cr0.eq) goto loc_82365578;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233eda8
	ctx.lr = 0x8236544C;
	sub_8233EDA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82365470
	if (!ctx.cr0.eq) goto loc_82365470;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2656
	ctx.r5.s64 = ctx.r11.s64 + 2656;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82365470;
	sub_82260F30(ctx, base);
loc_82365470:
	// cmpwi cr6,r19,15
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 15, ctx.xer);
	// beq cr6,0x823654a4
	if (ctx.cr6.eq) goto loc_823654A4;
	// cmpwi cr6,r19,17
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 17, ctx.xer);
	// beq cr6,0x823654a4
	if (ctx.cr6.eq) goto loc_823654A4;
	// cmpwi cr6,r19,11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 11, ctx.xer);
	// beq cr6,0x823654a4
	if (ctx.cr6.eq) goto loc_823654A4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2544
	ctx.r5.s64 = ctx.r11.s64 + 2544;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,959
	ctx.r7.s64 = 959;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823654A4;
	sub_82260F30(ctx, base);
loc_823654A4:
	// lbz r11,2116(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 2116);
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bne 0x823654cc
	if (!ctx.cr0.eq) goto loc_823654CC;
	// stb r20,2116(r29)
	REX_STORE_U8(ctx.r29.u32 + 2116, ctx.r20.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,2120(r29)
	REX_STORE_U32(ctx.r29.u32 + 2120, ctx.r11.u32);
	// b 0x823654f8
	goto loc_823654F8;
loc_823654CC:
	// lwz r9,2120(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 2120);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x823654f8
	if (ctx.cr6.eq) goto loc_823654F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2492
	ctx.r5.s64 = ctx.r11.s64 + 2492;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,964
	ctx.r7.s64 = 964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823654F8;
	sub_82260F30(ctx, base);
loc_823654F8:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r18,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r18.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// li r19,32
	ctx.r19.s64 = 32;
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// bl 0x8233f0e8
	ctx.lr = 0x82365518;
	sub_8233F0E8(ctx, base);
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365540
	if (!ctx.cr6.eq) goto loc_82365540;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,2472
	ctx.r5.s64 = ctx.r11.s64 + 2472;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,971
	ctx.r7.s64 = 971;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82365540;
	sub_82260F30(ctx, base);
loc_82365540:
	// lwz r10,4(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82365560
	if (!ctx.cr6.lt) goto loc_82365560;
	// lwz r10,8(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82365564
	goto loc_82365564;
loc_82365560:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82365564:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// lwz r18,136(r11)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
loc_82365578:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// rlwinm r10,r19,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r18,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r18.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823655a8
	if (ctx.cr0.eq) goto loc_823655A8;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// b 0x823655ac
	goto loc_823655AC;
loc_823655A8:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_823655AC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823655b8
	if (ctx.cr6.eq) goto loc_823655B8;
	// stb r20,164(r31)
	REX_STORE_U8(ctx.r31.u32 + 164, ctx.r20.u8);
loc_823655B8:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823655d0
	if (ctx.cr0.eq) goto loc_823655D0;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_823655D0:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823655D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8236fe78
	ctx.lr = 0x823655E0;
	sub_8236FE78(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x82365608
	if (ctx.cr0.eq) goto loc_82365608;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82365608:
	// bctrl 
	ctx.lr = 0x8236560C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x823655d4
	if (ctx.cr6.lt) goto loc_823655D4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365634
	if (ctx.cr0.eq) goto loc_82365634;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r10,85
	ctx.r10.s64 = 85;
	// rlwimi r11,r10,0,24,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF00);
	// stw r11,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r11.u32);
loc_82365634:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

