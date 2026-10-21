#include "dfkbl_funcs.3.h"

DEFINE_REX_FUNC(sub_82090270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82090278;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2305(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2305);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82090298
	if (ctx.cr6.lt) goto loc_82090298;
	// beq cr6,0x820902b4
	if (ctx.cr6.eq) goto loc_820902B4;
	// b 0x820902dc
	goto loc_820902DC;
loc_82090298:
	// addi r3,r31,4704
	ctx.r3.s64 = ctx.r31.s64 + 4704;
	// bl 0x820d0290
	ctx.lr = 0x820902A0;
	sub_820D0290(ctx, base);
	// lbz r11,2305(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2305);
	// stb r30,2306(r31)
	REX_STORE_U8(ctx.r31.u32 + 2306, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2307(r31)
	REX_STORE_U8(ctx.r31.u32 + 2307, ctx.r30.u8);
	// stb r11,2305(r31)
	REX_STORE_U8(ctx.r31.u32 + 2305, ctx.r11.u8);
loc_820902B4:
	// addi r28,r31,4704
	ctx.r28.s64 = ctx.r31.s64 + 4704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d36b0
	ctx.lr = 0x820902C0;
	sub_820D36B0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x820902e8
	if (ctx.cr6.eq) goto loc_820902E8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x820d0000
	ctx.lr = 0x820902D8;
	sub_820D0000(ctx, base);
	// stb r29,2304(r31)
	REX_STORE_U8(ctx.r31.u32 + 2304, ctx.r29.u8);
loc_820902DC:
	// stb r30,2307(r31)
	REX_STORE_U8(ctx.r31.u32 + 2307, ctx.r30.u8);
	// stb r30,2306(r31)
	REX_STORE_U8(ctx.r31.u32 + 2306, ctx.r30.u8);
	// stb r30,2305(r31)
	REX_STORE_U8(ctx.r31.u32 + 2305, ctx.r30.u8);
loc_820902E8:
	// lwz r11,2312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2312);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82090300
	if (!ctx.cr6.eq) goto loc_82090300;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r31,4704
	ctx.r3.s64 = ctx.r31.s64 + 4704;
	// bl 0x820d0000
	ctx.lr = 0x82090300;
	sub_820D0000(ctx, base);
loc_82090300:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82093E08) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// b 0x820a6440
	sub_820A6440(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82093F18) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,25928
	ctx.r3.s64 = ctx.r10.s64 + 25928;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x820b38f8
	sub_820B38F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820941E0) {
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
	// addis r3,r3,238
	ctx.r3.s64 = ctx.r3.s64 + 15597568;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// bne cr6,0x8209421c
	if (!ctx.cr6.eq) goto loc_8209421C;
	// bl 0x820b7298
	ctx.lr = 0x82094210;
	sub_820B7298(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82094228
	goto loc_82094228;
loc_8209421C:
	// bl 0x820b7298
	ctx.lr = 0x82094220;
	sub_820B7298(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82094228:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x820e7db8
	ctx.lr = 0x82094230;
	sub_820E7DB8(ctx, base);
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

DEFINE_REX_FUNC(sub_82095BE8) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a87f8
	sub_820A87F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095D10) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8e00
	sub_820A8E00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82095E38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,6476(r3)
	REX_STORE_U32(ctx.r3.u32 + 6476, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r29,6480(r3)
	REX_STORE_U32(ctx.r3.u32 + 6480, ctx.r29.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b6f40
	ctx.lr = 0x82095E64;
	sub_820B6F40(ctx, base);
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// addi r3,r3,2600
	ctx.r3.s64 = ctx.r3.s64 + 2600;
	// bl 0x820ae998
	ctx.lr = 0x82095E74;
	sub_820AE998(ctx, base);
	// addi r11,r3,-6
	ctx.r11.s64 = ctx.r3.s64 + -6;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bgt cr6,0x82095f70
	if (ctx.cr6.gt) goto loc_82095F70;
	// lis r12,-32247
	ctx.r12.s64 = -2113339392;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,24216
	ctx.r12.s64 = ctx.r12.s64 + 24216;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82095F54;
	case 1:
		goto loc_82095F1C;
	case 2:
		goto loc_82095F2C;
	case 3:
		goto loc_82095F5C;
	case 4:
		goto loc_82095F34;
	case 5:
		goto loc_82095F4C;
	case 6:
		goto loc_82095F24;
	case 7:
		goto loc_82095F3C;
	case 8:
		goto loc_82095F44;
	case 9:
		goto loc_82095F64;
	case 10:
		goto loc_82095F6C;
	case 11:
		goto loc_82095F54;
	case 12:
		goto loc_82095F1C;
	case 13:
		goto loc_82095F2C;
	case 14:
		goto loc_82095F5C;
	case 15:
		goto loc_82095F34;
	case 16:
		goto loc_82095F4C;
	case 17:
		goto loc_82095F24;
	case 18:
		goto loc_82095F3C;
	case 19:
		goto loc_82095F44;
	case 20:
		goto loc_82095F64;
	case 21:
		goto loc_82095F6C;
	case 22:
		goto loc_82095F54;
	case 23:
		goto loc_82095F1C;
	case 24:
		goto loc_82095F2C;
	case 25:
		goto loc_82095F5C;
	case 26:
		goto loc_82095F34;
	case 27:
		goto loc_82095F4C;
	case 28:
		goto loc_82095F24;
	case 29:
		goto loc_82095F3C;
	case 30:
		goto loc_82095F44;
	case 31:
		goto loc_82095F64;
	case 32:
		goto loc_82095F6C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82095F1C:
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F24:
	// li r30,12
	ctx.r30.s64 = 12;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F2C:
	// li r30,8
	ctx.r30.s64 = 8;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F34:
	// li r30,10
	ctx.r30.s64 = 10;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F3C:
	// li r30,13
	ctx.r30.s64 = 13;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F44:
	// li r30,14
	ctx.r30.s64 = 14;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F4C:
	// li r30,11
	ctx.r30.s64 = 11;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F54:
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F5C:
	// li r30,9
	ctx.r30.s64 = 9;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F64:
	// li r30,15
	ctx.r30.s64 = 15;
	// b 0x82095f70
	goto loc_82095F70;
loc_82095F6C:
	// li r30,16
	ctx.r30.s64 = 16;
loc_82095F70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6ac8
	ctx.lr = 0x82095F80;
	sub_820B6AC8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6ac8
	ctx.lr = 0x82095F90;
	sub_820B6AC8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b6ac8
	ctx.lr = 0x82095FA0;
	sub_820B6AC8(ctx, base);
	// stw r30,6492(r31)
	REX_STORE_U32(ctx.r31.u32 + 6492, ctx.r30.u32);
	// stw r29,6488(r31)
	REX_STORE_U32(ctx.r31.u32 + 6488, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,6500(r31)
	REX_STORE_U32(ctx.r31.u32 + 6500, ctx.r29.u32);
	// bl 0x820b6828
	ctx.lr = 0x82095FB4;
	sub_820B6828(ctx, base);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r11,6480(r31)
	REX_STORE_U32(ctx.r31.u32 + 6480, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209C950) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// ori r9,r10,28904
	ctx.r9.u64 = ctx.r10.u64 | 28904;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbzx r3,r8,r9
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209CD18) {
	REX_FUNC_PROLOGUE();
	// lis r11,13
	ctx.r11.s64 = 851968;
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// ori r11,r11,34348
	ctx.r11.u64 = ctx.r11.u64 | 34348;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209D4E0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x8209d4f8
	if (ctx.cr6.lt) goto loc_8209D4F8;
	// addi r11,r4,22997
	ctx.r11.s64 = ctx.r4.s64 + 22997;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// b 0x8209d504
	goto loc_8209D504;
loc_8209D4F8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,26452
	ctx.r10.u64 = ctx.r11.u64 | 26452;
	// lwzx r4,r3,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_8209D504:
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r3,21192
	ctx.r3.s64 = ctx.r3.s64 + 21192;
	// b 0x820b65a0
	sub_820B65A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209E570) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8209E578;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r27,r3,1
	ctx.r27.s64 = ctx.r3.s64 + 65536;
	// lis r11,12
	ctx.r11.s64 = 786432;
	// addi r27,r27,29168
	ctx.r27.s64 = ctx.r27.s64 + 29168;
	// ori r22,r11,5096
	ctx.r22.u64 = ctx.r11.u64 | 5096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820e8878
	ctx.lr = 0x8209E5A0;
	sub_820E8878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209d9e0
	ctx.lr = 0x8209E5A8;
	sub_8209D9E0(ctx, base);
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// addis r3,r31,14
	ctx.r3.s64 = ctx.r31.s64 + 917504;
	// li r5,840
	ctx.r5.s64 = 840;
	// addi r4,r4,6304
	ctx.r4.s64 = ctx.r4.s64 + 6304;
	// addi r3,r3,-32112
	ctx.r3.s64 = ctx.r3.s64 + -32112;
	// bl 0x820e8578
	ctx.lr = 0x8209E5C0;
	sub_820E8578(ctx, base);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// addis r25,r31,1
	ctx.r25.s64 = ctx.r31.s64 + 65536;
	// addis r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 65536;
	// addis r23,r31,1
	ctx.r23.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,13
	ctx.r29.s64 = ctx.r31.s64 + 851968;
	// addi r26,r26,7184
	ctx.r26.s64 = ctx.r26.s64 + 7184;
	// addi r25,r25,7188
	ctx.r25.s64 = ctx.r25.s64 + 7188;
	// addi r24,r24,7204
	ctx.r24.s64 = ctx.r24.s64 + 7204;
	// addi r23,r23,7144
	ctx.r23.s64 = ctx.r23.s64 + 7144;
	// addi r29,r29,31312
	ctx.r29.s64 = ctx.r29.s64 + 31312;
	// li r30,11
	ctx.r30.s64 = 11;
	// li r28,3
	ctx.r28.s64 = 3;
loc_8209E5F0:
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r28,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r28.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r28,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820e8578
	ctx.lr = 0x8209E60C;
	sub_820E8578(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,192
	ctx.r29.s64 = ctx.r29.s64 + 192;
	// bne 0x8209e5f0
	if (!ctx.cr0.eq) goto loc_8209E5F0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r9,r10,29172
	ctx.r9.u64 = ctx.r10.u64 | 29172;
	// ori r11,r11,1273
	ctx.r11.u64 = ctx.r11.u64 | 1273;
	// li r28,1
	ctx.r28.s64 = 1;
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// stwx r28,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r28.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r3,29169
	ctx.r3.s64 = ctx.r3.s64 + 29169;
	// addi r30,r30,29170
	ctx.r30.s64 = ctx.r30.s64 + 29170;
	// addi r29,r29,29171
	ctx.r29.s64 = ctx.r29.s64 + 29171;
loc_8209E660:
	// lbzx r6,r27,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// lbzx r4,r3,r11
	ctx.r4.u64 = REX_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// lbzx r5,r30,r11
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// lbzx r6,r29,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8209e660
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209E660;
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addis r3,r31,190
	ctx.r3.s64 = ctx.r31.s64 + 12451840;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r3,r3,-28592
	ctx.r3.s64 = ctx.r3.s64 + -28592;
	// bl 0x820e8878
	ctx.lr = 0x8209E6AC;
	sub_820E8878(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// ori r9,r10,26408
	ctx.r9.u64 = ctx.r10.u64 | 26408;
	// lwzx r8,r31,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8209e6cc
	if (ctx.cr6.eq) goto loc_8209E6CC;
	// lis r11,201
	ctx.r11.s64 = 13172736;
	// ori r10,r11,42056
	ctx.r10.u64 = ctx.r11.u64 | 42056;
	// stwx r28,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
loc_8209E6CC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A0CA0) {
	REX_FUNC_PROLOGUE();
	// lwz r16,3320(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3320);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3320(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3320);
	// lwz r16,3320(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3320);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3316(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3316);
	// lwz r16,3320(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3320);
	// lwz r16,3320(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 3320);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820a0d14
	if (ctx.cr6.eq) goto loc_820A0D14;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x820a0c78
	// ERROR: conditional branch to unknown address 0x820A0C78
	if (ctx.cr6.lt) REX_FATAL("Unresolved branch from 0x820A0D0C to 0x820A0C78");
	// blr 
	return;
loc_820A0D14:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A0F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820A0F78;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215eba4
	ctx.lr = 0x820A0F80;
	__savefpr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lfs f31,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f0,2236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f0.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fadds f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 + ctx.f0.f64));
	// fadds f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bne cr6,0x820a0fec
	if (!ctx.cr6.eq) goto loc_820A0FEC;
	// lwz r29,244(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bl 0x82092160
	ctx.lr = 0x820A0FE0;
	sub_82092160(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820a1004
	goto loc_820A1004;
loc_820A0FEC:
	// lwz r28,244(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r7,r29,0,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF000000;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82092160
	ctx.lr = 0x820A0FFC;
	sub_82092160(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_820A1004:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fadds f2,f29,f27
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f27.f64));
	// fadds f1,f30,f28
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f28.f64));
	// bl 0x82092160
	ctx.lr = 0x820A1020;
	sub_82092160(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215ebf0
	ctx.lr = 0x820A102C;
	__restfpr_27(ctx, base);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A39D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820A39E0;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x820921c8
	ctx.lr = 0x820A3A08;
	sub_820921C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a3b14
	if (ctx.cr6.eq) goto loc_820A3B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820924d8
	ctx.lr = 0x820A3A1C;
	sub_820924D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d210
	ctx.lr = 0x820A3A28;
	sub_8210D210(ctx, base);
	// li r3,10003
	ctx.r3.s64 = 10003;
	// bl 0x820923f8
	ctx.lr = 0x820A3A30;
	sub_820923F8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x820b3d28
	ctx.lr = 0x820A3A4C;
	sub_820B3D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820b3db8
	ctx.lr = 0x820A3A60;
	sub_820B3DB8(ctx, base);
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x820a3b14
	if (!ctx.cr6.gt) goto loc_820A3B14;
	// cmpwi cr6,r11,126
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 126, ctx.xer);
	// bgt cr6,0x820a3b14
	if (ctx.cr6.gt) goto loc_820A3B14;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// srawi r7,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 9;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
	// lfs f4,2112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2112);
	ctx.f4.f64 = double(temp.f32);
	// srawi r5,r9,9
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 9;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// lfs f3,2108(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2108);
	ctx.f3.f64 = double(temp.f32);
	// addze r3,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r3.s64 = temp.s64;
	// rlwinm r11,r4,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfs f0,4648(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4648);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r3,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 9) & 0xFFFFFE00;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// subf r7,r10,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r10.u64;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// fadds f1,f9,f0
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// bl 0x820b3d68
	ctx.lr = 0x820A3AE8;
	sub_820B3D68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820a3b00
	if (!ctx.cr6.eq) goto loc_820A3B00;
	// lis r4,-128
	ctx.r4.s64 = -8388608;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// b 0x820a3b04
	goto loc_820A3B04;
loc_820A3B00:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_820A3B04:
	// bl 0x820b3df8
	ctx.lr = 0x820A3B08;
	sub_820B3DF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3f08
	ctx.lr = 0x820A3B14;
	sub_820B3F08(ctx, base);
loc_820A3B14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A7D20) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820a7d5c
	if (!ctx.cr6.lt) goto loc_820A7D5C;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// bge cr6,0x820a7d80
	if (!ctx.cr6.lt) goto loc_820A7D80;
	// addi r10,r4,1224
	ctx.r10.s64 = ctx.r4.s64 + 1224;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820a7d80
	if (ctx.cr6.eq) goto loc_820A7D80;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x820a7d80
	goto loc_820A7D80;
loc_820A7D5C:
	// cmpwi cr6,r4,10000
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10000, ctx.xer);
	// ble cr6,0x820a7d80
	if (!ctx.cr6.gt) goto loc_820A7D80;
	// cmpwi cr6,r4,10058
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10058, ctx.xer);
	// bge cr6,0x820a7d80
	if (!ctx.cr6.lt) goto loc_820A7D80;
	// addi r11,r4,-10001
	ctx.r11.s64 = ctx.r4.s64 + -10001;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,-13136
	ctx.r7.s64 = ctx.r10.s64 + -13136;
	// lwzx r11,r8,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_820A7D80:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7db0
	if (!ctx.cr6.eq) goto loc_820A7DB0;
	// cmpwi cr6,r4,2560
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2560, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,1224
	ctx.r11.s64 = ctx.r4.s64 + 1224;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820A7DB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820a7dc4
	if (!ctx.cr6.eq) goto loc_820A7DC4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820A7DC4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AAF50) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x820a9de0
	ctx.lr = 0x820AAF70;
	sub_820A9DE0(ctx, base);
	// addi r4,r31,3664
	ctx.r4.s64 = ctx.r31.s64 + 3664;
	// lwz r3,3656(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3656);
	// bl 0x820e5a50
	ctx.lr = 0x820AAF7C;
	sub_820E5A50(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820aaf98
	if (!ctx.cr6.eq) goto loc_820AAF98;
	// lwz r11,996(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 996);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r10,r11,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r10,996(r31)
	REX_STORE_U32(ctx.r31.u32 + 996, ctx.r10.u32);
	// b 0x820aafa0
	goto loc_820AAFA0;
loc_820AAF98:
	// stw r3,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820AAFA0:
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

DEFINE_REX_FUNC(sub_820ACA78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820ACA80;
	__savegprlr_25(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820acbd4
	if (ctx.cr6.eq) goto loc_820ACBD4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r8,20(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,31328
	ctx.r10.s64 = ctx.r10.s64 + 31328;
loc_820ACABC:
	// addi r7,r10,24
	ctx.r7.s64 = ctx.r10.s64 + 24;
	// lwzx r6,r11,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x820acb1c
	if (!ctx.cr6.eq) goto loc_820ACB1C;
	// addi r7,r10,12
	ctx.r7.s64 = ctx.r10.s64 + 12;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820acb1c
	if (!ctx.cr6.eq) goto loc_820ACB1C;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820acb1c
	if (!ctx.cr6.eq) goto loc_820ACB1C;
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820acb1c
	if (!ctx.cr6.eq) goto loc_820ACB1C;
	// addi r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 + 20;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r5,r11,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x820acb38
	if (ctx.cr6.eq) goto loc_820ACB38;
loc_820ACB1C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mulli r11,r9,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(28));
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x820acabc
	if (!ctx.cr6.eq) goto loc_820ACABC;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_820ACB38:
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,10992(r29)
	REX_STORE_U32(ctx.r29.u32 + 10992, ctx.r9.u32);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x820acbd4
	if (ctx.cr6.eq) goto loc_820ACBD4;
	// lwz r3,3052(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 3052);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ACB5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,3076(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 3076);
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x820acb74
	if (!ctx.cr6.eq) goto loc_820ACB74;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,3056
	ctx.r3.s64 = ctx.r29.s64 + 3056;
	// bl 0x820ac2a0
	ctx.lr = 0x820ACB74;
	sub_820AC2A0(ctx, base);
loc_820ACB74:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r3,r29,3056
	ctx.r3.s64 = ctx.r29.s64 + 3056;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r30,544(r1)
	REX_STORE_U32(ctx.r1.u32 + 544, ctx.r30.u32);
	// stw r11,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r11.u32);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,548(r1)
	REX_STORE_U32(ctx.r1.u32 + 548, ctx.r8.u32);
	// stw r28,552(r1)
	REX_STORE_U32(ctx.r1.u32 + 552, ctx.r28.u32);
	// stw r26,556(r1)
	REX_STORE_U32(ctx.r1.u32 + 556, ctx.r26.u32);
	// stw r27,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r27.u32);
	// stw r25,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r25.u32);
	// bl 0x820ac210
	ctx.lr = 0x820ACBB4;
	sub_820AC210(ctx, base);
	// lwz r7,3052(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 3052);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r5,8(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x820ACBD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820ACBD4:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AEA58) {
	REX_FUNC_PROLOGUE();
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r11,0,21,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B15B0) {
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
	// beq cr6,0x820b16ac
	if (ctx.cr6.eq) goto loc_820B16AC;
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
	ctx.lr = 0x820B15E8;
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
	ctx.lr = 0x820B1604;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B1620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B163C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B1658;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B1674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B1690;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B16AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B16AC:
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

DEFINE_REX_FUNC(sub_820B3D48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// rlwimi r11,r10,1,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stfs f2,36(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B40B0) {
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
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f29.u64);
	// stfd f30,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b410c
	if (ctx.cr6.eq) goto loc_820B410C;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820b4118
	if (!ctx.cr6.eq) goto loc_820B4118;
loc_820B410C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
loc_820B4118:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lhz r4,22(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 22);
	// lwz r3,-30472(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -30472);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B4134;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b417c
	if (ctx.cr6.eq) goto loc_820B417C;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820b417c
	if (ctx.cr6.eq) goto loc_820B417C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x820b4188
	goto loc_820B4188;
loc_820B417C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_820B4188:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x820B4198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b41c0
	if (ctx.cr6.eq) goto loc_820B41C0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 64);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B41C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B41C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b41e8
	if (ctx.cr6.eq) goto loc_820B41E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r4,66(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 66);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B41E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B41E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4210
	if (ctx.cr6.eq) goto loc_820B4210;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,68(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4210;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B4210:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4238
	if (ctx.cr6.eq) goto loc_820B4238;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B4238:
	// lhz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820b43f4
	if (ctx.cr6.eq) goto loc_820B43F4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820b4354
	if (ctx.cr6.eq) goto loc_820B4354;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f4,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x820b42d0
	if (ctx.cr6.eq) goto loc_820B42D0;
	// lfs f0,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f11,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// fadds f1,f12,f11
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// bctrl 
	ctx.lr = 0x820B428C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f10,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f9.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// fadds f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f31.f64));
	// lwz r8,40(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B42B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r7,0,25,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820b4470
	goto loc_820B4470;
loc_820B42D0:
	// lfs f2,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bctrl 
	ctx.lr = 0x820B42DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f3,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r8,r9,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820b4314
	if (ctx.cr6.eq) goto loc_820B4314;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f0,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x820b4334
	goto loc_820B4334;
loc_820B4314:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// fmadds f2,f13,f0,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f30.f64)));
	// fmadds f1,f12,f0,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f31.f64)));
loc_820B4334:
	// bctrl 
	ctx.lr = 0x820B4338;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820b4470
	goto loc_820B4470;
loc_820B4354:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lfs f29,2236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f29.f64 = double(temp.f32);
	// lfs f10,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// lfs f9,32(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f13,f29
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// fmadds f2,f12,f29,f11
	ctx.f2.f64 = double(float(std::fma(ctx.f12.f64, ctx.f29.f64, ctx.f11.f64)));
	// fmadds f1,f10,f29,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f10.f64, ctx.f29.f64, ctx.f9.f64)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B4394;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r7,r8,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x820b43cc
	if (ctx.cr6.eq) goto loc_820B43CC;
	// fadds f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// b 0x820b43d4
	goto loc_820B43D4;
loc_820B43CC:
	// fmadds f2,f0,f29,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, ctx.f30.f64)));
	// fmadds f1,f13,f29,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f29.f64, ctx.f31.f64)));
loc_820B43D4:
	// bctrl 
	ctx.lr = 0x820B43D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820b4484
	if (ctx.cr6.eq) goto loc_820B4484;
	// lfs f2,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// b 0x820b4470
	goto loc_820B4470;
loc_820B43F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f4,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,56(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// lwz r7,40(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 40);
	// lfs f29,2236(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2236);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f2,f0,f29,f30
	ctx.f2.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, ctx.f30.f64)));
	// fmadds f1,f13,f29,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f29.f64, ctx.f31.f64)));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B4444;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r5,r6,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820b4468
	if (ctx.cr6.eq) goto loc_820B4468;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// b 0x820b4470
	goto loc_820B4470;
loc_820B4468:
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_820B4470:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B4484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B4484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f30,-40(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820C9810) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820C9818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820919f0
	ctx.lr = 0x820C9824;
	sub_820919F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82091a00
	ctx.lr = 0x820C982C;
	sub_82091A00(ctx, base);
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c9a50
	if (ctx.cr6.gt) goto loc_820C9A50;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c988c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C988C;
	// bdzf 4*cr6+eq,0x820c9a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C9A0C;
	// bne cr6,0x820c9a40
	if (!ctx.cr6.eq) goto loc_820C9A40;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820929b0
	ctx.lr = 0x820C985C;
	sub_820929B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820C9864;
	sub_820B80B8(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// lwz r4,2948(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r5,r11,-20560
	ctx.r5.s64 = ctx.r11.s64 + -20560;
	// bl 0x820a2e68
	ctx.lr = 0x820C9878;
	sub_820A2E68(ctx, base);
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r10.u8);
loc_820C988C:
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a1ee0
	ctx.lr = 0x820C9898;
	sub_820A1EE0(ctx, base);
	// rlwinm r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1000;
	// stw r3,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c998c
	if (ctx.cr6.eq) goto loc_820C998C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bgt cr6,0x820c9984
	if (ctx.cr6.gt) goto loc_820C9984;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c9908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C9908;
	// bdzf 4*cr6+eq,0x820c992c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C992C;
	// bne cr6,0x820c9950
	if (!ctx.cr6.eq) goto loc_820C9950;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x820929b0
	ctx.lr = 0x820C98CC;
	sub_820929B0(ctx, base);
	// bl 0x82092748
	ctx.lr = 0x820C98D0;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a0700
	ctx.lr = 0x820C98DC;
	sub_820A0700(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2460(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2460, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// stfs f0,2472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stfs f0,2468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// bl 0x82091b18
	ctx.lr = 0x820C98FC;
	sub_82091B18(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// b 0x820c9a54
	goto loc_820C9A54;
loc_820C9908:
	// bl 0x82092748
	ctx.lr = 0x820C990C;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a0700
	ctx.lr = 0x820C9918;
	sub_820A0700(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820C9920;
	sub_82091B18(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820c9a54
	goto loc_820C9A54;
loc_820C992C:
	// bl 0x82092748
	ctx.lr = 0x820C9930;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a0700
	ctx.lr = 0x820C993C;
	sub_820A0700(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091b18
	ctx.lr = 0x820C9944;
	sub_82091B18(ctx, base);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820c9a54
	goto loc_820C9A54;
loc_820C9950:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820929b0
	ctx.lr = 0x820C9958;
	sub_820929B0(ctx, base);
	// bl 0x82092748
	ctx.lr = 0x820C995C;
	sub_82092748(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lfs f0,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r9.u8);
	// stfs f0,2460(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2460, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// stfs f0,2472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stfs f0,2468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// b 0x820c9a58
	goto loc_820C9A58;
loc_820C9984:
	// stw r30,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r30.u32);
	// b 0x820c9a60
	goto loc_820C9A60;
loc_820C998C:
	// rlwinm r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c99cc
	if (ctx.cr6.eq) goto loc_820C99CC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820929b0
	ctx.lr = 0x820C99A0;
	sub_820929B0(ctx, base);
	// bl 0x82092770
	ctx.lr = 0x820C99A4;
	sub_82092770(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lfs f0,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stb r9,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r9.u8);
	// stfs f0,2460(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2460, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// stfs f0,2472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stfs f0,2468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// b 0x820c9a58
	goto loc_820C9A58;
loc_820C99CC:
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c99ec
	if (ctx.cr6.eq) goto loc_820C99EC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a2d58
	ctx.lr = 0x820C99E4;
	sub_820A2D58(ctx, base);
	// bl 0x82092720
	ctx.lr = 0x820C99E8;
	sub_82092720(ctx, base);
	// b 0x820c9a60
	goto loc_820C9A60;
loc_820C99EC:
	// rlwinm r11,r27,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c9a60
	if (ctx.cr6.eq) goto loc_820C9A60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a2de0
	ctx.lr = 0x820C9A04;
	sub_820A2DE0(ctx, base);
	// bl 0x82092720
	ctx.lr = 0x820C9A08;
	sub_82092720(ctx, base);
	// b 0x820c9a60
	goto loc_820C9A60;
loc_820C9A0C:
	// bl 0x82091e48
	ctx.lr = 0x820C9A10;
	sub_82091E48(ctx, base);
	// lbz r11,2529(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2529);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,4219(r31)
	REX_STORE_U8(ctx.r31.u32 + 4219, ctx.r30.u8);
	// stb r30,4218(r31)
	REX_STORE_U8(ctx.r31.u32 + 4218, ctx.r30.u8);
	// stw r10,4212(r31)
	REX_STORE_U32(ctx.r31.u32 + 4212, ctx.r10.u32);
	// stb r30,4217(r31)
	REX_STORE_U8(ctx.r31.u32 + 4217, ctx.r30.u8);
	// stb r30,4216(r31)
	REX_STORE_U8(ctx.r31.u32 + 4216, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
loc_820C9A40:
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bbd40
	ctx.lr = 0x820C9A4C;
	sub_820BBD40(ctx, base);
	// b 0x820c9a60
	goto loc_820C9A60;
loc_820C9A50:
	// li r30,0
	ctx.r30.s64 = 0;
loc_820C9A54:
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
loc_820C9A58:
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
loc_820C9A60:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c4a70
	ctx.lr = 0x820C9A6C;
	sub_820C4A70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a2408
	ctx.lr = 0x820C9A78;
	sub_820A2408(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D0000) {
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
	// cmpwi cr6,r4,42
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 42, ctx.xer);
	// beq cr6,0x820d0038
	if (ctx.cr6.eq) goto loc_820D0038;
	// bl 0x82092638
	ctx.lr = 0x820D0020;
	sub_82092638(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820924a0
	ctx.lr = 0x820D0028;
	sub_820924A0(ctx, base);
	// li r3,725
	ctx.r3.s64 = 725;
	// bl 0x82092468
	ctx.lr = 0x820D0030;
	sub_82092468(ctx, base);
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x820ca840
	ctx.lr = 0x820D0038;
	sub_820CA840(ctx, base);
loc_820D0038:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a0700
	ctx.lr = 0x820D0044;
	sub_820A0700(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,3384
	ctx.r3.s64 = ctx.r31.s64 + 3384;
	// bl 0x820a0700
	ctx.lr = 0x820D0050;
	sub_820A0700(ctx, base);
	// bl 0x82092208
	ctx.lr = 0x820D0054;
	sub_82092208(ctx, base);
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

DEFINE_REX_FUNC(sub_820D29D0) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8215eba8
	ctx.lr = 0x820D29E8;
	__savefpr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D2A04:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820d2a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D2A04;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r1,131
	ctx.r11.s64 = ctx.r1.s64 + 131;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820D2A18:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x820d2a18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820D2A18;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r7,3064(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3064);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// lfs f31,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// li r3,37
	ctx.r3.s64 = 37;
	// lfs f30,2224(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2224);
	ctx.f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f29,-14336(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -14336);
	ctx.f29.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82092160
	ctx.lr = 0x820D2A5C;
	sub_82092160(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// lwz r7,3068(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 3068);
	// li r3,38
	ctx.r3.s64 = 38;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f31,-9644(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -9644);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82092160
	ctx.lr = 0x820D2A88;
	sub_82092160(ctx, base);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,3124(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3124);
	// addi r30,r31,109
	ctx.r30.s64 = ctx.r31.s64 + 109;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f29,-9904(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -9904);
	ctx.f29.f64 = double(temp.f32);
	// ori r10,r10,32864
	ctx.r10.u64 = ctx.r10.u64 | 32864;
	// lfs f28,-9908(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -9908);
	ctx.f28.f64 = double(temp.f32);
	// li r9,10
	ctx.r9.s64 = 10;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bl 0x820a5828
	ctx.lr = 0x820D2AC4;
	sub_820A5828(ctx, base);
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lwz r8,3128(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3128);
	// li r9,10
	ctx.r9.s64 = 10;
	// fmr f4,f29
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f29.f64;
	// ori r10,r10,32864
	ctx.r10.u64 = ctx.r10.u64 | 32864;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820a5828
	ctx.lr = 0x820D2AEC;
	sub_820A5828(ctx, base);
	// lwz r11,7720(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7720);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d2b08
	if (ctx.cr6.lt) goto loc_820D2B08;
	// bne cr6,0x820d2b3c
	if (!ctx.cr6.eq) goto loc_820D2B3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,-9692
	ctx.r8.s64 = ctx.r11.s64 + -9692;
	// b 0x820d2b10
	goto loc_820D2B10;
loc_820D2B08:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r11,-9744
	ctx.r8.s64 = ctx.r11.s64 + -9744;
loc_820D2B10:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r7,r10,-24156
	ctx.r7.s64 = ctx.r10.s64 + -24156;
	// addi r6,r9,-24164
	ctx.r6.s64 = ctx.r9.s64 + -24164;
	// stw r7,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8209faf8
	ctx.lr = 0x820D2B3C;
	sub_8209FAF8(ctx, base);
loc_820D2B3C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8215ebf4
	ctx.lr = 0x820D2B48;
	__restfpr_28(ctx, base);
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

DEFINE_REX_FUNC(sub_820D7528) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820D7530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2404(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x820d7768
	if (ctx.cr6.gt) goto loc_820D7768;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,30044
	ctx.r12.s64 = ctx.r12.s64 + 30044;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D7588;
	case 1:
		goto loc_820D7768;
	case 2:
		goto loc_820D75B8;
	case 3:
		goto loc_820D7738;
	case 4:
		goto loc_820D75E8;
	case 5:
		goto loc_820D7678;
	case 6:
		goto loc_820D7618;
	case 7:
		goto loc_820D7648;
	case 8:
		goto loc_820D76A8;
	case 9:
		goto loc_820D76D8;
	case 10:
		goto loc_820D7708;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D7588:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82091798
	ctx.lr = 0x820D7590;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7598;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D75A0;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D75A8;
	sub_820B80B8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091e38
	ctx.lr = 0x820D75B0;
	sub_82091E38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D75B8:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82091798
	ctx.lr = 0x820D75C0;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D75C8;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D75D0;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D75D8;
	sub_820B80B8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82091e38
	ctx.lr = 0x820D75E0;
	sub_82091E38(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D75E8:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82091798
	ctx.lr = 0x820D75F0;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D75F8;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7600;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7608;
	sub_820B80B8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82091e38
	ctx.lr = 0x820D7610;
	sub_82091E38(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7618:
	// li r3,13
	ctx.r3.s64 = 13;
	// bl 0x82091798
	ctx.lr = 0x820D7620;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7628;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7630;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7638;
	sub_820B80B8(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82091e38
	ctx.lr = 0x820D7640;
	sub_82091E38(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7648:
	// li r3,14
	ctx.r3.s64 = 14;
	// bl 0x82091798
	ctx.lr = 0x820D7650;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7658;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7660;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7668;
	sub_820B80B8(ctx, base);
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82091e38
	ctx.lr = 0x820D7670;
	sub_82091E38(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7678:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82091798
	ctx.lr = 0x820D7680;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7688;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7690;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7698;
	sub_820B80B8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82091e38
	ctx.lr = 0x820D76A0;
	sub_82091E38(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D76A8:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x82091798
	ctx.lr = 0x820D76B0;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D76B8;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D76C0;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D76C8;
	sub_820B80B8(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82091e38
	ctx.lr = 0x820D76D0;
	sub_82091E38(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D76D8:
	// li r3,15
	ctx.r3.s64 = 15;
	// bl 0x82091798
	ctx.lr = 0x820D76E0;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D76E8;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D76F0;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D76F8;
	sub_820B80B8(ctx, base);
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82091e38
	ctx.lr = 0x820D7700;
	sub_82091E38(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7708:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82091798
	ctx.lr = 0x820D7710;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7718;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7720;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7728;
	sub_820B80B8(ctx, base);
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82091e38
	ctx.lr = 0x820D7730;
	sub_82091E38(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7738:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x82091798
	ctx.lr = 0x820D7740;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7748;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7750;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7758;
	sub_820B80B8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82091e38
	ctx.lr = 0x820D7760;
	sub_82091E38(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x820d7794
	goto loc_820D7794;
loc_820D7768:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x82091798
	ctx.lr = 0x820D7770;
	sub_82091798(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c08
	ctx.lr = 0x820D7778;
	sub_82091C08(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c18
	ctx.lr = 0x820D7780;
	sub_82091C18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b80b8
	ctx.lr = 0x820D7788;
	sub_820B80B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091e38
	ctx.lr = 0x820D7790;
	sub_82091E38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
loc_820D7794:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c49b0
	ctx.lr = 0x820D77A0;
	sub_820C49B0(ctx, base);
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// lwz r4,2564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2564);
	// bl 0x820caa28
	ctx.lr = 0x820D77AC;
	sub_820CAA28(ctx, base);
	// bl 0x820925e8
	ctx.lr = 0x820D77B0;
	sub_820925E8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r30,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r30.u8);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// bl 0x82091b18
	ctx.lr = 0x820D77CC;
	sub_82091B18(ctx, base);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a5c70
	ctx.lr = 0x820D77DC;
	sub_820A5C70(ctx, base);
	// bl 0x820917e0
	ctx.lr = 0x820D77E0;
	sub_820917E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82091b38
	ctx.lr = 0x820D77E8;
	sub_82091B38(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4512(r31)
	REX_STORE_U32(ctx.r31.u32 + 4512, ctx.r11.u32);
	// bl 0x82091860
	ctx.lr = 0x820D77F8;
	sub_82091860(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091590
	ctx.lr = 0x820D7800;
	sub_82091590(ctx, base);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,92(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820D7818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d00
	ctx.lr = 0x820D7824;
	sub_820B7D00(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d08
	ctx.lr = 0x820D7830;
	sub_820B7D08(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d18
	ctx.lr = 0x820D783C;
	sub_820B7D18(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d20
	ctx.lr = 0x820D7848;
	sub_820B7D20(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d28
	ctx.lr = 0x820D7854;
	sub_820B7D28(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d30
	ctx.lr = 0x820D7860;
	sub_820B7D30(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d38
	ctx.lr = 0x820D786C;
	sub_820B7D38(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d40
	ctx.lr = 0x820D7878;
	sub_820B7D40(ctx, base);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d48
	ctx.lr = 0x820D7884;
	sub_820B7D48(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d50
	ctx.lr = 0x820D7890;
	sub_820B7D50(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d58
	ctx.lr = 0x820D789C;
	sub_820B7D58(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b7d60
	ctx.lr = 0x820D78A8;
	sub_820B7D60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,2744(r31)
	REX_STORE_U32(ctx.r31.u32 + 2744, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2788(r31)
	REX_STORE_U32(ctx.r31.u32 + 2788, ctx.r30.u32);
	// stw r11,4488(r31)
	REX_STORE_U32(ctx.r31.u32 + 4488, ctx.r11.u32);
	// stw r11,4492(r31)
	REX_STORE_U32(ctx.r31.u32 + 4492, ctx.r11.u32);
	// stw r30,4500(r31)
	REX_STORE_U32(ctx.r31.u32 + 4500, ctx.r30.u32);
	// stw r30,4508(r31)
	REX_STORE_U32(ctx.r31.u32 + 4508, ctx.r30.u32);
	// stw r11,4504(r31)
	REX_STORE_U32(ctx.r31.u32 + 4504, ctx.r11.u32);
	// stw r30,4528(r31)
	REX_STORE_U32(ctx.r31.u32 + 4528, ctx.r30.u32);
	// bl 0x820b85d0
	ctx.lr = 0x820D78D4;
	sub_820B85D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c28
	ctx.lr = 0x820D78E0;
	sub_82091C28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a5d78
	ctx.lr = 0x820D78E8;
	sub_820A5D78(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D99D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,5252(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820d99b8
	if (ctx.cr6.gt) {
		sub_820D99B8(ctx, base);
		return;
	}
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-26120
	ctx.r12.s64 = ctx.r12.s64 + -26120;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D9A20;
	case 1:
		goto loc_820D9A20;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D9A20:
	// lwz r10,4284(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9a40
	if (ctx.cr6.eq) goto loc_820D9A40;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x820d9a40
	if (ctx.cr6.eq) goto loc_820D9A40;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x820d9a4c
	if (!ctx.cr6.eq) goto loc_820D9A4C;
loc_820D9A40:
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9a5c
	if (ctx.cr6.eq) goto loc_820D9A5C;
loc_820D9A4C:
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820d99b4
	// ERROR: conditional branch to unknown address 0x820D99B4
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9A58 to 0x820D99B4");
loc_820D9A5C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DAF68) {
	REX_FUNC_PROLOGUE();
	// lwz r16,-20568(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20568);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20496(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20496);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20460(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20460);
	// lwz r16,-20568(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20568);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20496(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20496);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20460(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20460);
	// lwz r16,-19980(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -19980);
	// lwz r16,-20568(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20568);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20496(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20496);
	// lwz r16,-20532(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20532);
	// lwz r16,-20460(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -20460);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x820db08c
	if (ctx.cr6.lt) goto loc_820DB08C;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x820db1a8
	if (ctx.cr6.eq) goto loc_820DB1A8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_820DB08C:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x820db1a8
	if (ctx.cr6.eq) goto loc_820DB1A8;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_820DB1A8:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E5310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820E5318;
	__savegprlr_26(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,804(r1)
	REX_STORE_U32(ctx.r1.u32 + 804, ctx.r3.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// li r3,1796
	ctx.r3.s64 = 1796;
	// stw r31,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x820e6110
	ctx.lr = 0x820E534C;
	sub_820E6110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e5490
	if (ctx.cr0.lt) goto loc_820E5490;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e6198
	ctx.lr = 0x820E5374;
	sub_820E6198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e5490
	if (ctx.cr0.lt) goto loc_820E5490;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82374cb4
	ctx.lr = 0x820E538C;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e5490
	if (ctx.cr0.lt) goto loc_820E5490;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82374ce4
	ctx.lr = 0x820E539C;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r3.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// addi r26,r1,148
	ctx.r26.s64 = ctx.r1.s64 + 148;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// li r3,1796
	ctx.r3.s64 = 1796;
	// stw r26,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// bl 0x820e6270
	ctx.lr = 0x820E53E4;
	sub_820E6270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e5490
	if (ctx.cr0.lt) goto loc_820E5490;
	// addi r4,r1,804
	ctx.r4.s64 = ctx.r1.s64 + 804;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e48a0
	ctx.lr = 0x820E53F8;
	sub_820E48A0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e48a0
	ctx.lr = 0x820E5404;
	sub_820E48A0(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x820e48a0
	ctx.lr = 0x820E5410;
	sub_820E48A0(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e6368
	ctx.lr = 0x820E5434;
	sub_820E6368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e5490
	if (ctx.cr0.lt) goto loc_820E5490;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,252
	ctx.r3.s64 = 252;
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// std r31,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r31.u64);
	// std r31,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r31.u64);
	// std r31,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r31.u64);
	// std r31,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r31.u64);
	// std r31,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r31.u64);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82374cc4
	ctx.lr = 0x820E5488;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820e54bc
	if (!ctx.cr0.lt) goto loc_820E54BC;
loc_820E5490:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e54a4
	if (ctx.cr6.eq) goto loc_820E54A4;
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// b 0x820e54a8
	goto loc_820E54A8;
loc_820E54A4:
	// bl 0x820e9900
	ctx.lr = 0x820E54A8;
	sub_820E9900(ctx, base);
loc_820E54A8:
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e54e0
	if (ctx.cr6.eq) goto loc_820E54E0;
	// bl 0x82374c94
	ctx.lr = 0x820E54B8;
	__imp__XamFree(ctx, base);
	// b 0x820e54e0
	goto loc_820E54E0;
loc_820E54BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x820e54cc
	if (ctx.cr6.eq) goto loc_820E54CC;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x820e54e0
	goto loc_820E54E0;
loc_820E54CC:
	// bl 0x820e9950
	ctx.lr = 0x820E54D0;
	sub_820E9950(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_820E54E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E7750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x820e7774
	if (!ctx.cr6.lt) goto loc_820E7774;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
	// blr 
	return;
loc_820E7774:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x820e77c8
	if (ctx.cr6.eq) goto loc_820E77C8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
loc_820E7790:
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820e77b0
	if (ctx.cr6.eq) goto loc_820E77B0;
	// lhz r8,2(r10)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r8,24,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r11,r8,8,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x820e77b4
	goto loc_820E77B4;
loc_820E77B0:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
loc_820E77B4:
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bdnz 0x820e7790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E7790;
loc_820E77C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8230) {
	REX_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x820e8178
	sub_820E8178(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8248) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820E8250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82374cf4
	ctx.lr = 0x820E8264;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8201
	ctx.r11.s64 = 537460736;
	// ori r11,r11,27392
	ctx.r11.u64 = ctx.r11.u64 | 27392;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x820e82c0
	if (!ctx.cr6.lt) goto loc_820E82C0;
	// cmplwi cr6,r30,255
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 255, ctx.xer);
	// bne cr6,0x820e82b0
	if (!ctx.cr6.eq) goto loc_820E82B0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_820E8280:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82374e14
	ctx.lr = 0x820E8288;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820e82a0
	if (ctx.cr6.eq) goto loc_820E82A0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x820e8280
	if (ctx.cr6.lt) goto loc_820E8280;
	// b 0x820e82c0
	goto loc_820E82C0;
loc_820E82A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1245
	ctx.r3.s64 = 1245;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x820e82d0
	goto loc_820E82D0;
loc_820E82B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374e14
	ctx.lr = 0x820E82B8;
	__imp__XamUserGetSigninState(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820e82a0
	if (ctx.cr6.eq) goto loc_820E82A0;
loc_820E82C0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82374d94
	ctx.lr = 0x820E82D0;
	__imp__XamUserCheckPrivilege(ctx, base);
loc_820E82D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E94B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,1840
	ctx.r11.s64 = ctx.r11.s64 + 1840;
loc_820E94C0:
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x820e9514
	if (!ctx.cr6.eq) goto loc_820E9514;
	// clrlwi. r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x820e9504
	if (ctx.cr0.eq) goto loc_820E9504;
	// addi r7,r5,-1
	ctx.r7.s64 = ctx.r5.s64 + -1;
	// addi r9,r4,-2
	ctx.r9.s64 = ctx.r4.s64 + -2;
loc_820E94E4:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x820e9504
	if (!ctx.cr6.lt) goto loc_820E9504;
	// lhz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// sthu r31,2(r9)
	ea = 2 + ctx.r9.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r9.u32 = ea;
	// blt cr6,0x820e94e4
	if (ctx.cr6.lt) goto loc_820E94E4;
loc_820E9504:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r4
	REX_STORE_U16(ctx.r10.u32 + ctx.r4.u32, ctx.r9.u16);
	// b 0x820e951c
	goto loc_820E951C;
loc_820E9514:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_820E951C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x820e94c0
	if (!ctx.cr6.gt) goto loc_820E94C0;
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EB5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820EB5D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,24340
	ctx.r29.s64 = ctx.r11.s64 + 24340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823751a4
	ctx.lr = 0x820EB5F0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r31,r11,24368
	ctx.r31.s64 = ctx.r11.s64 + 24368;
	// lwz r11,24368(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24368);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x820eb628
	if (ctx.cr6.eq) goto loc_820EB628;
loc_820EB608:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x820eb608
	if (!ctx.cr6.eq) goto loc_820EB608;
loc_820EB628:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82375194
	ctx.lr = 0x820EB630;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820ECC88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x820ECC90;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subf r10,r7,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r7.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// addi r11,r4,87
	ctx.r11.s64 = ctx.r4.s64 + 87;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// rlwinm r30,r11,0,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// addze r26,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r26.s64 = temp.s64;
	// bne cr6,0x820eccd4
	if (!ctx.cr6.eq) goto loc_820ECCD4;
	// lhz r22,0(r3)
	ctx.r22.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// b 0x820eccd8
	goto loc_820ECCD8;
loc_820ECCD4:
	// li r22,0
	ctx.r22.s64 = 0;
loc_820ECCD8:
	// subf r10,r31,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r31.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// clrlwi r24,r10,16
	ctx.r24.u64 = ctx.r10.u32 & 0xFFFF;
	// blt cr6,0x820ecd40
	if (ctx.cr6.lt) goto loc_820ECD40;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x820ecd00
	if (ctx.cr6.lt) goto loc_820ECD00;
loc_820ECCF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ecde8
	goto loc_820ECDE8;
loc_820ECD00:
	// subf r11,r8,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r8.u64;
	// lwz r7,1424(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 1424);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,236
	ctx.r3.s64 = ctx.r1.s64 + 236;
	// bl 0x823751e4
	ctx.lr = 0x820ECD28;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820eccf8
	if (ctx.cr0.lt) goto loc_820ECCF8;
	// lwz r10,236(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
loc_820ECD40:
	// subf r11,r8,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r8.u64;
	// sth r22,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r22.u16);
	// rlwinm r10,r26,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// sth r24,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r25,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lis r9,-18
	ctx.r9.s64 = -1179648;
	// stw r23,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r29,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// ori r9,r9,65518
	ctx.r9.u64 = ctx.r9.u64 | 65518;
	// stw r30,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stb r7,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r7.u8);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r26,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// beq 0x820ecda8
	if (ctx.cr0.eq) goto loc_820ECDA8;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ebd70
	ctx.lr = 0x820ECDA4;
	sub_820EBD70(ctx, base);
	// lwz r8,236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
loc_820ECDA8:
	// clrlwi r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// subf r9,r30,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r30.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r5,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwx r31,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r31.u32);
	// lhz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 0);
	// stb r10,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stb r25,4(r30)
	REX_STORE_U8(ctx.r30.u32 + 4, ctx.r25.u8);
	// sth r11,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r11.u16);
	// bl 0x820ec528
	ctx.lr = 0x820ECDE4;
	sub_820EC528(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_820ECDE8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F1468) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x820f149c
	if (!ctx.cr6.lt) goto loc_820F149C;
	// fneg f12,f1
	ctx.f12.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-12964(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12964);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,4688(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 4688);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmul f10,f11,f13
	ctx.f10.f64 = ctx.f11.f64 * ctx.f13.f64;
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// blr 
	return;
loc_820F149C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,4688(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4688);
	// fmul f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 * ctx.f0.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F1EF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215eb70
	ctx.lr = 0x820F1F08;
	__savefpr_14(ctx, base);
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,32(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,36(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f7,40(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f13,f12
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// lfs f5,44(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f2,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f13,f11
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f30,48(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f13,f7
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f29,52(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f0,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f25,56(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f25.f64 = double(temp.f32);
	// lfs f24,60(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 60);
	ctx.f24.f64 = double(temp.f32);
	// fmadds f10,f30,f2,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f30.f64, ctx.f2.f64, ctx.f10.f64)));
	// lfs f9,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f29,f2,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f29.f64, ctx.f2.f64, ctx.f8.f64)));
	// lfs f23,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f6,f0,f30,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f0.f64, ctx.f30.f64, ctx.f6.f64)));
	// lfs f21,16(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f4,f25,f2,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f25.f64, ctx.f2.f64, ctx.f4.f64)));
	// lfs f22,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f3,f24,f2,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f24.f64, ctx.f2.f64, ctx.f3.f64)));
	// lfs f2,20(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f2.f64 = double(temp.f32);
	// fmadds f1,f0,f29,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, ctx.f1.f64)));
	// lfs f19,24(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f31,f0,f25,f31
	ctx.f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f25.f64, ctx.f31.f64)));
	// lfs f27,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f27.f64 = double(temp.f32);
	// fmadds f0,f0,f24,f13
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f24.f64, ctx.f13.f64)));
	// lfs f13,28(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f9,f12
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f30,-176(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// fmuls f26,f9,f11
	ctx.f26.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lfs f18,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f18.f64 = double(temp.f32);
	// fmadds f10,f21,f23,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f21.f64, ctx.f23.f64, ctx.f10.f64)));
	// lfs f16,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f16.f64 = double(temp.f32);
	// fmadds f8,f2,f23,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f2.f64, ctx.f23.f64, ctx.f8.f64)));
	// lfs f15,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f15.f64 = double(temp.f32);
	// fmadds f6,f22,f21,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f22.f64, ctx.f21.f64, ctx.f6.f64)));
	// stfs f29,-172(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmadds f4,f19,f23,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f19.f64, ctx.f23.f64, ctx.f4.f64)));
	// lfs f17,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f17.f64 = double(temp.f32);
	// fmadds f3,f13,f23,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f23.f64, ctx.f3.f64)));
	// lfs f20,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f20.f64 = double(temp.f32);
	// fmadds f1,f22,f2,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f22.f64, ctx.f2.f64, ctx.f1.f64)));
	// lfs f23,12(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f31,f22,f19,f31
	ctx.f31.f64 = double(float(std::fma(ctx.f22.f64, ctx.f19.f64, ctx.f31.f64)));
	// lfs f14,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f14.f64 = double(temp.f32);
	// fmadds f0,f22,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f22.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f22,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f22.f64 = double(temp.f32);
	// fmadds f28,f27,f30,f28
	ctx.f28.f64 = double(float(std::fma(ctx.f27.f64, ctx.f30.f64, ctx.f28.f64)));
	// lfs f30,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f26,f27,f29,f26
	ctx.f26.f64 = double(float(std::fma(ctx.f27.f64, ctx.f29.f64, ctx.f26.f64)));
	// stfs f30,-164(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// lfs f30,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f10,f16,f18,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f16.f64, ctx.f18.f64, ctx.f10.f64)));
	// stfs f30,-168(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// fmadds f8,f15,f18,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f15.f64, ctx.f18.f64, ctx.f8.f64)));
	// lfs f29,8(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f6,f17,f16,f6
	ctx.f6.f64 = double(float(std::fma(ctx.f17.f64, ctx.f16.f64, ctx.f6.f64)));
	// lfs f30,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f30.f64 = double(temp.f32);
	// fmadds f4,f29,f18,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f29.f64, ctx.f18.f64, ctx.f4.f64)));
	// stfs f10,0(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f3,f23,f18,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f23.f64, ctx.f18.f64, ctx.f3.f64)));
	// stfs f8,4(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f1,f17,f15,f1
	ctx.f1.f64 = double(float(std::fma(ctx.f17.f64, ctx.f15.f64, ctx.f1.f64)));
	// fmadds f10,f17,f29,f31
	ctx.f10.f64 = double(float(std::fma(ctx.f17.f64, ctx.f29.f64, ctx.f31.f64)));
	// stfs f6,16(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f4,8(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f8,f17,f23,f0
	ctx.f8.f64 = double(float(std::fma(ctx.f17.f64, ctx.f23.f64, ctx.f0.f64)));
	// stfs f3,12(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmadds f28,f20,f21,f28
	ctx.f28.f64 = double(float(std::fma(ctx.f20.f64, ctx.f21.f64, ctx.f28.f64)));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmadds f26,f20,f2,f26
	ctx.f26.f64 = double(float(std::fma(ctx.f20.f64, ctx.f2.f64, ctx.f26.f64)));
	// stfs f10,24(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f0,f22,f12
	ctx.f0.f64 = double(float(ctx.f22.f64 * ctx.f12.f64));
	// stfs f8,28(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmuls f1,f9,f5
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// fmuls f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// fmuls f12,f22,f11
	ctx.f12.f64 = double(float(ctx.f22.f64 * ctx.f11.f64));
	// fmuls f11,f22,f7
	ctx.f11.f64 = double(float(ctx.f22.f64 * ctx.f7.f64));
	// lfs f7,-176(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -176);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f22,f5
	ctx.f10.f64 = double(float(ctx.f22.f64 * ctx.f5.f64));
	// lfs f5,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f6,f14,f16,f28
	ctx.f6.f64 = double(float(std::fma(ctx.f14.f64, ctx.f16.f64, ctx.f28.f64)));
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f4,f14,f15,f26
	ctx.f4.f64 = double(float(std::fma(ctx.f14.f64, ctx.f15.f64, ctx.f26.f64)));
	// stfs f4,36(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// fmadds f6,f30,f7,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f30.f64, ctx.f7.f64, ctx.f0.f64)));
	// fmadds f8,f27,f24,f1
	ctx.f8.f64 = double(float(std::fma(ctx.f27.f64, ctx.f24.f64, ctx.f1.f64)));
	// fmadds f9,f27,f25,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f27.f64, ctx.f25.f64, ctx.f3.f64)));
	// fmadds f4,f30,f5,f12
	ctx.f4.f64 = double(float(std::fma(ctx.f30.f64, ctx.f5.f64, ctx.f12.f64)));
	// fmadds f3,f30,f25,f11
	ctx.f3.f64 = double(float(std::fma(ctx.f30.f64, ctx.f25.f64, ctx.f11.f64)));
	// lfs f11,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f1,f30,f24,f10
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f24.f64, ctx.f10.f64)));
	// fmadds f10,f11,f21,f6
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f21.f64, ctx.f6.f64)));
	// fmadds f12,f20,f13,f8
	ctx.f12.f64 = double(float(std::fma(ctx.f20.f64, ctx.f13.f64, ctx.f8.f64)));
	// fmadds f0,f20,f19,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f20.f64, ctx.f19.f64, ctx.f9.f64)));
	// fmadds f9,f11,f2,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f11.f64, ctx.f2.f64, ctx.f4.f64)));
	// lfs f4,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f11,f19,f3
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f19.f64, ctx.f3.f64)));
	// fmadds f7,f11,f13,f1
	ctx.f7.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f1.f64)));
	// fmadds f3,f4,f16,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f4.f64, ctx.f16.f64, ctx.f10.f64)));
	// stfs f3,48(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// fmadds f5,f14,f23,f12
	ctx.f5.f64 = double(float(std::fma(ctx.f14.f64, ctx.f23.f64, ctx.f12.f64)));
	// stfs f5,44(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// fmadds f6,f14,f29,f0
	ctx.f6.f64 = double(float(std::fma(ctx.f14.f64, ctx.f29.f64, ctx.f0.f64)));
	// stfs f6,40(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// fmadds f2,f4,f15,f9
	ctx.f2.f64 = double(float(std::fma(ctx.f4.f64, ctx.f15.f64, ctx.f9.f64)));
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// fmadds f1,f4,f29,f8
	ctx.f1.f64 = double(float(std::fma(ctx.f4.f64, ctx.f29.f64, ctx.f8.f64)));
	// stfs f1,56(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// fmadds f0,f4,f23,f7
	ctx.f0.f64 = double(float(std::fma(ctx.f4.f64, ctx.f23.f64, ctx.f7.f64)));
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215ebbc
	ctx.lr = 0x820F20F0;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F78C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820F78C8;
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
	// bne cr6,0x820f7928
	if (!ctx.cr6.eq) goto loc_820F7928;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x820ef558
	ctx.lr = 0x820F7910;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7920
	if (ctx.cr6.eq) goto loc_820F7920;
	// bl 0x820f6bf8
	ctx.lr = 0x820F791C;
	sub_820F6BF8(ctx, base);
	// b 0x820f7924
	goto loc_820F7924;
loc_820F7920:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7924:
	// stw r3,-30156(r31)
	REX_STORE_U32(ctx.r31.u32 + -30156, ctx.r3.u32);
loc_820F7928:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x820fa8e8
	ctx.lr = 0x820F7930;
	sub_820FA8E8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7978
	if (ctx.cr6.eq) goto loc_820F7978;
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
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F7968;
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
loc_820F7978:
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

DEFINE_REX_FUNC(sub_820F8E30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820F8E38;
	__savegprlr_27(ctx, base);
	// lwz r9,268(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// lwz r7,264(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// rlwinm r8,r4,17,15,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFF8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lvx128 v63,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,300(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// and r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 & ctx.r11.u64;
	// lwz r7,256(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r28,296(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// vor128 v11,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r29,0(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v9,r30,r4
	ea = (ctx.r30.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// andc r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r11.u64;
	// and r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 & ctx.r3.u64;
	// lvx128 v7,r30,r5
	ea = (ctx.r30.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lvx128 v12,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r30,r27,5600
	ctx.r30.s64 = ctx.r27.s64 + 5600;
	// lwz r27,4(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// vmrghw128 v62,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// rlwinm r10,r7,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0x7;
	// vmrghw128 v61,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// vmrglw128 v60,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v12.u32), simde_mm_load_si128((simde__m128i*)ctx.v9.u32)));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// vmrglw128 v59,v63,v7
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v7.u32), simde_mm_load_si128((simde__m128i*)ctx.v63.u32)));
	// andc r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// rlwinm r29,r7,2,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFF0;
	// vmrghw128 v10,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// rlwinm r8,r31,28,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0x3FFF;
	// vmrglw128 v8,v62,v61
	simde_mm_store_si128((simde__m128i*)ctx.v8.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), simde_mm_load_si128((simde__m128i*)ctx.v62.u32)));
	// addi r3,r3,5632
	ctx.r3.s64 = ctx.r3.s64 + 5632;
	// vmrghw128 v6,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v6.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// rlwinm r31,r31,31,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7;
	// vmrglw128 v13,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v13.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v59.u32)));
	// and r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 & ctx.r11.u64;
	// lvx128 v0,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r7,r27,4,12,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFF0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// vsel v5,v11,v10,v0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8))));
	// lbzx r3,r31,r3
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + ctx.r3.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// vsel v11,v9,v8,v0
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v8.u8))));
	// vsel v10,v7,v6,v0
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v6.u8))));
	// or r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 | ctx.r10.u64;
	// vsel v0,v12,v13,v0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// stbx r10,r8,r9
	REX_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u8);
	// stvx128 v5,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v5.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r5
	ea = (ctx.r11.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v0,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v0.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FEEB0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20000, ctx.xer);
	// blt cr6,0x820feedc
	if (ctx.cr6.lt) goto loc_820FEEDC;
loc_820FEED4:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// b 0x820fef3c
	goto loc_820FEF3C;
loc_820FEEDC:
	// li r3,520
	ctx.r3.s64 = 520;
	// bl 0x820ef558
	ctx.lr = 0x820FEEE4;
	sub_820EF558(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820feed4
	if (ctx.cr6.eq) goto loc_820FEED4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,4760
	ctx.r9.s64 = ctx.r11.s64 + 4760;
	// stw r10,508(r3)
	REX_STORE_U32(ctx.r3.u32 + 508, ctx.r10.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// ld r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// bl 0x820fde58
	ctx.lr = 0x820FEF10;
	sub_820FDE58(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// stw r30,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// addi r4,r31,536
	ctx.r4.s64 = ctx.r31.s64 + 536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820fee58
	ctx.lr = 0x820FEF2C;
	sub_820FEE58(ctx, base);
	// ld r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// std r10,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
loc_820FEF3C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

DEFINE_REX_FUNC(sub_820FFE28) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFE80) {
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
	// addi r9,r11,6160
	ctx.r9.s64 = ctx.r11.s64 + 6160;
	// addi r8,r10,6128
	ctx.r8.s64 = ctx.r10.s64 + 6128;
	// clrlwi r7,r4,31
	ctx.r7.u64 = ctx.r4.u32 & 0x1;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820ffec0
	if (ctx.cr6.eq) goto loc_820FFEC0;
	// bl 0x8215e470
	ctx.lr = 0x820FFEBC;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FFEC0:
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

DEFINE_REX_FUNC(sub_82100DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82100DC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100e44
	if (ctx.cr6.eq) goto loc_82100E44;
	// lwz r10,-4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// addi r27,r3,-4
	ctx.r27.s64 = ctx.r3.s64 + -4;
	// mulli r11,r10,152
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(152));
	// addic. r29,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r29.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blt 0x82100e24
	if (ctx.cr0.lt) goto loc_82100E24;
	// addi r31,r11,96
	ctx.r31.s64 = ctx.r11.s64 + 96;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,6176
	ctx.r30.s64 = ctx.r11.s64 + 6176;
loc_82100E00:
	// addi r31,r31,-152
	ctx.r31.s64 = ctx.r31.s64 + -152;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,-96(r31)
	REX_STORE_U32(ctx.r31.u32 + -96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100e1c
	if (ctx.cr6.eq) goto loc_82100E1C;
	// bl 0x8210f568
	ctx.lr = 0x82100E18;
	sub_8210F568(ctx, base);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82100E1C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82100e00
	if (!ctx.cr0.lt) goto loc_82100E00;
loc_82100E24:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100e38
	if (ctx.cr6.eq) goto loc_82100E38;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8210f568
	ctx.lr = 0x82100E38;
	sub_8210F568(ctx, base);
loc_82100E38:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_82100E44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r3,96(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r11,6176
	ctx.r10.s64 = ctx.r11.s64 + 6176;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82100e68
	if (ctx.cr6.eq) goto loc_82100E68;
	// bl 0x8210f568
	ctx.lr = 0x82100E60;
	sub_8210F568(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_82100E68:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82100e7c
	if (ctx.cr6.eq) goto loc_82100E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e470
	ctx.lr = 0x82100E7C;
	sub_8215E470(ctx, base);
loc_82100E7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82105D78) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,7204
	ctx.r10.s64 = ctx.r11.s64 + 7204;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82105F90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82105F98;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82105fc4
	if (!ctx.cr6.eq) goto loc_82105FC4;
loc_82105FB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82105FC4:
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82105fb4
	if (ctx.cr6.eq) goto loc_82105FB4;
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// ble cr6,0x82105fe0
	if (!ctx.cr6.gt) goto loc_82105FE0;
	// li r30,6
	ctx.r30.s64 = 6;
loc_82105FE0:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82105FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r31,228(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// ble cr6,0x82106008
	if (!ctx.cr6.gt) goto loc_82106008;
	// li r31,6
	ctx.r31.s64 = 6;
loc_82106008:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210602C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,40(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,32(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821061bc
	if (ctx.cr6.lt) goto loc_821061BC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x8210621c
	if (!ctx.cr6.lt) goto loc_8210621C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f31,f12
	ctx.cr6.compare(ctx.f31.f64, ctx.f12.f64);
	// bge cr6,0x82106114
	if (!ctx.cr6.lt) goto loc_82106114;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2392(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82106068
	if (!ctx.cr6.lt) goto loc_82106068;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82106068:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82106088
	if (!ctx.cr6.eq) goto loc_82106088;
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,84(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x821060a0
	goto loc_821060A0;
loc_82106088:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x821060a4
	if (!ctx.cr6.eq) goto loc_821060A4;
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f11,92(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_821060A0:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_821060A4:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bgt cr6,0x821061f4
	if (ctx.cr6.gt) goto loc_821061F4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x821060dc
	if (!ctx.cr6.eq) goto loc_821060DC;
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x821061f4
	goto loc_821061F4;
loc_821060DC:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x821061f4
	if (!ctx.cr6.eq) goto loc_821061F4;
	// fsubs f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,108(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f11,116(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// b 0x821061f4
	goto loc_821061F4;
loc_82106114:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82106128
	if (!ctx.cr6.gt) goto loc_82106128;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_82106128:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82106138
	if (!ctx.cr6.eq) goto loc_82106138;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x8210614c
	goto loc_8210614C;
loc_82106138:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82106154
	if (!ctx.cr6.eq) goto loc_82106154;
	// stfs f12,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_8210614C:
	// fsubs f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82106154:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bgt cr6,0x821061f4
	if (ctx.cr6.gt) goto loc_821061F4;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// bne cr6,0x82106184
	if (!ctx.cr6.eq) goto loc_82106184;
	// fsubs f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x821061f4
	goto loc_821061F4;
loc_82106184:
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// bne cr6,0x821061f4
	if (!ctx.cr6.eq) goto loc_821061F4;
	// fsubs f13,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x821061f4
	goto loc_821061F4;
loc_821061BC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821061f4
	if (!ctx.cr6.gt) goto loc_821061F4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,-4
	ctx.r11.s64 = ctx.r9.s64 + -4;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lfs f0,2280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
loc_821061E8:
	// stfsu f0,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821061e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821061E8;
loc_821061F4:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210621C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210621C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210E490) {
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
	// addi r9,r11,7180
	ctx.r9.s64 = ctx.r11.s64 + 7180;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8210e4c4
	if (ctx.cr6.eq) goto loc_8210E4C4;
	// bl 0x8215e470
	ctx.lr = 0x8210E4C0;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210E4C4:
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

DEFINE_REX_FUNC(sub_8210E798) {
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
	// addi r9,r11,7264
	ctx.r9.s64 = ctx.r11.s64 + 7264;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x8210e7cc
	if (ctx.cr6.eq) goto loc_8210E7CC;
	// bl 0x8215e470
	ctx.lr = 0x8210E7C8;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210E7CC:
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

DEFINE_REX_FUNC(sub_8210F1E8) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,7340
	ctx.r10.s64 = ctx.r11.s64 + 7340;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f220
	if (ctx.cr6.eq) goto loc_8210F220;
	// bl 0x8215e470
	ctx.lr = 0x8210F220;
	sub_8215E470(ctx, base);
loc_8210F220:
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// beq cr6,0x8210f248
	if (ctx.cr6.eq) goto loc_8210F248;
	// bl 0x8215e470
	ctx.lr = 0x8210F244;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210F248:
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

DEFINE_REX_FUNC(sub_8210FEE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8210FEF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// addi r30,r3,120
	ctx.r30.s64 = ctx.r3.s64 + 120;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8210ff70
	if (ctx.cr6.eq) goto loc_8210FF70;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210ff34
	if (ctx.cr6.eq) goto loc_8210FF34;
loc_8210FF1C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8215e470
	ctx.lr = 0x8210FF24;
	sub_8215E470(ctx, base);
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8210ff1c
	if (!ctx.cr6.eq) goto loc_8210FF1C;
loc_8210FF34:
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8210ff64
	if (ctx.cr6.eq) goto loc_8210FF64;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8215f200
	ctx.lr = 0x8210FF5C;
	sub_8215F200(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_8210FF64:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_8210FF70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82113C70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// b 0x820e7fe8
	sub_820E7FE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82114160) {
	REX_FUNC_PROLOGUE();
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r8,20(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,24(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82114250) {
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
	// lwz r3,308(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 308);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8217c500
	ctx.lr = 0x82114278;
	sub_8217C500(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

DEFINE_REX_FUNC(sub_82115A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82115A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8216b018
	ctx.lr = 0x82115A74;
	sub_8216B018(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82115a8c
	if (!ctx.cr0.eq) goto loc_82115A8C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82115b18
	goto loc_82115B18;
loc_82115A8C:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8216b018
	ctx.lr = 0x82115A98;
	sub_8216B018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82115abc
	if (!ctx.cr6.eq) goto loc_82115ABC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82115b04
	goto loc_82115B04;
loc_82115ABC:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82115938
	ctx.lr = 0x82115AD0;
	sub_82115938(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82115aec
	if (ctx.cr0.lt) goto loc_82115AEC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x82115afc
	goto loc_82115AFC;
loc_82115AEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8216b138
	ctx.lr = 0x82115AFC;
	sub_8216B138(ctx, base);
loc_82115AFC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82115b28
	if (!ctx.cr6.lt) goto loc_82115B28;
loc_82115B04:
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8216b138
	ctx.lr = 0x82115B10;
	sub_8216B138(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82115b28
	if (!ctx.cr6.lt) goto loc_82115B28;
loc_82115B18:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82115B28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82116C40) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lwz r11,396(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 396);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// stw r11,48(r4)
	REX_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821175E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821175E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8211760c
	goto loc_8211760C;
loc_821175F4:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r9,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
loc_8211760C:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821175f4
	if (!ctx.cr6.eq) goto loc_821175F4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r28,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r28.u32);
	// beq cr6,0x82117664
	if (ctx.cr6.eq) goto loc_82117664;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_82117634:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82117654
	if (ctx.cr6.eq) goto loc_82117654;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117654
	if (ctx.cr6.eq) goto loc_82117654;
	// bl 0x82118bc8
	ctx.lr = 0x82117650;
	sub_82118BC8(ctx, base);
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
loc_82117654:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82117634
	if (!ctx.cr6.eq) goto loc_82117634;
loc_82117664:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82118E00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// clrlwi r6,r4,16
	ctx.r6.u64 = ctx.r4.u32 & 0xFFFF;
	// li r11,128
	ctx.r11.s64 = 128;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82120100
	ctx.lr = 0x82118E40;
	sub_82120100(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82118E68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82119830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821198b4
	if (ctx.cr6.eq) goto loc_821198B4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
loc_82119848:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821198a4
	if (ctx.cr6.eq) goto loc_821198A4;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_82119858:
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfsx f13,r8,r6
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r7
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r10,r4
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, temp.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82119858
	if (ctx.cr6.lt) goto loc_82119858;
loc_821198A4:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82119848
	if (ctx.cr6.lt) goto loc_82119848;
loc_821198B4:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8211B538) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r4,96
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x8211b558
	if (!ctx.cr0.eq) goto loc_8211B558;
	// lwz r11,64(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
loc_8211B558:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8211b594
	if (ctx.cr0.eq) goto loc_8211B594;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r9,5,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211b584
	if (ctx.cr6.lt) goto loc_8211B584;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8211b59c
	goto loc_8211B59C;
loc_8211B584:
	// rlwinm r9,r9,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8211b59c
	goto loc_8211B59C;
loc_8211B594:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,10,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1F;
loc_8211B59C:
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lhz r9,82(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 82);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211D060) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821196a0
	ctx.lr = 0x8211D088;
	sub_821196A0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8211d0bc
	if (ctx.cr6.eq) goto loc_8211D0BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,-140
	ctx.r3.s64 = ctx.r31.s64 + -140;
	// bl 0x8211ca80
	ctx.lr = 0x8211D09C;
	sub_8211CA80(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bge 0x8211d0bc
	if (!ctx.cr0.lt) goto loc_8211D0BC;
	// lwz r11,-88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -88);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211D0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8211D0BC:
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

DEFINE_REX_FUNC(sub_8211DBE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8211DBF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,472(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 472);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8211b5b8
	ctx.lr = 0x8211DC14;
	sub_8211B5B8(ctx, base);
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8211dc88
	if (!ctx.cr6.eq) goto loc_8211DC88;
	// lwz r4,64(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211dc88
	if (ctx.cr0.eq) goto loc_8211DC88;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211dce8
	if (ctx.cr6.eq) goto loc_8211DCE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,480(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_8211DC54:
	// add r7,r9,r29
	ctx.r7.u64 = ctx.r9.u64 + ctx.r29.u64;
	// lhzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// divwu r31,r7,r10
	ctx.r31.u64 = uint32_t(ctx.r10.u32 ? ctx.r7.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r31,r31,r10
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// subf r7,r31,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r31.u64;
	// mullw r7,r4,r7
	ctx.r7.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// sthx r8,r5,r7
	REX_STORE_U16(ctx.r5.u32 + ctx.r7.u32, ctx.r8.u16);
	// bdnz 0x8211dc54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211DC54;
	// b 0x8211dce8
	goto loc_8211DCE8;
loc_8211DC88:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8211dce8
	if (ctx.cr6.eq) goto loc_8211DCE8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,484(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// lwz r6,64(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// lwz r4,480(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 480);
loc_8211DCB0:
	// add r11,r8,r29
	ctx.r11.u64 = ctx.r8.u64 + ctx.r29.u64;
	// lhz r31,2(r10)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// lhzu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r7.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// divwu r30,r11,r9
	ctx.r30.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// sthux r31,r11,r5
	ea = ctx.r11.u32 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r31.u16);
	ctx.r11.u32 = ea;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// bdnz 0x8211dcb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211DCB0;
loc_8211DCE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821203A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x821203B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82128280
	ctx.lr = 0x821203D0;
	sub_82128280(ctx, base);
	// rlwinm. r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r27,1030(r31)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r31.u32 + 1030);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r30,1048(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1048);
	// beq 0x82120428
	if (ctx.cr0.eq) goto loc_82120428;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821203f8
	if (ctx.cr6.eq) goto loc_821203F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821203fc
	goto loc_821203FC;
loc_821203F8:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
loc_821203FC:
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120410
	if (ctx.cr6.eq) goto loc_82120410;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82120424
	goto loc_82120424;
loc_82120410:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120424;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82120424:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82120428:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82120498
	if (ctx.cr6.lt) goto loc_82120498;
	// addi r3,r31,1028
	ctx.r3.s64 = ctx.r31.s64 + 1028;
	// lwz r28,68(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// bl 0x8211fd60
	ctx.lr = 0x8212043C;
	sub_8211FD60(ctx, base);
	// lhz r8,1042(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 1042);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,128
	ctx.r11.s64 = 128;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// sth r11,86(r1)
	REX_STORE_U16(ctx.r1.u32 + 86, ctx.r11.u16);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82120100
	ctx.lr = 0x82120468;
	sub_82120100(ctx, base);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// addi r8,r26,140
	ctx.r8.s64 = ctx.r26.s64 + 140;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82120498:
	// li r23,0
	ctx.r23.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r23,128(r1)
	REX_STORE_U16(ctx.r1.u32 + 128, ctx.r23.u16);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// bl 0x8215ec60
	ctx.lr = 0x821204B0;
	sub_8215EC60(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821208f4
	if (ctx.cr6.lt) goto loc_821208F4;
	// li r31,40
	ctx.r31.s64 = 40;
	// lwz r3,140(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821204DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,40
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 40, ctx.xer);
	// beq cr6,0x82120500
	if (ctx.cr6.eq) goto loc_82120500;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82120058
	ctx.lr = 0x82120500;
	sub_82120058(ctx, base);
loc_82120500:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,375
	ctx.r10.s64 = 375;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r11,r11,187
	ctx.r11.s64 = ctx.r11.s64 + 187;
	// divwu r10,r11,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// mulli r10,r10,375
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(375));
	// lwz r9,100(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 100);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82120530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821208ec
	if (ctx.cr0.lt) goto loc_821208EC;
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8212055c
	if (!ctx.cr6.eq) goto loc_8212055C;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120558
	if (ctx.cr6.eq) goto loc_82120558;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8212055c
	goto loc_8212055C;
loc_82120558:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
loc_8212055C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120574
	if (ctx.cr6.eq) goto loc_82120574;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// b 0x821205ac
	goto loc_821205AC;
loc_82120574:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120588
	if (ctx.cr6.eq) goto loc_82120588;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821205a8
	goto loc_821205A8;
loc_82120588:
	// lwz r3,132(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821205a8
	if (!ctx.cr6.eq) goto loc_821205A8;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821205A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821205A8:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_821205AC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8211fd60
	ctx.lr = 0x821205B4;
	sub_8211FD60(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r11,-3
	ctx.r10.s64 = ctx.r11.s64 + -3;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r24,r10,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x821205d8
	if (ctx.cr6.eq) goto loc_821205D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821205dc
	goto loc_821205DC;
loc_821205D8:
	// lwz r10,60(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
loc_821205DC:
	// lhz r9,130(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82120618
	if (!ctx.cr6.eq) goto loc_82120618;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821205f8
	if (ctx.cr6.eq) goto loc_821205F8;
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8212060c
	goto loc_8212060C;
loc_821205F8:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212060C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8212060C:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821206e8
	if (ctx.cr6.eq) goto loc_821206E8;
loc_82120618:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x821206e8
	if (!ctx.cr6.eq) goto loc_821206E8;
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r5,130(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 130);
	// addi r3,r11,592
	ctx.r3.s64 = ctx.r11.s64 + 592;
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,68(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// bl 0x821191f8
	ctx.lr = 0x8212063C;
	sub_821191F8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82120650
	if (!ctx.cr0.eq) goto loc_82120650;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82120970
	goto loc_82120970;
loc_82120650:
	// lwz r11,124(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 124);
	// lwz r28,4(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82120678
	if (!ctx.cr6.eq) goto loc_82120678;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120674
	if (ctx.cr6.eq) goto loc_82120674;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82120678
	goto loc_82120678;
loc_82120674:
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
loc_82120678:
	// lwz r7,128(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821206c0
	if (!ctx.cr6.eq) goto loc_821206C0;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212069c
	if (ctx.cr6.eq) goto loc_8212069C;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821206c0
	goto loc_821206C0;
loc_8212069C:
	// lwz r7,132(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821206c0
	if (!ctx.cr6.eq) goto loc_821206C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821206BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_821206C0:
	// addi r10,r26,148
	ctx.r10.s64 = ctx.r26.s64 + 148;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82126dd8
	ctx.lr = 0x821206E0;
	sub_82126DD8(ctx, base);
	// lwz r27,148(r26)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821206E8:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821208f4
	if (ctx.cr6.lt) goto loc_821208F4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// beq cr6,0x821207e4
	if (ctx.cr6.eq) goto loc_821207E4;
	// bl 0x82119580
	ctx.lr = 0x82120704;
	sub_82119580(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821208ec
	if (ctx.cr0.lt) goto loc_821208EC;
	// stw r23,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r23.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r4,r10,8256
	ctx.r4.s64 = ctx.r10.s64 + 8256;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120740;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212075C;
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
	ctx.lr = 0x82120770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,52(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// lwz r11,128(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r27,4(r25)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r28,176(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 176);
	// bne cr6,0x821207c0
	if (!ctx.cr6.eq) goto loc_821207C0;
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212079c
	if (ctx.cr6.eq) goto loc_8212079C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821207c0
	goto loc_821207C0;
loc_8212079C:
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821207c0
	if (!ctx.cr6.eq) goto loc_821207C0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821207BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_821207C0:
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r9,4919
	ctx.r9.s64 = 322371584;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r30,r9,61441
	ctx.r30.u64 = ctx.r9.u64 | 61441;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82120814
	goto loc_82120814;
loc_821207E4:
	// bl 0x82119460
	ctx.lr = 0x821207E8;
	sub_82119460(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821208ec
	if (ctx.cr0.lt) goto loc_821208EC;
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// lis r10,4919
	ctx.r10.s64 = 322371584;
	// lwz r6,4(r25)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// ori r30,r10,61441
	ctx.r30.u64 = ctx.r10.u64 | 61441;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82120814:
	// addi r31,r26,144
	ctx.r31.s64 = ctx.r26.s64 + 144;
	// lwz r7,140(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 140);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8212082C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120848;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821208f4
	if (ctx.cr6.lt) goto loc_821208F4;
	// lwz r11,148(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82120878
	if (ctx.cr6.eq) goto loc_82120878;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120874;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82120878:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x821208f4
	if (ctx.cr6.lt) goto loc_821208F4;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120898;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821208ec
	if (ctx.cr0.lt) goto loc_821208EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821267c0
	ctx.lr = 0x821208AC;
	sub_821267C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x821208ec
	if (ctx.cr0.lt) goto loc_821208EC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821208CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,176(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821208E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_821208EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82120970
	if (ctx.cr6.eq) goto loc_82120970;
loc_821208F4:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82120970
	if (ctx.cr6.eq) goto loc_82120970;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82120970
	if (ctx.cr6.eq) goto loc_82120970;
	// srawi r11,r28,16
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 16;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmpwi cr6,r11,2198
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2198, ctx.xer);
	// beq cr6,0x82120970
	if (ctx.cr6.eq) goto loc_82120970;
	// lis r11,-30600
	ctx.r11.s64 = -2005401600;
	// ori r11,r11,120
	ctx.r11.u64 = ctx.r11.u64 | 120;
	// subf. r11,r11,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82120968
	if (ctx.cr0.eq) goto loc_82120968;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82120968
	if (ctx.cr6.eq) goto loc_82120968;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82120968
	if (ctx.cr6.eq) goto loc_82120968;
	// lis r10,30
	ctx.r10.s64 = 1966080;
	// ori r10,r10,65417
	ctx.r10.u64 = ctx.r10.u64 | 65417;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82120970
	if (!ctx.cr6.eq) goto loc_82120970;
	// lis r28,-30570
	ctx.r28.s64 = -2003435520;
	// ori r28,r28,3
	ctx.r28.u64 = ctx.r28.u64 | 3;
	// b 0x82120970
	goto loc_82120970;
loc_82120968:
	// lis r28,-30570
	ctx.r28.s64 = -2003435520;
	// ori r28,r28,4
	ctx.r28.u64 = ctx.r28.u64 | 4;
loc_82120970:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82132AF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82132a08
	sub_82132A08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82132B70) {
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
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,26304
	ctx.r11.s64 = ctx.r11.s64 + 26304;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82133ca0
	ctx.lr = 0x82132BA8;
	sub_82133CA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82132bb8
	if (ctx.cr0.eq) goto loc_82132BB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x82132BB8;
	sub_82118BC8(ctx, base);
loc_82132BB8:
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

DEFINE_REX_FUNC(sub_82133090) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821330b4
	if (ctx.cr6.eq) goto loc_821330B4;
	// cmpwi cr6,r4,-2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -2, ctx.xer);
	// bne cr6,0x821330d0
	if (!ctx.cr6.eq) goto loc_821330D0;
loc_821330B4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821330d8
	if (ctx.cr6.eq) goto loc_821330D8;
	// bl 0x8216b158
	ctx.lr = 0x821330C4;
	sub_8216B158(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821330d8
	if (ctx.cr6.eq) goto loc_821330D8;
loc_821330D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821330dc
	goto loc_821330DC;
loc_821330D8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821330DC:
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

DEFINE_REX_FUNC(sub_82133F98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82133FA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82133090
	ctx.lr = 0x82133FBC;
	sub_82133090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82133fe0
	if (ctx.cr0.eq) goto loc_82133FE0;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8213404c
	goto loc_8213404C;
loc_82133FE0:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x821160e0
	ctx.lr = 0x82133FFC;
	sub_821160E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82134010
	if (!ctx.cr0.eq) goto loc_82134010;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x8213404c
	goto loc_8213404C;
loc_82134010:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r27,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82134168
	ctx.lr = 0x8213403C;
	sub_82134168(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8213404c
	if (!ctx.cr0.lt) goto loc_8213404C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x8213404C;
	sub_82118BC8(ctx, base);
loc_8213404C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82135288) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82135290;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r11,-31228(r8)
	REX_STORE_U32(ctx.r8.u32 + -31228, ctx.r11.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,32
	ctx.r7.s64 = 32;
	// ori r6,r6,48000
	ctx.r6.u64 = ctx.r6.u64 | 48000;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821202c0
	ctx.lr = 0x821352CC;
	sub_821202C0(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821353dc
	if (ctx.cr0.eq) goto loc_821353DC;
	// lhz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// rotlwi r4,r11,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r4,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r4.u32);
	// addi r3,r10,-17520
	ctx.r3.s64 = ctx.r10.s64 + -17520;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// bl 0x821160e0
	ctx.lr = 0x821352FC;
	sub_821160E0(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821353dc
	if (ctx.cr0.eq) goto loc_821353DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82134b90
	ctx.lr = 0x82135314;
	sub_82134B90(ctx, base);
	// stw r3,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821353dc
	if (ctx.cr0.eq) goto loc_821353DC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821353dc
	if (ctx.cr6.eq) goto loc_821353DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82134b90
	ctx.lr = 0x82135334;
	sub_82134B90(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821353dc
	if (ctx.cr0.eq) goto loc_821353DC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821353dc
	if (ctx.cr6.eq) goto loc_821353DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82134b90
	ctx.lr = 0x82135354;
	sub_82134B90(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821353dc
	if (ctx.cr0.eq) goto loc_821353DC;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821353dc
	if (ctx.cr6.eq) goto loc_821353DC;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82375324
	ctx.lr = 0x82135370;
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r29,r11,-25340
	ctx.r29.s64 = ctx.r11.s64 + -25340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823751a4
	ctx.lr = 0x82135380;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r31,-32189
	ctx.r31.s64 = -2109538304;
	// lwz r11,-16056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821353a4
	if (!ctx.cr6.eq) goto loc_821353A4;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-25356
	ctx.r3.s64 = ctx.r11.s64 + -25356;
	// bl 0x82375314
	ctx.lr = 0x821353A0;
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// lwz r11,-16056(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -16056);
loc_821353A4:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-16088
	ctx.r10.s64 = ctx.r10.s64 + -16088;
	// stw r11,-16056(r31)
	REX_STORE_U32(ctx.r31.u32 + -16056, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_821353BC:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821353e8
	if (ctx.cr6.eq) goto loc_821353E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x821353bc
	if (ctx.cr6.lt) goto loc_821353BC;
	// b 0x821353f0
	goto loc_821353F0;
loc_821353DC:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82135404
	goto loc_82135404;
loc_821353E8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
loc_821353F0:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// bl 0x82375194
	ctx.lr = 0x82135400;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82375304
	ctx.lr = 0x82135404;
	__imp__KeLeaveCriticalRegion(ctx, base);
loc_82135404:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8213D5B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8213D5C0;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r31,12(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r9,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r9.u32);
	// lfs f13,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.f12.u64);
	// lwz r9,-204(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -204);
	// extsw r11,r9
	ctx.r11.s64 = ctx.r9.s32;
	// std r11,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r11.u64);
	// lfd f11,-208(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// rlwinm r6,r9,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfs f12,26824(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 26824);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,-208(r1)
	REX_STORE_U32(ctx.r1.u32 + -208, ctx.r31.u32);
	// lwz r31,4(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f0,-208(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -208);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,28(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// fsubs f11,f13,f9
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// beq cr6,0x8213d700
	if (ctx.cr6.eq) goto loc_8213D700;
	// lhz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + 8);
	// lhz r28,10(r8)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r8.u32 + 10);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r29,2(r8)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r8.u32 + 2);
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// extsh r9,r28
	ctx.r9.s64 = ctx.r28.s16;
	// lhz r26,6(r8)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r8.u32 + 6);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lfd f13,-208(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lhz r27,4(r8)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r8.u32 + 4);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// std r9,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r9.u64);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// extsh r9,r26
	ctx.r9.s64 = ctx.r26.s16;
	// std r29,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r29.u64);
	// extsh r6,r27
	ctx.r6.s64 = ctx.r27.s16;
	// lfd f9,-192(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// std r9,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r9.u64);
	// lfd f10,-200(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// lfd f7,-192(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// lfd f5,-200(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f8,-208(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f13,f8
	ctx.f13.f64 = double(ctx.f8.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// fcfid f4,f10
	ctx.f4.f64 = double(ctx.f10.s64);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// frsp f5,f13
	ctx.f5.f64 = double(float(ctx.f13.f64));
	// frsp f10,f6
	ctx.f10.f64 = double(float(ctx.f6.f64));
	// frsp f9,f4
	ctx.f9.f64 = double(float(ctx.f4.f64));
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f4,f10,f12
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f4,12(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmuls f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f3,0(r10)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f2,8(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmuls f1,f7,f12
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f13,f6,f12
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f13,16(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmuls f10,f5,f12
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// stfs f10,20(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 20, temp.u32);
loc_8213D700:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lfs f13,2280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f13.f64 = double(temp.f32);
	// bge cr6,0x8213d814
	if (!ctx.cr6.lt) goto loc_8213D814;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8213D714:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8213da54
	if (!ctx.cr6.lt) goto loc_8213DA54;
	// addi r29,r11,-6
	ctx.r29.s64 = ctx.r11.s64 + -6;
	// addi r28,r11,-5
	ctx.r28.s64 = ctx.r11.s64 + -5;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r26,r11,2
	ctx.r26.s64 = ctx.r11.s64 + 2;
	// addi r25,r11,-3
	ctx.r25.s64 = ctx.r11.s64 + -3;
	// lfsx f9,r29,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r24,r11,3
	ctx.r24.s64 = ctx.r11.s64 + 3;
	// lfsx f8,r28,r10
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r23,r11,-2
	ctx.r23.s64 = ctx.r11.s64 + -2;
	// lfsx f7,r27,r10
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// lfs f6,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// addi r21,r11,5
	ctx.r21.s64 = ctx.r11.s64 + 5;
	// lfs f3,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f4,f6,f9
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// fsubs f1,f3,f8
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f10,-4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r29,r23,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r22,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r21,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f6,r26,r10
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r25,r10
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f6,f7
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// lfsx f3,r24,r10
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// lfsx f2,r29,r10
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f3,f3,f5
	ctx.f3.f64 = double(float(ctx.f3.f64 - ctx.f5.f64));
	// lfsx f31,r28,r10
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	ctx.f31.f64 = double(temp.f32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lfsx f30,r27,r10
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f31,f31,f2
	ctx.f31.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// fsubs f30,f30,f10
	ctx.f30.f64 = double(float(ctx.f30.f64 - ctx.f10.f64));
	// fmadds f9,f4,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmadds f8,f1,f0,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f7,f6,f0,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f7.f64)));
	// stfsu f7,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f6,f3,f0,f5
	ctx.f6.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f5.f64)));
	// stfsu f6,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f5,f31,f0,f2
	ctx.f5.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f2.f64)));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f4,f30,f0,f10
	ctx.f4.f64 = double(float(std::fma(ctx.f30.f64, ctx.f0.f64, ctx.f10.f64)));
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8213d80c
	if (ctx.cr6.lt) goto loc_8213D80C;
loc_8213D7FC:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213d7fc
	if (!ctx.cr6.lt) goto loc_8213D7FC;
loc_8213D80C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8213d714
	if (ctx.cr6.lt) goto loc_8213D714;
loc_8213D814:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8213da54
	if (!ctx.cr6.lt) goto loc_8213DA54;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
loc_8213D824:
	// rlwinm r6,r11,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,-5
	ctx.r29.s64 = ctx.r11.s64 + -5;
	// addi r31,r11,-6
	ctx.r31.s64 = ctx.r11.s64 + -6;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// addi r27,r11,2
	ctx.r27.s64 = ctx.r11.s64 + 2;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r29,r29,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// addi r25,r11,-3
	ctx.r25.s64 = ctx.r11.s64 + -3;
	// lhz r23,2(r6)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r6.u32 + 2);
	// addi r24,r11,3
	ctx.r24.s64 = ctx.r11.s64 + 3;
	// lhzx r31,r31,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// lhzx r28,r28,r8
	ctx.r28.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// extsh r23,r23
	ctx.r23.s64 = ctx.r23.s16;
	// lhzx r27,r27,r8
	ctx.r27.u64 = REX_LOAD_U16(ctx.r27.u32 + ctx.r8.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhz r26,0(r6)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// extsh r26,r26
	ctx.r26.s64 = ctx.r26.s16;
	// subf r23,r29,r23
	ctx.r23.u64 = ctx.r23.u64 - ctx.r29.u64;
	// subf r26,r31,r26
	ctx.r26.u64 = ctx.r26.u64 - ctx.r31.u64;
	// subf r27,r28,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r28.u64;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// extsw r23,r23
	ctx.r23.s64 = ctx.r23.s32;
	// std r31,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r31.u64);
	// extsw r28,r28
	ctx.r28.s64 = ctx.r28.s32;
	// lfd f5,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// extsw r27,r27
	ctx.r27.s64 = ctx.r27.s32;
	// std r29,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r29.u64);
	// std r23,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r23.u64);
	// lfd f9,-200(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lfd f8,-208(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// std r28,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r28.u64);
	// std r27,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r27.u64);
	// lfd f7,-184(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// lfd f6,-176(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// rlwinm r29,r25,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// std r26,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r26.u64);
	// lfd f10,-192(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f3,f10
	ctx.f3.f64 = double(ctx.f10.s64);
	// rlwinm r31,r24,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// lhzx r31,r31,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// fcfid f2,f9
	ctx.f2.f64 = double(ctx.f9.s64);
	// lhzx r29,r29,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// fcfid f10,f7
	ctx.f10.f64 = double(ctx.f7.s64);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// fcfid f9,f6
	ctx.f9.f64 = double(ctx.f6.s64);
	// addi r7,r7,6
	ctx.r7.s64 = ctx.r7.s64 + 6;
	// frsp f6,f3
	ctx.f6.f64 = double(float(ctx.f3.f64));
	// subf r31,r29,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r29.u64;
	// extsw r28,r29
	ctx.r28.s64 = ctx.r29.s32;
	// extsw r31,r31
	ctx.r31.s64 = ctx.r31.s32;
	// std r28,-152(r1)
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.r28.u64);
	// std r31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.r31.u64);
	// lfd f7,-160(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// frsp f8,f4
	ctx.f8.f64 = double(float(ctx.f4.f64));
	// frsp f5,f2
	ctx.f5.f64 = double(float(ctx.f2.f64));
	// frsp f4,f1
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// frsp f3,f10
	ctx.f3.f64 = double(float(ctx.f10.f64));
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// fcfid f1,f7
	ctx.f1.f64 = double(ctx.f7.s64);
	// fmadds f10,f6,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f9,f5,f0,f4
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f4.f64)));
	// fmadds f8,f3,f0,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f3.f64, ctx.f0.f64, ctx.f2.f64)));
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// fmuls f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// stfs f6,0(r9)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmuls f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfsu f4,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r31,r11,5
	ctx.r31.s64 = ctx.r11.s64 + 5;
	// lhz r6,-2(r6)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r6.u32 + -2);
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
	// lfd f3,-152(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// fcfid f2,f3
	ctx.f2.f64 = double(ctx.f3.s64);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r28,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// lhzx r31,r31,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// add r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 + ctx.r11.u64;
	// extsw r27,r6
	ctx.r27.s64 = ctx.r6.s32;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// lhzx r29,r29,r8
	ctx.r29.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// std r27,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r27.u64);
	// subf r6,r6,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r6.u64;
	// lhzx r31,r28,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r28.u32 + ctx.r8.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// frsp f9,f2
	ctx.f9.f64 = double(float(ctx.f2.f64));
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// lfd f6,-136(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// subf r6,r29,r31
	ctx.r6.u64 = ctx.r31.u64 - ctx.r29.u64;
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// lfd f1,-144(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// extsw r31,r29
	ctx.r31.s64 = ctx.r29.s32;
	// fcfid f10,f1
	ctx.f10.f64 = double(ctx.f1.s64);
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// lfd f3,-120(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r31,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r31.u64);
	// lfd f5,-128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f9,f7,f0,f9
	ctx.f9.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f9.f64)));
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// frsp f7,f2
	ctx.f7.f64 = double(float(ctx.f2.f64));
	// frsp f6,f1
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// fmuls f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfsu f5,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fmadds f4,f7,f0,f8
	ctx.f4.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, ctx.f8.f64)));
	// fmadds f3,f6,f0,f10
	ctx.f3.f64 = double(float(std::fma(ctx.f6.f64, ctx.f0.f64, ctx.f10.f64)));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmuls f2,f4,f12
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fmuls f1,f3,f12
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfsu f1,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// stfsu f2,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// blt cr6,0x8213da4c
	if (ctx.cr6.lt) goto loc_8213DA4C;
loc_8213DA3C:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8213da3c
	if (!ctx.cr6.lt) goto loc_8213DA3C;
loc_8213DA4C:
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8213d824
	if (ctx.cr6.lt) goto loc_8213D824;
loc_8213DA54:
	// addi r9,r5,-6
	ctx.r9.s64 = ctx.r5.s64 + -6;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8213da64
	if (!ctx.cr6.lt) goto loc_8213DA64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_8213DA64:
	// subf r9,r5,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r5.u64;
	// stfs f0,-208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -208, temp.u32);
	// neg r6,r5
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r5.u64);
	// lwz r7,-208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -208);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// stw r7,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8213db34
	if (!ctx.cr6.lt) goto loc_8213DB34;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8213daf8
	if (ctx.cr6.lt) goto loc_8213DAF8;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r31,r6,-3
	ctx.r31.s64 = ctx.r6.s64 + -3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
loc_8213DABC:
	// lfs f0,12(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// add r30,r4,r11
	ctx.r30.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stfs f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lfsu f0,16(r7)
	ea = 16 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f0,8(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r30,r10
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfs f13,12(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// lfsx f11,r29,r10
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// blt cr6,0x8213dabc
	if (ctx.cr6.lt) goto loc_8213DABC;
loc_8213DAF8:
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8213db34
	if (!ctx.cr6.lt) goto loc_8213DB34;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r9,r11,r6
	ctx.r9.u64 = ctx.r6.u64 - ctx.r11.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r4,r7,-4
	ctx.r4.s64 = ctx.r7.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r7,r6,-4
	ctx.r7.s64 = ctx.r6.s64 + -4;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_8213DB28:
	// lfsu f0,4(r7)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r7.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r7.u32 = ea;
	// stfsu f0,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x8213db28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213DB28;
loc_8213DB34:
	// neg r9,r11
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// blt cr6,0x8213dc0c
	if (ctx.cr6.lt) goto loc_8213DC0C;
	// subfic r7,r11,-4
	ctx.xer.ca = ctx.r11.u32 <= 4294967292;
	ctx.r7.u64 = static_cast<uint64_t>(-4) - ctx.r11.u64;
	// add r9,r11,r5
	ctx.r9.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r7,r7,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r4,r9,-3
	ctx.r4.s64 = ctx.r9.s64 + -3;
	// add r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r5,2
	ctx.r4.s64 = ctx.r5.s64 + 2;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r3,r5,3
	ctx.r3.s64 = ctx.r5.s64 + 3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r7,r6,r8
	ctx.r7.u64 = ctx.r6.u64 + ctx.r8.u64;
loc_8213DB74:
	// lhz r30,6(r7)
	ctx.r30.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lhzu r6,8(r7)
	ea = 8 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r7.u32 = ea;
	// add r29,r4,r11
	ctx.r29.u64 = ctx.r4.u64 + ctx.r11.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// std r6,-136(r1)
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.r6.u64);
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lfd f10,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// std r6,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r6.u64);
	// frsp f3,f9
	ctx.f3.f64 = double(float(ctx.f9.f64));
	// lhzx r31,r31,r8
	ctx.r31.u64 = REX_LOAD_U16(ctx.r31.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhzx r30,r29,r8
	ctx.r30.u64 = REX_LOAD_U16(ctx.r29.u32 + ctx.r8.u32);
	// extsh r6,r31
	ctx.r6.s64 = ctx.r31.s16;
	// std r6,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.r6.u64);
	// extsh r6,r30
	ctx.r6.s64 = ctx.r30.s16;
	// lfd f11,-128(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f5,f11
	ctx.f5.f64 = double(ctx.f11.s64);
	// lfd f0,-120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// std r6,-144(r1)
	REX_STORE_U64(ctx.r1.u32 + -144, ctx.r6.u64);
	// lfd f7,-144(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f8,f13
	ctx.f8.f64 = double(float(ctx.f13.f64));
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// stfs f13,8(r9)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmuls f2,f8,f12
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmuls f0,f4,f12
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// stfs f0,12(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// fmuls f11,f1,f12
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f12.f64));
	// stfsu f11,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8213db74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213DB74;
loc_8213DC0C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8213dc5c
	if (!ctx.cr6.lt) goto loc_8213DC5C;
	// add r7,r11,r5
	ctx.r7.u64 = ctx.r11.u64 + ctx.r5.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r6,r11
	ctx.r6.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r9,-2
	ctx.r11.s64 = ctx.r9.s64 + -2;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8213DC38:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// std r8,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.r8.u64);
	// lfd f0,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfsu f10,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8213dc38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213DC38;
loc_8213DC5C:
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214FAB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x8214FAB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,32(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r25,48(r30)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r28,40(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r26,36(r30)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r29,28(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8214fc04
	if (!ctx.cr6.gt) goto loc_8214FC04;
	// lis r11,-32239
	ctx.r11.s64 = -2112815104;
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// addi r9,r11,15408
	ctx.r9.s64 = ctx.r11.s64 + 15408;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8214fb68
	if (!ctx.cr6.eq) goto loc_8214FB68;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x8214fb34
	if (ctx.cr6.gt) goto loc_8214FB34;
loc_8214FB0C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214fb34
	if (ctx.cr6.eq) goto loc_8214FB34;
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r26,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// or r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x8214fb0c
	if (!ctx.cr6.gt) goto loc_8214FB0C;
loc_8214FB34:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214fbdc
	if (ctx.cr6.eq) goto loc_8214FBDC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8214FB4C:
	// lbz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// rlwinm r10,r27,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// or r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bdnz 0x8214fb4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214FB4C;
	// b 0x8214fbdc
	goto loc_8214FBDC;
loc_8214FB68:
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// bgt cr6,0x8214fba4
	if (ctx.cr6.gt) goto loc_8214FBA4;
loc_8214FB70:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214fba4
	if (ctx.cr6.eq) goto loc_8214FBA4;
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FB88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// rlwimi r3,r26,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// ble cr6,0x8214fb70
	if (!ctx.cr6.gt) goto loc_8214FB70;
loc_8214FBA4:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8214fbdc
	if (ctx.cr6.eq) goto loc_8214FBDC;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8214FBB8:
	// lwz r11,84(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lbz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8214FBC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwimi r3,r27,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bne 0x8214fbb8
	if (!ctx.cr0.eq) goto loc_8214FBB8;
loc_8214FBDC:
	// stw r26,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// stw r28,40(r30)
	REX_STORE_U32(ctx.r30.u32 + 40, ctx.r28.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// stw r25,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r25.u32);
	// stw r27,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r27.u32);
	// bl 0x82145be0
	ctx.lr = 0x8214FC04;
	sub_82145BE0(ctx, base);
loc_8214FC04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82152A38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82152A40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r27,8(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lhz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bne cr6,0x82152a88
	if (!ctx.cr6.eq) goto loc_82152A88;
	// lhz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// lhz r10,18(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r10,r9,r10
	ctx.r10.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// b 0x82152a90
	goto loc_82152A90;
loc_82152A88:
	// lhz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 12);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
loc_82152A90:
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152ab4
	if (ctx.cr6.eq) goto loc_82152AB4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82152AB4:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152AC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151d80
	ctx.lr = 0x82152AD0;
	sub_82151D80(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82152b0c
	if (ctx.cr0.lt) goto loc_82152B0C;
	// lwz r11,264(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152b00
	if (ctx.cr6.eq) goto loc_82152B00;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152B00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82152B00:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82152b58
	if (!ctx.cr6.lt) goto loc_82152B58;
loc_82152B0C:
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82152b3c
	if (ctx.cr6.eq) goto loc_82152B3C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82152B3C:
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82152B50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82151d80
	ctx.lr = 0x82152B58;
	sub_82151D80(ctx, base);
loc_82152B58:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821599C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x821599D0;
	__savegprlr_18(ctx, base);
	// lhz r11,110(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 110);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// vspltisw v0,0
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// slw r4,r10,r6
	ctx.r4.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// lfs f0,2280(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r11.u64);
	// lfd f13,-192(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r7,0
	ctx.r7.s64 = 0;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// fdivs f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f0,-136(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// stfs f0,-132(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// beq cr6,0x82159ccc
	if (ctx.cr6.eq) goto loc_82159CCC;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// beq cr6,0x82159aac
	if (ctx.cr6.eq) goto loc_82159AAC;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82159f18
	if (!ctx.cr6.gt) goto loc_82159F18;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82159A44:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82159a94
	if (!ctx.cr6.gt) goto loc_82159A94;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82159A60:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82159a60
	if (ctx.cr6.lt) goto loc_82159A60;
loc_82159A94:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82159a44
	if (ctx.cr6.lt) goto loc_82159A44;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_82159AAC:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r6,r8,28
	ctx.r6.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cntlzw r4,r6
	ctx.r4.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// rlwinm r5,r4,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// lwz r10,60(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// extsh r27,r6
	ctx.r27.s64 = ctx.r6.s16;
	// lwz r9,1836(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1836);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subf r4,r27,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r27.u64;
	// extsh r26,r4
	ctx.r26.s64 = ctx.r4.s16;
	// beq cr6,0x82159c4c
	if (ctx.cr6.eq) goto loc_82159C4C;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82159c4c
	if (!ctx.cr6.gt) goto loc_82159C4C;
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,48
	ctx.r30.s64 = 48;
	// lvx128 v13,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82159B08:
	// addi r4,r11,5
	ctx.r4.s64 = ctx.r11.s64 + 5;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// addi r25,r11,7
	ctx.r25.s64 = ctx.r11.s64 + 7;
	// vor128 v62,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r23,r4,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v61,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v60,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r1,-192
	ctx.r21.s64 = ctx.r1.s64 + -192;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// lfsx f10,r23,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r11,6
	ctx.r31.s64 = ctx.r11.s64 + 6;
	// lfsx f6,r23,r9
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r9.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r23,r11,3
	ctx.r23.s64 = ctx.r11.s64 + 3;
	// lfsx f8,r25,r10
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r25,r9
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// rlwinm r25,r23,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r10
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r23,r1,-192
	ctx.r23.s64 = ctx.r1.s64 + -192;
	// lfsx f12,r6,r9
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lfsx f11,r24,r10
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r22,r1,-144
	ctx.r22.s64 = ctx.r1.s64 + -144;
	// lfsx f7,r24,r9
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r24,r11,2
	ctx.r24.s64 = ctx.r11.s64 + 2;
	// lfs f3,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r5,r1,-176
	ctx.r5.s64 = ctx.r1.s64 + -176;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r31,r10
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r1,-160
	ctx.r6.s64 = ctx.r1.s64 + -160;
	// stfs f11,-160(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// lfsx f5,r31,r9
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r1,-176
	ctx.r20.s64 = ctx.r1.s64 + -176;
	// lfs f2,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r18,r1,-144
	ctx.r18.s64 = ctx.r1.s64 + -144;
	// lfsx f13,r25,r10
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r19,r1,-160
	ctx.r19.s64 = ctx.r1.s64 + -160;
	// lfsx f1,r24,r10
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lfsx f12,r24,r9
	temp.u32 = REX_LOAD_U32(ctx.r24.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r25,r9
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// extsh r31,r4
	ctx.r31.s64 = ctx.r4.s16;
	// stfs f9,-144(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f8,-136(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stfs f5,-140(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// stfs f4,-132(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// stfs f3,-184(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// stfs f2,-180(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// stfs f1,-176(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// stfs f13,-168(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f12,-172(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// stfs f11,-164(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// lvx128 v9,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r21
	ea = (ctx.r21.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r5
	ea = (ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stfs f10,-152(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// stfs f7,-156(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// stfs f6,-148(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lvx128 v10,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v61,v10,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v61.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// vmaddcfp128 v62,v11,v62,v0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v62.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r8,r29
	ea = (ctx.r8.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v61,r0,r19
	ea = (ctx.r19.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v60,v9,v60,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v60.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v62,r8,r28
	ea = (ctx.r8.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r30
	ea = (ctx.r8.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v62,r0,r20
	ea = (ctx.r20.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	ea = (ctx.r23.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r18
	ea = (ctx.r18.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82159b08
	if (ctx.cr6.lt) goto loc_82159B08;
loc_82159C4C:
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// add r31,r11,r27
	ctx.r31.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82159f18
	if (!ctx.cr6.lt) goto loc_82159F18;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_82159C64:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82159cb4
	if (!ctx.cr6.gt) goto loc_82159CB4;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82159C80:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82159c80
	if (ctx.cr6.lt) goto loc_82159C80;
loc_82159CB4:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82159c64
	if (ctx.cr6.lt) goto loc_82159C64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_82159CCC:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r10,320(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r6,r11,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r10,60(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// subf r5,r6,r11
	ctx.r5.u64 = ctx.r11.u64 - ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// beq cr6,0x82159ea0
	if (ctx.cr6.eq) goto loc_82159EA0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82159ea0
	if (!ctx.cr6.gt) goto loc_82159EA0;
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,48
	ctx.r30.s64 = 48;
	// lvx128 v13,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_82159D20:
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,-192
	ctx.r27.s64 = ctx.r1.s64 + -192;
	// addi r26,r11,6
	ctx.r26.s64 = ctx.r11.s64 + 6;
	// lfsx f11,r4,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r25,r11,7
	ctx.r25.s64 = ctx.r11.s64 + 7;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,0(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r1,-192
	ctx.r26.s64 = ctx.r1.s64 + -192;
	// lfsx f10,r31,r10
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r31,r25,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,-192(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -192, temp.u32);
	// addi r25,r11,5
	ctx.r25.s64 = ctx.r11.s64 + 5;
	// stfs f12,-188(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -188, temp.u32);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stfs f11,-184(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -184, temp.u32);
	// addi r24,r1,-176
	ctx.r24.s64 = ctx.r1.s64 + -176;
	// stfs f10,-180(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -180, temp.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfsx f9,r4,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r23,r11,11
	ctx.r23.s64 = ctx.r11.s64 + 11;
	// lfsx f7,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// stvx128 v63,r0,r26
	ea = (ctx.r26.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f8,r31,r10
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r22,r11,8
	ctx.r22.s64 = ctx.r11.s64 + 8;
	// lfsx f6,r27,r10
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 9;
	// stfs f8,-164(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// rlwinm r4,r23,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f6,-172(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// rlwinm r26,r31,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f7,-176(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -176, temp.u32);
	// rlwinm r23,r22,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f9,-168(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// addi r25,r11,10
	ctx.r25.s64 = ctx.r11.s64 + 10;
	// lvx128 v12,r0,r24
	ea = (ctx.r24.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r28
	ea = (ctx.r8.u32 + ctx.r28.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f4,r4,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// lfsx f2,r26,r10
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi r22,r1,-160
	ctx.r22.s64 = ctx.r1.s64 + -160;
	// lfsx f3,r23,r10
	temp.u32 = REX_LOAD_U32(ctx.r23.u32 + ctx.r10.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r21,r11,13
	ctx.r21.s64 = ctx.r11.s64 + 13;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f5,r25,r10
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// stfs f5,-152(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// rlwinm r25,r21,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f2,-156(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// stfs f3,-160(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r24,r11,12
	ctx.r24.s64 = ctx.r11.s64 + 12;
	// stfs f4,-148(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// addi r20,r11,14
	ctx.r20.s64 = ctx.r11.s64 + 14;
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// addi r19,r11,15
	ctx.r19.s64 = ctx.r11.s64 + 15;
	// stvx128 v63,r8,r29
	ea = (ctx.r8.u32 + ctx.r29.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r27,r1,-144
	ctx.r27.s64 = ctx.r1.s64 + -144;
	// lfsx f1,r25,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stvx128 v63,r0,r22
	ea = (ctx.r22.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// rlwinm r4,r24,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r19,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r31,r6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r6.s32, ctx.xer);
	// lfsx f13,r9,r10
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-144
	ctx.r9.s64 = ctx.r1.s64 + -144;
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// vor128 v63,v13,v13
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v13.u8));
	// lfsx f12,r26,r10
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-144(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// stfs f1,-140(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// stfs f12,-132(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// lvx128 v12,r0,r27
	ea = (ctx.r27.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddcfp128 v63,v12,v63,v0
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)), simde_mm_load_ps(ctx.v0.f32)));
	// stvx128 v63,r8,r30
	ea = (ctx.r8.u32 + ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r8,64
	ctx.r8.s64 = ctx.r8.s64 + 64;
	// stvx128 v63,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blt cr6,0x82159d20
	if (ctx.cr6.lt) goto loc_82159D20;
loc_82159EA0:
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r4,r31
	ctx.r4.s64 = ctx.r31.s16;
	// add r31,r11,r6
	ctx.r31.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82159f18
	if (!ctx.cr6.lt) goto loc_82159F18;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
loc_82159EB8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82159f08
	if (!ctx.cr6.gt) goto loc_82159F08;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82159ED4:
	// lwz r9,320(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 320);
	// mulli r6,r11,1776
	ctx.r6.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(1776));
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lfsx f13,r9,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// lhz r9,34(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82159ed4
	if (ctx.cr6.lt) goto loc_82159ED4;
loc_82159F08:
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// extsh r4,r11
	ctx.r4.s64 = ctx.r11.s16;
	// cmpw cr6,r4,r31
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82159eb8
	if (ctx.cr6.lt) goto loc_82159EB8;
loc_82159F18:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_103) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82162AF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82162B00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82162980
	ctx.lr = 0x82162B18;
	sub_82162980(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82162b44
	if (ctx.cr0.eq) goto loc_82162B44;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82162b44
	if (!ctx.cr6.eq) goto loc_82162B44;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82162bbc
	goto loc_82162BBC;
loc_82162B44:
	// bl 0x82162980
	ctx.lr = 0x82162B48;
	sub_82162980(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x82162ba4
	if (!ctx.cr6.gt) goto loc_82162BA4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
loc_82162B5C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lbzu r3,1(r28)
	ea = 1 + ctx.r28.u32;
	ctx.r3.u64 = REX_LOAD_U8(ea);
	ctx.r28.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bl 0x82162a60
	ctx.lr = 0x82162B70;
	sub_82162A60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82162b9c
	if (!ctx.cr6.eq) goto loc_82162B9C;
	// bl 0x82162980
	ctx.lr = 0x82162B80;
	sub_82162980(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x82162ba4
	if (!ctx.cr6.eq) goto loc_82162BA4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x82162a60
	ctx.lr = 0x82162B9C;
	sub_82162A60(ctx, base);
loc_82162B9C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x82162b5c
	if (ctx.cr6.gt) goto loc_82162B5C;
loc_82162BA4:
	// bl 0x82162980
	ctx.lr = 0x82162BA8;
	sub_82162980(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82162bbc
	if (!ctx.cr6.eq) goto loc_82162BBC;
	// bl 0x82162980
	ctx.lr = 0x82162BB8;
	sub_82162980(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_82162BBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82166CA0) {
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
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82166ccc
	if (ctx.cr6.eq) goto loc_82166CCC;
	// ble cr6,0x82166cd8
	if (!ctx.cr6.gt) goto loc_82166CD8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bgt cr6,0x82166cd8
	if (ctx.cr6.gt) goto loc_82166CD8;
	// bl 0x82162980
	ctx.lr = 0x82166CC4;
	sub_82162980(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82166cd4
	goto loc_82166CD4;
loc_82166CCC:
	// bl 0x82162980
	ctx.lr = 0x82166CD0;
	sub_82162980(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
loc_82166CD4:
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82166CD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82167D18;
	__savegprlr_19(ctx, base);
	// lhz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// lhz r8,10(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 10);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi r11,r9,17
	ctx.r11.u64 = ctx.r9.u32 & 0x7FFF;
	// lwz r7,2(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 2);
	// lwz r6,6(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 6);
	// addi r20,r10,-21236
	ctx.r20.s64 = ctx.r10.s64 + -21236;
	// addi r30,r11,-16383
	ctx.r30.s64 = ctx.r11.s64 + -16383;
	// rotlwi r11,r8,16
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// rlwinm r19,r9,0,0,16
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000;
	// stw r7,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r7.u32);
	// cmpwi cr6,r30,-16383
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -16383, ctx.xer);
	// lwz r21,12(r20)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// stw r6,-148(r1)
	REX_STORE_U32(ctx.r1.u32 + -148, ctx.r6.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r11,-144(r1)
	REX_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// bne cr6,0x82167da0
	if (!ctx.cr6.eq) goto loc_82167DA0;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82167D68:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82167d88
	if (!ctx.cr6.eq) goto loc_82167D88;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82167d68
	if (ctx.cr6.lt) goto loc_82167D68;
	// b 0x821683d4
	goto loc_821683D4;
loc_82167D88:
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x821683d8
	goto loc_821683D8;
loc_82167DA0:
	// lwz r25,8(r20)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// addi r8,r1,-136
	ctx.r8.s64 = ctx.r1.s64 + -136;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r28,r1,-152
	ctx.r28.s64 = ctx.r1.s64 + -152;
	// addi r26,r25,-1
	ctx.r26.s64 = ctx.r25.s64 + -1;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// li r22,-1
	ctx.r22.s64 = -1;
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// addze r31,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r31.s64 = temp.s64;
	// stw r10,8(r8)
	REX_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// srawi r7,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 5;
	// rlwinm r27,r31,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r9,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// subfic r29,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r29.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82167eec
	if (ctx.cr0.eq) goto loc_82167EEC;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82167e58
	if (!ctx.cr0.eq) goto loc_82167E58;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82167eec
	if (!ctx.cr6.lt) goto loc_82167EEC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82167E38:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82167e58
	if (!ctx.cr6.eq) goto loc_82167E58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82167e38
	if (ctx.cr6.lt) goto loc_82167E38;
	// b 0x82167eec
	goto loc_82167EEC;
loc_82167E58:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82167e9c
	if (ctx.cr6.lt) goto loc_82167E9C;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82167ea0
	if (!ctx.cr6.lt) goto loc_82167EA0;
loc_82167E9C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82167EA0:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x82167eec
	if (ctx.cr0.lt) goto loc_82167EEC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82167EB8:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82167eec
	if (ctx.cr6.eq) goto loc_82167EEC;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82167edc
	if (ctx.cr6.lt) goto loc_82167EDC;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82167ee0
	if (!ctx.cr6.lt) goto loc_82167EE0;
loc_82167EDC:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82167EE0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82167eb8
	if (!ctx.cr0.lt) goto loc_82167EB8;
loc_82167EEC:
	// lwzx r10,r27,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	// slw r9,r22,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r29.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r27,r28
	REX_STORE_U32(ctx.r27.u32 + ctx.r28.u32, ctx.r10.u32);
	// bge cr6,0x82167f34
	if (!ctx.cr6.lt) goto loc_82167F34;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82167f34
	if (ctx.cr6.eq) goto loc_82167F34;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82167F2C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167F2C;
loc_82167F34:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82167f40
	if (ctx.cr6.eq) goto loc_82167F40;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82167F40:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82167f6c
	if (!ctx.cr6.lt) goto loc_82167F6C;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// b 0x821683d8
	goto loc_821683D8;
loc_82167F6C:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x82168254
	if (ctx.cr6.gt) goto loc_82168254;
	// subf r11,r24,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r24.u64;
	// addi r9,r1,-136
	ctx.r9.s64 = ctx.r1.s64 + -136;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r6,r1,-152
	ctx.r6.s64 = ctx.r1.s64 + -152;
	// addze r5,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r30,8(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r31,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r31.u32);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// slw r10,r27,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// stw r30,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r30.u32);
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
loc_82167FD4:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r9,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x82167fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167FD4;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82168014:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82168028
	if (ctx.cr6.lt) goto loc_82168028;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8216802c
	goto loc_8216802C;
loc_82168028:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_8216802C:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82168014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82168014;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addi r29,r1,-152
	ctx.r29.s64 = ctx.r1.s64 + -152;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r31,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// subfic r30,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r30.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// slw r11,r3,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216815c
	if (ctx.cr0.eq) goto loc_8216815C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// andc. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821680c4
	if (!ctx.cr0.eq) goto loc_821680C4;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8216815c
	if (!ctx.cr6.lt) goto loc_8216815C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821680A4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821680c4
	if (!ctx.cr6.eq) goto loc_821680C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x821680a4
	if (ctx.cr6.lt) goto loc_821680A4;
	// b 0x8216815c
	goto loc_8216815C;
loc_821680C4:
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r11,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 5;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r11,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r11.u64;
	// lwzx r11,r7,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// slw r6,r3,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82168108
	if (ctx.cr6.lt) goto loc_82168108;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8216810c
	if (!ctx.cr6.lt) goto loc_8216810C;
loc_82168108:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8216810C:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x8216815c
	if (ctx.cr0.lt) goto loc_8216815C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82168128:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8216815c
	if (ctx.cr6.eq) goto loc_8216815C;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8216814c
	if (ctx.cr6.lt) goto loc_8216814C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82168150
	if (!ctx.cr6.lt) goto loc_82168150;
loc_8216814C:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82168150:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82168128
	if (!ctx.cr0.lt) goto loc_82168128;
loc_8216815C:
	// lwzx r10,r28,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// slw r9,r22,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r30.u8 & 0x3F));
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stwx r10,r28,r29
	REX_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r10.u32);
	// bge cr6,0x821681a4
	if (!ctx.cr6.lt) goto loc_821681A4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821681a4
	if (ctx.cr6.eq) goto loc_821681A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8216819C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8216819c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216819C;
loc_821681A4:
	// addi r11,r21,1
	ctx.r11.s64 = ctx.r21.s64 + 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// addze r6,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r8,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 5;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// slw r9,r27,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_821681E0:
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 & ctx.r9.u64;
	// stw r3,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r3.u32);
	// srw r5,r5,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x821681e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821681E0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82168220:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82168234
	if (ctx.cr6.lt) goto loc_82168234;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82168238
	goto loc_82168238;
loc_82168234:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82168238:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82168220
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82168220;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x821683d8
	goto loc_821683D8;
loc_82168254:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82168324
	if (ctx.cr6.lt) goto loc_82168324;
	// addi r11,r1,-152
	ctx.r11.s64 = ctx.r1.s64 + -152;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// li r7,-1
	ctx.r7.s64 = -1;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r9,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r21.s32 >> 5;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r23,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r9,r1,-152
	ctx.r9.s64 = ctx.r1.s64 + -152;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// addi r10,r9,-4
	ctx.r10.s64 = ctx.r9.s64 + -4;
	// slw r9,r7,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r31,-152(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// oris r31,r31,32768
	ctx.r31.u64 = ctx.r31.u64 | 2147483648;
	// subfic r7,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r7.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// stw r31,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r31.u32);
loc_821682B0:
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r30,r31,r9
	ctx.r30.u64 = ctx.r31.u64 & ctx.r9.u64;
	// stw r30,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r30.u32);
	// srw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// or r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 | ctx.r8.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r8,-160(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// bdnz 0x821682b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821682B0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821682F0:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82168304
	if (ctx.cr6.lt) goto loc_82168304;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82168308
	goto loc_82168308;
loc_82168304:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82168308:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x821682f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821682F0;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x821683d8
	goto loc_821683D8;
loc_82168324:
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// lwz r7,-152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r9,20(r20)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// addze r3,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r3.s64 = temp.s64;
	// srawi r11,r21,5
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 5;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// stw r10,-152(r1)
	REX_STORE_U32(ctx.r1.u32 + -152, ctx.r10.u32);
	// addi r8,r1,-152
	ctx.r8.s64 = ctx.r1.s64 + -152;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r5,r9,r30
	ctx.r5.u64 = ctx.r9.u64 + ctx.r30.u64;
	// subf r11,r11,r21
	ctx.r11.u64 = ctx.r21.u64 - ctx.r11.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// subfic r6,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r6.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// addi r10,r8,-4
	ctx.r10.s64 = ctx.r8.s64 + -4;
loc_8216836C:
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// and r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 & ctx.r7.u64;
	// stw r31,-160(r1)
	REX_STORE_U32(ctx.r1.u32 + -160, ctx.r31.u32);
	// srw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r11.u8 & 0x3F));
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,-160(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -160);
	// slw r9,r9,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// bdnz 0x8216836c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8216836C;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,-144
	ctx.r7.s64 = ctx.r1.s64 + -144;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,-144
	ctx.r11.s64 = ctx.r1.s64 + -144;
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821683AC:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x821683c0
	if (ctx.cr6.lt) goto loc_821683C0;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821683c4
	goto loc_821683C4;
loc_821683C0:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_821683C4:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x821683ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821683AC;
loc_821683D4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_821683D8:
	// subfic r10,r21,31
	ctx.xer.ca = ctx.r21.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r21.u64;
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// subfic r9,r19,0
	ctx.xer.ca = ctx.r19.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r19.u64;
	// lwz r8,-152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -152);
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// bne cr6,0x82168414
	if (!ctx.cr6.eq) goto loc_82168414;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x8216841c
	goto loc_8216841C;
loc_82168414:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82168420
	if (!ctx.cr6.eq) goto loc_82168420;
loc_8216841C:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82168420:
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82180EB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82180EB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,10941(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 10941);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r30,15140(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 15140);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bne 0x82180ff4
	if (!ctx.cr0.eq) goto loc_82180FF4;
	// lbz r11,10940(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82180f4c
	if (ctx.cr0.eq) goto loc_82180F4C;
	// lwz r11,13728(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180ff4
	if (ctx.cr6.eq) goto loc_82180FF4;
	// lwz r11,152(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82180ff4
	if (!ctx.cr6.eq) goto loc_82180FF4;
	// subf r11,r30,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r30.u64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82180ff4
	if (ctx.cr0.eq) goto loc_82180FF4;
	// lwz r11,13752(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13752);
	// lwz r3,13748(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 13748);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82180f20
	if (ctx.cr6.lt) goto loc_82180F20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821818e8
	ctx.lr = 0x82180F20;
	sub_821818E8(ctx, base);
loc_82180F20:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = ctx.r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13748(r31)
	REX_STORE_U32(ctx.r31.u32 + 13748, ctx.r8.u32);
	// b 0x82180ff4
	goto loc_82180FF4;
loc_82180F4C:
	// lwz r11,13408(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13408);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180fb0
	if (ctx.cr6.eq) goto loc_82180FB0;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82180ff4
	if (ctx.cr0.eq) goto loc_82180FF4;
	// lwz r11,13580(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13580);
	// addi r3,r31,13568
	ctx.r3.s64 = ctx.r31.s64 + 13568;
	// lwz r10,13584(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 13584);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82180f98
	if (!ctx.cr6.gt) goto loc_82180F98;
	// bl 0x82180060
	ctx.lr = 0x82180F94;
	sub_82180060(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82180F98:
	// oris r10,r30,33024
	ctx.r10.u64 = ctx.r30.u64 | 2164260864;
	// stw r29,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13580(r31)
	REX_STORE_U32(ctx.r31.u32 + 13580, ctx.r9.u32);
	// b 0x82180ff4
	goto loc_82180FF4;
loc_82180FB0:
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180950
	ctx.lr = 0x82180FBC;
	sub_82180950(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r6,r30,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r30.u64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13568
	ctx.r8.s64 = ctx.r31.s64 + 13568;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180a90
	ctx.lr = 0x82180FF0;
	sub_82180A90(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82180FF4:
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82181020
	if (!ctx.cr6.gt) goto loc_82181020;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180290
	ctx.lr = 0x8218101C;
	sub_82180290(ctx, base);
	// b 0x82181030
	goto loc_82181030;
loc_82181020:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,15140(r31)
	REX_STORE_U32(ctx.r31.u32 + 15140, ctx.r11.u32);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82181030:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821853C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821853C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,64(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,0(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r27,4(r4)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r25,16(r4)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r22,40(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r26,8(r4)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bne cr6,0x821853fc
	if (!ctx.cr6.eq) goto loc_821853FC;
	// clrlwi r11,r26,26
	ctx.r11.u64 = ctx.r26.u32 & 0x3F;
	// b 0x8218540c
	goto loc_8218540C;
loc_821853FC:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82185414
	if (!ctx.cr6.eq) goto loc_82185414;
loc_8218540C:
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x82185428
	goto loc_82185428;
loc_82185414:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82185430
	if (!ctx.cr6.eq) goto loc_82185430;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_82185428:
	// ori r30,r30,262
	ctx.r30.u64 = ctx.r30.u64 | 262;
	// b 0x82185460
	goto loc_82185460;
loc_82185430:
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82185448
	if (!ctx.cr6.eq) goto loc_82185448;
	// lis r30,10280
	ctx.r30.s64 = 673710080;
	// b 0x8218545c
	goto loc_8218545C;
loc_82185448:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,438
	ctx.r11.u64 = ctx.r11.u64 | 438;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82185460
	if (!ctx.cr6.eq) goto loc_82185460;
	// lis r30,6184
	ctx.r30.s64 = 405274624;
loc_8218545C:
	// ori r30,r30,310
	ctx.r30.u64 = ctx.r30.u64 | 310;
loc_82185460:
	// clrlwi r23,r30,26
	ctx.r23.u64 = ctx.r30.u32 & 0x3F;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// cmplwi cr6,r23,50
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 50, ctx.xer);
	// bne cr6,0x82185478
	if (!ctx.cr6.eq) goto loc_82185478;
	// li r24,6
	ctx.r24.s64 = 6;
	// b 0x82185484
	goto loc_82185484;
loc_82185478:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// bne cr6,0x82185484
	if (!ctx.cr6.eq) goto loc_82185484;
	// li r24,54
	ctx.r24.s64 = 54;
loc_82185484:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823755a4
	ctx.lr = 0x8218548C;
	__imp__VdQueryVideoMode(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,21772
	ctx.r9.s64 = 21772;
	// lfs f0,2096(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2096);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stw r11,21760(r29)
	REX_STORE_U32(ctx.r29.u32 + 21760, ctx.r11.u32);
	// stw r11,21768(r29)
	REX_STORE_U32(ctx.r29.u32 + 21768, ctx.r11.u32);
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r29,r9
	REX_STORE_U32(ctx.r29.u32 + ctx.r9.u32, ctx.f0.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,21764(r29)
	REX_STORE_U32(ctx.r29.u32 + 21764, ctx.r11.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82185500
	if (!ctx.cr6.eq) goto loc_82185500;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170248
	ctx.lr = 0x821854EC;
	sub_82170248(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821854fc
	if (!ctx.cr0.eq) goto loc_821854FC;
loc_821854F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82185604
	goto loc_82185604;
loc_821854FC:
	// stw r3,15040(r29)
	REX_STORE_U32(ctx.r29.u32 + 15040, ctx.r3.u32);
loc_82185500:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8218553c
	if (!ctx.cr6.eq) goto loc_8218553C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170368
	ctx.lr = 0x82185524;
	sub_82170368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x821854f4
	if (ctx.cr0.eq) goto loc_821854F4;
	// stw r5,15044(r29)
	REX_STORE_U32(ctx.r29.u32 + 15044, ctx.r5.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216e6d0
	ctx.lr = 0x8218553C;
	sub_8216E6D0(ctx, base);
loc_8218553C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82185574
	if (ctx.cr6.eq) goto loc_82185574;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82170368
	ctx.lr = 0x82185560;
	sub_82170368(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x821854f4
	if (ctx.cr0.eq) goto loc_821854F4;
	// stw r4,15036(r29)
	REX_STORE_U32(ctx.r29.u32 + 15036, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216ea20
	ctx.lr = 0x82185574;
	sub_8216EA20(ctx, base);
loc_82185574:
	// addi r3,r29,13756
	ctx.r3.s64 = ctx.r29.s64 + 13756;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x82185584;
	sub_8215E640(ctx, base);
	// rlwinm r11,r30,0,2,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x3FFC0000;
	// lis r10,9360
	ctx.r10.s64 = 613416960;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821855a0
	if (ctx.cr6.eq) goto loc_821855A0;
	// oris r11,r23,10280
	ctx.r11.u64 = ctx.r23.u64 | 673710080;
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// stw r11,13820(r29)
	REX_STORE_U32(ctx.r29.u32 + 13820, ctx.r11.u32);
loc_821855A0:
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218b300
	ctx.lr = 0x821855AC;
	sub_8218B300(ctx, base);
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x821855dc
	if (ctx.cr6.eq) goto loc_821855DC;
	// cmplwi cr6,r24,54
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 54, ctx.xer);
	// beq cr6,0x821855dc
	if (ctx.cr6.eq) goto loc_821855DC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82182120
	ctx.lr = 0x821855C8;
	sub_82182120(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216e0a0
	ctx.lr = 0x821855D8;
	sub_8216E0A0(ctx, base);
	// b 0x821855f8
	goto loc_821855F8;
loc_821855DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82182168
	ctx.lr = 0x821855E8;
	sub_82182168(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216e170
	ctx.lr = 0x821855F8;
	sub_8216E170(ctx, base);
loc_821855F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16924(r29)
	REX_STORE_U32(ctx.r29.u32 + 16924, ctx.r11.u32);
loc_82185604:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218B8C8) {
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
	// addi r31,r3,23580
	ctx.r31.s64 = ctx.r3.s64 + 23580;
	// lwz r3,24172(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b910
	if (ctx.cr6.eq) goto loc_8218B910;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm. r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8218b908
	if (!ctx.cr0.eq) goto loc_8218B908;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823753e4
	ctx.lr = 0x8218B904;
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x8218b910
	goto loc_8218B910;
loc_8218B908:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8216b138
	ctx.lr = 0x8218B910;
	sub_8216B138(ctx, base);
loc_8218B910:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b948
	if (ctx.cr6.eq) goto loc_8218B948;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8218b93c
	if (ctx.cr6.lt) goto loc_8218B93C;
	// bne cr6,0x8218b948
	if (!ctx.cr6.eq) goto loc_8218B948;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8216b138
	ctx.lr = 0x8218B938;
	sub_8216B138(ctx, base);
	// b 0x8218b948
	goto loc_8218B948;
loc_8218B93C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823753e4
	ctx.lr = 0x8218B948;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8218B948:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218b984
	if (ctx.cr6.eq) goto loc_8218B984;
	// lwz r11,612(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 30;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8218b978
	if (ctx.cr6.lt) goto loc_8218B978;
	// bne cr6,0x8218b984
	if (!ctx.cr6.eq) goto loc_8218B984;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8216b138
	ctx.lr = 0x8218B974;
	sub_8216B138(ctx, base);
	// b 0x8218b984
	goto loc_8218B984;
loc_8218B978:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x823753e4
	ctx.lr = 0x8218B984;
	__imp__MmFreePhysicalMemory(ctx, base);
loc_8218B984:
	// li r5,620
	ctx.r5.s64 = 620;
	// lwz r30,616(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ec60
	ctx.lr = 0x8218B998;
	sub_8215EC60(ctx, base);
	// li r11,41
	ctx.r11.s64 = 41;
	// addi r10,r31,20
	ctx.r10.s64 = ctx.r31.s64 + 20;
	// stw r30,616(r31)
	REX_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218B9B0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8218b9b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218B9B0;
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

DEFINE_REX_FUNC(sub_8218ECF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8218ED00;
	__savegprlr_22(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f10,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// vspltisw128 v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u32, simde_mm_set1_epi32(int(0x0)));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lvsr v0,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,2096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2096);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-160
	ctx.r11.s64 = ctx.r1.s64 + -160;
	// lfs f0,-32396(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32396);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmadds f9,f1,f13,f0
	ctx.f9.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f0.f64)));
	// lfs f13,2280(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-160(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -160, temp.u32);
	// addi r10,r10,2048
	ctx.r10.s64 = ctx.r10.s64 + 2048;
	// lfs f12,-32400(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32400);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fdivs f13,f4,f10
	ctx.f13.f64 = double(float(ctx.f4.f64 / ctx.f10.f64));
	// stfs f13,-136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -136, temp.u32);
	// lfs f11,30112(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30112);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,-128
	ctx.r6.s64 = ctx.r1.s64 + -128;
	// vupkd3d128 v61,v60,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v60.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v61 = vTemp;
	// addi r8,r8,2064
	ctx.r8.s64 = ctx.r8.s64 + 2064;
	// lvx128 v58,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r7,2016
	ctx.r10.s64 = ctx.r7.s64 + 2016;
	// vor128 v63,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// vor128 v62,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// vpermwi128 v61,v61,171
	simde_mm_store_si128((simde__m128i*)ctx.v61.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x54));
	// fabs f10,f9
	ctx.f10.u64 = ctx.f9.u64 & ~0x8000000000000000;
	// li r5,8
	ctx.r5.s64 = 8;
	// lvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-160
	ctx.r8.s64 = ctx.r1.s64 + -160;
	// addi r9,r9,2000
	ctx.r9.s64 = ctx.r9.s64 + 2000;
	// lvx128 v55,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// li r10,4
	ctx.r10.s64 = 4;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r31,16
	ctx.r31.s64 = 16;
	// li r30,20
	ctx.r30.s64 = 20;
	// lvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// li r29,24
	ctx.r29.s64 = 24;
	// li r28,28
	ctx.r28.s64 = 28;
	// fmuls f12,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f13,-132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -132, temp.u32);
	// fctidz f13,f12
	ctx.f13.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f13,f13,f11,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f11.f64, -ctx.f10.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f9,f0,f13
	ctx.f0.f64 = ctx.f9.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-156(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -156, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-152(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -152, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-148(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -148, temp.u32);
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v54,v59,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v53,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v53.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vmsum4fp128 v58,v54,v58
	simde_mm_store_ps(ctx.v58.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v58.f32), 0xFF));
	// vspltw128 v52,v54,3
	simde_mm_store_si128((simde__m128i*)ctx.v52.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v54.u32), 0x0));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vspltw128 v59,v59,1
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0xAA));
	// vmulfp128 v53,v52,v53
	simde_mm_store_ps(ctx.v53.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v59,v54,v59
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v59.f32)));
	// stvx128 v58,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v58.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v58,v54,v53
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v57,v59,v57
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v57.f32), 0xFF));
	// vmulfp128 v59,v59,v53
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v56,v58,v56
	simde_mm_store_ps(ctx.v56.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v56.f32), 0xFF));
	// vmulfp128 v58,v58,v53
	simde_mm_store_ps(ctx.v58.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v54,v59,v53
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v59,v59,v55
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v55.f32), 0xFF));
	// stvx128 v57,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r11,2032
	ctx.r11.s64 = ctx.r11.s64 + 2032;
	// lfs f0,-160(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stvx128 v59,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// lfs f12,-128(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,2080
	ctx.r9.s64 = ctx.r9.s64 + 2080;
	// lfs f11,-112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,-128
	ctx.r7.s64 = ctx.r1.s64 + -128;
	// lfs f13,-160(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -160);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v59,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r6,r1,-144
	ctx.r6.s64 = ctx.r1.s64 + -144;
	// vmsum4fp128 v57,v54,v59
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v57.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v54.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// li r11,32
	ctx.r11.s64 = 32;
	// li r27,40
	ctx.r27.s64 = 40;
	// lvx128 v59,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r9,36
	ctx.r9.s64 = 36;
	// vmsum4fp128 v59,v58,v59
	simde_mm_store_ps(ctx.v59.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v59.f32), 0xFF));
	// li r26,44
	ctx.r26.s64 = 44;
	// li r25,48
	ctx.r25.s64 = 48;
	// li r24,52
	ctx.r24.s64 = 52;
	// li r23,56
	ctx.r23.s64 = 56;
	// li r22,60
	ctx.r22.s64 = 60;
	// stvx128 v57,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v57.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f9,-128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f9.f64 = double(temp.f32);
	// fadds f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// stvx128 v59,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f10,-112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f10.f64 = double(temp.f32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f0,-140(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -140, temp.u32);
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfs f0,-144(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -144, temp.u32);
	// lvx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vrlimi128 v63,v59,8,0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 8));
	// vrlimi128 v62,v59,4,0
	simde_mm_store_ps(ctx.v62.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 4));
	// vperm128 v63,v63,v63,v0
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vrlimi128 v61,v59,2,0
	simde_mm_store_ps(ctx.v61.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 228), 2));
	// vrlimi128 v60,v59,2,1
	simde_mm_store_ps(ctx.v60.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v59.f32), 147), 2));
	// vperm128 v62,v62,v62,v0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r4
	ea = (ctx.r3.u32 + ctx.r4.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r31
	ea = (ctx.r3.u32 + ctx.r31.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r29
	ea = (ctx.r3.u32 + ctx.r29.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r3,r28
	ea = (ctx.r3.u32 + ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r27
	ea = (ctx.r3.u32 + ctx.r27.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r3,r26
	ea = (ctx.r3.u32 + ctx.r26.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r25
	ea = (ctx.r3.u32 + ctx.r25.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r24
	ea = (ctx.r3.u32 + ctx.r24.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r23
	ea = (ctx.r3.u32 + ctx.r23.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r3,r22
	ea = (ctx.r3.u32 + ctx.r22.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219FB78) {
	REX_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// beq cr6,0x8219fba4
	if (ctx.cr6.eq) goto loc_8219FBA4;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8219fba4
	if (!ctx.cr6.eq) goto loc_8219FBA4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219fbb0
	if (!ctx.cr6.eq) goto loc_8219FBB0;
loc_8219FBA4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_8219FBB0:
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// stw r11,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219FF10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8219ff68
	if (ctx.cr6.lt) goto loc_8219FF68;
	// beq cr6,0x8219ff58
	if (ctx.cr6.eq) goto loc_8219FF58;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8219ff48
	if (ctx.cr6.lt) goto loc_8219FF48;
	// beq cr6,0x8219ff40
	if (ctx.cr6.eq) goto loc_8219FF40;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_8219FF40:
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x8219ff84
	goto loc_8219FF84;
loc_8219FF48:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8219ff80
	goto loc_8219FF80;
loc_8219FF58:
	// lwa r11,24(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 24));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x8219ff80
	goto loc_8219FF80;
loc_8219FF68:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_8219FF80:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_8219FF84:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A0C10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x821A0C18;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a0c80
	if (ctx.cr6.eq) goto loc_821A0C80;
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821a0c80
	if (!ctx.cr6.eq) goto loc_821A0C80;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 876);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,64(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0c6c
	if (ctx.cr6.eq) goto loc_821A0C6C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821a0c80
	if (ctx.cr6.eq) goto loc_821A0C80;
loc_821A0C6C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821a0d7c
	if (ctx.cr6.eq) goto loc_821A0D7C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x821a0c8c
	if (ctx.cr6.eq) goto loc_821A0C8C;
loc_821A0C80:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x821a0e64
	goto loc_821A0E64;
loc_821A0C8C:
	// lwz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r20,1
	ctx.r20.s64 = 1;
	// lwz r26,28(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r25,24(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// li r21,4
	ctx.r21.s64 = 4;
	// bgt cr6,0x821a0cb4
	if (ctx.cr6.gt) goto loc_821A0CB4;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_821A0CB4:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r24,4
	ctx.r24.s64 = 4;
	// bgt cr6,0x821a0cc4
	if (ctx.cr6.gt) goto loc_821A0CC4;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_821A0CC4:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821A0CD0;
	sub_8215EC60(ctx, base);
loc_821A0CD0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821a0d40
	if (ctx.cr6.eq) goto loc_821A0D40;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_821A0CE0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821a0d18
	if (ctx.cr6.eq) goto loc_821A0D18;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0CF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8219ff10
	ctx.lr = 0x821A0CFC;
	sub_8219FF10(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x821a0d74
	if (ctx.cr0.lt) goto loc_821A0D74;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821a0cf0
	if (ctx.cr6.lt) goto loc_821A0CF0;
loc_821A0D18:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x821a0d30
	if (!ctx.cr6.lt) goto loc_821A0D30;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0D28:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0d28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0D28;
loc_821A0D30:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x821a0ce0
	if (ctx.cr6.lt) goto loc_821A0CE0;
loc_821A0D40:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821a0d68
	if (!ctx.cr6.lt) goto loc_821A0D68;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
loc_821A0D4C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a0d60
	if (ctx.cr6.eq) goto loc_821A0D60;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_821A0D58:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0D58;
loc_821A0D60:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0d4c
	if (!ctx.cr0.eq) goto loc_821A0D4C;
loc_821A0D68:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r22,r22,64
	ctx.r22.s64 = ctx.r22.s64 + 64;
	// bne 0x821a0cd0
	if (!ctx.cr0.eq) goto loc_821A0CD0;
loc_821A0D74:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x821a0e64
	goto loc_821A0E64;
loc_821A0D7C:
	// lwz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r28,28(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r25,24(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// li r21,4
	ctx.r21.s64 = 4;
	// bgt cr6,0x821a0da4
	if (ctx.cr6.gt) goto loc_821A0DA4;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
loc_821A0DA4:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r23,4
	ctx.r23.s64 = 4;
	// bgt cr6,0x821a0db4
	if (ctx.cr6.gt) goto loc_821A0DB4;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
loc_821A0DB4:
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821A0DC0;
	sub_8215EC60(ctx, base);
loc_821A0DC0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x821a0e2c
	if (ctx.cr6.eq) goto loc_821A0E2C;
loc_821A0DCC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a0e08
	if (ctx.cr6.eq) goto loc_821A0E08;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_821A0DDC:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r24
	ctx.r4.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x8219ff10
	ctx.lr = 0x821A0DF0;
	sub_8219FF10(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x821a0e60
	if (ctx.cr0.lt) goto loc_821A0E60;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x821a0ddc
	if (ctx.cr6.lt) goto loc_821A0DDC;
loc_821A0E08:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x821a0e20
	if (!ctx.cr6.lt) goto loc_821A0E20;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0E18:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x821a0e18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0E18;
loc_821A0E20:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r21
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x821a0dcc
	if (ctx.cr6.lt) goto loc_821A0DCC;
loc_821A0E2C:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821a0e54
	if (!ctx.cr6.lt) goto loc_821A0E54;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
loc_821A0E38:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a0e4c
	if (ctx.cr6.eq) goto loc_821A0E4C;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_821A0E44:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x821a0e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0E44;
loc_821A0E4C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0e38
	if (!ctx.cr0.eq) goto loc_821A0E38;
loc_821A0E54:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,64
	ctx.r24.s64 = ctx.r24.s64 + 64;
	// bne 0x821a0dc0
	if (!ctx.cr0.eq) goto loc_821A0DC0;
loc_821A0E60:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_821A0E64:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7520) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821a7530
	if (!ctx.cr6.eq) goto loc_821A7530;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821A7530:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x821a6e80
	sub_821A6E80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7EF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x821A7EF8;
	__savegprlr_17(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x821A7F38;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7f68
	if (ctx.cr0.eq) goto loc_821A7F68;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// b 0x821a7f6c
	goto loc_821A7F6C;
loc_821A7F68:
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
loc_821A7F6C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821a82bc
	if (ctx.cr6.eq) goto loc_821A82BC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A7F80;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7fb0
	if (ctx.cr0.eq) goto loc_821A7FB0;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// b 0x821a7fb4
	goto loc_821A7FB4;
loc_821A7FB0:
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
loc_821A7FB4:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821a82bc
	if (ctx.cr6.eq) goto loc_821A82BC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8216b018
	ctx.lr = 0x821A7FC8;
	sub_8216B018(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a8000
	if (ctx.cr0.eq) goto loc_821A8000;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r27,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// b 0x821a8004
	goto loc_821A8004;
loc_821A8000:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_821A8004:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a82bc
	if (ctx.cr6.eq) goto loc_821A82BC;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a8038
	if (ctx.cr6.eq) goto loc_821A8038;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a8150
	if (!ctx.cr6.eq) goto loc_821A8150;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821a8150
	if (!ctx.cr6.eq) goto loc_821A8150;
	// lwz r21,24(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_821A8038:
	// stw r30,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r30.u32);
	// lwz r31,28(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// b 0x821a80ac
	goto loc_821A80AC;
loc_821A8044:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a8150
	if (!ctx.cr6.eq) goto loc_821A8150;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a8150
	if (ctx.cr6.eq) goto loc_821A8150;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821a8150
	if (!ctx.cr6.eq) goto loc_821A8150;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a8138
	if (!ctx.cr6.eq) goto loc_821A8138;
	// addi r7,r26,40
	ctx.r7.s64 = ctx.r26.s64 + 40;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a71f8
	ctx.lr = 0x821A8088;
	sub_821A71F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821a809c
	if (!ctx.cr0.lt) goto loc_821A809C;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x821a809c
	if (ctx.cr6.lt) goto loc_821A809C;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_821A809C:
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
loc_821A80AC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a8044
	if (!ctx.cr6.eq) goto loc_821A8044;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r5,2060
	ctx.r5.s64 = 2060;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8215ec60
	ctx.lr = 0x821A80CC;
	sub_8215EC60(ctx, base);
	// lwz r31,24(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
loc_821A80D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a815c
	if (ctx.cr6.eq) goto loc_821A815C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r1,172
	ctx.r10.s64 = ctx.r1.s64 + 172;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a52e0
	ctx.lr = 0x821A80FC;
	sub_821A52E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821a8110
	if (!ctx.cr0.lt) goto loc_821A8110;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x821a8110
	if (ctx.cr6.lt) goto loc_821A8110;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_821A8110:
	// lwz r11,168(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a8130
	if (ctx.cr6.eq) goto loc_821A8130;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_821A8130:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x821a80d4
	goto loc_821A80D4;
loc_821A8138:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1904
	ctx.r6.s64 = ctx.r11.s64 + 1904;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,40
	ctx.r3.s64 = ctx.r29.s64 + 40;
	// bl 0x821afae0
	ctx.lr = 0x821A8150;
	sub_821AFAE0(ctx, base);
loc_821A8150:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x821a82c4
	goto loc_821A82C4;
loc_821A815C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a81a8
	if (ctx.cr6.eq) goto loc_821A81A8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,2064
	ctx.r3.s64 = 2064;
	// bl 0x8216b018
	ctx.lr = 0x821A8170;
	sub_8216B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821a82bc
	if (ctx.cr0.eq) goto loc_821A82BC;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r5,2060
	ctx.r5.s64 = 2060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x821A8188;
	sub_8215E640(ctx, base);
	// stw r30,2060(r31)
	REX_STORE_U32(ctx.r31.u32 + 2060, ctx.r30.u32);
	// lwz r10,844(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 844);
	// addi r11,r31,2060
	ctx.r11.s64 = ctx.r31.s64 + 2060;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r22,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_821A81A8:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// bge cr6,0x821a81b8
	if (!ctx.cr6.lt) goto loc_821A81B8;
loc_821A81B0:
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// b 0x821a82c4
	goto loc_821A82C4;
loc_821A81B8:
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// b 0x821a8204
	goto loc_821A8204;
loc_821A81C4:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// lwz r5,844(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 844);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821a3668
	ctx.lr = 0x821A81E8;
	sub_821A3668(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821a81fc
	if (!ctx.cr0.lt) goto loc_821A81FC;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x821a81fc
	if (ctx.cr6.lt) goto loc_821A81FC;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_821A81FC:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_821A8204:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// bne cr6,0x821a81c4
	if (!ctx.cr6.eq) goto loc_821A81C4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x821a81b0
	if (ctx.cr6.lt) goto loc_821A81B0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2c80
	ctx.lr = 0x821A8228;
	sub_821A2C80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a82c4
	if (ctx.cr0.lt) goto loc_821A82C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A8240;
	sub_821A2D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a82c4
	if (ctx.cr0.lt) goto loc_821A82C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,36(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A8258;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a82c4
	if (ctx.cr0.lt) goto loc_821A82C4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A8270;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a82c4
	if (ctx.cr0.lt) goto loc_821A82C4;
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r11,12(r20)
	REX_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lwz r11,16(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 16);
	// stw r11,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r11,12(r18)
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// stw r18,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// stw r11,16(r25)
	REX_STORE_U32(ctx.r25.u32 + 16, ctx.r11.u32);
	// stw r21,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r21.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// stw r11,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
	// stw r26,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r26.u32);
	// b 0x821a8318
	goto loc_821A8318;
loc_821A82BC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_821A82C4:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a82e0
	if (ctx.cr6.eq) goto loc_821A82E0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a70d0
	ctx.lr = 0x821A82D4;
	sub_821A70D0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A82E0;
	sub_8216B138(ctx, base);
loc_821A82E0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821a82fc
	if (ctx.cr6.eq) goto loc_821A82FC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A82F0;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A82FC;
	sub_8216B138(ctx, base);
loc_821A82FC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821a8318
	if (ctx.cr6.eq) goto loc_821A8318;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A830C;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A8318;
	sub_8216B138(ctx, base);
loc_821A8318:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8219e568
	ctx.lr = 0x821A8320;
	sub_8219E568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B2ED8) {
	REX_FUNC_PROLOGUE();
	// b 0x821b2df0
	sub_821B2DF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B2F60) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9296
	ctx.r11.s64 = ctx.r11.s64 + 9296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821eb0e0
	ctx.lr = 0x821B2F8C;
	sub_821EB0E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b2fa0
	if (ctx.cr0.eq) goto loc_821B2FA0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821B2FA0;
	sub_8216B138(ctx, base);
loc_821B2FA0:
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

DEFINE_REX_FUNC(sub_821B31C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821B31C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821b322c
	if (!ctx.cr6.gt) goto loc_821B322C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x821b31f4
	if (!ctx.cr6.eq) goto loc_821B31F4;
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x821b31f4
	goto loc_821B31F4;
loc_821B31F0:
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_821B31F4:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x821b31f0
	if (ctx.cr6.lt) goto loc_821B31F0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x821B3208;
	sub_8216B018(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821b3218
	if (!ctx.cr0.eq) goto loc_821B3218;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b3230
	goto loc_821B3230;
loc_821B3218:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// bl 0x8216b138
	ctx.lr = 0x821B3224;
	sub_8216B138(ctx, base);
	// stw r30,152(r29)
	REX_STORE_U32(ctx.r29.u32 + 152, ctx.r30.u32);
	// stw r31,156(r29)
	REX_STORE_U32(ctx.r29.u32 + 156, ctx.r31.u32);
loc_821B322C:
	// lwz r3,152(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
loc_821B3230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B6128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x821B6130;
	__savegprlr_17(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r8,108(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// rlwinm. r10,r8,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821b62ac
	if (ctx.cr0.eq) goto loc_821B62AC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821b61b0
	if (ctx.cr6.eq) goto loc_821B61B0;
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
loc_821B6170:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r5,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi. r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821b61b0
	if (ctx.cr0.eq) goto loc_821B61B0;
	// rlwinm. r6,r8,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821b61a0
	if (ctx.cr0.eq) goto loc_821B61A0;
	// lwz r6,0(r19)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821b61b0
	if (!ctx.cr6.eq) goto loc_821B61B0;
loc_821B61A0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821b6170
	if (ctx.cr6.lt) goto loc_821B6170;
loc_821B61B0:
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x821b62ac
	if (!ctx.cr6.eq) goto loc_821B62AC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mulli r3,r31,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// bl 0x8216b018
	ctx.lr = 0x821B61C4;
	sub_8216B018(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x821b6450
	if (ctx.cr0.eq) goto loc_821B6450;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r31,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B61E4:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bdnz 0x821b61e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B61E4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6228
	if (ctx.cr6.eq) goto loc_821B6228;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lwz r8,88(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// subf r10,r11,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r11.u64;
	// subf r9,r11,r20
	ctx.r9.u64 = ctx.r20.u64 - ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
loc_821B6210:
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821b6210
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6210;
loc_821B6228:
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6270
	if (ctx.cr6.eq) goto loc_821B6270;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6250
	if (ctx.cr0.eq) goto loc_821B6250;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6248:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6248
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6248;
loc_821B6250:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6270
	if (ctx.cr6.eq) goto loc_821B6270;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6270
	if (ctx.cr0.eq) goto loc_821B6270;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6268:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6268;
loc_821B6270:
	// clrlwi r30,r31,12
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFFF;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B6294;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// add r8,r28,r18
	ctx.r8.u64 = ctx.r28.u64 + ctx.r18.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// oris r5,r30,12288
	ctx.r5.u64 = ctx.r30.u64 | 805306368;
	// b 0x821b6408
	goto loc_821B6408;
loc_821B62AC:
	// rlwinm. r11,r8,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bne 0x821b6440
	if (!ctx.cr0.eq) goto loc_821B6440;
	// mulli r3,r31,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// bl 0x8216b018
	ctx.lr = 0x821B62C0;
	sub_8216B018(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq 0x821b6450
	if (ctx.cr0.eq) goto loc_821B6450;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B62E0:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821b62e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B62E0;
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6314
	if (ctx.cr6.eq) goto loc_821B6314;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6314
	if (ctx.cr0.eq) goto loc_821B6314;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B630C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b630c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B630C;
loc_821B6314:
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6338
	if (ctx.cr6.eq) goto loc_821B6338;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6338
	if (ctx.cr0.eq) goto loc_821B6338;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6330:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6330;
loc_821B6338:
	// lwz r28,88(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b637c
	if (ctx.cr6.eq) goto loc_821B637C;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b635c
	if (ctx.cr0.eq) goto loc_821B635C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6354:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6354
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6354;
loc_821B635C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b637c
	if (ctx.cr6.eq) goto loc_821B637C;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b637c
	if (ctx.cr0.eq) goto loc_821B637C;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6374:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6374;
loc_821B637C:
	// clrlwi r30,r31,12
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B63A0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// oris r29,r30,8256
	ctx.r29.u64 = ctx.r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B63CC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = ctx.r30.u64 | 542113792;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B63F4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_821B6400:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_821B6408:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B641C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821B6428:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8216b138
	ctx.lr = 0x821B6434;
	sub_8216B138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_821B6440:
	// mulli r3,r31,20
	ctx.r3.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(20));
	// bl 0x8216b018
	ctx.lr = 0x821B6448;
	sub_8216B018(ctx, base);
	// mr. r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bne 0x821b645c
	if (!ctx.cr0.eq) goto loc_821B645C;
loc_821B6450:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x821b6428
	goto loc_821B6428;
loc_821B645C:
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821B6474:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821b6474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6474;
	// lwz r24,96(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b64a0
	if (ctx.cr6.eq) goto loc_821B64A0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
loc_821B6494:
	// lwz r10,32(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b6494
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6494;
loc_821B64A0:
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b64c8
	if (ctx.cr6.eq) goto loc_821B64C8;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b64c8
	if (ctx.cr0.eq) goto loc_821B64C8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B64C0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b64c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B64C0;
loc_821B64C8:
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b64ec
	if (ctx.cr6.eq) goto loc_821B64EC;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b64ec
	if (ctx.cr0.eq) goto loc_821B64EC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B64E4:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b64e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B64E4;
loc_821B64EC:
	// lwz r25,88(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6510
	if (ctx.cr6.eq) goto loc_821B6510;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6510
	if (ctx.cr0.eq) goto loc_821B6510;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B6508:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b6508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B6508;
loc_821B6510:
	// lwz r28,92(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6554
	if (ctx.cr6.eq) goto loc_821B6554;
	// addi r10,r28,-4
	ctx.r10.s64 = ctx.r28.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6534
	if (ctx.cr0.eq) goto loc_821B6534;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B652C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b652c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B652C;
loc_821B6534:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b6554
	if (ctx.cr6.eq) goto loc_821B6554;
	// addi r10,r17,-4
	ctx.r10.s64 = ctx.r17.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821b6554
	if (ctx.cr0.eq) goto loc_821B6554;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821B654C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821b654c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B654C;
loc_821B6554:
	// clrlwi r30,r31,12
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B6578;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// oris r29,r30,8256
	ctx.r29.u64 = ctx.r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B65A4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// oris r30,r30,8272
	ctx.r30.u64 = ctx.r30.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B65D0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821B65F8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821b6428
	if (ctx.cr0.lt) goto loc_821B6428;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// b 0x821b6400
	goto loc_821B6400;
}

DEFINE_REX_FUNC(sub_821CBB90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821CBB98;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// addi r10,r5,0
	ctx.r10.s64 = ctx.r5.s64 + 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821cbd00
	if (!ctx.cr6.eq) goto loc_821CBD00;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821cbc54
	if (ctx.cr6.eq) goto loc_821CBC54;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a9678
	ctx.lr = 0x821CBBE8;
	sub_821A9678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821cbc1c
	if (ctx.cr0.lt) goto loc_821CBC1C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a9678
	ctx.lr = 0x821CBC00;
	sub_821A9678(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821cbc1c
	if (ctx.cr0.lt) goto loc_821CBC1C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821cbc54
	if (ctx.cr6.eq) goto loc_821CBC54;
	// b 0x821cbd00
	goto loc_821CBD00;
loc_821CBC1C:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_821CBC28:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cbc4c
	if (ctx.cr0.eq) goto loc_821CBC4C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cbc28
	if (ctx.cr6.eq) goto loc_821CBC28;
loc_821CBC4C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821cbd00
	if (!ctx.cr0.eq) goto loc_821CBD00;
loc_821CBC54:
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// b 0x821cbce0
	goto loc_821CBCE0;
loc_821CBC60:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821cbcec
	if (ctx.cr6.eq) goto loc_821CBCEC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,8(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,44(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821cbd00
	if (!ctx.cr6.eq) goto loc_821CBD00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,48(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// bl 0x821cb318
	ctx.lr = 0x821CBC98;
	sub_821CB318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821cbd00
	if (ctx.cr0.eq) goto loc_821CBD00;
	// b 0x821cbcb4
	goto loc_821CBCB4;
loc_821CBCA4:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cbcd4
	if (ctx.cr6.eq) goto loc_821CBCD4;
loc_821CBCB4:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821cbca4
	if (!ctx.cr6.eq) goto loc_821CBCA4;
	// b 0x821cbcd4
	goto loc_821CBCD4;
loc_821CBCC4:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cbce0
	if (ctx.cr6.eq) goto loc_821CBCE0;
loc_821CBCD4:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821cbcc4
	if (!ctx.cr6.eq) goto loc_821CBCC4;
loc_821CBCE0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821cbc60
	if (!ctx.cr6.eq) goto loc_821CBC60;
	// b 0x821cbcf4
	goto loc_821CBCF4;
loc_821CBCEC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821cbd00
	if (!ctx.cr6.eq) goto loc_821CBD00;
loc_821CBCF4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x821cbd04
	if (ctx.cr6.eq) goto loc_821CBD04;
loc_821CBD00:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_821CBD04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D1228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821D1230;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// b 0x821d1248
	goto loc_821D1248;
loc_821D1244:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_821D1248:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821d1244
	if (!ctx.cr6.eq) goto loc_821D1244;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D125C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1288
	if (ctx.cr0.eq) goto loc_821D1288;
	// addi r9,r31,16
	ctx.r9.s64 = ctx.r31.s64 + 16;
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
	ctx.lr = 0x821D1280;
	sub_821C9DE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821d128c
	goto loc_821D128C;
loc_821D1288:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821D128C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821d129c
	if (!ctx.cr6.eq) goto loc_821D129C;
loc_821D1294:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d1370
	goto loc_821D1370;
loc_821D129C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d12c4
	if (ctx.cr6.eq) goto loc_821D12C4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D12B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r29)
	REX_STORE_U32(ctx.r29.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1294
	if (ctx.cr0.eq) goto loc_821D1294;
loc_821D12C4:
	// lwz r28,32(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d1360
	if (ctx.cr6.eq) goto loc_821D1360;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r27,r11,-29400
	ctx.r27.s64 = ctx.r11.s64 + -29400;
loc_821D12DC:
	// lwz r31,8(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d1354
	if (ctx.cr6.eq) goto loc_821D1354;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d1354
	if (!ctx.cr6.eq) goto loc_821D1354;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d1354
	if (ctx.cr6.eq) goto loc_821D1354;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D1308;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1324
	if (ctx.cr0.eq) goto loc_821D1324;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D1320;
	sub_821C7240(ctx, base);
	// b 0x821d1328
	goto loc_821D1328;
loc_821D1324:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1328:
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1294
	if (ctx.cr6.eq) goto loc_821D1294;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x821c71b8
	ctx.lr = 0x821D133C;
	sub_821C71B8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821d1294
	if (ctx.cr0.eq) goto loc_821D1294;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
loc_821D1354:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821d12dc
	if (!ctx.cr6.eq) goto loc_821D12DC;
loc_821D1360:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D136C;
	sub_821CEFE0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821D1370:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D9368) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x821D9370;
	__savegprlr_17(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r18,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// beq cr6,0x821d93a4
	if (ctx.cr6.eq) goto loc_821D93A4;
	// lwz r28,8(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_821D93A4:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x821c92a8
	ctx.lr = 0x821D93AC;
	sub_821C92A8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// addi r21,r17,16
	ctx.r21.s64 = ctx.r17.s64 + 16;
	// lwz r27,24(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d93ec
	if (ctx.cr0.eq) goto loc_821D93EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3047
	ctx.r5.s64 = 3047;
	// addi r6,r11,-24628
	ctx.r6.s64 = ctx.r11.s64 + -24628;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D93EC;
	sub_821CC878(ctx, base);
loc_821D93EC:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d9414
	if (ctx.cr0.eq) goto loc_821D9414;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3006
	ctx.r5.s64 = 3006;
	// addi r6,r11,-24672
	ctx.r6.s64 = ctx.r11.s64 + -24672;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D9414;
	sub_821CC878(ctx, base);
loc_821D9414:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cd2c8
	ctx.lr = 0x821D9420;
	sub_821CD2C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d9444
	if (!ctx.cr0.eq) goto loc_821D9444;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3038
	ctx.r5.s64 = 3038;
	// addi r6,r11,-24716
	ctx.r6.s64 = ctx.r11.s64 + -24716;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D9444;
	sub_821CC878(ctx, base);
loc_821D9444:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821d94d0
	if (ctx.cr6.eq) goto loc_821D94D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-24764
	ctx.r29.s64 = ctx.r11.s64 + -24764;
loc_821D945C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821d94c4
	if (ctx.cr6.eq) goto loc_821D94C4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821d94c4
	if (!ctx.cr6.eq) goto loc_821D94C4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d949c
	if (ctx.cr6.eq) goto loc_821D949C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// bne cr6,0x821d949c
	if (!ctx.cr6.eq) goto loc_821D949C;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x821d94c4
	goto loc_821D94C4;
loc_821D949C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821d94c4
	if (ctx.cr6.eq) goto loc_821D94C4;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,3044
	ctx.r5.s64 = 3044;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821cc878
	ctx.lr = 0x821D94C4;
	sub_821CC878(ctx, base);
loc_821D94C4:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d945c
	if (!ctx.cr6.eq) goto loc_821D945C;
loc_821D94D0:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D94D8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d94fc
	if (ctx.cr0.eq) goto loc_821D94FC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11756
	ctx.r6.s64 = ctx.r11.s64 + 11756;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D94F4;
	sub_821C7240(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// b 0x821d9500
	goto loc_821D9500;
loc_821D94FC:
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
loc_821D9500:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821c7078
	ctx.lr = 0x821D9510;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9538
	if (ctx.cr0.eq) goto loc_821D9538;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821c7d20
	ctx.lr = 0x821D9530;
	sub_821C7D20(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x821d953c
	goto loc_821D953C;
loc_821D9538:
	// mr r22,r18
	ctx.r22.u64 = ctx.r18.u64;
loc_821D953C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// stw r22,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r22.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D9550;
	sub_821C71B8(ctx, base);
	// stw r3,20(r22)
	REX_STORE_U32(ctx.r22.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D9564;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9578
	if (ctx.cr0.eq) goto loc_821D9578;
	// bl 0x821c8cf0
	ctx.lr = 0x821D9570;
	sub_821C8CF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d957c
	goto loc_821D957C;
loc_821D9578:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
loc_821D957C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// stw r31,24(r22)
	REX_STORE_U32(ctx.r22.u32 + 24, ctx.r31.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r3,20(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d95ac
	if (ctx.cr6.eq) goto loc_821D95AC;
	// bl 0x821c71b8
	ctx.lr = 0x821D95A0;
	sub_821C71B8(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D95AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d95c8
	if (ctx.cr6.eq) goto loc_821D95C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D95BC;
	sub_821C71B8(ctx, base);
	// stw r3,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D95C8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821d95e4
	if (ctx.cr6.eq) goto loc_821D95E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D95D8;
	sub_821C71B8(ctx, base);
	// stw r3,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D95E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cd110
	ctx.lr = 0x821D95F4;
	sub_821CD110(ctx, base);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821d9678
	if (ctx.cr6.eq) goto loc_821D9678;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821d9628
	if (!ctx.cr6.eq) goto loc_821D9628;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// li r5,3076
	ctx.r5.s64 = 3076;
	// addi r6,r11,-24808
	ctx.r6.s64 = ctx.r11.s64 + -24808;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D9624;
	sub_821CC878(ctx, base);
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
loc_821D9628:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821d9678
	if (ctx.cr6.eq) goto loc_821D9678;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D9638;
	sub_821C71B8(ctx, base);
	// stw r3,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D9644:
	// lwz r3,8(r19)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d966c
	if (ctx.cr6.eq) goto loc_821D966C;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821d966c
	if (!ctx.cr6.eq) goto loc_821D966C;
	// bl 0x821c71b8
	ctx.lr = 0x821D9660;
	sub_821C71B8(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D966C:
	// lwz r19,12(r19)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r19.u32 + 12);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x821d9644
	if (!ctx.cr6.eq) goto loc_821D9644;
loc_821D9678:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821d96a0
	if (ctx.cr6.eq) goto loc_821D96A0;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d96a0
	if (ctx.cr6.eq) goto loc_821D96A0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D9694;
	sub_821C71B8(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
loc_821D96A0:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// lwz r6,36(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x821d3020
	ctx.lr = 0x821D96D0;
	sub_821D3020(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d96e8
	if (!ctx.cr0.lt) goto loc_821D96E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3003
	ctx.r5.s64 = 3003;
	// addi r6,r11,-30316
	ctx.r6.s64 = ctx.r11.s64 + -30316;
	// b 0x821d9718
	goto loc_821D9718;
loc_821D96E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r23,132(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bne cr6,0x821d9948
	if (!ctx.cr6.eq) goto loc_821D9948;
	// lwz r5,40(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 40);
	// bl 0x821cb318
	ctx.lr = 0x821D9704;
	sub_821CB318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d9734
	if (!ctx.cr0.eq) goto loc_821D9734;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// addi r6,r11,-24860
	ctx.r6.s64 = ctx.r11.s64 + -24860;
loc_821D9718:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D9728;
	sub_821CC878(ctx, base);
loc_821D9728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D972C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_821D9734:
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r25,r18
	ctx.r25.u64 = ctx.r18.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,40(r22)
	REX_STORE_U32(ctx.r22.u32 + 40, ctx.r11.u32);
	// lwz r29,44(r23)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// lwz r30,44(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// b 0x821d98d4
	goto loc_821D98D4;
loc_821D9768:
	// lwz r27,8(r29)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d993c
	if (ctx.cr6.eq) goto loc_821D993C;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x821d9814
	if (!ctx.cr6.eq) goto loc_821D9814;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d97a0
	if (ctx.cr6.eq) goto loc_821D97A0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d97a0
	if (ctx.cr6.eq) goto loc_821D97A0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d97f4
	if (ctx.cr6.eq) goto loc_821D97F4;
loc_821D97A0:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D97B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D97C4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d97e0
	if (ctx.cr0.eq) goto loc_821D97E0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821c7240
	ctx.lr = 0x821D97DC;
	sub_821C7240(ctx, base);
	// b 0x821d97e4
	goto loc_821D97E4;
loc_821D97E0:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_821D97E4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// stw r3,12(r25)
	REX_STORE_U32(ctx.r25.u32 + 12, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_821D97F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,36(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r4,36(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x821c7190
	ctx.lr = 0x821D980C;
	sub_821C7190(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d98e0
	if (ctx.cr0.eq) goto loc_821D98E0;
loc_821D9814:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// lwz r28,8(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// bne cr6,0x821d986c
	if (!ctx.cr6.eq) goto loc_821D986C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x821d98cc
	if (ctx.cr6.eq) goto loc_821D98CC;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// b 0x821d98cc
	goto loc_821D98CC;
loc_821D986C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,20(r24)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821cb138
	ctx.lr = 0x821D987C;
	sub_821CB138(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// lwz r9,24(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r8,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r8.u32);
	// stw r8,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// stw r8,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r8.u32);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,28(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// stw r10,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r10.u32);
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_821D98CC:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_821D98D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821d9768
	if (!ctx.cr6.eq) goto loc_821D9768;
	// b 0x821d993c
	goto loc_821D993C;
loc_821D98E0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,3068
	ctx.r5.s64 = 3068;
	// lwz r7,8(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// addi r6,r10,-24924
	ctx.r6.s64 = ctx.r10.s64 + -24924;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,24(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x821cc878
	ctx.lr = 0x821D9908;
	sub_821CC878(ctx, base);
	// b 0x821d9728
	goto loc_821D9728;
loc_821D990C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d9964
	if (ctx.cr6.eq) goto loc_821D9964;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_821D993C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d990c
	if (!ctx.cr6.eq) goto loc_821D990C;
	// b 0x821d9964
	goto loc_821D9964;
loc_821D9948:
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 104);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// bl 0x821cd398
	ctx.lr = 0x821D9954;
	sub_821CD398(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,104(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 104);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,104(r24)
	REX_STORE_U32(ctx.r24.u32 + 104, ctx.r11.u32);
loc_821D9964:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// stw r18,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x821c71b8
	ctx.lr = 0x821D9988;
	sub_821C71B8(ctx, base);
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D9994;
	sub_821C71B8(ctx, base);
	// stw r3,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,192(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// beq cr6,0x821d99b0
	if (ctx.cr6.eq) goto loc_821D99B0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
loc_821D99B0:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821d99c0
	if (ctx.cr6.eq) goto loc_821D99C0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d9728
	if (ctx.cr6.eq) goto loc_821D9728;
loc_821D99C0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821cd110
	ctx.lr = 0x821D99CC;
	sub_821CD110(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821d3fd8
	ctx.lr = 0x821D99DC;
	sub_821D3FD8(ctx, base);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d9728
	if (ctx.cr0.eq) goto loc_821D9728;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x821d9a24
	if (!ctx.cr6.eq) goto loc_821D9A24;
	// lwz r30,20(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r11.u32);
	// bl 0x821cccb0
	ctx.lr = 0x821D9A0C;
	sub_821CCCB0(ctx, base);
	// stw r30,20(r24)
	REX_STORE_U32(ctx.r24.u32 + 20, ctx.r30.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821d9728
	if (ctx.cr0.lt) goto loc_821D9728;
	// lwz r11,100(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r24)
	REX_STORE_U32(ctx.r24.u32 + 100, ctx.r11.u32);
loc_821D9A24:
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,20(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r31,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r31.u32);
	// b 0x821d972c
	goto loc_821D972C;
}

DEFINE_REX_FUNC(sub_821EAD38) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EAF68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,604(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EB028) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eb044
	if (!ctx.cr6.eq) goto loc_821EB044;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_821EB044:
	// subf r9,r11,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r11.u64;
loc_821EB048:
	// lbzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821eb064
	if (ctx.cr0.eq) goto loc_821EB064;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821eb048
	if (!ctx.cr0.eq) goto loc_821EB048;
loc_821EB064:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eb078
	if (!ctx.cr6.eq) goto loc_821EB078;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,122
	ctx.r3.u64 = ctx.r3.u64 | 122;
loc_821EB078:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EB370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821EB378;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821eb3bc
	if (!ctx.cr6.gt) goto loc_821EB3BC;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r29,r11,-12532
	ctx.r29.s64 = ctx.r11.s64 + -12532;
loc_821EB398:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EB3A4;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eb3c0
	if (ctx.cr0.lt) goto loc_821EB3C0;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821eb398
	if (ctx.cr6.lt) goto loc_821EB398;
loc_821EB3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EB3C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EBC80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821EBC88;
	__savegprlr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
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
	// bl 0x821eb370
	ctx.lr = 0x821EBCA0;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ebd2c
	if (ctx.cr0.lt) goto loc_821EBD2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r11,-6468
	ctx.r5.s64 = ctx.r11.s64 + -6468;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821a4f40
	ctx.lr = 0x821EBCC4;
	sub_821A4F40(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,440(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 440);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EBCE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ebd2c
	if (ctx.cr0.lt) goto loc_821EBD2C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12512
	ctx.r4.s64 = ctx.r11.s64 + -12512;
	// bl 0x821eb2a0
	ctx.lr = 0x821EBCF8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ebd2c
	if (ctx.cr0.lt) goto loc_821EBD2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EBD08;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ebd2c
	if (ctx.cr0.lt) goto loc_821EBD2C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,-6480
	ctx.r4.s64 = ctx.r11.s64 + -6480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EBD24;
	sub_821EB2A0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_821EBD2C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EDEE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821edf70
	if (!ctx.cr6.eq) goto loc_821EDF70;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821edf70
	if (!ctx.cr6.eq) goto loc_821EDF70;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821edf70
	if (!ctx.cr6.eq) goto loc_821EDF70;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x821edf5c
	if (ctx.cr6.lt) goto loc_821EDF5C;
	// beq cr6,0x821edf50
	if (ctx.cr6.eq) goto loc_821EDF50;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x821edf44
	if (ctx.cr6.lt) goto loc_821EDF44;
	// beq cr6,0x821edf38
	if (ctx.cr6.eq) goto loc_821EDF38;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821edfac
	goto loc_821EDFAC;
loc_821EDF38:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-6156
	ctx.r4.s64 = ctx.r11.s64 + -6156;
	// b 0x821edf64
	goto loc_821EDF64;
loc_821EDF44:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-6172
	ctx.r4.s64 = ctx.r11.s64 + -6172;
	// b 0x821edf64
	goto loc_821EDF64;
loc_821EDF50:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-6188
	ctx.r4.s64 = ctx.r11.s64 + -6188;
	// b 0x821edf64
	goto loc_821EDF64;
loc_821EDF5C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r4,r11,-6204
	ctx.r4.s64 = ctx.r11.s64 + -6204;
loc_821EDF64:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EDF6C;
	sub_821EB2A0(ctx, base);
	// b 0x821edfac
	goto loc_821EDFAC;
loc_821EDF70:
	// or r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 | ctx.r6.u64;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r4,r5,-6224
	ctx.r4.s64 = ctx.r5.s64 + -6224;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 | ctx.r8.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EDFAC;
	sub_821EB2A0(ctx, base);
loc_821EDFAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EFF20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-4448
	ctx.r4.s64 = ctx.r10.s64 + -4448;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFF44;
	sub_821EB2A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F01A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-4164
	ctx.r4.s64 = ctx.r10.s64 + -4164;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F01C4;
	sub_821EB2A0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F06E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821F06E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F06F8;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3572
	ctx.r4.s64 = ctx.r11.s64 + -3572;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0710;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0720;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3588
	ctx.r4.s64 = ctx.r11.s64 + -3588;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0738;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0748;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3600
	ctx.r4.s64 = ctx.r11.s64 + -3600;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0760;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0770;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r31,508
	ctx.r5.s64 = ctx.r31.s64 + 508;
	// addi r4,r11,-3644
	ctx.r4.s64 = ctx.r11.s64 + -3644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F078C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F079C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12520
	ctx.r4.s64 = ctx.r11.s64 + -12520;
	// bl 0x821eb2a0
	ctx.lr = 0x821F07B4;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x821eb370
	ctx.lr = 0x821F07D0;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3664
	ctx.r4.s64 = ctx.r11.s64 + -3664;
	// bl 0x821eb2a0
	ctx.lr = 0x821F07E8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F07F8;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3684
	ctx.r4.s64 = ctx.r11.s64 + -3684;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0810;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0820;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3708
	ctx.r4.s64 = ctx.r11.s64 + -3708;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0838;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0848;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3728
	ctx.r4.s64 = ctx.r11.s64 + -3728;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0860;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0870;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3756
	ctx.r4.s64 = ctx.r11.s64 + -3756;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0888;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220aeb8
	ctx.lr = 0x821F089C;
	sub_8220AEB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,384(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F08B8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,-12516
	ctx.r4.s64 = ctx.r10.s64 + -12516;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x821eb2a0
	ctx.lr = 0x821F08DC;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0950
	if (ctx.cr0.lt) goto loc_821F0950;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821f0908
	if (ctx.cr6.eq) goto loc_821F0908;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F0900;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_821F0908:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// lwz r3,1536(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x8219e428
	ctx.lr = 0x821F0914;
	sub_8219E428(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821f094c
	if (ctx.cr0.lt) goto loc_821F094C;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r28,1536(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// lwz r31,1532(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 1532);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F0938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x8215e640
	ctx.lr = 0x821F0944;
	sub_8215E640(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821F094C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821F0950:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F87C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821F87D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r30,r11,2792
	ctx.r30.s64 = ctx.r11.s64 + 2792;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r30,-96
	ctx.r5.s64 = ctx.r30.s64 + -96;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// clrlwi r29,r10,12
	ctx.r29.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r31,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F8830;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f88ec
	if (!ctx.cr0.eq) goto loc_821F88EC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F8840;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8850
	if (ctx.cr0.eq) goto loc_821F8850;
	// bl 0x8220d6a0
	ctx.lr = 0x821F884C;
	sub_8220D6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F8850:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821f8864
	if (!ctx.cr6.eq) goto loc_821F8864;
loc_821F8858:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821f8c74
	goto loc_821F8C74;
loc_821F8864:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,931
	ctx.r11.s64 = 931;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821f8948
	goto loc_821F8948;
loc_821F8874:
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821F887C;
	sub_8220D6F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x821f889c
	if (!ctx.cr0.lt) goto loc_821F889C;
loc_821F8884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F8888:
	// bl 0x82113c30
	ctx.lr = 0x821F888C;
	sub_82113C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F8894;
	sub_8220DDF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821f8c74
	goto loc_821F8C74;
loc_821F889C:
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x821F88B4;
	sub_8215E640(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8215e640
	ctx.lr = 0x821F88C4;
	sub_8215E640(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
loc_821F88C8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x8215e640
	ctx.lr = 0x821F88D8;
	sub_8215E640(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8220e150
	ctx.lr = 0x821F88E4;
	sub_8220E150(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f8884
	goto loc_821F8884;
loc_821F88EC:
	// addi r5,r30,-192
	ctx.r5.s64 = ctx.r30.s64 + -192;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F8914;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f896c
	if (!ctx.cr0.eq) goto loc_821F896C;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F8924;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8934
	if (ctx.cr0.eq) goto loc_821F8934;
	// bl 0x8220d6a0
	ctx.lr = 0x821F8930;
	sub_8220D6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F8934:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f8858
	if (ctx.cr6.eq) goto loc_821F8858;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r11,1863
	ctx.r11.s64 = 1863;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_821F8948:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220de30
	ctx.lr = 0x821F895C;
	sub_8220DE30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x821f8888
	if (ctx.cr0.lt) goto loc_821F8888;
	// b 0x821f8874
	goto loc_821F8874;
loc_821F896C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F8994;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f8c74
	if (!ctx.cr0.eq) goto loc_821F8C74;
	// lwz r4,176(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r27,20(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r7,60(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f8a08
	if (!ctx.cr6.eq) goto loc_821F8A08;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f8b08
	if (ctx.cr6.eq) goto loc_821F8B08;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8215eac8
	ctx.lr = 0x821F89D8;
	sub_8215EAC8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F89DC:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x821f89dc
	if (!ctx.cr0.eq) goto loc_821F89DC;
	// b 0x821f8b08
	goto loc_821F8B08;
loc_821F8A08:
	// lwz r6,192(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r27
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwz r5,60(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 60);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f8a6c
	if (!ctx.cr6.eq) goto loc_821F8A6C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f8b08
	if (ctx.cr6.eq) goto loc_821F8B08;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x8215eac8
	ctx.lr = 0x821F8A3C;
	sub_8215EAC8(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821F8A40:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r27
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x821f8a40
	if (!ctx.cr0.eq) goto loc_821F8A40;
	// b 0x821f8b08
	goto loc_821F8B08;
loc_821F8A6C:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x821f8c70
	if (!ctx.cr6.eq) goto loc_821F8C70;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f8abc
	if (ctx.cr6.eq) goto loc_821F8ABC;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f8abc
	if (!ctx.cr6.eq) goto loc_821F8ABC;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821f8abc
	if (!ctx.cr6.eq) goto loc_821F8ABC;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821f8abc
	if (!ctx.cr6.eq) goto loc_821F8ABC;
	// stw r6,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// b 0x821f8afc
	goto loc_821F8AFC;
loc_821F8ABC:
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f8c70
	if (ctx.cr6.eq) goto loc_821F8C70;
	// lwz r10,24(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r11,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f8c70
	if (!ctx.cr6.eq) goto loc_821F8C70;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821f8c70
	if (!ctx.cr6.eq) goto loc_821F8C70;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821f8c70
	if (!ctx.cr6.eq) goto loc_821F8C70;
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
loc_821F8AFC:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_821F8B08:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f8bdc
	if (ctx.cr6.eq) goto loc_821F8BDC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r8,16(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfd f12,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// lfd f13,-9888(r7)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r7.u32 + -9888);
loc_821F8B34:
	// lwz r11,-16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821f8b60
	if (!ctx.cr0.eq) goto loc_821F8B60;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_821F8B60:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821f8b70
	if (ctx.cr6.eq) goto loc_821F8B70;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821F8B70:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x821f8b7c
	if (ctx.cr6.eq) goto loc_821F8B7C;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_821F8B7C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x821f8ba8
	if (!ctx.cr0.eq) goto loc_821F8BA8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_821F8BA8:
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x821f8bb8
	if (ctx.cr6.eq) goto loc_821F8BB8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_821F8BB8:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x821f8bc4
	if (ctx.cr6.eq) goto loc_821F8BC4;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_821F8BC4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821f8b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F8B34;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x821f8bdc
	if (!ctx.cr6.eq) goto loc_821F8BDC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f8c70
	if (ctx.cr6.eq) goto loc_821F8C70;
loc_821F8BDC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F8BE4;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f8bf4
	if (ctx.cr0.eq) goto loc_821F8BF4;
	// bl 0x8220d6a0
	ctx.lr = 0x821F8BF0;
	sub_8220D6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_821F8BF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f8858
	if (ctx.cr6.eq) goto loc_821F8858;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// oris r4,r11,29792
	ctx.r4.u64 = ctx.r11.u64 | 1952448512;
	// bne cr6,0x821f8c10
	if (!ctx.cr6.eq) goto loc_821F8C10;
	// oris r4,r11,29808
	ctx.r4.u64 = ctx.r11.u64 | 1953497088;
loc_821F8C10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220de30
	ctx.lr = 0x821F8C24;
	sub_8220DE30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt 0x821f8888
	if (ctx.cr0.lt) goto loc_821F8888;
	// lwz r4,260(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821F8C38;
	sub_8220D6F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x821f8884
	if (ctx.cr0.lt) goto loc_821F8884;
	// lwz r11,260(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x821F8C58;
	sub_8215E640(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8215e640
	ctx.lr = 0x821F8C68;
	sub_8215E640(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x821f88c8
	goto loc_821F88C8;
loc_821F8C70:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F8C74:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82207590) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82207598;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
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
	// lwz r11,304(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 304);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822075CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207320
	ctx.lr = 0x822075D8;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,320(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207610;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220763C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,312(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 312);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// or r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8220767C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bne cr6,0x82207694
	if (!ctx.cr6.eq) goto loc_82207694;
	// lis r11,7
	ctx.r11.s64 = 458752;
	// b 0x822076e0
	goto loc_822076E0;
loc_82207694:
	// cmplwi cr6,r30,9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 9, ctx.xer);
	// beq cr6,0x822076dc
	if (ctx.cr6.eq) goto loc_822076DC;
	// cmplwi cr6,r30,90
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 90, ctx.xer);
	// bne cr6,0x822076ac
	if (!ctx.cr6.eq) goto loc_822076AC;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// b 0x822076e0
	goto loc_822076E0;
loc_822076AC:
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// bne cr6,0x822076bc
	if (!ctx.cr6.eq) goto loc_822076BC;
loc_822076B4:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x822076e0
	goto loc_822076E0;
loc_822076BC:
	// cmplwi cr6,r30,14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 14, ctx.xer);
	// beq cr6,0x822076b4
	if (ctx.cr6.eq) goto loc_822076B4;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// beq cr6,0x822076b4
	if (ctx.cr6.eq) goto loc_822076B4;
	// cmplwi cr6,r30,7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 7, ctx.xer);
	// beq cr6,0x822076b4
	if (ctx.cr6.eq) goto loc_822076B4;
	// cmplwi cr6,r30,37
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 37, ctx.xer);
	// bne cr6,0x822076e4
	if (!ctx.cr6.eq) goto loc_822076E4;
loc_822076DC:
	// lis r11,15
	ctx.r11.s64 = 983040;
loc_822076E0:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_822076E4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82207790
	if (ctx.cr6.eq) goto loc_82207790;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207744;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207768
	if (ctx.cr6.eq) goto loc_82207768;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821fdd88
	ctx.lr = 0x82207760;
	sub_821FDD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8220776c
	goto loc_8220776C;
loc_82207768:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8220776C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
loc_82207790:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8220783c
	if (ctx.cr6.eq) goto loc_8220783C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822077C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822077F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82207814
	if (ctx.cr6.eq) goto loc_82207814;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821fdd88
	ctx.lr = 0x8220780C;
	sub_821FDD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82207818
	goto loc_82207818;
loc_82207814:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82207818:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207834;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
loc_8220783C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822078e8
	if (ctx.cr6.eq) goto loc_822078E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lwzx r4,r10,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82207870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220789C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822078c0
	if (ctx.cr6.eq) goto loc_822078C0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x821fdd88
	ctx.lr = 0x822078B8;
	sub_821FDD88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x822078c4
	goto loc_822078C4;
loc_822078C0:
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822078C4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822078E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
loc_822078E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822078FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8220790C;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82207918
	if (ctx.cr0.lt) goto loc_82207918;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82207918:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220E270) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm. r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220e2d4
	if (ctx.cr0.eq) goto loc_8220E2D4;
	// lis r8,20480
	ctx.r8.s64 = 1342177280;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8220e2cc
	if (ctx.cr6.eq) goto loc_8220E2CC;
	// lis r8,20512
	ctx.r8.s64 = 1344274432;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8220e2c4
	if (ctx.cr6.eq) goto loc_8220E2C4;
	// lis r8,28800
	ctx.r8.s64 = 1887436800;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8220e2cc
	if (ctx.cr6.eq) goto loc_8220E2CC;
	// rlwinm r11,r9,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000000;
	// lis r8,24576
	ctx.r8.s64 = 1610612736;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8220e2bc
	if (!ctx.cr6.eq) goto loc_8220E2BC;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8220e2d8
	goto loc_8220E2D8;
loc_8220E2BC:
	// clrlwi r3,r9,12
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFFF;
	// b 0x8220e2d8
	goto loc_8220E2D8;
loc_8220E2C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220e2d8
	goto loc_8220E2D8;
loc_8220E2CC:
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x8220e2d8
	goto loc_8220E2D8;
loc_8220E2D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220E2D8:
	// mullw r11,r3,r4
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8220e304
	if (!ctx.cr6.gt) goto loc_8220E304;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8220e2fc
	if (ctx.cr6.eq) goto loc_8220E2FC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_8220E2FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220E304:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F830) {
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
	// bl 0x8220e5c0
	ctx.lr = 0x8220F850;
	sub_8220E5C0(ctx, base);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// stw r30,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r30.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,9876
	ctx.r9.s64 = ctx.r9.s64 + 9876;
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// stw r10,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// stw r10,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r10.u32);
	// stw r10,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r10,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r10.u32);
	// stw r10,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r10,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// stw r10,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r11,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822122E0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822122E8;
	__savegprlr_24(ctx, base);
	// lwz r29,20(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822124c4
	if (ctx.cr6.eq) goto loc_822124C4;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822124c4
	if (!ctx.cr6.eq) goto loc_822124C4;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r27,r11,0,0,11
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r27,r9
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82212384
	if (!ctx.cr6.eq) goto loc_82212384;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82212360
	if (ctx.cr6.eq) goto loc_82212360;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82212344:
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82212360
	if (ctx.cr6.eq) goto loc_82212360;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82212344
	if (ctx.cr6.lt) goto loc_82212344;
loc_82212360:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82212374
	if (ctx.cr6.eq) goto loc_82212374;
	// lfd f0,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_82212374:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x822124c8
	goto loc_822124C8;
loc_82212384:
	// lis r25,8272
	ctx.r25.s64 = 542113792;
	// lis r26,8256
	ctx.r26.s64 = 541065216;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8221239c
	if (ctx.cr6.eq) goto loc_8221239C;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822124c4
	if (!ctx.cr6.eq) goto loc_822124C4;
loc_8221239C:
	// lwz r28,12(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822123d0
	if (ctx.cr6.eq) goto loc_822123D0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_822123B4:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822123d0
	if (ctx.cr6.eq) goto loc_822123D0;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822123b4
	if (ctx.cr6.lt) goto loc_822123B4;
loc_822123D0:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,16(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_822123E4:
	// mullw r9,r4,r11
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r11.s32);
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// mullw r9,r11,r8
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r24,r3,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r9,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r24,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r29.u32);
	// lwz r24,4(r9)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r24,r31
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// lwz r24,4(r24)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// rlwinm. r24,r24,0,23,23
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82212430
	if (ctx.cr0.eq) goto loc_82212430;
	// lwz r24,8(r9)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x82212490
	if (ctx.cr6.eq) goto loc_82212490;
loc_82212430:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x822123e4
	if (ctx.cr6.lt) goto loc_822123E4;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822124c4
	if (!ctx.cr6.eq) goto loc_822124C4;
	// add r10,r28,r7
	ctx.r10.u64 = ctx.r28.u64 + ctx.r7.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822124c4
	if (!ctx.cr6.eq) goto loc_822124C4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82212484
	if (ctx.cr6.eq) goto loc_82212484;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f13,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// lfd f0,26280(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 26280);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
loc_82212484:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822124c8
	goto loc_822124C8;
loc_82212490:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822124c8
	if (ctx.cr6.eq) goto loc_822124C8;
	// lfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// lfd f13,0(r5)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// bne cr6,0x822124b4
	if (!ctx.cr6.eq) goto loc_822124B4;
	// fmul f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 * ctx.f13.f64;
	// stfd f0,0(r5)
	REX_STORE_U64(ctx.r5.u32 + 0, ctx.f0.u64);
	// b 0x822124c8
	goto loc_822124C8;
loc_822124B4:
	// lfd f12,0(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// fmadd f0,f0,f13,f12
	ctx.f0.f64 = std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f12.f64);
	// stfd f0,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.f0.u64);
	// b 0x822124c8
	goto loc_822124C8;
loc_822124C4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_822124C8:
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221A360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8221A368;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// bl 0x822173b0
	ctx.lr = 0x8221A37C;
	sub_822173B0(ctx, base);
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8221a3b4
	if (!ctx.cr6.gt) goto loc_8221A3B4;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8221A394:
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221a394
	if (ctx.cr6.lt) goto loc_8221A394;
loc_8221A3B4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r20,-1
	ctx.r20.s64 = -1;
	// mr r15,r14
	ctx.r15.u64 = ctx.r14.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// lfd f30,-9888(r9)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r9.u32 + -9888);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8221a6a0
	if (!ctx.cr6.gt) goto loc_8221A6A0;
	// mr r17,r14
	ctx.r17.u64 = ctx.r14.u64;
loc_8221A3E4:
	// lwz r11,24(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
	// lwzx r30,r17,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221a68c
	if (ctx.cr0.eq) goto loc_8221A68C;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221a68c
	if (ctx.cr6.lt) goto loc_8221A68C;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8221a68c
	if (ctx.cr6.gt) goto loc_8221A68C;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// divwu. r21,r10,r11
	ctx.r21.u64 = uint32_t(ctx.r11.u32 ? ctx.r10.u32 / ctx.r11.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x8221a68c
	if (ctx.cr0.eq) goto loc_8221A68C;
loc_8221A42C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a560
	if (ctx.cr6.eq) goto loc_8221A560;
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
loc_8221A444:
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r8,r24,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r8.u32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r8,r9
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221a54c
	if (ctx.cr0.eq) goto loc_8221A54C;
	// lwz r9,20(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r5,24(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x8221a54c
	if (ctx.cr6.eq) goto loc_8221A54C;
	// lwz r28,20(r16)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r27,24(r16)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
loc_8221A498:
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwzx r11,r31,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8221a4e0
	if (ctx.cr6.eq) goto loc_8221A4E0;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_8221A4C4:
	// lwzx r4,r8,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221a4e0
	if (ctx.cr6.eq) goto loc_8221A4E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221a4c4
	if (ctx.cr6.lt) goto loc_8221A4C4;
loc_8221A4E0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// beq cr6,0x8221a514
	if (ctx.cr6.eq) goto loc_8221A514;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8220fb78
	ctx.lr = 0x8221A500;
	sub_8220FB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221a528
	if (ctx.cr0.eq) goto loc_8221A528;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// b 0x8221a548
	goto loc_8221A548;
loc_8221A514:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8220fb78
	ctx.lr = 0x8221A520;
	sub_8220FB78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221a544
	if (!ctx.cr0.eq) goto loc_8221A544;
loc_8221A528:
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,24(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x8221a498
	if (!ctx.cr6.eq) goto loc_8221A498;
	// b 0x8221a54c
	goto loc_8221A54C;
loc_8221A544:
	// stw r14,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r14.u32);
loc_8221A548:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
loc_8221A54C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a444
	if (ctx.cr6.lt) goto loc_8221A444;
loc_8221A560:
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221a680
	if (!ctx.cr6.eq) goto loc_8221A680;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221a680
	if (ctx.cr6.eq) goto loc_8221A680;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8221A578:
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r9,16(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 16);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221a61c
	if (ctx.cr6.eq) goto loc_8221A61C;
	// beq 0x8221a5dc
	if (ctx.cr0.eq) goto loc_8221A5DC;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8221a66c
	if (ctx.cr6.eq) goto loc_8221A66C;
loc_8221A5DC:
	// cmpwi cr6,r19,-1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, -1, ctx.xer);
	// bne cr6,0x8221a600
	if (!ctx.cr6.eq) goto loc_8221A600;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r16)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8220ea28
	ctx.lr = 0x8221A5FC;
	sub_8220EA28(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
loc_8221A600:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r11,r23,r11
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r19,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r19.u32);
	// b 0x8221a668
	goto loc_8221A668;
loc_8221A61C:
	// beq 0x8221a62c
	if (ctx.cr0.eq) goto loc_8221A62C;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8221a66c
	if (ctx.cr6.eq) goto loc_8221A66C;
loc_8221A62C:
	// cmpwi cr6,r20,-1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, -1, ctx.xer);
	// bne cr6,0x8221a650
	if (!ctx.cr6.eq) goto loc_8221A650;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r16)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8220ea28
	ctx.lr = 0x8221A64C;
	sub_8220EA28(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
loc_8221A650:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r11,r23,r11
	ctx.r11.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r20,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r20.u32);
loc_8221A668:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8221A66C:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a578
	if (ctx.cr6.lt) goto loc_8221A578;
loc_8221A680:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r21
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8221a42c
	if (ctx.cr6.lt) goto loc_8221A42C;
loc_8221A68C:
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a3e4
	if (ctx.cr6.lt) goto loc_8221A3E4;
loc_8221A6A0:
	// lwz r10,8(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// mr r25,r14
	ctx.r25.u64 = ctx.r14.u64;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8221a6d8
	if (!ctx.cr6.gt) goto loc_8221A6D8;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_8221A6B8:
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221a6b8
	if (ctx.cr6.lt) goto loc_8221A6B8;
loc_8221A6D8:
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221ac90
	if (!ctx.cr6.gt) goto loc_8221AC90;
loc_8221A6E8:
	// lwz r11,24(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ac70
	if (ctx.cr0.eq) goto loc_8221AC70;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221a78c
	if (!ctx.cr6.gt) goto loc_8221A78C;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_8221A714:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r6,20(r16)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,24(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x8221a768
	goto loc_8221A768;
loc_8221A734:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwz r3,0(r7)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r3,r3,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8221a770
	if (ctx.cr0.eq) goto loc_8221A770;
	// lfd f0,32(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8221a900
	if (!ctx.cr6.eq) goto loc_8221A900;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8221a908
	if (ctx.cr6.eq) goto loc_8221A908;
loc_8221A75C:
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8221A764:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8221A768:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8221a734
	if (!ctx.cr6.eq) goto loc_8221A734;
loc_8221A770:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r11,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r11.u32);
	// stw r10,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a714
	if (ctx.cr6.lt) goto loc_8221A714;
loc_8221A78C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,4336
	ctx.r9.s64 = 284164096;
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221ab38
	if (ctx.cr6.eq) goto loc_8221AB38;
	// lis r9,4416
	ctx.r9.s64 = 289406976;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221ab38
	if (ctx.cr6.eq) goto loc_8221AB38;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221a9a4
	if (ctx.cr6.eq) goto loc_8221A9A4;
	// lis r9,8320
	ctx.r9.s64 = 545259520;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8221a9a4
	if (ctx.cr6.eq) goto loc_8221A9A4;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8221a930
	if (ctx.cr6.lt) goto loc_8221A930;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x8221a930
	if (ctx.cr6.gt) goto loc_8221A930;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// divwu r26,r9,r11
	ctx.r26.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble cr6,0x8221a898
	if (!ctx.cr6.gt) goto loc_8221A898;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_8221A80C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x8221a838
	if (!ctx.cr6.eq) goto loc_8221A838;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221a884
	if (ctx.cr6.eq) goto loc_8221A884;
loc_8221A838:
	// lwzx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stwx r6,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// beq cr6,0x8221a87c
	if (ctx.cr6.eq) goto loc_8221A87C;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8221A850:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// stwx r5,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// bdnz 0x8221a850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221A850;
loc_8221A87C:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_8221A884:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a80c
	if (ctx.cr6.lt) goto loc_8221A80C;
loc_8221A898:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221ac70
	if (ctx.cr6.eq) goto loc_8221AC70;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8221a8e8
	if (ctx.cr6.eq) goto loc_8221A8E8;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8221A8B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215e640
	ctx.lr = 0x8221A8D8;
	sub_8215E640(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221a8b8
	if (ctx.cr6.lt) goto loc_8221A8B8;
loc_8221A8E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221a91c
	if (ctx.cr6.eq) goto loc_8221A91C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwimi r11,r10,0,0,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000) | (ctx.r11.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x8221a920
	goto loc_8221A920;
loc_8221A900:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8221a75c
	if (ctx.cr6.eq) goto loc_8221A75C;
loc_8221A908:
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8221a764
	goto loc_8221A764;
loc_8221A91C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8221A920:
	// mullw r10,r26,r27
	ctx.r10.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x8221ac68
	goto loc_8221AC68;
loc_8221A930:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ac70
	if (ctx.cr6.eq) goto loc_8221AC70;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r8,20(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8221A954:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8221a978
	if (!ctx.cr6.eq) goto loc_8221A978;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221a97c
	if (ctx.cr6.eq) goto loc_8221A97C;
loc_8221A978:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8221A97C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8221a954
	if (ctx.cr6.lt) goto loc_8221A954;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221ac70
	if (!ctx.cr6.eq) goto loc_8221AC70;
	// stw r14,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
	// stw r14,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r14.u32);
	// stw r14,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r14.u32);
	// b 0x8221ac6c
	goto loc_8221AC6C;
loc_8221A9A4:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// divwu r26,r9,r11
	ctx.r26.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// ble cr6,0x8221aae4
	if (!ctx.cr6.gt) goto loc_8221AAE4;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
loc_8221A9D0:
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,20(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8221a9fc
	if (!ctx.cr6.eq) goto loc_8221A9FC;
	// lwz r10,24(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8221aad0
	if (ctx.cr6.eq) goto loc_8221AAD0;
loc_8221A9FC:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// lwzx r8,r5,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r30,20(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8221aa50
	if (!ctx.cr6.eq) goto loc_8221AA50;
	// lwz r30,24(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8221aa50
	if (!ctx.cr6.eq) goto loc_8221AA50;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,136(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 136);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r10.u32);
	// b 0x8221aad0
	goto loc_8221AAD0;
loc_8221AA50:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x8221aa84
	if (!ctx.cr6.eq) goto loc_8221AA84;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8221aa84
	if (!ctx.cr6.eq) goto loc_8221AA84;
	// lwz r11,136(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 136);
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r8,48(r7)
	REX_STORE_U32(ctx.r7.u32 + 48, ctx.r8.u32);
	// b 0x8221aad0
	goto loc_8221AAD0;
loc_8221AA84:
	// lwzx r10,r5,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stwx r10,r3,r6
	REX_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r10.u32);
	// beq cr6,0x8221aac8
	if (ctx.cr6.eq) goto loc_8221AAC8;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8221AA9C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// bdnz 0x8221aa9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221AA9C;
loc_8221AAC8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
loc_8221AAD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a9d0
	if (ctx.cr6.lt) goto loc_8221A9D0;
loc_8221AAE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221ac70
	if (ctx.cr6.eq) goto loc_8221AC70;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8221a8e8
	if (ctx.cr6.eq) goto loc_8221A8E8;
	// rlwinm r28,r27,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
loc_8221AB04:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x8215e640
	ctx.lr = 0x8221AB24;
	sub_8215E640(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8221ab04
	if (ctx.cr6.lt) goto loc_8221AB04;
	// b 0x8221a8e8
	goto loc_8221A8E8;
loc_8221AB38:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221ac3c
	if (!ctx.cr6.gt) goto loc_8221AC3C;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8221AB54:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r5,16(r16)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r16.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r5,r5,0,23,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8221abcc
	if (ctx.cr0.eq) goto loc_8221ABCC;
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8221abcc
	if (!ctx.cr6.eq) goto loc_8221ABCC;
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// ori r5,r5,128
	ctx.r5.u64 = ctx.r5.u64 | 128;
	// stw r5,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r5.u32);
	// lfd f0,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x8221abc0
	if (ctx.cr6.eq) goto loc_8221ABC0;
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// b 0x8221abc4
	goto loc_8221ABC4;
loc_8221ABC0:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
loc_8221ABC4:
	// stfd f0,32(r9)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 32, ctx.f0.u64);
	// b 0x8221abfc
	goto loc_8221ABFC;
loc_8221ABCC:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r5,r10,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8221abf0
	if (ctx.cr0.eq) goto loc_8221ABF0;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221abf0
	if (ctx.cr0.eq) goto loc_8221ABF0;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stfd f31,32(r9)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r9.u32 + 32, ctx.f31.u64);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// b 0x8221abf8
	goto loc_8221ABF8;
loc_8221ABF0:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_8221ABF8:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_8221ABFC:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8221ac28
	if (!ctx.cr0.eq) goto loc_8221AC28;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r9,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
loc_8221AC28:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221ab54
	if (ctx.cr6.lt) goto loc_8221AB54;
loc_8221AC3C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8221ac70
	if (ctx.cr6.eq) goto loc_8221AC70;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8221ac5c
	if (ctx.cr6.eq) goto loc_8221AC5C;
	// clrlwi r11,r8,12
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFFF;
	// oris r11,r11,4336
	ctx.r11.u64 = ctx.r11.u64 | 284164096;
	// b 0x8221ac60
	goto loc_8221AC60;
loc_8221AC5C:
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_8221AC60:
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
loc_8221AC68:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8221AC6C:
	// li r15,1
	ctx.r15.s64 = 1;
loc_8221AC70:
	// lwz r11,12(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 12);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221a6e8
	if (ctx.cr6.lt) goto loc_8221A6E8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8221ac90
	if (ctx.cr6.eq) goto loc_8221AC90;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82217c38
	ctx.lr = 0x8221AC90;
	sub_82217C38(ctx, base);
loc_8221AC90:
	// cntlzw r11,r15
	ctx.r11.u64 = ctx.r15.u32 == 0 ? 32 : __builtin_clz(ctx.r15.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82238C48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82238C50;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r28,4352
	ctx.r28.s64 = 285212672;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82238cb4
	if (!ctx.cr6.gt) goto loc_82238CB4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82238C70:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82238ca0
	if (!ctx.cr6.eq) goto loc_82238CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222daf8
	ctx.lr = 0x82238C98;
	sub_8222DAF8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
loc_82238CA0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82238c70
	if (ctx.cr6.lt) goto loc_82238C70;
loc_82238CB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x82238CBC;
	sub_821F5A08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82238d14
	if (!ctx.cr6.gt) goto loc_82238D14;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82238CD0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82238d00
	if (!ctx.cr6.eq) goto loc_82238D00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8222ddf0
	ctx.lr = 0x82238CF8;
	sub_8222DDF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
loc_82238D00:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82238cd0
	if (ctx.cr6.lt) goto loc_82238CD0;
loc_82238D14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x82238D1C;
	sub_821F5A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x82238D24;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218f38
	ctx.lr = 0x82238D34;
	sub_82218F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x82238D44;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b980
	ctx.lr = 0x82238D54;
	sub_8221B980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82238d68
	if (ctx.cr0.lt) goto loc_82238D68;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x82238D64;
	sub_821F5A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82238D68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223D568) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x8223D570;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r21,4416
	ctx.r21.s64 = 289406976;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d604
	if (!ctx.cr6.gt) goto loc_8223D604;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D590:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,4160
	ctx.r9.s64 = 272629760;
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8223d5c8
	if (ctx.cr6.eq) goto loc_8223D5C8;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8223d5f0
	if (!ctx.cr6.eq) goto loc_8223D5F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f87c8
	ctx.lr = 0x8223D5C4;
	sub_821F87C8(ctx, base);
	// b 0x8223d5e8
	goto loc_8223D5E8;
loc_8223D5C8:
	// lwz r10,112(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r10,r10,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223d5e4
	if (ctx.cr0.eq) goto loc_8223D5E4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,113
	ctx.r9.s64 = 113;
	// rlwimi r10,r9,24,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8223D5E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223D5E8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223D5F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d590
	if (ctx.cr6.lt) goto loc_8223D590;
loc_8223D604:
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lis r19,4176
	ctx.r19.s64 = 273678336;
	// lis r20,28720
	ctx.r20.s64 = 1882193920;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r24,29792
	ctx.r24.s64 = 1952448512;
	// lis r23,29808
	ctx.r23.s64 = 1953497088;
	// lis r25,29760
	ctx.r25.s64 = 1950351360;
	// lis r22,29776
	ctx.r22.s64 = 1951399936;
	// bne 0x8223d93c
	if (!ctx.cr0.eq) goto loc_8223D93C;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,8272
	ctx.r28.s64 = 542113792;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d734
	if (!ctx.cr6.gt) goto loc_8223D734;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D640:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lis r10,4112
	ctx.r10.s64 = 269484032;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223d70c
	if (ctx.cr6.eq) goto loc_8223D70C;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8223d6ec
	if (ctx.cr6.eq) goto loc_8223D6EC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223d6e0
	if (ctx.cr6.eq) goto loc_8223D6E0;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x8223d6d4
	if (ctx.cr6.eq) goto loc_8223D6D4;
	// lis r10,8208
	ctx.r10.s64 = 537919488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223d6bc
	if (ctx.cr6.eq) goto loc_8223D6BC;
	// lis r10,8256
	ctx.r10.s64 = 541065216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223d6ac
	if (ctx.cr6.eq) goto loc_8223D6AC;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8223d720
	if (!ctx.cr6.eq) goto loc_8223D720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa2b8
	ctx.lr = 0x8223D6A8;
	sub_821FA2B8(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D6AC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822013a8
	ctx.lr = 0x8223D6B8;
	sub_822013A8(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D6BC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223d704
	if (ctx.cr6.lt) goto loc_8223D704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821faee8
	ctx.lr = 0x8223D6D0;
	sub_821FAEE8(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D6D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f87c8
	ctx.lr = 0x8223D6DC;
	sub_821F87C8(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D6E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7a20
	ctx.lr = 0x8223D6E8;
	sub_821F7A20(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D6EC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223d704
	if (ctx.cr6.lt) goto loc_8223D704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f68b8
	ctx.lr = 0x8223D700;
	sub_821F68B8(ctx, base);
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D704:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223d718
	goto loc_8223D718;
loc_8223D70C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82203a40
	ctx.lr = 0x8223D718;
	sub_82203A40(ctx, base);
loc_8223D718:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223D720:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d640
	if (ctx.cr6.lt) goto loc_8223D640;
loc_8223D734:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x8223D73C;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8223D74C;
	sub_821F5A08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r26,29520
	ctx.r26.s64 = 1934622720;
	// lis r27,29536
	ctx.r27.s64 = 1935671296;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d83c
	if (!ctx.cr6.gt) goto loc_8223D83C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D768:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8223d804
	if (ctx.cr6.eq) goto loc_8223D804;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x8223d7e8
	if (ctx.cr6.eq) goto loc_8223D7E8;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8223d7cc
	if (ctx.cr6.eq) goto loc_8223D7CC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8223d7cc
	if (ctx.cr6.eq) goto loc_8223D7CC;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8223d7b0
	if (ctx.cr6.eq) goto loc_8223D7B0;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8223d828
	if (!ctx.cr6.eq) goto loc_8223D828;
loc_8223D7B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9ce8
	ctx.lr = 0x8223D7B8;
	sub_821F9CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9e88
	ctx.lr = 0x8223D7C8;
	sub_821F9E88(ctx, base);
	// b 0x8223d820
	goto loc_8223D820;
loc_8223D7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f81f8
	ctx.lr = 0x8223D7D4;
	sub_821F81F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8398
	ctx.lr = 0x8223D7E4;
	sub_821F8398(ctx, base);
	// b 0x8223d820
	goto loc_8223D820;
loc_8223D7E8:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223d81c
	if (ctx.cr6.lt) goto loc_8223D81C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fb7b0
	ctx.lr = 0x8223D800;
	sub_821FB7B0(ctx, base);
	// b 0x8223d820
	goto loc_8223D820;
loc_8223D804:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223d81c
	if (ctx.cr6.lt) goto loc_8223D81C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa458
	ctx.lr = 0x8223D818;
	sub_821FA458(ctx, base);
	// b 0x8223d820
	goto loc_8223D820;
loc_8223D81C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223D820:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223D828:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d768
	if (ctx.cr6.lt) goto loc_8223D768;
loc_8223D83C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r28,29552
	ctx.r28.s64 = 1936719872;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d8e4
	if (!ctx.cr6.gt) goto loc_8223D8E4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D854:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8223d8a8
	if (ctx.cr6.gt) goto loc_8223D8A8;
	// beq cr6,0x8223d8c0
	if (ctx.cr6.eq) goto loc_8223D8C0;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8223d89c
	if (ctx.cr6.eq) goto loc_8223D89C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8223d89c
	if (ctx.cr6.eq) goto loc_8223D89C;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8223d89c
	if (ctx.cr6.eq) goto loc_8223D89C;
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8223d8d0
	if (!ctx.cr6.eq) goto loc_8223D8D0;
loc_8223D89C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f8538
	ctx.lr = 0x8223D8A4;
	sub_821F8538(ctx, base);
	// b 0x8223d8c8
	goto loc_8223D8C8;
loc_8223D8A8:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8223d8c0
	if (ctx.cr6.eq) goto loc_8223D8C0;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8223d8c0
	if (ctx.cr6.eq) goto loc_8223D8C0;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8223d8d0
	if (!ctx.cr6.eq) goto loc_8223D8D0;
loc_8223D8C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa028
	ctx.lr = 0x8223D8C8;
	sub_821FA028(ctx, base);
loc_8223D8C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223D8D0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d854
	if (ctx.cr6.lt) goto loc_8223D854;
loc_8223D8E4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d93c
	if (!ctx.cr6.gt) goto loc_8223D93C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D8F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8223d928
	if (!ctx.cr6.eq) goto loc_8223D928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f80c8
	ctx.lr = 0x8223D920;
	sub_821F80C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
loc_8223D928:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d8f8
	if (ctx.cr6.lt) goto loc_8223D8F8;
loc_8223D93C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8223D944;
	sub_821F5A08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d9b4
	if (!ctx.cr6.gt) goto loc_8223D9B4;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D958:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8223d980
	if (ctx.cr6.eq) goto loc_8223D980;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8223d9a0
	if (!ctx.cr6.eq) goto loc_8223D9A0;
loc_8223D980:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9ce8
	ctx.lr = 0x8223D988;
	sub_821F9CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f9e88
	ctx.lr = 0x8223D998;
	sub_821F9E88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
loc_8223D9A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d958
	if (ctx.cr6.lt) goto loc_8223D958;
loc_8223D9B4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223da1c
	if (!ctx.cr6.gt) goto loc_8223DA1C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223D9C8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x8223da00
	if (ctx.cr6.eq) goto loc_8223DA00;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8223da00
	if (ctx.cr6.eq) goto loc_8223DA00;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x8223da00
	if (ctx.cr6.eq) goto loc_8223DA00;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8223da08
	if (!ctx.cr6.eq) goto loc_8223DA08;
loc_8223DA00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fa028
	ctx.lr = 0x8223DA08;
	sub_821FA028(ctx, base);
loc_8223DA08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d9c8
	if (ctx.cr6.lt) goto loc_8223D9C8;
loc_8223DA1C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223da78
	if (!ctx.cr6.gt) goto loc_8223DA78;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DA30:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lis r11,8336
	ctx.r11.s64 = 546308096;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223da64
	if (!ctx.cr6.eq) goto loc_8223DA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f92e0
	ctx.lr = 0x8223DA5C;
	sub_821F92E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
loc_8223DA64:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223da30
	if (ctx.cr6.lt) goto loc_8223DA30;
loc_8223DA78:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dad0
	if (!ctx.cr6.gt) goto loc_8223DAD0;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DA8C:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8223dabc
	if (!ctx.cr6.eq) goto loc_8223DABC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5be0
	ctx.lr = 0x8223DAB4;
	sub_821F5BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
loc_8223DABC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223da8c
	if (ctx.cr6.lt) goto loc_8223DA8C;
loc_8223DAD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223db40
	if (!ctx.cr6.gt) goto loc_8223DB40;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DAE4:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8223db2c
	if (!ctx.cr6.eq) goto loc_8223DB2C;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223db20
	if (ctx.cr6.lt) goto loc_8223DB20;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fb7b0
	ctx.lr = 0x8223DB1C;
	sub_821FB7B0(ctx, base);
	// b 0x8223db24
	goto loc_8223DB24;
loc_8223DB20:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8223DB24:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223DB2C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223dae4
	if (ctx.cr6.lt) goto loc_8223DAE4;
loc_8223DB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8223DB48;
	sub_821F5A08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dbf8
	if (!ctx.cr6.gt) goto loc_8223DBF8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DB5C:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lis r10,4144
	ctx.r10.s64 = 271581184;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223dbd4
	if (ctx.cr6.eq) goto loc_8223DBD4;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x8223dbd4
	if (ctx.cr6.eq) goto loc_8223DBD4;
	// lis r10,4192
	ctx.r10.s64 = 274726912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223dbd4
	if (ctx.cr6.eq) goto loc_8223DBD4;
	// lis r10,4208
	ctx.r10.s64 = 275775488;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223dbd4
	if (ctx.cr6.eq) goto loc_8223DBD4;
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223dbd4
	if (ctx.cr6.eq) goto loc_8223DBD4;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x8223dbe4
	if (!ctx.cr6.eq) goto loc_8223DBE4;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223dbcc
	if (ctx.cr6.lt) goto loc_8223DBCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82201a08
	ctx.lr = 0x8223DBC8;
	sub_82201A08(ctx, base);
	// b 0x8223dbdc
	goto loc_8223DBDC;
loc_8223DBCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223dbdc
	goto loc_8223DBDC;
loc_8223DBD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f7618
	ctx.lr = 0x8223DBDC;
	sub_821F7618(ctx, base);
loc_8223DBDC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8223dca8
	if (ctx.cr6.lt) goto loc_8223DCA8;
loc_8223DBE4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223db5c
	if (ctx.cr6.lt) goto loc_8223DB5C;
loc_8223DBF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8223DC00;
	sub_821F5A08(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223dc5c
	if (!ctx.cr6.gt) goto loc_8223DC5C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223DC14:
	// stw r30,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r30.u32);
	// lis r11,20528
	ctx.r11.s64 = 1345323008;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8223dc48
	if (!ctx.cr6.eq) goto loc_8223DC48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f6038
	ctx.lr = 0x8223DC40;
	sub_821F6038(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
loc_8223DC48:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223dc14
	if (ctx.cr6.lt) goto loc_8223DC14;
loc_8223DC5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x8223DC64;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218f38
	ctx.lr = 0x8223DC74;
	sub_82218F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x8223DC84;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b980
	ctx.lr = 0x8223DC94;
	sub_8221B980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223dca8
	if (ctx.cr0.lt) goto loc_8223DCA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8223DCA4;
	sub_821F5A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223DCA8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224EFB8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224EFFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224F478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8224F480;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8224f4ec
	if (ctx.cr6.lt) goto loc_8224F4EC;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// subf r31,r11,r9
	ctx.r31.u64 = ctx.r9.u64 - ctx.r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x8224f4c4
	if (!ctx.cr6.gt) goto loc_8224F4C4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// b 0x8224f4ec
	goto loc_8224F4EC;
loc_8224F4C4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// blt cr6,0x8224f4d0
	if (ctx.cr6.lt) goto loc_8224F4D0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_8224F4D0:
	// bl 0x8215e640
	ctx.lr = 0x8224F4D4;
	sub_8215E640(ctx, base);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x8224f4e0
	if (!ctx.cr6.lt) goto loc_8224F4E0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8224F4E0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_8224F4EC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224FD18) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-15764
	ctx.r4.s64 = ctx.r11.s64 + -15764;
	// bl 0x8224efb8
	ctx.lr = 0x8224FD38;
	sub_8224EFB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12524
	ctx.r4.s64 = ctx.r11.s64 + -12524;
	// bl 0x8224efb8
	ctx.lr = 0x8224FD48;
	sub_8224EFB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822501D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822501E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r15,r6
	ctx.r15.u64 = ctx.r6.u64;
	// bl 0x8224f010
	ctx.lr = 0x822501F8;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r14,r11,-15620
	ctx.r14.s64 = ctx.r11.s64 + -15620;
	// addi r16,r10,-15768
	ctx.r16.s64 = ctx.r10.s64 + -15768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250218;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82250220;
	sub_8224FD68(ctx, base);
	// lwz r10,4(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822503a4
	if (!ctx.cr6.lt) goto loc_822503A4;
	// lis r29,-32249
	ctx.r29.s64 = -2113470464;
	// lis r30,-32249
	ctx.r30.s64 = -2113470464;
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// lis r28,-32249
	ctx.r28.s64 = -2113470464;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r21,r29,-15712
	ctx.r21.s64 = ctx.r29.s64 + -15712;
	// addi r20,r30,-15624
	ctx.r20.s64 = ctx.r30.s64 + -15624;
	// addi r28,r28,-15892
	ctx.r28.s64 = ctx.r28.s64 + -15892;
	// addi r30,r3,-15628
	ctx.r30.s64 = ctx.r3.s64 + -15628;
	// addi r29,r4,-15636
	ctx.r29.s64 = ctx.r4.s64 + -15636;
	// addi r26,r5,-15248
	ctx.r26.s64 = ctx.r5.s64 + -15248;
	// addi r25,r6,-15644
	ctx.r25.s64 = ctx.r6.s64 + -15644;
	// addi r19,r7,4180
	ctx.r19.s64 = ctx.r7.s64 + 4180;
	// addi r18,r8,4172
	ctx.r18.s64 = ctx.r8.s64 + 4172;
	// addi r24,r9,-15656
	ctx.r24.s64 = ctx.r9.s64 + -15656;
	// addi r23,r10,-15664
	ctx.r23.s64 = ctx.r10.s64 + -15664;
	// addi r22,r11,-15672
	ctx.r22.s64 = ctx.r11.s64 + -15672;
loc_8225029C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,0,16,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFE00;
	// cmplwi cr6,r11,24576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24576, ctx.xer);
	// beq cr6,0x82250384
	if (ctx.cr6.eq) goto loc_82250384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x822502B4;
	sub_8224F010(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822502C4;
	sub_8224EFB8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-12(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + -12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822502D8;
	sub_8224EFB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,-8(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822502EC;
	sub_8224EFB8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82250300
	if (!ctx.cr0.eq) goto loc_82250300;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82250300:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x8225030C;
	sub_8224F1D0(ctx, base);
	// lwz r11,-4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -4);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r6,r11,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r5,r10,23,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7F;
	// lwzx r7,r9,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// bl 0x8215f3b8
	ctx.lr = 0x82250330;
	sub_8215F3B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82250340;
	sub_8224F1D0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82250354
	if (!ctx.cr0.eq) goto loc_82250354;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
loc_82250354:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82250360;
	sub_8224F1D0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,16,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FFF;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// bl 0x8224f140
	ctx.lr = 0x8225037C;
	sub_8224F140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82250384;
	sub_8224FD18(ctx, base);
loc_82250384:
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// lwz r10,0(r17)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r27,-12
	ctx.r9.s64 = ctx.r27.s64 + -12;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225029c
	if (ctx.cr6.lt) goto loc_8225029C;
loc_822503A4:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x822503B0;
	sub_8224F070(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822542A8) {
	REX_FUNC_PROLOGUE();
	// b 0x82252930
	sub_82252930(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254300) {
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
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82253408
	ctx.lr = 0x82254318;
	sub_82253408(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82254378) {
	REX_FUNC_PROLOGUE();
	// b 0x82253900
	sub_82253900(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822546E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822546E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82254748
	if (!ctx.cr6.eq) goto loc_82254748;
	// lwz r8,128(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82254710:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82254734
	if (ctx.cr0.eq) goto loc_82254734;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82254710
	if (ctx.cr6.eq) goto loc_82254710;
loc_82254734:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82254748
	if (!ctx.cr0.eq) goto loc_82254748;
	// lwz r11,256(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 256);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82254808
	if (ctx.cr6.eq) goto loc_82254808;
loc_82254748:
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82254788
	if (!ctx.cr6.eq) goto loc_82254788;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r11,-15048
	ctx.r4.s64 = ctx.r11.s64 + -15048;
	// bl 0x8215f2c0
	ctx.lr = 0x82254764;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8225477c
	if (ctx.cr0.eq) goto loc_8225477C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82254784
	goto loc_82254784;
loc_8225477C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82254784:
	// bl 0x82251698
	ctx.lr = 0x82254788;
	sub_82251698(ctx, base);
loc_82254788:
	// lwz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822547e4
	if (ctx.cr6.eq) goto loc_822547E4;
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// blt cr6,0x822547b8
	if (ctx.cr6.lt) goto loc_822547B8;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_822547B8:
	// lhz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x822547cc
	if (!ctx.cr0.eq) goto loc_822547CC;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_822547CC:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,162(r31)
	REX_STORE_U16(ctx.r31.u32 + 162, ctx.r9.u16);
	// lwz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_822547E4:
	// sth r9,156(r31)
	REX_STORE_U16(ctx.r31.u32 + 156, ctx.r9.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r9,158(r31)
	REX_STORE_U16(ctx.r31.u32 + 158, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82254398
	ctx.lr = 0x82254800;
	sub_82254398(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82254808:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82257A30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82257A38;
	__savegprlr_23(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x8215e640
	ctx.lr = 0x82257A68;
	sub_8215E640(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r27,r11,-15440
	ctx.r27.s64 = ctx.r11.s64 + -15440;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82257a88
	if (ctx.cr6.eq) goto loc_82257A88;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-13312
	ctx.r4.s64 = ctx.r11.s64 + -13312;
	// b 0x82257aa4
	goto loc_82257AA4;
loc_82257A88:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257aa0
	if (ctx.cr6.eq) goto loc_82257AA0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-13324
	ctx.r4.s64 = ctx.r11.s64 + -13324;
	// b 0x82257aa4
	goto loc_82257AA4;
loc_82257AA0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82257AA4:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215f3b8
	ctx.lr = 0x82257ABC;
	sub_8215F3B8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82257af0
	if (!ctx.cr6.eq) goto loc_82257AF0;
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82257bf4
	if (!ctx.cr6.eq) goto loc_82257BF4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82257688
	ctx.lr = 0x82257AE4;
	sub_82257688(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82257be8
	if (ctx.cr6.eq) goto loc_82257BE8;
loc_82257AF0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-13332
	ctx.r4.s64 = ctx.r11.s64 + -13332;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8215f3b8
	ctx.lr = 0x82257B0C;
	sub_8215F3B8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,112(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82255c98
	ctx.lr = 0x82257B2C;
	sub_82255C98(ctx, base);
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82257d1c
	if (ctx.cr6.eq) goto loc_82257D1C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r30,r11,9925
	ctx.r30.s64 = ctx.r11.s64 + 9925;
	// addi r25,r10,-12088
	ctx.r25.s64 = ctx.r10.s64 + -12088;
loc_82257B4C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8215f3b8
	ctx.lr = 0x82257B5C;
	sub_8215F3B8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82257b70
	if (!ctx.cr6.lt) goto loc_82257B70;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82257B70:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// bl 0x82257a30
	ctx.lr = 0x82257B98;
	sub_82257A30(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82257bd8
	if (ctx.cr6.eq) goto loc_82257BD8;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82257BD8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82257b4c
	if (ctx.cr6.lt) goto loc_82257B4C;
	// b 0x82257d1c
	goto loc_82257D1C;
loc_82257BE8:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82257d1c
	if (ctx.cr6.eq) goto loc_82257D1C;
loc_82257BF4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8215f3b8
	ctx.lr = 0x82257C10;
	sub_8215F3B8(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,92(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82257d1c
	if (ctx.cr6.eq) goto loc_82257D1C;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r10,-14356
	ctx.r27.s64 = ctx.r10.s64 + -14356;
	// addi r26,r11,9925
	ctx.r26.s64 = ctx.r11.s64 + 9925;
loc_82257C3C:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// stw r10,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 2);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 8);
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 10);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82255c98
	ctx.lr = 0x82257C90;
	sub_82255C98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82257ca8
	if (!ctx.cr6.lt) goto loc_82257CA8;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82257CA8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// bl 0x82257a30
	ctx.lr = 0x82257CD0;
	sub_82257A30(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82257d10
	if (ctx.cr6.eq) goto loc_82257D10;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82257D10:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82257c3c
	if (!ctx.cr0.eq) goto loc_82257C3C;
loc_82257D1C:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82260708) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82260710;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822607bc
	if (ctx.cr6.lt) goto loc_822607BC;
	// bl 0x823712d0
	ctx.lr = 0x82260740;
	sub_823712D0(ctx, base);
	// b 0x822607bc
	goto loc_822607BC;
loc_82260744:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x822607e8
	if (!ctx.cr0.eq) goto loc_822607E8;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8226076c
	if (!ctx.cr6.eq) goto loc_8226076C;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x822607a8
	goto loc_822607A8;
loc_8226076C:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x822607a4
	if (ctx.cr6.eq) goto loc_822607A4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822607a4
	if (ctx.cr6.eq) goto loc_822607A4;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x8226078c
	if (!ctx.cr6.eq) goto loc_8226078C;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x822607a8
	goto loc_822607A8;
loc_8226078C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82260428
	ctx.lr = 0x8226079C;
	sub_82260428(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x822607ac
	goto loc_822607AC;
loc_822607A4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_822607A8:
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_822607AC:
	// subf r11,r30,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x822607e8
	if (ctx.cr6.gt) goto loc_822607E8;
loc_822607BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82260744
	if (!ctx.cr6.eq) goto loc_82260744;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x822607e8
	if (!ctx.cr6.eq) goto loc_822607E8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822607E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_822607E8:
	// bl 0x823712d0
	ctx.lr = 0x822607EC;
	sub_823712D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x822607e0
	goto loc_822607E0;
}

DEFINE_REX_FUNC(sub_82263FB8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82263ff4
	if (!ctx.cr6.eq) goto loc_82263FF4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13800
	ctx.r6.s64 = ctx.r11.s64 + -13800;
	// addi r5,r10,-13816
	ctx.r5.s64 = ctx.r10.s64 + -13816;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,241
	ctx.r7.s64 = 241;
	// bl 0x82260f30
	ctx.lr = 0x82263FF4;
	sub_82260F30(ctx, base);
loc_82263FF4:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
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

DEFINE_REX_FUNC(sub_82264678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82264680;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,1512
	ctx.r26.s64 = ctx.r10.s64 + 1512;
	// bne cr6,0x822646c8
	if (!ctx.cr6.eq) goto loc_822646C8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1808
	ctx.r5.s64 = ctx.r11.s64 + 1808;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822646C8;
	sub_82260F30(ctx, base);
loc_822646C8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822646ec
	if (!ctx.cr6.eq) goto loc_822646EC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1796
	ctx.r5.s64 = ctx.r11.s64 + 1796;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822646EC;
	sub_82260F30(ctx, base);
loc_822646EC:
	// li r4,32
	ctx.r4.s64 = 32;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x822646FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82264720
	if (!ctx.cr0.eq) goto loc_82264720;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1784
	ctx.r5.s64 = ctx.r11.s64 + 1784;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264720;
	sub_82260F30(ctx, base);
loc_82264720:
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82314800
	ctx.lr = 0x82264744;
	sub_82314800(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82264388
	ctx.lr = 0x8226474C;
	sub_82264388(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x82264774
	if (!ctx.cr0.eq) goto loc_82264774;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1764
	ctx.r5.s64 = ctx.r11.s64 + 1764;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264774;
	sub_82260F30(ctx, base);
loc_82264774:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82265D68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82265D70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,1512
	ctx.r29.s64 = ctx.r10.s64 + 1512;
	// bne cr6,0x82265dac
	if (!ctx.cr6.eq) goto loc_82265DAC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2116
	ctx.r5.s64 = ctx.r11.s64 + 2116;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82265DAC;
	sub_82260F30(ctx, base);
loc_82265DAC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82265dc0
	if (!ctx.cr6.eq) goto loc_82265DC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82265e00
	goto loc_82265E00;
loc_82265DC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82265dd4
	if (!ctx.cr6.eq) goto loc_82265DD4;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82265de0
	goto loc_82265DE0;
loc_82265DD4:
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82265dfc
	if (!ctx.cr6.eq) goto loc_82265DFC;
loc_82265DE0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1880
	ctx.r5.s64 = ctx.r11.s64 + 1880;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82265DFC;
	sub_82260F30(ctx, base);
loc_82265DFC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82265E00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266CC8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82266d04
	if (!ctx.cr6.eq) goto loc_82266D04;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,2336
	ctx.r6.s64 = ctx.r11.s64 + 2336;
	// addi r5,r10,1396
	ctx.r5.s64 = ctx.r10.s64 + 1396;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,997
	ctx.r7.s64 = 997;
	// bl 0x82260f30
	ctx.lr = 0x82266D04;
	sub_82260F30(ctx, base);
loc_82266D04:
	// lwz r3,2428(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
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

DEFINE_REX_FUNC(sub_82267CB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82267CB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,3288
	ctx.r26.s64 = ctx.r10.s64 + 3288;
	// bne cr6,0x82267d08
	if (!ctx.cr6.eq) goto loc_82267D08;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3280
	ctx.r5.s64 = ctx.r11.s64 + 3280;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,401
	ctx.r7.s64 = 401;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267D08;
	sub_82260F30(ctx, base);
loc_82267D08:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82267d2c
	if (!ctx.cr6.eq) goto loc_82267D2C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3408
	ctx.r5.s64 = ctx.r11.s64 + 3408;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,402
	ctx.r7.s64 = 402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267D2C;
	sub_82260F30(ctx, base);
loc_82267D2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82267ea4
	if (ctx.cr6.eq) goto loc_82267EA4;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82267ea4
	if (ctx.cr6.eq) goto loc_82267EA4;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82267D4C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267d5c
	if (ctx.cr0.eq) goto loc_82267D5C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82267D5C:
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bdnz 0x82267d4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82267D4C;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r24,r31,1168
	ctx.r24.s64 = ctx.r31.s64 + 1168;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82267D74:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267d84
	if (ctx.cr0.eq) goto loc_82267D84;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82267D84:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x82267d74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82267D74;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82267d9c
	if (!ctx.cr6.eq) goto loc_82267D9C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82267de4
	if (ctx.cr6.eq) goto loc_82267DE4;
loc_82267D9C:
	// mulli r11,r29,3
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(3));
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bctrl 
	ctx.lr = 0x82267DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82267df0
	if (!ctx.cr0.eq) goto loc_82267DF0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,3400
	ctx.r5.s64 = ctx.r11.s64 + 3400;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267DE0;
	sub_82260F30(ctx, base);
	// li r23,16
	ctx.r23.s64 = 16;
loc_82267DE4:
	// stw r30,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82267ea8
	goto loc_82267EA8;
loc_82267DF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r27,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// beq cr6,0x82267e48
	if (ctx.cr6.eq) goto loc_82267E48;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82267E18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82267e3c
	if (ctx.cr0.eq) goto loc_82267E3C;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215e640
	ctx.lr = 0x82267E34;
	sub_8215E640(ctx, base);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82267E3C:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82267e18
	if (!ctx.cr6.eq) goto loc_82267E18;
loc_82267E48:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82267de4
	if (ctx.cr6.eq) goto loc_82267DE4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x82267de4
	if (ctx.cr6.eq) goto loc_82267DE4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82267E70:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82267e98
	if (ctx.cr0.eq) goto loc_82267E98;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82267E98:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82267e70
	goto loc_82267E70;
loc_82267EA4:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82267EA8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82271D80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82271D88;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r14,-1
	ctx.r14.s64 = -65536;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r4,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r4.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r6,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r6.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r7,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r7.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r31,128
	ctx.r31.s64 = 128;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82271dcc
	if (!ctx.cr6.eq) goto loc_82271DCC;
	// li r31,132
	ctx.r31.s64 = 132;
loc_82271DCC:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// li r19,0
	ctx.r19.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82271dec
	if (ctx.cr0.eq) goto loc_82271DEC;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// beq 0x82271df0
	if (ctx.cr0.eq) goto loc_82271DF0;
loc_82271DEC:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82271DF0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271dfc
	if (ctx.cr0.eq) goto loc_82271DFC;
	// ori r31,r31,64
	ctx.r31.u64 = ctx.r31.u64 | 64;
loc_82271DFC:
	// bl 0x82177448
	ctx.lr = 0x82271E00;
	sub_82177448(ctx, base);
	// stw r3,768(r22)
	REX_STORE_U32(ctx.r22.u32 + 768, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821786f0
	ctx.lr = 0x82271E0C;
	sub_821786F0(ctx, base);
	// lwz r3,56(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 56);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// stw r19,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82271e34
	if (ctx.cr6.eq) goto loc_82271E34;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82271e34
	if (ctx.cr0.eq) goto loc_82271E34;
	// lwz r20,20(r3)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
loc_82271E34:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r19,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r19.u32);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r19,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r19.u32);
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x82271fe8
	if (ctx.cr6.eq) goto loc_82271FE8;
	// lwz r11,336(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 336);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82271ec4
	if (!ctx.cr6.gt) goto loc_82271EC4;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r9,r22,128
	ctx.r9.s64 = ctx.r22.s64 + 128;
loc_82271E70:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r8,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82271e90
	if (ctx.cr6.gt) goto loc_82271E90;
	// rlwinm r31,r10,12,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82271e90
	if (!ctx.cr6.gt) goto loc_82271E90;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
loc_82271E90:
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bne cr6,0x82271ea0
	if (!ctx.cr6.eq) goto loc_82271EA0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x82271eb0
	goto loc_82271EB0;
loc_82271EA0:
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x82271eb0
	if (!ctx.cr6.eq) goto loc_82271EB0;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// or r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_82271EB0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82271e70
	if (ctx.cr6.lt) goto loc_82271E70;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82271EC4:
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r5,24
	ctx.r9.u64 = ctx.r5.u32 & 0xFF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x82271fdc
	if (ctx.cr6.gt) goto loc_82271FDC;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,5744
	ctx.r12.s64 = ctx.r12.s64 + 5744;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32217
	ctx.r12.s64 = -2111373312;
	// nop 
	// addi r12,r12,7936
	ctx.r12.s64 = ctx.r12.s64 + 7936;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82271F00;
	case 1:
		goto loc_82271F18;
	case 2:
		goto loc_82271F24;
	case 3:
		goto loc_82271F30;
	case 4:
		goto loc_82271F24;
	case 5:
		goto loc_82271F38;
	case 6:
		goto loc_82271F24;
	case 7:
		goto loc_82271F44;
	case 8:
		goto loc_82271F24;
	case 9:
		goto loc_82271F50;
	case 10:
		goto loc_82271F24;
	case 11:
		goto loc_82271F58;
	case 12:
		goto loc_82271F24;
	case 13:
		goto loc_82271F60;
	case 14:
		goto loc_82271F24;
	case 15:
		goto loc_82271F44;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82271F00:
	// oris r11,r10,1792
	ctx.r11.u64 = ctx.r10.u64 | 117440512;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82271f6c
	if (ctx.cr6.eq) goto loc_82271F6C;
	// stw r30,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// b 0x82271f6c
	goto loc_82271F6C;
loc_82271F18:
	// rlwinm r11,r10,0,8,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF8FFFFFF;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82271f6c
	goto loc_82271F6C;
loc_82271F24:
	// li r4,3547
	ctx.r4.s64 = 3547;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82271F30;
	sub_8225B1A0(ctx, base);
loc_82271F30:
	// rlwimi r10,r30,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82271f68
	goto loc_82271F68;
loc_82271F38:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82271F3C:
	// rlwimi r10,r11,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82271f68
	goto loc_82271F68;
loc_82271F44:
	// li r4,3635
	ctx.r4.s64 = 3635;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82271F50;
	sub_8225B1A0(ctx, base);
loc_82271F50:
	// rlwimi r10,r30,26,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 26) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82271f68
	goto loc_82271F68;
loc_82271F58:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82271f3c
	goto loc_82271F3C;
loc_82271F60:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r10,r11,25,5,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
loc_82271F68:
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82271F6C:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 536);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82271fb0
	if (!ctx.cr6.gt) goto loc_82271FB0;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r22,348
	ctx.r11.s64 = ctx.r22.s64 + 348;
loc_82271F84:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// cmplwi cr6,r8,18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 18, ctx.xer);
	// bne cr6,0x82271fa0
	if (!ctx.cr6.eq) goto loc_82271FA0;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r8,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82271FA0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82271f84
	if (ctx.cr6.lt) goto loc_82271F84;
loc_82271FB0:
	// addi r4,r22,972
	ctx.r4.s64 = ctx.r22.s64 + 972;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x8226db80
	ctx.lr = 0x82271FBC;
	sub_8226DB80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82272198
	if (ctx.cr0.eq) goto loc_82272198;
	// lis r4,16961
	ctx.r4.s64 = 1111556096;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21571
	ctx.r4.u64 = ctx.r4.u64 | 21571;
	// bl 0x8224d2b8
	ctx.lr = 0x82271FD4;
	sub_8224D2B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8227219c
	goto loc_8227219C;
loc_82271FDC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82271FE8;
	sub_8225B1A0(ctx, base);
loc_82271FE8:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 536);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82271fb0
	if (!ctx.cr6.gt) goto loc_82271FB0;
	// addi r31,r22,348
	ctx.r31.s64 = ctx.r22.s64 + 348;
loc_82271FFC:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14720, ctx.xer);
	// beq cr6,0x82272180
	if (ctx.cr6.eq) goto loc_82272180;
	// lwz r9,4(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_82272014:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227204c
	if (ctx.cr6.eq) goto loc_8227204C;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272044
	if (ctx.cr6.eq) goto loc_82272044;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82272044
	if (ctx.cr0.eq) goto loc_82272044;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x8227204c
	if (!ctx.cr6.eq) goto loc_8227204C;
loc_82272044:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82272014
	goto loc_82272014;
loc_8227204C:
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r7,27
	ctx.r11.u64 = ctx.r7.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227213c
	if (ctx.cr0.eq) goto loc_8227213C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82272120
	if (ctx.cr6.eq) goto loc_82272120;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x822720c4
	if (ctx.cr6.eq) goto loc_822720C4;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x82272158
	if (!ctx.cr6.eq) goto loc_82272158;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82272180
	if (ctx.cr6.eq) goto loc_82272180;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_82272084:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822720a0
	if (ctx.cr6.eq) goto loc_822720A0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822720a0
	if (!ctx.cr0.eq) goto loc_822720A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82272084
	goto loc_82272084;
loc_822720A0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwimi r9,r11,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r11,r9,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// b 0x82272118
	goto loc_82272118;
loc_822720C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82272180
	if (ctx.cr6.eq) goto loc_82272180;
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
loc_822720D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822720f4
	if (ctx.cr6.eq) goto loc_822720F4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822720f4
	if (!ctx.cr0.eq) goto loc_822720F4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822720d8
	goto loc_822720D8;
loc_822720F4:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r7,17,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x2;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r7,r6,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwimi r8,r11,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r7,r7,0,24,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r11,r8,3,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFF00;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 | ctx.r7.u64;
loc_82272118:
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// b 0x82272180
	goto loc_82272180;
loc_82272120:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272158
	if (!ctx.cr0.eq) goto loc_82272158;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82272180
	if (ctx.cr6.eq) goto loc_82272180;
	// li r4,3550
	ctx.r4.s64 = 3550;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8227213C;
	sub_8225B1A0(ctx, base);
loc_8227213C:
	// rlwinm. r11,r7,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272158
	if (!ctx.cr0.eq) goto loc_82272158;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82272180
	if (ctx.cr6.eq) goto loc_82272180;
	// li r4,3549
	ctx.r4.s64 = 3549;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272158;
	sub_8225B1A0(ctx, base);
loc_82272158:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82272180
	if (!ctx.cr6.eq) goto loc_82272180;
	// rlwinm. r11,r7,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272180
	if (!ctx.cr0.eq) goto loc_82272180;
	// li r4,3596
	ctx.r4.s64 = 3596;
	// lwz r5,-4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b0a8
	ctx.lr = 0x82272178;
	sub_8225B0A8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82272180:
	// lwz r11,536(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 536);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82271ffc
	if (ctx.cr6.lt) goto loc_82271FFC;
	// b 0x82271fb0
	goto loc_82271FB0;
loc_82272198:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8227219C:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// stw r3,772(r22)
	REX_STORE_U32(ctx.r22.u32 + 772, ctx.r3.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// li r5,28
	ctx.r5.s64 = 28;
	// std r19,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r19.u64);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// std r19,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r19.u64);
	// stw r19,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r19.u32);
	// stw r10,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r21,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r21.u32);
	// stw r29,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r29.u32);
	// bl 0x8224d368
	ctx.lr = 0x822721DC;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x822721f4
	if (!ctx.cr0.lt) goto loc_822721F4;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822721F4;
	sub_8225B1A0(ctx, base);
loc_822721F4:
	// lwz r31,16(r22)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// mr r17,r19
	ctx.r17.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82272230
	if (ctx.cr6.eq) goto loc_82272230;
	// lwz r7,12(r22)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_82272210:
	// add r3,r7,r9
	ctx.r3.u64 = ctx.r7.u64 + ctx.r9.u64;
	// bl 0x8226d8a0
	ctx.lr = 0x82272218;
	sub_8226D8A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272224
	if (ctx.cr0.eq) goto loc_82272224;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_82272224:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// bne 0x82272210
	if (!ctx.cr0.eq) goto loc_82272210;
loc_82272230:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r17,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r17.u32);
	// li r15,-1
	ctx.r15.s64 = -1;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// lfd f29,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// beq cr6,0x822727e8
	if (ctx.cr6.eq) goto loc_822727E8;
	// rlwinm r27,r17,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226e388
	ctx.lr = 0x8227225C;
	sub_8226E388(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82272364
	if (ctx.cr6.eq) goto loc_82272364;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// addi r26,r11,11864
	ctx.r26.s64 = ctx.r11.s64 + 11864;
loc_82272284:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// add r9,r24,r11
	ctx.r9.u64 = ctx.r24.u64 + ctx.r11.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// bl 0x8226d8a0
	ctx.lr = 0x82272294;
	sub_8226D8A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272358
	if (ctx.cr0.eq) goto loc_82272358;
	// stwx r9,r28,r25
	REX_STORE_U32(ctx.r28.u32 + ctx.r25.u32, ctx.r9.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r29,r11,24
	ctx.r29.s64 = ctx.r11.s64 + 24;
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// beq 0x82272354
	if (ctx.cr0.eq) goto loc_82272354;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,36
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 36, ctx.xer);
	// beq cr6,0x82272354
	if (ctx.cr6.eq) goto loc_82272354;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_822722CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822722cc
	if (!ctx.cr6.eq) goto loc_822722CC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226e430
	ctx.lr = 0x822722FC;
	sub_8226E430(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// bl 0x82370890
	ctx.lr = 0x82272314;
	sub_82370890(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bne cr6,0x8227234c
	if (!ctx.cr6.eq) goto loc_8227234C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226e388
	ctx.lr = 0x82272334;
	sub_8226E388(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226e388
	ctx.lr = 0x82272348;
	sub_8226E388(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
loc_8227234C:
	// stwx r30,r28,r18
	REX_STORE_U32(ctx.r28.u32 + ctx.r18.u32, ctx.r30.u32);
	// stwx r29,r28,r16
	REX_STORE_U32(ctx.r28.u32 + ctx.r16.u32, ctx.r29.u32);
loc_82272354:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82272358:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r24,r24,40
	ctx.r24.s64 = ctx.r24.s64 + 40;
	// bne 0x82272284
	if (!ctx.cr0.eq) goto loc_82272284;
loc_82272364:
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-10328
	ctx.r6.s64 = ctx.r11.s64 + -10328;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8219dad8
	ctx.lr = 0x8227237C;
	sub_8219DAD8(ctx, base);
	// mulli r30,r17,20
	ctx.r30.s64 = static_cast<int64_t>(ctx.r17.u64 * static_cast<uint64_t>(20));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226e388
	ctx.lr = 0x82272390;
	sub_8226E388(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8224d368
	ctx.lr = 0x822723B0;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x822723c8
	if (!ctx.cr0.lt) goto loc_822723C8;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822723C8;
	sub_8225B1A0(ctx, base);
loc_822723C8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822727b0
	if (ctx.cr6.eq) goto loc_822727B0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r21,r31,6
	ctx.r21.s64 = ctx.r31.s64 + 6;
	// lfs f30,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
loc_822723E4:
	// lwz r28,0(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// addi r20,r21,-6
	ctx.r20.s64 = ctx.r21.s64 + -6;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226d8a0
	ctx.lr = 0x822723F4;
	sub_8226D8A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272790
	if (ctx.cr0.eq) goto loc_82272790;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272414
	if (ctx.cr6.eq) goto loc_82272414;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227281c
	if (!ctx.cr6.eq) goto loc_8227281C;
loc_82272414:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// li r10,40
	ctx.r10.s64 = 40;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// subf r11,r11,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r11.u64;
	// rlwinm r30,r9,29,18,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// divw r4,r11,r10
	ctx.r4.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// bl 0x822f5a40
	ctx.lr = 0x82272434;
	sub_822F5A40(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x8224d368
	ctx.lr = 0x82272450;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x82272830
	if (ctx.cr0.lt) goto loc_82272830;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,12,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1FF;
	// sth r11,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,25,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FF;
	// sth r11,2(r21)
	REX_STORE_U16(ctx.r21.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// sth r11,-2(r21)
	REX_STORE_U16(ctx.r21.u32 + -2, ctx.r11.u16);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822724d0
	if (ctx.cr6.lt) goto loc_822724D0;
	// beq cr6,0x822724b0
	if (ctx.cr6.eq) goto loc_822724B0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822724f0
	if (ctx.cr6.lt) goto loc_822724F0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bne cr6,0x82272840
	if (!ctx.cr6.eq) goto loc_82272840;
	// bl 0x8226d690
	ctx.lr = 0x822724A4;
	sub_8226D690(ctx, base);
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// b 0x822724ec
	goto loc_822724EC;
loc_822724B0:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x822724f0
	if (!ctx.cr6.eq) goto loc_822724F0;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// b 0x822724ec
	goto loc_822724EC;
loc_822724D0:
	// lwz r11,48(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x822724f0
	if (!ctx.cr6.eq) goto loc_822724F0;
	// lhz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 0);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
loc_822724EC:
	// sth r11,0(r21)
	REX_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
loc_822724F0:
	// addi r7,r21,6
	ctx.r7.s64 = ctx.r21.s64 + 6;
	// lwz r4,20(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x822028b0
	ctx.lr = 0x82272508;
	sub_822028B0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x82272848
	if (ctx.cr0.lt) goto loc_82272848;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82272790
	if (ctx.cr6.eq) goto loc_82272790;
	// lwz r24,16(r28)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82272790
	if (ctx.cr6.eq) goto loc_82272790;
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272544
	if (!ctx.cr6.eq) goto loc_82272544;
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272790
	if (ctx.cr6.eq) goto loc_82272790;
loc_82272544:
	// lhz r11,2(r21)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r21.u32 + 2);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r23,r27,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8226e388
	ctx.lr = 0x82272568;
	sub_8226E388(ctx, base);
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,56(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 56);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,-8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwinm r11,r11,28,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// divwu r30,r30,r11
	ctx.r30.u64 = uint32_t(ctx.r11.u32 ? ctx.r30.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq cr6,0x822725ac
	if (ctx.cr6.eq) goto loc_822725AC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822f4c38
	ctx.lr = 0x822725A8;
	sub_822F4C38(ctx, base);
	// lwz r26,32(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
loc_822725AC:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822725d8
	if (ctx.cr6.eq) goto loc_822725D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82272738
	if (ctx.cr6.eq) goto loc_82272738;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x822f4d18
	ctx.lr = 0x822725CC;
	sub_822F4D18(ctx, base);
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// b 0x822725f0
	goto loc_822725F0;
loc_822725D8:
	// lwz r11,76(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82272738
	if (!ctx.cr6.lt) goto loc_82272738;
	// lwz r11,80(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 80);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_822725F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82272714
	if (ctx.cr6.eq) goto loc_82272714;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82272738
	if (!ctx.cr6.lt) goto loc_82272738;
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,28,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822726cc
	if (ctx.cr6.lt) goto loc_822726CC;
	// beq cr6,0x82272694
	if (ctx.cr6.eq) goto loc_82272694;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x82272868
	if (!ctx.cr6.lt) goto loc_82272868;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82272670
	if (ctx.cr6.lt) goto loc_82272670;
	// beq cr6,0x82272650
	if (ctx.cr6.eq) goto loc_82272650;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82272640
	if (ctx.cr6.lt) goto loc_82272640;
	// bne cr6,0x82272874
	if (!ctx.cr6.eq) goto loc_82272874;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// b 0x82272660
	goto loc_82272660;
loc_82272640:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x8227265c
	goto loc_8227265C;
loc_82272650:
	// lwa r11,8(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 8));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_8227265C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_82272660:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r10,r29
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, temp.u32);
	// b 0x82272714
	goto loc_82272714;
loc_82272670:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82272684
	if (ctx.cr6.eq) goto loc_82272684;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82272688
	goto loc_82272688;
loc_82272684:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82272688:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// b 0x82272714
	goto loc_82272714;
loc_82272694:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82272700
	if (ctx.cr6.lt) goto loc_82272700;
	// beq cr6,0x822726c4
	if (ctx.cr6.eq) goto loc_822726C4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822726c4
	if (ctx.cr6.lt) goto loc_822726C4;
	// bne cr6,0x82272880
	if (!ctx.cr6.eq) goto loc_82272880;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.f0.u32);
	// b 0x82272714
	goto loc_82272714;
loc_822726C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8227270c
	goto loc_8227270C;
loc_822726CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82272700
	if (ctx.cr6.lt) goto loc_82272700;
	// beq cr6,0x82272700
	if (ctx.cr6.eq) goto loc_82272700;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82272700
	if (ctx.cr6.lt) goto loc_82272700;
	// bne cr6,0x8227288c
	if (!ctx.cr6.eq) goto loc_8227288C;
	// lfd f0,8(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bne cr6,0x8227270c
	if (!ctx.cr6.eq) goto loc_8227270C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8227270c
	goto loc_8227270C;
loc_82272700:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8227270C:
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r29
	REX_STORE_U32(ctx.r10.u32 + ctx.r29.u32, ctx.r11.u32);
loc_82272714:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r11,r31,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r31.u32 / ctx.r30.u32 : 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf. r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822725ac
	if (!ctx.cr0.eq) goto loc_822725AC;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,0,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x822725ac
	goto loc_822725AC;
loc_82272738:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x8227276c
	if (!ctx.cr6.eq) goto loc_8227276C;
	// rlwinm. r9,r27,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8227276c
	if (ctx.cr0.eq) goto loc_8227276C;
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
loc_82272758:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stwu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x82272758
	if (ctx.cr6.lt) goto loc_82272758;
loc_8227276C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r20,16
	ctx.r7.s64 = ctx.r20.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8224d368
	ctx.lr = 0x82272788;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x82272858
	if (ctx.cr0.lt) goto loc_82272858;
loc_82272790:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r21,r21,20
	ctx.r21.s64 = ctx.r21.s64 + 20;
	// cmplw cr6,r19,r17
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x822723e4
	if (ctx.cr6.lt) goto loc_822723E4;
	// lwz r20,92(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r21,444(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
loc_822727B0:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822727e8
	if (ctx.cr6.eq) goto loc_822727E8;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822727e8
	if (ctx.cr6.eq) goto loc_822727E8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// subf r9,r18,r16
	ctx.r9.u64 = ctx.r16.u64 - ctx.r18.u64;
loc_822727CC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822727e0
	if (ctx.cr6.eq) goto loc_822727E0;
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_822727E0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822727cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822727CC;
loc_822727E8:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r19,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// stw r19,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r19.u32);
	// bl 0x821a9750
	ctx.lr = 0x82272804;
	sub_821A9750(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x82272898
	if (!ctx.cr0.lt) goto loc_82272898;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8227281C;
	sub_8225B1A0(ctx, base);
loc_8227281C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,6028
	ctx.r5.s64 = ctx.r11.s64 + 6028;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272830;
	sub_8225B1A0(ctx, base);
loc_82272830:
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272840;
	sub_8225B1A0(ctx, base);
loc_82272840:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x82272848;
	sub_8225B1A0(ctx, base);
loc_82272848:
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272858;
	sub_8225B1A0(ctx, base);
loc_82272858:
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272868;
	sub_8225B1A0(ctx, base);
loc_82272868:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272874;
	sub_8225B1A0(ctx, base);
loc_82272874:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272880;
	sub_8225B1A0(ctx, base);
loc_82272880:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8227288C;
	sub_8225B1A0(ctx, base);
loc_8227288C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272898;
	sub_8225B1A0(ctx, base);
loc_82272898:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// lwz r4,120(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8224d368
	ctx.lr = 0x822728B4;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x822728cc
	if (!ctx.cr0.lt) goto loc_822728CC;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822728CC;
	sub_8225B1A0(ctx, base);
loc_822728CC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,6016
	ctx.r4.s64 = ctx.r11.s64 + 6016;
	// addi r7,r1,212
	ctx.r7.s64 = ctx.r1.s64 + 212;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bl 0x8224d368
	ctx.lr = 0x822728EC;
	sub_8224D368(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x82272904
	if (!ctx.cr0.lt) goto loc_82272904;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272904;
	sub_8225B1A0(ctx, base);
loc_82272904:
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// bl 0x8224d2d8
	ctx.lr = 0x8227290C;
	sub_8224D2D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// ble cr6,0x82272924
	if (!ctx.cr6.gt) goto loc_82272924;
	// li r4,4548
	ctx.r4.s64 = 4548;
	// bl 0x8225b1a0
	ctx.lr = 0x82272924;
	sub_8225B1A0(ctx, base);
loc_82272924:
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r31,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8226e388
	ctx.lr = 0x82272930;
	sub_8226E388(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,772(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 772);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8224d648
	ctx.lr = 0x82272948;
	sub_8224D648(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x82272960
	if (!ctx.cr0.lt) goto loc_82272960;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272960;
	sub_8225B1A0(ctx, base);
loc_82272960:
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x821786f8
	ctx.lr = 0x8227297C;
	sub_821786F8(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82272994
	if (ctx.cr6.eq) goto loc_82272994;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82251690
	ctx.lr = 0x82272994;
	sub_82251690(ctx, base);
loc_82272994:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272b54
	if (ctx.cr0.eq) goto loc_82272B54;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272adc
	if (!ctx.cr0.eq) goto loc_82272ADC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82272adc
	if (ctx.cr0.eq) goto loc_82272ADC;
loc_822729B8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272ac0
	if (!ctx.cr0.eq) goto loc_82272AC0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82272ac0
	if (ctx.cr0.eq) goto loc_82272AC0;
loc_822729D0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 25, ctx.xer);
	// blt cr6,0x822729e8
	if (ctx.cr6.lt) goto loc_822729E8;
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// ble cr6,0x822729f8
	if (!ctx.cr6.gt) goto loc_822729F8;
loc_822729E8:
	// cmplwi cr6,r10,67
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 67, ctx.xer);
	// blt cr6,0x82272a00
	if (ctx.cr6.lt) goto loc_82272A00;
	// cmplwi cr6,r10,71
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 71, ctx.xer);
	// bgt cr6,0x82272a00
	if (ctx.cr6.gt) goto loc_82272A00;
loc_822729F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82272a04
	goto loc_82272A04;
loc_82272A00:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82272A04:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272aa4
	if (ctx.cr0.eq) goto loc_82272AA4;
	// cmplwi cr6,r10,26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26, ctx.xer);
	// bne cr6,0x82272a58
	if (!ctx.cr6.eq) goto loc_82272A58;
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x8226f100
	ctx.lr = 0x82272A20;
	sub_8226F100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272a58
	if (ctx.cr0.eq) goto loc_82272A58;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82272a4c
	if (ctx.cr6.eq) goto loc_82272A4C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x82272a50
	if (!ctx.cr6.eq) goto loc_82272A50;
loc_82272A4C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82272A50:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272aa4
	if (ctx.cr0.eq) goto loc_82272AA4;
loc_82272A58:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,8704
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8704, ctx.xer);
	// bne cr6,0x82272a98
	if (!ctx.cr6.eq) goto loc_82272A98;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82272a8c
	if (ctx.cr6.eq) goto loc_82272A8C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// bne cr6,0x82272a90
	if (!ctx.cr6.eq) goto loc_82272A90;
loc_82272A8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82272A90:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272aa4
	if (ctx.cr0.eq) goto loc_82272AA4;
loc_82272A98:
	// lwz r11,68(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,68(r30)
	REX_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
loc_82272AA4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272ac0
	if (!ctx.cr0.eq) goto loc_82272AC0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822729d0
	if (!ctx.cr6.eq) goto loc_822729D0;
loc_82272AC0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272adc
	if (!ctx.cr0.eq) goto loc_82272ADC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822729b8
	if (!ctx.cr6.eq) goto loc_822729B8;
loc_82272ADC:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x82272b34
	goto loc_82272B34;
loc_82272AF8:
	// lwz r9,68(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm. r10,r9,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272b34
	if (!ctx.cr0.eq) goto loc_82272B34;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82272B08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82272b28
	if (ctx.cr6.eq) goto loc_82272B28;
	// lwz r7,4(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,68(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm. r7,r7,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82272b34
	if (ctx.cr0.eq) goto loc_82272B34;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82272b08
	goto loc_82272B08;
loc_82272B28:
	// oris r10,r9,4096
	ctx.r10.u64 = ctx.r9.u64 | 268435456;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82272B34:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82272b4c
	if (!ctx.cr0.eq) goto loc_82272B4C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82272af8
	if (!ctx.cr6.eq) goto loc_82272AF8;
loc_82272B4C:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82272adc
	if (!ctx.cr0.eq) goto loc_82272ADC;
loc_82272B54:
	// lwz r11,736(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 736);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,760(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 760);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// stw r10,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r8,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r8.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r20,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r20.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r9,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x8226f468
	ctx.lr = 0x82272B9C;
	sub_8226F468(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82272bc0
	if (ctx.cr6.eq) goto loc_82272BC0;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822542a8
	ctx.lr = 0x82272BB4;
	sub_822542A8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82174d20
	ctx.lr = 0x82272BC0;
	sub_82174D20(ctx, base);
loc_82272BC0:
	// lwz r11,44(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82272bd8
	if (ctx.cr0.eq) goto loc_82272BD8;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82272bdc
	if (ctx.cr0.eq) goto loc_82272BDC;
loc_82272BD8:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_82272BDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82272bf8
	if (ctx.cr0.eq) goto loc_82272BF8;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226f468
	ctx.lr = 0x82272BF8;
	sub_8226F468(ctx, base);
loc_82272BF8:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82272c2c
	if (ctx.cr6.eq) goto loc_82272C2C;
	// lwz r11,56(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 56);
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82178760
	ctx.lr = 0x82272C14;
	sub_82178760(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x822542a8
	ctx.lr = 0x82272C20;
	sub_822542A8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82174d20
	ctx.lr = 0x82272C2C;
	sub_82174D20(ctx, base);
loc_82272C2C:
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82178768
	ctx.lr = 0x82272C34;
	sub_82178768(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82272c54
	if (ctx.cr6.eq) goto loc_82272C54;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x821788e8
	ctx.lr = 0x82272C44;
	sub_821788E8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// rlwinm r4,r11,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x8224f690
	ctx.lr = 0x82272C54;
	sub_8224F690(ctx, base);
loc_82272C54:
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x82178930
	ctx.lr = 0x82272C5C;
	sub_82178930(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x8219e428
	ctx.lr = 0x82272C64;
	sub_8219E428(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bge 0x82272c7c
	if (!ctx.cr0.lt) goto loc_82272C7C;
	// stw r5,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r5.u32);
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272C7C;
	sub_8225B1A0(ctx, base);
loc_82272C7C:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272C90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272CAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82272CB8;
	sub_8215EC60(ctx, base);
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272CD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272CEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,768(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82178770
	ctx.lr = 0x82272D04;
	sub_82178770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,768(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 768);
	// bl 0x821786e8
	ctx.lr = 0x82272D10;
	sub_821786E8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r19,768(r22)
	REX_STORE_U32(ctx.r22.u32 + 768, ctx.r19.u32);
	// blt cr6,0x82272d90
	if (ctx.cr6.lt) goto loc_82272D90;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82272d48
	if (ctx.cr6.eq) goto loc_82272D48;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// addi r5,r11,17240
	ctx.r5.s64 = ctx.r11.s64 + 17240;
	// bl 0x82175100
	ctx.lr = 0x82272D48;
	sub_82175100(ctx, base);
loc_82272D48:
	// lwz r30,468(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82272d90
	if (ctx.cr6.eq) goto loc_82272D90;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a98b8
	ctx.lr = 0x82272D70;
	sub_821A98B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82272d90
	if (!ctx.cr0.lt) goto loc_82272D90;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82272D8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
loc_82272D90:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bge cr6,0x82272db8
	if (!ctx.cr6.lt) goto loc_82272DB8;
	// stw r31,2480(r22)
	REX_STORE_U32(ctx.r22.u32 + 2480, ctx.r31.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,3525
	ctx.r4.s64 = 3525;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82272DB8;
	sub_8225B1A0(ctx, base);
loc_82272DB8:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A6F58) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822B8B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x822B8B18;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822b8be0
	if (ctx.cr6.eq) goto loc_822B8BE0;
	// addi r29,r5,-4
	ctx.r29.s64 = ctx.r5.s64 + -4;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
loc_822B8B4C:
	// lwz r31,4(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x822b8bb8
	goto loc_822B8BB8;
loc_822B8B54:
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r9,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// blt cr6,0x822b8b70
	if (ctx.cr6.lt) goto loc_822B8B70;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822b8b74
	if (!ctx.cr6.gt) goto loc_822B8B74;
loc_822B8B70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822B8B74:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8b8c
	if (ctx.cr0.eq) goto loc_822B8B8C;
	// rlwinm r11,r9,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x380000;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822b8b9c
	if (ctx.cr6.eq) goto loc_822B8B9C;
loc_822B8B8C:
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// bne cr6,0x822b8ba4
	if (!ctx.cr6.eq) goto loc_822B8BA4;
	// rlwinm. r11,r9,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8ba4
	if (ctx.cr0.eq) goto loc_822B8BA4;
loc_822B8B9C:
	// lwz r31,44(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x822b8bb8
	goto loc_822B8BB8;
loc_822B8BA4:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// beq cr6,0x822b8bb4
	if (ctx.cr6.eq) goto loc_822B8BB4;
	// cmplwi cr6,r10,99
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 99, ctx.xer);
	// bne cr6,0x822b8bd0
	if (!ctx.cr6.eq) goto loc_822B8BD0;
loc_822B8BB4:
	// lwz r31,48(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
loc_822B8BB8:
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a4eb0
	ctx.lr = 0x822B8BC4;
	sub_822A4EB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b8b54
	if (ctx.cr0.eq) goto loc_822B8B54;
	// b 0x822b8bd4
	goto loc_822B8BD4;
loc_822B8BD0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822B8BD4:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r31,8(r29)
	ea = 8 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r29.u32 = ea;
	// bne 0x822b8b4c
	if (!ctx.cr0.eq) goto loc_822B8B4C;
loc_822B8BE0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,28016
	ctx.r6.s64 = ctx.r11.s64 + 28016;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8219dad8
	ctx.lr = 0x822B8BF8;
	sub_8219DAD8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822b8c90
	if (ctx.cr6.eq) goto loc_822B8C90;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// subfic r25,r24,8
	ctx.xer.ca = ctx.r24.u32 <= 8;
	ctx.r25.u64 = static_cast<uint64_t>(8) - ctx.r24.u64;
loc_822B8C18:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822b8c6c
	if (ctx.cr6.eq) goto loc_822B8C6C;
	// add r29,r27,r24
	ctx.r29.u64 = ctx.r27.u64 + ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a6a60
	ctx.lr = 0x822B8C30;
	sub_822A6A60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822b8c6c
	if (ctx.cr0.eq) goto loc_822B8C6C;
	// subf r6,r31,r30
	ctx.r6.u64 = ctx.r30.u64 - ctx.r31.u64;
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x822b8c64
	if (ctx.cr6.lt) goto loc_822B8C64;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822aebf0
	ctx.lr = 0x822B8C60;
	sub_822AEBF0(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_822B8C64:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r27,r30,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
loc_822B8C6C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b8c80
	if (!ctx.cr6.eq) goto loc_822B8C80;
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// add r27,r25,r26
	ctx.r27.u64 = ctx.r25.u64 + ctx.r26.u64;
loc_822B8C80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r30,r23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x822b8c18
	if (ctx.cr6.lt) goto loc_822B8C18;
loc_822B8C90:
	// subf. r6,r31,r23
	ctx.r6.u64 = ctx.r23.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822b8cc4
	if (ctx.cr0.eq) goto loc_822B8CC4;
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x822b8cc4
	if (ctx.cr6.lt) goto loc_822B8CC4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822aebf0
	ctx.lr = 0x822B8CC0;
	sub_822AEBF0(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
loc_822B8CC4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BF590) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// bgt cr6,0x822bf630
	if (ctx.cr6.gt) goto loc_822BF630;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// bge cr6,0x822bf60c
	if (!ctx.cr6.lt) goto loc_822BF60C;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// blt cr6,0x822bf648
	if (ctx.cr6.lt) goto loc_822BF648;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x822bf60c
	if (!ctx.cr6.gt) goto loc_822BF60C;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// ble cr6,0x822bf648
	if (!ctx.cr6.gt) goto loc_822BF648;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// ble cr6,0x822bf60c
	if (!ctx.cr6.gt) goto loc_822BF60C;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// ble cr6,0x822bf648
	if (!ctx.cr6.gt) goto loc_822BF648;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// bgt cr6,0x822bf648
	if (ctx.cr6.gt) goto loc_822BF648;
loc_822BF5D8:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,18,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
loc_822BF5E4:
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
loc_822BF5E8:
	// lhz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 16);
	// lwz r11,116(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// ble cr6,0x822bf698
	if (!ctx.cr6.gt) goto loc_822BF698;
	// li r4,3528
	ctx.r4.s64 = 3528;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
loc_822BF60C:
	// rlwinm r11,r10,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x822bf620
	if (!ctx.cr6.gt) goto loc_822BF620;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
loc_822BF620:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x822bf5e4
	goto loc_822BF5E4;
loc_822BF630:
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x822bf5d8
	if (ctx.cr6.eq) goto loc_822BF5D8;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x822bf690
	if (ctx.cr6.eq) goto loc_822BF690;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x822bf690
	if (ctx.cr6.eq) goto loc_822BF690;
loc_822BF648:
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x822bf65c
	if (ctx.cr6.lt) goto loc_822BF65C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822bf660
	if (!ctx.cr6.gt) goto loc_822BF660;
loc_822BF65C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BF660:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822bf5d8
	if (!ctx.cr0.eq) goto loc_822BF5D8;
	// rlwinm. r11,r10,31,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bf67c
	if (ctx.cr0.eq) goto loc_822BF67C;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
	// b 0x822bf680
	goto loc_822BF680;
loc_822BF67C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BF680:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// b 0x822bf5e8
	goto loc_822BF5E8;
loc_822BF690:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
loc_822BF698:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,116(r3)
	REX_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// sth r11,18(r4)
	REX_STORE_U16(ctx.r4.u32 + 18, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C5A40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822C5A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x822c5b24
	if (ctx.cr6.eq) goto loc_822C5B24;
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x822c5b10
	if (ctx.cr6.eq) goto loc_822C5B10;
	// cmpwi cr6,r11,124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 124, ctx.xer);
	// beq cr6,0x822c5b10
	if (ctx.cr6.eq) goto loc_822C5B10;
	// cmpwi cr6,r11,125
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 125, ctx.xer);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// beq cr6,0x822c5b1c
	if (ctx.cr6.eq) goto loc_822C5B1C;
	// rlwinm r31,r10,31,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
	// bl 0x822815d8
	ctx.lr = 0x822C5A8C;
	sub_822815D8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c5b10
	if (ctx.cr6.eq) goto loc_822C5B10;
	// lwz r10,652(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c5b10
	if (ctx.cr6.eq) goto loc_822C5B10;
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c5b10
	if (!ctx.cr0.eq) goto loc_822C5B10;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5aec
	if (!ctx.cr0.eq) goto loc_822C5AEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5aec
	if (ctx.cr0.eq) goto loc_822C5AEC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c5af8
	if (!ctx.cr6.gt) goto loc_822C5AF8;
loc_822C5AEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822C5AF4;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C5AF8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r28,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r28.u32);
loc_822C5B10:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_822C5B1C:
	// bl 0x8229f570
	ctx.lr = 0x822C5B20;
	sub_8229F570(ctx, base);
	// b 0x822c5b10
	goto loc_822C5B10;
loc_822C5B24:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822bf4d0
	ctx.lr = 0x822C5B30;
	sub_822BF4D0(ctx, base);
loc_822C5B30:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r11,27,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C000;
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c5cd0
	if (!ctx.cr6.gt) goto loc_822C5CD0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822bfc10
	ctx.lr = 0x822C5B50;
	sub_822BFC10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822C5B54:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822bf4d0
	ctx.lr = 0x822C5B60;
	sub_822BF4D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c5c44
	if (ctx.cr0.eq) goto loc_822C5C44;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// rlwimi r10,r11,16,13,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000) | (ctx.r10.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// bl 0x8228cb48
	ctx.lr = 0x822C5B98;
	sub_8228CB48(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5bcc
	if (!ctx.cr0.eq) goto loc_822C5BCC;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822c5bcc
	if (ctx.cr0.eq) goto loc_822C5BCC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822c5bd8
	if (!ctx.cr6.gt) goto loc_822C5BD8;
loc_822C5BCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822fade8
	ctx.lr = 0x822C5BD8;
	sub_822FADE8(ctx, base);
loc_822C5BD8:
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
	// lwz r11,708(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5c44
	if (ctx.cr6.eq) goto loc_822C5C44;
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm. r11,r10,0,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5c44
	if (ctx.cr0.eq) goto loc_822C5C44;
	// lwz r9,708(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// rlwinm r11,r10,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// addi r7,r10,3
	ctx.r7.s64 = ctx.r10.s64 + 3;
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// stwx r31,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// lwz r10,708(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 708);
	// stwx r31,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r31.u32);
loc_822C5C44:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82334408
	ctx.lr = 0x822C5C58;
	sub_82334408(ctx, base);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5cc8
	if (ctx.cr6.eq) goto loc_822C5CC8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5ca4
	if (!ctx.cr0.eq) goto loc_822C5CA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5ca4
	if (ctx.cr0.eq) goto loc_822C5CA4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c5cb0
	if (!ctx.cr6.gt) goto loc_822C5CB0;
loc_822C5CA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822C5CAC;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C5CB0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
loc_822C5CC8:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x822c5b30
	goto loc_822C5B30;
loc_822C5CD0:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r3,r10,13,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r4,r28,44
	ctx.r4.s64 = ctx.r28.s64 + 44;
loc_822C5CE4:
	// cmplw cr6,r5,r3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x822c5b10
	if (!ctx.cr6.lt) goto loc_822C5B10;
	// lwzx r10,r4,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r8,r7,27
	ctx.r8.u64 = ctx.r7.u32 & 0x1F;
	// rlwinm r7,r7,27,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x3;
	// stwx r8,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r8.u32);
	// stwx r7,r11,r29
	REX_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r7.u32);
	// stwx r9,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u32);
	// beq cr6,0x822c5d70
	if (ctx.cr6.eq) goto loc_822C5D70;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C5D28:
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822c5d58
	if (!ctx.cr6.eq) goto loc_822C5D58;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822c5d58
	if (!ctx.cr6.eq) goto loc_822C5D58;
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwzx r31,r10,r31
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x822c5d68
	if (ctx.cr6.eq) goto loc_822C5D68;
loc_822C5D58:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822c5d28
	if (ctx.cr6.lt) goto loc_822C5D28;
loc_822C5D68:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x822c5d7c
	if (ctx.cr6.lt) goto loc_822C5D7C;
loc_822C5D70:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x822c5ce4
	goto loc_822C5CE4;
loc_822C5D7C:
	// addi r11,r6,11
	ctx.r11.s64 = ctx.r6.s64 + 11;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c5dac
	if (ctx.cr6.eq) goto loc_822C5DAC;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_822C5DAC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822ce230
	ctx.lr = 0x822C5DBC;
	sub_822CE230(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
loc_822C5DC4:
	// lwz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c5b54
	if (ctx.cr6.eq) goto loc_822C5B54;
	// lwz r29,16(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822c5edc
	if (ctx.cr6.eq) goto loc_822C5EDC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c5ea4
	if (ctx.cr0.eq) goto loc_822C5EA4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,652(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c5ea4
	if (ctx.cr6.eq) goto loc_822C5EA4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c5ea4
	if (!ctx.cr0.eq) goto loc_822C5EA4;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c5e80
	if (!ctx.cr0.eq) goto loc_822C5E80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c5e80
	if (ctx.cr0.eq) goto loc_822C5E80;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822c5e8c
	if (!ctx.cr6.gt) goto loc_822C5E8C;
loc_822C5E80:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822C5E88;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822C5E8C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r29,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_822C5EA4:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822c5ebc
	goto loc_822C5EBC;
loc_822C5EB4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822C5EBC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822c5eb4
	if (!ctx.cr6.eq) goto loc_822C5EB4;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r31,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
loc_822C5EDC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822c5dc4
	if (!ctx.cr6.eq) goto loc_822C5DC4;
	// addi r27,r30,8
	ctx.r27.s64 = ctx.r30.s64 + 8;
	// b 0x822c5dc4
	goto loc_822C5DC4;
}

DEFINE_REX_FUNC(sub_822D2050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x822D2058;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2108
	if (ctx.cr6.eq) goto loc_822D2108;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r3,972
	ctx.r11.s64 = ctx.r3.s64 + 972;
	// cmplwi cr6,r4,132
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 132, ctx.xer);
	// ble cr6,0x822d209c
	if (!ctx.cr6.gt) goto loc_822D209C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226e260
	ctx.lr = 0x822D2094;
	sub_8226E260(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x822d2108
	goto loc_822D2108;
loc_822D209C:
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x822d20c0
	if (ctx.cr6.lt) goto loc_822D20C0;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x822d2104
	goto loc_822D2104;
loc_822D20C0:
	// rlwinm r10,r4,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d20f8
	if (ctx.cr6.eq) goto loc_822D20F8;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x8215ec60
	ctx.lr = 0x822D20F0;
	sub_8215EC60(ctx, base);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x822d2104
	goto loc_822D2104;
loc_822D20F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x822D2100;
	sub_8226D8E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_822D2104:
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
loc_822D2108:
	// lwz r31,4(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// li r19,0
	ctx.r19.s64 = 0;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2200
	if (!ctx.cr0.eq) goto loc_822D2200;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822d2200
	if (ctx.cr0.eq) goto loc_822D2200;
loc_822D2120:
	// lwz r30,80(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822ceb00
	ctx.lr = 0x822D213C;
	sub_822CEB00(ctx, base);
	// add r29,r3,r19
	ctx.r29.u64 = ctx.r3.u64 + ctx.r19.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r6,r30,24
	ctx.r6.s64 = ctx.r30.s64 + 24;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822ceb00
	ctx.lr = 0x822D2158;
	sub_822CEB00(ctx, base);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822ceb00
	ctx.lr = 0x822D2174;
	sub_822CEB00(ctx, base);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// add r19,r3,r29
	ctx.r19.u64 = ctx.r3.u64 + ctx.r29.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d21e8
	if (ctx.cr0.eq) goto loc_822D21E8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d21e8
	if (!ctx.cr6.eq) goto loc_822D21E8;
	// lwz r11,744(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 744);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d21cc
	if (ctx.cr6.eq) goto loc_822D21CC;
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 36);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,32(r23)
	REX_STORE_U32(ctx.r23.u32 + 32, ctx.r11.u32);
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// clrlwi r4,r11,13
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFFF;
	// bl 0x8226d858
	ctx.lr = 0x822D21B8;
	sub_8226D858(ctx, base);
	// stw r3,752(r23)
	REX_STORE_U32(ctx.r23.u32 + 752, ctx.r3.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822fa280
	ctx.lr = 0x822D21C4;
	sub_822FA280(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r23)
	REX_STORE_U32(ctx.r23.u32 + 32, ctx.r11.u32);
loc_822D21CC:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 36);
	// rlwinm r11,r11,2,11,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFC;
	// stwx r10,r11,r22
	REX_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r10.u32);
	// lwz r11,36(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r23)
	REX_STORE_U32(ctx.r23.u32 + 36, ctx.r11.u32);
loc_822D21E8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2200
	if (!ctx.cr0.eq) goto loc_822D2200;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d2120
	if (!ctx.cr6.eq) goto loc_822D2120;
loc_822D2200:
	// lwz r31,4(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2274
	if (!ctx.cr0.eq) goto loc_822D2274;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822d2274
	if (ctx.cr0.eq) goto loc_822D2274;
loc_822D2214:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822c8920
	ctx.lr = 0x822D222C;
	sub_822C8920(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,24
	ctx.r4.s64 = ctx.r11.s64 + 24;
	// bl 0x822c8920
	ctx.lr = 0x822D2244;
	sub_822C8920(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822c8920
	ctx.lr = 0x822D225C;
	sub_822C8920(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2274
	if (!ctx.cr0.eq) goto loc_822D2274;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d2214
	if (!ctx.cr6.eq) goto loc_822D2214;
loc_822D2274:
	// lwz r31,4(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2580
	if (!ctx.cr0.eq) goto loc_822D2580;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822d2580
	if (ctx.cr0.eq) goto loc_822D2580;
loc_822D2288:
	// lwz r26,80(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r25,r31,92
	ctx.r25.s64 = ctx.r31.s64 + 92;
	// subf r24,r31,r26
	ctx.r24.u64 = ctx.r26.u64 - ctx.r31.u64;
loc_822D2298:
	// lwzx r29,r24,r25
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r25.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d235c
	if (ctx.cr6.eq) goto loc_822D235C;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d22dc
	if (ctx.cr0.eq) goto loc_822D22DC;
	// b 0x822d22c8
	goto loc_822D22C8;
loc_822D22B0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281578
	ctx.lr = 0x822D22BC;
	sub_82281578(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d22d8
	if (ctx.cr0.eq) goto loc_822D22D8;
	// lwz r29,12(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
loc_822D22C8:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d22b0
	if (ctx.cr0.eq) goto loc_822D22B0;
	// b 0x822d22dc
	goto loc_822D22DC;
loc_822D22D8:
	// li r29,0
	ctx.r29.s64 = 0;
loc_822D22DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d235c
	if (ctx.cr6.eq) goto loc_822D235C;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r30,32(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d2304
	if (ctx.cr6.eq) goto loc_822D2304;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D2304;
	sub_82281BD8(ctx, base);
loc_822D2304:
	// stw r30,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x822d234c
	goto loc_822D234C;
loc_822D231C:
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2348
	if (ctx.cr0.eq) goto loc_822D2348;
	// lwz r29,32(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D2344;
	sub_82281BD8(ctx, base);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_822D2348:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_822D234C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281578
	ctx.lr = 0x822D2354;
	sub_82281578(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x822d231c
	if (!ctx.cr0.eq) goto loc_822D231C;
loc_822D235C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x822d2298
	if (!ctx.cr6.gt) goto loc_822D2298;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm. r11,r11,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d23f0
	if (ctx.cr0.eq) goto loc_822D23F0;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d23e4
	if (ctx.cr0.eq) goto loc_822D23E4;
	// lwz r30,8(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
loc_822D2384:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d23f0
	if (ctx.cr6.eq) goto loc_822D23F0;
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82281ad0
	ctx.lr = 0x822D239C;
	sub_82281AD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822d23d4
	if (ctx.cr0.eq) goto loc_822D23D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d23d4
	if (ctx.cr0.eq) goto loc_822D23D4;
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x822d23c8
	if (ctx.cr6.eq) goto loc_822D23C8;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822d23cc
	if (!ctx.cr6.eq) goto loc_822D23CC;
loc_822D23C8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D23CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d23dc
	if (!ctx.cr0.eq) goto loc_822D23DC;
loc_822D23D4:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// b 0x822d2384
	goto loc_822D2384;
loc_822D23DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d23f0
	if (ctx.cr6.eq) goto loc_822D23F0;
loc_822D23E4:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_822D23F0:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2408
	if (ctx.cr0.eq) goto loc_822D2408;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_822D2408:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2420
	if (ctx.cr0.eq) goto loc_822D2420;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// oris r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 536870912;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_822D2420:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822d2448
	if (ctx.cr6.eq) goto loc_822D2448;
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d2448
	if (ctx.cr0.eq) goto loc_822D2448;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r11,r22
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_822D2448:
	// lwz r10,68(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwimi r11,r10,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d2508
	if (ctx.cr0.eq) goto loc_822D2508;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwimi r11,r9,0,10,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r11.u64 & 0x400000);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// rlwimi r11,r10,0,9,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r11.u64 & 0x800000);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,112(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// stw r10,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// lwz r10,76(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwimi r10,r11,0,8,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF) | (ctx.r10.u64 & 0x1000000);
	// stw r10,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,76(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwimi r11,r10,0,7,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF) | (ctx.r11.u64 & 0x2000000);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,112(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d24e8
	if (ctx.cr6.eq) goto loc_822D24E8;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822d24e8
	if (!ctx.cr6.eq) goto loc_822D24E8;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
loc_822D24E8:
	// lwz r11,108(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d2508
	if (ctx.cr6.eq) goto loc_822D2508;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822d2508
	if (!ctx.cr6.eq) goto loc_822D2508;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_822D2508:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwinm r10,r31,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwimi r9,r11,0,4,4
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000) | (ctx.r9.u64 & 0xFFFFFFFFF7FFFFFF);
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r7,48(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// rlwimi r9,r7,0,6,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2000000) | (ctx.r9.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r9,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// lwz r9,48(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// lwz r7,48(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r7,r9,0,7,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000000) | (ctx.r7.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r7,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// lwz r9,68(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// rlwimi r9,r8,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// stw r9,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// lwz r9,68(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 68);
	// lwz r8,68(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// rlwimi r8,r9,0,1,1
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000) | (ctx.r8.u64 & 0xFFFFFFFFBFFFFFFF);
	// stw r8,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// lwz r9,76(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 76);
	// rlwimi r9,r11,0,4,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF) | (ctx.r9.u64 & 0x10000000);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2580
	if (!ctx.cr0.eq) goto loc_822D2580;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d2288
	if (!ctx.cr6.eq) goto loc_822D2288;
loc_822D2580:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d271c
	if (!ctx.cr0.eq) goto loc_822D271C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d271c
	if (ctx.cr0.eq) goto loc_822D271C;
loc_822D2598:
	// lwz r28,80(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 80);
	// lwz r29,8(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_822D25A0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d262c
	if (ctx.cr6.eq) goto loc_822D262C;
	// lwz r30,4(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822d2610
	if (!ctx.cr6.eq) goto loc_822D2610;
	// beq 0x822d2608
	if (ctx.cr0.eq) goto loc_822D2608;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82281ad0
	ctx.lr = 0x822D25CC;
	sub_82281AD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822d2608
	if (ctx.cr0.eq) goto loc_822D2608;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2608
	if (!ctx.cr0.eq) goto loc_822D2608;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D25F8;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d2624
	if (ctx.cr6.eq) goto loc_822D2624;
loc_822D2608:
	// lwz r30,80(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// b 0x822d2614
	goto loc_822D2614;
loc_822D2610:
	// bne 0x822d2624
	if (!ctx.cr0.eq) goto loc_822D2624;
loc_822D2614:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82338ab0
	ctx.lr = 0x822D2624;
	sub_82338AB0(ctx, base);
loc_822D2624:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x822d25a0
	goto loc_822D25A0;
loc_822D262C:
	// lwz r31,12(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_822D2630:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d2664
	if (ctx.cr6.eq) goto loc_822D2664;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x822d265c
	if (ctx.cr6.eq) goto loc_822D265C;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d265c
	if (!ctx.cr0.eq) goto loc_822D265C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D265C;
	sub_82338B20(ctx, base);
loc_822D265C:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x822d2630
	goto loc_822D2630;
loc_822D2664:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82281ad0
	ctx.lr = 0x822D2670;
	sub_82281AD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822d2700
	if (ctx.cr0.eq) goto loc_822D2700;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D2690;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822d26b4
	if (!ctx.cr6.eq) goto loc_822D26B4;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822d2700
	goto loc_822D2700;
loc_822D26B4:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2700
	if (!ctx.cr0.eq) goto loc_822D2700;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
loc_822D26C4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d26e8
	if (ctx.cr6.eq) goto loc_822D26E8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d26e0
	if (ctx.cr6.eq) goto loc_822D26E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822d26c4
	goto loc_822D26C4;
loc_822D26E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822d26ec
	goto loc_822D26EC;
loc_822D26E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D26EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d2700
	if (!ctx.cr0.eq) goto loc_822D2700;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D2700;
	sub_82338B20(ctx, base);
loc_822D2700:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d271c
	if (!ctx.cr0.eq) goto loc_822D271C;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2598
	if (!ctx.cr6.eq) goto loc_822D2598;
loc_822D271C:
	// lwz r11,4(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d2784
	if (!ctx.cr0.eq) goto loc_822D2784;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d2784
	if (ctx.cr0.eq) goto loc_822D2784;
loc_822D2730:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d274c
	if (ctx.cr6.eq) goto loc_822D274C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x822d2750
	if (!ctx.cr6.eq) goto loc_822D2750;
loc_822D274C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822D2750:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d276c
	if (ctx.cr0.eq) goto loc_822D276C;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// rlwimi r10,r9,0,6,4
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF) | (ctx.r10.u64 & 0x4000000);
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_822D276C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d2784
	if (!ctx.cr0.eq) goto loc_822D2784;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d2730
	if (!ctx.cr6.eq) goto loc_822D2730;
loc_822D2784:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F3210) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f3234
	if (!ctx.cr0.eq) goto loc_822F3234;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_822F3234:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822f3278
	if (!ctx.cr6.lt) goto loc_822F3278;
	// subf r9,r10,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_822F325C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r7,r9,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822f3280
	if (!ctx.cr6.eq) goto loc_822F3280;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f325c
	if (ctx.cr6.lt) goto loc_822F325C;
loc_822F3278:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822F3280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4B78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4bbc
	if (ctx.cr6.eq) goto loc_822F4BBC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4bbc
	if (ctx.cr6.eq) goto loc_822F4BBC;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f4bbc
	if (ctx.cr6.eq) goto loc_822F4BBC;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822f4bbc
	if (!ctx.cr6.eq) goto loc_822F4BBC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822f4bbc
	if (!ctx.cr6.eq) goto loc_822F4BBC;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// blr 
	return;
loc_822F4BBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F4C38) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4c54
	if (ctx.cr6.eq) goto loc_822F4C54;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x822f4c54
	if (!ctx.cr6.eq) goto loc_822F4C54;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_822F4C54:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F4D18) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4d34
	if (ctx.cr6.eq) goto loc_822F4D34;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x822f4d34
	if (!ctx.cr6.eq) goto loc_822F4D34;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_822F4D34:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F4F58) {
	REX_FUNC_PROLOGUE();
	// b 0x822f4f6c
	goto loc_822F4F6C;
loc_822F4F5C:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f4f7c
	if (!ctx.cr6.eq) goto loc_822F4F7C;
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_822F4F6C:
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822f4f5c
	if (ctx.cr6.eq) goto loc_822F4F5C;
	// b 0x822f4ed8
	sub_822F4ED8(ctx, base);
	return;
loc_822F4F7C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F51E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f52a0
	if (ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x822f5208
	if (ctx.cr6.eq) goto loc_822F5208;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
loc_822F5208:
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5298
	if (ctx.cr6.eq) goto loc_822F5298;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x822f5298
	if (!ctx.cr6.eq) goto loc_822F5298;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822f52a0
	if (!ctx.cr6.eq) goto loc_822F52A0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// blr 
	return;
loc_822F5298:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
loc_822F52A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822F5D78) {
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
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822f5e0c
	if (ctx.cr6.lt) goto loc_822F5E0C;
	// beq cr6,0x822f5de4
	if (ctx.cr6.eq) goto loc_822F5DE4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822f5db4
	if (ctx.cr6.lt) goto loc_822F5DB4;
	// beq cr6,0x822f5e0c
	if (ctx.cr6.eq) goto loc_822F5E0C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822F5DB4;
	sub_8225B1A0(ctx, base);
loc_822F5DB4:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f5e0c
	if (!ctx.cr0.eq) goto loc_822F5E0C;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822f5e0c
	if (!ctx.cr6.eq) goto loc_822F5E0C;
	// rlwinm r4,r10,30,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// bl 0x822c6270
	ctx.lr = 0x822F5DE0;
	sub_822C6270(ctx, base);
	// b 0x822f5e00
	goto loc_822F5E00;
loc_822F5DE4:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822f5e0c
	if (!ctx.cr6.eq) goto loc_822F5E0C;
	// rlwinm r4,r10,30,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFF;
	// bl 0x822c6038
	ctx.lr = 0x822F5E00;
	sub_822C6038(ctx, base);
loc_822F5E00:
	// stfd f1,0(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822f5e10
	goto loc_822F5E10;
loc_822F5E0C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F5E10:
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

DEFINE_REX_FUNC(sub_822F68B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822F68B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,744(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 744);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f6974
	if (ctx.cr6.eq) goto loc_822F6974;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,117
	ctx.r6.s64 = 117;
	// bl 0x8232d9e0
	ctx.lr = 0x822F68EC;
	sub_8232D9E0(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F690C;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82281488
	ctx.lr = 0x822F6934;
	sub_82281488(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281488
	ctx.lr = 0x822F6944;
	sub_82281488(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822F6958;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// li r10,1
	ctx.r10.s64 = 1;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// rlwimi r9,r10,1,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822F6974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F73B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F73C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F73E8;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f740c
	if (ctx.cr6.eq) goto loc_822F740C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F7408;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F740C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F7414;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822f7438
	if (ctx.cr6.eq) goto loc_822F7438;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F7434;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F7438:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F7440;
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F84D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822F84D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,98
	ctx.r6.s64 = 98;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F84FC;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f8520
	if (ctx.cr6.eq) goto loc_822F8520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F851C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F8520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F8528;
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

DEFINE_REX_FUNC(sub_822F9668) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822F9670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,14
	ctx.r6.s64 = 14;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F969C;
	sub_8232D9E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281260
	ctx.lr = 0x822F96AC;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F96B8;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281260
	ctx.lr = 0x822F96C8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F96D4;
	sub_82281428(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x822f96f8
	if (ctx.cr6.eq) goto loc_822F96F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F96F4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F96F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F9700;
	sub_82281428(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FB180) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FB188;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822fb1ac
	if (ctx.cr6.eq) goto loc_822FB1AC;
loc_822FB1A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_822FB1AC:
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x822fb2e8
	if (ctx.cr6.lt) goto loc_822FB2E8;
	// beq cr6,0x822fb290
	if (ctx.cr6.eq) goto loc_822FB290;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x822fb1cc
	if (ctx.cr6.lt) goto loc_822FB1CC;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB1CC;
	sub_8225B1A0(ctx, base);
loc_822FB1CC:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f9ef8
	ctx.lr = 0x822FB1F4;
	sub_822F9EF8(ctx, base);
	// lwz r30,24(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb284
	if (ctx.cr6.eq) goto loc_822FB284;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822fb284
	if (!ctx.cr6.eq) goto loc_822FB284;
	// lwa r11,12(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r29.u32 + 12));
	// li r5,4
	ctx.r5.s64 = 4;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwa r9,4(r29)
	ctx.r9.s64 = int32_t(REX_LOAD_U32(ctx.r29.u32 + 4));
	// lwa r10,0(r29)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r29.u32 + 0));
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lwa r8,8(r29)
	ctx.r8.s64 = int32_t(REX_LOAD_U32(ctx.r29.u32 + 8));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r10,44(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// ori r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 2;
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// std r8,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// b 0x822fb35c
	goto loc_822FB35C;
loc_822FB284:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB290;
	sub_8225B1A0(ctx, base);
loc_822FB290:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,64
	ctx.r5.s64 = ctx.r11.s64 + 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f9ef8
	ctx.lr = 0x822FB2B8;
	sub_822F9EF8(ctx, base);
	// lwz r30,24(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb2dc
	if (ctx.cr6.eq) goto loc_822FB2DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822fb2dc
	if (!ctx.cr6.eq) goto loc_822FB2DC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x822fb354
	goto loc_822FB354;
loc_822FB2DC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB2E8;
	sub_8225B1A0(ctx, base);
loc_822FB2E8:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r11,352
	ctx.r5.s64 = ctx.r11.s64 + 352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f9ef8
	ctx.lr = 0x822FB310;
	sub_822F9EF8(ctx, base);
	// lwz r30,24(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822fb370
	if (ctx.cr6.eq) goto loc_822FB370;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x822fb370
	if (!ctx.cr6.eq) goto loc_822FB370;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822fb340
	if (ctx.cr6.eq) goto loc_822FB340;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// b 0x822fb348
	goto loc_822FB348;
loc_822FB340:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_822FB348:
	// stfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_822FB354:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
loc_822FB35C:
	// stw r11,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f5fc8
	ctx.lr = 0x822FB368;
	sub_822F5FC8(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// b 0x822fb1a0
	goto loc_822FB1A0;
loc_822FB370:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB37C;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822FFCD0) {
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
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ffd0c
	if (!ctx.cr0.eq) goto loc_822FFD0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ffd0c
	if (ctx.cr0.eq) goto loc_822FFD0C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822ffd18
	if (!ctx.cr6.gt) goto loc_822FFD18;
loc_822FFD0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fad60
	ctx.lr = 0x822FFD14;
	sub_822FAD60(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822FFD18:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82300828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82300830;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x82300844;
	sub_8226DBE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r29,1
	ctx.r11.u64 = ctx.r29.u64 | 1;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,576(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_82300884:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823008a0
	if (ctx.cr6.eq) goto loc_823008A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823008a4
	if (!ctx.cr6.eq) goto loc_823008A4;
loc_823008A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823008A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82300914
	if (!ctx.cr0.eq) goto loc_82300914;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8226e208
	ctx.lr = 0x823008B4;
	sub_8226E208(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// ld r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823008e8
	if (!ctx.cr0.eq) goto loc_823008E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823008e8
	if (ctx.cr0.eq) goto loc_823008E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823008f4
	if (!ctx.cr6.gt) goto loc_823008F4;
loc_823008E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822facd8
	ctx.lr = 0x823008F4;
	sub_822FACD8(ctx, base);
loc_823008F4:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stdx r28,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r28.u64);
	// b 0x82300884
	goto loc_82300884;
loc_82300914:
	// lwz r3,580(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 580);
	// bl 0x822ffd40
	ctx.lr = 0x8230091C;
	sub_822FFD40(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r10,r11,3,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r11,r10,0,30,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230DAB0) {
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
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230daf4
	if (ctx.cr0.eq) goto loc_8230DAF4;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230daf4
	if (ctx.cr6.eq) goto loc_8230DAF4;
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8230daf4
	if (ctx.cr6.eq) goto loc_8230DAF4;
	// li r6,5
	ctx.r6.s64 = 5;
	// bl 0x823042e0
	ctx.lr = 0x8230DAF0;
	sub_823042E0(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_8230DAF4:
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

DEFINE_REX_FUNC(sub_82312D38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82312D40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,79
	ctx.r4.s64 = 79;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82266b60
	ctx.lr = 0x82312D58;
	sub_82266B60(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x82312D6C;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// bne cr6,0x82312d84
	if (!ctx.cr6.eq) goto loc_82312D84;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82312da0
	if (ctx.cr6.eq) goto loc_82312DA0;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82312d90
	goto loc_82312D90;
loc_82312D84:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82312da0
	if (ctx.cr6.eq) goto loc_82312DA0;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82312D90:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82255f00
	ctx.lr = 0x82312DA0;
	sub_82255F00(ctx, base);
loc_82312DA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823131F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x823131F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,11304
	ctx.r29.s64 = ctx.r10.s64 + 11304;
	// bne cr6,0x82313238
	if (!ctx.cr6.eq) goto loc_82313238;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11400
	ctx.r5.s64 = ctx.r11.s64 + 11400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82313238;
	sub_82260F30(ctx, base);
loc_82313238:
	// cmpwi cr6,r28,12
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 12, ctx.xer);
	// blt cr6,0x8231325c
	if (ctx.cr6.lt) goto loc_8231325C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,11404
	ctx.r5.s64 = ctx.r11.s64 + 11404;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,183
	ctx.r7.s64 = 183;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231325C;
	sub_82260F30(ctx, base);
loc_8231325C:
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314310) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82314318;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,12504
	ctx.r26.s64 = ctx.r10.s64 + 12504;
	// bne cr6,0x82314368
	if (!ctx.cr6.eq) goto loc_82314368;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1808
	ctx.r5.s64 = ctx.r11.s64 + 1808;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314368;
	sub_82260F30(ctx, base);
loc_82314368:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8231438c
	if (!ctx.cr6.eq) goto loc_8231438C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1796
	ctx.r5.s64 = ctx.r11.s64 + 1796;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1153
	ctx.r7.s64 = 1153;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231438C;
	sub_82260F30(ctx, base);
loc_8231438C:
	// li r4,28
	ctx.r4.s64 = 28;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x8231439C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823143c0
	if (!ctx.cr0.eq) goto loc_823143C0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,12720
	ctx.r5.s64 = ctx.r11.s64 + 12720;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1159
	ctx.r7.s64 = 1159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823143C0;
	sub_82260F30(ctx, base);
loc_823143C0:
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r25.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r24,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// bl 0x823131f0
	ctx.lr = 0x823143E0;
	sub_823131F0(ctx, base);
	// rlwinm. r11,r3,0,20,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823143fc
	if (ctx.cr0.eq) goto loc_823143FC;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r11,r11,15240
	ctx.r11.s64 = ctx.r11.s64 + 15240;
	// addi r10,r10,16224
	ctx.r10.s64 = ctx.r10.s64 + 16224;
	// b 0x82314428
	goto loc_82314428;
loc_823143FC:
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// bne cr6,0x82314418
	if (!ctx.cr6.eq) goto loc_82314418;
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r11,r11,15232
	ctx.r11.s64 = ctx.r11.s64 + 15232;
	// addi r10,r10,15776
	ctx.r10.s64 = ctx.r10.s64 + 15776;
	// b 0x82314428
	goto loc_82314428;
loc_82314418:
	// lis r11,-32207
	ctx.r11.s64 = -2110717952;
	// lis r10,-32207
	ctx.r10.s64 = -2110717952;
	// addi r11,r11,15224
	ctx.r11.s64 = ctx.r11.s64 + 15224;
	// addi r10,r10,15328
	ctx.r10.s64 = ctx.r10.s64 + 15328;
loc_82314428:
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82315160) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82315168;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r25,r11,-14148
	ctx.r25.s64 = ctx.r11.s64 + -14148;
	// addi r24,r10,13032
	ctx.r24.s64 = ctx.r10.s64 + 13032;
	// bne cr6,0x823151b4
	if (!ctx.cr6.eq) goto loc_823151B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,1808
	ctx.r5.s64 = ctx.r11.s64 + 1808;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,86
	ctx.r7.s64 = 86;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823151B4;
	sub_82260F30(ctx, base);
loc_823151B4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823151d8
	if (!ctx.cr6.eq) goto loc_823151D8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,1796
	ctx.r5.s64 = ctx.r11.s64 + 1796;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,87
	ctx.r7.s64 = 87;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823151D8;
	sub_82260F30(ctx, base);
loc_823151D8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x823151fc
	if (!ctx.cr6.eq) goto loc_823151FC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13408
	ctx.r5.s64 = ctx.r11.s64 + 13408;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,88
	ctx.r7.s64 = 88;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823151FC;
	sub_82260F30(ctx, base);
loc_823151FC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82315220
	if (!ctx.cr6.eq) goto loc_82315220;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13388
	ctx.r5.s64 = ctx.r11.s64 + 13388;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,89
	ctx.r7.s64 = 89;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315220;
	sub_82260F30(ctx, base);
loc_82315220:
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82315230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82315258
	if (!ctx.cr0.eq) goto loc_82315258;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13376
	ctx.r5.s64 = ctx.r11.s64 + 13376;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315254;
	sub_82260F30(ctx, base);
	// b 0x823152ec
	goto loc_823152EC;
loc_82315258:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822653a0
	ctx.lr = 0x82315280;
	sub_822653A0(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265410
	ctx.lr = 0x82315298;
	sub_82265410(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823152b0
	if (ctx.cr0.eq) goto loc_823152B0;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823152ec
	if (!ctx.cr6.eq) goto loc_823152EC;
loc_823152B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823152c4
	if (ctx.cr6.eq) goto loc_823152C4;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823152e0
	if (!ctx.cr6.eq) goto loc_823152E0;
loc_823152C4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13320
	ctx.r5.s64 = ctx.r11.s64 + 13320;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,123
	ctx.r7.s64 = 123;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823152E0;
	sub_82260F30(ctx, base);
loc_823152E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314a90
	ctx.lr = 0x823152E8;
	sub_82314A90(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_823152EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82317B90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82317B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,15856
	ctx.r28.s64 = ctx.r10.s64 + 15856;
	// bne cr6,0x82317bdc
	if (!ctx.cr6.eq) goto loc_82317BDC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,15844
	ctx.r5.s64 = ctx.r11.s64 + 15844;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,182
	ctx.r7.s64 = 182;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317BDC;
	sub_82260F30(ctx, base);
loc_82317BDC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// divwu r9,r30,r11
	ctx.r9.u64 = uint32_t(ctx.r11.u32 ? ctx.r30.u32 / ctx.r11.u32 : 0);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82317c20
	if (!ctx.cr6.eq) goto loc_82317C20;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,1956
	ctx.r5.s64 = ctx.r11.s64 + 1956;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,189
	ctx.r7.s64 = 189;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317C20;
	sub_82260F30(ctx, base);
loc_82317C20:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82264e30
	ctx.lr = 0x82317C30;
	sub_82264E30(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823188F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82318900;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r27,r10,-13800
	ctx.r27.s64 = ctx.r10.s64 + -13800;
	// blt cr6,0x82318948
	if (ctx.cr6.lt) goto loc_82318948;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-13640
	ctx.r5.s64 = ctx.r11.s64 + -13640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82318948;
	sub_82260F30(ctx, base);
loc_82318948:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(12));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8231897c
	if (ctx.cr6.lt) goto loc_8231897C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-13712
	ctx.r5.s64 = ctx.r11.s64 + -13712;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231897C;
	sub_82260F30(ctx, base);
loc_8231897C:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82317928
	ctx.lr = 0x8231899C;
	sub_82317928(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231CF18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8231CF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82318258
	ctx.lr = 0x8231CF30;
	sub_82318258(ctx, base);
	// li r29,73
	ctx.r29.s64 = 73;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r29,2(r30)
	REX_STORE_U16(ctx.r30.u32 + 2, ctx.r29.u16);
	// li r7,17
	ctx.r7.s64 = 17;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,16,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// sth r9,6(r30)
	REX_STORE_U16(ctx.r30.u32 + 6, ctx.r9.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r8,r7,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r10,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r10,r8,64
	ctx.r10.u64 = ctx.r8.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,20,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,24,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,28,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r8,r10,0,20,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r8.u64 & 0x7000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,28,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,11,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000) | (ctx.r10.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231d044
	if (ctx.cr0.eq) goto loc_8231D044;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D044:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r10,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r10,r8,64
	ctx.r10.u64 = ctx.r8.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,20,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,24,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,28,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,20,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r10.u64 & 0x7000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,28,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,24,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,20,20
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,16,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r10,r8,0,11,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000) | (ctx.r10.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231d11c
	if (ctx.cr0.eq) goto loc_8231D11C;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D11C:
	// li r8,64
	ctx.r8.s64 = 64;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r6,r10,0,16,9
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r6.u64 & 0x3F0000);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// rotlwi r6,r6,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r6,0,9,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r10.u64 & 0x800000);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231d184
	if (ctx.cr0.eq) goto loc_8231D184;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D184:
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,65
	ctx.r5.s64 = 65;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r7,18,8,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,8738
	ctx.r3.u64 = ctx.r3.u64 | 8738;
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r5,16,8,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,4368
	ctx.r3.u64 = ctx.r3.u64 | 4368;
	// li r12,-21845
	ctx.r12.s64 = -21845;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r5,16,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// ori r6,r6,8739
	ctx.r6.u64 = ctx.r6.u64 | 8739;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r6,0,16,9
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r3.u64 & 0x3F0000);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rotlwi r6,r3,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r6,0,9,7
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r3.u64 & 0x800000);
	// oris r6,r3,64
	ctx.r6.u64 = ctx.r3.u64 | 4194304;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r6,r6,0,8,8
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8231d270
	if (ctx.cr0.eq) goto loc_8231D270;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D270:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// li r6,9
	ctx.r6.s64 = 9;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r30,r3,0,16,9
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r30.u64 & 0x3F0000);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r30,r3,0,9,7
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r30.u64 & 0x800000);
	// oris r3,r30,64
	ctx.r3.u64 = ctx.r30.u64 | 4194304;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,4368
	ctx.r3.u64 = ctx.r3.u64 | 4368;
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r7,18,8,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,8738
	ctx.r3.u64 = ctx.r3.u64 | 8738;
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r3,r5,16,8,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000) | (ctx.r3.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r3,r3,r12
	ctx.r3.u64 = ctx.r3.u64 & ctx.r12.u64;
	// ori r3,r3,4368
	ctx.r3.u64 = ctx.r3.u64 | 4368;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
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
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r8,0,16,9
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r3.u64 & 0x3F0000);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r8,0,9,7
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r3.u64 & 0x800000);
	// oris r8,r3,64
	ctx.r8.u64 = ctx.r3.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231d36c
	if (ctx.cr0.eq) goto loc_8231D36C;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D36C:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r8,0,16,9
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r3.u64 & 0x3F0000);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// rotlwi r8,r3,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r3,r8,0,9,7
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r3.u64 & 0x800000);
	// oris r8,r3,64
	ctx.r8.u64 = ctx.r3.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 & ctx.r12.u64;
	// ori r8,r8,4368
	ctx.r8.u64 = ctx.r8.u64 | 4368;
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r7,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,8738
	ctx.r9.u64 = ctx.r9.u64 | 8738;
	// li r12,-21845
	ctx.r12.s64 = -21845;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r5,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,8739
	ctx.r9.u64 = ctx.r9.u64 | 8739;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r29,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r29.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231d464
	if (ctx.cr0.eq) goto loc_8231D464;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D464:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r8,r9,20,29,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,24,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,28,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,28,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,24,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,20,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,16,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r9,r8,0,11,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100000) | (ctx.r9.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231d57c
	if (ctx.cr0.eq) goto loc_8231D57C;
	// lwz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D57C:
	// sth r29,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r29.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231d5dc
	if (ctx.cr0.eq) goto loc_8231D5DC;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D5DC:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
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
	// ori r8,r8,4368
	ctx.r8.u64 = ctx.r8.u64 | 4368;
	// li r12,-30584
	ctx.r12.s64 = -30584;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
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
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r8,r7,64
	ctx.r8.u64 = ctx.r7.u64 | 4194304;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r8,r8,0,8,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8231d6c4
	if (ctx.cr0.eq) goto loc_8231D6C4;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D6C4:
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r12,-26216
	ctx.r12.s64 = -26216;
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
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
	// ori r8,r8,4368
	ctx.r8.u64 = ctx.r8.u64 | 4368;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r8,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
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
	// ori r8,r8,4368
	ctx.r8.u64 = ctx.r8.u64 | 4368;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,16,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r8,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r9,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r9,r8,64
	ctx.r9.u64 = ctx.r8.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231d7a8
	if (ctx.cr0.eq) goto loc_8231D7A8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231D7A8:
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,4915
	ctx.r8.s64 = 4915;
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r9,0,16,9
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r7.u64 & 0x3F0000);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r9,r7,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r9,0,9,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r7.u64 & 0x800000);
	// oris r9,r7,64
	ctx.r9.u64 = ctx.r7.u64 | 4194304;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r9,r8,3,16,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r5,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r10,r10,8738
	ctx.r10.u64 = ctx.r10.u64 | 8738;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823376E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x823376E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x82337700;
	sub_8226DBE8(ctx, base);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = ctx.r28.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82337728:
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_8233772C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82337770
	if (ctx.cr6.eq) goto loc_82337770;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8233774c
	if (!ctx.cr0.eq) goto loc_8233774C;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82337750
	if (ctx.cr0.eq) goto loc_82337750;
loc_8233774C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82337750:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337768
	if (ctx.cr0.eq) goto loc_82337768;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82336da8
	ctx.lr = 0x82337768;
	sub_82336DA8(ctx, base);
loc_82337768:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8233772c
	goto loc_8233772C;
loc_82337770:
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82337774:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233781c
	if (ctx.cr6.eq) goto loc_8233781C;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337814
	if (ctx.cr6.eq) goto loc_82337814;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823377a0
	if (!ctx.cr0.eq) goto loc_823377A0;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823377a4
	if (ctx.cr0.eq) goto loc_823377A4;
loc_823377A0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823377A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337814
	if (ctx.cr0.eq) goto loc_82337814;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82337814
	if (!ctx.cr0.eq) goto loc_82337814;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823377f0
	if (!ctx.cr0.eq) goto loc_823377F0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823377f0
	if (ctx.cr0.eq) goto loc_823377F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823377fc
	if (!ctx.cr6.gt) goto loc_823377FC;
loc_823377F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fade8
	ctx.lr = 0x823377FC;
	sub_822FADE8(ctx, base);
loc_823377FC:
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
loc_82337814:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82337774
	goto loc_82337774;
loc_8233781C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82337894
	if (!ctx.cr0.eq) goto loc_82337894;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82337894
	if (ctx.cr0.eq) goto loc_82337894;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82337728
	if (!ctx.cr0.eq) goto loc_82337728;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225b140
	ctx.lr = 0x82337890;
	sub_8225B140(ctx, base);
	// b 0x82337728
	goto loc_82337728;
loc_82337894:
	// lwz r10,976(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 976);
	// addi r11,r27,972
	ctx.r11.s64 = ctx.r27.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r27)
	REX_STORE_U32(ctx.r27.u32 + 976, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233A850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233A858;
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
	// bne cr6,0x8233a898
	if (!ctx.cr6.eq) goto loc_8233A898;
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
	// li r7,2047
	ctx.r7.s64 = 2047;
	// bl 0x82260f30
	ctx.lr = 0x8233A898;
	sub_82260F30(ctx, base);
loc_8233A898:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233A8A8;
	sub_82266B60(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8233a910
	if (!ctx.cr0.eq) goto loc_8233A910;
	// beq cr6,0x8233a8cc
	if (ctx.cr6.eq) goto loc_8233A8CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A8CC;
	sub_82266EC0(ctx, base);
loc_8233A8CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233a908
	if (ctx.cr6.eq) goto loc_8233A908;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233a908
	if (ctx.cr6.eq) goto loc_8233A908;
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
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bctrl 
	ctx.lr = 0x8233A908;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A908:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a968
	goto loc_8233A968;
loc_8233A910:
	// beq cr6,0x8233a928
	if (ctx.cr6.eq) goto loc_8233A928;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A928;
	sub_82266EC0(ctx, base);
loc_8233A928:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233a964
	if (ctx.cr6.eq) goto loc_8233A964;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233a964
	if (ctx.cr6.eq) goto loc_8233A964;
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
	// li r6,46
	ctx.r6.s64 = 46;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,184(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 184);
	// bctrl 
	ctx.lr = 0x8233A964;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A964:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A968:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233C320) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233C328;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c364
	if (!ctx.cr6.eq) goto loc_8233C364;
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
	// li r7,3457
	ctx.r7.s64 = 3457;
	// bl 0x82260f30
	ctx.lr = 0x8233C364;
	sub_82260F30(ctx, base);
loc_8233C364:
	// li r4,580
	ctx.r4.s64 = 580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233C370;
	sub_82266830(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,581
	ctx.r4.s64 = 581;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233C380;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233c3b0
	if (!ctx.cr6.eq) goto loc_8233C3B0;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,27996(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 27996);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// b 0x8233c3b8
	goto loc_8233C3B8;
loc_8233C3B0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,27992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27992);
	ctx.f0.f64 = double(temp.f32);
loc_8233C3B8:
	// stfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233c400
	if (ctx.cr6.eq) goto loc_8233C400;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233c400
	if (ctx.cr6.eq) goto loc_8233C400;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// bl 0x82338ea0
	ctx.lr = 0x8233C3D8;
	sub_82338EA0(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27976
	ctx.r4.s64 = ctx.r10.s64 + 27976;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,67
	ctx.r6.s64 = 67;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,268(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 268);
	// bctrl 
	ctx.lr = 0x8233C400;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233C400:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233E0E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8233E0E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r26,r10,-14148
	ctx.r26.s64 = ctx.r10.s64 + -14148;
	// addi r25,r11,28344
	ctx.r25.s64 = ctx.r11.s64 + 28344;
	// bne cr6,0x8233e124
	if (!ctx.cr6.eq) goto loc_8233E124;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r11,28336
	ctx.r5.s64 = ctx.r11.s64 + 28336;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,572
	ctx.r7.s64 = 572;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233E124;
	sub_82260F30(ctx, base);
loc_8233E124:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8233e1e4
	if (ctx.cr6.lt) goto loc_8233E1E4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r27,r11,28468
	ctx.r27.s64 = ctx.r11.s64 + 28468;
loc_8233E140:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233e164
	if (!ctx.cr6.eq) goto loc_8233E164;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233e164
	if (!ctx.cr6.eq) goto loc_8233E164;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233e16c
	if (ctx.cr6.eq) goto loc_8233E16C;
loc_8233E164:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x8233e140
	goto loc_8233E140;
loc_8233E16C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82314a28
	ctx.lr = 0x8233E178;
	sub_82314A28(ctx, base);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq 0x8233e1e0
	if (ctx.cr0.eq) goto loc_8233E1E0;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8233e1b0
	if (!ctx.cr6.eq) goto loc_8233E1B0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,616
	ctx.r7.s64 = 616;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233E1B0;
	sub_82260F30(ctx, base);
loc_8233E1B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233e1c4
	if (!ctx.cr6.eq) goto loc_8233E1C4;
	// stw r28,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// b 0x8233e140
	goto loc_8233E140;
loc_8233E1C4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233e1d8
	if (!ctx.cr6.eq) goto loc_8233E1D8;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// b 0x8233e140
	goto loc_8233E140;
loc_8233E1D8:
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// b 0x8233e140
	goto loc_8233E140;
loc_8233E1E0:
	// stw r28,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_8233E1E4:
	// stw r28,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r28.u32);
	// stw r28,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82342630) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82342638;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r27,r3,128
	ctx.r27.s64 = ctx.r3.s64 + 128;
	// stb r30,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r30.u8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r30,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,124(r31)
	REX_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stb r30,125(r31)
	REX_STORE_U8(ctx.r31.u32 + 125, ctx.r30.u8);
	// stb r30,126(r31)
	REX_STORE_U8(ctx.r31.u32 + 126, ctx.r30.u8);
	// bl 0x8235c890
	ctx.lr = 0x82342688;
	sub_8235C890(ctx, base);
	// stw r30,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// stw r30,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,184
	ctx.r3.s64 = ctx.r31.s64 + 184;
	// stw r30,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// li r5,1880
	ctx.r5.s64 = 1880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8215e640
	ctx.lr = 0x823426A4;
	sub_8215E640(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,2064(r31)
	REX_STORE_U32(ctx.r31.u32 + 2064, ctx.r30.u32);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// stb r30,2072(r31)
	REX_STORE_U8(ctx.r31.u32 + 2072, ctx.r30.u8);
	// stb r30,2073(r31)
	REX_STORE_U8(ctx.r31.u32 + 2073, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,2076(r31)
	REX_STORE_U32(ctx.r31.u32 + 2076, ctx.r30.u32);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r30,2084(r31)
	REX_STORE_U32(ctx.r31.u32 + 2084, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,2088(r31)
	REX_STORE_U32(ctx.r31.u32 + 2088, ctx.r30.u32);
	// stw r30,2092(r31)
	REX_STORE_U32(ctx.r31.u32 + 2092, ctx.r30.u32);
	// stw r30,2096(r31)
	REX_STORE_U32(ctx.r31.u32 + 2096, ctx.r30.u32);
	// stw r30,2148(r31)
	REX_STORE_U32(ctx.r31.u32 + 2148, ctx.r30.u32);
	// stw r30,2152(r31)
	REX_STORE_U32(ctx.r31.u32 + 2152, ctx.r30.u32);
	// stw r30,2156(r31)
	REX_STORE_U32(ctx.r31.u32 + 2156, ctx.r30.u32);
	// stw r30,2160(r31)
	REX_STORE_U32(ctx.r31.u32 + 2160, ctx.r30.u32);
	// stw r30,2164(r31)
	REX_STORE_U32(ctx.r31.u32 + 2164, ctx.r30.u32);
	// stw r30,2168(r31)
	REX_STORE_U32(ctx.r31.u32 + 2168, ctx.r30.u32);
	// stw r30,2172(r31)
	REX_STORE_U32(ctx.r31.u32 + 2172, ctx.r30.u32);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// stw r8,2080(r31)
	REX_STORE_U32(ctx.r31.u32 + 2080, ctx.r8.u32);
loc_82342700:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82342700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82342700;
	// stw r31,2736(r29)
	REX_STORE_U32(ctx.r29.u32 + 2736, ctx.r31.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lwz r28,1452(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82325520
	ctx.lr = 0x8234271C;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8234273c
	if (ctx.cr0.eq) goto loc_8234273C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x820a61e0
	ctx.lr = 0x82342734;
	sub_820A61E0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82342740
	goto loc_82342740;
loc_8234273C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82342740:
	// stw r11,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r4,1452(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x8233fa30
	ctx.lr = 0x82342750;
	sub_8233FA30(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lwz r28,1452(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82325520
	ctx.lr = 0x82342764;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x82342780
	if (ctx.cr0.eq) goto loc_82342780;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82362c00
	ctx.lr = 0x8234277C;
	sub_82362C00(ctx, base);
	// b 0x82342784
	goto loc_82342784;
loc_82342780:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82342784:
	// stw r3,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r28,1452(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82325520
	ctx.lr = 0x82342798;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x823427b4
	if (ctx.cr0.eq) goto loc_823427B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82362c58
	ctx.lr = 0x823427B0;
	sub_82362C58(ctx, base);
	// b 0x823427b8
	goto loc_823427B8;
loc_823427B4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_823427B8:
	// stw r3,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1452(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82325520
	ctx.lr = 0x823427CC;
	sub_82325520(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// beq 0x823427e8
	if (ctx.cr0.eq) goto loc_823427E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x823427E4;
	sub_8233EE50(ctx, base);
	// b 0x823427ec
	goto loc_823427EC;
loc_823427E8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823427EC:
	// stw r28,2068(r31)
	REX_STORE_U32(ctx.r31.u32 + 2068, ctx.r28.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r26,1452(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82325520
	ctx.lr = 0x82342800;
	sub_82325520(ctx, base);
	// addic. r28,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r28.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r26.u32);
	// beq 0x8234281c
	if (ctx.cr0.eq) goto loc_8234281C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x82342818;
	sub_8233EE50(ctx, base);
	// b 0x82342820
	goto loc_82342820;
loc_8234281C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82342820:
	// stw r28,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r28.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// lbz r4,1380(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 1380);
	// stb r4,2144(r31)
	REX_STORE_U8(ctx.r31.u32 + 2144, ctx.r4.u8);
	// bl 0x8234e538
	ctx.lr = 0x82342834;
	sub_8234E538(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,164(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235c918
	ctx.lr = 0x82342844;
	sub_8235C918(ctx, base);
	// stw r31,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,168(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8235c8f0
	ctx.lr = 0x82342858;
	sub_8235C8F0(ctx, base);
	// stw r31,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r31.u32);
	// lbz r11,2144(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2144);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82342874
	if (ctx.cr0.eq) goto loc_82342874;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-15584
	ctx.r11.s64 = ctx.r11.s64 + -15584;
	// b 0x8234287c
	goto loc_8234287C;
loc_82342874:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-15848
	ctx.r11.s64 = ctx.r11.s64 + -15848;
loc_8234287C:
	// stw r11,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r11,1360(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1360);
	// lwz r28,4(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,1452(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233fa30
	ctx.lr = 0x82342894;
	sub_8233FA30(ctx, base);
	// stw r3,2136(r31)
	REX_STORE_U32(ctx.r31.u32 + 2136, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,1452(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// bl 0x8233fa30
	ctx.lr = 0x823428A4;
	sub_8233FA30(ctx, base);
	// lwz r11,2136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2136);
	// stw r3,2140(r31)
	REX_STORE_U32(ctx.r31.u32 + 2140, ctx.r3.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823428d8
	if (!ctx.cr6.gt) goto loc_823428D8;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
loc_823428C4:
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823428c4
	if (ctx.cr6.lt) goto loc_823428C4;
loc_823428D8:
	// lwz r11,2140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2140);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82342900
	if (!ctx.cr6.gt) goto loc_82342900;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
loc_823428EC:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x823428ec
	if (ctx.cr6.lt) goto loc_823428EC;
loc_82342900:
	// lwz r11,1360(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 1360);
	// lwz r3,1452(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 1452);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82325520
	ctx.lr = 0x82342914;
	sub_82325520(ctx, base);
	// stw r3,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234BB08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8234BB10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234bb50
	if (!ctx.cr6.eq) goto loc_8234BB50;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x8234bb54
	goto loc_8234BB54;
loc_8234BB50:
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_8234BB54:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82349700
	ctx.lr = 0x8234BB68;
	sub_82349700(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82349700
	ctx.lr = 0x8234BB7C;
	sub_82349700(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r11,-16320
	ctx.r29.s64 = ctx.r11.s64 + -16320;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,92(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// rlwimi r8,r10,24,3,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F000000) | (ctx.r8.u64 & 0xFFFFFFFFE0FFFFFF);
	// rlwinm r10,r7,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8234BBB4:
	// slw r10,r25,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// rlwimi r10,r8,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bdnz 0x8234bbb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8234BBB4;
	// stb r9,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r9.u8);
	// lis r27,256
	ctx.r27.s64 = 16777216;
	// stb r9,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r9.u8);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// lwz r4,236(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 236);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8234bc48
	if (ctx.cr6.eq) goto loc_8234BC48;
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 2736);
	// bl 0x8236d3b8
	ctx.lr = 0x8234BBF8;
	sub_8236D3B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8234bc48
	if (ctx.cr0.lt) goto loc_8234BC48;
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,5(r31)
	REX_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// lhz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 4);
	// stb r11,6(r31)
	REX_STORE_U8(ctx.r31.u32 + 6, ctx.r11.u8);
loc_8234BC48:
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r11,r9,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r8,r9,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10000;
	// rlwinm r11,r11,0,18,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// rlwinm r7,r9,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,25,7,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// nor r11,r11,r9
	ctx.r11.u64 = ~(ctx.r11.u64 | ctx.r9.u64);
	// rlwimi r10,r11,16,12,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 2736);
	// bl 0x8236d3b8
	ctx.lr = 0x8234BC9C;
	sub_8236D3B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82349700
	ctx.lr = 0x8234BCC0;
	sub_82349700(ctx, base);
	// lwz r11,240(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 240);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r3,2736(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 2736);
	// lwz r4,240(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 240);
	// bl 0x8236d3b8
	ctx.lr = 0x8234BCDC;
	sub_8236D3B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8234bd24
	if (ctx.cr0.lt) goto loc_8234BD24;
	// lwz r10,136(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r27
	ctx.r10.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stb r11,7(r31)
	REX_STORE_U8(ctx.r31.u32 + 7, ctx.r11.u8);
loc_8234BD24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,8193
	ctx.r10.s64 = 8193;
	// rlwimi r11,r10,12,18,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwimi r11,r10,12,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r11,r10,12,6,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x2000000) | (ctx.r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234be08
	if (ctx.cr6.eq) goto loc_8234BE08;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234bdc4
	if (ctx.cr6.eq) goto loc_8234BDC4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8234bd80
	if (ctx.cr6.eq) goto loc_8234BD80;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2722
	ctx.r7.s64 = 2722;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234BD7C;
	sub_82260F30(ctx, base);
	// b 0x8234be44
	goto loc_8234BE44;
loc_8234BD80:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234bdb8
	if (ctx.cr0.eq) goto loc_8234BDB8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8234bdb8
	if (ctx.cr6.eq) goto loc_8234BDB8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-30168
	ctx.r5.s64 = ctx.r10.s64 + -30168;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2718
	ctx.r7.s64 = 2718;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234BDB8;
	sub_82260F30(ctx, base);
loc_8234BDB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// oris r11,r11,6144
	ctx.r11.u64 = ctx.r11.u64 | 402653184;
	// b 0x8234be40
	goto loc_8234BE40;
loc_8234BDC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234bdfc
	if (ctx.cr0.eq) goto loc_8234BDFC;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8234bdfc
	if (ctx.cr6.eq) goto loc_8234BDFC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-30208
	ctx.r5.s64 = ctx.r10.s64 + -30208;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2714
	ctx.r7.s64 = 2714;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234BDFC;
	sub_82260F30(ctx, base);
loc_8234BDFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r25,28,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 28) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// b 0x8234be40
	goto loc_8234BE40;
loc_8234BE08:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,3,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234be38
	if (ctx.cr0.eq) goto loc_8234BE38;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-30228
	ctx.r5.s64 = ctx.r10.s64 + -30228;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2710
	ctx.r7.s64 = 2710;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234BE38;
	sub_82260F30(ctx, base);
loc_8234BE38:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_8234BE40:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8234BE44:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82354FE0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27892
	ctx.r11.s64 = ctx.r11.s64 + -27892;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x82355020
	if (ctx.cr0.eq) goto loc_82355020;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82355020
	if (ctx.cr6.eq) goto loc_82355020;
	// addi r4,r3,-4
	ctx.r4.s64 = ctx.r3.s64 + -4;
	// lwz r3,-4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x82355020;
	sub_823256A8(ctx, base);
loc_82355020:
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

DEFINE_REX_FUNC(sub_82357EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82357EE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,-28064
	ctx.r28.s64 = ctx.r10.s64 + -28064;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82357f2c
	if (ctx.cr6.eq) goto loc_82357F2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-27564
	ctx.r5.s64 = ctx.r11.s64 + -27564;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1780
	ctx.r7.s64 = 1780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82357F2C;
	sub_82260F30(ctx, base);
loc_82357F2C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82357f54
	if (ctx.cr6.eq) goto loc_82357F54;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-27588
	ctx.r5.s64 = ctx.r11.s64 + -27588;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1781
	ctx.r7.s64 = 1781;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82357F54;
	sub_82260F30(ctx, base);
loc_82357F54:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82357f80
	if (!ctx.cr6.gt) goto loc_82357F80;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-26560
	ctx.r5.s64 = ctx.r11.s64 + -26560;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1782
	ctx.r7.s64 = 1782;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82357F80;
	sub_82260F30(ctx, base);
loc_82357F80:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,32(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x82353fc8
	ctx.lr = 0x82357F8C;
	sub_82353FC8(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r10,112(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82357fac
	if (!ctx.cr6.lt) goto loc_82357FAC;
	// stw r11,112(r29)
	REX_STORE_U32(ctx.r29.u32 + 112, ctx.r11.u32);
loc_82357FAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82356a30
	ctx.lr = 0x82357FB8;
	sub_82356A30(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82357030
	ctx.lr = 0x82357FC4;
	sub_82357030(ctx, base);
	// lwz r11,120(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82358088
	if (ctx.cr6.eq) goto loc_82358088;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,172(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r11,68(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82357FEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82358024
	if (ctx.cr0.eq) goto loc_82358024;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r11,236(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 236);
	// lwz r9,56(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82358088
	if (!ctx.cr6.eq) goto loc_82358088;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82358088
	if (ctx.cr6.eq) goto loc_82358088;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x82358020;
	sub_8233F040(ctx, base);
	// b 0x82358088
	goto loc_82358088;
loc_82358024:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82358088
	if (!ctx.cr6.eq) goto loc_82358088;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82358088
	if (ctx.cr0.eq) goto loc_82358088;
	// lwz r10,120(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 120);
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r9,r9,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r9,236(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// beq 0x82358068
	if (ctx.cr0.eq) goto loc_82358068;
	// addi r10,r10,58
	ctx.r10.s64 = ctx.r10.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// b 0x82358088
	goto loc_82358088;
loc_82358068:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r10,58
	ctx.r8.s64 = ctx.r10.s64 + 58;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 512;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
loc_82358088:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235809C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823580a8
	if (ctx.cr0.eq) goto loc_823580A8;
	// stw r31,120(r29)
	REX_STORE_U32(ctx.r29.u32 + 120, ctx.r31.u32);
loc_823580A8:
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823580C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,40(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8236fb70
	ctx.lr = 0x823580CC;
	sub_8236FB70(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82354d98
	ctx.lr = 0x823580D8;
	sub_82354D98(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235B3B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x8235B3C0;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r6,r3
	ctx.r11.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lbz r11,896(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 896);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8235b608
	if (!ctx.cr0.eq) goto loc_8235B608;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,1876(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 1876);
	// mulli r10,r5,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r9,-24868
	ctx.r4.s64 = ctx.r9.s64 + -24868;
	// lwzx r6,r10,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82113c30
	ctx.lr = 0x8235B408;
	sub_82113C30(ctx, base);
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r20,15
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 15, ctx.xer);
	// bge cr6,0x8235b4d8
	if (!ctx.cr6.lt) goto loc_8235B4D8;
	// addi r11,r20,228
	ctx.r11.s64 = ctx.r20.s64 + 228;
	// subfic r29,r31,-632
	ctx.xer.ca = ctx.r31.u32 <= 4294966664;
	ctx.r29.u64 = static_cast<uint64_t>(-632) - ctx.r31.u64;
	// subfic r28,r31,-636
	ctx.xer.ca = ctx.r31.u32 <= 4294966660;
	ctx.r28.u64 = static_cast<uint64_t>(-636) - ctx.r31.u64;
	// subfic r27,r31,-568
	ctx.xer.ca = ctx.r31.u32 <= 4294966728;
	ctx.r27.u64 = static_cast<uint64_t>(-568) - ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r26,r31,-572
	ctx.xer.ca = ctx.r31.u32 <= 4294966724;
	ctx.r26.u64 = static_cast<uint64_t>(-572) - ctx.r31.u64;
	// subfic r25,r31,-504
	ctx.xer.ca = ctx.r31.u32 <= 4294966792;
	ctx.r25.u64 = static_cast<uint64_t>(-504) - ctx.r31.u64;
	// subfic r24,r31,-508
	ctx.xer.ca = ctx.r31.u32 <= 4294966788;
	ctx.r24.u64 = static_cast<uint64_t>(-508) - ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r23,r20,15
	ctx.xer.ca = ctx.r20.u32 <= 15;
	ctx.r23.u64 = static_cast<uint64_t>(15) - ctx.r20.u64;
loc_8235B43C:
	// lwz r4,68(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r3,132(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r18,4(r11)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// add r7,r29,r11
	ctx.r7.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r4,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r4.u32);
	// add r5,r27,r11
	ctx.r5.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r3,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r3.u32);
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r30,r24,r11
	ctx.r30.u64 = ctx.r24.u64 + ctx.r11.u64;
	// stw r18,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_8235B47C:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r18,r3,r10
	ctx.r18.u64 = ctx.r3.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r17,r6,r10
	ctx.r17.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r16,r4,r10
	ctx.r16.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r15,r30,r10
	ctx.r15.u64 = ctx.r30.u64 + ctx.r10.u64;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r17,r17,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r18,r18,r31
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + ctx.r31.u32);
	// rlwinm r16,r16,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r15,r15,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r17,r31
	REX_STORE_U32(ctx.r17.u32 + ctx.r31.u32, ctx.r11.u32);
	// stwx r9,r16,r31
	REX_STORE_U32(ctx.r16.u32 + ctx.r31.u32, ctx.r9.u32);
	// stwx r18,r15,r31
	REX_STORE_U32(ctx.r15.u32 + ctx.r31.u32, ctx.r18.u32);
	// bdnz 0x8235b47c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B47C;
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// bne 0x8235b43c
	if (!ctx.cr0.eq) goto loc_8235B43C;
loc_8235B4D8:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r22,972(r31)
	REX_STORE_U32(ctx.r31.u32 + 972, ctx.r22.u32);
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r22,1036(r31)
	REX_STORE_U32(ctx.r31.u32 + 1036, ctx.r22.u32);
	// addi r11,r31,1852
	ctx.r11.s64 = ctx.r31.s64 + 1852;
	// stw r9,1100(r31)
	REX_STORE_U32(ctx.r31.u32 + 1100, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235B4F4:
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r22,-508(r11)
	REX_STORE_U32(ctx.r11.u32 + -508, ctx.r22.u32);
	// stw r10,-252(r11)
	REX_STORE_U32(ctx.r11.u32 + -252, ctx.r10.u32);
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8235b4f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B4F4;
	// lbz r11,2072(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 2072);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235b540
	if (ctx.cr0.eq) goto loc_8235B540;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// beq cr6,0x8235b540
	if (ctx.cr6.eq) goto loc_8235B540;
	// lwz r4,2084(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 2084);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// stw r11,2084(r21)
	REX_STORE_U32(ctx.r21.u32 + 2084, ctx.r11.u32);
	// bl 0x823508e8
	ctx.lr = 0x8235B530;
	sub_823508E8(ctx, base);
	// lwz r11,2076(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 2076);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2076(r21)
	REX_STORE_U32(ctx.r21.u32 + 2076, ctx.r11.u32);
	// b 0x8235b578
	goto loc_8235B578;
loc_8235B540:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235b564
	if (ctx.cr6.eq) goto loc_8235B564;
	// cmpwi cr6,r19,18
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 18, ctx.xer);
	// bne cr6,0x8235b564
	if (!ctx.cr6.eq) goto loc_8235B564;
	// lwz r4,2084(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 2084);
	// stb r22,2072(r21)
	REX_STORE_U8(ctx.r21.u32 + 2072, ctx.r22.u8);
	// stb r22,2073(r21)
	REX_STORE_U8(ctx.r21.u32 + 2073, ctx.r22.u8);
	// stw r22,2076(r21)
	REX_STORE_U32(ctx.r21.u32 + 2076, ctx.r22.u32);
	// b 0x8235b570
	goto loc_8235B570;
loc_8235B564:
	// lwz r11,2084(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 2084);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,2084(r21)
	REX_STORE_U32(ctx.r21.u32 + 2084, ctx.r4.u32);
loc_8235B570:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823508e8
	ctx.lr = 0x8235B578;
	sub_823508E8(ctx, base);
loc_8235B578:
	// lwz r11,164(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 164);
	// lwz r30,28(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8235b5e4
	goto loc_8235B5E4;
loc_8235B584:
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235b5e0
	if (ctx.cr0.eq) goto loc_8235B5E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235B5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8235b5e0
	if (ctx.cr0.eq) goto loc_8235B5E0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235b5e0
	if (ctx.cr6.eq) goto loc_8235B5E0;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235b5e0
	if (!ctx.cr6.eq) goto loc_8235B5E0;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// ble cr6,0x8235b5e0
	if (!ctx.cr6.gt) goto loc_8235B5E0;
	// lwz r10,80(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r10.u32);
loc_8235B5E0:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_8235B5E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235b584
	if (!ctx.cr6.eq) goto loc_8235B584;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,1876(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1876);
	// addi r4,r11,-24900
	ctx.r4.s64 = ctx.r11.s64 + -24900;
	// bl 0x82113c30
	ctx.lr = 0x8235B600;
	sub_82113C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235aa88
	ctx.lr = 0x8235B608;
	sub_8235AA88(ctx, base);
loc_8235B608:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235BDC4) {
	REX_FUNC_PROLOGUE();
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82360008) {
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
	// bl 0x8235fd90
	ctx.lr = 0x82360018;
	sub_8235FD90(ctx, base);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r9,-12776
	ctx.r8.s64 = ctx.r9.s64 + -12776;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r9,r3,76
	ctx.r9.s64 = ctx.r3.s64 + 76;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236003C:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-20(r9)
	REX_STORE_U32(ctx.r9.u32 + -20, ctx.r11.u32);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8236003c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236003C;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82360478) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,122
	ctx.r4.s64 = 122;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82360498;
	sub_8235FD90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11872
	ctx.r11.s64 = ctx.r11.s64 + -11872;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82360DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82360DC0;
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
	ctx.lr = 0x82360DDC;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82360dfc
	if (ctx.cr0.eq) goto loc_82360DFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82360008
	ctx.lr = 0x82360DF8;
	sub_82360008(ctx, base);
	// b 0x82360e00
	goto loc_82360E00;
loc_82360DFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360E00:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82361498) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x823614A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,1452(r4)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82325520
	ctx.lr = 0x823614C4;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// beq 0x823614ec
	if (ctx.cr0.eq) goto loc_823614EC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82360758
	ctx.lr = 0x823614E8;
	sub_82360758(ctx, base);
	// b 0x823614f0
	goto loc_823614F0;
loc_823614EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823614F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823624C8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,88(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82362C98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-13728
	ctx.r3.s64 = ctx.r11.s64 + -13728;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82362D48) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82362138
	ctx.lr = 0x82362D6C;
	sub_82362138(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r30,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-8864
	ctx.r11.s64 = ctx.r11.s64 + -8864;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_823635A8) {
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
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82363610
	if (ctx.cr6.lt) goto loc_82363610;
	// beq cr6,0x82363608
	if (ctx.cr6.eq) goto loc_82363608;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82363600
	if (ctx.cr6.lt) goto loc_82363600;
	// beq cr6,0x823635f8
	if (ctx.cr6.eq) goto loc_823635F8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,1488
	ctx.r6.s64 = ctx.r11.s64 + 1488;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,5399
	ctx.r7.s64 = 5399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823635F0;
	sub_82260F30(ctx, base);
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82363614
	goto loc_82363614;
loc_823635F8:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x82363614
	goto loc_82363614;
loc_82363600:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82363614
	goto loc_82363614;
loc_82363608:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82363614
	goto loc_82363614;
loc_82363610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82363614:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236C518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,176(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_8236C530:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8236c530
	if (ctx.cr6.lt) goto loc_8236C530;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8236CD18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236CD20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,1452(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 1452);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82325520
	ctx.lr = 0x8236CD40;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8236cd64
	if (ctx.cr0.eq) goto loc_8236CD64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235e9a0
	ctx.lr = 0x8236CD60;
	sub_8235E9A0(ctx, base);
	// b 0x8236cd68
	goto loc_8236CD68;
loc_8236CD64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CD68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D310) {
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
	// bl 0x8236d180
	ctx.lr = 0x8236D328;
	sub_8236D180(ctx, base);
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

DEFINE_REX_FUNC(sub_8236E5B0) {
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
	// lwz r30,8(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8236e650
	if (ctx.cr6.gt) goto loc_8236E650;
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x8236e470
	ctx.lr = 0x8236E5EC;
	sub_8236E470(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// subf r9,r6,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r6.u64;
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x8236e650
	if (ctx.cr6.gt) goto loc_8236E650;
loc_8236E604:
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpw cr6,r6,r30
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x8236e630
	if (ctx.cr6.gt) goto loc_8236E630;
	// mulli r11,r6,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(12));
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x8236e470
	ctx.lr = 0x8236E630;
	sub_8236E470(ctx, base);
loc_8236E630:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r7,r10,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x8236e604
	if (!ctx.cr6.gt) goto loc_8236E604;
loc_8236E650:
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

DEFINE_REX_FUNC(sub_8236FD00) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8236fde0
	if (!ctx.cr6.eq) goto loc_8236FDE0;
	// lwz r11,228(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fd50
	if (ctx.cr0.eq) goto loc_8236FD50;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8236fd50
	if (!ctx.cr6.eq) goto loc_8236FD50;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ed40
	ctx.lr = 0x8236FD48;
	sub_8235ED40(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236fdec
	if (!ctx.cr0.eq) goto loc_8236FDEC;
loc_8236FD50:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fdd8
	if (ctx.cr0.eq) goto loc_8236FDD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FD80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fd94
	if (ctx.cr0.eq) goto loc_8236FD94;
	// lwz r11,172(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8236fdec
	if (ctx.cr6.eq) goto loc_8236FDEC;
loc_8236FD94:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FDA8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fdd8
	if (ctx.cr0.eq) goto loc_8236FDD8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236FDC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fdd8
	if (ctx.cr0.eq) goto loc_8236FDD8;
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8236fdec
	if (ctx.cr6.eq) goto loc_8236FDEC;
loc_8236FDD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8236fdf0
	goto loc_8236FDF0;
loc_8236FDE0:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x8236fdf0
	if (ctx.cr6.eq) goto loc_8236FDF0;
loc_8236FDEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236FDF0:
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

DEFINE_REX_FUNC(sub_823726A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r10,r10,4180
	ctx.r10.s64 = ctx.r10.s64 + 4180;
	// addi r9,r9,4172
	ctx.r9.s64 = ctx.r9.s64 + 4172;
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// bne 0x823726e0
	if (!ctx.cr0.eq) goto loc_823726E0;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x823726fc
	if (ctx.cr6.eq) goto loc_823726FC;
loc_823726E0:
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r9,6768
	ctx.r4.s64 = ctx.r9.s64 + 6768;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x823714e0
	ctx.lr = 0x823726FC;
	sub_823714E0(ctx, base);
loc_823726FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374968) {
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
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-29656
	ctx.r31.s64 = ctx.r11.s64 + -29656;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8215ec60
	ctx.lr = 0x82374990;
	sub_8215EC60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r31,528
	ctx.r3.s64 = ctx.r31.s64 + 528;
	// addi r4,r11,10016
	ctx.r4.s64 = ctx.r11.s64 + 10016;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8215e640
	ctx.lr = 0x823749A4;
	sub_8215E640(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8215ec60
	ctx.lr = 0x823749B4;
	sub_8215EC60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,1044(r31)
	REX_STORE_U32(ctx.r31.u32 + 1044, ctx.r10.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,1048(r31)
	REX_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1040(r31)
	REX_STORE_U32(ctx.r31.u32 + 1040, ctx.r11.u32);
	// stw r11,1052(r31)
	REX_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// stw r10,1056(r31)
	REX_STORE_U32(ctx.r31.u32 + 1056, ctx.r10.u32);
	// stw r9,1060(r31)
	REX_STORE_U32(ctx.r31.u32 + 1060, ctx.r9.u32);
	// stw r11,1064(r31)
	REX_STORE_U32(ctx.r31.u32 + 1064, ctx.r11.u32);
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

