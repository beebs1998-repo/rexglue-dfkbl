#include "dfkbl_funcs.47.h"

DEFINE_REX_FUNC(sub_82091788) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820943f0
	sub_820943F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091820) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094a60
	sub_82094A60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091918) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096f30
	sub_82096F30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091B28) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82097990
	sub_82097990(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091D60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096318
	sub_82096318(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092028) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094de0
	sub_82094DE0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092378) {
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
	// bl 0x8209b8b8
	ctx.lr = 0x82092390;
	sub_8209B8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820968c8
	ctx.lr = 0x82092398;
	sub_820968C8(ctx, base);
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

DEFINE_REX_FUNC(sub_82092E80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x82092E88;
	__savegprlr_16(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,399(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 399);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r9,r5,16
	ctx.r9.u64 = ctx.r5.u32 & 0xFFFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// clrlwi r17,r4,16
	ctx.r17.u64 = ctx.r4.u32 & 0xFFFF;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// extsh r16,r6
	ctx.r16.s64 = ctx.r6.s16;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82092f04
	if (!ctx.cr6.lt) goto loc_82092F04;
	// cmpwi cr6,r10,7872
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7872, ctx.xer);
	// blt cr6,0x82092ee0
	if (ctx.cr6.lt) goto loc_82092EE0;
	// addi r22,r22,-7872
	ctx.r22.s64 = ctx.r22.s64 + -7872;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82092ef0
	goto loc_82092EF0;
loc_82092EE0:
	// cmpwi cr6,r10,7552
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7552, ctx.xer);
	// blt cr6,0x82092ef0
	if (ctx.cr6.lt) goto loc_82092EF0;
	// addi r22,r22,-7552
	ctx.r22.s64 = ctx.r22.s64 + -7552;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82092EF0:
	// cmplwi cr6,r10,320
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 320, ctx.xer);
	// blt cr6,0x82092f24
	if (ctx.cr6.lt) goto loc_82092F24;
	// cmplwi cr6,r10,7552
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7552, ctx.xer);
	// blt cr6,0x820931bc
	if (ctx.cr6.lt) goto loc_820931BC;
	// b 0x82092f24
	goto loc_82092F24;
loc_82092F04:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82092f18
	if (!ctx.cr6.eq) goto loc_82092F18;
	// addi r22,r22,-7872
	ctx.r22.s64 = ctx.r22.s64 + -7872;
	// b 0x82092f24
	goto loc_82092F24;
loc_82092F18:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x82092f24
	if (!ctx.cr6.eq) goto loc_82092F24;
	// addi r22,r22,-7552
	ctx.r22.s64 = ctx.r22.s64 + -7552;
loc_82092F24:
	// lbz r11,407(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 407);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82092f6c
	if (!ctx.cr6.lt) goto loc_82092F6C;
	// cmpwi cr6,r9,7872
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7872, ctx.xer);
	// blt cr6,0x82092f48
	if (ctx.cr6.lt) goto loc_82092F48;
	// addi r23,r23,-7872
	ctx.r23.s64 = ctx.r23.s64 + -7872;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82092f58
	goto loc_82092F58;
loc_82092F48:
	// cmpwi cr6,r9,7552
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7552, ctx.xer);
	// blt cr6,0x82092f58
	if (ctx.cr6.lt) goto loc_82092F58;
	// addi r23,r23,-7552
	ctx.r23.s64 = ctx.r23.s64 + -7552;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82092F58:
	// cmplwi cr6,r9,320
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 320, ctx.xer);
	// blt cr6,0x82092f8c
	if (ctx.cr6.lt) goto loc_82092F8C;
	// cmplwi cr6,r9,7552
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 7552, ctx.xer);
	// blt cr6,0x820931bc
	if (ctx.cr6.lt) goto loc_820931BC;
	// b 0x82092f8c
	goto loc_82092F8C;
loc_82092F6C:
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82092f80
	if (!ctx.cr6.eq) goto loc_82092F80;
	// addi r23,r23,-7872
	ctx.r23.s64 = ctx.r23.s64 + -7872;
	// b 0x82092f8c
	goto loc_82092F8C;
loc_82092F80:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82092f8c
	if (!ctx.cr6.eq) goto loc_82092F8C;
	// addi r23,r23,-7552
	ctx.r23.s64 = ctx.r23.s64 + -7552;
loc_82092F8C:
	// cmplwi cr6,r21,4
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 4, ctx.xer);
	// bge cr6,0x820931bc
	if (!ctx.cr6.lt) goto loc_820931BC;
	// lbz r11,375(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 375);
	// rlwinm r9,r11,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bne cr6,0x82092fbc
	if (!ctx.cr6.eq) goto loc_82092FBC;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r26,255
	ctx.r26.s64 = 255;
	// b 0x82093048
	goto loc_82093048;
loc_82092FBC:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82092fd4
	if (!ctx.cr6.eq) goto loc_82092FD4;
	// li r27,2
	ctx.r27.s64 = 2;
	// li r26,255
	ctx.r26.s64 = 255;
	// b 0x82093048
	goto loc_82093048;
loc_82092FD4:
	// rlwinm r9,r10,0,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bne cr6,0x82092fec
	if (!ctx.cr6.eq) goto loc_82092FEC;
	// li r27,9
	ctx.r27.s64 = 9;
	// li r26,255
	ctx.r26.s64 = 255;
	// b 0x82093048
	goto loc_82093048;
loc_82092FEC:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82093004
	if (!ctx.cr6.eq) goto loc_82093004;
	// li r27,8
	ctx.r27.s64 = 8;
	// li r26,255
	ctx.r26.s64 = 255;
	// b 0x82093048
	goto loc_82093048;
loc_82093004:
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// bne cr6,0x82093024
	if (!ctx.cr6.eq) goto loc_82093024;
	// lbz r9,383(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 383);
	// li r27,5
	ctx.r27.s64 = 5;
	// subfic r8,r9,255
	ctx.xer.ca = ctx.r9.u32 <= 255;
	ctx.r8.u64 = static_cast<uint64_t>(255) - ctx.r9.u64;
	// clrlwi r26,r8,24
	ctx.r26.u64 = ctx.r8.u32 & 0xFF;
	// b 0x82093048
	goto loc_82093048;
loc_82093024:
	// rlwinm r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// lbz r26,383(r1)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r1.u32 + 383);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x8209303c
	if (!ctx.cr6.eq) goto loc_8209303C;
	// li r27,4
	ctx.r27.s64 = 4;
	// b 0x82093048
	goto loc_82093048;
loc_8209303C:
	// addic r9,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r9.s64 = ctx.r26.s64 + -1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// subfe r27,r9,r26
	temp.u8 = (~ctx.r9.u32 + ctx.r26.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r26.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r9.u64 + ctx.r26.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82093048:
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// bne cr6,0x82093064
	if (!ctx.cr6.eq) goto loc_82093064;
	// li r30,3
	ctx.r30.s64 = 3;
	// li r29,255
	ctx.r29.s64 = 255;
	// b 0x820930e4
	goto loc_820930E4;
loc_82093064:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8209307c
	if (!ctx.cr6.eq) goto loc_8209307C;
	// li r30,2
	ctx.r30.s64 = 2;
	// li r29,255
	ctx.r29.s64 = 255;
	// b 0x820930e4
	goto loc_820930E4;
loc_8209307C:
	// rlwinm r10,r11,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x82093094
	if (!ctx.cr6.eq) goto loc_82093094;
	// li r30,9
	ctx.r30.s64 = 9;
	// li r29,255
	ctx.r29.s64 = 255;
	// b 0x820930e4
	goto loc_820930E4;
loc_82093094:
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x820930ac
	if (!ctx.cr6.eq) goto loc_820930AC;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r29,255
	ctx.r29.s64 = 255;
	// b 0x820930e4
	goto loc_820930E4;
loc_820930AC:
	// rlwinm r10,r11,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// lbz r29,391(r1)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r1.u32 + 391);
	// cmplwi cr6,r10,12
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12, ctx.xer);
	// bne cr6,0x820930c4
	if (!ctx.cr6.eq) goto loc_820930C4;
	// li r30,5
	ctx.r30.s64 = 5;
	// b 0x820930e4
	goto loc_820930E4;
loc_820930C4:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x820930d8
	if (!ctx.cr6.eq) goto loc_820930D8;
	// li r30,4
	ctx.r30.s64 = 4;
	// b 0x820930e4
	goto loc_820930E4;
loc_820930D8:
	// addic r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// subfe r30,r10,r29
	temp.u8 = (~ctx.r10.u32 + ctx.r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820930E4:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r28,r11,21768
	ctx.r28.s64 = ctx.r11.s64 + 21768;
	// stw r24,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r24.u32);
	// stw r25,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r25.u32);
	// bl 0x8209b8b8
	ctx.lr = 0x820930F8;
	sub_8209B8B8(ctx, base);
	// bl 0x820968a0
	ctx.lr = 0x820930FC;
	sub_820968A0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820931bc
	if (ctx.cr6.eq) goto loc_820931BC;
	// lis r31,-32190
	ctx.r31.s64 = -2109603840;
	// lwz r3,26084(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 26084);
	// bl 0x820943a0
	ctx.lr = 0x82093110;
	sub_820943A0(ctx, base);
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// stb r29,119(r1)
	REX_STORE_U8(ctx.r1.u32 + 119, ctx.r29.u8);
	// rlwinm r6,r21,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,26084(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 26084);
	// addi r5,r10,128
	ctx.r5.s64 = ctx.r10.s64 + 128;
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// stw r25,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// stb r26,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r26.u8);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwzx r29,r6,r5
	ctx.r29.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x82099db8
	ctx.lr = 0x82093168;
	sub_82099DB8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820931bc
	if (!ctx.cr6.eq) goto loc_820931BC;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x820931b0
	if (ctx.cr6.lt) goto loc_820931B0;
	// beq cr6,0x8209319c
	if (ctx.cr6.eq) goto loc_8209319C;
	// cmplwi cr6,r25,3
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 3, ctx.xer);
	// bge cr6,0x820931bc
	if (!ctx.cr6.lt) goto loc_820931BC;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,26084(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 26084);
	// bl 0x82096998
	ctx.lr = 0x82093194;
	sub_82096998(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
loc_8209319C:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,26084(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 26084);
	// bl 0x82096998
	ctx.lr = 0x820931A8;
	sub_82096998(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
loc_820931B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26084(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 26084);
	// bl 0x82096998
	ctx.lr = 0x820931BC;
	sub_82096998(ctx, base);
loc_820931BC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A0D20) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2200);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r4,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A0D60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,2200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2200);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// mulli r11,r4,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A0F00) {
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
	// bl 0x820a0c58
	ctx.lr = 0x820A0F18;
	sub_820A0C58(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2196);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820a0f40
	if (!ctx.cr6.lt) goto loc_820A0F40;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820a0f40
	if (ctx.cr6.eq) goto loc_820A0F40;
	// mulli r11,r3,27
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(27));
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r6.u32);
loc_820A0F40:
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

DEFINE_REX_FUNC(sub_820A2030) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2244);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r10,2240(r3)
	REX_STORE_U32(ctx.r3.u32 + 2240, ctx.r10.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820a2274
	if (ctx.cr6.eq) goto loc_820A2274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lfs f13,4596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4596);
	ctx.f13.f64 = double(temp.f32);
	// blt cr6,0x820a2164
	if (ctx.cr6.lt) goto loc_820A2164;
	// bl 0x820a0c58
	ctx.lr = 0x820A206C;
	sub_820A0C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820a2164
	if (ctx.cr6.lt) goto loc_820A2164;
	// lwz r11,2200(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2200);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820a2164
	if (!ctx.cr6.lt) goto loc_820A2164;
	// mulli r11,r3,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addic. r11,r10,76
	ctx.xer.ca = ctx.r10.u32 > 4294967219;
	ctx.r11.s64 = ctx.r10.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,4600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4600);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x820a20bc
	if (ctx.cr0.eq) goto loc_820A20BC;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a20bc
	if (ctx.cr6.eq) goto loc_820A20BC;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A20BC:
	// addic. r11,r10,88
	ctx.xer.ca = ctx.r10.u32 > 4294967207;
	ctx.r11.s64 = ctx.r10.s64 + 88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a20e4
	if (ctx.cr0.eq) goto loc_820A20E4;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a20e4
	if (ctx.cr6.eq) goto loc_820A20E4;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A20E4:
	// lwz r10,2200(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 2200);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820a2164
	if (!ctx.cr6.lt) goto loc_820A2164;
	// mulli r11,r11,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820a2164
	if (ctx.cr6.lt) goto loc_820A2164;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bgt cr6,0x820a2164
	if (ctx.cr6.gt) goto loc_820A2164;
	// addic. r10,r11,76
	ctx.xer.ca = ctx.r11.u32 > 4294967219;
	ctx.r10.s64 = ctx.r11.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820a213c
	if (ctx.cr0.eq) goto loc_820A213C;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a213c
	if (ctx.cr6.eq) goto loc_820A213C;
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820A213C:
	// addic. r11,r11,88
	ctx.xer.ca = ctx.r11.u32 > 4294967207;
	ctx.r11.s64 = ctx.r11.s64 + 88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a2164
	if (ctx.cr0.eq) goto loc_820A2164;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a2164
	if (ctx.cr6.eq) goto loc_820A2164;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A2164:
	// lwz r4,2244(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 2244);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x820a2270
	if (ctx.cr6.lt) goto loc_820A2270;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x820a0c58
	ctx.lr = 0x820A2178;
	sub_820A0C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820a2270
	if (ctx.cr6.lt) goto loc_820A2270;
	// lwz r11,2200(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2200);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820a2270
	if (!ctx.cr6.lt) goto loc_820A2270;
	// mulli r11,r3,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// addic. r11,r10,76
	ctx.xer.ca = ctx.r10.u32 > 4294967219;
	ctx.r11.s64 = ctx.r10.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,2104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// beq 0x820a21c8
	if (ctx.cr0.eq) goto loc_820A21C8;
	// lfs f12,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a21c8
	if (ctx.cr6.eq) goto loc_820A21C8;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A21C8:
	// addic. r11,r10,88
	ctx.xer.ca = ctx.r10.u32 > 4294967207;
	ctx.r11.s64 = ctx.r10.s64 + 88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a21f0
	if (ctx.cr0.eq) goto loc_820A21F0;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a21f0
	if (ctx.cr6.eq) goto loc_820A21F0;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A21F0:
	// lwz r10,2200(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 2200);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x820a2270
	if (!ctx.cr6.lt) goto loc_820A2270;
	// mulli r11,r11,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// blt cr6,0x820a2270
	if (ctx.cr6.lt) goto loc_820A2270;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bgt cr6,0x820a2270
	if (ctx.cr6.gt) goto loc_820A2270;
	// addic. r10,r11,76
	ctx.xer.ca = ctx.r11.u32 > 4294967219;
	ctx.r10.s64 = ctx.r11.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x820a2248
	if (ctx.cr0.eq) goto loc_820A2248;
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a2248
	if (ctx.cr6.eq) goto loc_820A2248;
	// lfs f12,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
loc_820A2248:
	// addic. r11,r11,88
	ctx.xer.ca = ctx.r11.u32 > 4294967207;
	ctx.r11.s64 = ctx.r11.s64 + 88;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x820a2270
	if (ctx.cr0.eq) goto loc_820A2270;
	// lfs f12,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x820a2270
	if (ctx.cr6.eq) goto loc_820A2270;
	// lfs f12,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// stfs f10,8(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_820A2270:
	// stw r5,2244(r6)
	REX_STORE_U32(ctx.r6.u32 + 2244, ctx.r5.u32);
loc_820A2274:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820ACD50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820ACD58;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ACD7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// lwz r8,12(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r6,r9,r8
	ctx.r6.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mullw r5,r6,r8
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x820acdb8
	if (!ctx.cr6.eq) goto loc_820ACDB8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x820acddc
	goto loc_820ACDDC;
loc_820ACDB8:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// ld r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stdx r7,r10,r8
	REX_STORE_U64(ctx.r10.u32 + ctx.r8.u32, ctx.r7.u64);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r6,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
loc_820ACDDC:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820ACDF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AFA68) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820B0128) {
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
	// beq cr6,0x820b0224
	if (ctx.cr6.eq) goto loc_820B0224;
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
	ctx.lr = 0x820B0160;
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
	ctx.lr = 0x820B017C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B0198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B01B4;
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
	ctx.lr = 0x820B01D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B01EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B0208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820B0224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0224:
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

DEFINE_REX_FUNC(sub_820B1CB0) {
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
	// lwz r3,140(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b1cd4
	if (ctx.cr6.eq) goto loc_820B1CD4;
	// bl 0x820e8f80
	ctx.lr = 0x820B1CD4;
	sub_820E8F80(ctx, base);
loc_820B1CD4:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e8ee0
	ctx.lr = 0x820B1CF0;
	sub_820E8EE0(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r3,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// addi r11,r31,140
	ctx.r11.s64 = ctx.r31.s64 + 140;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820B1D04:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b1d04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B1D04;
	// lwz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// stw r11,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_820B39D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820B39E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,64(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x820b3a10
	if (!ctx.cr6.eq) goto loc_820B3A10;
loc_820B3A04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_820B3A10:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b3a04
	if (ctx.cr6.eq) goto loc_820B3A04;
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x820b3a04
	if (ctx.cr6.eq) goto loc_820B3A04;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82093fe8
	ctx.lr = 0x820B3A3C;
	sub_82093FE8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,23704
	ctx.r3.s64 = ctx.r28.s64 + 23704;
	// bl 0x820a6db0
	ctx.lr = 0x820B3A4C;
	sub_820A6DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b3a04
	if (ctx.cr6.eq) goto loc_820B3A04;
	// extsw r10,r26
	ctx.r10.s64 = ctx.r26.s32;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,328(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// lfs f2,2104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f2.f64 = double(temp.f32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lfs f0,4672(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4672);
	ctx.f0.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bctrl 
	ctx.lr = 0x820B3AAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B6640) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820B6648;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820b51b0
	ctx.lr = 0x820B6658;
	sub_820B51B0(ctx, base);
	// lwz r11,3984(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 3984);
	// addi r31,r29,3984
	ctx.r31.s64 = ctx.r29.s64 + 3984;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x820b6690
	if (ctx.cr6.eq) goto loc_820B6690;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b667c
	if (ctx.cr6.eq) goto loc_820B667C;
	// bl 0x8210f568
	ctx.lr = 0x820B667C;
	sub_8210F568(ctx, base);
loc_820B667C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_820B6690:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820b62b8
	ctx.lr = 0x820B669C;
	sub_820B62B8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B7030) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x820b7048
	if (!ctx.cr6.lt) goto loc_820B7048;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r10,r3
	REX_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r4.u32);
loc_820B7048:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B72A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,60(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,100(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820b7310
	if (ctx.cr6.eq) goto loc_820B7310;
	// lwz r9,64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// addi r10,r10,26
	ctx.r10.s64 = ctx.r10.s64 + 26;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// beq cr6,0x820b72f8
	if (ctx.cr6.eq) goto loc_820B72F8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blr 
	return;
loc_820B72F8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820b7308
	if (ctx.cr6.eq) goto loc_820B7308;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820B7308:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
loc_820B7310:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B9CE0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820B9CE8;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8215eb9c
	ctx.lr = 0x820B9CF0;
	__savefpr_25(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,2416(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 2416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f30,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820b9d1c
	if (ctx.cr6.eq) goto loc_820B9D1C;
	// lfs f0,2460(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x820ba0fc
	if (!ctx.cr6.gt) goto loc_820BA0FC;
loc_820B9D1C:
	// lfs f0,2448(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f13,2432(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fadds f29,f0,f13
	ctx.f29.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// stw r11,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r11.u32);
	// lfs f12,2452(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2452);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,2436(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	ctx.f11.f64 = double(temp.f32);
	// fadds f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f28,-23820(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23820);
	ctx.f28.f64 = double(temp.f32);
	// fsubs f27,f29,f28
	ctx.f27.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fsubs f26,f31,f28
	ctx.f26.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// fsubs f25,f27,f28
	ctx.f25.f64 = double(float(ctx.f27.f64 - ctx.f28.f64));
	// bl 0x82092088
	ctx.lr = 0x820B9D54;
	sub_82092088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x820928d0
	ctx.lr = 0x820B9D5C;
	sub_820928D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x820b9d88
	if (ctx.cr6.lt) goto loc_820B9D88;
	// cmpwi cr6,r3,12
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 12, ctx.xer);
	// bge cr6,0x820b9d88
	if (!ctx.cr6.lt) goto loc_820B9D88;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 65536;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// b 0x820b9d8c
	goto loc_820B9D8C;
loc_820B9D88:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_820B9D8C:
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// ori r25,r11,32896
	ctx.r25.u64 = ctx.r11.u64 | 32896;
	// beq cr6,0x820b9db4
	if (ctx.cr6.eq) goto loc_820B9DB4;
	// lfs f0,2456(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820b9dc4
	goto loc_820B9DC4;
loc_820B9DB4:
	// lfs f0,2460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_820B9DC4:
	// rlwinm r9,r10,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// addi r24,r31,128
	ctx.r24.s64 = ctx.r31.s64 + 128;
	// or r8,r9,r25
	ctx.r8.u64 = ctx.r9.u64 | ctx.r25.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r6,r11,-23840
	ctx.r6.s64 = ctx.r11.s64 + -23840;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a0498
	ctx.lr = 0x820B9DF0;
	sub_820A0498(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lfs f0,2152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2152);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// beq cr6,0x820b9e68
	if (ctx.cr6.eq) goto loc_820B9E68;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// blt cr6,0x820b9e38
	if (ctx.cr6.lt) goto loc_820B9E38;
	// addi r5,r28,-5
	ctx.r5.s64 = ctx.r28.s64 + -5;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bne cr6,0x820b9e2c
	if (!ctx.cr6.eq) goto loc_820B9E2C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-23860
	ctx.r4.s64 = ctx.r11.s64 + -23860;
	// bl 0x820e7fe8
	ctx.lr = 0x820B9E28;
	sub_820E7FE8(ctx, base);
	// b 0x820b9e48
	goto loc_820B9E48;
loc_820B9E2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-23880
	ctx.r4.s64 = ctx.r11.s64 + -23880;
	// b 0x820b9e44
	goto loc_820B9E44;
loc_820B9E38:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r28,1
	ctx.r5.s64 = ctx.r28.s64 + 1;
	// addi r4,r11,-23900
	ctx.r4.s64 = ctx.r11.s64 + -23900;
loc_820B9E44:
	// bl 0x820e8b98
	ctx.lr = 0x820B9E48;
	sub_820E8B98(ctx, base);
loc_820B9E48:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820b94f0
	ctx.lr = 0x820B9E68;
	sub_820B94F0(ctx, base);
loc_820B9E68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,2464(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,-23904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23904);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// beq cr6,0x820b9e94
	if (ctx.cr6.eq) goto loc_820B9E94;
	// lfs f0,2456(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820b9ea4
	goto loc_820B9EA4;
loc_820B9E94:
	// lfs f0,2460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_820B9EA4:
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// or r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 | ctx.r25.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r6,r11,-23912
	ctx.r6.s64 = ctx.r11.s64 + -23912;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a00e8
	ctx.lr = 0x820B9ECC;
	sub_820A00E8(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f27,-23916(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23916);
	ctx.f27.f64 = double(temp.f32);
	// fadds f31,f31,f27
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// bl 0x820928d0
	ctx.lr = 0x820B9EDC;
	sub_820928D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_820B9EE4:
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// beq cr6,0x820b9f84
	if (ctx.cr6.eq) goto loc_820B9F84;
	// cmpwi cr6,r28,10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 10, ctx.xer);
	// beq cr6,0x820b9f84
	if (ctx.cr6.eq) goto loc_820B9F84;
	// cmpwi cr6,r28,11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 11, ctx.xer);
	// beq cr6,0x820b9f38
	if (ctx.cr6.eq) goto loc_820B9F38;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820b9640
	ctx.lr = 0x820B9F34;
	sub_820B9640(ctx, base);
	// b 0x820b9fac
	goto loc_820B9FAC;
loc_820B9F38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x820b9fb0
	if (ctx.cr6.eq) goto loc_820B9FB0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820b9640
	ctx.lr = 0x820B9F80;
	sub_820B9640(ctx, base);
	// b 0x820b9fac
	goto loc_820B9FAC;
loc_820B9F84:
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820b9640
	ctx.lr = 0x820B9FAC;
	sub_820B9640(ctx, base);
loc_820B9FAC:
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
loc_820B9FB0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x820b9ee4
	if (!ctx.cr6.gt) goto loc_820B9EE4;
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820b9fe0
	if (ctx.cr6.eq) goto loc_820B9FE0;
	// lfs f0,2456(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820b9ff0
	goto loc_820B9FF0;
loc_820B9FE0:
	// lfs f0,2460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_820B9FF0:
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// or r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 | ctx.r25.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r6,r11,-23928
	ctx.r6.s64 = ctx.r11.s64 + -23928;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a0498
	ctx.lr = 0x820BA018;
	sub_820A0498(ctx, base);
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,19
	ctx.r5.s64 = 19;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x820b9640
	ctx.lr = 0x820BA044;
	sub_820B9640(ctx, base);
	// fadds f0,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f28.f64));
	// lwz r10,2464(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// fadds f31,f0,f28
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f28.f64));
	// beq cr6,0x820ba06c
	if (ctx.cr6.eq) goto loc_820BA06C;
	// lfs f0,2456(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820ba07c
	goto loc_820BA07C;
loc_820BA06C:
	// lfs f0,2460(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_820BA07C:
	// rlwinm r10,r11,24,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// or r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 | ctx.r25.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r6,r11,-23936
	ctx.r6.s64 = ctx.r11.s64 + -23936;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x820a00e8
	ctx.lr = 0x820BA0A4;
	sub_820A00E8(ctx, base);
	// fadds f31,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 + ctx.f27.f64));
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// li r5,36
	ctx.r5.s64 = 36;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x820b9640
	ctx.lr = 0x820BA0D0;
	sub_820B9640(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-23940(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -23940);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lfs f3,-23944(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -23944);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f4,f0,f26
	ctx.f4.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// bl 0x820b9970
	ctx.lr = 0x820BA0FC;
	sub_820B9970(ctx, base);
loc_820BA0FC:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x8215ebe8
	ctx.lr = 0x820BA108;
	__restfpr_25(ctx, base);
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820CC2F0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,725
	ctx.r3.s64 = 725;
	// stb r11,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r11.u8);
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// stb r11,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r11.u8);
	// bl 0x82092468
	ctx.lr = 0x820CC320;
	sub_82092468(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a0700
	ctx.lr = 0x820CC32C;
	sub_820A0700(ctx, base);
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x820ca840
	ctx.lr = 0x820CC334;
	sub_820CA840(ctx, base);
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

DEFINE_REX_FUNC(sub_820CE5C8) {
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
	// bl 0x8209f5a0
	ctx.lr = 0x820CE5E0;
	sub_8209F5A0(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8209f640
	ctx.lr = 0x820CE5E8;
	sub_8209F640(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,2363(r31)
	REX_STORE_U8(ctx.r31.u32 + 2363, ctx.r11.u8);
	// stb r11,2362(r31)
	REX_STORE_U8(ctx.r31.u32 + 2362, ctx.r11.u8);
	// stb r11,2361(r31)
	REX_STORE_U8(ctx.r31.u32 + 2361, ctx.r11.u8);
	// stb r11,2360(r31)
	REX_STORE_U8(ctx.r31.u32 + 2360, ctx.r11.u8);
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

DEFINE_REX_FUNC(sub_820CEC78) {
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
	// bl 0x82091548
	ctx.lr = 0x820CEC90;
	sub_82091548(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820cecb4
	if (!ctx.cr6.eq) goto loc_820CECB4;
	// bl 0x82091528
	ctx.lr = 0x820CEC9C;
	sub_82091528(ctx, base);
	// cmpwi cr6,r3,180
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 180, ctx.xer);
	// bgt cr6,0x820cecb4
	if (ctx.cr6.gt) goto loc_820CECB4;
	// beq cr6,0x820cecb4
	if (ctx.cr6.eq) goto loc_820CECB4;
	// cmpwi cr6,r3,-180
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -180, ctx.xer);
	// beq cr6,0x820cecb4
	if (ctx.cr6.eq) goto loc_820CECB4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
loc_820CECB4:
	// addi r31,r31,2360
	ctx.r31.s64 = ctx.r31.s64 + 2360;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ca7a8
	ctx.lr = 0x820CECC0;
	sub_820CA7A8(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x820cecd4
	if (ctx.cr6.eq) goto loc_820CECD4;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820caa28
	ctx.lr = 0x820CECD4;
	sub_820CAA28(ctx, base);
loc_820CECD4:
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

DEFINE_REX_FUNC(sub_820CFC40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820CFC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,7736
	ctx.r31.s64 = ctx.r3.s64 + 7736;
	// bl 0x820919f0
	ctx.lr = 0x820CFC64;
	sub_820919F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82091a00
	ctx.lr = 0x820CFC6C;
	sub_82091A00(ctx, base);
	// lbz r11,7736(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 7736);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x820cffb8
	if (ctx.cr6.gt) goto loc_820CFFB8;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-876
	ctx.r12.s64 = ctx.r12.s64 + -876;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820CFCC0;
	case 1:
		goto loc_820CFFB8;
	case 2:
		goto loc_820CFD00;
	case 3:
		goto loc_820CFD80;
	case 4:
		goto loc_820CFE20;
	case 5:
		goto loc_820CFEB8;
	case 6:
		goto loc_820CFEF4;
	case 7:
		goto loc_820CFF00;
	case 8:
		goto loc_820CFFB8;
	case 9:
		goto loc_820CFF4C;
	case 10:
		goto loc_820CFFA8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820CFCC0:
	// bl 0x82091d40
	ctx.lr = 0x820CFCC4;
	sub_82091D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// beq cr6,0x820cfcec
	if (ctx.cr6.eq) goto loc_820CFCEC;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFCEC:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFD00:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cfd58
	if (ctx.cr6.lt) goto loc_820CFD58;
	// beq cr6,0x820cfd28
	if (ctx.cr6.eq) goto loc_820CFD28;
loc_820CFD10:
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFD28:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c80
	ctx.lr = 0x820CFD34;
	sub_82091C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820cfff0
	if (ctx.cr6.eq) goto loc_820CFFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cfd50
	if (ctx.cr6.eq) goto loc_820CFD50;
	// bl 0x82091e10
	ctx.lr = 0x820CFD4C;
	sub_82091E10(ctx, base);
	// b 0x820cffdc
	goto loc_820CFFDC;
loc_820CFD50:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x820cffe0
	goto loc_820CFFE0;
loc_820CFD58:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c70
	ctx.lr = 0x820CFD60;
	sub_82091C70(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFD80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12616
	ctx.r4.s64 = ctx.r11.s64 + -12616;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x8209f978
	ctx.lr = 0x820CFD94;
	sub_8209F978(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cfdf8
	if (ctx.cr6.lt) goto loc_820CFDF8;
	// bne cr6,0x820cfd10
	if (!ctx.cr6.eq) goto loc_820CFD10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091ca8
	ctx.lr = 0x820CFDB0;
	sub_82091CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820cfff0
	if (ctx.cr6.eq) goto loc_820CFFF0;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// beq cr6,0x820cfde4
	if (ctx.cr6.eq) goto loc_820CFDE4;
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFDE4:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFDF8:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82091c98
	ctx.lr = 0x820CFE00;
	sub_82091C98(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFE20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-12616
	ctx.r4.s64 = ctx.r11.s64 + -12616;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x8209f978
	ctx.lr = 0x820CFE34;
	sub_8209F978(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820cfe84
	if (ctx.cr6.lt) goto loc_820CFE84;
	// bne cr6,0x820cfd10
	if (!ctx.cr6.eq) goto loc_820CFD10;
	// bl 0x82091da0
	ctx.lr = 0x820CFE48;
	sub_82091DA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// bne cr6,0x820cfe70
	if (!ctx.cr6.eq) goto loc_820CFE70;
	// li r11,11
	ctx.r11.s64 = 11;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFE70:
	// li r11,7
	ctx.r11.s64 = 7;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFE84:
	// bl 0x820e8b88
	ctx.lr = 0x820CFE88;
	sub_820E8B88(ctx, base);
	// lwz r11,2384(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2384);
	// addi r11,r11,1000
	ctx.r11.s64 = ctx.r11.s64 + 1000;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x820cfff0
	if (!ctx.cr6.gt) goto loc_820CFFF0;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFEB8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-12752
	ctx.r4.s64 = ctx.r11.s64 + -12752;
loc_820CFEC0:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820CFED0;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820cfee8
	if (ctx.cr6.eq) goto loc_820CFEE8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820cfff0
	if (!ctx.cr6.eq) goto loc_820CFFF0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820cffe0
	goto loc_820CFFE0;
loc_820CFEE8:
	// bl 0x82091e10
	ctx.lr = 0x820CFEEC;
	sub_82091E10(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x820cffe0
	goto loc_820CFFE0;
loc_820CFEF4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-12912
	ctx.r4.s64 = ctx.r11.s64 + -12912;
	// b 0x820cfec0
	goto loc_820CFEC0;
loc_820CFF00:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12952
	ctx.r4.s64 = ctx.r11.s64 + -12952;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r3,r29,108
	ctx.r3.s64 = ctx.r29.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820CFF18;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820cfff0
	if (!ctx.cr6.eq) goto loc_820CFFF0;
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFF4C:
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820cff78
	if (ctx.cr6.eq) goto loc_820CFF78;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820cffdc
	if (ctx.cr6.eq) goto loc_820CFFDC;
	// addi r3,r29,3256
	ctx.r3.s64 = ctx.r29.s64 + 3256;
	// bl 0x820bdb90
	ctx.lr = 0x820CFF68;
	sub_820BDB90(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
loc_820CFF78:
	// addi r3,r29,3256
	ctx.r3.s64 = ctx.r29.s64 + 3256;
	// bl 0x820bdba8
	ctx.lr = 0x820CFF80;
	sub_820BDBA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820cfff0
	if (!ctx.cr6.eq) goto loc_820CFFF0;
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r11,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFFA8:
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820CFFB8:
	// bl 0x820e8b88
	ctx.lr = 0x820CFFBC;
	sub_820E8B88(ctx, base);
	// stw r3,2384(r29)
	REX_STORE_U32(ctx.r29.u32 + 2384, ctx.r3.u32);
	// bl 0x82091d30
	ctx.lr = 0x820CFFC4;
	sub_82091D30(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820cffdc
	if (!ctx.cr6.eq) goto loc_820CFFDC;
	// bl 0x82091e68
	ctx.lr = 0x820CFFD0;
	sub_82091E68(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x820cffe0
	if (ctx.cr6.eq) goto loc_820CFFE0;
loc_820CFFDC:
	// li r11,11
	ctx.r11.s64 = 11;
loc_820CFFE0:
	// stb r30,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// stb r30,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r30.u8);
	// stb r30,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r30.u8);
	// stb r11,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_820CFFF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820DB1F8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32197
	ctx.r10.s64 = -2110062592;
	// li r11,40
	ctx.r11.s64 = 40;
	// addi r6,r10,-5672
	ctx.r6.s64 = ctx.r10.s64 + -5672;
	// li r10,90
	ctx.r10.s64 = 90;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,90
	ctx.r8.s64 = 90;
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// li r11,124
	ctx.r11.s64 = 124;
	// stw r10,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r10.u32);
	// li r10,124
	ctx.r10.s64 = 124;
	// stw r9,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r9.u32);
	// li r9,124
	ctx.r9.s64 = 124;
	// stw r11,44(r6)
	REX_STORE_U32(ctx.r6.u32 + 44, ctx.r11.u32);
	// li r11,158
	ctx.r11.s64 = 158;
	// stw r10,52(r6)
	REX_STORE_U32(ctx.r6.u32 + 52, ctx.r10.u32);
	// li r10,158
	ctx.r10.s64 = 158;
	// stw r9,60(r6)
	REX_STORE_U32(ctx.r6.u32 + 60, ctx.r9.u32);
	// li r9,158
	ctx.r9.s64 = 158;
	// stw r8,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r8.u32);
	// li r8,124
	ctx.r8.s64 = 124;
	// stw r7,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r7.u32);
	// li r7,158
	ctx.r7.s64 = 158;
	// stw r11,84(r6)
	REX_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// li r11,192
	ctx.r11.s64 = 192;
	// stw r10,92(r6)
	REX_STORE_U32(ctx.r6.u32 + 92, ctx.r10.u32);
	// li r10,192
	ctx.r10.s64 = 192;
	// stw r9,100(r6)
	REX_STORE_U32(ctx.r6.u32 + 100, ctx.r9.u32);
	// li r9,192
	ctx.r9.s64 = 192;
	// stw r8,68(r6)
	REX_STORE_U32(ctx.r6.u32 + 68, ctx.r8.u32);
	// li r8,158
	ctx.r8.s64 = 158;
	// stw r7,76(r6)
	REX_STORE_U32(ctx.r6.u32 + 76, ctx.r7.u32);
	// li r7,192
	ctx.r7.s64 = 192;
	// stw r11,124(r6)
	REX_STORE_U32(ctx.r6.u32 + 124, ctx.r11.u32);
	// li r11,226
	ctx.r11.s64 = 226;
	// stw r10,132(r6)
	REX_STORE_U32(ctx.r6.u32 + 132, ctx.r10.u32);
	// li r10,226
	ctx.r10.s64 = 226;
	// stw r9,140(r6)
	REX_STORE_U32(ctx.r6.u32 + 140, ctx.r9.u32);
	// li r9,260
	ctx.r9.s64 = 260;
	// stw r8,108(r6)
	REX_STORE_U32(ctx.r6.u32 + 108, ctx.r8.u32);
	// li r8,226
	ctx.r8.s64 = 226;
	// stw r7,116(r6)
	REX_STORE_U32(ctx.r6.u32 + 116, ctx.r7.u32);
	// li r7,226
	ctx.r7.s64 = 226;
	// stw r11,164(r6)
	REX_STORE_U32(ctx.r6.u32 + 164, ctx.r11.u32);
	// li r11,260
	ctx.r11.s64 = 260;
	// stw r10,172(r6)
	REX_STORE_U32(ctx.r6.u32 + 172, ctx.r10.u32);
	// li r10,294
	ctx.r10.s64 = 294;
	// stw r9,180(r6)
	REX_STORE_U32(ctx.r6.u32 + 180, ctx.r9.u32);
	// li r9,294
	ctx.r9.s64 = 294;
	// stw r8,148(r6)
	REX_STORE_U32(ctx.r6.u32 + 148, ctx.r8.u32);
	// li r8,260
	ctx.r8.s64 = 260;
	// stw r7,156(r6)
	REX_STORE_U32(ctx.r6.u32 + 156, ctx.r7.u32);
	// li r7,260
	ctx.r7.s64 = 260;
	// stw r11,204(r6)
	REX_STORE_U32(ctx.r6.u32 + 204, ctx.r11.u32);
	// li r11,328
	ctx.r11.s64 = 328;
	// stw r10,212(r6)
	REX_STORE_U32(ctx.r6.u32 + 212, ctx.r10.u32);
	// li r10,328
	ctx.r10.s64 = 328;
	// stw r9,220(r6)
	REX_STORE_U32(ctx.r6.u32 + 220, ctx.r9.u32);
	// li r9,328
	ctx.r9.s64 = 328;
	// stw r8,188(r6)
	REX_STORE_U32(ctx.r6.u32 + 188, ctx.r8.u32);
	// li r8,294
	ctx.r8.s64 = 294;
	// stw r7,196(r6)
	REX_STORE_U32(ctx.r6.u32 + 196, ctx.r7.u32);
	// li r7,294
	ctx.r7.s64 = 294;
	// stw r11,244(r6)
	REX_STORE_U32(ctx.r6.u32 + 244, ctx.r11.u32);
	// li r11,362
	ctx.r11.s64 = 362;
	// stw r10,252(r6)
	REX_STORE_U32(ctx.r6.u32 + 252, ctx.r10.u32);
	// li r10,362
	ctx.r10.s64 = 362;
	// stw r9,260(r6)
	REX_STORE_U32(ctx.r6.u32 + 260, ctx.r9.u32);
	// li r9,362
	ctx.r9.s64 = 362;
	// stw r8,228(r6)
	REX_STORE_U32(ctx.r6.u32 + 228, ctx.r8.u32);
	// li r8,362
	ctx.r8.s64 = 362;
	// stw r7,236(r6)
	REX_STORE_U32(ctx.r6.u32 + 236, ctx.r7.u32);
	// li r7,362
	ctx.r7.s64 = 362;
	// stw r11,284(r6)
	REX_STORE_U32(ctx.r6.u32 + 284, ctx.r11.u32);
	// stw r10,292(r6)
	REX_STORE_U32(ctx.r6.u32 + 292, ctx.r10.u32);
	// stw r9,300(r6)
	REX_STORE_U32(ctx.r6.u32 + 300, ctx.r9.u32);
	// stw r8,268(r6)
	REX_STORE_U32(ctx.r6.u32 + 268, ctx.r8.u32);
	// stw r7,276(r6)
	REX_STORE_U32(ctx.r6.u32 + 276, ctx.r7.u32);
	// stw r11,308(r6)
	REX_STORE_U32(ctx.r6.u32 + 308, ctx.r11.u32);
	// stw r10,316(r6)
	REX_STORE_U32(ctx.r6.u32 + 316, ctx.r10.u32);
	// stw r9,324(r6)
	REX_STORE_U32(ctx.r6.u32 + 324, ctx.r9.u32);
	// stw r10,340(r6)
	REX_STORE_U32(ctx.r6.u32 + 340, ctx.r10.u32);
	// li r10,396
	ctx.r10.s64 = 396;
	// stw r9,348(r6)
	REX_STORE_U32(ctx.r6.u32 + 348, ctx.r9.u32);
	// li r9,396
	ctx.r9.s64 = 396;
	// stw r11,332(r6)
	REX_STORE_U32(ctx.r6.u32 + 332, ctx.r11.u32);
	// li r11,396
	ctx.r11.s64 = 396;
	// stw r10,364(r6)
	REX_STORE_U32(ctx.r6.u32 + 364, ctx.r10.u32);
	// stw r9,372(r6)
	REX_STORE_U32(ctx.r6.u32 + 372, ctx.r9.u32);
	// li r9,430
	ctx.r9.s64 = 430;
	// stw r10,388(r6)
	REX_STORE_U32(ctx.r6.u32 + 388, ctx.r10.u32);
	// li r10,430
	ctx.r10.s64 = 430;
	// stw r11,356(r6)
	REX_STORE_U32(ctx.r6.u32 + 356, ctx.r11.u32);
	// stw r11,380(r6)
	REX_STORE_U32(ctx.r6.u32 + 380, ctx.r11.u32);
	// li r11,430
	ctx.r11.s64 = 430;
	// stw r9,396(r6)
	REX_STORE_U32(ctx.r6.u32 + 396, ctx.r9.u32);
	// stw r10,412(r6)
	REX_STORE_U32(ctx.r6.u32 + 412, ctx.r10.u32);
	// li r10,464
	ctx.r10.s64 = 464;
	// stw r9,420(r6)
	REX_STORE_U32(ctx.r6.u32 + 420, ctx.r9.u32);
	// li r9,498
	ctx.r9.s64 = 498;
	// stw r11,404(r6)
	REX_STORE_U32(ctx.r6.u32 + 404, ctx.r11.u32);
	// stw r11,428(r6)
	REX_STORE_U32(ctx.r6.u32 + 428, ctx.r11.u32);
	// stw r10,436(r6)
	REX_STORE_U32(ctx.r6.u32 + 436, ctx.r10.u32);
	// stw r9,444(r6)
	REX_STORE_U32(ctx.r6.u32 + 444, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E50D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820E50D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,820(r1)
	REX_STORE_U32(ctx.r1.u32 + 820, ctx.r3.u32);
	// stw r5,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r31,736(r1)
	REX_STORE_U32(ctx.r1.u32 + 736, ctx.r31.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r31,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// li r3,2049
	ctx.r3.s64 = 2049;
	// stw r31,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// bl 0x820e6110
	ctx.lr = 0x820E5114;
	sub_820E6110(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e52b0
	if (ctx.cr0.lt) goto loc_820E52B0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e6198
	ctx.lr = 0x820E513C;
	sub_820E6198(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e52b0
	if (ctx.cr0.lt) goto loc_820E52B0;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82374cb4
	ctx.lr = 0x820E5154;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e52b0
	if (ctx.cr0.lt) goto loc_820E52B0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82374ce4
	ctx.lr = 0x820E5164;
	__imp__XNetLogonGetTitleID(ctx, base);
	// stw r3,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820E516C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e516c
	if (!ctx.cr6.eq) goto loc_820E516C;
	// lwz r10,836(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 836);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// lwz r8,136(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// stw r9,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r6,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// sth r10,140(r1)
	REX_STORE_U16(ctx.r1.u32 + 140, ctx.r10.u16);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r5,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,2049
	ctx.r3.s64 = 2049;
	// stw r31,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// sth r11,132(r1)
	REX_STORE_U16(ctx.r1.u32 + 132, ctx.r11.u16);
	// bl 0x820e6270
	ctx.lr = 0x820E51D4;
	sub_820E6270(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e52b0
	if (ctx.cr0.lt) goto loc_820E52B0;
	// addi r4,r1,820
	ctx.r4.s64 = ctx.r1.s64 + 820;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E51E8;
	sub_820E48A0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E51F4;
	sub_820E48A0(ctx, base);
	// addi r4,r1,836
	ctx.r4.s64 = ctx.r1.s64 + 836;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E5200;
	sub_820E48A0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E520C;
	sub_820E48A0(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E5218;
	sub_820E48A0(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E5224;
	sub_820E48A0(ctx, base);
	// addi r4,r1,140
	ctx.r4.s64 = ctx.r1.s64 + 140;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x820e48a0
	ctx.lr = 0x820E5230;
	sub_820E48A0(ctx, base);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
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
	ctx.lr = 0x820E5254;
	sub_820E6368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e52b0
	if (ctx.cr0.lt) goto loc_820E52B0;
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
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
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// rlwimi r4,r8,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82374cc4
	ctx.lr = 0x820E52A8;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820e52dc
	if (!ctx.cr0.lt) goto loc_820E52DC;
loc_820E52B0:
	// li r31,1627
	ctx.r31.s64 = 1627;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e52c4
	if (ctx.cr6.eq) goto loc_820E52C4;
	// stw r3,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// b 0x820e52c8
	goto loc_820E52C8;
loc_820E52C4:
	// bl 0x820e9900
	ctx.lr = 0x820E52C8;
	sub_820E9900(ctx, base);
loc_820E52C8:
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e5300
	if (ctx.cr6.eq) goto loc_820E5300;
	// bl 0x82374c94
	ctx.lr = 0x820E52D8;
	__imp__XamFree(ctx, base);
	// b 0x820e5300
	goto loc_820E5300;
loc_820E52DC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820e52ec
	if (ctx.cr6.eq) goto loc_820E52EC;
	// li r31,997
	ctx.r31.s64 = 997;
	// b 0x820e5300
	goto loc_820E5300;
loc_820E52EC:
	// bl 0x820e9950
	ctx.lr = 0x820E52F0;
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
loc_820E5300:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E79C8) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e75b0
	ctx.lr = 0x820E79E4;
	sub_820E75B0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x820e79fc
	if (ctx.cr0.lt) goto loc_820E79FC;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,0(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// bl 0x8215e640
	ctx.lr = 0x820E79FC;
	sub_8215E640(ctx, base);
loc_820E79FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

DEFINE_REX_FUNC(sub_820E8238) {
	REX_FUNC_PROLOGUE();
	// b 0x82374e04
	__imp__XamUserGetName(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E82D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820E82E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mulli r10,r4,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// beq cr6,0x820e8324
	if (ctx.cr6.eq) goto loc_820E8324;
	// addi r7,r7,-132
	ctx.r7.s64 = ctx.r7.s64 + -132;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_820E8310:
	// lwzu r6,136(r7)
	ea = 136 + ctx.r7.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// mullw r6,r6,r4
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// mulli r6,r6,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(28));
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x820e8310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E8310;
loc_820E8324:
	// lwz r31,0(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x820e833c
	if (!ctx.cr6.gt) goto loc_820E833C;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// li r3,122
	ctx.r3.s64 = 122;
	// b 0x820e83a8
	goto loc_820E83A8;
loc_820E833C:
	// stw r4,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// lis r4,11
	ctx.r4.s64 = 720896;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r7,28
	ctx.r7.s64 = 28;
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// ori r4,r4,33
	ctx.r4.u64 = ctx.r4.u64 | 33;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r3,251
	ctx.r3.s64 = 251;
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// bl 0x82374cc4
	ctx.lr = 0x820E8374;
	__imp__XMsgStartIORequest(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820e8384
	if (!ctx.cr0.lt) goto loc_820E8384;
	// li r3,1627
	ctx.r3.s64 = 1627;
	// b 0x820e83a8
	goto loc_820E83A8;
loc_820E8384:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x820e83a4
	if (!ctx.cr6.eq) goto loc_820E83A4;
	// bl 0x820e9950
	ctx.lr = 0x820E8390;
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
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x820e83a8
	goto loc_820E83A8;
loc_820E83A4:
	// li r3,997
	ctx.r3.s64 = 997;
loc_820E83A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820EB218) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1352(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1352);
	// bl 0x82375164
	ctx.lr = 0x820EB238;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820eb278
	if (ctx.cr0.lt) goto loc_820EB278;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82375174
	ctx.lr = 0x820EB248;
	__imp__KeQueryBasePriorityThread(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// bne cr6,0x820eb25c
	if (!ctx.cr6.eq) goto loc_820EB25C;
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x820eb268
	goto loc_820EB268;
loc_820EB25C:
	// cmpwi cr6,r31,-16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -16, ctx.xer);
	// bne cr6,0x820eb268
	if (!ctx.cr6.eq) goto loc_820EB268;
	// li r31,-15
	ctx.r31.s64 = -15;
loc_820EB268:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82374f64
	ctx.lr = 0x820EB270;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x820eb284
	goto loc_820EB284;
loc_820EB278:
	// bl 0x820eb190
	ctx.lr = 0x820EB27C;
	sub_820EB190(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_820EB284:
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

DEFINE_REX_FUNC(sub_820EBB98) {
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
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r10,76
	ctx.r11.s64 = ctx.r10.s64 + 76;
	// lwz r9,76(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820ebd4c
	if (!ctx.cr6.eq) goto loc_820EBD4C;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x820ebc40
	if (ctx.cr6.eq) goto loc_820EBC40;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x820ebc40
	if (ctx.cr6.eq) goto loc_820EBC40;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x823751e4
	ctx.lr = 0x820EBC18;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820ebc70
	if (ctx.cr0.lt) goto loc_820EBC70;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x820ebd04
	goto loc_820EBD04;
loc_820EBC40:
	// lis r11,16
	ctx.r11.s64 = 1048576;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,8192
	ctx.r5.u64 = ctx.r5.u64 | 8192;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x823751e4
	ctx.lr = 0x820EBC68;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820ebc78
	if (!ctx.cr0.lt) goto loc_820EBC78;
loc_820EBC70:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820ebd58
	goto loc_820EBD58;
loc_820EBC78:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r5,r5,4096
	ctx.r5.u64 = ctx.r5.u64 | 4096;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,1424(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 1424);
	// bl 0x823751e4
	ctx.lr = 0x820EBCA0;
	__imp__NtAllocateVirtualMemory(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820ebcc8
	if (!ctx.cr0.lt) goto loc_820EBCC8;
	// lis r5,0
	ctx.r5.s64 = 0;
	// lwz r6,1424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 1424);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375214
	ctx.lr = 0x820EBCC4;
	__imp__NtFreeVirtualMemory(ctx, base);
	// b 0x820ebc70
	goto loc_820EBC70;
loc_820EBCC8:
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
loc_820EBD04:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r8,76
	ctx.r9.s64 = ctx.r8.s64 + 76;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820ebd40
	if (!ctx.cr6.lt) goto loc_820EBD40;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820EBD30:
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x820ebd30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820EBD30;
loc_820EBD40:
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_820EBD4C:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820EBD58:
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

DEFINE_REX_FUNC(sub_820F16A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lfs f11,12(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lfs f10,16(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,16(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f9,20(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f8,24(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,24(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f7,28(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f6,32(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f5,36(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,36(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f4,40(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,40(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f3,44(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 44);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,44(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// lfs f2,48(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 48);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,48(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lfs f1,52(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,52(r3)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfs f0,56(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// lfs f13,60(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 60);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,60(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820F2AF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f2b20
	if (!ctx.cr6.eq) goto loc_820F2B20;
loc_820F2B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820F2B20:
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r3,r3,-17988
	ctx.r3.s64 = ctx.r3.s64 + -17988;
	// bl 0x82100e88
	ctx.lr = 0x820F2B2C;
	sub_82100E88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2b14
	if (ctx.cr6.eq) goto loc_820F2B14;
	// bl 0x82100388
	ctx.lr = 0x820F2B3C;
	sub_82100388(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F2B54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r8,r28
	ctx.r8.s64 = ctx.r28.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r5,40(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f3,2104(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bctrl 
	ctx.lr = 0x820F2B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F2BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F3D48) {
	REX_FUNC_PROLOGUE();
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,39664
	ctx.r11.u64 = ctx.r11.u64 | 39664;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F3F58) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f3f78
	if (!ctx.cr6.eq) goto loc_820F3F78;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_820F3F78:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820f3fa0
	if (!ctx.cr6.eq) goto loc_820F3FA0;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_820F3FA0:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820f3fc0
	if (!ctx.cr6.eq) goto loc_820F3FC0;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_820F3FC0:
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4AE8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f2,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f2.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// addi r3,r3,-25812
	ctx.r3.s64 = ctx.r3.s64 + -25812;
	// bl 0x820f40e0
	ctx.lr = 0x820F4B20;
	sub_820F40E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F5CE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820F5CF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32189
	ctx.r27.s64 = -2109538304;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,-30152(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + -30152);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f5dc0
	if (ctx.cr6.eq) goto loc_820F5DC0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f5d88
	if (ctx.cr6.eq) goto loc_820F5D88;
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f5d54
	if (ctx.cr6.eq) goto loc_820F5D54;
loc_820F5D2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F5D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820f5d2c
	if (!ctx.cr6.eq) goto loc_820F5D2C;
	// lwz r29,-30152(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + -30152);
loc_820F5D54:
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820f5d88
	if (ctx.cr6.eq) goto loc_820F5D88;
	// subf r11,r4,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r4.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8215f200
	ctx.lr = 0x820F5D7C;
	sub_8215F200(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r10.u32);
	// lwz r29,-30152(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + -30152);
loc_820F5D88:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820f5db8
	if (ctx.cr6.eq) goto loc_820F5DB8;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f5da4
	if (ctx.cr6.eq) goto loc_820F5DA4;
	// bl 0x8215e470
	ctx.lr = 0x820F5DA4;
	sub_8215E470(ctx, base);
loc_820F5DA4:
	// stw r31,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r31,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// stw r31,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r31.u32);
	// bl 0x8215e470
	ctx.lr = 0x820F5DB8;
	sub_8215E470(ctx, base);
loc_820F5DB8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,-30152(r27)
	REX_STORE_U32(ctx.r27.u32 + -30152, ctx.r31.u32);
loc_820F5DC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F7DB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820F7DC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32189
	ctx.r31.s64 = -2109538304;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,-30156(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -30156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820f7e00
	if (!ctx.cr6.eq) goto loc_820F7E00;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x820ef558
	ctx.lr = 0x820F7DE8;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f7df8
	if (ctx.cr6.eq) goto loc_820F7DF8;
	// bl 0x820f6bf8
	ctx.lr = 0x820F7DF4;
	sub_820F6BF8(ctx, base);
	// b 0x820f7dfc
	goto loc_820F7DFC;
loc_820F7DF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820F7DFC:
	// stw r3,-30156(r31)
	REX_STORE_U32(ctx.r31.u32 + -30156, ctx.r3.u32);
loc_820F7E00:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x820fac40
	ctx.lr = 0x820F7E10;
	sub_820FAC40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F84A8) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x820f84b8
	if (ctx.cr6.lt) goto loc_820F84B8;
loc_820F84B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820F84B8:
	// mulli r11,r4,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,6620
	ctx.r11.s64 = ctx.r11.s64 + 6620;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bge cr6,0x820f84b0
	if (!ctx.cr6.lt) goto loc_820F84B0;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F94D0) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f94fc
	if (!ctx.cr6.eq) goto loc_820F94FC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820F94FC:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// lwz r8,512(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 512);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// rlwinm r6,r10,16,16,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFC;
	// lwz r5,528(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 528);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,20
	ctx.r7.s64 = 20;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwzx r11,r6,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r9,r11,r4
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// divw r7,r8,r7
	ctx.r7.u64 = uint32_t((ctx.r7.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r8.s32 / ctx.r7.s32 : 0);
	// clrlwi r11,r7,18
	ctx.r11.u64 = ctx.r7.u32 & 0x3FFF;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bl 0x820f8638
	ctx.lr = 0x820F9548;
	sub_820F8638(ctx, base);
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

DEFINE_REX_FUNC(sub_820F9DD0) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820F9E38) {
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
	// addi r9,r11,5680
	ctx.r9.s64 = ctx.r11.s64 + 5680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820f9e6c
	if (ctx.cr6.eq) goto loc_820F9E6C;
	// bl 0x8215e470
	ctx.lr = 0x820F9E68;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F9E6C:
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

DEFINE_REX_FUNC(sub_820FAC40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,260
	ctx.r10.s64 = 260;
	// addi r11,r1,103
	ctx.r11.s64 = ctx.r1.s64 + 103;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820FAC5C:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x820fac5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FAC5C;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// bl 0x820fa918
	ctx.lr = 0x820FAC80;
	sub_820FA918(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FD440) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FD46C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820FD484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820fd4b4
	if (ctx.cr6.eq) goto loc_820FD4B4;
loc_820FD48C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fb890
	ctx.lr = 0x820FD498;
	sub_820FB890(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FD4AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820fd48c
	if (!ctx.cr6.eq) goto loc_820FD48C;
loc_820FD4B4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FD4C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_820FEA40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820FEA48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r9,r10,65534
	ctx.r9.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x820fea80
	if (ctx.cr6.lt) goto loc_820FEA80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8215e470
	ctx.lr = 0x820FEA74;
	sub_8215E470(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,5792
	ctx.r3.s64 = ctx.r11.s64 + 5792;
	// bl 0x8216a6f8
	ctx.lr = 0x820FEA80;
	sub_8216A6F8(ctx, base);
loc_820FEA80:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820feab0
	if (!ctx.cr6.eq) goto loc_820FEAB0;
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r27.u32);
	// b 0x820feaf0
	goto loc_820FEAF0;
loc_820FEAB0:
	// clrlwi r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fead8
	if (ctx.cr6.eq) goto loc_820FEAD8;
	// stw r27,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820feaf0
	if (!ctx.cr6.eq) goto loc_820FEAF0;
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x820feaf0
	goto loc_820FEAF0;
loc_820FEAD8:
	// stw r27,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r27.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820feaf0
	if (!ctx.cr6.eq) goto loc_820FEAF0;
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
loc_820FEAF0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fec14
	if (!ctx.cr6.eq) goto loc_820FEC14;
	// li r28,0
	ctx.r28.s64 = 0;
loc_820FEB0C:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820feb94
	if (!ctx.cr6.eq) goto loc_820FEB94;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820feb54
	if (!ctx.cr6.eq) goto loc_820FEB54;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x820fec04
	goto loc_820FEC04;
loc_820FEB54:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820feb6c
	if (!ctx.cr6.eq) goto loc_820FEB6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820f3f58
	ctx.lr = 0x820FEB6C;
	sub_820F3F58(ctx, base);
loc_820FEB6C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x820f3fd0
	ctx.lr = 0x820FEB90;
	sub_820F3FD0(ctx, base);
	// b 0x820fec04
	goto loc_820FEC04;
loc_820FEB94:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820febc8
	if (!ctx.cr6.eq) goto loc_820FEBC8;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stb r28,32(r8)
	REX_STORE_U8(ctx.r8.u32 + 32, ctx.r28.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// b 0x820fec04
	goto loc_820FEC04;
loc_820FEBC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820febe0
	if (!ctx.cr6.eq) goto loc_820FEBE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x820f3fd0
	ctx.lr = 0x820FEBE0;
	sub_820F3FD0(ctx, base);
loc_820FEBE0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stb r28,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r28.u8);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// bl 0x820f3f58
	ctx.lr = 0x820FEC04;
	sub_820F3F58(ctx, base);
loc_820FEC04:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820feb0c
	if (ctx.cr6.eq) goto loc_820FEB0C;
loc_820FEC14:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r27,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82105D88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82105D90;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82118b70
	ctx.lr = 0x82105DB4;
	sub_82118B70(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82105df8
	if (!ctx.cr6.lt) goto loc_82105DF8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,6624
	ctx.r5.s64 = ctx.r11.s64 + 6624;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215f498
	ctx.lr = 0x82105DD4;
	sub_8215F498(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,116(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82105DEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82105DF8:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82105E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82105e58
	if (!ctx.cr6.lt) goto loc_82105E58;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r10,6568
	ctx.r4.s64 = ctx.r10.s64 + 6568;
	// lwz r9,116(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82105E4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82105E58:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82105E80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82107D08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,168(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,172(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 172, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82108B38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82108D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82108D60;
	__savegprlr_22(ctx, base);
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f29.u64);
	// stfd f30,-104(r1)
	REX_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82108d9c
	if (!ctx.cr6.eq) goto loc_82108D9C;
loc_82108D84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_82108D9C:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82108d84
	if (ctx.cr6.eq) goto loc_82108D84;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108DBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82108d84
	if (ctx.cr6.eq) goto loc_82108D84;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,92(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82108DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r22)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r7,48(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82108DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82108e18
	if (ctx.cr6.eq) goto loc_82108E18;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108E18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82108E18:
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108E2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r7,r3,r10
	ctx.r7.u64 = ctx.r3.u64 + ctx.r10.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// rlwinm r4,r8,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,2049
	ctx.r9.s64 = 2049;
	// stw r4,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// stw r3,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r5,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108E88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821090e0
	if (ctx.cr6.eq) goto loc_821090E0;
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821090e0
	if (ctx.cr6.eq) goto loc_821090E0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-256
	ctx.r9.s64 = -16777216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r23,-1
	ctx.r23.s64 = -65536;
	// lfd f30,6848(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 6848);
	// ori r24,r9,255
	ctx.r24.u64 = ctx.r9.u64 | 255;
	// lfd f29,1792(r10)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
loc_82108EC4:
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82108ECC:
	// lwz r4,8(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82108EEC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f12,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// add r11,r10,r26
	ctx.r11.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stfsx f0,r10,r26
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r26.u32, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// beq cr6,0x82108f24
	if (ctx.cr6.eq) goto loc_82108F24;
	// stw r23,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// b 0x82108f28
	goto loc_82108F28;
loc_82108F24:
	// stw r24,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r24.u32);
loc_82108F28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fadd f31,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 + ctx.f30.f64;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// blt cr6,0x82108ecc
	if (ctx.cr6.lt) goto loc_82108ECC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,10
	ctx.r28.s64 = ctx.r28.s64 + 10;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82108ec4
	if (ctx.cr6.lt) goto loc_82108EC4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821090e0
	if (ctx.cr6.eq) goto loc_821090E0;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82108F68:
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82108f78
	if (ctx.cr6.lt) goto loc_82108F78;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82108F78:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82108fa0
	if (ctx.cr6.lt) goto loc_82108FA0;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82108FA0:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// blt cr6,0x82108fc4
	if (ctx.cr6.lt) goto loc_82108FC4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82108FC4:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82108fe8
	if (ctx.cr6.lt) goto loc_82108FE8;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_82108FE8:
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x8210900c
	if (ctx.cr6.lt) goto loc_8210900C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_8210900C:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82109030
	if (ctx.cr6.lt) goto loc_82109030;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_82109030:
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82109054
	if (ctx.cr6.lt) goto loc_82109054;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_82109054:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r8,r10,5
	ctx.r8.s64 = ctx.r10.s64 + 5;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x82109078
	if (ctx.cr6.lt) goto loc_82109078;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
loc_82109078:
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// add r7,r9,r31
	ctx.r7.u64 = ctx.r9.u64 + ctx.r31.u64;
	// addi r9,r10,6
	ctx.r9.s64 = ctx.r10.s64 + 6;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r6,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r6.u32);
	// blt cr6,0x8210909c
	if (ctx.cr6.lt) goto loc_8210909C;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_8210909C:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r10,7
	ctx.r7.s64 = ctx.r10.s64 + 7;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r6,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r6.u32);
	// blt cr6,0x821090c4
	if (ctx.cr6.lt) goto loc_821090C4;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
loc_821090C4:
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r7,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// bdnz 0x82108f68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82108F68;
loc_821090E0:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821090F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82114238) {
	REX_FUNC_PROLOGUE();
	// lwz r3,312(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821142F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821142F8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8215eba8
	ctx.lr = 0x82114300;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 | ctx.r7.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821144b8
	if (ctx.cr6.eq) goto loc_821144B8;
loc_82114340:
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x821144cc
	if (ctx.cr6.eq) goto loc_821144CC;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821143a8
	if (ctx.cr6.eq) goto loc_821143A8;
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
loc_8211437C:
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8211437c
	if (ctx.cr6.lt) goto loc_8211437C;
loc_821143A8:
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82114404
	if (ctx.cr6.eq) goto loc_82114404;
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
loc_821143D8:
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x821143d8
	if (ctx.cr6.lt) goto loc_821143D8;
loc_82114404:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lbz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r6,r11,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114488
	if (ctx.cr6.eq) goto loc_82114488;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// lbz r7,20(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r5,r10,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r10,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 | ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82114488
	if (ctx.cr6.eq) goto loc_82114488;
	// lbz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
loc_8211445C:
	// lwz r7,20(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// rlwinm r5,r7,24,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF00;
	// rlwimi r6,r7,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r6,8,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// or r7,r3,r5
	ctx.r7.u64 = ctx.r3.u64 | ctx.r5.u64;
	// or r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 | ctx.r10.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8211445c
	if (ctx.cr6.lt) goto loc_8211445C;
loc_82114488:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// rlwinm r6,r11,24,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r5,r7,8,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r10
	ctx.r11.u64 = ctx.r3.u64 | ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82114340
	if (ctx.cr6.lt) goto loc_82114340;
loc_821144B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8215ebf4
	ctx.lr = 0x821144C8;
	__restfpr_28(ctx, base);
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_821144CC:
	// li r3,324
	ctx.r3.s64 = 324;
	// bl 0x820ef558
	ctx.lr = 0x821144D4;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82114500
	if (ctx.cr6.eq) goto loc_82114500;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r26,292(r3)
	REX_STORE_U32(ctx.r3.u32 + 292, ctx.r26.u32);
	// stw r26,296(r3)
	REX_STORE_U32(ctx.r3.u32 + 296, ctx.r26.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r10,r11,7944
	ctx.r10.s64 = ctx.r11.s64 + 7944;
	// stw r26,304(r3)
	REX_STORE_U32(ctx.r3.u32 + 304, ctx.r26.u32);
	// stw r26,280(r3)
	REX_STORE_U32(ctx.r3.u32 + 280, ctx.r26.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82114504
	goto loc_82114504;
loc_82114500:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_82114504:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lbz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 4);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,264(r28)
	REX_STORE_U32(ctx.r28.u32 + 264, ctx.r5.u32);
	// lbz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwimi r11,r3,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r3,24,16,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF00;
	// rlwinm r9,r11,8,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFF0000;
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 | ctx.r4.u64;
	// stw r7,272(r28)
	REX_STORE_U32(ctx.r28.u32 + 272, ctx.r7.u32);
	// lbz r6,20(r29)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r29.u32 + 20);
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwimi r4,r5,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r3,r5,24,16,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// rlwinm r11,r4,8,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFF0000;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// or r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stw r9,276(r28)
	REX_STORE_U32(ctx.r28.u32 + 276, ctx.r9.u32);
	// lwz r8,0(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r7,r8,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211458c
	if (ctx.cr6.eq) goto loc_8211458C;
	// li r10,19264
	ctx.r10.s64 = 19264;
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x82114594
	goto loc_82114594;
loc_8211458C:
	// li r10,18945
	ctx.r10.s64 = 18945;
	// li r11,36
	ctx.r11.s64 = 36;
loc_82114594:
	// stw r10,284(r28)
	REX_STORE_U32(ctx.r28.u32 + 284, ctx.r10.u32);
	// lwz r10,264(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// stw r11,288(r28)
	REX_STORE_U32(ctx.r28.u32 + 288, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82114968
	if (ctx.cr6.eq) goto loc_82114968;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8217b538
	ctx.lr = 0x821145B8;
	sub_8217B538(ctx, base);
	// stw r3,308(r28)
	REX_STORE_U32(ctx.r28.u32 + 308, ctx.r3.u32);
	// lwz r11,272(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 272);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8217b610
	ctx.lr = 0x821145DC;
	sub_8217B610(ctx, base);
	// stw r3,312(r28)
	REX_STORE_U32(ctx.r28.u32 + 312, ctx.r3.u32);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lwz r3,308(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8217c500
	ctx.lr = 0x821145F4;
	sub_8217C500(ctx, base);
	// lwz r10,264(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x821147a4
	if (!ctx.cr6.gt) goto loc_821147A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,2396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2396);
	ctx.f31.f64 = double(temp.f32);
loc_82114610:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1440
	ctx.lr = 0x82114618;
	sub_820F1440(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820f1440
	ctx.lr = 0x82114624;
	sub_820F1440(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x820f1440
	ctx.lr = 0x82114630;
	sub_820F1440(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821146e0
	if (ctx.cr6.eq) goto loc_821146E0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x820f1440
	ctx.lr = 0x82114650;
	sub_820F1440(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x820f1440
	ctx.lr = 0x8211465C;
	sub_820F1440(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// bl 0x820f1440
	ctx.lr = 0x82114668;
	sub_820F1440(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x820f1440
	ctx.lr = 0x82114674;
	sub_820F1440(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,72(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lbz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 48);
	// lhz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 56);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// rlwinm r4,r11,24,8,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// rlwinm r5,r6,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r3,r11,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	// or r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 | ctx.r9.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r5,r10,0,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// rlwinm r3,r6,8,0,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwimi r11,r4,0,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// or r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 | ctx.r5.u64;
	// rlwinm r5,r11,0,0,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// rlwinm r9,r10,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r4,r7,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFF00;
	// or r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r11,r6,24,16,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFF00;
	// or r10,r3,r8
	ctx.r10.u64 = ctx.r3.u64 | ctx.r8.u64;
	// or r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 | ctx.r4.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwu r8,16(r30)
	ea = 16 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_821146E0:
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x820f1440
	ctx.lr = 0x821146E8;
	sub_820F1440(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x820f1440
	ctx.lr = 0x821146F4;
	sub_820F1440(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x820f1440
	ctx.lr = 0x82114700;
	sub_820F1440(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x820f1440
	ctx.lr = 0x8211470C;
	sub_820F1440(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// fmuls f30,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x820f1440
	ctx.lr = 0x82114718;
	sub_820F1440(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x820f1440
	ctx.lr = 0x82114724;
	sub_820F1440(ctx, base);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// fmuls f28,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bl 0x820f1440
	ctx.lr = 0x82114730;
	sub_820F1440(ctx, base);
	// fmuls f13,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// fctiwz f0,f28
	ctx.f0.s64 = std::isnan(ctx.f28.f64) ? int64_t(0x80000000U) : (ctx.f28.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f28.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f12,f29
	ctx.f12.s64 = std::isnan(ctx.f29.f64) ? int64_t(0x80000000U) : (ctx.f29.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f29.f64));
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stfd f12,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f12.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f11,f30
	ctx.f11.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// stfd f11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r9,r10,8,0,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r9.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r9,8,0,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r11.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r8,r11,8,0,23
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00) | (ctx.r8.u64 & 0xFFFFFFFF000000FF);
	// stwu r8,12(r30)
	ea = 12 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// bl 0x820f1440
	ctx.lr = 0x8211477C;
	sub_820F1440(ctx, base);
	// stfsu f1,4(r30)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x820f1440
	ctx.lr = 0x82114788;
	sub_820F1440(ctx, base);
	// stfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r31,r31,112
	ctx.r31.s64 = ctx.r31.s64 + 112;
	// lwz r7,264(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// cmplw cr6,r27,r7
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82114610
	if (ctx.cr6.lt) goto loc_82114610;
loc_821147A4:
	// lwz r3,308(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// bl 0x8217b600
	ctx.lr = 0x821147AC;
	sub_8217B600(ctx, base);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 312);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8217c5a0
	ctx.lr = 0x821147C0;
	sub_8217C5A0(ctx, base);
	// lwz r10,272(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 272);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82114824
	if (!ctx.cr6.gt) goto loc_82114824;
loc_821147D0:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r8,r10,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// sth r7,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r7.u16);
	// lbz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r31.u32 + 4);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r4,r5,24,16,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF00;
	// or r10,r4,r6
	ctx.r10.u64 = ctx.r4.u64 | ctx.r6.u64;
	// sthu r10,2(r3)
	ea = 2 + ctx.r3.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r3.u32 = ea;
	// lbz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 8);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r7,r8,24,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF00;
	// or r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// sthu r6,2(r3)
	ea = 2 + ctx.r3.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r3.u32 = ea;
	// lwz r5,272(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 272);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// blt cr6,0x821147d0
	if (ctx.cr6.lt) goto loc_821147D0;
loc_82114824:
	// lwz r3,312(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 312);
	// bl 0x8217b6c0
	ctx.lr = 0x8211482C;
	sub_8217B6C0(ctx, base);
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82114968
	if (ctx.cr6.eq) goto loc_82114968;
	// lis r10,963
	ctx.r10.s64 = 63111168;
	// mulli r3,r11,68
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(68));
	// ori r9,r10,50115
	ctx.r9.u64 = ctx.r10.u64 | 50115;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82114850
	if (!ctx.cr6.gt) goto loc_82114850;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82114850:
	// bl 0x820ef2e0
	ctx.lr = 0x82114854;
	sub_820EF2E0(ctx, base);
	// lwz r11,276(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 276);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r3,280(r28)
	REX_STORE_U32(ctx.r28.u32 + 280, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82114968
	if (!ctx.cr6.gt) goto loc_82114968;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
loc_82114870:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// lbz r10,-8(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + -8);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rlwinm r8,r11,24,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF00;
	// rlwimi r9,r11,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r7,r9,8,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFF0000;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r5.u32);
	// bl 0x820f1440
	ctx.lr = 0x8211489C;
	sub_820F1440(ctx, base);
	// stfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f1440
	ctx.lr = 0x821148A8;
	sub_820F1440(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x820f1440
	ctx.lr = 0x821148B4;
	sub_820F1440(ctx, base);
	// stfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x820f1440
	ctx.lr = 0x821148C0;
	sub_820F1440(ctx, base);
	// stfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x820f1440
	ctx.lr = 0x821148CC;
	sub_820F1440(ctx, base);
	// stfs f1,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x820f1440
	ctx.lr = 0x821148D8;
	sub_820F1440(ctx, base);
	// stfs f1,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x820f1440
	ctx.lr = 0x821148E4;
	sub_820F1440(ctx, base);
	// stfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x820f1440
	ctx.lr = 0x821148F0;
	sub_820F1440(ctx, base);
	// stfs f1,36(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x820f1440
	ctx.lr = 0x821148FC;
	sub_820F1440(ctx, base);
	// stfs f1,40(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x820f1440
	ctx.lr = 0x82114908;
	sub_820F1440(ctx, base);
	// stfs f1,44(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x820f1440
	ctx.lr = 0x82114914;
	sub_820F1440(ctx, base);
	// stfs f1,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x820f1440
	ctx.lr = 0x82114920;
	sub_820F1440(ctx, base);
	// stfs f1,52(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x820f1440
	ctx.lr = 0x8211492C;
	sub_820F1440(ctx, base);
	// stfs f1,56(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x820f1440
	ctx.lr = 0x82114938;
	sub_820F1440(ctx, base);
	// stfs f1,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x820f1440
	ctx.lr = 0x82114944;
	sub_820F1440(ctx, base);
	// stfs f1,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x820f1440
	ctx.lr = 0x82114950;
	sub_820F1440(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfsu f1,68(r30)
	ctx.fpscr.disableFlushMode();
	ea = 68 + ctx.r30.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// lwz r4,276(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 276);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82114870
	if (ctx.cr6.lt) goto loc_82114870;
loc_82114968:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8215ebf4
	ctx.lr = 0x82114978;
	__restfpr_28(ctx, base);
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82127FB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82127FB8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mr r23,r25
	ctx.r23.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82128228
	if (!ctx.cr6.gt) goto loc_82128228;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// ori r24,r10,14
	ctx.r24.u64 = ctx.r10.u64 | 14;
	// addi r22,r11,-17520
	ctx.r22.s64 = ctx.r11.s64 + -17520;
loc_82127FF0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82128268
	if (ctx.cr6.lt) goto loc_82128268;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lwz r10,84(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212801C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82128038
	if (!ctx.cr6.eq) goto loc_82128038;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128038;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82128038:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r29,4(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// bne cr6,0x82128068
	if (!ctx.cr6.eq) goto loc_82128068;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128064
	if (ctx.cr6.eq) goto loc_82128064;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82128068
	goto loc_82128068;
loc_82128064:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
loc_82128068:
	// lwz r7,128(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821280b0
	if (!ctx.cr6.eq) goto loc_821280B0;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212808c
	if (ctx.cr6.eq) goto loc_8212808C;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x821280b0
	goto loc_821280B0;
loc_8212808C:
	// lwz r7,132(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821280b0
	if (!ctx.cr6.eq) goto loc_821280B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821280AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_821280B0:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r26,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x82126dd8
	ctx.lr = 0x821280D4;
	sub_82126DD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x8212820c
	if (ctx.cr0.lt) goto loc_8212820C;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x821160e0
	ctx.lr = 0x821280F4;
	sub_821160E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82128110
	if (ctx.cr0.eq) goto loc_82128110;
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// b 0x82128114
	goto loc_82128114;
loc_82128110:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82128114:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82128168
	if (ctx.cr6.eq) goto loc_82128168;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128130
	if (ctx.cr6.eq) goto loc_82128130;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82128134
	goto loc_82128134;
loc_82128130:
	// lwz r7,60(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
loc_82128134:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r4,r26,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// bl 0x821277c0
	ctx.lr = 0x8212814C;
	sub_821277C0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821281c0
	if (ctx.cr0.lt) goto loc_821281C0;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211e790
	ctx.lr = 0x82128160;
	sub_8211E790(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82128170
	if (!ctx.cr0.eq) goto loc_82128170;
loc_82128168:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x821281c0
	goto loc_821281C0;
loc_82128170:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821281a4
	if (ctx.cr6.eq) goto loc_821281A4;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212819C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821281c0
	if (ctx.cr0.lt) goto loc_821281C0;
loc_821281A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r28,80
	ctx.r3.s64 = ctx.r28.s64 + 80;
	// bl 0x8211e790
	ctx.lr = 0x821281B0;
	sub_8211E790(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and. r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 & ctx.r24.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x8212820c
	if (!ctx.cr0.lt) goto loc_8212820C;
loc_821281C0:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821281d8
	if (ctx.cr6.eq) goto loc_821281D8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821281dc
	goto loc_821281DC;
loc_821281D8:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_821281DC:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821281e8
	if (!ctx.cr6.eq) goto loc_821281E8;
	// bl 0x82126ef8
	ctx.lr = 0x821281E8;
	sub_82126EF8(ctx, base);
loc_821281E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82128200
	if (ctx.cr6.eq) goto loc_82128200;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82127880
	ctx.lr = 0x821281F8;
	sub_82127880(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82118bc8
	ctx.lr = 0x82128200;
	sub_82118BC8(ctx, base);
loc_82128200:
	// lwz r3,48(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82116590
	ctx.lr = 0x8212820C;
	sub_82116590(ctx, base);
loc_8212820C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82127ff0
	if (ctx.cr6.lt) goto loc_82127FF0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82128268
	if (ctx.cr6.lt) goto loc_82128268;
loc_82128228:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r5,76(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82128240
	if (ctx.cr6.eq) goto loc_82128240;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82128244
	goto loc_82128244;
loc_82128240:
	// lwz r4,60(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
loc_82128244:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,4919
	ctx.r6.s64 = 322371584;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r6,r6,61441
	ctx.r6.u64 = ctx.r6.u64 | 61441;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82128260;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82128270
	if (!ctx.cr0.lt) goto loc_82128270;
loc_82128268:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82127e80
	ctx.lr = 0x82128270;
	sub_82127E80(ctx, base);
loc_82128270:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82132178) {
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
	// lwz r11,556(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 556);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// b 0x821321ac
	goto loc_821321AC;
loc_8213219C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821321b4
	if (ctx.cr6.eq) goto loc_821321B4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821321AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213219c
	if (!ctx.cr6.eq) goto loc_8213219C;
loc_821321B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821321c8
	if (ctx.cr6.eq) goto loc_821321C8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x8211a1b8
	ctx.lr = 0x821321C8;
	sub_8211A1B8(ctx, base);
loc_821321C8:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// b 0x821321e0
	goto loc_821321E0;
loc_821321D0:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x821321e8
	if (ctx.cr6.eq) goto loc_821321E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821321E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821321d0
	if (!ctx.cr6.eq) goto loc_821321D0;
loc_821321E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821321fc
	if (ctx.cr6.eq) goto loc_821321FC;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// bl 0x8211a1b8
	ctx.lr = 0x821321FC;
	sub_8211A1B8(ctx, base);
loc_821321FC:
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

DEFINE_REX_FUNC(sub_82132FD8) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133008;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,148(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82151728
	ctx.lr = 0x82133014;
	sub_82151728(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133028;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82133C10) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82133c88
	if (ctx.cr6.lt) goto loc_82133C88;
	// beq cr6,0x82133c80
	if (ctx.cr6.eq) goto loc_82133C80;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82133c5c
	if (ctx.cr6.lt) goto loc_82133C5C;
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// beq cr6,0x82133c4c
	if (ctx.cr6.eq) goto loc_82133C4C;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// b 0x82133c50
	goto loc_82133C50;
loc_82133C4C:
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_82133C50:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133C58;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82133c8c
	goto loc_82133C8C;
loc_82133C5C:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// lwz r6,20(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133C7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82133c8c
	goto loc_82133C8C;
loc_82133C80:
	// bl 0x82133b90
	ctx.lr = 0x82133C84;
	sub_82133B90(ctx, base);
	// b 0x82133c8c
	goto loc_82133C8C;
loc_82133C88:
	// bl 0x82133b38
	ctx.lr = 0x82133C8C;
	sub_82133B38(ctx, base);
loc_82133C8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134AC8) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82134EF8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82134d28
	sub_82134D28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134F70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82135238
	sub_82135238(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134F80) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82135110) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375344
	ctx.lr = 0x8213512C;
	__imp__XAudioGetSpeakerConfig(ctx, base);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,20216
	ctx.r11.s64 = ctx.r11.s64 + 20216;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// std r10,52(r31)
	REX_STORE_U64(ctx.r31.u32 + 52, ctx.r10.u64);
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82375334
	ctx.lr = 0x82135174;
	__imp__XAudioRegisterRenderDriverClient(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82139AD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215eb70
	ctx.lr = 0x82139AE0;
	__savefpr_14(ctx, base);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f0,26824(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 26824);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,32(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// bne cr6,0x82139ca0
	if (!ctx.cr6.eq) goto loc_82139CA0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82139e54
	if (ctx.cr6.eq) goto loc_82139E54;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_82139B8C:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r6.u64);
	// lfd f1,-200(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f0,-208(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f31,f1
	ctx.f31.f64 = double(ctx.f1.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// std r5,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r5.u64);
	// lfd f1,-192(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f30,f1
	ctx.f30.f64 = double(ctx.f1.s64);
	// std r6,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r6.u64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// lfd f0,-184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f29,f0
	ctx.f29.f64 = double(ctx.f0.s64);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// frsp f0,f31
	ctx.f0.f64 = double(float(ctx.f31.f64));
	// std r3,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r3.u64);
	// lfd f31,-176(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f28,f31
	ctx.f28.f64 = double(ctx.f31.s64);
	// frsp f31,f30
	ctx.f31.f64 = double(float(ctx.f30.f64));
	// std r5,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r5.u64);
	// frsp f30,f29
	ctx.f30.f64 = double(float(ctx.f29.f64));
	// lfd f29,-168(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f27,f29
	ctx.f27.f64 = double(ctx.f29.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f29,f28
	ctx.f29.f64 = double(float(ctx.f28.f64));
	// frsp f28,f27
	ctx.f28.f64 = double(float(ctx.f27.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f27,f29,f9
	ctx.f27.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f29,f29,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f27,f28,f8,f27
	ctx.f27.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f27.f64)));
	// fmadds f29,f28,f2,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f28.f64, ctx.f2.f64, ctx.f29.f64)));
	// fmadds f28,f30,f10,f27
	ctx.f28.f64 = double(float(std::fma(ctx.f30.f64, ctx.f10.f64, ctx.f27.f64)));
	// fmadds f30,f30,f4,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f30.f64, ctx.f4.f64, ctx.f29.f64)));
	// fmadds f29,f31,f11,f28
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f11.f64, ctx.f28.f64)));
	// fmadds f31,f31,f5,f30
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f5.f64, ctx.f30.f64)));
	// fmadds f30,f1,f12,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f29.f64)));
	// fmadds f1,f1,f6,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f31.f64)));
	// fmadds f31,f0,f13,f30
	ctx.f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f30.f64)));
	// fmadds f0,f0,f7,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f1.f64)));
	// beq cr6,0x82139c7c
	if (ctx.cr6.eq) goto loc_82139C7C;
	// lfs f26,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f26.f64 = double(temp.f32);
	// fadds f1,f31,f26
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f26.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82139c84
	goto loc_82139C84;
loc_82139C7C:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82139C84:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82139b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82139B8C;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215ebbc
	ctx.lr = 0x82139C94;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82139CA0:
	// lfs f1,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f31,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f27,f1,f0
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f26,f31,f0
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f1,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f25,f1,f0
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f24,f31,f0
	ctx.f24.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f1,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f23,f1,f0
	ctx.f23.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f22,f31,f0
	ctx.f22.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f1,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f21,f1,f0
	ctx.f21.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f20,f31,f0
	ctx.f20.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f1,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f19,f1,f0
	ctx.f19.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f18,f31,f0
	ctx.f18.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f1,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// lfs f31,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f17,f1,f0
	ctx.f17.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f16,f31,f0
	ctx.f16.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// beq cr6,0x82139e54
	if (ctx.cr6.eq) goto loc_82139E54;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r9,r9,r8
	ctx.r9.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,72
	ctx.r9.s64 = 72;
loc_82139D24:
	// lhz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// lhzu r5,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r5.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r6,r6
	ctx.r6.s64 = ctx.r6.s16;
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// std r6,-168(r1)
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.r6.u64);
	// std r5,-176(r1)
	REX_STORE_U64(ctx.r1.u32 + -176, ctx.r5.u64);
	// lfd f31,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -176);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// lfd f0,-168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// std r5,-184(r1)
	REX_STORE_U64(ctx.r1.u32 + -184, ctx.r5.u64);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r3,-200(r1)
	REX_STORE_U64(ctx.r1.u32 + -200, ctx.r3.u64);
	// lfd f29,-200(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -200);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f28,f29
	ctx.f28.f64 = double(ctx.f29.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfd f1,-184(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -184);
	// fcfid f30,f1
	ctx.f30.f64 = double(ctx.f1.s64);
	// extsh r4,r6
	ctx.r4.s64 = ctx.r6.s16;
	// frsp f1,f31
	ctx.f1.f64 = double(float(ctx.f31.f64));
	// std r4,-192(r1)
	REX_STORE_U64(ctx.r1.u32 + -192, ctx.r4.u64);
	// frsp f31,f30
	ctx.f31.f64 = double(float(ctx.f30.f64));
	// lfd f30,-192(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -192);
	// fcfid f30,f30
	ctx.f30.f64 = double(ctx.f30.s64);
	// lhzu r3,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r3.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r3
	ctx.r5.s64 = ctx.r3.s16;
	// frsp f29,f30
	ctx.f29.f64 = double(float(ctx.f30.f64));
	// frsp f30,f28
	ctx.f30.f64 = double(float(ctx.f28.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// std r5,-208(r1)
	REX_STORE_U64(ctx.r1.u32 + -208, ctx.r5.u64);
	// lfd f28,-208(r1)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -208);
	// fcfid f28,f28
	ctx.f28.f64 = double(ctx.f28.s64);
	// frsp f28,f28
	ctx.f28.f64 = double(float(ctx.f28.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f15,f29,f9
	ctx.f15.f64 = double(float(ctx.f29.f64 * ctx.f9.f64));
	// fmuls f29,f29,f3
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f3.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f15,f28,f8,f15
	ctx.f15.f64 = double(float(std::fma(ctx.f28.f64, ctx.f8.f64, ctx.f15.f64)));
	// fmadds f29,f28,f2,f29
	ctx.f29.f64 = double(float(std::fma(ctx.f28.f64, ctx.f2.f64, ctx.f29.f64)));
	// fmadds f28,f30,f10,f15
	ctx.f28.f64 = double(float(std::fma(ctx.f30.f64, ctx.f10.f64, ctx.f15.f64)));
	// fmadds f30,f30,f4,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f30.f64, ctx.f4.f64, ctx.f29.f64)));
	// fmadds f29,f31,f11,f28
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f11.f64, ctx.f28.f64)));
	// fmadds f31,f31,f5,f30
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f5.f64, ctx.f30.f64)));
	// fmadds f30,f1,f12,f29
	ctx.f30.f64 = double(float(std::fma(ctx.f1.f64, ctx.f12.f64, ctx.f29.f64)));
	// fmadds f1,f1,f6,f31
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, ctx.f31.f64)));
	// fmadds f31,f0,f13,f30
	ctx.f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f13.f64, ctx.f30.f64)));
	// fmadds f0,f0,f7,f1
	ctx.f0.f64 = double(float(std::fma(ctx.f0.f64, ctx.f7.f64, ctx.f1.f64)));
	// beq cr6,0x82139e14
	if (ctx.cr6.eq) goto loc_82139E14;
	// lfs f14,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f14.f64 = double(temp.f32);
	// fadds f1,f31,f14
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f14.f64));
	// stfs f1,0(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f1,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f1.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82139e1c
	goto loc_82139E1C;
loc_82139E14:
	// stfs f31,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_82139E1C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f13,f27,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f27.f64 + ctx.f13.f64));
	// fadds f12,f26,f12
	ctx.f12.f64 = double(float(ctx.f26.f64 + ctx.f12.f64));
	// fadds f11,f25,f11
	ctx.f11.f64 = double(float(ctx.f25.f64 + ctx.f11.f64));
	// fadds f10,f24,f10
	ctx.f10.f64 = double(float(ctx.f24.f64 + ctx.f10.f64));
	// fadds f9,f23,f9
	ctx.f9.f64 = double(float(ctx.f23.f64 + ctx.f9.f64));
	// fadds f8,f22,f8
	ctx.f8.f64 = double(float(ctx.f22.f64 + ctx.f8.f64));
	// fadds f7,f21,f7
	ctx.f7.f64 = double(float(ctx.f21.f64 + ctx.f7.f64));
	// fadds f6,f20,f6
	ctx.f6.f64 = double(float(ctx.f20.f64 + ctx.f6.f64));
	// fadds f5,f19,f5
	ctx.f5.f64 = double(float(ctx.f19.f64 + ctx.f5.f64));
	// fadds f4,f18,f4
	ctx.f4.f64 = double(float(ctx.f18.f64 + ctx.f4.f64));
	// fadds f3,f17,f3
	ctx.f3.f64 = double(float(ctx.f17.f64 + ctx.f3.f64));
	// fadds f2,f16,f2
	ctx.f2.f64 = double(float(ctx.f16.f64 + ctx.f2.f64));
	// bdnz 0x82139d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82139D24;
loc_82139E54:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215ebbc
	ctx.lr = 0x82139E5C;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82142090) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_821420C0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821420e0
	if (!ctx.cr6.eq) goto loc_821420E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x821420c0
	if (ctx.cr6.lt) goto loc_821420C0;
	// blr 
	return;
loc_821420E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82142350) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwzx r10,r11,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// srawi r3,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r10.s32 >> 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821423F8) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 8;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stb r3,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// stb r10,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82142520) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// li r3,824
	ctx.r3.s64 = 824;
	// bl 0x821407f0
	ctx.lr = 0x82142538;
	sub_821407F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82142558
	if (!ctx.cr6.eq) goto loc_82142558;
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
loc_82142558:
	// li r5,824
	ctx.r5.s64 = 824;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82142568;
	sub_8215EC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// li r7,9
	ctx.r7.s64 = 9;
	// sth r10,110(r31)
	REX_STORE_U16(ctx.r31.u32 + 110, ctx.r10.u16);
	// li r6,511
	ctx.r6.s64 = 511;
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r4,61
	ctx.r4.s64 = 61;
	// lfs f0,2104(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// li r3,-1
	ctx.r3.s64 = -1;
	// lfs f13,30116(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 30116);
	ctx.f13.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stfs f0,300(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 300, temp.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stfs f13,292(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 292, temp.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// sth r11,28(r31)
	REX_STORE_U16(ctx.r31.u32 + 28, ctx.r11.u16);
	// sth r11,30(r31)
	REX_STORE_U16(ctx.r31.u32 + 30, ctx.r11.u16);
	// sth r11,32(r31)
	REX_STORE_U16(ctx.r31.u32 + 32, ctx.r11.u16);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r7,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
	// stw r6,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r6.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// sth r11,34(r31)
	REX_STORE_U16(ctx.r31.u32 + 34, ctx.r11.u16);
	// stw r5,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r5.u32);
	// stw r4,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r4.u32);
	// stw r11,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// sth r3,108(r31)
	REX_STORE_U16(ctx.r31.u32 + 108, ctx.r3.u16);
	// stw r11,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r11,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
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
	// stw r11,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r11,656(r31)
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r11,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stb r11,200(r31)
	REX_STORE_U8(ctx.r31.u32 + 200, ctx.r11.u8);
	// stw r11,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// sth r11,210(r31)
	REX_STORE_U16(ctx.r31.u32 + 210, ctx.r11.u16);
	// stw r11,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// sth r11,202(r31)
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// stw r11,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r10,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,232(r31)
	REX_STORE_U32(ctx.r31.u32 + 232, ctx.r11.u32);
	// stw r11,236(r31)
	REX_STORE_U32(ctx.r31.u32 + 236, ctx.r11.u32);
	// stw r11,240(r31)
	REX_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// stw r11,244(r31)
	REX_STORE_U32(ctx.r31.u32 + 244, ctx.r11.u32);
	// stw r11,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r11.u32);
	// stw r11,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r11.u32);
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// stw r11,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	REX_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r9,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r9.u32);
	// stfs f0,396(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 396, temp.u32);
	// stw r11,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// lis r8,-32235
	ctx.r8.s64 = -2112552960;
	// stw r11,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r11.u32);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r11,280(r31)
	REX_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// addi r6,r8,30400
	ctx.r6.s64 = ctx.r8.s64 + 30400;
	// stw r11,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// addi r4,r7,8560
	ctx.r4.s64 = ctx.r7.s64 + 8560;
	// stw r11,304(r31)
	REX_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r11,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r11.u32);
	// addi r9,r5,-30064
	ctx.r9.s64 = ctx.r5.s64 + -30064;
	// stw r11,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// addi r8,r3,-31256
	ctx.r8.s64 = ctx.r3.s64 + -31256;
	// stw r11,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// stw r11,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r11.u32);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// stw r11,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	REX_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	REX_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	REX_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	REX_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
	// stw r11,368(r31)
	REX_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r11,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r11,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r11.u32);
	// stw r11,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
	// stw r11,400(r31)
	REX_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// stw r11,404(r31)
	REX_STORE_U32(ctx.r31.u32 + 404, ctx.r11.u32);
	// stw r10,408(r31)
	REX_STORE_U32(ctx.r31.u32 + 408, ctx.r10.u32);
	// stw r11,412(r31)
	REX_STORE_U32(ctx.r31.u32 + 412, ctx.r11.u32);
	// stw r11,416(r31)
	REX_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// stw r11,420(r31)
	REX_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// stw r11,424(r31)
	REX_STORE_U32(ctx.r31.u32 + 424, ctx.r11.u32);
	// stw r11,428(r31)
	REX_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// stw r11,432(r31)
	REX_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
	// stw r11,436(r31)
	REX_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
	// stw r11,440(r31)
	REX_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// stw r11,444(r31)
	REX_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// stw r11,448(r31)
	REX_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// stw r11,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// stw r11,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	REX_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r11,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r11,468(r31)
	REX_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// stw r11,472(r31)
	REX_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stw r6,476(r31)
	REX_STORE_U32(ctx.r31.u32 + 476, ctx.r6.u32);
	// stw r11,480(r31)
	REX_STORE_U32(ctx.r31.u32 + 480, ctx.r11.u32);
	// stw r11,484(r31)
	REX_STORE_U32(ctx.r31.u32 + 484, ctx.r11.u32);
	// stw r4,488(r31)
	REX_STORE_U32(ctx.r31.u32 + 488, ctx.r4.u32);
	// stw r11,492(r31)
	REX_STORE_U32(ctx.r31.u32 + 492, ctx.r11.u32);
	// stw r9,496(r31)
	REX_STORE_U32(ctx.r31.u32 + 496, ctx.r9.u32);
	// stw r8,516(r31)
	REX_STORE_U32(ctx.r31.u32 + 516, ctx.r8.u32);
	// stw r11,520(r31)
	REX_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r11,524(r31)
	REX_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// stw r11,540(r31)
	REX_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r11,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// stw r11,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r11.u32);
	// stw r11,552(r31)
	REX_STORE_U32(ctx.r31.u32 + 552, ctx.r11.u32);
	// stw r11,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
	// stw r11,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r11.u32);
	// stw r11,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// stb r11,201(r31)
	REX_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
	// stw r11,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r11,576(r31)
	REX_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
	// sth r11,580(r31)
	REX_STORE_U16(ctx.r31.u32 + 580, ctx.r11.u16);
	// stw r11,584(r31)
	REX_STORE_U32(ctx.r31.u32 + 584, ctx.r11.u32);
	// stw r11,588(r31)
	REX_STORE_U32(ctx.r31.u32 + 588, ctx.r11.u32);
	// stw r11,600(r31)
	REX_STORE_U32(ctx.r31.u32 + 600, ctx.r11.u32);
	// stw r11,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r11,596(r31)
	REX_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,608(r31)
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r11.u32);
	// stw r11,624(r31)
	REX_STORE_U32(ctx.r31.u32 + 624, ctx.r11.u32);
	// stw r11,740(r31)
	REX_STORE_U32(ctx.r31.u32 + 740, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8214D548) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8214D550;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// lhz r11,150(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 150);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// lhz r9,580(r29)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8214d650
	if (!ctx.cr6.lt) goto loc_8214D650;
loc_8214D57C:
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lwz r9,584(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 584);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lwz r10,320(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 320);
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r6,r7,r9
	ctx.r6.u64 = REX_LOAD_U16(ctx.r7.u32 + ctx.r9.u32);
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// mulli r11,r5,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(1776));
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r4,40(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8214d5f4
	if (ctx.cr6.eq) goto loc_8214D5F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,36(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8214cf38
	ctx.lr = 0x8214D5C8;
	sub_8214CF38(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214d64c
	if (ctx.cr6.lt) goto loc_8214D64C;
	// lhz r11,490(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 490);
	// lhz r10,730(r28)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r28.u32 + 730);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8214d5f0
	if (!ctx.cr6.gt) goto loc_8214D5F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8214D5F0:
	// sth r11,730(r28)
	REX_STORE_U16(ctx.r28.u32 + 730, ctx.r11.u16);
loc_8214D5F4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x8214d64c
	if (ctx.cr6.lt) goto loc_8214D64C;
	// lwz r11,60(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214d61c
	if (!ctx.cr6.eq) goto loc_8214D61C;
	// lwz r10,264(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 264);
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// stw r8,264(r31)
	REX_STORE_U32(ctx.r31.u32 + 264, ctx.r8.u32);
loc_8214D61C:
	// sth r26,202(r29)
	REX_STORE_U16(ctx.r29.u32 + 202, ctx.r26.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212b5c0
	ctx.lr = 0x8214D628;
	sub_8212B5C0(ctx, base);
	// lhz r11,150(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 150);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r10,150(r31)
	REX_STORE_U16(ctx.r31.u32 + 150, ctx.r10.u16);
	// lhz r8,580(r29)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r29.u32 + 580);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8214d57c
	if (ctx.cr6.lt) goto loc_8214D57C;
loc_8214D64C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_8214D650:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821508A8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821508CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x821508fc
	if (!ctx.cr0.eq) goto loc_821508FC;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821508fc
	if (ctx.cr6.eq) goto loc_821508FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82150720
	ctx.lr = 0x821508F0;
	sub_82150720(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x821508F8;
	sub_82118BC8(ctx, base);
	// b 0x82150910
	goto loc_82150910;
loc_821508FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82150910;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82150910:
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

DEFINE_REX_FUNC(sub_82150FD8) {
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
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,124(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,120(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r8,96(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215101C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_82151678) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82151684
	if (!ctx.cr6.eq) goto loc_82151684;
	// b 0x8215c130
	sub_8215C130(ctx, base);
	return;
loc_82151684:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,260(r3)
	REX_STORE_U32(ctx.r3.u32 + 260, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821519B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,176(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821519d0
	if (!ctx.cr6.eq) goto loc_821519D0;
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x821519e8
	goto loc_821519E8;
loc_821519D0:
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821519e4
	if (ctx.cr6.eq) goto loc_821519E4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821519e8
	goto loc_821519E8;
loc_821519E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821519E8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821524C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821524D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,184(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,188(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 188);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r10,28(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82152598
	if (!ctx.cr6.gt) goto loc_82152598;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82152520
	if (!ctx.cr6.eq) goto loc_82152520;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,532(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 532);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82152520:
	// lwz r27,0(r5)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8215258c
	goto loc_8215258C;
loc_82152528:
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821525cc
	if (ctx.cr6.eq) goto loc_821525CC;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// lwz r4,188(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82152560
	if (!ctx.cr6.lt) goto loc_82152560;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82152560:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8215e640
	ctx.lr = 0x8215256C;
	sub_8215E640(ctx, base);
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// subf r30,r29,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r29.u64;
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// add r28,r29,r28
	ctx.r28.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// bl 0x821519f8
	ctx.lr = 0x8215258C;
	sub_821519F8(ctx, base);
loc_8215258C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82152528
	if (!ctx.cr6.eq) goto loc_82152528;
	// b 0x821525cc
	goto loc_821525CC;
loc_82152598:
	// lwz r3,0(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821525b0
	if (ctx.cr6.eq) goto loc_821525B0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821525AC;
	sub_8215E640(ctx, base);
	// b 0x821525b4
	goto loc_821525B4;
loc_821525B0:
	// stw r4,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r4.u32);
loc_821525B4:
	// lwz r11,188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// bl 0x821519f8
	ctx.lr = 0x821525CC;
	sub_821519F8(ctx, base);
loc_821525CC:
	// ld r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 200);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,200(r31)
	REX_STORE_U64(ctx.r31.u32 + 200, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82158A90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x82158A98;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8215eb9c
	ctx.lr = 0x82158AA0;
	__savefpr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// addze r25,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r25.s64 = temp.s64;
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// ble cr6,0x82158adc
	if (!ctx.cr6.gt) goto loc_82158ADC;
loc_82158ACC:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// srw r11,r28,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x82158acc
	if (ctx.cr6.gt) goto loc_82158ACC;
loc_82158ADC:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r10,r25,-1
	ctx.r10.s64 = ctx.r25.s64 + -1;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// and r9,r10,r25
	ctx.r9.u64 = ctx.r10.u64 & ctx.r25.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// rlwinm r24,r8,27,31,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmpwi cr6,r28,64
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 64, ctx.xer);
	// blt cr6,0x82158b6c
	if (ctx.cr6.lt) goto loc_82158B6C;
	// cmpwi cr6,r28,2048
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2048, ctx.xer);
	// bgt cr6,0x82158b6c
	if (ctx.cr6.gt) goto loc_82158B6C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82158b6c
	if (ctx.cr6.eq) goto loc_82158B6C;
	// srawi r11,r28,7
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 7;
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,11680
	ctx.r8.s64 = ctx.r10.s64 + 11680;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lfs f13,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f11,4(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,8(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f27,f9,f0
	ctx.f27.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f26,20(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 20);
	ctx.f26.f64 = double(temp.f32);
	// fneg f31,f8
	ctx.f31.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// lfs f25,16(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f25.f64 = double(temp.f32);
	// fneg f29,f12
	ctx.f29.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// b 0x82158c28
	goto loc_82158C28;
loc_82158B6C:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f29,f0
	ctx.f29.f64 = double(ctx.f0.s64);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// lfd f0,6896(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 6896);
	// fdiv f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 / ctx.f29.f64;
	// lfd f0,2312(r9)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 2312);
	// fmul f30,f13,f0
	ctx.f30.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8215fe58
	ctx.lr = 0x82158B9C;
	sub_8215FE58(ctx, base);
	// fmul f12,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// frsp f30,f12
	ctx.f30.f64 = double(float(ctx.f12.f64));
	// bl 0x8215fd78
	ctx.lr = 0x82158BAC;
	sub_8215FD78(ctx, base);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmul f11,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lfd f0,-9888(r8)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -9888);
	// fdiv f27,f0,f29
	ctx.f27.f64 = ctx.f0.f64 / ctx.f29.f64;
	// lfd f0,2304(r7)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r7.u32 + 2304);
	// frsp f29,f11
	ctx.f29.f64 = double(float(ctx.f11.f64));
	// fmul f28,f27,f0
	ctx.f28.f64 = ctx.f27.f64 * ctx.f0.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x8215fe58
	ctx.lr = 0x82158BD4;
	sub_8215FE58(ctx, base);
	// fmul f10,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f1.f64 * ctx.f31.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// frsp f28,f10
	ctx.f28.f64 = double(float(ctx.f10.f64));
	// bl 0x8215fd78
	ctx.lr = 0x82158BE4;
	sub_8215FD78(ctx, base);
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// fmul f9,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = ctx.f1.f64 * ctx.f31.f64;
	// lfd f0,2296(r6)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r6.u32 + 2296);
	// fmul f31,f27,f0
	ctx.f31.f64 = ctx.f27.f64 * ctx.f0.f64;
	// frsp f27,f9
	ctx.f27.f64 = double(float(ctx.f9.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8215fd78
	ctx.lr = 0x82158C00;
	sub_8215FD78(ctx, base);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lfd f0,26280(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 26280);
	// fmul f8,f1,f0
	ctx.f8.f64 = ctx.f1.f64 * ctx.f0.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// frsp f31,f8
	ctx.f31.f64 = double(float(ctx.f8.f64));
	// bl 0x8215fe58
	ctx.lr = 0x82158C18;
	sub_8215FE58(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = double(float(ctx.f1.f64));
	// lfs f0,4492(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f25,f31,f0
	ctx.f25.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
loc_82158C28:
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82158d38
	if (ctx.cr6.lt) goto loc_82158D38;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82158C54:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f31,f30,f27
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f12,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f29
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// stfs f12,0(r29)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// lfs f9,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f8,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fnmsubs f12,f0,f31,f30
	ctx.f12.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64)));
	// fmsubs f7,f8,f30,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f8.f64, ctx.f30.f64, -ctx.f11.f64)));
	// stfs f7,0(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f6,f8,f29,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f29.f64, ctx.f10.f64)));
	// stfs f6,4(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// lfs f5,-8(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f0,f5
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// stfs f9,-8(r29)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r29.u32 + -8, temp.u32);
	// fmuls f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f5.f64));
	// lfs f2,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// fmsubs f1,f13,f2,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f4.f64)));
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// stfs f1,8(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f13,f31,f13,f29
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f29.f64)));
	// lfs f10,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f9,f0,f2,f3
	ctx.f9.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f3.f64)));
	// stfs f9,12(r31)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// lfs f8,-16(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -16);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f12,f8
	ctx.f7.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f4,f13,f8
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f10,-16(r29)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r29.u32 + -16, temp.u32);
	// fmr f6,f11
	ctx.f6.f64 = ctx.f11.f64;
	// lfs f5,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f2,f13,f5,f7
	ctx.f2.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f2,20(r31)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fmsubs f1,f12,f5,f4
	ctx.f1.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, -ctx.f4.f64)));
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f10,-24(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + -24);
	ctx.f10.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfs f3,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fnmsubs f13,f13,f31,f6
	ctx.f13.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f6.f64)));
	// stfs f3,-24(r29)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r29.u32 + -24, temp.u32);
	// fmadds f0,f31,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f0.f64)));
	// fmuls f8,f0,f10
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// lfs f9,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f13,f10
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// addi r30,r30,-32
	ctx.r30.s64 = ctx.r30.s64 + -32;
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// fnmsubs f30,f0,f31,f12
	ctx.f30.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f12.f64)));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fmadds f29,f31,f13,f11
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f6,f13,f9,f8
	ctx.f6.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f8.f64)));
	// stfs f6,24(r31)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f5,f0,f9,f7
	ctx.f5.f64 = double(float(std::fma(ctx.f0.f64, ctx.f9.f64, ctx.f7.f64)));
	// stfs f5,28(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bdnz 0x82158c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158C54;
loc_82158D38:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82158d94
	if (!ctx.cr6.gt) goto loc_82158D94;
	// subf r10,r30,r29
	ctx.r10.u64 = ctx.r29.u64 - ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82158D48:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// fmuls f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// lfs f11,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f30
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// stfsx f11,r10,r30
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f9,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmsubs f8,f9,f30,f12
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, -ctx.f12.f64)));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmadds f7,f9,f29,f10
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f29.f64, ctx.f10.f64)));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// bdnz 0x82158d48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158D48;
loc_82158D94:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82158e80
	if (ctx.cr6.lt) goto loc_82158E80;
	// addi r10,r26,-4
	ctx.r10.s64 = ctx.r26.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82158DB8:
	// fmadds f0,f31,f30,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// lfs f6,0(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fnmsubs f13,f31,f29,f28
	ctx.f13.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f5,4(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,12(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f4,f6,f29
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f29.f64));
	// lfs f9,8(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f5,f29
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f29.f64));
	// lfs f8,16(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,20(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// lfs f2,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,28(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f28,f10,f0
	ctx.f28.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f27,f0,f9
	ctx.f27.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmadds f5,f5,f30,f4
	ctx.f5.f64 = double(float(std::fma(ctx.f5.f64, ctx.f30.f64, ctx.f4.f64)));
	// stfs f5,4(r31)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmsubs f4,f6,f30,f3
	ctx.f4.f64 = double(float(std::fma(ctx.f6.f64, ctx.f30.f64, -ctx.f3.f64)));
	// stfs f4,0(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f3,f13,f9,f28
	ctx.f3.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, -ctx.f28.f64)));
	// stfs f3,8(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fmadds f13,f10,f13,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f27.f64)));
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fnmsubs f13,f0,f31,f30
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f30.f64)));
	// fmadds f0,f31,f12,f29
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f29.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f9,f11
	ctx.f9.f64 = ctx.f11.f64;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmsubs f4,f13,f8,f6
	ctx.f4.f64 = double(float(std::fma(ctx.f13.f64, ctx.f8.f64, -ctx.f6.f64)));
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// fmadds f3,f7,f13,f5
	ctx.f3.f64 = double(float(std::fma(ctx.f7.f64, ctx.f13.f64, ctx.f5.f64)));
	// stfs f3,20(r31)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// fnmsubs f13,f0,f31,f10
	ctx.f13.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f10.f64)));
	// fmadds f0,f31,f12,f9
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f9.f64)));
	// fmr f28,f13
	ctx.f28.f64 = ctx.f13.f64;
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f9,f0,f2
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
	// fnmsubs f30,f0,f31,f12
	ctx.f30.f64 = double(float(-std::fma(ctx.f0.f64, ctx.f31.f64, -ctx.f12.f64)));
	// fmadds f29,f31,f13,f11
	ctx.f29.f64 = double(float(std::fma(ctx.f31.f64, ctx.f13.f64, ctx.f11.f64)));
	// fmsubs f8,f13,f2,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, -ctx.f10.f64)));
	// stfs f8,24(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmadds f7,f1,f13,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f13.f64, ctx.f9.f64)));
	// stfs f7,28(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bdnz 0x82158db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158DB8;
loc_82158E80:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82158ecc
	if (!ctx.cr6.gt) goto loc_82158ECC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
loc_82158E90:
	// lfs f12,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f0,f31,f29,f28
	ctx.f0.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f28.f64)));
	// lfs f11,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f9,f11,f29
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmadds f13,f31,f30,f27
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f30.f64, ctx.f27.f64)));
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// fmr f27,f29
	ctx.f27.f64 = ctx.f29.f64;
	// fmsubs f8,f11,f30,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f30.f64, -ctx.f10.f64)));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f12,f30,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f12.f64, ctx.f30.f64, ctx.f9.f64)));
	// stfsu f7,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
	// bdnz 0x82158e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158E90;
loc_82158ECC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// bne cr6,0x82158edc
	if (!ctx.cr6.eq) goto loc_82158EDC;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_82158EDC:
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bctrl 
	ctx.lr = 0x82158EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r28,-2
	ctx.r7.s64 = ctx.r28.s64 + -2;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,2280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f13,2104(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2104);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// blt cr6,0x82159090
	if (ctx.cr6.lt) goto loc_82159090;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82158F34:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f25.f64)));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f13.f64, -ctx.f26.f64)));
	// lfs f9,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmuls f2,f12,f9
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f3,f11,f9
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fneg f1,f12
	ctx.f1.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmsubs f10,f7,f0,f8
	ctx.f10.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmsubs f9,f4,f7,f6
	ctx.f9.f64 = double(float(std::fma(ctx.f4.f64, ctx.f7.f64, -ctx.f6.f64)));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmadds f13,f31,f11,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f11.f64, ctx.f13.f64)));
	// fnmsubs f0,f12,f31,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f31.f64, -ctx.f0.f64)));
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmadds f8,f5,f11,f2
	ctx.f8.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f2.f64)));
	// stfs f8,4(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f7,f1,f5,f3
	ctx.f7.f64 = double(float(std::fma(ctx.f1.f64, ctx.f5.f64, ctx.f3.f64)));
	// lfs f5,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfs f4,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// lfs f2,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f9,f4,f11
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f13,f2
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// lfs f6,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f0,f2
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmsubs f3,f11,f6,f3
	ctx.f3.f64 = double(float(std::fma(ctx.f11.f64, ctx.f6.f64, -ctx.f3.f64)));
	// stfs f3,8(r11)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmsubs f1,f1,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f1.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,-4(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmadds f9,f5,f0,f8
	ctx.f9.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f8.f64)));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmadds f7,f4,f5,f7
	ctx.f7.f64 = double(float(std::fma(ctx.f4.f64, ctx.f5.f64, ctx.f7.f64)));
	// stfs f7,-8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// lfs f6,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmr f3,f0
	ctx.f3.f64 = ctx.f0.f64;
	// lfs f5,-16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f5.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// lfs f1,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f9,f1,f13
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f7,f1,f0
	ctx.f7.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f8,-12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f1,f0,f6,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, -ctx.f9.f64)));
	// stfs f1,16(r11)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fnmsubs f0,f13,f31,f11
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f11.f64)));
	// fmr f2,f13
	ctx.f2.f64 = ctx.f13.f64;
	// fmadds f13,f31,f3,f10
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f3.f64, ctx.f10.f64)));
	// fmsubs f12,f4,f6,f7
	ctx.f12.f64 = double(float(std::fma(ctx.f4.f64, ctx.f6.f64, -ctx.f7.f64)));
	// stfs f12,-12(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// fmuls f10,f0,f8
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fmuls f9,f13,f8
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// fneg f8,f13
	ctx.f8.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// fmr f26,f12
	ctx.f26.f64 = ctx.f12.f64;
	// fmadds f7,f5,f0,f9
	ctx.f7.f64 = double(float(std::fma(ctx.f5.f64, ctx.f0.f64, ctx.f9.f64)));
	// stfs f7,20(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmadds f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, ctx.f10.f64)));
	// stfs f6,-16(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -16, temp.u32);
	// lfs f5,24(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f9,-24(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -24);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,28(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmsubs f7,f0,f5,f11
	ctx.f7.f64 = double(float(std::fma(ctx.f0.f64, ctx.f5.f64, -ctx.f11.f64)));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fnmsubs f0,f13,f31,f3
	ctx.f0.f64 = double(float(-std::fma(ctx.f13.f64, ctx.f31.f64, -ctx.f3.f64)));
	// fmadds f13,f31,f12,f2
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f12.f64, ctx.f2.f64)));
	// fmsubs f6,f8,f5,f10
	ctx.f6.f64 = double(float(std::fma(ctx.f8.f64, ctx.f5.f64, -ctx.f10.f64)));
	// stfs f6,-20(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + -20, temp.u32);
	// fmuls f5,f0,f4
	ctx.f5.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f4,f13,f4
	ctx.f4.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// fneg f3,f13
	ctx.f3.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmadds f2,f9,f0,f4
	ctx.f2.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f4.f64)));
	// stfs f2,28(r11)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fmadds f1,f3,f9,f5
	ctx.f1.f64 = double(float(std::fma(ctx.f3.f64, ctx.f9.f64, ctx.f5.f64)));
	// stfs f1,-24(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + -24, temp.u32);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// bdnz 0x82158f34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82158F34;
loc_82159090:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82159108
	if (!ctx.cr6.gt) goto loc_82159108;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_821590A4:
	// fmadds f12,f31,f0,f25
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(std::fma(ctx.f31.f64, ctx.f0.f64, ctx.f25.f64)));
	// lfs f10,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f11,f31,f13,f26
	ctx.f11.f64 = double(float(-std::fma(ctx.f31.f64, ctx.f13.f64, -ctx.f26.f64)));
	// lfs f9,-4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f7,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f4,f10,f0
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f5,-8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f5.f64 = double(temp.f32);
	// fneg f6,f13
	ctx.f6.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// fmr f25,f13
	ctx.f25.f64 = ctx.f13.f64;
	// fmuls f3,f12,f9
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fneg f2,f12
	ctx.f2.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f0,f7,f0,f8
	ctx.f0.f64 = double(float(std::fma(ctx.f7.f64, ctx.f0.f64, -ctx.f8.f64)));
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmsubs f13,f6,f7,f4
	ctx.f13.f64 = double(float(std::fma(ctx.f6.f64, ctx.f7.f64, -ctx.f4.f64)));
	// stfs f13,-4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// fmr f0,f11
	ctx.f0.f64 = ctx.f11.f64;
	// fmadds f12,f5,f11,f3
	ctx.f12.f64 = double(float(std::fma(ctx.f5.f64, ctx.f11.f64, ctx.f3.f64)));
	// stfsu f12,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fmadds f11,f2,f5,f1
	ctx.f11.f64 = double(float(std::fma(ctx.f2.f64, ctx.f5.f64, ctx.f1.f64)));
	// stfsu f11,-8(r10)
	ea = -8 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821590a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821590A4;
loc_82159108:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215911c
	if (ctx.cr6.eq) goto loc_8215911C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_8215911C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8215ebe8
	ctx.lr = 0x82159128;
	__restfpr_25(ctx, base);
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_104) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_91) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_126) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82161590) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lwz r11,-22816(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -22816);
	// lwz r10,21184(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 21184);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821623A0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x821623e8
	if (ctx.cr6.eq) goto loc_821623E8;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x821623e8
	if (ctx.cr6.eq) goto loc_821623E8;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x821623d0
	if (!ctx.cr6.eq) goto loc_821623D0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x821621a0
	sub_821621A0(ctx, base);
	return;
loc_821623D0:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x821623e4
	if (ctx.cr6.eq) goto loc_821623E4;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x821623e4
	if (ctx.cr6.eq) goto loc_821623E4;
	// b 0x82162270
	sub_82162270(ctx, base);
	return;
loc_821623E4:
	// b 0x82161be0
	sub_82161BE0(ctx, base);
	return;
loc_821623E8:
	// b 0x82161af0
	sub_82161AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82164340) {
	REX_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82164768) {
	REX_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82164790
	if (!ctx.cr6.eq) goto loc_82164790;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821647ac
	if (!ctx.cr6.eq) goto loc_821647AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82164790:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821647ac
	if (!ctx.cr6.eq) goto loc_821647AC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821647ac
	if (!ctx.cr6.eq) goto loc_821647AC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_821647AC:
	// lhz r11,16(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x821647c4
	if (!ctx.cr6.eq) goto loc_821647C4;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821647C4:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x821647e4
	if (!ctx.cr6.eq) goto loc_821647E4;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821647dc
	if (!ctx.cr0.eq) goto loc_821647DC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821647e4
	if (ctx.cr6.eq) goto loc_821647E4;
loc_821647DC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821647E4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82166130) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// rlwinm r10,r3,1,23,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1FE;
	// lwz r11,-22216(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -22216);
	// lwz r11,200(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,0,0,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82166EC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// fadd f31,f1,f2
	ctx.f31.f64 = ctx.f1.f64 + ctx.f2.f64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,-21212(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -21212);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82166f04
	if (!ctx.cr6.eq) goto loc_82166F04;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82166d30
	ctx.lr = 0x82166F00;
	sub_82166D30(ctx, base);
	// b 0x82166f28
	goto loc_82166F28;
loc_82166F04:
	// bl 0x82162980
	ctx.lr = 0x82166F08;
	sub_82162980(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,33
	ctx.r10.s64 = 33;
	// lis r4,-16377
	ctx.r4.s64 = -1073283072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65279
	ctx.r4.u64 = ctx.r4.u64 | 65279;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82167100
	ctx.lr = 0x82166F24;
	sub_82167100(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82166F28:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169E00) {
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
	// lis r4,-8
	ctx.r4.s64 = -524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r4,r4,1792
	ctx.r4.u64 = ctx.r4.u64 | 1792;
	// bl 0x82167100
	ctx.lr = 0x82169E1C;
	sub_82167100(ctx, base);
	// bl 0x82169c18
	ctx.lr = 0x82169E20;
	sub_82169C18(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216A698) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4584
	ctx.r10.s64 = ctx.r10.s64 + 4584;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// bl 0x820ef300
	ctx.lr = 0x8216A6C8;
	sub_820EF300(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4584
	ctx.r11.s64 = ctx.r11.s64 + 4584;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8216B150) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216B158) {
	REX_FUNC_PROLOGUE();
	// lwz r11,256(r13)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r13.u32 + 256);
	// lwz r3,332(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216B360) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216b39c
	if (ctx.cr6.eq) goto loc_8216B39C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x820eb0a8
	ctx.lr = 0x8216B394;
	sub_820EB0A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8216b3a0
	goto loc_8216B3A0;
loc_8216B39C:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8216B3A0:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375444
	ctx.lr = 0x8216B3B0;
	__imp__NtCreateSemaphore(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8216b3d8
	if (ctx.cr0.lt) goto loc_8216B3D8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,183
	ctx.r3.s64 = 183;
	// beq cr6,0x8216b3cc
	if (ctx.cr6.eq) goto loc_8216B3CC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216B3CC:
	// bl 0x820e98f8
	ctx.lr = 0x8216B3D0;
	sub_820E98F8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8216b3e0
	goto loc_8216B3E0;
loc_8216B3D8:
	// bl 0x820eb190
	ctx.lr = 0x8216B3DC;
	sub_820EB190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216B3E0:
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

DEFINE_REX_FUNC(sub_8216C278) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10548(r3)
	REX_STORE_U32(ctx.r3.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C470) {
	REX_FUNC_PROLOGUE();
	// stb r4,10498(r3)
	REX_STORE_U8(ctx.r3.u32 + 10498, ctx.r4.u8);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C728) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10752(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10752);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C828) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12048(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12048);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C958) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r10,r4,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10540(r3)
	REX_STORE_U32(ctx.r3.u32 + 10540, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CBB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10540);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CCE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// stw r4,12204(r3)
	REX_STORE_U32(ctx.r3.u32 + 12204, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10372(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10372);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8216cd20
	if (ctx.cr6.eq) goto loc_8216CD20;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8216cd20
	if (ctx.cr6.eq) goto loc_8216CD20;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8216cd20
	if (ctx.cr6.eq) goto loc_8216CD20;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8216CD20:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	ctx.r12.s64 = 1;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,56,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10372(r3)
	REX_STORE_U32(ctx.r3.u32 + 10372, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216F5D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8216F5E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// stw r10,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// addi r11,r11,21720
	ctx.r11.s64 = ctx.r11.s64 + 21720;
	// stw r9,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r10,r10,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r6,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// stw r7,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// stw r8,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,28(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r30,r9,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r6,48(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbzx r14,r10,r11
	ctx.r14.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r4,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// rlwinm r28,r7,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r24,r6,23,30,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x3;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8217b1c8
	ctx.lr = 0x8216F64C;
	sub_8217B1C8(ctx, base);
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ed00
	ctx.lr = 0x8216F660;
	sub_8216ED00(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// lwz r7,116(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r23,120(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// subf r9,r29,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r29.u64;
	// subf r8,r29,r23
	ctx.r8.u64 = ctx.r23.u64 - ctx.r29.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// subf r11,r6,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r6.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r26,r25,r10
	ctx.r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// slw r17,r25,r11
	ctx.r17.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// bne cr6,0x8216f6c4
	if (!ctx.cr6.eq) goto loc_8216F6C4;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// slw r15,r25,r11
	ctx.r15.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x8216f6c8
	goto loc_8216F6C8;
loc_8216F6C4:
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
loc_8216F6C8:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// ble cr6,0x8216f6d8
	if (!ctx.cr6.gt) goto loc_8216F6D8;
	// cmplwi cr6,r17,16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 16, ctx.xer);
	// bgt cr6,0x8216f6e8
	if (ctx.cr6.gt) goto loc_8216F6E8;
loc_8216F6D8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f6ec
	if (!ctx.cr0.eq) goto loc_8216F6EC;
loc_8216F6E8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8216F6EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8216f704
	if (ctx.cr6.eq) goto loc_8216F704;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8216f704
	if (!ctx.cr6.eq) goto loc_8216F704;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x8216f708
	goto loc_8216F708;
loc_8216F704:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_8216F708:
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bne cr6,0x8216f7f4
	if (!ctx.cr6.eq) goto loc_8216F7F4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x8216f7f4
	if (!ctx.cr6.eq) goto loc_8216F7F4;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// stw r23,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r29,48(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r30,32(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// rlwinm r27,r29,23,30,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 23) & 0x3;
	// clrlwi r28,r30,26
	ctx.r28.u64 = ctx.r30.u32 & 0x3F;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bl 0x8216efe0
	ctx.lr = 0x8216F760;
	sub_8216EFE0(ctx, base);
	// lwz r26,28(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// rlwinm. r11,r26,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f7c4
	if (!ctx.cr0.eq) goto loc_8216F7C4;
	// rlwinm. r11,r30,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f7c4
	if (!ctx.cr0.eq) goto loc_8216F7C4;
	// rlwinm. r11,r29,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f7c4
	if (!ctx.cr0.eq) goto loc_8216F7C4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x8216f7c4
	if (!ctx.cr6.eq) goto loc_8216F7C4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3C0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f7c4
	if (!ctx.cr0.eq) goto loc_8216F7C4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f7c4
	if (!ctx.cr0.eq) goto loc_8216F7C4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8216eec0
	ctx.lr = 0x8216F7AC;
	sub_8216EEC0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r23
	ctx.r10.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// b 0x8216f7c8
	goto loc_8216F7C8;
loc_8216F7C4:
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8216F7C8:
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x8216f7e4
	if (!ctx.cr6.eq) goto loc_8216F7E4;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x8216fa28
	goto loc_8216FA28;
loc_8216F7E4:
	// rlwinm r11,r26,10,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,2,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x8216fa28
	goto loc_8216FA28;
loc_8216F7F4:
	// srw r10,r9,r27
	ctx.r10.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r27.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x8216f804
	if (ctx.cr6.gt) goto loc_8216F804;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8216F804:
	// srw r11,r8,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r27.u8 & 0x3F));
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bgt cr6,0x8216f81c
	if (ctx.cr6.gt) goto loc_8216F81C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8216F81C:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bne cr6,0x8216f850
	if (!ctx.cr6.eq) goto loc_8216F850;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bgt cr6,0x8216f844
	if (ctx.cr6.gt) goto loc_8216F844;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8216F844:
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x8216f854
	goto loc_8216F854;
loc_8216F850:
	// stw r25,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
loc_8216F854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217b1c8
	ctx.lr = 0x8216F85C;
	sub_8217B1C8(ctx, base);
	// cmpwi cr6,r3,18
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 18, ctx.xer);
	// beq cr6,0x8216f874
	if (ctx.cr6.eq) goto loc_8216F874;
	// cmpwi cr6,r3,19
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 19, ctx.xer);
	// beq cr6,0x8216f874
	if (ctx.cr6.eq) goto loc_8216F874;
	// mr r16,r25
	ctx.r16.u64 = ctx.r25.u64;
	// b 0x8216f894
	goto loc_8216F894;
loc_8216F874:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,23,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x2;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// slw r11,r25,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r11.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r16,r10,r11
	ctx.r16.u64 = ctx.r10.u64 & ~ctx.r11.u64;
loc_8216F894:
	// cntlzw r11,r26
	ctx.r11.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// cntlzw r10,r17
	ctx.r10.u64 = ctx.r17.u32 == 0 ? 32 : __builtin_clz(ctx.r17.u32);
	// cntlzw r9,r15
	ctx.r9.u64 = ctx.r15.u32 == 0 ? 32 : __builtin_clz(ctx.r15.u32);
	// subfic r22,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r22.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// subfic r23,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r23.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// subfic r24,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r24.u64 = static_cast<uint64_t>(31) - ctx.r9.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8216f8c8
	if (ctx.cr6.eq) goto loc_8216F8C8;
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// b 0x8216f8cc
	goto loc_8216F8CC;
loc_8216F8C8:
	// addi r18,r27,-1
	ctx.r18.s64 = ctx.r27.s64 + -1;
loc_8216F8CC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x8216fa24
	if (ctx.cr6.lt) goto loc_8216FA24;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r20,48(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r19,r11,1,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// clrlwi r21,r10,26
	ctx.r21.u64 = ctx.r10.u32 & 0x3F;
loc_8216F8E8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8216f8f4
	if (ctx.cr6.eq) goto loc_8216F8F4;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_8216F8F4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8216f900
	if (ctx.cr6.eq) goto loc_8216F900;
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
loc_8216F900:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8216f90c
	if (ctx.cr6.eq) goto loc_8216F90C;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
loc_8216F90C:
	// slw r29,r25,r22
	ctx.r29.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r22.u8 & 0x3F));
	// slw r28,r25,r23
	ctx.r28.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r23.u8 & 0x3F));
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// slw r27,r25,r24
	ctx.r27.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r24.u8 & 0x3F));
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// rlwinm r26,r20,23,30,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 23) & 0x3;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8216efe0
	ctx.lr = 0x8216F948;
	sub_8216EFE0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// mullw r11,r11,r14
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r14.s32);
	// rlwinm r30,r11,29,3,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ble cr6,0x8216f964
	if (!ctx.cr6.gt) goto loc_8216F964;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// bgt cr6,0x8216f96c
	if (ctx.cr6.gt) goto loc_8216F96C;
loc_8216F964:
	// rlwinm. r11,r20,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8216f9cc
	if (!ctx.cr0.eq) goto loc_8216F9CC;
loc_8216F96C:
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x8216f9b8
	if (!ctx.cr6.gt) goto loc_8216F9B8;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// beq cr6,0x8216f998
	if (ctx.cr6.eq) goto loc_8216F998;
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r11,r11,r15
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// b 0x8216f9a8
	goto loc_8216F9A8;
loc_8216F998:
	// mullw r11,r30,r15
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r15.s32);
	// mullw r11,r11,r17
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r17.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_8216F9A8:
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8216F9B8:
	// addic. r18,r18,-1
	ctx.xer.ca = ctx.r18.u32 > 0;
	ctx.r18.s64 = ctx.r18.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// bge 0x8216f8e8
	if (!ctx.cr0.lt) goto loc_8216F8E8;
	// lwz r21,340(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// b 0x8216fa28
	goto loc_8216FA28;
loc_8216F9CC:
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// lwz r17,100(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mullw r8,r30,r17
	ctx.r8.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8216f480
	ctx.lr = 0x8216FA04;
	sub_8216F480(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r15,96(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r21,340(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r20,348(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// b 0x8216fa28
	goto loc_8216FA28;
loc_8216FA24:
	// lwz r30,128(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_8216FA28:
	// mullw r11,r30,r17
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r17.s32);
	// lwz r9,316(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r8,388(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r7,104(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,332(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// addi r10,r11,4095
	ctx.r10.s64 = ctx.r11.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// stw r30,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1024
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1024, ctx.xer);
	// beq cr6,0x8216fa70
	if (ctx.cr6.eq) goto loc_8216FA70;
	// mullw r11,r10,r15
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r15.s32);
	// stw r10,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
	// b 0x8216fa80
	goto loc_8216FA80;
loc_8216FA70:
	// mullw r10,r11,r15
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r15.s32);
	// stw r11,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4095
	ctx.r11.s64 = ctx.r10.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
loc_8216FA80:
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r9,372(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r7,380(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,124(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,356(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82180290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82180298;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,10941(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10941);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821802b8
	if (ctx.cr0.eq) goto loc_821802B8;
	// bl 0x8217fb58
	ctx.lr = 0x821802B0;
	sub_8217FB58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821803bc
	goto loc_821803BC;
loc_821802B8:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821802cc
	if (!ctx.cr6.eq) goto loc_821802CC;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x821802d4
	goto loc_821802D4;
loc_821802CC:
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821802D4:
	// lwz r3,13728(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 13728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821802fc
	if (ctx.cr6.eq) goto loc_821802FC;
	// lwz r10,172(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821802fc
	if (ctx.cr6.eq) goto loc_821802FC;
	// lwz r10,15124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 15124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821802fc
	if (ctx.cr6.gt) goto loc_821802FC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821802FC:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x82180320
	if (!ctx.cr0.eq) goto loc_82180320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217fbd0
	ctx.lr = 0x8218031C;
	sub_8217FBD0(ctx, base);
	// b 0x8218033c
	goto loc_8218033C;
loc_82180320:
	// lwz r11,152(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180338
	if (ctx.cr6.eq) goto loc_82180338;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181728
	ctx.lr = 0x82180334;
	sub_82181728(ctx, base);
	// b 0x8218033c
	goto loc_8218033C;
loc_82180338:
	// bl 0x82181998
	ctx.lr = 0x8218033C;
	sub_82181998(ctx, base);
loc_8218033C:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82180354
	if (!ctx.cr6.eq) goto loc_82180354;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217fb58
	ctx.lr = 0x82180350;
	sub_8217FB58(ctx, base);
	// b 0x82180388
	goto loc_82180388;
loc_82180354:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r30,15140(r31)
	REX_STORE_U32(ctx.r31.u32 + 15140, ctx.r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r29,15128(r31)
	REX_STORE_U32(ctx.r31.u32 + 15128, ctx.r29.u32);
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r29,15144(r31)
	REX_STORE_U32(ctx.r31.u32 + 15144, ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_82180388:
	// lwz r11,24200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24200);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821803b8
	if (!ctx.cr0.eq) goto loc_821803B8;
	// lwz r4,15152(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 15152);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821803b8
	if (ctx.cr6.eq) goto loc_821803B8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217fee8
	ctx.lr = 0x821803B4;
	sub_8217FEE8(ctx, base);
	// stw r29,15152(r31)
	REX_STORE_U32(ctx.r31.u32 + 15152, ctx.r29.u32);
loc_821803B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821803BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82183888) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82183890;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x821839d0
	if (ctx.cr6.eq) goto loc_821839D0;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r10,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821839d0
	if (!ctx.cr0.eq) goto loc_821839D0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821838d0
	if (ctx.cr6.eq) goto loc_821838D0;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821839d0
	if (!ctx.cr0.eq) goto loc_821839D0;
loc_821838D0:
	// rlwinm r26,r10,27,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82183914
	if (ctx.cr6.eq) goto loc_82183914;
	// lwz r11,20(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 20);
	// addi r28,r6,32
	ctx.r28.s64 = ctx.r6.s64 + 32;
	// clrlwi. r24,r11,27
	ctx.r24.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// rlwinm r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// beq 0x82183920
	if (ctx.cr0.eq) goto loc_82183920;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// b 0x82183920
	goto loc_82183920;
loc_82183914:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82183920:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218399c
	if (ctx.cr6.eq) goto loc_8218399C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_8218392C:
	// lbz r27,3(r28)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r28.u32 + 3);
	// b 0x82183958
	goto loc_82183958;
loc_82183934:
	// lbz r11,3(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82183960
	if (!ctx.cr6.lt) goto loc_82183960;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183700
	ctx.lr = 0x82183950;
	sub_82183700(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82183958:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82183934
	if (ctx.cr6.lt) goto loc_82183934;
loc_82183960:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82183988
	if (ctx.cr0.eq) goto loc_82183988;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821837d0
	ctx.lr = 0x82183988;
	sub_821837D0(ctx, base);
loc_82183988:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8218392c
	if (!ctx.cr0.eq) goto loc_8218392C;
loc_8218399C:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x821839c4
	if (!ctx.cr6.lt) goto loc_821839C4;
	// subf r29,r29,r26
	ctx.r29.u64 = ctx.r26.u64 - ctx.r29.u64;
loc_821839A8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82183700
	ctx.lr = 0x821839B8;
	sub_82183700(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821839a8
	if (!ctx.cr0.eq) goto loc_821839A8;
loc_821839C4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwimi r11,r24,20,8,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 20) & 0xF00000) | (ctx.r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_821839D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82187460) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82187468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1592);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82187634
	if (ctx.cr6.eq) goto loc_82187634;
	// rotlwi r31,r10,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82187634
	if (ctx.cr6.eq) goto loc_82187634;
	// ld r11,10880(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 10880);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82187634
	if (ctx.cr6.eq) goto loc_82187634;
	// cmplwi cr6,r3,224
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 224, ctx.xer);
	// bgt cr6,0x82187548
	if (ctx.cr6.gt) goto loc_82187548;
	// beq cr6,0x821875fc
	if (ctx.cr6.eq) goto loc_821875FC;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82187534
	if (ctx.cr6.lt) goto loc_82187534;
	// beq cr6,0x82187534
	if (ctx.cr6.eq) goto loc_82187534;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// beq cr6,0x82187508
	if (ctx.cr6.eq) goto loc_82187508;
	// cmplwi cr6,r3,17
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 17, ctx.xer);
	// beq cr6,0x821874d4
	if (ctx.cr6.eq) goto loc_821874D4;
	// cmplwi cr6,r3,34
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 34, ctx.xer);
	// bne cr6,0x82187634
	if (!ctx.cr6.eq) goto loc_82187634;
	// stw r4,23576(r31)
	REX_STORE_U32(ctx.r31.u32 + 23576, ctx.r4.u32);
	// b 0x82187634
	goto loc_82187634;
loc_821874D4:
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r8,r10,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,27016(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 27016);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,27016(r9)
	REX_STORE_U32(ctx.r9.u32 + 27016, ctx.r11.u32);
	// bne cr6,0x82187634
	if (!ctx.cr6.eq) goto loc_82187634;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,21848(r31)
	REX_STORE_U32(ctx.r31.u32 + 21848, ctx.r10.u32);
	// stw r11,21840(r31)
	REX_STORE_U32(ctx.r31.u32 + 21840, ctx.r11.u32);
	// stw r11,21844(r31)
	REX_STORE_U32(ctx.r31.u32 + 21844, ctx.r11.u32);
	// b 0x82187634
	goto loc_82187634;
loc_82187508:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r4.u8 & 0x3F));
	// lwz r11,27016(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 27016);
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// stw r11,27016(r10)
	REX_STORE_U32(ctx.r10.u32 + 27016, ctx.r11.u32);
	// bne cr6,0x82187634
	if (!ctx.cr6.eq) goto loc_82187634;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21848(r31)
	REX_STORE_U32(ctx.r31.u32 + 21848, ctx.r11.u32);
	// b 0x82187634
	goto loc_82187634;
loc_82187534:
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21848(r31)
	REX_STORE_U32(ctx.r31.u32 + 21848, ctx.r11.u32);
	// stw r11,27016(r10)
	REX_STORE_U32(ctx.r10.u32 + 27016, ctx.r11.u32);
	// b 0x82187634
	goto loc_82187634;
loc_82187548:
	// cmplwi cr6,r3,225
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 225, ctx.xer);
	// beq cr6,0x821875fc
	if (ctx.cr6.eq) goto loc_821875FC;
	// cmplwi cr6,r3,226
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 226, ctx.xer);
	// beq cr6,0x821875fc
	if (ctx.cr6.eq) goto loc_821875FC;
	// cmplwi cr6,r3,227
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 227, ctx.xer);
	// beq cr6,0x821875f0
	if (ctx.cr6.eq) goto loc_821875F0;
	// cmplwi cr6,r3,255
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 255, ctx.xer);
	// bne cr6,0x82187634
	if (!ctx.cr6.eq) goto loc_82187634;
	// lis r28,-32189
	ctx.r28.s64 = -2109538304;
	// lwz r11,27016(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 27016);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821875a8
	if (ctx.cr0.eq) goto loc_821875A8;
	// lwz r11,21792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21792);
	// lfs f13,21808(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 21808);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// lfs f0,6808(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 6808);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x8216b1a8
	ctx.lr = 0x821875A8;
	sub_8216B1A8(ctx, base);
loc_821875A8:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r29,17
	ctx.r29.s64 = 17;
	// addi r11,r11,-18328
	ctx.r11.s64 = ctx.r11.s64 + -18328;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
loc_821875B8:
	// lwz r11,-8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// lwz r10,27016(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 27016);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821875e0
	if (ctx.cr0.eq) goto loc_821875E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r27,-4(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x82186f78
	ctx.lr = 0x821875D8;
	sub_82186F78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216b1a8
	ctx.lr = 0x821875E0;
	sub_8216B1A8(ctx, base);
loc_821875E0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821875b8
	if (!ctx.cr0.eq) goto loc_821875B8;
	// b 0x82187634
	goto loc_82187634;
loc_821875F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186168
	ctx.lr = 0x821875F8;
	sub_82186168(ctx, base);
	// b 0x82187634
	goto loc_82187634;
loc_821875FC:
	// lwz r11,21748(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21748);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82187634
	if (ctx.cr6.eq) goto loc_82187634;
	// bl 0x8216b158
	ctx.lr = 0x8218760C;
	sub_8216B158(ctx, base);
	// lwz r11,10888(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10888);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82187634
	if (!ctx.cr6.eq) goto loc_82187634;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82187630
	if (!ctx.cr6.gt) goto loc_82187630;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181038
	ctx.lr = 0x82187630;
	sub_82181038(ctx, base);
loc_82187630:
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_82187634:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218DAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8218DAA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x8218d4e0
	ctx.lr = 0x8218DAC4;
	sub_8218D4E0(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r26,256
	ctx.r26.s64 = 16777216;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218DADC:
	// slw r11,r26,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r9.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218daec
	if (ctx.cr0.eq) goto loc_8218DAEC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8218DAEC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x8218dadc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DADC;
	// rlwinm r11,r27,0,2,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3F000000;
	// clrlwi. r9,r27,31
	ctx.r9.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lis r11,4
	ctx.r11.s64 = 262144;
	// bne 0x8218db0c
	if (!ctx.cr0.eq) goto loc_8218DB0C;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_8218DB0C:
	// li r8,6
	ctx.r8.s64 = 6;
	// divwu r11,r11,r10
	ctx.r11.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,11976(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 11976);
	// rlwinm r6,r11,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lis r9,32528
	ctx.r9.s64 = 2131755008;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r31,11344
	ctx.r11.s64 = ctx.r31.s64 + 11344;
loc_8218DB30:
	// slw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// and. r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8218db84
	if (ctx.cr0.eq) goto loc_8218DB84;
	// rotlwi r5,r9,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// stw r29,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r5,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r5.u32);
	// ori r8,r8,22528
	ctx.r8.u64 = ctx.r8.u64 | 22528;
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,-4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,-8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwimi r8,r5,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_8218DB84:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,108
	ctx.r11.s64 = ctx.r11.s64 + 108;
	// bdnz 0x8218db30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DB30;
	// lwz r9,11976(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 11976);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r10,r9,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// srawi r7,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r10.s32 >> 2;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// stw r29,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r29.u32);
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r9,r7,8
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// oris r10,r9,33024
	ctx.r10.u64 = ctx.r9.u64 | 2164260864;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821803c8
	ctx.lr = 0x8218DBD8;
	sub_821803C8(ctx, base);
	// addi r30,r31,11336
	ctx.r30.s64 = ctx.r31.s64 + 11336;
loc_8218DBDC:
	// slw r11,r26,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r29.u8 & 0x3F));
	// and. r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 & ctx.r27.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8218dc2c
	if (ctx.cr0.eq) goto loc_8218DC2C;
	// lwz r28,4(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r28,r11,0,0,29
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r28.u64 & 0xFFFFFFFF00000003);
	// bl 0x8217a508
	ctx.lr = 0x8218DC04;
	sub_8217A508(ctx, base);
loc_8218DC04:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217a618
	ctx.lr = 0x8218DC0C;
	sub_8217A618(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8218dc24
	if (ctx.cr0.eq) goto loc_8218DC24;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8218dc04
	if (!ctx.cr6.eq) goto loc_8218DC04;
loc_8218DC24:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8217a538
	ctx.lr = 0x8218DC2C;
	sub_8217A538(ctx, base);
loc_8218DC2C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// blt cr6,0x8218dbdc
	if (ctx.cr6.lt) goto loc_8218DBDC;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82196F10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x82196F18;
	__savegprlr_20(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82197054
	if (ctx.cr6.eq) goto loc_82197054;
	// lwz r27,348(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
loc_82196F50:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r10,r25,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r25.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r4,r30,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196F78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82196fc0
	if (!ctx.cr6.eq) goto loc_82196FC0;
	// lwz r11,340(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// beq cr6,0x82196fac
	if (ctx.cr6.eq) goto loc_82196FAC;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x82196fb4
	goto loc_82196FB4;
loc_82196FAC:
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
loc_82196FB4:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r30,r27
	REX_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r3.u32);
loc_82196FC0:
	// lwzx r7,r30,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82197024
	if (ctx.cr6.eq) goto loc_82197024;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82196fe4
	if (ctx.cr6.eq) goto loc_82196FE4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82197024
	if (!ctx.cr6.eq) goto loc_82197024;
loc_82196FE4:
	// lhz r10,6(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82197024
	if (ctx.cr6.eq) goto loc_82197024;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82196f10
	ctx.lr = 0x82197024;
	sub_82196F10(ctx, base);
loc_82197024:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82197038
	if (ctx.cr0.eq) goto loc_82197038;
	// lhz r11,6(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 6);
loc_82197038:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r11,r20,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r20.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x82196f50
	if (ctx.cr6.lt) goto loc_82196F50;
loc_82197054:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219DE60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr. r0,r5
	ctx.r0.u64 = ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// ble 0x8219dea4
	if (!ctx.cr0.gt) goto loc_8219DEA4;
	// lbz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r7,0(r4)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x8219de88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_8219DE88;
	// blr 
	return;
loc_8219DE88:
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lbzu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// lbzu r7,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r7.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmpwi cr1,r8,0
	ctx.cr1.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc. r3,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r3.u64 = ctx.r8.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bdnzf 4*cr1+eq,0x8219de88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && !ctx.cr1.eq) goto loc_8219DE88;
	// blr 
	return;
loc_8219DEA4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E230) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219E248) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r31,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// bne cr6,0x8219e280
	if (!ctx.cr6.eq) goto loc_8219E280;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219E280;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219E280:
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

DEFINE_REX_FUNC(sub_8219E5D0) {
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
	// b 0x8219e610
	goto loc_8219E610;
loc_8219E5EC:
	// lwz r30,24(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// bl 0x8219e5d0
	ctx.lr = 0x8219E608;
	sub_8219E5D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219e2a0
	ctx.lr = 0x8219E610;
	sub_8219E2A0(ctx, base);
loc_8219E610:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219e5ec
	if (!ctx.cr6.eq) goto loc_8219E5EC;
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

DEFINE_REX_FUNC(sub_8219F688) {
	REX_FUNC_PROLOGUE();
	// lwz r3,888(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 888);
	// b 0x8219f6e8
	goto loc_8219F6E8;
loc_8219F690:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8219f6a8
	if (!ctx.cr6.eq) goto loc_8219F6A8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x8219f6e4
	goto loc_8219F6E4;
loc_8219F6A8:
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219f6e4
	if (ctx.cr6.eq) goto loc_8219F6E4;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8219F6B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8219f6dc
	if (ctx.cr0.eq) goto loc_8219F6DC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8219f6b8
	if (ctx.cr6.eq) goto loc_8219F6B8;
loc_8219F6DC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
loc_8219F6E4:
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
loc_8219F6E8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8219f690
	if (!ctx.cr6.eq) goto loc_8219F690;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219FD28) {
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
	// bl 0x8219f688
	ctx.lr = 0x8219FD38;
	sub_8219F688(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219fd44
	if (ctx.cr0.eq) goto loc_8219FD44;
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
loc_8219FD44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219FEA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8219fef0
	if (ctx.cr6.lt) goto loc_8219FEF0;
	// beq cr6,0x8219fee0
	if (ctx.cr6.eq) goto loc_8219FEE0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8219fed8
	if (ctx.cr6.lt) goto loc_8219FED8;
	// beq cr6,0x8219fed0
	if (ctx.cr6.eq) goto loc_8219FED0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_8219FED0:
	// stfd f1,24(r10)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.f1.u64);
	// blr 
	return;
loc_8219FED8:
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// b 0x8219fee4
	goto loc_8219FEE4;
loc_8219FEE0:
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x80000000U) : (ctx.f1.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f1.f64));
loc_8219FEE4:
	// li r11,24
	ctx.r11.s64 = 24;
	// stfiwx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.f0.u32);
	// blr 
	return;
loc_8219FEF0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x8219ff08
	if (!ctx.cr6.eq) goto loc_8219FF08;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8219FF08:
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A09D8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x821A09E0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a0a40
	if (ctx.cr6.eq) goto loc_821A0A40;
	// not r10,r4
	ctx.r10.u64 = ~ctx.r4.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a0a40
	if (!ctx.cr6.eq) goto loc_821A0A40;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,876(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lwz r8,24(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,64(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a0a2c
	if (ctx.cr6.eq) goto loc_821A0A2C;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821a0a40
	if (ctx.cr6.eq) goto loc_821A0A40;
loc_821A0A2C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x821a0b2c
	if (ctx.cr6.eq) goto loc_821A0B2C;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// beq cr6,0x821a0a4c
	if (ctx.cr6.eq) goto loc_821A0A4C;
loc_821A0A40:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x821a0c04
	goto loc_821A0C04;
loc_821A0A4C:
	// lwz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r26,28(r10)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r25,24(r11)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// li r22,4
	ctx.r22.s64 = 4;
	// bgt cr6,0x821a0a74
	if (ctx.cr6.gt) goto loc_821A0A74;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_821A0A74:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r24,4
	ctx.r24.s64 = 4;
	// bgt cr6,0x821a0a84
	if (ctx.cr6.gt) goto loc_821A0A84;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
loc_821A0A84:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821a0af4
	if (ctx.cr6.eq) goto loc_821A0AF4;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_821A0A94:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821a0acc
	if (ctx.cr6.eq) goto loc_821A0ACC;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A0AA4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8219fea0
	ctx.lr = 0x821A0AB0;
	sub_8219FEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a0c04
	if (ctx.cr0.lt) goto loc_821A0C04;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821a0aa4
	if (ctx.cr6.lt) goto loc_821A0AA4;
loc_821A0ACC:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x821a0ae4
	if (!ctx.cr6.lt) goto loc_821A0AE4;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0ADC:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0adc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0ADC;
loc_821A0AE4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x821a0a94
	if (ctx.cr6.lt) goto loc_821A0A94;
loc_821A0AF4:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821a0b1c
	if (!ctx.cr6.lt) goto loc_821A0B1C;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
loc_821A0B00:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a0b14
	if (ctx.cr6.eq) goto loc_821A0B14;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_821A0B0C:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0b0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0B0C;
loc_821A0B14:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0b00
	if (!ctx.cr0.eq) goto loc_821A0B00;
loc_821A0B1C:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,64
	ctx.r23.s64 = ctx.r23.s64 + 64;
	// bne 0x821a0a84
	if (!ctx.cr0.eq) goto loc_821A0A84;
	// b 0x821a0c04
	goto loc_821A0C04;
loc_821A0B2C:
	// lwz r27,20(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r23,1
	ctx.r23.s64 = 1;
	// lwz r28,28(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lwz r26,24(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// li r22,4
	ctx.r22.s64 = 4;
	// bgt cr6,0x821a0b54
	if (ctx.cr6.gt) goto loc_821A0B54;
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
loc_821A0B54:
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// li r24,4
	ctx.r24.s64 = 4;
	// bgt cr6,0x821a0b64
	if (ctx.cr6.gt) goto loc_821A0B64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_821A0B64:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821a0bd0
	if (ctx.cr6.eq) goto loc_821A0BD0;
loc_821A0B70:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821a0bac
	if (ctx.cr6.eq) goto loc_821A0BAC;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_821A0B80:
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8219fea0
	ctx.lr = 0x821A0B94;
	sub_8219FEA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a0c04
	if (ctx.cr0.lt) goto loc_821A0C04;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821a0b80
	if (ctx.cr6.lt) goto loc_821A0B80;
loc_821A0BAC:
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x821a0bc4
	if (!ctx.cr6.lt) goto loc_821A0BC4;
	// subf r11,r31,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0BBC:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x821a0bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0BBC;
loc_821A0BC4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x821a0b70
	if (ctx.cr6.lt) goto loc_821A0B70;
loc_821A0BD0:
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x821a0bf8
	if (!ctx.cr6.lt) goto loc_821A0BF8;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
loc_821A0BDC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a0bf0
	if (ctx.cr6.eq) goto loc_821A0BF0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_821A0BE8:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bdnz 0x821a0be8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0BE8;
loc_821A0BF0:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0bdc
	if (!ctx.cr0.eq) goto loc_821A0BDC;
loc_821A0BF8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r25,r25,64
	ctx.r25.s64 = ctx.r25.s64 + 64;
	// bne 0x821a0b64
	if (!ctx.cr0.eq) goto loc_821A0B64;
loc_821A0C04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A5C88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x821A5C90;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r6,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r6.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// bl 0x821a9ee8
	ctx.lr = 0x821A5CB0;
	sub_821A9EE8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r27,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r11,r11,364
	ctx.r11.s64 = ctx.r11.s64 + 364;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r17,940(r27)
	REX_STORE_U32(ctx.r27.u32 + 940, ctx.r17.u32);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// ori r19,r31,256
	ctx.r19.u64 = ctx.r31.u64 | 256;
	// stw r10,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r10.u32);
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r17,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// beq cr6,0x821a5cf4
	if (ctx.cr6.eq) goto loc_821A5CF4;
	// stw r17,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r17.u32);
loc_821A5CF4:
	// lwz r11,844(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 844);
	// addi r15,r27,40
	ctx.r15.s64 = ctx.r27.s64 + 40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bne cr6,0x821a5d28
	if (!ctx.cr6.eq) goto loc_821A5D28;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1396
	ctx.r6.s64 = ctx.r11.s64 + 1396;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821afae0
	ctx.lr = 0x821A5D1C;
	sub_821AFAE0(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x821a6658
	goto loc_821A6658;
loc_821A5D28:
	// bl 0x821af900
	ctx.lr = 0x821A5D2C;
	sub_821AF900(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A5D40;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a5d70
	if (ctx.cr0.eq) goto loc_821A5D70;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r17,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r17.u32);
	// stw r17,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r17.u32);
	// stw r17,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r17.u32);
	// stw r17,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r17.u32);
	// stw r17,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r17.u32);
	// stw r17,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r17.u32);
	// stw r17,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r17.u32);
	// b 0x821a5d74
	goto loc_821A5D74;
loc_821A5D70:
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
loc_821A5D74:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x821a5d88
	if (!ctx.cr6.eq) goto loc_821A5D88;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x821a6658
	goto loc_821A6658;
loc_821A5D88:
	// lwz r30,892(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 892);
	// stw r17,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r17.u32);
	// b 0x821a5dec
	goto loc_821A5DEC;
loc_821A5D94:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a4358
	ctx.lr = 0x821A5DAC;
	sub_821A4358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r29,48(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x821a5de0
	goto loc_821A5DE0;
loc_821A5DBC:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a4358
	ctx.lr = 0x821A5DD4;
	sub_821A4358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r29,52(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
loc_821A5DE0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821a5dbc
	if (!ctx.cr6.eq) goto loc_821A5DBC;
	// lwz r30,52(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
loc_821A5DEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a5d94
	if (!ctx.cr6.eq) goto loc_821A5D94;
	// lwz r28,888(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 888);
	// b 0x821a5e84
	goto loc_821A5E84;
loc_821A5DFC:
	// stw r28,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// lwz r30,48(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// b 0x821a5e2c
	goto loc_821A5E2C;
loc_821A5E08:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a4358
	ctx.lr = 0x821A5E20;
	sub_821A4358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r30,52(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
loc_821A5E2C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a5e08
	if (!ctx.cr6.eq) goto loc_821A5E08;
	// lwz r29,44(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// b 0x821a5e78
	goto loc_821A5E78;
loc_821A5E3C:
	// stw r29,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// lwz r30,40(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// b 0x821a5e6c
	goto loc_821A5E6C;
loc_821A5E48:
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,108
	ctx.r6.s64 = ctx.r1.s64 + 108;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a4358
	ctx.lr = 0x821A5E60;
	sub_821A4358(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r30,52(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
loc_821A5E6C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a5e48
	if (!ctx.cr6.eq) goto loc_821A5E48;
	// lwz r29,44(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
loc_821A5E78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821a5e3c
	if (!ctx.cr6.eq) goto loc_821A5E3C;
	// lwz r28,52(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
loc_821A5E84:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r17,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r17.u32);
	// bne cr6,0x821a5dfc
	if (!ctx.cr6.eq) goto loc_821A5DFC;
	// lwz r26,900(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 900);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r17,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r17.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a6454
	if (ctx.cr6.eq) goto loc_821A6454;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lfd f31,12576(r7)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r7.u32 + 12576);
	// lis r21,2560
	ctx.r21.s64 = 167772160;
	// lis r20,2816
	ctx.r20.s64 = 184549376;
	// addi r22,r11,9925
	ctx.r22.s64 = ctx.r11.s64 + 9925;
	// addi r24,r10,1388
	ctx.r24.s64 = ctx.r10.s64 + 1388;
	// addi r23,r9,4620
	ctx.r23.s64 = ctx.r9.s64 + 4620;
	// addi r25,r8,-6912
	ctx.r25.s64 = ctx.r8.s64 + -6912;
loc_821A5ED4:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lwz r4,940(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// bl 0x821b10c8
	ctx.lr = 0x821A5EE0;
	sub_821B10C8(ctx, base);
	// stw r26,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// lwz r30,20(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x821a5efc
	if (ctx.cr6.eq) goto loc_821A5EFC;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bne cr6,0x821a5f1c
	if (!ctx.cr6.eq) goto loc_821A5F1C;
loc_821A5EFC:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x821a5f88
	if (ctx.cr6.eq) goto loc_821A5F88;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// beq cr6,0x821a5f88
	if (ctx.cr6.eq) goto loc_821A5F88;
loc_821A5F1C:
	// lwz r11,924(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 924);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r5,840(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 840);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821c6cc8
	ctx.lr = 0x821A5F48;
	sub_821C6CC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6770
	if (ctx.cr0.lt) goto loc_821A6770;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x821a62a0
	if (ctx.cr6.eq) goto loc_821A62A0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a62a0
	if (ctx.cr6.eq) goto loc_821A62A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A5F80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// b 0x821a62a0
	goto loc_821A62A0;
loc_821A5F88:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// b 0x821a5fa0
	goto loc_821A5FA0;
loc_821A5F90:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821a5fac
	if (!ctx.cr6.eq) goto loc_821A5FAC;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_821A5FA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x821a5f90
	if (ctx.cr6.eq) goto loc_821A5F90;
loc_821A5FAC:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a6728
	if (!ctx.cr6.eq) goto loc_821A6728;
	// lwz r28,8(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821a6754
	if (!ctx.cr6.eq) goto loc_821A6754;
	// lwz r6,36(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// b 0x821a5fe8
	goto loc_821A5FE8;
loc_821A5FD4:
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821a5ff0
	if (!ctx.cr6.eq) goto loc_821A5FF0;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_821A5FE8:
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// beq cr6,0x821a5fd4
	if (ctx.cr6.eq) goto loc_821A5FD4;
loc_821A5FF0:
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x821a60d8
	if (!ctx.cr6.eq) goto loc_821A60D8;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x821a6764
	if (ctx.cr6.lt) goto loc_821A6764;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x821a602c
	if (!ctx.cr6.gt) goto loc_821A602C;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bgt cr6,0x821a6764
	if (ctx.cr6.gt) goto loc_821A6764;
	// lfd f0,40(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 40);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fctidz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// b 0x821a6030
	goto loc_821A6030;
loc_821A602C:
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_821A6030:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821A6040;
	sub_821A4F40(ctx, base);
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A6048:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a6048
	if (!ctx.cr6.eq) goto loc_821A6048;
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_821A606C:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a606c
	if (!ctx.cr6.eq) goto loc_821A606C;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r30,r11,3
	ctx.r30.s64 = ctx.r11.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x821A609C;
	sub_8219E4F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,40(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A60BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821A60D0;
	sub_821A4F40(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x821a62a0
	goto loc_821A62A0;
loc_821A60D8:
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821a6794
	if (!ctx.cr6.eq) goto loc_821A6794;
	// lwz r11,924(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 924);
	// addi r4,r27,16
	ctx.r4.s64 = ctx.r27.s64 + 16;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// lwz r5,840(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 840);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x821c6cc8
	ctx.lr = 0x821A610C;
	sub_821C6CC8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6770
	if (ctx.cr0.lt) goto loc_821A6770;
	// lwz r11,40(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_821A611C:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821a611c
	if (!ctx.cr6.eq) goto loc_821A611C;
	// subf r9,r11,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_821A613C:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821a613c
	if (!ctx.cr6.eq) goto loc_821A613C;
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x821A6190;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x821A61A4;
	sub_8219E4F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A61C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8215ec60
	ctx.lr = 0x821A61D0;
	sub_8215EC60(ctx, base);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lwz r11,940(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a6200
	if (ctx.cr6.eq) goto loc_821A6200;
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r10,1(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,3(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,2(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 2);
	// stb r11,3(r31)
	REX_STORE_U8(ctx.r31.u32 + 3, ctx.r11.u8);
	// stb r10,2(r31)
	REX_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// stb r9,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// stb r8,1(r31)
	REX_STORE_U8(ctx.r31.u32 + 1, ctx.r8.u8);
loc_821A6200:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,40(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// addi r5,r29,-4
	ctx.r5.s64 = ctx.r29.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f358
	ctx.lr = 0x821A6214;
	sub_8215F358(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6228;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6244;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r31,r30
	ctx.r3.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8215e640
	ctx.lr = 0x821A6254;
	sub_8215E640(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6274
	if (ctx.cr6.eq) goto loc_821A6274;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
loc_821A6274:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6290
	if (ctx.cr6.eq) goto loc_821A6290;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6290;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A6290:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r28,2
	ctx.r28.s64 = 2;
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_821A62A0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r25,24
	ctx.r10.s64 = ctx.r25.s64 + 24;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x821a62c0
	if (ctx.cr6.eq) goto loc_821A62C0;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x821a633c
	if (!ctx.cr6.eq) goto loc_821A633C;
loc_821A62C0:
	// lwz r11,924(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 924);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a633c
	if (ctx.cr6.eq) goto loc_821A633C;
	// lwz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a633c
	if (ctx.cr6.eq) goto loc_821A633C;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8219f8b0
	ctx.lr = 0x821A62EC;
	sub_8219F8B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821a633c
	if (ctx.cr0.eq) goto loc_821A633C;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a6308
	if (ctx.cr6.eq) goto loc_821A6308;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a630c
	goto loc_821A630C;
loc_821A6308:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_821A630C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82254eb0
	ctx.lr = 0x821A6318;
	sub_82254EB0(ctx, base);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a632c
	if (ctx.cr6.eq) goto loc_821A632C;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x821a6330
	goto loc_821A6330;
loc_821A632C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_821A6330:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82254eb8
	ctx.lr = 0x821A633C;
	sub_82254EB8(ctx, base);
loc_821A633C:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A636C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r4,4(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A6380;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A6398;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,12(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A63B0;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A63C8;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A63E0;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A63F8;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2a40
	ctx.lr = 0x821A6414;
	sub_821A2A40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6788
	if (ctx.cr0.lt) goto loc_821A6788;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a6440
	if (ctx.cr6.eq) goto loc_821A6440;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A643C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
loc_821A6440:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821b3020
	ctx.lr = 0x821A6448;
	sub_821B3020(ctx, base);
	// lwz r26,24(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821a5ed4
	if (!ctx.cr6.eq) goto loc_821A5ED4;
loc_821A6454:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r17,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r17.u32);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_821A6460:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821a6460
	if (!ctx.cr6.eq) goto loc_821A6460;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
	// bl 0x8216b018
	ctx.lr = 0x821A648C;
	sub_8216B018(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// beq 0x821a6638
	if (ctx.cr0.eq) goto loc_821A6638;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r5,940(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// bl 0x8219e638
	ctx.lr = 0x821A64A4;
	sub_8219E638(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r11,864(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 864);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,872(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 872);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x8219e4f8
	ctx.lr = 0x821A64C8;
	sub_8219E4F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a6658
	if (ctx.cr0.lt) goto loc_821A6658;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A64E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r11,-8344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -8344);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,940(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a651c
	if (ctx.cr6.eq) goto loc_821A651C;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,1(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r9,3(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 3);
	// lbz r8,2(r3)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r3.u32 + 2);
	// stb r11,3(r3)
	REX_STORE_U8(ctx.r3.u32 + 3, ctx.r11.u8);
	// stb r10,2(r3)
	REX_STORE_U8(ctx.r3.u32 + 2, ctx.r10.u8);
	// stb r9,0(r3)
	REX_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// stb r8,1(r3)
	REX_STORE_U8(ctx.r3.u32 + 1, ctx.r8.u8);
loc_821A651C:
	// lbz r10,872(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 872);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stb r10,4(r3)
	REX_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// lbz r10,873(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 873);
	// stb r10,5(r3)
	REX_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// lbz r10,874(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 874);
	// stb r10,6(r3)
	REX_STORE_U8(ctx.r3.u32 + 6, ctx.r10.u8);
	// lbz r10,875(r27)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r27.u32 + 875);
	// stb r10,7(r3)
	REX_STORE_U8(ctx.r3.u32 + 7, ctx.r10.u8);
	// lwz r10,940(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821a656c
	if (ctx.cr6.eq) goto loc_821A656C;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r8,3(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r7,2(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// stb r10,3(r11)
	REX_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
	// stb r9,2(r11)
	REX_STORE_U8(ctx.r11.u32 + 2, ctx.r9.u8);
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stb r7,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r7.u8);
loc_821A656C:
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r5,872(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 872);
	// lwz r4,876(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 876);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821A6580;
	sub_8215E640(ctx, base);
	// lwz r11,872(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 872);
	// lwz r5,864(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 864);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,868(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 868);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821A6598;
	sub_8215E640(ctx, base);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,864(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 864);
	// stwux r11,r30,r10
	ea = ctx.r30.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lwz r11,940(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a65d0
	if (ctx.cr6.eq) goto loc_821A65D0;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r9,3(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r8,2(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// stb r11,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// stb r10,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stb r9,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// stb r8,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
loc_821A65D0:
	// stwu r16,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r16.u32);
	ctx.r30.u32 = ea;
	// lwz r11,940(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a6600
	if (ctx.cr6.eq) goto loc_821A6600;
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// lbz r10,1(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// lbz r9,3(r30)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// lbz r8,2(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// stb r11,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r11.u8);
	// stb r10,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r10.u8);
	// stb r9,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r9.u8);
	// stb r8,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
loc_821A6600:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x821A6610;
	sub_8215E640(ctx, base);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821a6630
	if (ctx.cr6.eq) goto loc_821A6630;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r3,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6630;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821A6630:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x821a6658
	if (ctx.cr6.lt) goto loc_821A6658;
loc_821A6638:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8210fda0
	ctx.lr = 0x821A6640;
	sub_8210FDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a6650
	if (ctx.cr0.eq) goto loc_821A6650;
	// lis r31,-30602
	ctx.r31.s64 = -2005532672;
	// ori r31,r31,2905
	ctx.r31.u64 = ctx.r31.u64 | 2905;
loc_821A6650:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x821a6670
	if (!ctx.cr6.lt) goto loc_821A6670;
loc_821A6658:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1348
	ctx.r6.s64 = ctx.r11.s64 + 1348;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821afae0
	ctx.lr = 0x821A6670;
	sub_821AFAE0(ctx, base);
loc_821A6670:
	// lwz r4,588(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 588);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a6684
	if (ctx.cr6.eq) goto loc_821A6684;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821aeeb8
	ctx.lr = 0x821A6684;
	sub_821AEEB8(ctx, base);
loc_821A6684:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// bl 0x8216b138
	ctx.lr = 0x821A6690;
	sub_8216B138(ctx, base);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821a66ac
	if (ctx.cr6.eq) goto loc_821A66AC;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A66A0;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A66AC;
	sub_8216B138(ctx, base);
loc_821A66AC:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a66cc
	if (ctx.cr6.eq) goto loc_821A66CC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A66C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
loc_821A66CC:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a66ec
	if (ctx.cr6.eq) goto loc_821A66EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A66E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
loc_821A66EC:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821a670c
	if (ctx.cr6.eq) goto loc_821A670C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821A6708;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r17,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r17.u32);
loc_821A670C:
	// stw r17,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r17.u32);
	// addi r3,r27,16
	ctx.r3.s64 = ctx.r27.s64 + 16;
	// bl 0x821a9f40
	ctx.lr = 0x821A6718;
	sub_821A9F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_821A6728:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r6,r11,1280
	ctx.r6.s64 = ctx.r11.s64 + 1280;
loc_821A6734:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821afae0
	ctx.lr = 0x821A6740;
	sub_821AFAE0(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// bl 0x821b3020
	ctx.lr = 0x821A6750;
	sub_821B3020(ctx, base);
	// b 0x821a6658
	goto loc_821A6658;
loc_821A6754:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,1184
	ctx.r6.s64 = ctx.r11.s64 + 1184;
loc_821A675C:
	// addi r4,r28,32
	ctx.r4.s64 = ctx.r28.s64 + 32;
	// b 0x821a6734
	goto loc_821A6734;
loc_821A6764:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,1104
	ctx.r6.s64 = ctx.r11.s64 + 1104;
	// b 0x821a675c
	goto loc_821A675C;
loc_821A6770:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1024
	ctx.r6.s64 = ctx.r11.s64 + 1024;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x821afae0
	ctx.lr = 0x821A6788;
	sub_821AFAE0(ctx, base);
loc_821A6788:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821b3020
	ctx.lr = 0x821A6790;
	sub_821B3020(ctx, base);
	// b 0x821a6630
	goto loc_821A6630;
loc_821A6794:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,928
	ctx.r6.s64 = ctx.r11.s64 + 928;
	// b 0x821a675c
	goto loc_821A675C;
}

DEFINE_REX_FUNC(sub_821CD110) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821CD118;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821cd1ec
	if (ctx.cr6.eq) goto loc_821CD1EC;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cd1ac
	if (ctx.cr6.eq) goto loc_821CD1AC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cd1a4
	if (ctx.cr6.eq) goto loc_821CD1A4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821cd19c
	if (ctx.cr6.eq) goto loc_821CD19C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821cd17c
	if (ctx.cr6.eq) goto loc_821CD17C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x821cd174
	if (ctx.cr6.eq) goto loc_821CD174;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11092
	ctx.r6.s64 = ctx.r11.s64 + 11092;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821cc960
	ctx.lr = 0x821CD170;
	sub_821CC960(ctx, base);
	// b 0x821cd1ec
	goto loc_821CD1EC;
loc_821CD174:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x821cd1e4
	goto loc_821CD1E4;
loc_821CD17C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x821cd190
	if (ctx.cr6.eq) goto loc_821CD190;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// b 0x821cd194
	goto loc_821CD194;
loc_821CD190:
	// rlwinm r11,r11,0,23,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
loc_821CD194:
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x821cd1ec
	goto loc_821CD1EC;
loc_821CD19C:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x821cd1e0
	goto loc_821CD1E0;
loc_821CD1A4:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x821cd1e0
	goto loc_821CD1E0;
loc_821CD1AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821cd1d4
	if (!ctx.cr6.eq) goto loc_821CD1D4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821cd110
	ctx.lr = 0x821CD1C8;
	sub_821CD110(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821cd1ac
	if (!ctx.cr6.eq) goto loc_821CD1AC;
loc_821CD1D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821cd1ec
	if (ctx.cr6.eq) goto loc_821CD1EC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_821CD1E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821CD1E4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x821cd110
	ctx.lr = 0x821CD1EC;
	sub_821CD110(ctx, base);
loc_821CD1EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D2A50) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821d28b0
	ctx.lr = 0x821D2A70;
	sub_821D28B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2ad4
	if (ctx.cr0.eq) goto loc_821D2AD4;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d2ad4
	if (ctx.cr6.eq) goto loc_821D2AD4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821d2ad4
	if (!ctx.cr6.eq) goto loc_821D2AD4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821d2ad4
	if (!ctx.cr6.eq) goto loc_821D2AD4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821d2ad4
	if (!ctx.cr6.eq) goto loc_821D2AD4;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r6,r3,48
	ctx.r6.s64 = ctx.r3.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// bl 0x821cbf88
	ctx.lr = 0x821D2AC4;
	sub_821CBF88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821d2adc
	if (ctx.cr0.lt) goto loc_821D2ADC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d2adc
	goto loc_821D2ADC;
loc_821D2AD4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821D2ADC:
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

DEFINE_REX_FUNC(sub_821D4538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x821D4540;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d4570
	if (ctx.cr6.eq) goto loc_821D4570;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x821d4570
	if (ctx.cr6.eq) goto loc_821D4570;
loc_821D4568:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d4b38
	goto loc_821D4B38;
loc_821D4570:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x821d4584
	if (ctx.cr6.eq) goto loc_821D4584;
	// lwz r11,4(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d4568
	if (!ctx.cr6.eq) goto loc_821D4568;
loc_821D4584:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821d4598
	if (ctx.cr6.eq) goto loc_821D4598;
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d4568
	if (!ctx.cr6.eq) goto loc_821D4568;
loc_821D4598:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// addi r22,r23,48
	ctx.r22.s64 = ctx.r23.s64 + 48;
	// bne cr6,0x821d45ac
	if (!ctx.cr6.eq) goto loc_821D45AC;
	// addi r22,r21,40
	ctx.r22.s64 = ctx.r21.s64 + 40;
	// beq cr6,0x821d45b4
	if (ctx.cr6.eq) goto loc_821D45B4;
loc_821D45AC:
	// lwz r25,16(r23)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// b 0x821d45b8
	goto loc_821D45B8;
loc_821D45B4:
	// li r25,0
	ctx.r25.s64 = 0;
loc_821D45B8:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x821d45c8
	if (ctx.cr6.eq) goto loc_821D45C8;
	// lwz r20,16(r17)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r17.u32 + 16);
	// b 0x821d45cc
	goto loc_821D45CC;
loc_821D45C8:
	// li r20,0
	ctx.r20.s64 = 0;
loc_821D45CC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821d45dc
	if (ctx.cr6.eq) goto loc_821D45DC;
	// lwz r19,16(r16)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r16.u32 + 16);
	// b 0x821d45e0
	goto loc_821D45E0;
loc_821D45DC:
	// li r19,0
	ctx.r19.s64 = 0;
loc_821D45E0:
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r20,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// stw r19,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x821c7078
	ctx.lr = 0x821D45F4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4620
	if (ctx.cr0.eq) goto loc_821D4620;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,30
	ctx.r5.s64 = 30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9de8
	ctx.lr = 0x821D4618;
	sub_821C9DE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x821d4624
	goto loc_821D4624;
loc_821D4620:
	// li r18,0
	ctx.r18.s64 = 0;
loc_821D4624:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821cd2c8
	ctx.lr = 0x821D4638;
	sub_821CD2C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bne 0x821d4650
	if (!ctx.cr0.eq) goto loc_821D4650;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-28128
	ctx.r6.s64 = ctx.r11.s64 + -28128;
	// b 0x821d48a4
	goto loc_821D48A4;
loc_821D4650:
	// addi r28,r18,16
	ctx.r28.s64 = ctx.r18.s64 + 16;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// bl 0x821d0b90
	ctx.lr = 0x821D466C;
	sub_821D0B90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d4680
	if (!ctx.cr0.lt) goto loc_821D4680;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-28172
	ctx.r6.s64 = ctx.r11.s64 + -28172;
	// b 0x821d48a0
	goto loc_821D48A0;
loc_821D4680:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r30,116(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// beq cr6,0x821d47f8
	if (ctx.cr6.eq) goto loc_821D47F8;
	// lwz r11,4(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d47f8
	if (!ctx.cr6.eq) goto loc_821D47F8;
	// lwz r31,28(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,32(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// beq cr6,0x821d4728
	if (ctx.cr6.eq) goto loc_821D4728;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4728
	if (!ctx.cr6.eq) goto loc_821D4728;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821d46d8
	if (ctx.cr6.lt) goto loc_821D46D8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d4728
	if (!ctx.cr6.lt) goto loc_821D4728;
loc_821D46D8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D46E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821d46fc
	if (!ctx.cr6.lt) goto loc_821D46FC;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
loc_821D46FC:
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d470c
	if (!ctx.cr6.lt) goto loc_821D470C;
	// stw r29,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r29.u32);
loc_821D470C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d0310
	ctx.lr = 0x821D4720;
	sub_821D0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d4898
	if (ctx.cr0.eq) goto loc_821D4898;
loc_821D4728:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d47a8
	if (ctx.cr6.eq) goto loc_821D47A8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d47a8
	if (!ctx.cr6.eq) goto loc_821D47A8;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821d4754
	if (ctx.cr6.lt) goto loc_821D4754;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d47a8
	if (!ctx.cr6.lt) goto loc_821D47A8;
loc_821D4754:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4768;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821d477c
	if (!ctx.cr6.lt) goto loc_821D477C;
	// stw r31,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
loc_821D477C:
	// lwz r11,32(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d478c
	if (!ctx.cr6.lt) goto loc_821D478C;
	// stw r29,32(r24)
	REX_STORE_U32(ctx.r24.u32 + 32, ctx.r29.u32);
loc_821D478C:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d0310
	ctx.lr = 0x821D47A0;
	sub_821D0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821d4898
	if (ctx.cr0.eq) goto loc_821D4898;
loc_821D47A8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d47f8
	if (ctx.cr6.eq) goto loc_821D47F8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821d47f8
	if (!ctx.cr6.eq) goto loc_821D47F8;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821d47e0
	if (ctx.cr6.lt) goto loc_821D47E0;
	// lwz r9,32(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d47f8
	if (!ctx.cr6.lt) goto loc_821D47F8;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x821d47e4
	if (!ctx.cr6.lt) goto loc_821D47E4;
loc_821D47E0:
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
loc_821D47E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821d47f8
	if (!ctx.cr6.lt) goto loc_821D47F8;
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
loc_821D47F8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d48b8
	if (ctx.cr6.eq) goto loc_821D48B8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,40
	ctx.r3.s64 = 40;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4830
	if (!ctx.cr6.eq) goto loc_821D4830;
	// bl 0x821c7078
	ctx.lr = 0x821D4818;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4870
	if (ctx.cr0.eq) goto loc_821D4870;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x821d4854
	goto loc_821D4854;
loc_821D4830:
	// bl 0x821c7078
	ctx.lr = 0x821D4834;
	sub_821C7078(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821d4870
	if (ctx.cr0.eq) goto loc_821D4870;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x821cd398
	ctx.lr = 0x821D4848;
	sub_821CD398(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D4854:
	// li r9,512
	ctx.r9.s64 = 512;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x821c8ae8
	ctx.lr = 0x821D4868;
	sub_821C8AE8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x821d4874
	goto loc_821D4874;
loc_821D4870:
	// li r27,0
	ctx.r27.s64 = 0;
loc_821D4874:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d0310
	ctx.lr = 0x821D4890;
	sub_821D0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d48b8
	if (!ctx.cr0.eq) goto loc_821D48B8;
loc_821D4898:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,-28220
	ctx.r6.s64 = ctx.r11.s64 + -28220;
loc_821D48A0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
loc_821D48A4:
	// li r5,3020
	ctx.r5.s64 = 3020;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D48B0;
	sub_821CC878(ctx, base);
loc_821D48B0:
	// li r18,0
	ctx.r18.s64 = 0;
	// b 0x821d4b34
	goto loc_821D4B34;
loc_821D48B8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821d48e4
	if (ctx.cr6.eq) goto loc_821D48E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d4220
	ctx.lr = 0x821D48D8;
	sub_821D4220(ctx, base);
	// stw r3,32(r18)
	REX_STORE_U32(ctx.r18.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d48b0
	if (ctx.cr0.eq) goto loc_821D48B0;
loc_821D48E4:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D48EC;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4918
	if (ctx.cr0.eq) goto loc_821D4918;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
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
	ctx.lr = 0x821D4910;
	sub_821C9DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d491c
	goto loc_821D491C;
loc_821D4918:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D491C:
	// stw r31,36(r18)
	REX_STORE_U32(ctx.r18.u32 + 36, ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D4930;
	sub_821C7078(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-29400
	ctx.r29.s64 = ctx.r11.s64 + -29400;
	// beq 0x821d4954
	if (ctx.cr0.eq) goto loc_821D4954;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D4950;
	sub_821C7240(ctx, base);
	// b 0x821d4958
	goto loc_821D4958;
loc_821D4954:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4958:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821d4990
	if (ctx.cr6.eq) goto loc_821D4990;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4980;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821d48b0
	if (ctx.cr0.eq) goto loc_821D48B0;
loc_821D4990:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D4998;
	sub_821C7078(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-29408
	ctx.r30.s64 = ctx.r11.s64 + -29408;
	// beq 0x821d49bc
	if (ctx.cr0.eq) goto loc_821D49BC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D49B8;
	sub_821C7240(ctx, base);
	// b 0x821d49c0
	goto loc_821D49C0;
loc_821D49BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D49C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x821d4a28
	if (ctx.cr6.eq) goto loc_821D4A28;
	// cmplw cr6,r20,r26
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x821d4a10
	if (ctx.cr6.eq) goto loc_821D4A10;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821cb318
	ctx.lr = 0x821D49EC;
	sub_821CB318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d4a10
	if (!ctx.cr0.eq) goto loc_821D4A10;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d4220
	ctx.lr = 0x821D4A0C;
	sub_821D4220(ctx, base);
	// b 0x821d4a18
	goto loc_821D4A18;
loc_821D4A10:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D4A18;
	sub_821C71B8(ctx, base);
loc_821D4A18:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821d48b0
	if (ctx.cr0.eq) goto loc_821D48B0;
loc_821D4A28:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D4A30;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4a4c
	if (ctx.cr0.eq) goto loc_821D4A4C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D4A48;
	sub_821C7240(ctx, base);
	// b 0x821d4a50
	goto loc_821D4A50;
loc_821D4A4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4A50:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x821d4a90
	if (ctx.cr6.eq) goto loc_821D4A90;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821d48b0
	if (ctx.cr0.eq) goto loc_821D48B0;
loc_821D4A90:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D4A98;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4ab4
	if (ctx.cr0.eq) goto loc_821D4AB4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D4AB0;
	sub_821C7240(ctx, base);
	// b 0x821d4ab8
	goto loc_821D4AB8;
loc_821D4AB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4AB8:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// beq cr6,0x821d48b0
	if (ctx.cr6.eq) goto loc_821D48B0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821d4b1c
	if (ctx.cr6.eq) goto loc_821D4B1C;
	// cmplw cr6,r19,r24
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821d4b40
	if (ctx.cr6.eq) goto loc_821D4B40;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821cb318
	ctx.lr = 0x821D4AE8;
	sub_821CB318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821d4b40
	if (!ctx.cr0.eq) goto loc_821D4B40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821d4220
	ctx.lr = 0x821D4B08;
	sub_821D4220(ctx, base);
loc_821D4B08:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821d48b0
	if (ctx.cr0.eq) goto loc_821D48B0;
loc_821D4B1C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D4B28;
	sub_821CEFE0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D4B34;
	sub_821CEFE0(ctx, base);
loc_821D4B34:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
loc_821D4B38:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
loc_821D4B40:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D4B48;
	sub_821C71B8(ctx, base);
	// b 0x821d4b08
	goto loc_821D4B08;
}

DEFINE_REX_FUNC(sub_821E97E8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821e9818
	if (!ctx.cr6.eq) goto loc_821E9818;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x821e98c8
	goto loc_821E98C8;
loc_821E9818:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821e982c
	if (ctx.cr6.eq) goto loc_821E982C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821e98c8
	goto loc_821E98C8;
loc_821E982C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x820e9020
	ctx.lr = 0x821E9848;
	sub_820E9020(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821e98b4
	if (ctx.cr6.eq) goto loc_821E98B4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8216ac00
	ctx.lr = 0x821E985C;
	sub_8216AC00(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x821e98b4
	if (ctx.cr6.eq) goto loc_821E98B4;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e988c
	if (ctx.cr6.eq) goto loc_821E988C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x8216b018
	ctx.lr = 0x821E987C;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x821e98b4
	if (ctx.cr0.eq) goto loc_821E98B4;
	// b 0x821e9890
	goto loc_821E9890;
loc_821E988C:
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_821E9890:
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8216a958
	ctx.lr = 0x821E98AC;
	sub_8216A958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821e98c4
	if (!ctx.cr0.eq) goto loc_821E98C4;
loc_821E98B4:
	// bl 0x820e9010
	ctx.lr = 0x821E98B8;
	sub_820E9010(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x821e98c8
	goto loc_821E98C8;
loc_821E98C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E98C8:
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

DEFINE_REX_FUNC(sub_821EA858) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,380(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 380);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EA878) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821EA880;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8220d058
	ctx.lr = 0x821EA894;
	sub_8220D058(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ea8bc
	if (ctx.cr0.lt) goto loc_821EA8BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,104(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EA8BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821EA8BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EACF0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 588);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EAD08) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 592);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EAF40) {
	REX_FUNC_PROLOGUE();
	// b 0x82358a90
	sub_82358A90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EB088) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821eb0bc
	if (ctx.cr6.eq) goto loc_821EB0BC;
loc_821EB09C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821eb0b4
	if (ctx.cr0.eq) goto loc_821EB0B4;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821eb09c
	if (!ctx.cr0.eq) goto loc_821EB09C;
loc_821EB0B4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821eb0c8
	if (!ctx.cr6.eq) goto loc_821EB0C8;
loc_821EB0BC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_821EB0C8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r11,r4,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821EB2A0) {
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
	// li r4,2048
	ctx.r4.s64 = 2048;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8211fe78
	ctx.lr = 0x821EB2F0;
	sub_8211FE78(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r9,2143(r1)
	REX_STORE_U8(ctx.r1.u32 + 2143, ctx.r9.u8);
loc_821EB300:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821eb300
	if (!ctx.cr6.eq) goto loc_821EB300;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821eb130
	ctx.lr = 0x821EB328;
	sub_821EB130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eb358
	if (ctx.cr0.lt) goto loc_821EB358;
	// lwz r11,1532(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1532);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,1536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8215e640
	ctx.lr = 0x821EB348;
	sub_8215E640(ctx, base);
	// lwz r11,1536(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1536);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,1536(r31)
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r11.u32);
loc_821EB358:
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

DEFINE_REX_FUNC(sub_821EC690) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r30,r11,-6408
	ctx.r30.s64 = ctx.r11.s64 + -6408;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,568(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 568);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EC6CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ec744
	if (ctx.cr0.lt) goto loc_821EC744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EC6DC;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ec744
	if (ctx.cr0.lt) goto loc_821EC744;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6392
	ctx.r4.s64 = ctx.r11.s64 + -6392;
	// bl 0x821eb2a0
	ctx.lr = 0x821EC6F4;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ec744
	if (ctx.cr0.lt) goto loc_821EC744;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r10,-7500
	ctx.r4.s64 = ctx.r10.s64 + -7500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,460(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EC71C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ec744
	if (ctx.cr0.lt) goto loc_821EC744;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6460
	ctx.r4.s64 = ctx.r11.s64 + -6460;
	// bl 0x821eb2a0
	ctx.lr = 0x821EC734;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ec744
	if (ctx.cr0.lt) goto loc_821EC744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207d00
	ctx.lr = 0x821EC744;
	sub_82207D00(ctx, base);
loc_821EC744:
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

DEFINE_REX_FUNC(sub_821EE6B0) {
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
	// addi r4,r10,-5308
	ctx.r4.s64 = ctx.r10.s64 + -5308;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE6D4;
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

DEFINE_REX_FUNC(sub_821EFD88) {
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
	// addi r4,r10,-4628
	ctx.r4.s64 = ctx.r10.s64 + -4628;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFDAC;
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

DEFINE_REX_FUNC(sub_821EFFC8) {
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
	// addi r4,r10,-4340
	ctx.r4.s64 = ctx.r10.s64 + -4340;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFFEC;
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

DEFINE_REX_FUNC(sub_821F0270) {
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
	// addi r4,r10,-4068
	ctx.r4.s64 = ctx.r10.s64 + -4068;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0294;
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

DEFINE_REX_FUNC(sub_821F0D38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821F0D40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1676(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1676);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f0d5c
	if (!ctx.cr6.eq) goto loc_821F0D5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f0f0c
	goto loc_821F0F0C;
loc_821F0D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0D64;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2872
	ctx.r4.s64 = ctx.r11.s64 + -2872;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0D7C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0D8C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,-12520
	ctx.r30.s64 = ctx.r11.s64 + -12520;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0DA8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x821eb370
	ctx.lr = 0x821F0DC4;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-2944
	ctx.r4.s64 = ctx.r11.s64 + -2944;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0DDC;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0DEC;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0E00;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,1676(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// ble cr6,0x821f0ea4
	if (!ctx.cr6.gt) goto loc_821F0EA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r30,r31,1548
	ctx.r30.s64 = ctx.r31.s64 + 1548;
	// addi r29,r11,-3032
	ctx.r29.s64 = ctx.r11.s64 + -3032;
	// addi r28,r10,-3096
	ctx.r28.s64 = ctx.r10.s64 + -3096;
loc_821F0E38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0E40;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821eb2a0
	ctx.lr = 0x821F0E5C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0E6C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x821eb2a0
	ctx.lr = 0x821F0E88;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lwz r11,1676(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1676);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f0e38
	if (ctx.cr6.lt) goto loc_821F0E38;
loc_821F0EA4:
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x821eb370
	ctx.lr = 0x821F0EB8;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12516
	ctx.r4.s64 = ctx.r11.s64 + -12516;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0ED0;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
	// bl 0x821eb370
	ctx.lr = 0x821F0EEC;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0f0c
	if (ctx.cr0.lt) goto loc_821F0F0C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-10564
	ctx.r4.s64 = ctx.r11.s64 + -10564;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0F04;
	sub_821EB2A0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_821F0F0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F7198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821F71A0;
	__savegprlr_22(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// cntlzw r10,r25
	ctx.r10.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r11,-152
	ctx.r31.s64 = ctx.r11.s64 + -152;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r7,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// clrlwi r28,r9,12
	ctx.r28.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r24,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r31,-128
	ctx.r5.s64 = ctx.r31.s64 + -128;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F721C;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821f7258
	if (ctx.cr0.eq) goto loc_821F7258;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// bl 0x821f4ea8
	ctx.lr = 0x821F7250;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821f73c0
	if (!ctx.cr0.eq) goto loc_821F73C0;
loc_821F7258:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfd f0,5824(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 5824);
loc_821F7264:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_821F7268:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821f7380
	if (ctx.cr6.eq) goto loc_821F7380;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
loc_821F727C:
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r6,r9,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821f7380
	if (!ctx.cr6.eq) goto loc_821F7380;
	// lwz r9,8(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821f7380
	if (!ctx.cr6.eq) goto loc_821F7380;
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821f7380
	if (!ctx.cr6.eq) goto loc_821F7380;
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r31,r31,0,23,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821f7380
	if (ctx.cr0.eq) goto loc_821F7380;
	// lwz r31,4(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r31,r31,0,23,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821f7380
	if (ctx.cr0.eq) goto loc_821F7380;
	// lwz r31,4(r7)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821f7380
	if (ctx.cr0.eq) goto loc_821F7380;
	// lfd f12,32(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r10.u32 + 32);
	// lfd f13,32(r6)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r6.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// lfd f12,32(r7)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r7.u32 + 32);
	// fsub f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 - ctx.f12.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x821f7380
	if (ctx.cr6.gt) goto loc_821F7380;
	// subf r10,r3,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r9,r4,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r9,r9,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f7380
	if (!ctx.cr6.eq) goto loc_821F7380;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821f727c
	if (ctx.cr6.lt) goto loc_821F727C;
loc_821F7380:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x821f73c8
	if (ctx.cr6.eq) goto loc_821F73C8;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r4,8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8, ctx.xer);
	// blt cr6,0x821f7268
	if (ctx.cr6.lt) goto loc_821F7268;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x821f7264
	if (ctx.cr6.lt) goto loc_821F7264;
loc_821F73A0:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821F73A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821f73bc
	if (ctx.cr6.eq) goto loc_821F73BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82113c30
	ctx.lr = 0x821F73B4;
	sub_82113C30(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F73BC;
	sub_8220DDF0(ctx, base);
loc_821F73BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821F73C0:
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_821F73C8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F73D0;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f73e4
	if (ctx.cr0.eq) goto loc_821F73E4;
	// bl 0x8220d6a0
	ctx.lr = 0x821F73DC;
	sub_8220D6A0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x821f73e8
	goto loc_821F73E8;
loc_821F73E4:
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
loc_821F73E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821f73fc
	if (!ctx.cr6.eq) goto loc_821F73FC;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x821f73bc
	goto loc_821F73BC;
loc_821F73FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x821f741c
	if (ctx.cr6.eq) goto loc_821F741C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x821f73a0
	if (!ctx.cr6.eq) goto loc_821F73A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,451
	ctx.r11.s64 = 451;
	// rlwimi r4,r11,22,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821f7428
	goto loc_821F7428;
loc_821F741C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r11,1803
	ctx.r11.s64 = 1803;
	// rlwimi r4,r11,20,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
loc_821F7428:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8220de30
	ctx.lr = 0x821F743C;
	sub_8220DE30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821f73a4
	if (ctx.cr0.lt) goto loc_821F73A4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821F7450;
	sub_8220D6F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821f73a4
	if (ctx.cr0.lt) goto loc_821F73A4;
	// lwz r11,260(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r31,r28,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x821F7470;
	sub_8215E640(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8215e640
	ctx.lr = 0x821F7480;
	sub_8215E640(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// beq cr6,0x821f74a4
	if (ctx.cr6.eq) goto loc_821F74A4;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x821f74b4
	goto loc_821F74B4;
loc_821F74A4:
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821F74B4:
	// bl 0x8215e640
	ctx.lr = 0x821F74B8;
	sub_8215E640(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r8,r7,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821f7508
	if (!ctx.cr6.eq) goto loc_821F7508;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821f73a0
	if (ctx.cr6.eq) goto loc_821F73A0;
loc_821F7508:
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821f7524
	if (!ctx.cr6.eq) goto loc_821F7524;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821f73a0
	if (ctx.cr6.eq) goto loc_821F73A0;
loc_821F7524:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821f7558
	if (ctx.cr6.eq) goto loc_821F7558;
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r27,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f7550
	if (ctx.cr6.eq) goto loc_821F7550;
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215eac8
	ctx.lr = 0x821F7550;
	sub_8215EAC8(ctx, base);
loc_821F7550:
	// stw r31,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r31.u32);
	// b 0x821f7570
	goto loc_821F7570;
loc_821F7558:
	// lwz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 256);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8220e150
	ctx.lr = 0x821F7570;
	sub_8220E150(ctx, base);
loc_821F7570:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x821f73a4
	goto loc_821F73A4;
}

DEFINE_REX_FUNC(sub_82202C70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82202C78;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// beq cr6,0x82202cd0
	if (ctx.cr6.eq) goto loc_82202CD0;
	// lwz r10,340(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 340);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82202CB8:
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82202cc8
	if (!ctx.cr6.eq) goto loc_82202CC8;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82202CC8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82202cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82202CB8;
loc_82202CD0:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82202ce4
	if (!ctx.cr6.gt) goto loc_82202CE4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82202e60
	if (ctx.cr6.eq) goto loc_82202E60;
loc_82202CE4:
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r29,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// addi r10,r31,320
	ctx.r10.s64 = ctx.r31.s64 + 320;
	// stw r29,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r29.u32);
	// stw r29,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r29.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x82202D10;
	sub_8216B018(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82202fa8
	if (ctx.cr0.eq) goto loc_82202FA8;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,255
	ctx.r4.s64 = 255;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x82202D2C;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82202dcc
	if (!ctx.cr6.gt) goto loc_82202DCC;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82202D40:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,136(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82202db8
	if (!ctx.cr6.eq) goto loc_82202DB8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82202db8
	if (!ctx.cr6.eq) goto loc_82202DB8;
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82202db8
	if (!ctx.cr6.lt) goto loc_82202DB8;
	// lwz r7,72(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82202d94
	if (!ctx.cr6.lt) goto loc_82202D94;
	// lwz r7,88(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmplw cr6,r7,r26
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82202d94
	if (ctx.cr6.lt) goto loc_82202D94;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r10,r25
	REX_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r24.u32);
loc_82202D94:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82202db8
	if (ctx.cr6.lt) goto loc_82202DB8;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r25
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82202db8
	if (!ctx.cr6.lt) goto loc_82202DB8;
	// stwx r10,r11,r25
	REX_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r10.u32);
loc_82202DB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82202d40
	if (ctx.cr6.lt) goto loc_82202D40;
loc_82202DCC:
	// lwz r7,44(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r24.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r24,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r24.u32);
	// beq cr6,0x82202e4c
	if (ctx.cr6.eq) goto loc_82202E4C;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_82202DE8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82202e1c
	if (ctx.cr6.eq) goto loc_82202E1C;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82202DF8:
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82202e14
	if (ctx.cr6.eq) goto loc_82202E14;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82202df8
	if (ctx.cr6.lt) goto loc_82202DF8;
loc_82202E14:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82202e38
	if (ctx.cr6.lt) goto loc_82202E38;
loc_82202E1C:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,336(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82202e38
	if (!ctx.cr6.lt) goto loc_82202E38;
	// stw r9,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r9.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
loc_82202E38:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82202de8
	if (ctx.cr6.lt) goto loc_82202DE8;
loc_82202E4C:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x82202e60
	if (ctx.cr6.gt) goto loc_82202E60;
	// stw r7,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r7.u32);
	// stw r29,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r29.u32);
loc_82202E60:
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// li r10,3
	ctx.r10.s64 = 3;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// beq cr6,0x82202f88
	if (ctx.cr6.eq) goto loc_82202F88;
	// addi r11,r29,80
	ctx.r11.s64 = ctx.r29.s64 + 80;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_82202E98:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82202eb4
	if (ctx.cr6.eq) goto loc_82202EB4;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r26,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r26.u32);
loc_82202EB4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,340(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ea28
	ctx.lr = 0x82202ECC;
	sub_8220EA28(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82202fa8
	if (ctx.cr6.eq) goto loc_82202FA8;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r24,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r24.u32);
	// stw r24,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r24.u32);
	// stw r26,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r26.u32);
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// stw r9,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r9.u32);
	// stw r26,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r26.u32);
	// stw r26,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r26.u32);
	// stw r8,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r8.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82202f60
	if (ctx.cr6.eq) goto loc_82202F60;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82202F60:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82202f70
	if (ctx.cr6.eq) goto loc_82202F70;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82202F70:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82202e98
	if (ctx.cr6.lt) goto loc_82202E98;
loc_82202F88:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
loc_82202F8C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216b138
	ctx.lr = 0x82202F98;
	sub_8216B138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_82202FA8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82202f8c
	goto loc_82202F8C;
}

DEFINE_REX_FUNC(sub_8220B050) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8220B058;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b0f8
	if (ctx.cr6.eq) goto loc_8220B0F8;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,256(r3)
	REX_STORE_U32(ctx.r3.u32 + 256, ctx.r25.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220b0f8
	if (!ctx.cr6.gt) goto loc_8220B0F8;
loc_8220B084:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220b0cc
	if (!ctx.cr6.eq) goto loc_8220B0CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5db8
	ctx.lr = 0x8220B0B4;
	sub_821F5DB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_8220B0CC:
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8220b084
	if (ctx.cr6.lt) goto loc_8220B084;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8220b0f8
	if (ctx.cr6.eq) goto loc_8220B0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8220B0F8;
	sub_821F5A08(ctx, base);
loc_8220B0F8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b250
	if (ctx.cr6.eq) goto loc_8220B250;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8220B108:
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// bge cr6,0x8220b1a0
	if (!ctx.cr6.lt) goto loc_8220B1A0;
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r27,1
	ctx.r27.s64 = 1;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8220b17c
	if (ctx.cr6.eq) goto loc_8220B17C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_8220B128:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x821f63f0
	ctx.lr = 0x8220B13C;
	sub_821F63F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 & ctx.r27.u64;
	// bl 0x8220ec68
	ctx.lr = 0x8220B15C;
	sub_8220EC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// blt cr6,0x8220b128
	if (ctx.cr6.lt) goto loc_8220B128;
loc_8220B17C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x8220B184;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8220b108
	if (ctx.cr6.eq) goto loc_8220B108;
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// blt cr6,0x8220b250
	if (ctx.cr6.lt) goto loc_8220B250;
loc_8220B1A0:
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8220b22c
	if (ctx.cr6.eq) goto loc_8220B22C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r27,r11,9716
	ctx.r27.s64 = ctx.r11.s64 + 9716;
loc_8220B1C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// stw r11,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x821f63f0
	ctx.lr = 0x8220B1D4;
	sub_821F63F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8220b200
	if (!ctx.cr6.eq) goto loc_8220B200;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,4553
	ctx.r5.s64 = 4553;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8221ff00
	ctx.lr = 0x8220B1FC;
	sub_8221FF00(ctx, base);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8220B200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8220ec68
	ctx.lr = 0x8220B20C;
	sub_8220EC68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// blt cr6,0x8220b1c0
	if (ctx.cr6.lt) goto loc_8220B1C0;
loc_8220B22C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x8220B234;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8220b250
	if (!ctx.cr6.eq) goto loc_8220B250;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8220b2c0
	goto loc_8220B2C0;
loc_8220B250:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220b278
	if (!ctx.cr0.eq) goto loc_8220B278;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,364(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220B270;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
loc_8220B278:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8220b2bc
	if (ctx.cr6.eq) goto loc_8220B2BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82202460
	ctx.lr = 0x8220B28C;
	sub_82202460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8220B29C;
	sub_821F5A08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b980
	ctx.lr = 0x8220B2A4;
	sub_8221B980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821fc7e0
	ctx.lr = 0x8220B2B4;
	sub_821FC7E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b2c0
	if (ctx.cr0.lt) goto loc_8220B2C0;
loc_8220B2BC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8220B2C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82212278) {
	REX_FUNC_PROLOGUE();
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822122d8
	if (!ctx.cr6.eq) goto loc_822122D8;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822122d8
	if (!ctx.cr6.eq) goto loc_822122D8;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822122D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212C78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82212C80;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// rlwinm r28,r5,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82212C90:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwzx r11,r11,r28
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r31,r10,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// beq cr6,0x82212d24
	if (ctx.cr6.eq) goto loc_82212D24;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82212d24
	if (ctx.cr0.eq) goto loc_82212D24;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212ce4
	if (ctx.cr6.eq) goto loc_82212CE4;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,72(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r8,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u32);
loc_82212CE4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,72(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82212d18
	if (ctx.cr6.eq) goto loc_82212D18;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r29.u32);
loc_82212D18:
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
loc_82212D24:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82212d40
	if (ctx.cr6.eq) goto loc_82212D40;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82212c78
	ctx.lr = 0x82212D40;
	sub_82212C78(ctx, base);
loc_82212D40:
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82212d54
	if (ctx.cr6.eq) goto loc_82212D54;
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82212c90
	goto loc_82212C90;
loc_82212D54:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822172A8) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8216b138
	ctx.lr = 0x822172C8;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8216b138
	ctx.lr = 0x822172D4;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8216b138
	ctx.lr = 0x822172E0;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x8216b138
	ctx.lr = 0x822172EC;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8216b138
	ctx.lr = 0x822172F8;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8216b138
	ctx.lr = 0x82217304;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8216b138
	ctx.lr = 0x82217310;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x8216b138
	ctx.lr = 0x8221731C;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x8216b138
	ctx.lr = 0x82217328;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8216b138
	ctx.lr = 0x82217334;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8216b138
	ctx.lr = 0x82217340;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8216b138
	ctx.lr = 0x8221734C;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// bl 0x8216b138
	ctx.lr = 0x82217358;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8216b138
	ctx.lr = 0x82217364;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x8216b138
	ctx.lr = 0x82217370;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,84(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// bl 0x8216b138
	ctx.lr = 0x8221737C;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x8216b138
	ctx.lr = 0x82217388;
	sub_8216B138(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82217398;
	sub_8215EC60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

DEFINE_REX_FUNC(sub_8221B580) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x8221B588;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221b5a4
	if (ctx.cr0.eq) goto loc_8221B5A4;
loc_8221B59C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221b978
	goto loc_8221B978;
loc_8221B5A4:
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r19,r20
	ctx.r19.u64 = ctx.r20.u64;
	// bl 0x822173b0
	ctx.lr = 0x8221B5B4;
	sub_822173B0(ctx, base);
	// lwz r18,12(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8221b59c
	if (ctx.cr6.eq) goto loc_8221B59C;
	// rlwinm r17,r18,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
loc_8221B5C4:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r17,r17,-4
	ctx.r17.s64 = ctx.r17.s64 + -4;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// lwzx r30,r17,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r5,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221b5f4
	if (ctx.cr6.eq) goto loc_8221B5F4;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221b964
	if (!ctx.cr6.eq) goto loc_8221B964;
loc_8221B5F4:
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b64c
	if (ctx.cr6.eq) goto loc_8221B64C;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
loc_8221B614:
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,26,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8221b64c
	if (ctx.cr0.eq) goto loc_8221B64C;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8221b614
	if (ctx.cr6.lt) goto loc_8221B614;
loc_8221B64C:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b964
	if (ctx.cr6.lt) goto loc_8221B964;
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b6ac
	if (ctx.cr6.eq) goto loc_8221B6AC;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r8,16(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
loc_8221B674:
	// lwzx r4,r11,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r4,r4,0,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8221b6ac
	if (ctx.cr0.eq) goto loc_8221B6AC;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8221b674
	if (ctx.cr6.lt) goto loc_8221B674;
loc_8221B6AC:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b964
	if (ctx.cr6.lt) goto loc_8221B964;
	// clrlwi r22,r5,12
	ctx.r22.u64 = ctx.r5.u32 & 0xFFFFF;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// divwu. r21,r6,r22
	ctx.r21.u64 = uint32_t(ctx.r22.u32 ? ctx.r6.u32 / ctx.r22.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x8221b860
	if (ctx.cr0.eq) goto loc_8221B860;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// rlwinm r23,r22,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_8221B6D0:
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8221b848
	if (ctx.cr6.eq) goto loc_8221B848;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8221B6E4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d770
	ctx.lr = 0x8221B710;
	sub_8220D770(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,24640
	ctx.r10.s64 = 1614807040;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221b740
	if (ctx.cr6.eq) goto loc_8221B740;
	// lis r10,24720
	ctx.r10.s64 = 1620049920;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221b740
	if (ctx.cr6.eq) goto loc_8221B740;
	// lis r10,24800
	ctx.r10.s64 = 1625292800;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221b744
	if (!ctx.cr6.eq) goto loc_8221B744;
loc_8221B740:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8221B744:
	// lwz r5,16(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,0(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
loc_8221B778:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221b788
	if (!ctx.cr6.eq) goto loc_8221B788;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x8221b7ac
	if (ctx.cr6.eq) goto loc_8221B7AC;
loc_8221B788:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221b7a8
	if (ctx.cr6.eq) goto loc_8221B7A8;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x8221b778
	goto loc_8221B778;
loc_8221B7A8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8221B7AC:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8221b840
	if (!ctx.cr6.eq) goto loc_8221B840;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8221b824
	if (ctx.cr6.eq) goto loc_8221B824;
	// lwz r7,16(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
loc_8221B7D0:
	// lwzx r11,r10,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,92(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bgt cr6,0x8221b824
	if (ctx.cr6.gt) goto loc_8221B824;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x8221b824
	if (!ctx.cr6.eq) goto loc_8221B824;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8221b814
	if (ctx.cr6.eq) goto loc_8221B814;
	// lwzx r11,r27,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8221b824
	if (!ctx.cr6.eq) goto loc_8221B824;
loc_8221B814:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b7d0
	if (ctx.cr6.lt) goto loc_8221B7D0;
loc_8221B824:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8221b840
	if (ctx.cr6.lt) goto loc_8221B840;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8221b6e4
	if (ctx.cr6.lt) goto loc_8221B6E4;
loc_8221B840:
	// cmplw cr6,r26,r22
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x8221b858
	if (ctx.cr6.lt) goto loc_8221B858;
loc_8221B848:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r25,r23,r25
	ctx.r25.u64 = ctx.r23.u64 + ctx.r25.u64;
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8221b6d0
	if (ctx.cr6.lt) goto loc_8221B6D0;
loc_8221B858:
	// cmplw cr6,r24,r21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x8221b964
	if (ctx.cr6.lt) goto loc_8221B964;
loc_8221B860:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221b954
	if (!ctx.cr6.gt) goto loc_8221B954;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
loc_8221B874:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// beq cr6,0x8221b938
	if (ctx.cr6.eq) goto loc_8221B938;
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8221B89C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r7,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xE000000;
	// rlwinm r7,r7,0,7,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// bgt cr6,0x8221b8d4
	if (ctx.cr6.gt) goto loc_8221B8D4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8221B8D4:
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// bne cr6,0x8221b918
	if (!ctx.cr6.eq) goto loc_8221B918;
	// lwz r9,96(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 96);
	// stw r9,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r9.u32);
	// lwz r9,100(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 100);
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
loc_8221B918:
	// lwz r9,104(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// stw r9,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r9.u32);
	// lwz r9,108(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// lwz r9,112(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// stw r9,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// bdnz 0x8221b89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221B89C;
loc_8221B938:
	// lwz r11,116(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 116);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221b874
	if (ctx.cr6.lt) goto loc_8221B874;
loc_8221B954:
	// stw r20,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r20.u32);
	// li r19,1
	ctx.r19.s64 = 1;
	// stw r20,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// stw r20,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r20.u32);
loc_8221B964:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x8221b5c4
	if (!ctx.cr6.eq) goto loc_8221B5C4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x8221b59c
	if (ctx.cr6.eq) goto loc_8221B59C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8221B978:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222AC80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8222AC88;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,108(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222ACAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222ACC8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 11, ctx.xer);
	// bne cr6,0x8222acf4
	if (!ctx.cr6.eq) goto loc_8222ACF4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8222af18
	if (!ctx.cr6.lt) goto loc_8222AF18;
	// addi r11,r3,135
	ctx.r11.s64 = ctx.r3.s64 + 135;
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// li r25,1
	ctx.r25.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8222ad18
	goto loc_8222AD18;
loc_8222ACF4:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bne cr6,0x8222af18
	if (!ctx.cr6.eq) goto loc_8222AF18;
	// cmplwi cr6,r27,8
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 8, ctx.xer);
	// bge cr6,0x8222af18
	if (!ctx.cr6.lt) goto loc_8222AF18;
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// addi r10,r27,127
	ctx.r10.s64 = ctx.r27.s64 + 127;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r25,3
	ctx.r25.s64 = 3;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_8222AD18:
	// lwzx r10,r11,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8222ad6c
	if (ctx.cr6.eq) goto loc_8222AD6C;
loc_8222AD2C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8222ad5c
	if (ctx.cr6.lt) goto loc_8222AD5C;
	// beq cr6,0x8222ad54
	if (ctx.cr6.eq) goto loc_8222AD54;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8222ad4c
	if (ctx.cr6.lt) goto loc_8222AD4C;
	// bne cr6,0x8222ad60
	if (!ctx.cr6.eq) goto loc_8222AD60;
	// oris r26,r26,8
	ctx.r26.u64 = ctx.r26.u64 | 524288;
	// b 0x8222ad60
	goto loc_8222AD60;
loc_8222AD4C:
	// oris r26,r26,4
	ctx.r26.u64 = ctx.r26.u64 | 262144;
	// b 0x8222ad60
	goto loc_8222AD60;
loc_8222AD54:
	// oris r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 131072;
	// b 0x8222ad60
	goto loc_8222AD60;
loc_8222AD5C:
	// oris r26,r26,1
	ctx.r26.u64 = ctx.r26.u64 | 65536;
loc_8222AD60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8222ad2c
	if (ctx.cr6.lt) goto loc_8222AD2C;
loc_8222AD6C:
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// beq cr6,0x8222ad98
	if (ctx.cr6.eq) goto loc_8222AD98;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8222ad94
	if (!ctx.cr0.eq) goto loc_8222AD94;
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bne cr6,0x8222ad98
	if (!ctx.cr6.eq) goto loc_8222AD98;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222ad98
	if (ctx.cr0.eq) goto loc_8222AD98;
loc_8222AD94:
	// oris r26,r26,32
	ctx.r26.u64 = ctx.r26.u64 | 2097152;
loc_8222AD98:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222adac
	if (ctx.cr0.eq) goto loc_8222ADAC;
	// lis r30,64
	ctx.r30.s64 = 4194304;
loc_8222ADAC:
	// lis r4,512
	ctx.r4.s64 = 33554432;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,31
	ctx.r4.u64 = ctx.r4.u64 | 31;
	// bl 0x82207320
	ctx.lr = 0x8222ADBC;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222af20
	if (ctx.cr0.lt) goto loc_8222AF20;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822045a8
	ctx.lr = 0x8222ADD0;
	sub_822045A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222af20
	if (ctx.cr0.lt) goto loc_8222AF20;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8222aec0
	if (ctx.cr0.eq) goto loc_8222AEC0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// beq cr6,0x8222ae6c
	if (ctx.cr6.eq) goto loc_8222AE6C;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,4(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_8222AE1C:
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8222ae5c
	if (!ctx.cr6.eq) goto loc_8222AE5C;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222ae5c
	if (!ctx.cr6.eq) goto loc_8222AE5C;
	// lwz r4,12(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222ae5c
	if (!ctx.cr6.eq) goto loc_8222AE5C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_8222AE5C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8222ae1c
	if (ctx.cr6.lt) goto loc_8222AE1C;
loc_8222AE6C:
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8222AE7C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8222ae90
	if (ctx.cr6.eq) goto loc_8222AE90;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_8222AE90:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8222ae7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222AE7C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8222AEB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222af20
	if (ctx.cr0.lt) goto loc_8222AF20;
loc_8222AEC0:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r25,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x18;
	// rlwimi r11,r25,20,9,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 20) & 0x700000) | (ctx.r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// clrlwi r8,r27,21
	ctx.r8.u64 = ctx.r27.u32 & 0x7FF;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r10,312(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 312);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// or r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 | ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8222AEFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222af20
	if (ctx.cr0.lt) goto loc_8222AF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8222AF0C;
	sub_821FEB40(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x8222af20
	goto loc_8222AF20;
loc_8222AF18:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8222AF20:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82232128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82232130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,708(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 708);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822321a8
	if (!ctx.cr6.gt) goto loc_822321A8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8223214C:
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x8215e640
	ctx.lr = 0x82232170;
	sub_8215E640(ctx, base);
	// lwz r11,696(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 696);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x82232194;
	sub_8215E640(ctx, base);
	// lwz r11,708(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 708);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223214c
	if (ctx.cr6.lt) goto loc_8223214C;
loc_822321A8:
	// lwz r11,704(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822321e8
	if (!ctx.cr6.gt) goto loc_822321E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822321BC:
	// lwz r9,700(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 700);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,56(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 56);
	// stw r9,56(r8)
	REX_STORE_U32(ctx.r8.u32 + 56, ctx.r9.u32);
	// lwz r9,704(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 704);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822321bc
	if (ctx.cr6.lt) goto loc_822321BC;
loc_822321E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82233CF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82233CF8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// lwz r9,564(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r22,18
	ctx.r22.s64 = 18;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82233D14:
	// lwzx r11,r10,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233d3c
	if (ctx.cr6.eq) goto loc_82233D3C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,4352
	ctx.r8.s64 = 285212672;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82233d3c
	if (ctx.cr6.eq) goto loc_82233D3C;
	// addi r22,r22,-3
	ctx.r22.s64 = ctx.r22.s64 + -3;
loc_82233D3C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82233d14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82233D14;
	// lwz r11,548(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 548);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233e50
	if (ctx.cr6.eq) goto loc_82233E50;
	// lwz r25,560(r4)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + 560);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82233D5C:
	// lwz r27,0(r25)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82233e38
	if (ctx.cr6.eq) goto loc_82233E38;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82233e38
	if (ctx.cr6.eq) goto loc_82233E38;
	// lwz r28,12(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82233D80:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82233e20
	if (ctx.cr6.eq) goto loc_82233E20;
	// lwz r29,24(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
loc_82233D90:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82233e10
	if (ctx.cr6.eq) goto loc_82233E10;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// bl 0x8222d610
	ctx.lr = 0x82233DAC;
	sub_8222D610(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82233e10
	if (!ctx.cr0.eq) goto loc_82233E10;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82233e08
	if (ctx.cr6.eq) goto loc_82233E08;
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r8,20(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
loc_82233DD8:
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,56(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82233e08
	if (ctx.cr6.eq) goto loc_82233E08;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82233e08
	if (ctx.cr6.eq) goto loc_82233E08;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82233dd8
	if (ctx.cr6.lt) goto loc_82233DD8;
loc_82233E08:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82233e20
	if (!ctx.cr6.eq) goto loc_82233E20;
loc_82233E10:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82233d90
	if (ctx.cr6.lt) goto loc_82233D90;
loc_82233E20:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82233e2c
	if (ctx.cr6.eq) goto loc_82233E2C;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
loc_82233E2C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82233d80
	if (!ctx.cr0.eq) goto loc_82233D80;
loc_82233E38:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x82233d5c
	if (!ctx.cr0.eq) goto loc_82233D5C;
	// cmplw cr6,r23,r22
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r22.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82233e54
	if (ctx.cr6.gt) goto loc_82233E54;
loc_82233E50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82233E54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82237F40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82237F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r10,202(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// li r4,66
	ctx.r4.s64 = 66;
	// cmplwi cr6,r10,260
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 260, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bne cr6,0x822380b0
	if (!ctx.cr6.eq) goto loc_822380B0;
	// bl 0x82207320
	ctx.lr = 0x82237F70;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82237FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237FD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,328(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 328);
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bctrl 
	ctx.lr = 0x8223801C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238048;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
loc_82238060:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82238070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223808C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8223809C;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822380A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_822380B0:
	// bl 0x82207320
	ctx.lr = 0x822380B4;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,320(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 320);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x822380F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822380a8
	if (ctx.cr0.lt) goto loc_822380A8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,15
	ctx.r5.s64 = 983040;
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// b 0x82238060
	goto loc_82238060;
}

DEFINE_REX_FUNC(sub_8223DCB0) {
	REX_FUNC_PROLOGUE();
	// lhz r10,202(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lwz r9,284(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 284);
	// lwz r8,276(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 276);
	// lwz r10,272(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 272);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r9,r8
	ctx.r9.u64 = ctx.r8.u64 - ctx.r9.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r9,r9,24,0,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8223ECC8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,19112
	ctx.r11.s64 = ctx.r11.s64 + 19112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x821fef38
	ctx.lr = 0x8223ECF4;
	sub_821FEF38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223ed08
	if (ctx.cr0.eq) goto loc_8223ED08;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x8223ED08;
	sub_8216B138(ctx, base);
loc_8223ED08:
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

DEFINE_REX_FUNC(sub_8223F9C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8223F9C8;
	__savegprlr_22(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8223f9e8
	if (!ctx.cr6.eq) goto loc_8223F9E8;
loc_8223F9E0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8223fc00
	goto loc_8223FC00;
loc_8223F9E8:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fbfc
	if (ctx.cr0.eq) goto loc_8223FBFC;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8223fbfc
	if (ctx.cr6.eq) goto loc_8223FBFC;
	// lwz r9,4(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lis r8,28752
	ctx.r8.s64 = 1884291072;
	// divwu r24,r9,r10
	ctx.r24.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8223fa34
	if (ctx.cr6.eq) goto loc_8223FA34;
	// lis r9,28768
	ctx.r9.s64 = 1885339648;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8223fa34
	if (ctx.cr6.eq) goto loc_8223FA34;
	// lis r9,28784
	ctx.r9.s64 = 1886388224;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8223fa38
	if (!ctx.cr6.eq) goto loc_8223FA38;
loc_8223FA34:
	// li r24,2
	ctx.r24.s64 = 2;
loc_8223FA38:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x8223fbfc
	if (!ctx.cr6.gt) goto loc_8223FBFC;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,124(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r28.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r28,r8,r4
	REX_STORE_U32(ctx.r8.u32 + ctx.r4.u32, ctx.r28.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stwx r11,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stwx r28,r6,r30
	REX_STORE_U32(ctx.r6.u32 + ctx.r30.u32, ctx.r28.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stwx r11,r6,r27
	REX_STORE_U32(ctx.r6.u32 + ctx.r27.u32, ctx.r11.u32);
	// beq cr6,0x8223fbfc
	if (ctx.cr6.eq) goto loc_8223FBFC;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_8223FAAC:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223faec
	if (ctx.cr0.eq) goto loc_8223FAEC;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223faec
	if (!ctx.cr0.eq) goto loc_8223FAEC;
	// lwz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// b 0x8223fb38
	goto loc_8223FB38;
loc_8223FAEC:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8223fafc
	if (ctx.cr0.eq) goto loc_8223FAFC;
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// b 0x8223fb38
	goto loc_8223FB38;
loc_8223FAFC:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223fb34
	if (ctx.cr0.eq) goto loc_8223FB34;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223fb34
	if (!ctx.cr6.eq) goto loc_8223FB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,108(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223FB24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x8223fb34
	if (ctx.cr6.eq) goto loc_8223FB34;
	// lwz r5,128(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// b 0x8223fb38
	goto loc_8223FB38;
loc_8223FB34:
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
loc_8223FB38:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8223fb9c
	if (ctx.cr6.eq) goto loc_8223FB9C;
	// lwz r9,8(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,4(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8223FB54:
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8223fb8c
	if (!ctx.cr6.eq) goto loc_8223FB8C;
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8223fb8c
	if (!ctx.cr6.eq) goto loc_8223FB8C;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8223fb9c
	if (ctx.cr6.eq) goto loc_8223FB9C;
loc_8223FB8C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8223fb54
	if (ctx.cr6.lt) goto loc_8223FB54;
loc_8223FB9C:
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8223fbc8
	if (!ctx.cr6.eq) goto loc_8223FBC8;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x8223fc08
	if (ctx.cr6.gt) goto loc_8223FC08;
loc_8223FBC8:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// blt cr6,0x8223fbec
	if (ctx.cr6.lt) goto loc_8223FBEC;
	// lwz r11,124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8223fbec
	if (!ctx.cr6.eq) goto loc_8223FBEC;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bgt cr6,0x8223fc08
	if (ctx.cr6.gt) goto loc_8223FC08;
loc_8223FBEC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8223faac
	if (ctx.cr6.lt) goto loc_8223FAAC;
loc_8223FBFC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223FC00:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_8223FC08:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8223f9e0
	if (ctx.cr6.eq) goto loc_8223F9E0;
	// stw r29,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// b 0x8223f9e0
	goto loc_8223F9E0;
}

DEFINE_REX_FUNC(sub_82243EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82243ED0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r28,0(r4)
	REX_STORE_U8(ctx.r4.u32 + 0, ctx.r28.u8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stb r28,0(r6)
	REX_STORE_U8(ctx.r6.u32 + 0, ctx.r28.u8);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r28,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r28.u32);
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82243f78
	if (!ctx.cr6.eq) goto loc_82243F78;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r5,r3,1
	ctx.r5.s64 = ctx.r3.s64 + 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lbz r11,1(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// b 0x82243f40
	goto loc_82243F40;
loc_82243F2C:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82243f4c
	if (ctx.cr6.eq) goto loc_82243F4C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243f4c
	if (ctx.cr6.eq) goto loc_82243F4C;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
loc_82243F40:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82243f2c
	if (!ctx.cr6.eq) goto loc_82243F2C;
loc_82243F4C:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82243f68
	if (ctx.cr6.gt) goto loc_82243F68;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821eb028
	ctx.lr = 0x82243F68;
	sub_821EB028(ctx, base);
loc_82243F68:
	// subf r11,r31,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r31.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stb r28,-1(r11)
	REX_STORE_U8(ctx.r11.u32 + -1, ctx.r28.u8);
	// b 0x8224401c
	goto loc_8224401C;
loc_82243F78:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82243fc8
	if (!ctx.cr6.eq) goto loc_82243FC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 1;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82169c08
	ctx.lr = 0x82243F94;
	sub_82169C08(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lbz r11,1(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82243fac
	goto loc_82243FAC;
loc_82243FA0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243ff4
	if (ctx.cr6.eq) goto loc_82243FF4;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
loc_82243FAC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// bne cr6,0x82243fa0
	if (!ctx.cr6.eq) goto loc_82243FA0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243ff4
	if (ctx.cr6.eq) goto loc_82243FF4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82243ff4
	goto loc_82243FF4;
loc_82243FC8:
	// stw r28,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// b 0x82243fe8
	goto loc_82243FE8;
loc_82243FD4:
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82243ff4
	if (ctx.cr6.eq) goto loc_82243FF4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82243ff4
	if (ctx.cr6.eq) goto loc_82243FF4;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r29.u32 = ea;
loc_82243FE8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82243fd4
	if (!ctx.cr6.eq) goto loc_82243FD4;
loc_82243FF4:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r30,r11,65535
	ctx.r30.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82244014
	if (ctx.cr6.gt) goto loc_82244014;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821eb028
	ctx.lr = 0x82244014;
	sub_821EB028(ctx, base);
loc_82244014:
	// subf r11,r31,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r31.u64;
	// stbx r28,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u8);
loc_8224401C:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82244034
	if (ctx.cr6.gt) goto loc_82244034;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821eb028
	ctx.lr = 0x82244034;
	sub_821EB028(ctx, base);
loc_82244034:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82249F90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82249F98;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,328(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 328);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82248e48
	ctx.lr = 0x82249FAC;
	sub_82248E48(ctx, base);
	// bl 0x821788e8
	ctx.lr = 0x82249FB0;
	sub_821788E8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8224a04c
	if (ctx.cr6.eq) goto loc_8224A04C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r11,-24816
	ctx.r27.s64 = ctx.r11.s64 + -24816;
	// addi r26,r10,-24856
	ctx.r26.s64 = ctx.r10.s64 + -24856;
loc_82249FCC:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82249fe0
	if (!ctx.cr6.eq) goto loc_82249FE0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x82249fec
	goto loc_82249FEC;
loc_82249FE0:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82249ffc
	if (ctx.cr6.lt) goto loc_82249FFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82249FEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x822444a0
	ctx.lr = 0x82249FF8;
	sub_822444A0(ctx, base);
	// b 0x8224a040
	goto loc_8224A040;
loc_82249FFC:
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8224a040
	if (ctx.cr6.eq) goto loc_8224A040;
	// clrlwi r28,r11,19
	ctx.r28.u64 = ctx.r11.u32 & 0x1FFF;
loc_8224A00C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r24,16(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82248e48
	ctx.lr = 0x8224A01C;
	sub_82248E48(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82174dc0
	ctx.lr = 0x8224A024;
	sub_82174DC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8224a00c
	if (!ctx.cr6.eq) goto loc_8224A00C;
loc_8224A040:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82249fcc
	if (!ctx.cr6.eq) goto loc_82249FCC;
loc_8224A04C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,328(r29)
	REX_STORE_U32(ctx.r29.u32 + 328, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224C018) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8224C020;
	__savegprlr_25(ctx, base);
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x821aad68
	ctx.lr = 0x8224C04C;
	sub_821AAD68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8224c058
	if (!ctx.cr6.eq) goto loc_8224C058;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
loc_8224C058:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r30,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r30.u32);
	// stw r26,300(r31)
	REX_STORE_U32(ctx.r31.u32 + 300, ctx.r26.u32);
	// bl 0x82243b80
	ctx.lr = 0x8224C098;
	sub_82243B80(ctx, base);
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,308(r31)
	REX_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// beq 0x8224c0b4
	if (ctx.cr0.eq) goto loc_8224C0B4;
	// stw r26,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// stw r26,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
	// b 0x8224c0bc
	goto loc_8224C0BC;
loc_8224C0B4:
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_8224C0BC:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224c0cc
	if (ctx.cr0.eq) goto loc_8224C0CC;
	// stw r26,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// b 0x8224c0d0
	goto loc_8224C0D0;
loc_8224C0CC:
	// stw r30,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_8224C0D0:
	// lwz r11,312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224c0f8
	if (!ctx.cr6.eq) goto loc_8224C0F8;
	// bl 0x82177448
	ctx.lr = 0x8224C0E0;
	sub_82177448(ctx, base);
	// stw r3,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224c0f8
	if (!ctx.cr0.eq) goto loc_8224C0F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8224c20c
	goto loc_8224C20C;
loc_8224C0F8:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// beq cr6,0x8224c118
	if (ctx.cr6.eq) goto loc_8224C118;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8224C118:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8224c130
	if (ctx.cr6.eq) goto loc_8224C130;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bne 0x8224c134
	if (!ctx.cr0.eq) goto loc_8224C134;
loc_8224C130:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8224C134:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r30,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r30.u32);
	// beq cr6,0x8224c194
	if (ctx.cr6.eq) goto loc_8224C194;
	// lwz r11,316(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8224c194
	if (!ctx.cr6.eq) goto loc_8224C194;
	// lwz r3,20(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r3.u32);
	// bne cr6,0x8224c168
	if (!ctx.cr6.eq) goto loc_8224C168;
	// stw r30,324(r31)
	REX_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// b 0x8224c194
	goto loc_8224C194;
loc_8224C168:
	// bl 0x8224f670
	ctx.lr = 0x8224C16C;
	sub_8224F670(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stw r26,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r26.u32);
	// lis r5,-1
	ctx.r5.s64 = -65536;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8224c184
	if (ctx.cr6.eq) goto loc_8224C184;
	// lis r5,-2
	ctx.r5.s64 = -131072;
loc_8224C184:
	// ori r5,r5,1021
	ctx.r5.u64 = ctx.r5.u64 | 1021;
	// lwz r3,316(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 316);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82254e80
	ctx.lr = 0x8224C194;
	sub_82254E80(ctx, base);
loc_8224C194:
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8215ec60
	ctx.lr = 0x8224C1A4;
	sub_8215EC60(ctx, base);
	// stw r31,3160(r1)
	REX_STORE_U32(ctx.r1.u32 + 3160, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224b840
	ctx.lr = 0x8224C1B0;
	sub_8224B840(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8210fda0
	ctx.lr = 0x8224C1B8;
	sub_8210FDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8224c1e8
	if (!ctx.cr0.eq) goto loc_8224C1E8;
	// lwz r11,304(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 304);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224c1e8
	if (!ctx.cr6.eq) goto loc_8224C1E8;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8224c1e8
	if (!ctx.cr6.eq) goto loc_8224C1E8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-23216
	ctx.r4.s64 = ctx.r11.s64 + -23216;
	// bl 0x822444a0
	ctx.lr = 0x8224C1E8;
	sub_822444A0(ctx, base);
loc_8224C1E8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82249f90
	ctx.lr = 0x8224C1F0;
	sub_82249F90(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8210fda0
	ctx.lr = 0x8224C1F8;
	sub_8210FDA0(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// lis r10,-30602
	ctx.r10.s64 = -2005532672;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,2905
	ctx.r10.u64 = ctx.r10.u64 | 2905;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8224C20C:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224EFA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r11,r11,-22616
	ctx.r11.s64 = ctx.r11.s64 + -22616;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224F070) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x8224f010
	ctx.lr = 0x8224F09C;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-15912
	ctx.r4.s64 = ctx.r11.s64 + -15912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x8224F0B0;
	sub_8224EFB8(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12524
	ctx.r4.s64 = ctx.r11.s64 + -12524;
	// bl 0x8224efb8
	ctx.lr = 0x8224F0C0;
	sub_8224EFB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8224F6B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8224F6F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8224F6F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8224f774
	if (!ctx.cr6.gt) goto loc_8224F774;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8224f720
	if (!ctx.cr6.lt) goto loc_8224F720;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8224F720:
	// mulli r4,r30,28
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0b0
	ctx.lr = 0x8224F72C;
	sub_8225C0B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8224f744
	if (!ctx.cr0.eq) goto loc_8224F744;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8224f774
	goto loc_8224F774;
loc_8224F744:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224f770
	if (ctx.cr6.eq) goto loc_8224F770;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,28
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(28));
	// bl 0x8215e640
	ctx.lr = 0x8224F764;
	sub_8215E640(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0c0
	ctx.lr = 0x8224F770;
	sub_8225C0C0(ctx, base);
loc_8224F770:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8224F774:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822504C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x822504D0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// bl 0x8224f010
	ctx.lr = 0x822504E8;
	sub_8224F010(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r18,r10,-15552
	ctx.r18.s64 = ctx.r10.s64 + -15552;
	// addi r19,r11,-15768
	ctx.r19.s64 = ctx.r11.s64 + -15768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250508;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82250510;
	sub_8224FD68(ctx, base);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82250610
	if (!ctx.cr6.lt) goto loc_82250610;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r4,-15892
	ctx.r29.s64 = ctx.r4.s64 + -15892;
	// addi r27,r5,-15712
	ctx.r27.s64 = ctx.r5.s64 + -15712;
	// addi r26,r6,-15560
	ctx.r26.s64 = ctx.r6.s64 + -15560;
	// addi r25,r7,-15568
	ctx.r25.s64 = ctx.r7.s64 + -15568;
	// addi r22,r8,4180
	ctx.r22.s64 = ctx.r8.s64 + 4180;
	// addi r21,r9,4172
	ctx.r21.s64 = ctx.r9.s64 + 4172;
	// addi r24,r10,-15752
	ctx.r24.s64 = ctx.r10.s64 + -15752;
	// addi r23,r11,-15580
	ctx.r23.s64 = ctx.r11.s64 + -15580;
loc_8225056C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82250574;
	sub_8224F010(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250584;
	sub_8224EFB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + -8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82250598;
	sub_8224EFB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822505ac
	if (!ctx.cr0.eq) goto loc_822505AC;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_822505AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x822505B8;
	sub_8224F1D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,-4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822505CC;
	sub_8224EFB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r6,r11,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// bl 0x8224f140
	ctx.lr = 0x822505E8;
	sub_8224F140(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x822505F0;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225056c
	if (ctx.cr6.lt) goto loc_8225056C;
loc_82250610:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x8225061C;
	sub_8224F070(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253180) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82253188;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822531d4
	if (ctx.cr6.lt) goto loc_822531D4;
	// lwz r30,72(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822531d4
	if (ctx.cr6.gt) goto loc_822531D4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822531cc
	if (!ctx.cr6.gt) goto loc_822531CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224f780
	ctx.lr = 0x822531CC;
	sub_8224F780(ctx, base);
loc_822531CC:
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
loc_822531D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253870) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82253878;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822538f8
	if (ctx.cr6.lt) goto loc_822538F8;
	// lwz r30,120(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x822538dc
	if (ctx.cr6.gt) goto loc_822538DC;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822538cc
	if (!ctx.cr6.gt) goto loc_822538CC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224fa50
	ctx.lr = 0x822538CC;
	sub_8224FA50(ctx, base);
loc_822538CC:
	// stw r29,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x822538f8
	if (ctx.cr6.lt) goto loc_822538F8;
loc_822538DC:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r31,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r26,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_822538F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254E98) {
	REX_FUNC_PROLOGUE();
	// b 0x822549f0
	sub_822549F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EA8) {
	REX_FUNC_PROLOGUE();
	// b 0x82254bd8
	sub_82254BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EC0) {
	REX_FUNC_PROLOGUE();
	// b 0x82254cc0
	sub_82254CC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82255030) {
	REX_FUNC_PROLOGUE();
	// b 0x82254f68
	sub_82254F68(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82255040) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8215fbe0
	ctx.lr = 0x82255054;
	sub_8215FBE0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82255270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82255278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r4,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x822552b4
	if (ctx.cr6.lt) goto loc_822552B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-14056
	ctx.r6.s64 = ctx.r11.s64 + -14056;
	// addi r5,r10,-14116
	ctx.r5.s64 = ctx.r10.s64 + -14116;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822552B4;
	sub_82260F30(ctx, base);
loc_822552B4:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82256278) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82256280;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82266e68
	ctx.lr = 0x822562A0;
	sub_82266E68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82265d68
	ctx.lr = 0x822562A8;
	sub_82265D68(ctx, base);
	// b 0x82256324
	goto loc_82256324;
loc_822562AC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266118
	ctx.lr = 0x822562B4;
	sub_82266118(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1978
	ctx.r11.s64 = ctx.r11.s64 + -1978;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82256314
	if (ctx.cr6.gt) goto loc_82256314;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,-13576
	ctx.r12.s64 = ctx.r12.s64 + -13576;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32219
	ctx.r12.s64 = -2111504384;
	// nop 
	// addi r12,r12,25328
	ctx.r12.s64 = ctx.r12.s64 + 25328;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_822562F0;
	case 1:
		goto loc_822563A8;
	case 2:
		goto loc_8225630C;
	case 3:
		goto loc_822563C0;
	case 4:
		goto loc_822563CC;
	case 5:
		goto loc_822563E4;
	case 6:
		goto loc_82256360;
	case 7:
		goto loc_82256378;
	case 8:
		goto loc_822563FC;
	case 9:
		goto loc_82256390;
	case 10:
		goto loc_82256314;
	case 11:
		goto loc_82256434;
	case 12:
		goto loc_82256314;
	case 13:
		goto loc_82256414;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_822562F0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822562fc
	if (ctx.cr0.eq) goto loc_822562FC;
	// bl 0x823712d0
	ctx.lr = 0x822562FC;
	sub_823712D0(ctx, base);
loc_822562FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82256318
	goto loc_82256318;
loc_8225630C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256318
	if (ctx.cr0.eq) goto loc_82256318;
loc_82256314:
	// bl 0x823712d0
	ctx.lr = 0x82256318;
	sub_823712D0(ctx, base);
loc_82256318:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266068
	ctx.lr = 0x82256324;
	sub_82266068(ctx, base);
loc_82256324:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822562ac
	if (!ctx.cr0.eq) goto loc_822562AC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82172c50
	ctx.lr = 0x8225633C;
	sub_82172C50(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82256348
	if (ctx.cr6.eq) goto loc_82256348;
	// stw r31,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_82256348:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82256354
	if (ctx.cr6.eq) goto loc_82256354;
	// stw r27,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
loc_82256354:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_82256360:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225636c
	if (ctx.cr0.eq) goto loc_8225636C;
	// bl 0x823712d0
	ctx.lr = 0x8225636C;
	sub_823712D0(ctx, base);
loc_8225636C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF00000) | (ctx.r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82256318
	goto loc_82256318;
loc_82256378:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82256384
	if (ctx.cr0.eq) goto loc_82256384;
	// bl 0x823712d0
	ctx.lr = 0x82256384;
	sub_823712D0(ctx, base);
loc_82256384:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7000000) | (ctx.r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82256318
	goto loc_82256318;
loc_82256390:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225639c
	if (ctx.cr0.eq) goto loc_8225639C;
	// bl 0x823712d0
	ctx.lr = 0x8225639C;
	sub_823712D0(ctx, base);
loc_8225639C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82256318
	goto loc_82256318;
loc_822563A8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822563b4
	if (!ctx.cr0.eq) goto loc_822563B4;
	// bl 0x823712d0
	ctx.lr = 0x822563B4;
	sub_823712D0(ctx, base);
loc_822563B4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x3F00) | (ctx.r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x82256318
	goto loc_82256318;
loc_822563C0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256318
	if (!ctx.cr0.eq) goto loc_82256318;
	// b 0x82256314
	goto loc_82256314;
loc_822563CC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822563d8
	if (!ctx.cr0.eq) goto loc_822563D8;
	// bl 0x823712d0
	ctx.lr = 0x822563D8;
	sub_823712D0(ctx, base);
loc_822563D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x40000) | (ctx.r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82256318
	goto loc_82256318;
loc_822563E4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822563f0
	if (!ctx.cr0.eq) goto loc_822563F0;
	// bl 0x823712d0
	ctx.lr = 0x822563F0;
	sub_823712D0(ctx, base);
loc_822563F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x80000) | (ctx.r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82256318
	goto loc_82256318;
loc_822563FC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256408
	if (!ctx.cr0.eq) goto loc_82256408;
	// bl 0x823712d0
	ctx.lr = 0x82256408;
	sub_823712D0(ctx, base);
loc_82256408:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x78000000) | (ctx.r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x82256318
	goto loc_82256318;
loc_82256414:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256420
	if (!ctx.cr0.eq) goto loc_82256420;
	// bl 0x823712d0
	ctx.lr = 0x82256420;
	sub_823712D0(ctx, base);
loc_82256420:
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82256318
	goto loc_82256318;
loc_82256434:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82256440
	if (!ctx.cr0.eq) goto loc_82256440;
	// bl 0x823712d0
	ctx.lr = 0x82256440;
	sub_823712D0(ctx, base);
loc_82256440:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	ctx.r27.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82256318
	goto loc_82256318;
}

DEFINE_REX_FUNC(sub_8225D3F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8225D400;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d42c
	if (!ctx.cr6.lt) goto loc_8225D42C;
	// bl 0x823712d0
	ctx.lr = 0x8225D42C;
	sub_823712D0(ctx, base);
loc_8225D42C:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x8225d468
	if (!ctx.cr6.eq) goto loc_8225D468;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8225d464
	if (!ctx.cr6.eq) goto loc_8225D464;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x8225d474
	goto loc_8225D474;
loc_8225D464:
	// li r28,83
	ctx.r28.s64 = 83;
loc_8225D468:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x8225d898
	if (ctx.cr6.gt) goto loc_8225D898;
	// beq cr6,0x8225d858
	if (ctx.cr6.eq) goto loc_8225D858;
loc_8225D474:
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x8225d898
	if (ctx.cr6.gt) goto loc_8225D898;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,-2384
	ctx.r12.s64 = ctx.r12.s64 + -2384;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// nop 
	// addi r12,r12,-11096
	ctx.r12.s64 = ctx.r12.s64 + -11096;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8225D4A8;
	case 1:
		goto loc_8225D510;
	case 2:
		goto loc_8225D6D0;
	case 3:
		goto loc_8225D6C4;
	case 4:
		goto loc_8225D6C4;
	case 5:
		goto loc_8225D75C;
	case 6:
		goto loc_8225D898;
	case 7:
		goto loc_8225D898;
	case 8:
		goto loc_8225D898;
	case 9:
		goto loc_8225D898;
	case 10:
		goto loc_8225D898;
	case 11:
		goto loc_8225D898;
	case 12:
		goto loc_8225D898;
	case 13:
		goto loc_8225D6FC;
	case 14:
		goto loc_8225D6C4;
	case 15:
		goto loc_8225D7B8;
	case 16:
		goto loc_8225D898;
	case 17:
		goto loc_8225D630;
	case 18:
		goto loc_8225D67C;
	case 19:
		goto loc_8225D6C4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8225D4A8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r10,4608
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4608, ctx.xer);
	// beq cr6,0x8225d4d8
	if (ctx.cr6.eq) goto loc_8225D4D8;
	// bl 0x823712d0
	ctx.lr = 0x8225D4D8;
	sub_823712D0(ctx, base);
loc_8225D4D8:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x8225d4e4
	if (ctx.cr6.lt) goto loc_8225D4E4;
	// bl 0x823712d0
	ctx.lr = 0x8225D4E4;
	sub_823712D0(ctx, base);
loc_8225D4E4:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x8225d500
	if (ctx.cr6.lt) goto loc_8225D500;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d500
	if (!ctx.cr6.lt) goto loc_8225D500;
	// bl 0x823712d0
	ctx.lr = 0x8225D500;
	sub_823712D0(ctx, base);
loc_8225D500:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8225d89c
	goto loc_8225D89C;
loc_8225D510:
	// lwz r28,0(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwzu r30,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r11,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x8225d53c
	if (ctx.cr6.eq) goto loc_8225D53C;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x8225d53c
	if (ctx.cr6.eq) goto loc_8225D53C;
	// bl 0x823712d0
	ctx.lr = 0x8225D53C;
	sub_823712D0(ctx, base);
loc_8225D53C:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8225d54c
	if (!ctx.cr6.eq) goto loc_8225D54C;
	// bl 0x823712d0
	ctx.lr = 0x8225D54C;
	sub_823712D0(ctx, base);
loc_8225D54C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r29,r28,21
	ctx.r29.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8225d568
	if (ctx.cr6.eq) goto loc_8225D568;
	// bl 0x823712d0
	ctx.lr = 0x8225D568;
	sub_823712D0(ctx, base);
loc_8225D568:
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// blt cr6,0x8225d574
	if (ctx.cr6.lt) goto loc_8225D574;
	// bl 0x823712d0
	ctx.lr = 0x8225D574;
	sub_823712D0(ctx, base);
loc_8225D574:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x8225d590
	if (ctx.cr6.lt) goto loc_8225D590;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d590
	if (!ctx.cr6.lt) goto loc_8225D590;
	// bl 0x823712d0
	ctx.lr = 0x8225D590;
	sub_823712D0(ctx, base);
loc_8225D590:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x8225d5cc
	if (!ctx.cr6.eq) goto loc_8225D5CC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225c320
	ctx.lr = 0x8225D5A8;
	sub_8225C320(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x8225d89c
	goto loc_8225D89C;
loc_8225D5CC:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x8225d614
	if (!ctx.cr6.eq) goto loc_8225D614;
	// li r10,53
	ctx.r10.s64 = 53;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,41
	ctx.r8.s64 = 41;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// stwu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r31.u32 = ea;
	// b 0x8225d628
	goto loc_8225D628;
loc_8225D614:
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
loc_8225D624:
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
loc_8225D628:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x8225d89c
	goto loc_8225D89C;
loc_8225D630:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d640
	if (!ctx.cr6.eq) goto loc_8225D640;
	// bl 0x823712d0
	ctx.lr = 0x8225D640;
	sub_823712D0(ctx, base);
loc_8225D640:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8225c518
	ctx.lr = 0x8225D64C;
	sub_8225C518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d6c4
	if (ctx.cr0.eq) goto loc_8225D6C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225d6c4
	if (ctx.cr6.eq) goto loc_8225D6C4;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// lhz r11,6(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 6);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// b 0x8225d628
	goto loc_8225D628;
loc_8225D67C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225d68c
	if (!ctx.cr6.eq) goto loc_8225D68C;
	// bl 0x823712d0
	ctx.lr = 0x8225D68C;
	sub_823712D0(ctx, base);
loc_8225D68C:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8225c518
	ctx.lr = 0x8225D698;
	sub_8225C518(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d6b8
	if (ctx.cr0.eq) goto loc_8225D6B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225d6b8
	if (ctx.cr6.eq) goto loc_8225D6B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_8225D6B8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_8225D6C4:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8225d628
	goto loc_8225D628;
loc_8225D6D0:
	// lwz r30,0(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x8225d6f0
	if (ctx.cr6.eq) goto loc_8225D6F0;
	// bl 0x823712d0
	ctx.lr = 0x8225D6F0;
	sub_823712D0(ctx, base);
loc_8225D6F0:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d6fc
	if (ctx.cr0.eq) goto loc_8225D6FC;
	// bl 0x823712d0
	ctx.lr = 0x8225D6FC;
	sub_823712D0(ctx, base);
loc_8225D6FC:
	// lwz r30,0(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x8225d71c
	if (ctx.cr6.eq) goto loc_8225D71C;
	// bl 0x823712d0
	ctx.lr = 0x8225D71C;
	sub_823712D0(ctx, base);
loc_8225D71C:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8225d72c
	if (ctx.cr6.lt) goto loc_8225D72C;
	// bl 0x823712d0
	ctx.lr = 0x8225D72C;
	sub_823712D0(ctx, base);
loc_8225D72C:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225c9f0
	ctx.lr = 0x8225D754;
	sub_8225C9F0(ctx, base);
loc_8225D754:
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8225d89c
	goto loc_8225D89C;
loc_8225D75C:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x8225d780
	if (ctx.cr6.eq) goto loc_8225D780;
	// bl 0x823712d0
	ctx.lr = 0x8225D780;
	sub_823712D0(ctx, base);
loc_8225D780:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x8225d78c
	if (ctx.cr6.lt) goto loc_8225D78C;
	// bl 0x823712d0
	ctx.lr = 0x8225D78C;
	sub_823712D0(ctx, base);
loc_8225D78C:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x8225d7a8
	if (ctx.cr6.lt) goto loc_8225D7A8;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8225d7a8
	if (!ctx.cr6.lt) goto loc_8225D7A8;
	// bl 0x823712d0
	ctx.lr = 0x8225D7A8;
	sub_823712D0(ctx, base);
loc_8225D7A8:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8225d624
	goto loc_8225D624;
loc_8225D7B8:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x8225d7dc
	if (!ctx.cr6.eq) goto loc_8225D7DC;
	// bl 0x823712d0
	ctx.lr = 0x8225D7DC;
	sub_823712D0(ctx, base);
loc_8225D7DC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x8225d7fc
	if (ctx.cr6.eq) goto loc_8225D7FC;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x8225d804
	if (ctx.cr6.eq) goto loc_8225D804;
	// bl 0x823712d0
	ctx.lr = 0x8225D7FC;
	sub_823712D0(ctx, base);
loc_8225D7FC:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x8225d810
	if (!ctx.cr6.eq) goto loc_8225D810;
loc_8225D804:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8225d88c
	goto loc_8225D88C;
loc_8225D810:
	// li r11,53
	ctx.r11.s64 = 53;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225d89c
	if (!ctx.cr6.eq) goto loc_8225D89C;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x8225c6b8
	ctx.lr = 0x8225D84C;
	sub_8225C6B8(ctx, base);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r28,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// b 0x8225d89c
	goto loc_8225D89C;
loc_8225D858:
	// lwz r31,0(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x8225d878
	if (ctx.cr6.eq) goto loc_8225D878;
	// bl 0x823712d0
	ctx.lr = 0x8225D878;
	sub_823712D0(ctx, base);
loc_8225D878:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d884
	if (ctx.cr0.eq) goto loc_8225D884;
	// bl 0x823712d0
	ctx.lr = 0x8225D884;
	sub_823712D0(ctx, base);
loc_8225D884:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8225D88C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8225c320
	ctx.lr = 0x8225D894;
	sub_8225C320(ctx, base);
	// b 0x8225d754
	goto loc_8225D754;
loc_8225D898:
	// bl 0x823712d0
	ctx.lr = 0x8225D89C;
	sub_823712D0(ctx, base);
loc_8225D89C:
	// stw r26,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D490) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8226d4ac
	if (ctx.cr6.lt) goto loc_8226D4AC;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8226d4b0
	if (!ctx.cr6.gt) goto loc_8226D4B0;
loc_8226D4AC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226D4B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226d4e4
	if (!ctx.cr0.eq) goto loc_8226D4E4;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8226d4cc
	if (ctx.cr6.lt) goto loc_8226D4CC;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8226d4d0
	if (!ctx.cr6.gt) goto loc_8226D4D0;
loc_8226D4CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226D4D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226d4e4
	if (!ctx.cr0.eq) goto loc_8226D4E4;
	// cmplwi cr6,r10,126
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 126, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8226d4e8
	if (!ctx.cr6.eq) goto loc_8226D4E8;
loc_8226D4E4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226D4E8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226DB80) {
	REX_FUNC_PROLOGUE();
	// lwz r9,140(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 140);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lwz r11,144(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 144);
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8226dbac
	if (ctx.cr6.lt) goto loc_8226DBAC;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,144(r4)
	REX_STORE_U32(ctx.r4.u32 + 144, ctx.r9.u32);
	// blr 
	return;
loc_8226DBAC:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226dbdc
	if (ctx.cr6.eq) goto loc_8226DBDC;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r8,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
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
loc_8226DBDC:
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// b 0x8226d8e8
	sub_8226D8E8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226EF18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8226EF20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226ef60
	if (!ctx.cr6.lt) goto loc_8226EF60;
loc_8226EF44:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x8226ef60
	if (ctx.cr0.eq) goto loc_8226EF60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8226ef44
	if (ctx.cr6.lt) goto loc_8226EF44;
loc_8226EF60:
	// lwz r10,784(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8226efb8
	if (!ctx.cr6.eq) goto loc_8226EFB8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x8216b018
	ctx.lr = 0x8226EF78;
	sub_8216B018(ctx, base);
	// stw r3,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226ef9c
	if (!ctx.cr0.eq) goto loc_8226EF9C;
loc_8226EF84:
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 776);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,776(r31)
	REX_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// b 0x8226f0e4
	goto loc_8226F0E4;
loc_8226EF9C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8215e640
	ctx.lr = 0x8226EFA8;
	sub_8215E640(ctx, base);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stbx r25,r11,r29
	REX_STORE_U8(ctx.r11.u32 + ctx.r29.u32, ctx.r25.u8);
	// b 0x8226f024
	goto loc_8226F024;
loc_8226EFB8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8226EFBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8226efbc
	if (!ctx.cr6.eq) goto loc_8226EFBC;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r28,r27,r29
	ctx.r28.u64 = ctx.r27.u64 + ctx.r29.u64;
	// addi r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 1;
	// bl 0x8216b018
	ctx.lr = 0x8226EFE8;
	sub_8216B018(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8226ef84
	if (ctx.cr0.eq) goto loc_8226EF84;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,784(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x8226F000;
	sub_8215E640(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// bl 0x8215e640
	ctx.lr = 0x8226F010;
	sub_8215E640(ctx, base);
	// stbx r25,r30,r28
	REX_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r25.u8);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x8216b138
	ctx.lr = 0x8226F020;
	sub_8216B138(ctx, base);
	// stw r30,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
loc_8226F024:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r26,r11,6904
	ctx.r26.s64 = ctx.r11.s64 + 6904;
loc_8226F02C:
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,784(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82370180
	ctx.lr = 0x8226F038;
	sub_82370180(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x8226f0e0
	if (ctx.cr0.eq) goto loc_8226F0E0;
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r11,776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic. r28,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r28.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,776(r31)
	REX_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// beq 0x8226f08c
	if (ctx.cr0.eq) goto loc_8226F08C;
	// addi r27,r28,1
	ctx.r27.s64 = ctx.r28.s64 + 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216b018
	ctx.lr = 0x8226F074;
	sub_8216B018(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8226f0ec
	if (ctx.cr0.eq) goto loc_8226F0EC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x8226F08C;
	sub_8215E640(ctx, base);
loc_8226F08C:
	// lwz r27,784(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r25,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r25.u8);
	// stw r30,784(r31)
	REX_STORE_U32(ctx.r31.u32 + 784, ctx.r30.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226ebc0
	ctx.lr = 0x8226F0A4;
	sub_8226EBC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f0bc
	if (ctx.cr0.eq) goto loc_8226F0BC;
	// lwz r11,780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,780(r31)
	REX_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// b 0x8226f0c8
	goto loc_8226F0C8;
loc_8226F0BC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82161498
	ctx.lr = 0x8226F0C8;
	sub_82161498(ctx, base);
loc_8226F0C8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216b138
	ctx.lr = 0x8226F0D4;
	sub_8216B138(ctx, base);
	// lwz r11,784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 784);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226f02c
	if (!ctx.cr6.eq) goto loc_8226F02C;
loc_8226F0E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226F0E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_8226F0EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8226f0e4
	goto loc_8226F0E4;
}

DEFINE_REX_FUNC(sub_82276288) {
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
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,116
	ctx.r4.s64 = 116;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82275ef8
	ctx.lr = 0x822762A8;
	sub_82275EF8(ctx, base);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r10,r3,24
	ctx.r10.s64 = ctx.r3.s64 + 24;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r6,r11,-36
	ctx.r6.s64 = ctx.r11.s64 + -36;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// addi r5,r10,-36
	ctx.r5.s64 = ctx.r10.s64 + -36;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r6,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// stw r8,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// addi r9,r9,-36
	ctx.r9.s64 = ctx.r9.s64 + -36;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// ori r6,r5,1
	ctx.r6.u64 = ctx.r5.u64 | 1;
	// ori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 | 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// rlwimi r11,r7,0,4,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// lwz r10,76(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// rlwimi r9,r11,0,13,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFFF) | (ctx.r9.u64 & 0xFFFFFFFFFFF80000);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwimi r11,r10,0,0,12
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF80000) | (ctx.r11.u64 & 0xFFFFFFFF0007FFFF);
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82276348
	if (ctx.cr0.eq) goto loc_82276348;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_82276348:
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

DEFINE_REX_FUNC(sub_8227A240) {
	REX_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8227a2d4
	if (ctx.cr6.eq) goto loc_8227A2D4;
loc_8227A24C:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8227A250:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8227a2c8
	if (ctx.cr6.eq) goto loc_8227A2C8;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227a2c0
	if (ctx.cr6.eq) goto loc_8227A2C0;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r7,28(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8227a2c0
	if (!ctx.cr6.eq) goto loc_8227A2C0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r7,r11,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r7,14336
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14336, ctx.xer);
	// beq cr6,0x8227a2c0
	if (ctx.cr6.eq) goto loc_8227A2C0;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227a2c0
	if (ctx.cr0.eq) goto loc_8227A2C0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm. r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8227a2c0
	if (!ctx.cr0.eq) goto loc_8227A2C0;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r11,r10,27,5,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFF8000000);
	// rlwimi r7,r6,27,5,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF) | (ctx.r7.u64 & 0xFFFFFFFFF8000000);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// clrlwi r10,r7,1
	ctx.r10.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227a2dc
	if (!ctx.cr0.eq) goto loc_8227A2DC;
loc_8227A2C0:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x8227a250
	goto loc_8227A250;
loc_8227A2C8:
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8227a24c
	if (!ctx.cr6.eq) goto loc_8227A24C;
loc_8227A2D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8227A2DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227BA70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,4(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227bab8
	if (!ctx.cr0.eq) goto loc_8227BAB8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8227bab8
	if (ctx.cr0.eq) goto loc_8227BAB8;
loc_8227BA98:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227bab8
	if (!ctx.cr0.eq) goto loc_8227BAB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227ba98
	if (!ctx.cr6.eq) goto loc_8227BA98;
loc_8227BAB8:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8227bb2c
	if (ctx.cr6.eq) goto loc_8227BB2C;
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_8227BAC8:
	// clrlwi r10,r6,31
	ctx.r10.u64 = ctx.r6.u32 & 0x1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8227bb10
	if (ctx.cr6.lt) goto loc_8227BB10;
loc_8227BAE8:
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8227bae8
	if (!ctx.cr6.lt) goto loc_8227BAE8;
loc_8227BB10:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// blt cr6,0x8227bac8
	if (ctx.cr6.lt) goto loc_8227BAC8;
loc_8227BB2C:
	// stw r5,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82280D78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_82280D7C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280dc0
	if (ctx.cr6.eq) goto loc_82280DC0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82280d9c
	if (ctx.cr0.eq) goto loc_82280D9C;
	// rlwinm. r10,r9,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x82280da0
	if (ctx.cr0.eq) goto loc_82280DA0;
loc_82280D9C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82280DA0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82280db0
	if (ctx.cr0.eq) goto loc_82280DB0;
	// rlwinm. r10,r9,0,7,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFE000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82280db8
	if (ctx.cr0.eq) goto loc_82280DB8;
loc_82280DB0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82280d7c
	goto loc_82280D7C;
loc_82280DB8:
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// blr 
	return;
loc_82280DC0:
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// b 0x8225b1a0
	sub_8225B1A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82281578) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_8228157C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822815d0
	if (ctx.cr6.eq) goto loc_822815D0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r10,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228159c
	if (!ctx.cr0.eq) goto loc_8228159C;
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822815a0
	if (ctx.cr0.eq) goto loc_822815A0;
loc_8228159C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822815A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822815bc
	if (ctx.cr0.eq) goto loc_822815BC;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822815c0
	if (ctx.cr6.eq) goto loc_822815C0;
loc_822815BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822815C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8228157c
	goto loc_8228157C;
loc_822815D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82283188) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82283190;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822831BC;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822831e0
	if (ctx.cr6.eq) goto loc_822831E0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822831DC;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822831E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822831E8;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8228320c
	if (ctx.cr6.eq) goto loc_8228320C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x82283208;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8228320C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x82283214;
	sub_82281428(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// beq cr6,0x82283238
	if (ctx.cr6.eq) goto loc_82283238;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x82283234;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82283238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x82283240;
	sub_82281428(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq cr6,0x82283298
	if (ctx.cr6.eq) goto loc_82283298;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r27,-36
	ctx.r10.s64 = ctx.r27.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82283298:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822888E0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r11,r11,0,8,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF00;
	// rlwinm. r11,r11,0,23,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF8001FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822889d4
	if (!ctx.cr0.eq) goto loc_822889D4;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x822889d4
	if (ctx.cr0.eq) goto loc_822889D4;
loc_82288904:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288934
	if (ctx.cr0.eq) goto loc_82288934;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82288928
	if (ctx.cr0.eq) goto loc_82288928;
	// lwz r11,36(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// addi r10,r9,32
	ctx.r10.s64 = ctx.r9.s64 + 32;
	// b 0x8228893c
	goto loc_8228893C;
loc_82288928:
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// addi r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 + 24;
	// b 0x8228893c
	goto loc_8228893C;
loc_82288934:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// addi r10,r9,16
	ctx.r10.s64 = ctx.r9.s64 + 16;
loc_8228893C:
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// b 0x822889b4
	goto loc_822889B4;
loc_82288950:
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r8,r8,0,5,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r11,40(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82288974
	if (!ctx.cr0.eq) goto loc_82288974;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82288950
	if (!ctx.cr6.eq) goto loc_82288950;
loc_82288974:
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822889bc
	if (ctx.cr6.eq) goto loc_822889BC;
	// addi r8,r9,24
	ctx.r8.s64 = ctx.r9.s64 + 24;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822889a4
	if (ctx.cr6.eq) goto loc_822889A4;
	// lwz r11,28(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822889a4
	if (!ctx.cr0.eq) goto loc_822889A4;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x822889ac
	goto loc_822889AC;
loc_822889A4:
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_822889AC:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822889bc
	if (!ctx.cr0.eq) goto loc_822889BC;
loc_822889B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82288950
	if (!ctx.cr6.eq) goto loc_82288950;
loc_822889BC:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822889d4
	if (!ctx.cr0.eq) goto loc_822889D4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82288904
	if (!ctx.cr6.eq) goto loc_82288904;
loc_822889D4:
	// b 0x82287ed8
	sub_82287ED8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228DA40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8228DA48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228dac8
	if (!ctx.cr6.eq) goto loc_8228DAC8;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi. r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r10,r11,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,192(r4)
	REX_STORE_U32(ctx.r4.u32 + 192, ctx.r10.u32);
	// bne 0x8228daac
	if (!ctx.cr0.eq) goto loc_8228DAAC;
	// lwz r10,680(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 680);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228daac
	if (ctx.cr6.eq) goto loc_8228DAAC;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stwx r11,r10,r4
	REX_STORE_U32(ctx.r10.u32 + ctx.r4.u32, ctx.r11.u32);
	// b 0x8228dac8
	goto loc_8228DAC8;
loc_8228DAAC:
	// lwz r11,672(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8226e388
	ctx.lr = 0x8228DAC0;
	sub_8226E388(ctx, base);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
loc_8228DAC8:
	// clrlwi. r6,r26,24
	ctx.r6.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne 0x8228db40
	if (!ctx.cr0.eq) goto loc_8228DB40;
	// lwz r9,680(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 680);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228db40
	if (ctx.cr6.eq) goto loc_8228DB40;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,672(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8228db64
	if (!ctx.cr6.lt) goto loc_8228DB64;
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-8
	ctx.r8.s64 = ctx.r8.s64 + -8;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8228DB28:
	// ld r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8228db28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228DB28;
	// b 0x8228db64
	goto loc_8228DB64;
loc_8228DB40:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r27,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFF8;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// clrldi r8,r27,58
	ctx.r8.u64 = ctx.r27.u64 & 0x3F;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// sld r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r8.u8 & 0x7F));
	// ldx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stdx r8,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u64);
loc_8228DB64:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r9,r29,58
	ctx.r9.u64 = ctx.r29.u64 & 0x3F;
	// addi r8,r28,4
	ctx.r8.s64 = ctx.r28.s64 + 4;
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// lwzx r11,r8,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// lwz r8,684(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 684);
	// lwz r10,672(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 672);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8228dbe0
	if (!ctx.cr6.lt) goto loc_8228DBE0;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8228DBCC:
	// ld r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// ldu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8228dbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228DBCC;
loc_8228DBE0:
	// lwz r9,676(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// li r11,0
	ctx.r11.s64 = 0;
	// mulli r10,r29,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(5));
loc_8228DBEC:
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r9.u32);
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// bne cr6,0x8228dcb4
	if (!ctx.cr6.eq) goto loc_8228DCB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8228dbec
	if (ctx.cr6.lt) goto loc_8228DBEC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228DC14:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228dc60
	if (ctx.cr0.eq) goto loc_8228DC60;
	// lwz r11,192(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 192);
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// mulli r10,r29,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(40));
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// mulli r9,r9,40
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(40));
	// stw r11,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// lwz r8,676(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 676);
	// li r11,4
	ctx.r11.s64 = 4;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
loc_8228DC4C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// ld r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8228dc4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228DC4C;
loc_8228DC60:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8228dcac
	if (!ctx.cr6.eq) goto loc_8228DCAC;
	// rlwinm r8,r29,1,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFC0;
	// lwz r10,692(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 692);
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r29,30,3,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x1FFFFFF8;
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// li r8,3
	ctx.r8.s64 = 3;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r7,r28,62
	ctx.r7.u64 = ctx.r28.u64 & 0x3;
	// ldx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// sld r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r9.u8 & 0x7F));
	// sld r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r9.u8 & 0x7F));
	// andc r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stdx r9,r11,r10
	REX_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u64);
	// lwz r11,688(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 688);
	// stwx r31,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r31.u32);
loc_8228DCAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8228DCB4:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x8228dc14
	goto loc_8228DC14;
}

DEFINE_REX_FUNC(sub_82298D88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82298D90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82298dbc
	goto loc_82298DBC;
loc_82298DA4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x82298DAC;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82298dc8
	if (!ctx.cr0.eq) goto loc_82298DC8;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
loc_82298DBC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82298da4
	if (!ctx.cr6.eq) goto loc_82298DA4;
	// b 0x82298e00
	goto loc_82298E00;
loc_82298DC8:
	// addi r29,r30,4
	ctx.r29.s64 = ctx.r30.s64 + 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822784a8
	ctx.lr = 0x82298DD8;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82298dec
	if (!ctx.cr0.eq) goto loc_82298DEC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// lwz r3,56(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x8225b1a0
	ctx.lr = 0x82298DEC;
	sub_8225B1A0(ctx, base);
loc_82298DEC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82298d08
	ctx.lr = 0x82298E00;
	sub_82298D08(ctx, base);
loc_82298E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229AAC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8229AAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// b 0x8229ab54
	goto loc_8229AB54;
loc_8229AAD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229aae8
	if (ctx.cr6.eq) goto loc_8229AAE8;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x8229aaf4
	goto loc_8229AAF4;
loc_8229AAE8:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	ctx.r29.s64 = ctx.r11.s64 + -40;
loc_8229AAF4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229ab48
	if (ctx.cr0.eq) goto loc_8229AB48;
	// addi r30,r29,4
	ctx.r30.s64 = ctx.r29.s64 + 4;
loc_8229AB04:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229ab48
	if (ctx.cr6.eq) goto loc_8229AB48;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8229ab34
	if (ctx.cr6.eq) goto loc_8229AB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229ab34
	if (ctx.cr0.eq) goto loc_8229AB34;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82281b70
	ctx.lr = 0x8229AB34;
	sub_82281B70(ctx, base);
loc_8229AB34:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8229ab04
	if (!ctx.cr6.eq) goto loc_8229AB04;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// b 0x8229ab04
	goto loc_8229AB04;
loc_8229AB48:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82334690
	ctx.lr = 0x8229AB54;
	sub_82334690(ctx, base);
loc_8229AB54:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229aad8
	if (ctx.cr0.eq) goto loc_8229AAD8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229C4E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8229C4F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r18,44(r4)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r21,48(r4)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// lwz r24,28(r4)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r10,12(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r16,12(r21)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// beq 0x8229c544
	if (ctx.cr0.eq) goto loc_8229C544;
	// rlwinm r11,r10,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// slw r11,r22,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// b 0x8229c548
	goto loc_8229C548;
loc_8229C544:
	// rlwinm r27,r10,31,28,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
loc_8229C548:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// beq cr6,0x8229c56c
	if (ctx.cr6.eq) goto loc_8229C56C;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x8229c570
	if (ctx.cr0.eq) goto loc_8229C570;
loc_8229C56C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229C570:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c5c0
	if (!ctx.cr0.eq) goto loc_8229C5C0;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229c5c0
	if (!ctx.cr0.eq) goto loc_8229C5C0;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232db48
	ctx.lr = 0x8229C5B8;
	sub_8232DB48(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_8229C5C0:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8229c89c
	if (ctx.cr6.eq) goto loc_8229C89C;
	// addi r11,r28,-36
	ctx.r11.s64 = ctx.r28.s64 + -36;
	// clrlwi r20,r30,24
	ctx.r20.u64 = ctx.r30.u32 & 0xFF;
	// ori r17,r11,1
	ctx.r17.u64 = ctx.r11.u64 | 1;
loc_8229C5D8:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// li r8,1
	ctx.r8.s64 = 1;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// subfic r23,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r23.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x8229C608;
	sub_8232D9E0(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r25,r23,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srw r10,r10,r25
	ctx.r10.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r25.u8 & 0x3F));
	// clrlwi r30,r10,30
	ctx.r30.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r14,r11,27
	ctx.r14.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82281260
	ctx.lr = 0x8229C630;
	sub_82281260(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwimi r10,r22,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82280d20
	ctx.lr = 0x8229C64C;
	sub_82280D20(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwimi r11,r30,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8229ad18
	ctx.lr = 0x8229C684;
	sub_8229AD18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a398
	ctx.lr = 0x8229C6A4;
	sub_8229A398(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srw r10,r10,r25
	ctx.r10.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r25.u8 & 0x3F));
	// clrlwi r25,r10,30
	ctx.r25.u64 = ctx.r10.u32 & 0x3;
	// beq cr6,0x8229c6f8
	if (ctx.cr6.eq) goto loc_8229C6F8;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82279aa8
	ctx.lr = 0x8229C6CC;
	sub_82279AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82281428
	ctx.lr = 0x8229C6D8;
	sub_82281428(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822813c8
	ctx.lr = 0x8229C6F0;
	sub_822813C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8229c804
	goto loc_8229C804;
loc_8229C6F8:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// clrlwi r14,r11,27
	ctx.r14.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x82281260
	ctx.lr = 0x8229C704;
	sub_82281260(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// rlwimi r10,r22,26,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82280d20
	ctx.lr = 0x8229C720;
	sub_82280D20(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// lwz r14,88(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r25,27
	ctx.r10.u64 = ctx.r25.u32 & 0x1F;
	// rlwimi r11,r25,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// bl 0x8229ad18
	ctx.lr = 0x8229C75C;
	sub_8229AD18(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a398
	ctx.lr = 0x8229C77C;
	sub_8229A398(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232db48
	ctx.lr = 0x8229C790;
	sub_8232DB48(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x8229C7A0;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281428
	ctx.lr = 0x8229C7AC;
	sub_82281428(ctx, base);
	// stw r3,44(r14)
	REX_STORE_U32(ctx.r14.u32 + 44, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x8229C7BC;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281428
	ctx.lr = 0x8229C7C8;
	sub_82281428(ctx, base);
	// stw r3,48(r14)
	REX_STORE_U32(ctx.r14.u32 + 48, ctx.r3.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x8229C7D8;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r22,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x8229C7F0;
	sub_82280D20(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,57
	ctx.r11.s64 = 57;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwimi r10,r11,7,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8229C804:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// bl 0x82281428
	ctx.lr = 0x8229C838;
	sub_82281428(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229c854
	if (ctx.cr0.eq) goto loc_8229C854;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
loc_8229C854:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822c6150
	ctx.lr = 0x8229C860;
	sub_822C6150(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822c61f0
	ctx.lr = 0x8229C870;
	sub_822C61F0(ctx, base);
	// lwz r25,80(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229a398
	ctx.lr = 0x8229C890;
	sub_8229A398(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8229c5d8
	if (!ctx.cr6.eq) goto loc_8229C5D8;
loc_8229C89C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8229c8d8
	if (ctx.cr6.eq) goto loc_8229C8D8;
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r10,r28,-36
	ctx.r10.s64 = ctx.r28.s64 + -36;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
loc_8229C8D8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822ACF98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x822ACFA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x822acfc0
	if (!ctx.cr6.eq) goto loc_822ACFC0;
	// lwz r21,540(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 540);
loc_822ACFC0:
	// lwz r4,652(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822acffc
	if (!ctx.cr0.eq) goto loc_822ACFFC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822acffc
	if (ctx.cr0.eq) goto loc_822ACFFC;
loc_822ACFDC:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822acffc
	if (!ctx.cr0.eq) goto loc_822ACFFC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822acfdc
	if (!ctx.cr6.eq) goto loc_822ACFDC;
loc_822ACFFC:
	// cmplw cr6,r31,r23
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x822ad00c
	if (!ctx.cr6.eq) goto loc_822AD00C;
loc_822AD004:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x822ad2d8
	goto loc_822AD2D8;
loc_822AD00C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a8f48
	ctx.lr = 0x822AD014;
	sub_822A8F48(ctx, base);
	// subf r27,r23,r31
	ctx.r27.u64 = ctx.r31.u64 - ctx.r23.u64;
	// lwz r25,84(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822AD020:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r24,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x822ad194
	if (ctx.cr0.eq) goto loc_822AD194;
loc_822AD038:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7fb8
	ctx.lr = 0x822AD040;
	sub_822A7FB8(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r30,r11,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,115
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 115, ctx.xer);
	// beq cr6,0x822ad18c
	if (ctx.cr6.eq) goto loc_822AD18C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226dc78
	ctx.lr = 0x822AD060;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq 0x822ad078
	if (ctx.cr0.eq) goto loc_822AD078;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82334690
	ctx.lr = 0x822AD074;
	sub_82334690(ctx, base);
	// b 0x822ad178
	goto loc_822AD178;
loc_822AD078:
	// cmplwi cr6,r30,110
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 110, ctx.xer);
	// bne cr6,0x822ad180
	if (!ctx.cr6.eq) goto loc_822AD180;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822d4d48
	ctx.lr = 0x822AD08C;
	sub_822D4D48(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822ad18c
	if (ctx.cr0.eq) goto loc_822AD18C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad110
	if (ctx.cr0.eq) goto loc_822AD110;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8228cb48
	ctx.lr = 0x822AD0B4;
	sub_8228CB48(ctx, base);
	// sth r3,18(r30)
	REX_STORE_U16(ctx.r30.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ad0ec
	if (!ctx.cr0.eq) goto loc_822AD0EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad0ec
	if (ctx.cr0.eq) goto loc_822AD0EC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822ad0f8
	if (!ctx.cr6.gt) goto loc_822AD0F8;
loc_822AD0EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822AD0F4;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822AD0F8:
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
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
loc_822AD110:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r30,r11,13,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822ad138
	if (ctx.cr0.eq) goto loc_822AD138;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r31,40
	ctx.r11.s64 = ctx.r31.s64 + 40;
loc_822AD128:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x822ad128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AD128;
loc_822AD138:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82334408
	ctx.lr = 0x822AD14C;
	sub_82334408(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822ad178
	if (ctx.cr6.eq) goto loc_822AD178;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_822AD160:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 660);
	// bl 0x822c5ef0
	ctx.lr = 0x822AD170;
	sub_822C5EF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822ad160
	if (!ctx.cr0.eq) goto loc_822AD160;
loc_822AD178:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x822ad18c
	goto loc_822AD18C;
loc_822AD180:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 660);
	// bl 0x822c5ef0
	ctx.lr = 0x822AD18C;
	sub_822C5EF0(ctx, base);
loc_822AD18C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x822ad038
	if (!ctx.cr6.eq) goto loc_822AD038;
loc_822AD194:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ad020
	if (!ctx.cr0.eq) goto loc_822AD020;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad004
	if (ctx.cr0.eq) goto loc_822AD004;
	// lwz r10,652(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ad1e0
	if (!ctx.cr0.eq) goto loc_822AD1E0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822ad1e0
	if (ctx.cr0.eq) goto loc_822AD1E0;
loc_822AD1C0:
	// rlwinm r9,r10,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822ad1e0
	if (!ctx.cr0.eq) goto loc_822AD1E0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ad1c0
	if (!ctx.cr6.eq) goto loc_822AD1C0;
loc_822AD1E0:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x822ad274
	if (!ctx.cr6.gt) goto loc_822AD274;
	// subf r30,r23,r11
	ctx.r30.u64 = ctx.r11.u64 - ctx.r23.u64;
loc_822AD1EC:
	// lwz r3,652(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad204
	if (ctx.cr0.eq) goto loc_822AD204;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x822ad210
	goto loc_822AD210;
loc_822AD204:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_822AD210:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
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
	// bne 0x822ad260
	if (!ctx.cr0.eq) goto loc_822AD260;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
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
	ctx.lr = 0x822AD260;
	sub_8225B140(ctx, base);
loc_822AD260:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne 0x822ad1ec
	if (!ctx.cr0.eq) goto loc_822AD1EC;
loc_822AD274:
	// lwz r31,540(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 540);
	// addi r30,r26,540
	ctx.r30.s64 = ctx.r26.s64 + 540;
	// b 0x822ad2cc
	goto loc_822AD2CC;
loc_822AD280:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ad294
	if (ctx.cr0.eq) goto loc_822AD294;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// b 0x822ad2c8
	goto loc_822AD2C8;
loc_822AD294:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822AD2B4;
	sub_8226D728(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8226df90
	ctx.lr = 0x822AD2C8;
	sub_8226DF90(ctx, base);
loc_822AD2C8:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
loc_822AD2CC:
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x822ad280
	if (!ctx.cr6.eq) goto loc_822AD280;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AD2D8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BA798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822BA7A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,664(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 664);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lis r28,1
	ctx.r28.s64 = 65536;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x822ba7f4
	if (ctx.cr6.gt) goto loc_822BA7F4;
	// lwz r10,8(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822ba7dc
	if (ctx.cr6.lt) goto loc_822BA7DC;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822ba7e0
	if (!ctx.cr6.gt) goto loc_822BA7E0;
loc_822BA7DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822BA7E0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba7f4
	if (ctx.cr0.eq) goto loc_822BA7F4;
	// rlwinm r11,r10,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822ba804
	if (!ctx.cr6.eq) goto loc_822BA804;
loc_822BA7F4:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b9f10
	ctx.lr = 0x822BA804;
	sub_822B9F10(ctx, base);
loc_822BA804:
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_822BA808:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ba834
	if (ctx.cr6.eq) goto loc_822BA834;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822ba82c
	if (ctx.cr6.eq) goto loc_822BA82C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x822ba834
	if (ctx.cr6.eq) goto loc_822BA834;
loc_822BA82C:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x822ba808
	goto loc_822BA808;
loc_822BA834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822a5b00
	ctx.lr = 0x822BA840;
	sub_822A5B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ba8a0
	if (!ctx.cr0.eq) goto loc_822BA8A0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822ba8a0
	if (ctx.cr6.eq) goto loc_822BA8A0;
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822a9bd0
	ctx.lr = 0x822BA860;
	sub_822A9BD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227a108
	ctx.lr = 0x822BA868;
	sub_8227A108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba924
	if (ctx.cr0.eq) goto loc_822BA924;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x822ba924
	if (!ctx.cr6.lt) goto loc_822BA924;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ba588
	ctx.lr = 0x822BA890;
	sub_822BA588(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822ba924
	if (ctx.cr0.eq) goto loc_822BA924;
loc_822BA898:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822ba928
	goto loc_822BA928;
loc_822BA8A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x822ba924
	if (!ctx.cr6.eq) goto loc_822BA924;
	// lwz r31,28(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ba90c
	if (!ctx.cr0.eq) goto loc_822BA90C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822ba90c
	if (ctx.cr0.eq) goto loc_822BA90C;
loc_822BA8C4:
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822ba8f4
	if (ctx.cr6.eq) goto loc_822BA8F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x822ba8f4
	if (!ctx.cr6.eq) goto loc_822BA8F4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822b1528
	ctx.lr = 0x822BA8EC;
	sub_822B1528(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ba930
	if (!ctx.cr0.eq) goto loc_822BA930;
loc_822BA8F4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ba90c
	if (!ctx.cr0.eq) goto loc_822BA90C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822ba8c4
	if (!ctx.cr6.eq) goto loc_822BA8C4;
loc_822BA90C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822ba660
	ctx.lr = 0x822BA918;
	sub_822BA660(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x822ba928
	if (!ctx.cr0.eq) goto loc_822BA928;
loc_822BA924:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822BA928:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_822BA930:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232cf10
	ctx.lr = 0x822BA93C;
	sub_8232CF10(ctx, base);
	// b 0x822ba898
	goto loc_822BA898;
}

DEFINE_REX_FUNC(sub_822C6038) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r3,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,148(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c606c
	if (!ctx.cr0.eq) goto loc_822C606C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822c6080
	goto loc_822C6080;
loc_822C606C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
loc_822C6080:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822c60d0
	if (ctx.cr6.lt) goto loc_822C60D0;
	// beq cr6,0x822c60b4
	if (ctx.cr6.eq) goto loc_822C60B4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x822c609c
	if (ctx.cr6.lt) goto loc_822C609C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822C609C;
	sub_8225B1A0(ctx, base);
loc_822C609C:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x822c60c8
	goto loc_822C60C8;
loc_822C60B4:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwax r11,r10,r11
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_822C60C8:
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x822c60dc
	goto loc_822C60DC;
loc_822C60D0:
	// addi r10,r4,11
	ctx.r10.s64 = ctx.r4.s64 + 11;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
loc_822C60DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6B08) {
	REX_FUNC_PROLOGUE();
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822c6b34
	if (ctx.cr0.eq) goto loc_822C6B34;
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c6b34
	if (!ctx.cr6.eq) goto loc_822C6B34;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
	// lwz r10,52(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// lwz r4,56(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
loc_822C6B34:
	// lbz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x822c6b84
	if (!ctx.cr0.eq) goto loc_822C6B84;
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c6b7c
	if (!ctx.cr6.eq) goto loc_822C6B7C;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_822C6B50:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c6b8c
	if (ctx.cr6.eq) goto loc_822C6B8C;
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c6b6c
	if (!ctx.cr6.eq) goto loc_822C6B6C;
	// lwz r4,52(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// b 0x822c6b50
	goto loc_822C6B50;
loc_822C6B6C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c6b50
	if (ctx.cr6.eq) goto loc_822C6B50;
loc_822C6B7C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,8(r3)
	REX_STORE_U8(ctx.r3.u32 + 8, ctx.r10.u8);
loc_822C6B84:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_822C6B8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C7DB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822C7DB8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// li r25,0
	ctx.r25.s64 = 0;
loc_822C7DC8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
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
	// b 0x822c7e28
	goto loc_822C7E28;
loc_822C7DE4:
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822c7e28
	if (ctx.cr6.eq) goto loc_822C7E28;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c7e28
	if (!ctx.cr0.eq) goto loc_822C7E28;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822C7E00:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822c7e20
	if (ctx.cr6.eq) goto loc_822C7E20;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,44(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822c7e28
	if (!ctx.cr6.eq) goto loc_822C7E28;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x822c7e00
	goto loc_822C7E00;
loc_822C7E20:
	// stw r24,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r24.u32);
	// li r9,1
	ctx.r9.s64 = 1;
loc_822C7E28:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c7e40
	if (!ctx.cr0.eq) goto loc_822C7E40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7de4
	if (!ctx.cr6.eq) goto loc_822C7DE4;
loc_822C7E40:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c7dc8
	if (!ctx.cr0.eq) goto loc_822C7DC8;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c8040
	if (!ctx.cr0.eq) goto loc_822C8040;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c8040
	if (ctx.cr0.eq) goto loc_822C8040;
loc_822C7E60:
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822c8024
	if (!ctx.cr6.eq) goto loc_822C8024;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// rlwinm. r10,r11,12,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c7e84
	if (ctx.cr0.eq) goto loc_822C7E84;
	// rlwinm r11,r11,0,12,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// stw r11,48(r27)
	REX_STORE_U32(ctx.r27.u32 + 48, ctx.r11.u32);
	// b 0x822c7e9c
	goto loc_822C7E9C;
loc_822C7E84:
	// rlwinm. r11,r11,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7e9c
	if (ctx.cr0.eq) goto loc_822C7E9C;
	// lwz r11,116(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 116);
	// stw r25,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r25.u32);
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// stw r25,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
loc_822C7E9C:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7ecc
	if (ctx.cr0.eq) goto loc_822C7ECC;
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7ec0
	if (ctx.cr0.eq) goto loc_822C7EC0;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// addi r29,r27,32
	ctx.r29.s64 = ctx.r27.s64 + 32;
	// b 0x822c7ed4
	goto loc_822C7ED4;
loc_822C7EC0:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// addi r29,r27,24
	ctx.r29.s64 = ctx.r27.s64 + 24;
	// b 0x822c7ed4
	goto loc_822C7ED4;
loc_822C7ECC:
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r29,r27,16
	ctx.r29.s64 = ctx.r27.s64 + 16;
loc_822C7ED4:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x822c7f7c
	goto loc_822C7F7C;
loc_822C7EE8:
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
loc_822C7EEC:
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822c7f24
	if (ctx.cr6.eq) goto loc_822C7F24;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822c7f10
	if (ctx.cr6.eq) goto loc_822C7F10;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82281b70
	ctx.lr = 0x822C7F10;
	sub_82281B70(ctx, base);
loc_822C7F10:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822c7eec
	if (!ctx.cr6.eq) goto loc_822C7EEC;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// b 0x822c7eec
	goto loc_822C7EEC;
loc_822C7F24:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r30,40(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c7f3c
	if (!ctx.cr0.eq) goto loc_822C7F3C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822c7ee8
	if (!ctx.cr6.eq) goto loc_822C7EE8;
loc_822C7F3C:
	// addi r10,r27,32
	ctx.r10.s64 = ctx.r27.s64 + 32;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c7f84
	if (ctx.cr6.eq) goto loc_822C7F84;
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c7f6c
	if (ctx.cr6.eq) goto loc_822C7F6C;
	// lwz r9,28(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c7f6c
	if (!ctx.cr0.eq) goto loc_822C7F6C;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x822c7f74
	goto loc_822C7F74;
loc_822C7F6C:
	// lwz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_822C7F74:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c7f84
	if (!ctx.cr0.eq) goto loc_822C7F84;
loc_822C7F7C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822c7ee8
	if (!ctx.cr6.eq) goto loc_822C7EE8;
loc_822C7F84:
	// lwz r30,12(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r29,r27,12
	ctx.r29.s64 = ctx.r27.s64 + 12;
loc_822C7F8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c8024
	if (ctx.cr6.eq) goto loc_822C8024;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x823389a8
	ctx.lr = 0x822C7FA8;
	sub_823389A8(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r10,11,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c800c
	if (ctx.cr0.eq) goto loc_822C800C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822c800c
	if (ctx.cr6.eq) goto loc_822C800C;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c800c
	if (!ctx.cr0.eq) goto loc_822C800C;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c800c
	if (ctx.cr0.eq) goto loc_822C800C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x822c7ff8
	if (ctx.cr6.eq) goto loc_822C7FF8;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x822c7ffc
	if (!ctx.cr6.eq) goto loc_822C7FFC;
loc_822C7FF8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822C7FFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c800c
	if (ctx.cr0.eq) goto loc_822C800C;
	// rlwinm r11,r10,0,11,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFDFFFFF;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_822C800C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822c801c
	if (!ctx.cr6.eq) goto loc_822C801C;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
loc_822C801C:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x822c7f8c
	goto loc_822C7F8C;
loc_822C8024:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c8040
	if (!ctx.cr0.eq) goto loc_822C8040;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7e60
	if (!ctx.cr6.eq) goto loc_822C7E60;
loc_822C8040:
	// lwz r11,40(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lwz r30,4(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// ori r10,r11,4096
	ctx.r10.u64 = ctx.r11.u64 | 4096;
	// clrlwi. r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r27,r11,20,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1;
	// stw r10,40(r26)
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r10.u32);
	// bne 0x822c8200
	if (!ctx.cr0.eq) goto loc_822C8200;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x822c8200
	if (ctx.cr0.eq) goto loc_822C8200;
loc_822C8068:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822c8184
	if (!ctx.cr6.eq) goto loc_822C8184;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c80a4
	if (ctx.cr0.eq) goto loc_822C80A4;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c8098
	if (ctx.cr0.eq) goto loc_822C8098;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// b 0x822c80ac
	goto loc_822C80AC;
loc_822C8098:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// b 0x822c80ac
	goto loc_822C80AC;
loc_822C80A4:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
loc_822C80AC:
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c813c
	if (ctx.cr0.eq) goto loc_822C813C;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822c8148
	goto loc_822C8148;
loc_822C80BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,7,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82334408
	ctx.lr = 0x822C80DC;
	sub_82334408(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c80f8
	if (!ctx.cr0.eq) goto loc_822C80F8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822c80bc
	if (!ctx.cr0.eq) goto loc_822C80BC;
loc_822C80F8:
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c8150
	if (ctx.cr6.eq) goto loc_822C8150;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c812c
	if (ctx.cr6.eq) goto loc_822C812C;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c812c
	if (!ctx.cr0.eq) goto loc_822C812C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x822c8138
	goto loc_822C8138;
loc_822C812C:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_822C8138:
	// bne 0x822c8150
	if (!ctx.cr0.eq) goto loc_822C8150;
loc_822C813C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
loc_822C8148:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822c80bc
	if (!ctx.cr6.eq) goto loc_822C80BC;
loc_822C8150:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
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
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// stw r25,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r25.u32);
loc_822C8184:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822c81b8
	if (ctx.cr6.eq) goto loc_822C81B8;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c81d4
	if (ctx.cr6.eq) goto loc_822C81D4;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c8200
	if (!ctx.cr0.eq) goto loc_822C8200;
	// b 0x822c81f4
	goto loc_822C81F4;
loc_822C81B8:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822c81ec
	if (!ctx.cr6.eq) goto loc_822C81EC;
loc_822C81D4:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c8200
	if (!ctx.cr0.eq) goto loc_822C8200;
	// b 0x822c81f8
	goto loc_822C81F8;
loc_822C81EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822c8200
	if (!ctx.cr6.eq) goto loc_822C8200;
loc_822C81F4:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822C81F8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822c8068
	if (!ctx.cr6.eq) goto loc_822C8068;
loc_822C8200:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226dfe8
	ctx.lr = 0x822C820C;
	sub_8226DFE8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D6AD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822D6AE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// stw r10,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_822D6B28:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d6b48
	if (ctx.cr6.eq) goto loc_822D6B48;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822d6b4c
	if (!ctx.cr6.eq) goto loc_822D6B4C;
loc_822D6B48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822D6B4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d6c78
	if (!ctx.cr0.eq) goto loc_822D6C78;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c9d90
	ctx.lr = 0x822D6B5C;
	sub_822C9D90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d6bbc
	if (ctx.cr6.eq) goto loc_822D6BBC;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d6ba0
	if (!ctx.cr6.eq) goto loc_822D6BA0;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x822d6ba0
	if (!ctx.cr6.eq) goto loc_822D6BA0;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// rlwinm. r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x822d6ba4
	if (ctx.cr0.eq) goto loc_822D6BA4;
loc_822D6BA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822D6BA4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d6bbc
	if (ctx.cr0.eq) goto loc_822D6BBC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r25,r11,0,29,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// b 0x822d6b28
	goto loc_822D6B28;
loc_822D6BBC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822d6bd4
	if (!ctx.cr6.eq) goto loc_822D6BD4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d6c20
	if (!ctx.cr6.eq) goto loc_822D6C20;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x822d6b28
	goto loc_822D6B28;
loc_822D6BD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822813c8
	ctx.lr = 0x822D6BE8;
	sub_822813C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822813c8
	ctx.lr = 0x822D6C00;
	sub_822813C8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x822ca0a0
	ctx.lr = 0x822D6C18;
	sub_822CA0A0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x822d6c4c
	goto loc_822D6C4C;
loc_822D6C20:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822813c8
	ctx.lr = 0x822D6C34;
	sub_822813C8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822ca0a0
	ctx.lr = 0x822D6C4C;
	sub_822CA0A0(ctx, base);
loc_822D6C4C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d49e0
	ctx.lr = 0x822D6C60;
	sub_822D49E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281370
	ctx.lr = 0x822D6C70;
	sub_82281370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x822d6b28
	goto loc_822D6B28;
loc_822D6C78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822d6cc0
	if (!ctx.cr6.eq) goto loc_822D6CC0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822d6cd8
	if (!ctx.cr6.eq) goto loc_822D6CD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f4,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bl 0x82333b98
	ctx.lr = 0x822D6CAC;
	sub_82333B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281370
	ctx.lr = 0x822D6CBC;
	sub_82281370(ctx, base);
	// b 0x822d6cd4
	goto loc_822D6CD4;
loc_822D6CC0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822813c8
	ctx.lr = 0x822D6CD4;
	sub_822813C8(ctx, base);
loc_822D6CD4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822D6CD8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822d6cec
	if (ctx.cr6.eq) goto loc_822D6CEC;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280d20
	ctx.lr = 0x822D6CEC;
	sub_82280D20(ctx, base);
loc_822D6CEC:
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// stw r31,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E3C18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x822E3C20;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r17,1
	ctx.r17.s64 = 1;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3d88
	if (ctx.cr0.eq) goto loc_822E3D88;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e3d88
	if (!ctx.cr0.eq) goto loc_822E3D88;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e3d88
	if (ctx.cr0.eq) goto loc_822E3D88;
loc_822E3C50:
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e3d6c
	if (!ctx.cr0.eq) goto loc_822E3D6C;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822e3d6c
	if (ctx.cr0.eq) goto loc_822E3D6C;
	// lwz r31,8(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r4,r31,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r4,86
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 86, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
	// cmplwi cr6,r4,87
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 87, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
	// cmplwi cr6,r4,89
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 89, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
	// cmplwi cr6,r4,90
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 90, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
	// cmplwi cr6,r4,84
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 84, ctx.xer);
	// beq cr6,0x822e3ca8
	if (ctx.cr6.eq) goto loc_822E3CA8;
	// cmplwi cr6,r4,85
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822e3cac
	if (!ctx.cr6.eq) goto loc_822E3CAC;
loc_822E3CA8:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_822E3CAC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3d6c
	if (ctx.cr0.eq) goto loc_822E3D6C;
	// rlwinm r6,r31,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x7;
	// rlwinm r5,r31,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 13) & 0x7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d728
	ctx.lr = 0x822E3CC4;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// clrlwi. r9,r10,30
	ctx.r9.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822e3d6c
	if (!ctx.cr0.eq) goto loc_822E3D6C;
	// rlwinm r8,r10,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x822e3cec
	if (ctx.cr6.eq) goto loc_822E3CEC;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x822e3d6c
	if (!ctx.cr6.eq) goto loc_822E3D6C;
loc_822E3CEC:
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
loc_822E3CF0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e3d10
	if (ctx.cr6.eq) goto loc_822E3D10;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822e3d14
	if (!ctx.cr6.eq) goto loc_822E3D14;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x822e3cf0
	goto loc_822E3CF0;
loc_822E3D10:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E3D14:
	// addi r9,r8,-8
	ctx.r9.s64 = ctx.r8.s64 + -8;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822e3d50
	if (ctx.cr6.eq) goto loc_822E3D50;
	// not r8,r31
	ctx.r8.u64 = ~ctx.r31.u64;
	// rlwimi r8,r31,0,14,12
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF) | (ctx.r8.u64 & 0x40000);
	// stw r8,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r7,r8
	ctx.r7.u64 = ~ctx.r8.u64;
	// rlwimi r7,r8,0,31,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r7.u64 & 0x2);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_822E3D50:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822e3d6c
	if (ctx.cr6.eq) goto loc_822E3D6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281c68
	ctx.lr = 0x822E3D6C;
	sub_82281C68(ctx, base);
loc_822E3D6C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e3d88
	if (!ctx.cr0.eq) goto loc_822E3D88;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3c50
	if (!ctx.cr6.eq) goto loc_822E3C50;
loc_822E3D88:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3f54
	if (ctx.cr0.eq) goto loc_822E3F54;
	// lwz r10,620(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 620);
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822e3f54
	if (!ctx.cr6.lt) goto loc_822E3F54;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_822E3DB0:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3f34
	if (ctx.cr0.eq) goto loc_822E3F34;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3df4
	if (ctx.cr6.eq) goto loc_822E3DF4;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3df4
	if (ctx.cr0.eq) goto loc_822E3DF4;
	// b 0x822e3de4
	goto loc_822E3DE4;
loc_822E3DD8:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3df0
	if (ctx.cr0.eq) goto loc_822E3DF0;
loc_822E3DE4:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3dd8
	if (!ctx.cr6.eq) goto loc_822E3DD8;
loc_822E3DF0:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_822E3DF4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3e2c
	if (ctx.cr6.eq) goto loc_822E3E2C;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3e2c
	if (ctx.cr0.eq) goto loc_822E3E2C;
	// b 0x822e3e1c
	goto loc_822E3E1C;
loc_822E3E10:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3e28
	if (ctx.cr0.eq) goto loc_822E3E28;
loc_822E3E1C:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3e10
	if (!ctx.cr6.eq) goto loc_822E3E10;
loc_822E3E28:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822E3E2C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3e64
	if (ctx.cr6.eq) goto loc_822E3E64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3e64
	if (ctx.cr0.eq) goto loc_822E3E64;
	// b 0x822e3e54
	goto loc_822E3E54;
loc_822E3E48:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e3e60
	if (ctx.cr0.eq) goto loc_822E3E60;
loc_822E3E54:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e3e48
	if (!ctx.cr6.eq) goto loc_822E3E48;
loc_822E3E60:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822E3E64:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e3f34
	if (ctx.cr6.eq) goto loc_822E3F34;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e3f34
	if (ctx.cr6.eq) goto loc_822E3F34;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e3f34
	if (ctx.cr6.eq) goto loc_822E3F34;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e3f34
	if (!ctx.cr0.eq) goto loc_822E3F34;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3f34
	if (ctx.cr0.eq) goto loc_822E3F34;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x822e3f34
	if (!ctx.cr6.eq) goto loc_822E3F34;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822cff58
	ctx.lr = 0x822E3EC0;
	sub_822CFF58(ctx, base);
	// lwz r30,16(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e3f34
	if (ctx.cr0.eq) goto loc_822E3F34;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822E3EF0;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822E3F1C;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x822814f0
	ctx.lr = 0x822E3F34;
	sub_822814F0(ctx, base);
loc_822E3F34:
	// lwz r10,620(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 620);
	// addi r31,r31,68
	ctx.r31.s64 = ctx.r31.s64 + 68;
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822e3db0
	if (ctx.cr6.lt) goto loc_822E3DB0;
loc_822E3F54:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x822E3F64;
	sub_8226DBE8(ctx, base);
	// addi r20,r3,4
	ctx.r20.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r20,1
	ctx.r10.u64 = ctx.r20.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x822E3F8C;
	sub_8226DBE8(ctx, base);
	// addi r18,r3,4
	ctx.r18.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r18,1
	ctx.r10.u64 = ctx.r18.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r21,r25,4
	ctx.r21.s64 = ctx.r25.s64 + 4;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// ori r19,r25,1
	ctx.r19.u64 = ctx.r25.u64 | 1;
	// lwz r11,108(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 108);
	// ori r10,r21,1
	ctx.r10.u64 = ctx.r21.u64 | 1;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r19,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r19.u32);
	// addi r22,r11,1
	ctx.r22.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// stw r22,108(r25)
	REX_STORE_U32(ctx.r25.u32 + 108, ctx.r22.u32);
	// and r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 & ctx.r9.u64;
loc_822E3FD8:
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r19,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r19.u32);
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r22,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r22.u32);
	// lwz r30,40(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r30,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4110
	if (ctx.cr0.eq) goto loc_822E4110;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4110
	if (!ctx.cr0.eq) goto loc_822E4110;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822e4110
	if (ctx.cr0.eq) goto loc_822E4110;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x822e4068
	if (ctx.cr6.eq) goto loc_822E4068;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x822e4068
	if (ctx.cr6.eq) goto loc_822E4068;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x822e4068
	if (ctx.cr6.eq) goto loc_822E4068;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x822e4068
	if (ctx.cr6.eq) goto loc_822E4068;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x822e4068
	if (ctx.cr6.eq) goto loc_822E4068;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822e406c
	if (!ctx.cr6.eq) goto loc_822E406C;
loc_822E4068:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_822E406C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4110
	if (ctx.cr0.eq) goto loc_822E4110;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822E408C;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4110
	if (!ctx.cr0.eq) goto loc_822E4110;
	// rlwinm r8,r11,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// beq cr6,0x822e40b4
	if (ctx.cr6.eq) goto loc_822E40B4;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bne cr6,0x822e4110
	if (!ctx.cr6.eq) goto loc_822E4110;
loc_822E40B4:
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_822E40B8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e40d8
	if (ctx.cr6.eq) goto loc_822E40D8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x822e40dc
	if (!ctx.cr6.eq) goto loc_822E40DC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822e40b8
	goto loc_822E40B8;
loc_822E40D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E40DC:
	// addi r10,r8,-8
	ctx.r10.s64 = ctx.r8.s64 + -8;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r8,r8,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x822e481c
	if (!ctx.cr6.eq) goto loc_822E481C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822e481c
	if (ctx.cr6.eq) goto loc_822E481C;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4314
	if (!ctx.cr6.eq) goto loc_822E4314;
loc_822E4110:
	// rlwinm. r11,r30,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4314
	if (ctx.cr0.eq) goto loc_822E4314;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e418c
	if (!ctx.cr0.eq) goto loc_822E418C;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822e418c
	if (ctx.cr0.eq) goto loc_822E418C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x822e418c
	if (!ctx.cr6.eq) goto loc_822E418C;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822E415C;
	sub_8226D728(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
loc_822E4168:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4184
	if (ctx.cr6.eq) goto loc_822E4184;
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e4314
	if (!ctx.cr6.eq) goto loc_822E4314;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e4168
	goto loc_822E4168;
loc_822E4184:
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x822e4314
	goto loc_822E4314;
loc_822E418C:
	// addi r3,r28,84
	ctx.r3.s64 = ctx.r28.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_822E4198:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822e42ac
	if (!ctx.cr6.eq) goto loc_822E42AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822e4198
	if (ctx.cr6.lt) goto loc_822E4198;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E41B8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4314
	if (ctx.cr0.eq) goto loc_822E4314;
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e41dc
	if (ctx.cr6.eq) goto loc_822E41DC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne cr6,0x822e41e0
	if (!ctx.cr6.eq) goto loc_822E41E0;
loc_822E41DC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822E41E0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e4314
	if (ctx.cr0.eq) goto loc_822E4314;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_822E41F8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822e42d8
	if (ctx.cr6.eq) goto loc_822E42D8;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// subf r8,r28,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_822E4210:
	// lwzx r31,r8,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822e42b4
	if (!ctx.cr6.eq) goto loc_822E42B4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x822e4210
	if (ctx.cr6.lt) goto loc_822E4210;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_822E4234:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e42cc
	if (ctx.cr0.eq) goto loc_822E42CC;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r9,40(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r17,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e42d0
	if (!ctx.cr0.eq) goto loc_822E42D0;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
loc_822E426C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e42c4
	if (ctx.cr6.eq) goto loc_822E42C4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,40(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// clrlwi r31,r9,13
	ctx.r31.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r31,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r31,r31,27
	ctx.r31.u64 = ctx.r31.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r31,r17,r31
	ctx.r31.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r31.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// and. r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822e42bc
	if (!ctx.cr0.eq) goto loc_822E42BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822e426c
	goto loc_822E426C;
loc_822E42AC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x822e41b8
	goto loc_822E41B8;
loc_822E42B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x822e4234
	goto loc_822E4234;
loc_822E42BC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x822e42d0
	goto loc_822E42D0;
loc_822E42C4:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// b 0x822e42d0
	goto loc_822E42D0;
loc_822E42CC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_822E42D0:
	// lwz r7,8(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// b 0x822e41f8
	goto loc_822E41F8;
loc_822E42D8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e42e8
	if (!ctx.cr6.eq) goto loc_822E42E8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e4314
	if (ctx.cr6.eq) goto loc_822E4314;
loc_822E42E8:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x822e4308
	if (ctx.cr6.eq) goto loc_822E4308;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822e4300
	if (!ctx.cr6.eq) goto loc_822E4300;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e4314
	if (ctx.cr6.eq) goto loc_822E4314;
loc_822E4300:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x822e4314
	goto loc_822E4314;
loc_822E4308:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822e4314
	if (ctx.cr6.eq) goto loc_822E4314;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
loc_822E4314:
	// lwz r29,12(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822E4320:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e44bc
	if (ctx.cr6.eq) goto loc_822E44BC;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822e4474
	if (ctx.cr6.eq) goto loc_822E4474;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r8,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4400
	if (ctx.cr0.eq) goto loc_822E4400;
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r9,r10,0,2,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFF8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822e4380
	if (!ctx.cr0.eq) goto loc_822E4380;
	// rlwinm r10,r10,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_822E4360:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e4380
	if (ctx.cr6.eq) goto loc_822E4380;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// rlwimi r8,r9,0,0,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF8000) | (ctx.r8.u64 & 0xFFFFFFFF00007FFF);
	// stw r8,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x822e4360
	goto loc_822E4360;
loc_822E4380:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// addi r9,r9,-32768
	ctx.r9.s64 = ctx.r9.s64 + -32768;
	// rlwimi r9,r10,0,17,1
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFC0007FFF) | (ctx.r9.u64 & 0x3FFF8000);
	// rlwinm r10,r9,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFFF;
	// stw r9,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// xor r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// clrlwi. r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4474
	if (!ctx.cr0.eq) goto loc_822E4474;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e43d8
	if (!ctx.cr0.eq) goto loc_822E43D8;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e43d8
	if (ctx.cr0.eq) goto loc_822E43D8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e43e4
	if (!ctx.cr6.gt) goto loc_822E43E4;
loc_822E43D8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822fade8
	ctx.lr = 0x822E43E4;
	sub_822FADE8(ctx, base);
loc_822E43E4:
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
	// b 0x822e4474
	goto loc_822E4474;
loc_822E4400:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_822E4404:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822e4448
	if (ctx.cr6.eq) goto loc_822E4448;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822e4440
	if (ctx.cr6.eq) goto loc_822E4440;
	// rlwinm r10,r8,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FFF;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4474
	if (ctx.cr0.eq) goto loc_822E4474;
loc_822E4440:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x822e4404
	goto loc_822E4404;
loc_822E4448:
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822e445c
	if (!ctx.cr6.eq) goto loc_822E445C;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// lis r30,4096
	ctx.r30.s64 = 268435456;
	// b 0x822e4474
	goto loc_822E4474;
loc_822E445C:
	// lwz r11,68(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,4
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x822e447c
	if (!ctx.cr6.gt) goto loc_822E447C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_822E4470:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_822E4474:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x822e4320
	goto loc_822E4320;
loc_822E447C:
	// bne cr6,0x822e4474
	if (!ctx.cr6.eq) goto loc_822E4474;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
loc_822E4484:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4474
	if (ctx.cr6.eq) goto loc_822E4474;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r8,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3FFF;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r9,40(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4470
	if (!ctx.cr0.eq) goto loc_822E4470;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x822e4484
	goto loc_822E4484;
loc_822E44BC:
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4590
	if (!ctx.cr0.eq) goto loc_822E4590;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822e4590
	if (ctx.cr0.eq) goto loc_822E4590;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10752, ctx.xer);
	// bne cr6,0x822e4590
	if (!ctx.cr6.eq) goto loc_822E4590;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d728
	ctx.lr = 0x822E44FC;
	sub_8226D728(ctx, base);
	// addi r10,r31,-20
	ctx.r10.s64 = ctx.r31.s64 + -20;
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x822e452c
	goto loc_822E452C;
loc_822E4524:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_822E452C:
	// beq 0x822e453c
	if (ctx.cr0.eq) goto loc_822E453C;
	// lwz r31,80(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e4524
	if (!ctx.cr6.eq) goto loc_822E4524;
loc_822E453C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e456c
	if (!ctx.cr0.eq) goto loc_822E456C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e456c
	if (ctx.cr0.eq) goto loc_822E456C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e4578
	if (!ctx.cr6.gt) goto loc_822E4578;
loc_822E456C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822fade8
	ctx.lr = 0x822E4578;
	sub_822FADE8(ctx, base);
loc_822E4578:
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
loc_822E4590:
	// lwz r29,12(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_822E4594:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822e4744
	if (ctx.cr6.eq) goto loc_822E4744;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822e473c
	if (ctx.cr6.eq) goto loc_822E473C;
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// rlwinm. r11,r9,13,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e473c
	if (!ctx.cr0.eq) goto loc_822E473C;
	// lwz r8,8(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_822E45BC:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822e4600
	if (ctx.cr6.eq) goto loc_822E4600;
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822e45f8
	if (ctx.cr6.eq) goto loc_822E45F8;
	// rlwinm r10,r9,27,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3FFF;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r17,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e473c
	if (ctx.cr0.eq) goto loc_822E473C;
loc_822E45F8:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// b 0x822e45bc
	goto loc_822E45BC;
loc_822E4600:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e46e0
	if (!ctx.cr0.eq) goto loc_822E46E0;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822e46e0
	if (ctx.cr0.eq) goto loc_822E46E0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x822e46e0
	if (!ctx.cr6.eq) goto loc_822E46E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,85
	ctx.r4.s64 = 85;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d728
	ctx.lr = 0x822E4640;
	sub_8226D728(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// lwzx r31,r3,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8226d728
	ctx.lr = 0x822E465C;
	sub_8226D728(ctx, base);
	// addi r10,r31,-20
	ctx.r10.s64 = ctx.r31.s64 + -20;
	// lwz r11,616(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 616);
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r10,r10,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// mulli r10,r10,68
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(68));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,10,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x822e468c
	goto loc_822E468C;
loc_822E4684:
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_822E468C:
	// beq 0x822e469c
	if (ctx.cr0.eq) goto loc_822E469C;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4684
	if (!ctx.cr6.eq) goto loc_822E4684;
loc_822E469C:
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_822E46A0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822e46c4
	if (ctx.cr6.eq) goto loc_822E46C4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e46bc
	if (ctx.cr6.eq) goto loc_822E46BC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822e46a0
	goto loc_822E46A0;
loc_822E46BC:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// b 0x822e46c8
	goto loc_822E46C8;
loc_822E46C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E46C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e46e0
	if (ctx.cr0.eq) goto loc_822E46E0;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822e473c
	if (!ctx.cr6.eq) goto loc_822E473C;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x822e473c
	goto loc_822E473C;
loc_822E46E0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x822e473c
	if (ctx.cr6.eq) goto loc_822E473C;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4718
	if (!ctx.cr0.eq) goto loc_822E4718;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822e4718
	if (ctx.cr0.eq) goto loc_822E4718;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822e4724
	if (!ctx.cr6.gt) goto loc_822E4724;
loc_822E4718:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822fade8
	ctx.lr = 0x822E4724;
	sub_822FADE8(ctx, base);
loc_822E4724:
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
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
loc_822E473C:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x822e4594
	goto loc_822E4594;
loc_822E4744:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x822e3fd8
	if (!ctx.cr6.eq) goto loc_822E3FD8;
loc_822E4750:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4764
	if (!ctx.cr0.eq) goto loc_822E4764;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822e47a8
	if (!ctx.cr0.eq) goto loc_822E47A8;
loc_822E4764:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e4828
	if (!ctx.cr0.eq) goto loc_822E4828;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e4828
	if (ctx.cr0.eq) goto loc_822E4828;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
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
	// bne 0x822e4808
	if (!ctx.cr0.eq) goto loc_822E4808;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x822e47d4
	goto loc_822E47D4;
loc_822E47A8:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
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
	// bne 0x822e4808
	if (!ctx.cr0.eq) goto loc_822E4808;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_822E47D4:
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
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
	ctx.lr = 0x822E4808;
	sub_8225B140(ctx, base);
loc_822E4808:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822e4750
	if (ctx.cr6.eq) goto loc_822E4750;
	// b 0x822e3fd8
	goto loc_822E3FD8;
loc_822E481C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822E4828;
	sub_8225B1A0(ctx, base);
loc_822E4828:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e49a4
	if (!ctx.cr0.eq) goto loc_822E49A4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e49a4
	if (ctx.cr0.eq) goto loc_822E49A4;
loc_822E4840:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e485c
	if (ctx.cr6.eq) goto loc_822E485C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// bne cr6,0x822e4860
	if (!ctx.cr6.eq) goto loc_822E4860;
loc_822E485C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E4860:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e4988
	if (ctx.cr0.eq) goto loc_822E4988;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e4988
	if (!ctx.cr0.eq) goto loc_822E4988;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822e4988
	if (ctx.cr0.eq) goto loc_822E4988;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,11520
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11520, ctx.xer);
	// bne cr6,0x822e4988
	if (!ctx.cr6.eq) goto loc_822E4988;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822E48AC;
	sub_8226D728(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r30,-16
	ctx.r10.s64 = ctx.r30.s64 + -16;
	// add r31,r3,r10
	ctx.r31.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e4988
	if (!ctx.cr6.eq) goto loc_822E4988;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e48f8
	if (!ctx.cr0.eq) goto loc_822E48F8;
	// rlwinm r11,r11,30,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xF;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x822e48f8
	if (ctx.cr6.lt) goto loc_822E48F8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x822e4988
	if (!ctx.cr6.gt) goto loc_822E4988;
loc_822E48F8:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82332240
	ctx.lr = 0x822E4908;
	sub_82332240(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822e4988
	if (ctx.cr0.eq) goto loc_822E4988;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
loc_822E4914:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e4934
	if (ctx.cr6.eq) goto loc_822E4934;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822e4938
	if (!ctx.cr6.eq) goto loc_822E4938;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e4914
	goto loc_822E4914;
loc_822E4934:
	// li r8,0
	ctx.r8.s64 = 0;
loc_822E4938:
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822e4954
	goto loc_822E4954;
loc_822E494C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_822E4954:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e494c
	if (!ctx.cr6.eq) goto loc_822E494C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwimi r10,r11,0,31,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r10.u64 & 0x2);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_822E4988:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e49a4
	if (!ctx.cr0.eq) goto loc_822E49A4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e4840
	if (!ctx.cr6.eq) goto loc_822E4840;
loc_822E49A4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314920) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82314928;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-14148
	ctx.r29.s64 = ctx.r10.s64 + -14148;
	// addi r28,r9,1880
	ctx.r28.s64 = ctx.r9.s64 + 1880;
	// addi r27,r11,12912
	ctx.r27.s64 = ctx.r11.s64 + 12912;
	// bne cr6,0x8231496c
	if (!ctx.cr6.eq) goto loc_8231496C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,178
	ctx.r7.s64 = 178;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231496C;
	sub_82260F30(ctx, base);
loc_8231496C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82314a04
	if (ctx.cr6.eq) goto loc_82314A04;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314998
	if (ctx.cr6.eq) goto loc_82314998;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x823149e4
	goto loc_823149E4;
loc_82314998:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823149b8
	if (ctx.cr6.eq) goto loc_823149B8;
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82314998
	if (ctx.cr6.eq) goto loc_82314998;
loc_823149B8:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231496c
	if (!ctx.cr6.eq) goto loc_8231496C;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82314800
	ctx.lr = 0x823149DC;
	sub_82314800(ctx, base);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_823149E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8231496c
	if (ctx.cr6.eq) goto loc_8231496C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_823149FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_82314A04:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314A1C;
	sub_82260F30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823149fc
	goto loc_823149FC;
}

DEFINE_REX_FUNC(sub_82315948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82315950;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r27,r10,-14148
	ctx.r27.s64 = ctx.r10.s64 + -14148;
	// addi r26,r9,13464
	ctx.r26.s64 = ctx.r9.s64 + 13464;
	// bne cr6,0x82315990
	if (!ctx.cr6.eq) goto loc_82315990;
	// lwz r29,1188(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823159c0
	goto loc_823159C0;
loc_82315990:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823159b4
	if (ctx.cr6.eq) goto loc_823159B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,13604
	ctx.r5.s64 = ctx.r11.s64 + 13604;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,666
	ctx.r7.s64 = 666;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823159B4;
	sub_82260F30(ctx, base);
loc_823159B4:
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	// li r29,32
	ctx.r29.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_823159C0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82315a5c
	if (!ctx.cr6.lt) goto loc_82315A5C;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,32
	ctx.r31.s64 = ctx.r11.s64 + 32;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,13776
	ctx.r28.s64 = ctx.r11.s64 + 13776;
loc_823159E0:
	// lwz r11,-8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82315a04
	if (ctx.cr6.eq) goto loc_82315A04;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,674
	ctx.r7.s64 = 674;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315A04;
	sub_82260F30(ctx, base);
loc_82315A04:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82315a4c
	if (!ctx.cr6.eq) goto loc_82315A4C;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82315a4c
	if (ctx.cr6.eq) goto loc_82315A4C;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_82315A24:
	// lwz r8,-12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + -12);
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82315a3c
	if (!ctx.cr6.eq) goto loc_82315A3C;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82315a68
	if (ctx.cr6.eq) goto loc_82315A68;
loc_82315A3C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82315a24
	if (ctx.cr6.lt) goto loc_82315A24;
loc_82315A4C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823159e0
	if (ctx.cr6.lt) goto loc_823159E0;
loc_82315A5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315A60:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_82315A68:
	// stw r30,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r10.u32);
	// b 0x82315a60
	goto loc_82315A60;
}

DEFINE_REX_FUNC(sub_82317AF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82317AF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82317b28
	if (!ctx.cr6.eq) goto loc_82317B28;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,15856
	ctx.r6.s64 = ctx.r11.s64 + 15856;
	// addi r5,r10,15844
	ctx.r5.s64 = ctx.r10.s64 + 15844;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,141
	ctx.r7.s64 = 141;
	// bl 0x82260f30
	ctx.lr = 0x82317B28;
	sub_82260F30(ctx, base);
loc_82317B28:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82317b60
	if (!ctx.cr6.gt) goto loc_82317B60;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82317B3C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r4,r30,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x82314be0
	ctx.lr = 0x82317B4C;
	sub_82314BE0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82317b3c
	if (ctx.cr6.lt) goto loc_82317B3C;
loc_82317B60:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317B74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82317B88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82318420) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82318428;
	__savegprlr_23(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r28,28(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r6,12(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8233bf98
	ctx.lr = 0x82318468;
	sub_8233BF98(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,12(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x8233b928
	ctx.lr = 0x82318484;
	sub_8233B928(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,12(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,20(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8233bbc8
	ctx.lr = 0x823184A4;
	sub_8233BBC8(ctx, base);
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82329028
	ctx.lr = 0x823184C4;
	sub_82329028(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r24,r11,-14148
	ctx.r24.s64 = ctx.r11.s64 + -14148;
	// addi r23,r10,16040
	ctx.r23.s64 = ctx.r10.s64 + 16040;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823184fc
	if (ctx.cr6.eq) goto loc_823184FC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,16204
	ctx.r5.s64 = ctx.r11.s64 + 16204;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1272
	ctx.r7.s64 = 1272;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823184FC;
	sub_82260F30(ctx, base);
loc_823184FC:
	// rlwimi r30,r31,7,19,24
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0x1F80) | (ctx.r30.u64 & 0xFFFFFFFFFFFFE07F);
	// lwz r31,12024(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 12024);
	// clrlwi r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	// rlwinm r10,r30,14,5,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 14) & 0x7FFC000;
	// li r26,3
	ctx.r26.s64 = 3;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r9,0,20,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFC;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r8,r8,0,24,21
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r10,r11,7,20,24
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xF80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF07F);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r11,r10,5,25,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x60) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF9F);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stb r11,8(r31)
	REX_STORE_U8(ctx.r31.u32 + 8, ctx.r11.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwimi r10,r26,2,27,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x1C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE3);
	// rlwimi r11,r9,1,8,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFE) | (ctx.r11.u64 & 0xFFFFFFFFFF000001);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r27,r11,16184
	ctx.r27.s64 = ctx.r11.s64 + 16184;
loc_823185A4:
	// lbzx r10,r29,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82318648
	if (ctx.cr6.eq) goto loc_82318648;
	// cmplwi cr6,r10,49
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 49, ctx.xer);
	// beq cr6,0x82318640
	if (ctx.cr6.eq) goto loc_82318640;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// beq cr6,0x82318638
	if (ctx.cr6.eq) goto loc_82318638;
	// cmplwi cr6,r10,119
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 119, ctx.xer);
	// beq cr6,0x82318630
	if (ctx.cr6.eq) goto loc_82318630;
	// cmplwi cr6,r10,120
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 120, ctx.xer);
	// beq cr6,0x82318628
	if (ctx.cr6.eq) goto loc_82318628;
	// cmplwi cr6,r10,121
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 121, ctx.xer);
	// beq cr6,0x82318620
	if (ctx.cr6.eq) goto loc_82318620;
	// cmplwi cr6,r10,122
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 122, ctx.xer);
	// beq cr6,0x82318618
	if (ctx.cr6.eq) goto loc_82318618;
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x8231860c
	if (!ctx.cr6.gt) goto loc_8231860C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1324
	ctx.r7.s64 = 1324;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82318608;
	sub_82260F30(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_8231860C:
	// lbzx r11,r29,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r9.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// b 0x8231864c
	goto loc_8231864C;
loc_82318618:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8231864c
	goto loc_8231864C;
loc_82318620:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8231864c
	goto loc_8231864C;
loc_82318628:
	// stw r25,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
	// b 0x82318650
	goto loc_82318650;
loc_82318630:
	// stw r26,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// b 0x82318650
	goto loc_82318650;
loc_82318638:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8231864c
	goto loc_8231864C;
loc_82318640:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8231864c
	goto loc_8231864C;
loc_82318648:
	// li r11,4
	ctx.r11.s64 = 4;
loc_8231864C:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82318650:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x823185a4
	if (ctx.cr6.lt) goto loc_823185A4;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r11,r10,3,26,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x38) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,29,0,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0xE0000000;
	// rlwimi r10,r11,3,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r9,0,12,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFE00FFFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r10,r11,19,12,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x80000) | (ctx.r10.u64 & 0xFFFFFFFFFFF7FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r10,r11,18,13,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x40000) | (ctx.r10.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwimi r10,r11,10,16,21
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFC00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF03FF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,10820(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 10820);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x823186ec
	if (!ctx.cr6.gt) goto loc_823186EC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,16136
	ctx.r5.s64 = ctx.r11.s64 + 16136;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823186EC;
	sub_82260F30(ctx, base);
loc_823186EC:
	// lwz r11,12024(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12024);
	// lwz r10,10820(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 10820);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12024(r28)
	REX_STORE_U32(ctx.r28.u32 + 12024, ctx.r11.u32);
	// stw r10,10820(r28)
	REX_STORE_U32(ctx.r28.u32 + 10820, ctx.r10.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231FC08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8231FC10;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r30,28(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r27,r10,-14148
	ctx.r27.s64 = ctx.r10.s64 + -14148;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// addi r26,r9,16040
	ctx.r26.s64 = ctx.r9.s64 + 16040;
	// beq cr6,0x8231fc68
	if (ctx.cr6.eq) goto loc_8231FC68;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8231fc68
	if (ctx.cr6.eq) goto loc_8231FC68;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,17520
	ctx.r5.s64 = ctx.r11.s64 + 17520;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,11951
	ctx.r7.s64 = 11951;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231FC68;
	sub_82260F30(ctx, base);
loc_8231FC68:
	// cmplwi cr6,r25,31
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 31, ctx.xer);
	// ble cr6,0x8231fc8c
	if (!ctx.cr6.gt) goto loc_8231FC8C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,17496
	ctx.r5.s64 = ctx.r11.s64 + 17496;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,11954
	ctx.r7.s64 = 11954;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231FC8C;
	sub_82260F30(ctx, base);
loc_8231FC8C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r11,r11,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFC0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8231fccc
	if (!ctx.cr6.eq) goto loc_8231FCCC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,17424
	ctx.r5.s64 = ctx.r11.s64 + 17424;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,11959
	ctx.r7.s64 = 11959;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231FCCC;
	sub_82260F30(ctx, base);
loc_8231FCCC:
	// lhz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82318420
	ctx.lr = 0x8231FCF8;
	sub_82318420(ctx, base);
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r6,1
	ctx.r6.s64 = 65536;
	// addi r4,r30,13152
	ctx.r4.s64 = ctx.r30.s64 + 13152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r5,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// bl 0x82318390
	ctx.lr = 0x8231FD20;
	sub_82318390(ctx, base);
	// lwz r11,1636(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1636(r31)
	REX_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82325228) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82325230;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-14148
	ctx.r31.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,16040
	ctx.r29.s64 = ctx.r10.s64 + 16040;
	// bne cr6,0x82325278
	if (!ctx.cr6.eq) goto loc_82325278;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,18760
	ctx.r5.s64 = ctx.r11.s64 + 18760;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,16315
	ctx.r7.s64 = 16315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82325278;
	sub_82260F30(ctx, base);
loc_82325278:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8232529c
	if (!ctx.cr6.eq) goto loc_8232529C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,5204
	ctx.r5.s64 = ctx.r11.s64 + 5204;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,16316
	ctx.r7.s64 = 16316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8232529C;
	sub_82260F30(ctx, base);
loc_8232529C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r4,1760
	ctx.r4.s64 = 1760;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823252B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1760
	ctx.r11.s64 = 1760;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823252C8:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x823252c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823252C8;
	// li r10,1600
	ctx.r10.s64 = 1600;
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// li r8,255
	ctx.r8.s64 = 255;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823252E0:
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x823252e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823252E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r4,23380
	ctx.r4.s64 = 23380;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r27,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r28,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r8,1656(r31)
	REX_STORE_U32(ctx.r31.u32 + 1656, ctx.r8.u32);
	// stw r9,1652(r31)
	REX_STORE_U32(ctx.r31.u32 + 1652, ctx.r9.u32);
	// stw r7,1668(r31)
	REX_STORE_U32(ctx.r31.u32 + 1668, ctx.r7.u32);
	// stw r9,1692(r31)
	REX_STORE_U32(ctx.r31.u32 + 1692, ctx.r9.u32);
	// stw r10,1672(r31)
	REX_STORE_U32(ctx.r31.u32 + 1672, ctx.r10.u32);
	// stw r9,1676(r31)
	REX_STORE_U32(ctx.r31.u32 + 1676, ctx.r9.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232534C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,12000
	ctx.r4.s64 = 12000;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82325364;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82324e98
	ctx.lr = 0x82325378;
	sub_82324E98(ctx, base);
	// rlwinm r4,r3,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82329288
	ctx.lr = 0x82325388;
	sub_82329288(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232539C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823253B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823253C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82326418) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82326420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r4,1444(r3)
	REX_STORE_U32(ctx.r3.u32 + 1444, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,1384(r3)
	REX_STORE_U32(ctx.r3.u32 + 1384, ctx.r8.u32);
	// lis r4,0
	ctx.r4.s64 = 0;
	// stw r6,1436(r3)
	REX_STORE_U32(ctx.r3.u32 + 1436, ctx.r6.u32);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r5,1440(r3)
	REX_STORE_U32(ctx.r3.u32 + 1440, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// ori r8,r4,61370
	ctx.r8.u64 = ctx.r4.u64 | 61370;
	// stb r10,1368(r3)
	REX_STORE_U8(ctx.r3.u32 + 1368, ctx.r10.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,2712(r3)
	REX_STORE_U32(ctx.r3.u32 + 2712, ctx.r11.u32);
	// li r30,16
	ctx.r30.s64 = 16;
	// stb r10,2128(r3)
	REX_STORE_U8(ctx.r3.u32 + 2128, ctx.r10.u8);
	// stb r10,2129(r3)
	REX_STORE_U8(ctx.r3.u32 + 2129, ctx.r10.u8);
	// li r4,52
	ctx.r4.s64 = 52;
	// stw r29,2736(r3)
	REX_STORE_U32(ctx.r3.u32 + 2736, ctx.r29.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r8,2136(r31)
	REX_STORE_U32(ctx.r31.u32 + 2136, ctx.r8.u32);
	// stw r11,2716(r31)
	REX_STORE_U32(ctx.r31.u32 + 2716, ctx.r11.u32);
	// stw r11,2720(r31)
	REX_STORE_U32(ctx.r31.u32 + 2720, ctx.r11.u32);
	// stw r11,2724(r31)
	REX_STORE_U32(ctx.r31.u32 + 2724, ctx.r11.u32);
	// stw r30,2728(r31)
	REX_STORE_U32(ctx.r31.u32 + 2728, ctx.r30.u32);
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// bctrl 
	ctx.lr = 0x82326494;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823264ec
	if (ctx.cr0.eq) goto loc_823264EC;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// stw r30,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r30.u32);
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// li r9,4095
	ctx.r9.s64 = 4095;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// addi r11,r8,20508
	ctx.r11.s64 = ctx.r8.s64 + 20508;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r8,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r8.u32);
	// stw r10,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// b 0x823264f0
	goto loc_823264F0;
loc_823264EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_823264F0:
	// stw r11,1360(r31)
	REX_STORE_U32(ctx.r31.u32 + 1360, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1448(r31)
	REX_STORE_U32(ctx.r31.u32 + 1448, ctx.r29.u32);
	// stw r29,1452(r31)
	REX_STORE_U32(ctx.r31.u32 + 1452, ctx.r29.u32);
	// stw r29,1456(r31)
	REX_STORE_U32(ctx.r31.u32 + 1456, ctx.r29.u32);
	// bl 0x823261b0
	ctx.lr = 0x82326508;
	sub_823261B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82326260
	ctx.lr = 0x82326510;
	sub_82326260(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82329CC0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f29.u64);
	// stfd f30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f29,-9888(r11)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fcmpu cr6,f1,f29
	ctx.cr6.compare(ctx.f1.f64, ctx.f29.f64);
	// bne cr6,0x82329cf4
	if (!ctx.cr6.eq) goto loc_82329CF4;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82329d70
	goto loc_82329D70;
loc_82329CF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bge cr6,0x82329d14
	if (!ctx.cr6.lt) goto loc_82329D14;
loc_82329D04:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_82329D08:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82329d70
	goto loc_82329D70;
loc_82329D14:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821649c8
	ctx.lr = 0x82329D1C;
	sub_821649C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82329d64
	if (!ctx.cr0.gt) goto loc_82329D64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82329d04
	if (!ctx.cr6.gt) goto loc_82329D04;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82329d04
	if (ctx.cr6.eq) goto loc_82329D04;
	// cmpwi cr6,r3,32
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32, ctx.xer);
	// beq cr6,0x82329d5c
	if (ctx.cr6.eq) goto loc_82329D5C;
	// cmpwi cr6,r3,64
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 64, ctx.xer);
	// beq cr6,0x82329d54
	if (ctx.cr6.eq) goto loc_82329D54;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// bne cr6,0x82329d64
	if (!ctx.cr6.eq) goto loc_82329D64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82329d70
	goto loc_82329D70;
loc_82329D54:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x82329d08
	goto loc_82329D08;
loc_82329D5C:
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x82329d08
	goto loc_82329D08;
loc_82329D64:
	// fsqrt f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = sqrt(ctx.f31.f64);
	// fdiv f1,f29,f0
	ctx.f1.f64 = ctx.f29.f64 / ctx.f0.f64;
	// bl 0x822c5f78
	ctx.lr = 0x82329D70;
	sub_822C5F78(ctx, base);
loc_82329D70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f30,-24(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232B578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8232B580;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,8(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r29,r11,22616
	ctx.r29.s64 = ctx.r11.s64 + 22616;
	// rlwinm r25,r30,31,28,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0xF;
	// rlwinm r27,r30,25,25,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 25) & 0x7F;
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r24,1
	ctx.r24.s64 = 1;
	// clrlwi r22,r4,28
	ctx.r22.u64 = ctx.r4.u32 & 0xF;
	// lbz r11,-1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// rlwinm r10,r11,27,5,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFE;
	// rlwinm r9,r11,29,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r9,r5,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r9,r10,2,28,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,31,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// srw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r10,r9,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// srw r23,r5,r11
	ctx.r23.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r23,r10,2,0,29
	ctx.r23.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r23.u64 & 0xFFFFFFFF00000003);
	// blt cr6,0x8232b5f8
	if (ctx.cr6.lt) goto loc_8232B5F8;
	// cmplwi cr6,r27,102
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 102, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// ble cr6,0x8232b5fc
	if (!ctx.cr6.gt) goto loc_8232B5FC;
loc_8232B5F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232B5FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b86c
	if (ctx.cr0.eq) goto loc_8232B86C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,228
	ctx.r8.s64 = 228;
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// bne cr6,0x8232b650
	if (!ctx.cr6.eq) goto loc_8232B650;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8226d728
	ctx.lr = 0x8232B634;
	sub_8226D728(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r11,20,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// rlwinm r6,r11,24,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// rlwinm r8,r11,15,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0xFF;
	// b 0x8232b6ac
	goto loc_8232B6AC;
loc_8232B650:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 97, ctx.xer);
	// beq cr6,0x8232b66c
	if (ctx.cr6.eq) goto loc_8232B66C;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 99, ctx.xer);
	// beq cr6,0x8232b66c
	if (ctx.cr6.eq) goto loc_8232B66C;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232b670
	if (!ctx.cr6.eq) goto loc_8232B670;
loc_8232B66C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8232B670:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b6ac
	if (ctx.cr0.eq) goto loc_8232B6AC;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8226d728
	ctx.lr = 0x8232B694;
	sub_8226D728(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = ctx.r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lbz r8,14(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 14);
	// rlwinm r7,r10,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF;
	// clrlwi r6,r10,28
	ctx.r6.u64 = ctx.r10.u32 & 0xF;
loc_8232B6AC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_8232B6BC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232b72c
	if (ctx.cr6.eq) goto loc_8232B72C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r5,3
	ctx.r5.s64 = 3;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r4,r11,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// srw r11,r23,r4
	ctx.r11.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// srw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// slw r5,r5,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r3.u8 & 0x3F));
	// slw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// andc r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 & ~ctx.r5.u64;
	// and. r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// or r31,r4,r5
	ctx.r31.u64 = ctx.r4.u64 | ctx.r5.u64;
	// beq 0x8232b710
	if (ctx.cr0.eq) goto loc_8232B710;
	// slw r28,r24,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
loc_8232B710:
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8232b71c
	if (ctx.cr0.eq) goto loc_8232B71C;
	// slw r29,r24,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
loc_8232B71C:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// b 0x8232b6bc
	goto loc_8232B6BC;
loc_8232B72C:
	// cmplwi cr6,r27,96
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 96, ctx.xer);
	// bne cr6,0x8232b77c
	if (!ctx.cr6.eq) goto loc_8232B77C;
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// li r4,96
	ctx.r4.s64 = 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8226d728
	ctx.lr = 0x8232B750;
	sub_8226D728(ctx, base);
	// addi r11,r26,-20
	ctx.r11.s64 = ctx.r26.s64 + -20;
	// rlwimi r28,r31,5,19,26
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x1FE0) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE01F);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// andi. r10,r28,8175
	ctx.r10.u64 = ctx.r28.u64 & 8175;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r29,r10,4,0,27
	ctx.r29.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r29.u64 & 0xFFFFFFFF0000000F);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r29,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,15,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFE01FFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// b 0x8232b7d8
	goto loc_8232B7D8;
loc_8232B77C:
	// cmplwi cr6,r27,97
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 97, ctx.xer);
	// beq cr6,0x8232b798
	if (ctx.cr6.eq) goto loc_8232B798;
	// cmplwi cr6,r27,99
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 99, ctx.xer);
	// beq cr6,0x8232b798
	if (ctx.cr6.eq) goto loc_8232B798;
	// cmplwi cr6,r27,100
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 100, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232b79c
	if (!ctx.cr6.eq) goto loc_8232B79C;
loc_8232B798:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8232B79C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r11,r26,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// beq 0x8232b85c
	if (ctx.cr0.eq) goto loc_8232B85C;
	// rlwinm r6,r30,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 18) & 0x7;
	// rlwinm r5,r30,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0x7;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8226d728
	ctx.lr = 0x8232B7C0;
	sub_8226D728(ctx, base);
	// addi r11,r26,-24
	ctx.r11.s64 = ctx.r26.s64 + -24;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stb r31,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r31.u8);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r10,r28,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// rlwimi r10,r29,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
loc_8232B7D8:
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_8232B7DC:
	// lwz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_8232B7E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232b9e8
	if (ctx.cr6.eq) goto loc_8232B9E8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8232b854
	if (ctx.cr0.eq) goto loc_8232B854;
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 228, ctx.xer);
	// beq cr6,0x8232b83c
	if (ctx.cr6.eq) goto loc_8232B83C;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r23,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r23,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r23,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r23.u32 >> (ctx.r7.u8 & 0x3F));
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
loc_8232B83C:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// rlwimi r9,r21,13,7,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 13) & 0x1FFE000) | (ctx.r9.u64 & 0xFFFFFFFFFE001FFF);
	// rlwinm r11,r11,0,19,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFE001FFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8232B854:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8232b7e0
	goto loc_8232B7E0;
loc_8232B85C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r10,22984
	ctx.r5.s64 = ctx.r10.s64 + 22984;
	// bl 0x8225b1a0
	ctx.lr = 0x8232B86C;
	sub_8225B1A0(ctx, base);
loc_8232B86C:
	// cmplwi cr6,r23,228
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 228, ctx.xer);
	// beq cr6,0x8232b7dc
	if (ctx.cr6.eq) goto loc_8232B7DC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8227a160
	ctx.lr = 0x8232B87C;
	sub_8227A160(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b7dc
	if (ctx.cr0.eq) goto loc_8232B7DC;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r22,r29
	ctx.r9.u64 = ctx.r22.u64 + ctx.r29.u64;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// rlwinm r7,r31,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x6;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lbz r10,-1(r9)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + -1);
	// rlwinm r9,r31,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x6;
	// clrldi r8,r22,32
	ctx.r8.u64 = ctx.r22.u64 & 0xFFFFFFFF;
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwimi r7,r9,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r6,r31,31,29,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x6;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r5,r10,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r31,1,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwimi r5,r7,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// clrlwi. r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwimi r10,r5,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x8232b920
	if (ctx.cr0.eq) goto loc_8232B920;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8232B8F8:
	// srw r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// slw r5,r5,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// andc r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// bdnz 0x8232b8f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232B8F8;
loc_8232B920:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r11,27,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// addi r10,r10,6236
	ctx.r10.s64 = ctx.r10.s64 + 6236;
	// rlwinm r5,r11,29,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// add r10,r25,r10
	ctx.r10.u64 = ctx.r25.u64 + ctx.r10.u64;
	// rlwinm r4,r11,31,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwinm r11,r11,1,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r26,44
	ctx.r8.s64 = ctx.r26.s64 + 44;
	// lbz r10,-1(r10)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + -1);
	// srw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r5,r10,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwimi r5,r9,2,28,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r9,r10,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r5,r5,28
	ctx.r5.u64 = ctx.r5.u32 & 0xF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwimi r9,r5,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r11,r9,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
loc_8232B968:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8232b7dc
	if (!ctx.cr6.lt) goto loc_8232B7DC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r5,r9,0,4,6
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8232b9dc
	if (ctx.cr0.eq) goto loc_8232B9DC;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r11,27,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x6;
	// rlwinm r3,r6,14,15,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x1C000;
	// srw r4,r9,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r4,r4,30
	ctx.r4.u64 = ctx.r4.u32 & 0x3;
	// rlwinm r31,r11,29,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x6;
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// srw r3,r9,r31
	ctx.r3.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwinm r31,r11,31,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x6;
	// rlwimi r3,r4,2,0,29
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r3.u64 & 0xFFFFFFFF00000003);
	// srw r4,r9,r31
	ctx.r4.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwinm r31,r11,1,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x6;
	// rlwimi r4,r3,2,0,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// srw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// rlwimi r9,r4,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,0,27,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r5,r5,0,7,3
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8232B9DC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x8232b968
	goto loc_8232B968;
loc_8232B9E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwimi r11,r22,1,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82339C38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82339C40;
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
	// bne cr6,0x82339c7c
	if (!ctx.cr6.eq) goto loc_82339C7C;
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
	// li r7,1471
	ctx.r7.s64 = 1471;
	// bl 0x82260f30
	ctx.lr = 0x82339C7C;
	sub_82260F30(ctx, base);
loc_82339C7C:
	// li r4,165
	ctx.r4.s64 = 165;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x82339C88;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bne cr6,0x82339cec
	if (!ctx.cr6.eq) goto loc_82339CEC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339cac
	if (ctx.cr6.eq) goto loc_82339CAC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339CAC;
	sub_82266EC0(ctx, base);
loc_82339CAC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339ce4
	if (ctx.cr6.eq) goto loc_82339CE4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339ce4
	if (ctx.cr6.eq) goto loc_82339CE4;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x82339CE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339CE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339d44
	goto loc_82339D44;
loc_82339CEC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339d08
	if (ctx.cr6.eq) goto loc_82339D08;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339D08;
	sub_82266EC0(ctx, base);
loc_82339D08:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339d40
	if (ctx.cr6.eq) goto loc_82339D40;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339d40
	if (ctx.cr6.eq) goto loc_82339D40;
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
	// li r6,21
	ctx.r6.s64 = 21;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,84(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// bctrl 
	ctx.lr = 0x82339D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339D40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339D44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233B378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8233B380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233b3bc
	if (!ctx.cr6.eq) goto loc_8233B3BC;
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
	// li r7,2576
	ctx.r7.s64 = 2576;
	// bl 0x82260f30
	ctx.lr = 0x8233B3BC;
	sub_82260F30(ctx, base);
loc_8233B3BC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233b3d8
	if (ctx.cr6.eq) goto loc_8233B3D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233B3D8;
	sub_82266EC0(ctx, base);
loc_8233B3D8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b414
	if (ctx.cr6.eq) goto loc_8233B414;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233b414
	if (ctx.cr6.eq) goto loc_8233B414;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,52
	ctx.r6.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,208(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 208);
	// bctrl 
	ctx.lr = 0x8233B414;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B414:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233C568) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8233C570;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c5ac
	if (!ctx.cr6.eq) goto loc_8233C5AC;
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
	// li r7,3577
	ctx.r7.s64 = 3577;
	// bl 0x82260f30
	ctx.lr = 0x8233C5AC;
	sub_82260F30(ctx, base);
loc_8233C5AC:
	// li r4,1002
	ctx.r4.s64 = 1002;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317928
	ctx.lr = 0x8233C5B8;
	sub_82317928(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233c5fc
	if (ctx.cr6.eq) goto loc_8233C5FC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233c5fc
	if (ctx.cr6.eq) goto loc_8233C5FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82338ea0
	ctx.lr = 0x8233C5D4;
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
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,70
	ctx.r6.s64 = 70;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,280(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// bctrl 
	ctx.lr = 0x8233C5FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233C5FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233DA08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8233DA10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,27648
	ctx.r28.s64 = ctx.r10.s64 + 27648;
	// bne cr6,0x8233da5c
	if (!ctx.cr6.eq) goto loc_8233DA5C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-13816
	ctx.r5.s64 = ctx.r11.s64 + -13816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DA5C;
	sub_82260F30(ctx, base);
loc_8233DA5C:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8233da80
	if (ctx.cr6.lt) goto loc_8233DA80;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,28324
	ctx.r5.s64 = ctx.r11.s64 + 28324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,620
	ctx.r7.s64 = 620;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DA80;
	sub_82260F30(ctx, base);
loc_8233DA80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8233daa4
	if (!ctx.cr6.lt) goto loc_8233DAA4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,28312
	ctx.r5.s64 = ctx.r11.s64 + 28312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DAA4;
	sub_82260F30(ctx, base);
loc_8233DAA4:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233DAB0;
	sub_82266830(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233DAC4;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233db34
	if (!ctx.cr6.eq) goto loc_8233DB34;
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8233db34
	if (!ctx.cr6.eq) goto loc_8233DB34;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233daf0
	if (ctx.cr6.eq) goto loc_8233DAF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233DAF0;
	sub_82266EC0(ctx, base);
loc_8233DAF0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233db2c
	if (ctx.cr6.eq) goto loc_8233DB2C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233db2c
	if (ctx.cr6.eq) goto loc_8233DB2C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x8233DB2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DB2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233db90
	goto loc_8233DB90;
loc_8233DB34:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233db50
	if (ctx.cr6.eq) goto loc_8233DB50;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233DB50;
	sub_82266EC0(ctx, base);
loc_8233DB50:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233db8c
	if (ctx.cr6.eq) goto loc_8233DB8C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233db8c
	if (ctx.cr6.eq) goto loc_8233DB8C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// bctrl 
	ctx.lr = 0x8233DB8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DB8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233DB90:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82342AB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82342AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342b30
	if (!ctx.cr6.eq) goto loc_82342B30;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bl 0x8235c8c8
	ctx.lr = 0x82342AD4;
	sub_8235C8C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r29,r3,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r29,4
	ctx.r4.s64 = ctx.r29.s64 + 4;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x82325520
	ctx.lr = 0x82342AEC;
	sub_82325520(ctx, base);
	// stw r3,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82342a08
	ctx.lr = 0x82342AF8;
	sub_82342A08(ctx, base);
	// lwz r11,156(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x82342b30
	if (ctx.cr6.lt) goto loc_82342B30;
	// add r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 + ctx.r3.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82342B1C:
	// lwzu r9,-4(r10)
	ea = -4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r8,156(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82342b1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82342B1C;
loc_82342B30:
	// lwz r3,156(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82345030) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82345038;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82342ab0
	ctx.lr = 0x82345044;
	sub_82342AB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
loc_8234504C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x8235c8c8
	ctx.lr = 0x8234505C;
	sub_8235C8C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x82345108
	if (ctx.cr6.lt) goto loc_82345108;
	// addi r28,r26,4
	ctx.r28.s64 = ctx.r26.s64 + 4;
loc_82345068:
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82345080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823450f0
	if (!ctx.cr0.eq) goto loc_823450F0;
	// lwz r7,56(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,132(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8234509C:
	// lwz r8,4(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x823450b0
	if (!ctx.cr6.gt) goto loc_823450B0;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x823450bc
	goto loc_823450BC;
loc_823450B0:
	// lwz r10,8(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_823450BC:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823450e0
	if (ctx.cr0.eq) goto loc_823450E0;
	// lwz r8,132(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,132(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r8,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r8.u32);
	// b 0x8234509c
	goto loc_8234509C;
loc_823450E0:
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// subf r11,r11,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_823450F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bl 0x8235c8c8
	ctx.lr = 0x82345100;
	sub_8235C8C8(ctx, base);
	// cmpw cr6,r29,r3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x82345068
	if (!ctx.cr6.gt) goto loc_82345068;
loc_82345108:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234504c
	if (!ctx.cr0.eq) goto loc_8234504C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82347710) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82347718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r5,-3
	ctx.r10.s64 = ctx.r5.s64 + -3;
	// lwz r29,12(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82260e98
	ctx.lr = 0x8234774C;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82260e98
	ctx.lr = 0x82347760;
	sub_82260E98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// bl 0x82260e98
	ctx.lr = 0x82347774;
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
	ctx.lr = 0x82347788;
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
	// lwz r6,68(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// bl 0x82260e98
	ctx.lr = 0x823477A4;
	sub_82260E98(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r10,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82348D90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x82348D98;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82348dd4
	if (ctx.cr6.eq) goto loc_82348DD4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-31624
	ctx.r5.s64 = ctx.r10.s64 + -31624;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2011
	ctx.r7.s64 = 2011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82348DD4;
	sub_82260F30(ctx, base);
loc_82348DD4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x8236d3b8
	ctx.lr = 0x82348DE4;
	sub_8236D3B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E24;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lbz r24,164(r31)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r31.u32 + 164);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r23,236(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348EAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348ECC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348EE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lbz r19,159(r31)
	ctx.r19.u64 = REX_LOAD_U8(ctx.r31.u32 + 159);
	// li r3,18
	ctx.r3.s64 = 18;
	// lbz r18,153(r31)
	ctx.r18.u64 = REX_LOAD_U8(ctx.r31.u32 + 153);
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x82348F00;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x82348F2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348F4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348F6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348F8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x82348F9C;
	sub_8233F040(ctx, base);
	// stb r19,159(r17)
	REX_STORE_U8(ctx.r17.u32 + 159, ctx.r19.u8);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8233f040
	ctx.lr = 0x82348FB0;
	sub_8233F040(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r19,160(r17)
	REX_STORE_U8(ctx.r17.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,154(r17)
	REX_STORE_U8(ctx.r17.u32 + 154, ctx.r11.u8);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r11,228(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r17)
	REX_STORE_U32(ctx.r17.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x82348FD8;
	sub_82362008(ctx, base);
	// li r3,59
	ctx.r3.s64 = 59;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x82348FE4;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349030;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x82349080;
	sub_8233F040(ctx, base);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823490A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823490C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823490E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r18,153(r16)
	REX_STORE_U8(ctx.r16.u32 + 153, ctx.r18.u8);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r19,159(r16)
	REX_STORE_U8(ctx.r16.u32 + 159, ctx.r19.u8);
	// stw r11,228(r16)
	REX_STORE_U32(ctx.r16.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x82349124;
	sub_82362008(ctx, base);
	// li r3,39
	ctx.r3.s64 = 39;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x82349130;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234915C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234917C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234919C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823491BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x823491CC;
	sub_8233F040(ctx, base);
	// stb r19,159(r21)
	REX_STORE_U8(ctx.r21.u32 + 159, ctx.r19.u8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8233f040
	ctx.lr = 0x823491E0;
	sub_8233F040(ctx, base);
	// lwz r11,228(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 228);
	// stb r19,160(r21)
	REX_STORE_U8(ctx.r21.u32 + 160, ctx.r19.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// stw r11,228(r21)
	REX_STORE_U32(ctx.r21.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x82349200;
	sub_82362008(ctx, base);
	// li r3,97
	ctx.r3.s64 = 97;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x8234920C;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349238;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349258;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349278;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349298;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x823492A8;
	sub_8233F040(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823492C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823492E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	REX_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r18,153(r28)
	REX_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8233f040
	ctx.lr = 0x82349340;
	sub_8233F040(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349360;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349380;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823493A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823493C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r19,160(r28)
	REX_STORE_U8(ctx.r28.u32 + 160, ctx.r19.u8);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r18,154(r28)
	REX_STORE_U8(ctx.r28.u32 + 154, ctx.r18.u8);
	// stw r11,228(r28)
	REX_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x823493E4;
	sub_82362008(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x823493F0;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,84(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234941C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234943C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234945C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234947C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r28)
	REX_STORE_U8(ctx.r28.u32 + 164, ctx.r24.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x82349490;
	sub_8233F040(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823494B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823494D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823494F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349510;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r19,159(r28)
	REX_STORE_U8(ctx.r28.u32 + 159, ctx.r19.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r18,153(r28)
	REX_STORE_U8(ctx.r28.u32 + 153, ctx.r18.u8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8233f040
	ctx.lr = 0x82349528;
	sub_8233F040(ctx, base);
	// lis r27,-32248
	ctx.r27.s64 = -2113404928;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r27,-32316
	ctx.r11.s64 = ctx.r27.s64 + -32316;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r11,136(r28)
	REX_STORE_U32(ctx.r28.u32 + 136, ctx.r11.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,228(r28)
	REX_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x82349554;
	sub_82362008(ctx, base);
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x82349560;
	sub_8235EED0(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234958C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823495AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823495CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823495EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stb r24,164(r30)
	REX_STORE_U8(ctx.r30.u32 + 164, ctx.r24.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8233f040
	ctx.lr = 0x82349600;
	sub_8233F040(ctx, base);
	// lwz r11,-32316(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -32316);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	REX_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// bl 0x82362008
	ctx.lr = 0x82349624;
	sub_82362008(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c870
	ctx.lr = 0x8234962C;
	sub_8235C870(ctx, base);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235BBC0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,61
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 61, ctx.xer);
	// bgt cr6,0x8235bc20
	if (ctx.cr6.gt) goto loc_8235BC20;
	// lis r12,-32248
	ctx.r12.s64 = -2113404928;
	// addi r12,r12,-24400
	ctx.r12.s64 = ctx.r12.s64 + -24400;
	// lbzx r0,r12,r3
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// nop 
	// addi r12,r12,-17424
	ctx.r12.s64 = ctx.r12.s64 + -17424;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_8235BC00;
	case 1:
		goto loc_8235BC00;
	case 2:
		goto loc_8235BBF0;
	case 3:
		goto loc_8235BBF8;
	case 4:
		goto loc_8235BBF8;
	case 5:
		goto loc_8235BBF8;
	case 6:
		goto loc_8235BC00;
	case 7:
		goto loc_8235BC00;
	case 8:
		goto loc_8235BBF0;
	case 9:
		goto loc_8235BBF0;
	case 10:
		goto loc_8235BBF8;
	case 11:
		goto loc_8235BC00;
	case 12:
		goto loc_8235BC00;
	case 13:
		goto loc_8235BC20;
	case 14:
		goto loc_8235BC00;
	case 15:
		goto loc_8235BBF8;
	case 16:
		goto loc_8235BC00;
	case 17:
		goto loc_8235BC00;
	case 18:
		goto loc_8235BC08;
	case 19:
		goto loc_8235BC10;
	case 20:
		goto loc_8235BC10;
	case 21:
		goto loc_8235BC20;
	case 22:
		goto loc_8235BC00;
	case 23:
		goto loc_8235BC00;
	case 24:
		goto loc_8235BBF8;
	case 25:
		goto loc_8235BC00;
	case 26:
		goto loc_8235BC08;
	case 27:
		goto loc_8235BBF8;
	case 28:
		goto loc_8235BC00;
	case 29:
		goto loc_8235BC08;
	case 30:
		goto loc_8235BBF8;
	case 31:
		goto loc_8235BC00;
	case 32:
		goto loc_8235BC08;
	case 33:
		goto loc_8235BC00;
	case 34:
		goto loc_8235BC08;
	case 35:
		goto loc_8235BC10;
	case 36:
		goto loc_8235BC00;
	case 37:
		goto loc_8235BC08;
	case 38:
		goto loc_8235BC10;
	case 39:
		goto loc_8235BC00;
	case 40:
		goto loc_8235BC00;
	case 41:
		goto loc_8235BBF8;
	case 42:
		goto loc_8235BC00;
	case 43:
		goto loc_8235BBF0;
	case 44:
		goto loc_8235BC00;
	case 45:
		goto loc_8235BC00;
	case 46:
		goto loc_8235BBF8;
	case 47:
		goto loc_8235BBF8;
	case 48:
		goto loc_8235BC00;
	case 49:
		goto loc_8235BC10;
	case 50:
		goto loc_8235BC00;
	case 51:
		goto loc_8235BC08;
	case 52:
		goto loc_8235BC10;
	case 53:
		goto loc_8235BC10;
	case 54:
		goto loc_8235BC00;
	case 55:
		goto loc_8235BC00;
	case 56:
		goto loc_8235BC00;
	case 57:
		goto loc_8235BC18;
	case 58:
		goto loc_8235BC08;
	case 59:
		goto loc_8235BC08;
	case 60:
		goto loc_8235BC08;
	case 61:
		goto loc_8235BC08;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8235BBF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8235BBF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8235BC00:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_8235BC08:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_8235BC10:
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
loc_8235BC18:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_8235BC20:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235C870) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235C990) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x8235C998;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,8(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8235C9B0:
	// mulli r10,r10,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(3));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235c9b0
	if (ctx.cr6.lt) goto loc_8235C9B0;
	// li r20,3
	ctx.r20.s64 = 3;
	// divwu. r31,r10,r20
	ctx.r31.u64 = uint32_t(ctx.r20.u32 ? ctx.r10.u32 / ctx.r20.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8235ca5c
	if (ctx.cr0.eq) goto loc_8235CA5C;
loc_8235C9CC:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235ca54
	if (!ctx.cr6.lt) goto loc_8235CA54;
	// rlwinm r24,r31,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// add r29,r24,r22
	ctx.r29.u64 = ctx.r24.u64 + ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_8235C9E4:
	// lwz r23,0(r29)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8235ca2c
	if (ctx.cr6.lt) goto loc_8235CA2C;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// add r25,r29,r24
	ctx.r25.u64 = ctx.r29.u64 + ctx.r24.u64;
loc_8235C9FC:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// bctrl 
	ctx.lr = 0x8235CA0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8235ca2c
	if (!ctx.cr0.gt) goto loc_8235CA2C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// subf r25,r24,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r24.u64;
	// subf. r27,r31,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subf r28,r24,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r24.u64;
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// bge 0x8235c9fc
	if (!ctx.cr0.lt) goto loc_8235C9FC;
loc_8235CA2C:
	// add r11,r27,r31
	ctx.r11.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// stwx r23,r11,r22
	REX_STORE_U32(ctx.r11.u32 + ctx.r22.u32, ctx.r23.u32);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235c9e4
	if (ctx.cr6.lt) goto loc_8235C9E4;
loc_8235CA54:
	// divwu. r31,r31,r20
	ctx.r31.u64 = uint32_t(ctx.r20.u32 ? ctx.r31.u32 / ctx.r20.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8235c9cc
	if (!ctx.cr0.eq) goto loc_8235C9CC;
loc_8235CA5C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235E960) {
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
	// bl 0x8235de60
	ctx.lr = 0x8235E978;
	sub_8235DE60(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-14912
	ctx.r11.s64 = ctx.r11.s64 + -14912;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8235EE18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8235EE20;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8235EE30:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235EE4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x8235ee74
	if (!ctx.cr6.eq) goto loc_8235EE74;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8235EE74:
	// bctrl 
	ctx.lr = 0x8235EE78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x8235ee30
	if (ctx.cr6.lt) goto loc_8235EE30;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235FA80) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r4,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// stb r11,132(r3)
	REX_STORE_U8(ctx.r3.u32 + 132, ctx.r11.u8);
	// stb r11,133(r3)
	REX_STORE_U8(ctx.r3.u32 + 133, ctx.r11.u8);
	// stb r11,134(r3)
	REX_STORE_U8(ctx.r3.u32 + 134, ctx.r11.u8);
	// stb r11,135(r3)
	REX_STORE_U8(ctx.r3.u32 + 135, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235FE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8235FE10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,952(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 952);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235fe50
	if (ctx.cr0.eq) goto loc_8235FE50;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13408
	ctx.r6.s64 = ctx.r11.s64 + -13408;
	// addi r5,r10,-29552
	ctx.r5.s64 = ctx.r10.s64 + -29552;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,184
	ctx.r7.s64 = 184;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235FE50;
	sub_82260F30(ctx, base);
loc_8235FE50:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8235f338
	ctx.lr = 0x8235FE64;
	sub_8235F338(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8235feb0
	if (!ctx.cr6.gt) goto loc_8235FEB0;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8235feb0
	if (!ctx.cr6.eq) goto loc_8235FEB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235FE9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x8235feb0
	if (!ctx.cr6.gt) goto loc_8235FEB0;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_8235FEB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82360CF8) {
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
	// li r4,140
	ctx.r4.s64 = 140;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82360D18;
	sub_8235FD90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9472
	ctx.r11.s64 = ctx.r11.s64 + -9472;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
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

DEFINE_REX_FUNC(sub_82361428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82361430;
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
	ctx.lr = 0x8236144C;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82361488
	if (ctx.cr0.eq) goto loc_82361488;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82361468;
	sub_8235FD90(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-12880
	ctx.r11.s64 = ctx.r11.s64 + -12880;
	// stw r10,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8236148c
	goto loc_8236148C;
loc_82361488:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236148C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82362728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82362730;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r21,164(r3)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r3.u32 + 164);
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r26,r10,-14148
	ctx.r26.s64 = ctx.r10.s64 + -14148;
	// addi r25,r9,4180
	ctx.r25.s64 = ctx.r9.s64 + 4180;
	// addi r24,r11,-9232
	ctx.r24.s64 = ctx.r11.s64 + -9232;
loc_82362754:
	// lwz r28,136(r22)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + 136);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r27,8(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// b 0x8236283c
	goto loc_8236283C;
loc_82362764:
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82362834
	if (ctx.cr6.eq) goto loc_82362834;
	// lwz r11,60(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362834
	if (!ctx.cr6.eq) goto loc_82362834;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,559
	ctx.r7.s64 = 559;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82362794;
	sub_82260F30(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_823627A0:
	// lwz r11,56(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823627b8
	if (!ctx.cr6.gt) goto loc_823627B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823627c4
	goto loc_823627C4;
loc_823627B8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r30,r10,r31
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_823627C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236282c
	if (ctx.cr0.eq) goto loc_8236282C;
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8235caa0
	ctx.lr = 0x82362800;
	sub_8235CAA0(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82362814
	if (!ctx.cr6.eq) goto loc_82362814;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82362814:
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x823256a8
	ctx.lr = 0x82362820;
	sub_823256A8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x823627a0
	goto loc_823627A0;
loc_8236282C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8235c800
	ctx.lr = 0x82362834;
	sub_8235C800(ctx, base);
loc_82362834:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// lwz r27,8(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
loc_8236283C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82362764
	if (!ctx.cr6.eq) goto loc_82362764;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362754
	if (!ctx.cr0.eq) goto loc_82362754;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236CE20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236CE28;
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
	// li r4,56
	ctx.r4.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82325520
	ctx.lr = 0x8236CE48;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8236ce6c
	if (ctx.cr0.eq) goto loc_8236CE6C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235eb08
	ctx.lr = 0x8236CE68;
	sub_8235EB08(ctx, base);
	// b 0x8236ce70
	goto loc_8236CE70;
loc_8236CE6C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CE70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D3E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8236D3E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r28,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r28,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-31936(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -31936);
	// li r4,20
	ctx.r4.s64 = 20;
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r27,1456(r6)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r6.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x8236D42C;
	sub_82325520(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8236d448
	if (ctx.cr0.eq) goto loc_8236D448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x8236D444;
	sub_8233EE50(ctx, base);
	// b 0x8236d44c
	goto loc_8236D44C;
loc_8236D448:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8236D44C:
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236EE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x8236EE88;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// bl 0x8236e8a8
	ctx.lr = 0x8236EEAC;
	sub_8236E8A8(ctx, base);
	// lwz r27,1456(r21)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r21.u32 + 1456);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x8236EEC0;
	sub_82325520(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8236eee0
	if (ctx.cr0.eq) goto loc_8236EEE0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x8236EEDC;
	sub_8233EE50(ctx, base);
	// b 0x8236eee4
	goto loc_8236EEE4;
loc_8236EEE0:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8236EEE4:
	// stw r30,96(r20)
	REX_STORE_U32(ctx.r20.u32 + 96, ctx.r30.u32);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8236ebf0
	ctx.lr = 0x8236EF00;
	sub_8236EBF0(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8236ea18
	ctx.lr = 0x8236EF08;
	sub_8236EA18(ctx, base);
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82325c30
	ctx.lr = 0x8236EF14;
	sub_82325C30(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8236ef3c
	if (!ctx.cr6.gt) goto loc_8236EF3C;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8236EF2C:
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r19,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236ef2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236EF2C;
loc_8236EF3C:
	// lwz r11,96(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 96);
	// li r17,-1
	ctx.r17.s64 = -1;
	// mr r16,r19
	ctx.r16.u64 = ctx.r19.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8236f324
	if (!ctx.cr6.gt) goto loc_8236F324;
	// mr r15,r19
	ctx.r15.u64 = ctx.r19.u64;
loc_8236EF58:
	// lwz r3,96(r20)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236ef74
	if (!ctx.cr6.lt) goto loc_8236EF74;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// b 0x8236ef7c
	goto loc_8236EF7C;
loc_8236EF74:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8236EF7C;
	sub_8235CB28(ctx, base);
loc_8236EF7C:
	// lwz r22,0(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r24,0(r22)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236f01c
	if (ctx.cr6.eq) goto loc_8236F01C;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8236EFA0:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236efb8
	if (!ctx.cr6.lt) goto loc_8236EFB8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8236efc0
	goto loc_8236EFC0;
loc_8236EFB8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8236EFC0;
	sub_8235CB28(ctx, base);
loc_8236EFC0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8236f004
	if (!ctx.cr6.gt) goto loc_8236F004;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8236EFDC:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8236f000
	if (!ctx.cr6.eq) goto loc_8236F000;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// blt cr6,0x8236efdc
	if (ctx.cr6.lt) goto loc_8236EFDC;
	// b 0x8236f004
	goto loc_8236F004;
loc_8236F000:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
loc_8236F004:
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236efa0
	if (ctx.cr6.lt) goto loc_8236EFA0;
loc_8236F01C:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8236f0a8
	if (!ctx.cr0.eq) goto loc_8236F0A8;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// beq cr6,0x8236f30c
	if (ctx.cr6.eq) goto loc_8236F30C;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_8236F034:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236f04c
	if (!ctx.cr6.lt) goto loc_8236F04C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8236f054
	goto loc_8236F054;
loc_8236F04C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8236F054;
	sub_8235CB28(ctx, base);
loc_8236F054:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8236f08c
	if (!ctx.cr6.gt) goto loc_8236F08C;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8236F070:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x8236f08c
	if (!ctx.cr6.eq) goto loc_8236F08C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r19,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// cmpw cr6,r10,r24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x8236f070
	if (ctx.cr6.lt) goto loc_8236F070;
loc_8236F08C:
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236f034
	if (ctx.cr6.lt) goto loc_8236F034;
	// b 0x8236f30c
	goto loc_8236F30C;
loc_8236F0A8:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// beq cr6,0x8236f30c
	if (ctx.cr6.eq) goto loc_8236F30C;
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_8236F0B8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8236f0d0
	if (!ctx.cr6.lt) goto loc_8236F0D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r23
	ctx.r3.u64 = ctx.r11.u64 + ctx.r23.u64;
	// b 0x8236f0d8
	goto loc_8236F0D8;
loc_8236F0D0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8236F0D8;
	sub_8235CB28(ctx, base);
loc_8236F0D8:
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x8236f2f4
	if (!ctx.cr6.gt) goto loc_8236F2F4;
	// addi r25,r24,-1
	ctx.r25.s64 = ctx.r24.s64 + -1;
loc_8236F0EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8236f1d8
	if (!ctx.cr6.eq) goto loc_8236F1D8;
	// lwz r11,52(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r10,r27,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f154
	if (ctx.cr6.eq) goto loc_8236F154;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236f150
	if (ctx.cr6.eq) goto loc_8236F150;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8236f154
	if (ctx.cr6.eq) goto loc_8236F154;
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8236f148
	goto loc_8236F148;
loc_8236F128:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F140;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f154
	if (!ctx.cr0.eq) goto loc_8236F154;
loc_8236F148:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8236f128
	if (!ctx.cr6.eq) goto loc_8236F128;
loc_8236F150:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8236F154:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8236f19c
	if (!ctx.cr6.eq) goto loc_8236F19C;
	// bl 0x82325520
	ctx.lr = 0x8236F178;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8236f1c4
	if (ctx.cr0.eq) goto loc_8236F1C4;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82360c48
	ctx.lr = 0x8236F198;
	sub_82360C48(ctx, base);
	// b 0x8236f1c8
	goto loc_8236F1C8;
loc_8236F19C:
	// bl 0x82325520
	ctx.lr = 0x8236F1A0;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8236f1c4
	if (ctx.cr0.eq) goto loc_8236F1C4;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// bl 0x82360bf0
	ctx.lr = 0x8236F1C0;
	sub_82360BF0(ctx, base);
	// b 0x8236f1c8
	goto loc_8236F1C8;
loc_8236F1C4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8236F1C8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82362008
	ctx.lr = 0x8236F1D8;
	sub_82362008(ctx, base);
loc_8236F1D8:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x8236f2b8
	if (!ctx.cr6.eq) goto loc_8236F2B8;
	// add r10,r28,r27
	ctx.r10.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r11,52(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 52);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236f240
	if (ctx.cr6.eq) goto loc_8236F240;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236f244
	if (ctx.cr6.eq) goto loc_8236F244;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8236f240
	if (ctx.cr6.eq) goto loc_8236F240;
	// lwz r29,4(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8236f238
	goto loc_8236F238;
loc_8236F218:
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F230;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f244
	if (!ctx.cr0.eq) goto loc_8236F244;
loc_8236F238:
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8236f218
	if (!ctx.cr6.eq) goto loc_8236F218;
loc_8236F240:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8236F244:
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,1452(r21)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r21.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8236f284
	if (!ctx.cr6.eq) goto loc_8236F284;
	// bl 0x82325520
	ctx.lr = 0x8236F268;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8236f2a4
	if (ctx.cr0.eq) goto loc_8236F2A4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82360cf8
	ctx.lr = 0x8236F280;
	sub_82360CF8(ctx, base);
	// b 0x8236f2a8
	goto loc_8236F2A8;
loc_8236F284:
	// bl 0x82325520
	ctx.lr = 0x8236F288;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8236f2a4
	if (ctx.cr0.eq) goto loc_8236F2A4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82360ca0
	ctx.lr = 0x8236F2A0;
	sub_82360CA0(ctx, base);
	// b 0x8236f2a8
	goto loc_8236F2A8;
loc_8236F2A4:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_8236F2A8:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82361fa8
	ctx.lr = 0x8236F2B8;
	sub_82361FA8(ctx, base);
loc_8236F2B8:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// add r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r11,r26,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r26.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// blt cr6,0x8236f0ec
	if (ctx.cr6.lt) goto loc_8236F0EC;
loc_8236F2F4:
	// lwz r3,4(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236f0b8
	if (ctx.cr6.lt) goto loc_8236F0B8;
loc_8236F30C:
	// lwz r11,96(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 96);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8236ef58
	if (ctx.cr6.lt) goto loc_8236EF58;
loc_8236F324:
	// addi r5,r17,1
	ctx.r5.s64 = ctx.r17.s64 + 1;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r5,1532(r21)
	REX_STORE_U32(ctx.r21.u32 + 1532, ctx.r5.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r4,r11,5052
	ctx.r4.s64 = ctx.r11.s64 + 5052;
	// bl 0x82113c30
	ctx.lr = 0x8236F33C;
	sub_82113C30(ctx, base);
	// lwz r11,1436(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 1436);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r3,1444(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F350;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

