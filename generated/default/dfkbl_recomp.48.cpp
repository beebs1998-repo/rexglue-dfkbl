#include "dfkbl_funcs.48.h"

DEFINE_REX_FUNC(sub_82091798) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820943f8
	sub_820943F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820918A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094bb8
	sub_82094BB8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091AC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82095d00
	sub_82095D00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091CF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820962a0
	sub_820962A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091FC8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094d38
	sub_82094D38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092240) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,26084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x820a6000
	sub_820A6000(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820926E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820953f8
	sub_820953F8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092950) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82113c30
	sub_82113C30(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82093358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82093360;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r24,-32190
	ctx.r24.s64 = -2109603840;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r3,26084(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 26084);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x820943a0
	ctx.lr = 0x8209338C;
	sub_820943A0(ctx, base);
	// lbz r4,287(r1)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r1.u32 + 287);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lbz r11,295(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 295);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lbz r23,279(r1)
	ctx.r23.u64 = REX_LOAD_U8(ctx.r1.u32 + 279);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,26084(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 26084);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// stw r25,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stb r4,103(r1)
	REX_STORE_U8(ctx.r1.u32 + 103, ctx.r4.u8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r11,111(r1)
	REX_STORE_U8(ctx.r1.u32 + 111, ctx.r11.u8);
	// stb r23,95(r1)
	REX_STORE_U8(ctx.r1.u32 + 95, ctx.r23.u8);
	// bl 0x820994d0
	ctx.lr = 0x820933CC;
	sub_820994D0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820953F8) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// b 0x820b2d40
	sub_820B2D40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095630) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// b 0x820b3380
	sub_820B3380(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095A30) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8bc8
	sub_820A8BC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095CF0) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8d90
	sub_820A8D90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095D88) {
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
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// bl 0x8209be88
	ctx.lr = 0x82095DB0;
	sub_8209BE88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82095de4
	if (!ctx.cr6.eq) goto loc_82095DE4;
	// lwz r11,6476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6476);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82095de4
	if (!ctx.cr6.eq) goto loc_82095DE4;
	// lwz r11,6480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6480);
	// cmpwi cr6,r11,2000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2000, ctx.xer);
	// bne cr6,0x82095de4
	if (!ctx.cr6.eq) goto loc_82095DE4;
	// lwz r11,6488(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6488);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82095de4
	if (!ctx.cr6.eq) goto loc_82095DE4;
	// stw r30,6480(r31)
	REX_STORE_U32(ctx.r31.u32 + 6480, ctx.r30.u32);
	// b 0x82095de8
	goto loc_82095DE8;
loc_82095DE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82095DE8:
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

DEFINE_REX_FUNC(sub_82099A18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82099A20;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215eba4
	ctx.lr = 0x82099A28;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6052(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6052);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82099a6c
	if (!ctx.cr6.eq) goto loc_82099A6C;
loc_82099A58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215ebf0
	ctx.lr = 0x82099A68;
	__restfpr_27(ctx, base);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82099A6C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82099a58
	if (ctx.cr6.eq) goto loc_82099A58;
	// lwz r29,292(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r31,r11,47180
	ctx.r31.u64 = ctx.r11.u64 | 47180;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82099a98
	if (ctx.cr6.eq) goto loc_82099A98;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82099aa4
	if (!ctx.cr6.eq) goto loc_82099AA4;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x82099a9c
	goto loc_82099A9C;
loc_82099A98:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82099A9C:
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x820af9a0
	ctx.lr = 0x82099AA4;
	sub_820AF9A0(ctx, base);
loc_82099AA4:
	// lwz r3,6056(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 6056);
	// lwz r11,284(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82099AC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r30,r8
	ctx.r3.u64 = ctx.r30.u64 + ctx.r8.u64;
	// bl 0x820af9a0
	ctx.lr = 0x82099AD4;
	sub_820AF9A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82099da0
	if (ctx.cr6.eq) goto loc_82099DA0;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82099b0c
	if (ctx.cr6.eq) goto loc_82099B0C;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// beq cr6,0x82099afc
	if (ctx.cr6.eq) goto loc_82099AFC;
	// lwz r11,6136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 6136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6136(r30)
	REX_STORE_U32(ctx.r30.u32 + 6136, ctx.r11.u32);
	// b 0x82099b18
	goto loc_82099B18;
loc_82099AFC:
	// lwz r11,6144(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 6144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6144(r30)
	REX_STORE_U32(ctx.r30.u32 + 6144, ctx.r11.u32);
	// b 0x82099b18
	goto loc_82099B18;
loc_82099B0C:
	// lwz r11,6140(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 6140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6140(r30)
	REX_STORE_U32(ctx.r30.u32 + 6140, ctx.r11.u32);
loc_82099B18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82099B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addis r9,r30,238
	ctx.r9.s64 = ctx.r30.s64 + 15597568;
	// addi r29,r30,23704
	ctx.r29.s64 = ctx.r30.s64 + 23704;
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bl 0x820a7140
	ctx.lr = 0x82099B5C;
	sub_820A7140(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82099b9c
	if (!ctx.cr6.eq) goto loc_82099B9C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a78e0
	ctx.lr = 0x82099B74;
	sub_820A78E0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82099a58
	if (ctx.cr6.eq) goto loc_82099A58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82099B98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82099bc8
	goto loc_82099BC8;
loc_82099B9C:
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82099a58
	if (ctx.cr6.eq) goto loc_82099A58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82099BC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r28,8(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r27,12(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
loc_82099BC8:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,-30480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30480);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// bgt cr6,0x82099bf8
	if (ctx.cr6.gt) goto loc_82099BF8;
	// beq cr6,0x82099cb4
	if (ctx.cr6.eq) goto loc_82099CB4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82099cb4
	if (ctx.cr6.eq) goto loc_82099CB4;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82099cb4
	if (ctx.cr6.eq) goto loc_82099CB4;
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// b 0x82099c04
	goto loc_82099C04;
loc_82099BF8:
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// beq cr6,0x82099cb4
	if (ctx.cr6.eq) goto loc_82099CB4;
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
loc_82099C04:
	// beq cr6,0x82099cb4
	if (ctx.cr6.eq) goto loc_82099CB4;
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfs f31,2236(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2236);
	ctx.f31.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmuls f4,f27,f31
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmuls f3,f28,f31
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f30,f31,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmadds f2,f29,f31,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f31.f64, ctx.f10.f64)));
	// bctrl 
	ctx.lr = 0x82099C60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// extsw r5,r25
	ctx.r5.s64 = ctx.r25.s32;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// lfs f3,2104(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fmuls f2,f4,f31
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f1,f1,f31
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x82099CB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82099d6c
	goto loc_82099D6C;
loc_82099CB4:
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// extsw r9,r28
	ctx.r9.s64 = ctx.r28.s32;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// li r8,0
	ctx.r8.s64 = 0;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r7,28(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fadds f2,f9,f29
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f29.f64));
	// fadds f1,f10,f30
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f30.f64));
	// bctrl 
	ctx.lr = 0x82099D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// extsw r5,r25
	ctx.r5.s64 = ctx.r25.s32;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f8,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lfs f3,2104(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f2,f5
	ctx.f2.f64 = double(float(ctx.f5.f64));
	// bctrl 
	ctx.lr = 0x82099D4C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,44(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 44);
	// lfs f2,2280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82099D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82099D6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82099D84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,128
	ctx.r4.s64 = 8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// lwz r8,64(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82099DA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82099DA0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215ebf0
	ctx.lr = 0x82099DB0;
	__restfpr_27(ctx, base);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A4EF0) {
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
	ctx.lr = 0x820A4F08;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// li r3,228
	ctx.r3.s64 = 228;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// fmr f30,f4
	ctx.f30.f64 = ctx.f4.f64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// bl 0x82092198
	ctx.lr = 0x820A4F30;
	sub_82092198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,228
	ctx.r3.s64 = 228;
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
	// bl 0x820921b0
	ctx.lr = 0x820A4F40;
	sub_820921B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// fdivs f30,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r3,228
	ctx.r3.s64 = 228;
	// lfs f4,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x82092160
	ctx.lr = 0x820A4F6C;
	sub_82092160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a4f88
	if (ctx.cr6.eq) goto loc_820A4F88;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A4F84;
	sub_820B3E10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820A4F88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8215ebf4
	ctx.lr = 0x820A4F94;
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

DEFINE_REX_FUNC(sub_820A69D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmplwi cr6,r11,29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 29, ctx.xer);
	// bgt cr6,0x820a6b00
	if (ctx.cr6.gt) goto loc_820A6B00;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,27128
	ctx.r12.s64 = ctx.r12.s64 + 27128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820A6A70;
	case 1:
		goto loc_820A6B00;
	case 2:
		goto loc_820A6B00;
	case 3:
		goto loc_820A6AB8;
	case 4:
		goto loc_820A6B00;
	case 5:
		goto loc_820A6A94;
	case 6:
		goto loc_820A6AB8;
	case 7:
		goto loc_820A6ADC;
	case 8:
		goto loc_820A6B00;
	case 9:
		goto loc_820A6B00;
	case 10:
		goto loc_820A6B00;
	case 11:
		goto loc_820A6B00;
	case 12:
		goto loc_820A6B00;
	case 13:
		goto loc_820A6B00;
	case 14:
		goto loc_820A6B00;
	case 15:
		goto loc_820A6B00;
	case 16:
		goto loc_820A6B00;
	case 17:
		goto loc_820A6B00;
	case 18:
		goto loc_820A6B00;
	case 19:
		goto loc_820A6B00;
	case 20:
		goto loc_820A6B00;
	case 21:
		goto loc_820A6B00;
	case 22:
		goto loc_820A6A70;
	case 23:
		goto loc_820A6B00;
	case 24:
		goto loc_820A6B00;
	case 25:
		goto loc_820A6AB8;
	case 26:
		goto loc_820A6B00;
	case 27:
		goto loc_820A6A94;
	case 28:
		goto loc_820A6AB8;
	case 29:
		goto loc_820A6ADC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820A6A70:
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-21264
	ctx.r9.s64 = ctx.r10.s64 + -21264;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r9,r10,-21160
	ctx.r9.s64 = ctx.r10.s64 + -21160;
	// b 0x820a6b20
	goto loc_820A6B20;
loc_820A6A94:
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,21648
	ctx.r9.s64 = ctx.r10.s64 + 21648;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r9,r10,21768
	ctx.r9.s64 = ctx.r10.s64 + 21768;
	// b 0x820a6b20
	goto loc_820A6B20;
loc_820A6AB8:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-22280
	ctx.r9.s64 = ctx.r10.s64 + -22280;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r10,-22168
	ctx.r9.s64 = ctx.r10.s64 + -22168;
	// b 0x820a6b20
	goto loc_820A6B20;
loc_820A6ADC:
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-15120
	ctx.r9.s64 = ctx.r10.s64 + -15120;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r10,-15024
	ctx.r9.s64 = ctx.r10.s64 + -15024;
	// b 0x820a6b20
	goto loc_820A6B20;
loc_820A6B00:
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,368
	ctx.r9.s64 = ctx.r10.s64 + 368;
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-32199
	ctx.r10.s64 = -2110193664;
	// addi r9,r10,472
	ctx.r9.s64 = ctx.r10.s64 + 472;
loc_820A6B20:
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// li r9,0
	ctx.r9.s64 = 0;
loc_820A6B40:
	// lwzu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,1224
	ctx.r10.s64 = ctx.r10.s64 + 1224;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r3
	REX_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x820a6b40
	if (!ctx.cr6.eq) goto loc_820A6B40;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AB690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820AB698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,11800(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 11800);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x820ab6bc
	if (!ctx.cr6.lt) goto loc_820AB6BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_820AB6BC:
	// addi r30,r31,16992
	ctx.r30.s64 = ctx.r31.s64 + 16992;
	// li r5,136
	ctx.r5.s64 = 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215ec60
	ctx.lr = 0x820AB6D0;
	sub_8215EC60(ctx, base);
	// li r7,13
	ctx.r7.s64 = 13;
	// li r10,37
	ctx.r10.s64 = 37;
	// li r8,14
	ctx.r8.s64 = 14;
	// sth r7,17004(r31)
	REX_STORE_U16(ctx.r31.u32 + 17004, ctx.r7.u16);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,16996(r31)
	REX_STORE_U32(ctx.r31.u32 + 16996, ctx.r10.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// sth r8,17000(r31)
	REX_STORE_U16(ctx.r31.u32 + 17000, ctx.r8.u16);
	// li r10,19
	ctx.r10.s64 = 19;
	// addi r11,r11,31124
	ctx.r11.s64 = ctx.r11.s64 + 31124;
	// li r6,15
	ctx.r6.s64 = 15;
	// sth r10,17008(r31)
	REX_STORE_U16(ctx.r31.u32 + 17008, ctx.r10.u16);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,17
	ctx.r4.s64 = 17;
	// sth r6,17002(r31)
	REX_STORE_U16(ctx.r31.u32 + 17002, ctx.r6.u16);
	// li r3,18
	ctx.r3.s64 = 18;
	// sth r5,17006(r31)
	REX_STORE_U16(ctx.r31.u32 + 17006, ctx.r5.u16);
	// li r8,20
	ctx.r8.s64 = 20;
	// sth r4,17010(r31)
	REX_STORE_U16(ctx.r31.u32 + 17010, ctx.r4.u16);
	// sth r3,17012(r31)
	REX_STORE_U16(ctx.r31.u32 + 17012, ctx.r3.u16);
	// addi r10,r31,17020
	ctx.r10.s64 = ctx.r31.s64 + 17020;
	// sth r8,17014(r31)
	REX_STORE_U16(ctx.r31.u32 + 17014, ctx.r8.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r7,10952(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 10952);
	// stw r7,16992(r31)
	REX_STORE_U32(ctx.r31.u32 + 16992, ctx.r7.u32);
loc_820AB738:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x820ab738
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AB738;
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r4,11800(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 11800);
	// li r9,23
	ctx.r9.s64 = 23;
	// sth r11,17070(r31)
	REX_STORE_U16(ctx.r31.u32 + 17070, ctx.r11.u16);
	// li r8,-6
	ctx.r8.s64 = -6;
	// sth r10,17018(r31)
	REX_STORE_U16(ctx.r31.u32 + 17018, ctx.r10.u16);
	// sth r9,17020(r31)
	REX_STORE_U16(ctx.r31.u32 + 17020, ctx.r9.u16);
	// addi r29,r31,11000
	ctx.r29.s64 = ctx.r31.s64 + 11000;
	// sth r8,17072(r31)
	REX_STORE_U16(ctx.r31.u32 + 17072, ctx.r8.u16);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,10948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 10948);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820e82d8
	ctx.lr = 0x820AB790;
	sub_820E82D8(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x820ab814
	if (!ctx.cr6.eq) goto loc_820AB814;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ab814
	if (ctx.cr6.eq) goto loc_820AB814;
	// lwz r3,7260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab7b4
	if (ctx.cr6.eq) goto loc_820AB7B4;
	// bl 0x8210f568
	ctx.lr = 0x820AB7B4;
	sub_8210F568(ctx, base);
loc_820AB7B4:
	// stw r28,7260(r31)
	REX_STORE_U32(ctx.r31.u32 + 7260, ctx.r28.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x820ef2e0
	ctx.lr = 0x820AB7C0;
	sub_820EF2E0(ctx, base);
	// stw r3,7260(r31)
	REX_STORE_U32(ctx.r31.u32 + 7260, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ab814
	if (ctx.cr6.eq) goto loc_820AB814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a9de0
	ctx.lr = 0x820AB7D4;
	sub_820A9DE0(ctx, base);
	// addi r10,r31,3664
	ctx.r10.s64 = ctx.r31.s64 + 3664;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r9,7260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 7260);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,11800(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 11800);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,10948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 10948);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x820e82d8
	ctx.lr = 0x820AB7F8;
	sub_820E82D8(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820ab810
	if (!ctx.cr6.eq) goto loc_820AB810;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_820AB810:
	// stw r3,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r3.u32);
loc_820AB814:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B0EF8) {
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
	// beq cr6,0x820b0ff4
	if (ctx.cr6.eq) goto loc_820B0FF4;
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
	ctx.lr = 0x820B0F30;
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
	ctx.lr = 0x820B0F4C;
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
	ctx.lr = 0x820B0F68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B0F84;
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
	ctx.lr = 0x820B0FA0;
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
	ctx.lr = 0x820B0FBC;
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
	ctx.lr = 0x820B0FD8;
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
	ctx.lr = 0x820B0FF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0FF4:
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

DEFINE_REX_FUNC(sub_820B3628) {
	REX_FUNC_PROLOGUE();
	// stw r4,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B38B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b38cc
	if (!ctx.cr6.eq) goto loc_820B38CC;
	// blr 
	return;
loc_820B38CC:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820B38DC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b38dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B38DC;
	// b 0x820955c0
	sub_820955C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B3E60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// beq cr6,0x820b3e74
	if (ctx.cr6.eq) goto loc_820B3E74;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_820B3E74:
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B4508) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,16384
	ctx.r10.s64 = 16384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r3,-12
	ctx.r11.s64 = ctx.r3.s64 + -12;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_820B4538:
	// stfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r31,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stfs f0,40(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 40, temp.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// stfs f0,44(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 44, temp.u32);
	// sth r31,32(r11)
	REX_STORE_U16(ctx.r11.u32 + 32, ctx.r31.u16);
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stw r31,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r31.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r31,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r31,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// sth r31,34(r11)
	REX_STORE_U16(ctx.r11.u32 + 34, ctx.r31.u16);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// sth r31,78(r11)
	REX_STORE_U16(ctx.r11.u32 + 78, ctx.r31.u16);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stw r31,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r31.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfsu f0,88(r11)
	ea = 88 + ctx.r11.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b4538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B4538;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r5,22
	ctx.r5.s64 = 1441792;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,-30472(r10)
	REX_STORE_U32(ctx.r10.u32 + -30472, ctx.r31.u32);
	// bl 0x820e8878
	ctx.lr = 0x820B45A8;
	sub_820E8878(ctx, base);
	// lis r9,22
	ctx.r9.s64 = 1441792;
	// addis r3,r30,22
	ctx.r3.s64 = ctx.r30.s64 + 1441792;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stwx r31,r30,r9
	REX_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r31.u32);
	// bl 0x820e8878
	ctx.lr = 0x820B45C4;
	sub_820E8878(ctx, base);
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

DEFINE_REX_FUNC(sub_820B6D48) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r10,128(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B73C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// addi r9,r11,26
	ctx.r9.s64 = ctx.r11.s64 + 26;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x820b7414
	if (ctx.cr6.eq) goto loc_820B7414;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,144
	ctx.r3.s64 = ctx.r11.s64 + 144;
	// blr 
	return;
loc_820B7414:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,304
	ctx.r3.s64 = ctx.r11.s64 + 304;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BA6D8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820ba700
	if (!ctx.cr6.eq) goto loc_820BA700;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// ori r9,r9,32896
	ctx.r9.u64 = ctx.r9.u64 | 32896;
	// b 0x820ba704
	goto loc_820BA704;
loc_820BA700:
	// clrlwi r9,r8,8
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFFFF;
loc_820BA704:
	// lwz r10,2464(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2464);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820ba75c
	if (ctx.cr6.eq) goto loc_820BA75C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820ba748
	if (ctx.cr6.eq) goto loc_820BA748;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x820ba734
	if (ctx.cr6.eq) goto loc_820BA734;
	// lfs f0,2456(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820ba76c
	goto loc_820BA76C;
loc_820BA734:
	// lfs f0,2472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2472);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820ba76c
	goto loc_820BA76C;
loc_820BA748:
	// lfs f0,2468(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2468);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x820ba76c
	goto loc_820BA76C;
loc_820BA75C:
	// lfs f0,2460(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_820BA76C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r7,r11,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 | ctx.r9.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lfs f4,2280(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// bl 0x82092160
	ctx.lr = 0x820BA78C;
	sub_82092160(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BDBB0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,2400(r3)
	REX_STORE_U32(ctx.r3.u32 + 2400, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820b9458
	ctx.lr = 0x820BDBD4;
	sub_820B9458(ctx, base);
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r30,-6
	ctx.r11.s64 = ctx.r30.s64 + -6;
	// stw r10,26072(r9)
	REX_STORE_U32(ctx.r9.u32 + 26072, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// stfs f0,2472(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stfs f0,2468(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// stfs f0,2460(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2460, temp.u32);
	// stfs f0,2456(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 2456, temp.u32);
	// bgt cr6,0x820bdcf4
	if (ctx.cr6.gt) goto loc_820BDCF4;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9184
	ctx.r12.s64 = ctx.r12.s64 + -9184;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820BDCD4;
	case 1:
		goto loc_820BDCA4;
	case 2:
		goto loc_820BDCB4;
	case 3:
		goto loc_820BDCAC;
	case 4:
		goto loc_820BDCF4;
	case 5:
		goto loc_820BDCDC;
	case 6:
		goto loc_820BDCBC;
	case 7:
		goto loc_820BDCC4;
	case 8:
		goto loc_820BDCCC;
	case 9:
		goto loc_820BDCE4;
	case 10:
		goto loc_820BDCEC;
	case 11:
		goto loc_820BDCD4;
	case 12:
		goto loc_820BDCA4;
	case 13:
		goto loc_820BDCB4;
	case 14:
		goto loc_820BDCAC;
	case 15:
		goto loc_820BDCF4;
	case 16:
		goto loc_820BDCDC;
	case 17:
		goto loc_820BDCBC;
	case 18:
		goto loc_820BDCC4;
	case 19:
		goto loc_820BDCCC;
	case 20:
		goto loc_820BDCE4;
	case 21:
		goto loc_820BDCEC;
	case 22:
		goto loc_820BDCD4;
	case 23:
		goto loc_820BDCA4;
	case 24:
		goto loc_820BDCB4;
	case 25:
		goto loc_820BDCAC;
	case 26:
		goto loc_820BDCF4;
	case 27:
		goto loc_820BDCDC;
	case 28:
		goto loc_820BDCBC;
	case 29:
		goto loc_820BDCC4;
	case 30:
		goto loc_820BDCCC;
	case 31:
		goto loc_820BDCE4;
	case 32:
		goto loc_820BDCEC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820BDCA4:
	// stw r9,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r9.u32);
	// b 0x820bdcfc
	goto loc_820BDCFC;
loc_820BDCAC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCB4:
	// stw r10,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r10.u32);
	// b 0x820bdcfc
	goto loc_820BDCFC;
loc_820BDCBC:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCC4:
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCCC:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCD4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCDC:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCE4:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCEC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x820bdcf8
	goto loc_820BDCF8;
loc_820BDCF4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_820BDCF8:
	// stw r11,2404(r31)
	REX_STORE_U32(ctx.r31.u32 + 2404, ctx.r11.u32);
loc_820BDCFC:
	// lwz r3,2404(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2404);
	// stw r9,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r9.u32);
	// cmplwi cr6,r3,10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10, ctx.xer);
	// bgt cr6,0x820bddac
	if (ctx.cr6.gt) goto loc_820BDDAC;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r3,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-8924
	ctx.r12.s64 = ctx.r12.s64 + -8924;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r3.u32) {
	case 0:
		goto loc_820BDDA4;
	case 1:
		goto loc_820BDDAC;
	case 2:
		goto loc_820BDD5C;
	case 3:
		goto loc_820BDD50;
	case 4:
		goto loc_820BDD80;
	case 5:
		goto loc_820BDDA4;
	case 6:
		goto loc_820BDD8C;
	case 7:
		goto loc_820BDD98;
	case 8:
		goto loc_820BDD68;
	case 9:
		goto loc_820BDD80;
	case 10:
		goto loc_820BDD74;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820BDD50:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20296
	ctx.r3.s64 = ctx.r11.s64 + -20296;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD5C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20316
	ctx.r3.s64 = ctx.r11.s64 + -20316;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD68:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20336
	ctx.r3.s64 = ctx.r11.s64 + -20336;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD74:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20356
	ctx.r3.s64 = ctx.r11.s64 + -20356;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD80:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20372
	ctx.r3.s64 = ctx.r11.s64 + -20372;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD8C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20392
	ctx.r3.s64 = ctx.r11.s64 + -20392;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDD98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20412
	ctx.r3.s64 = ctx.r11.s64 + -20412;
	// b 0x820bddb4
	goto loc_820BDDB4;
loc_820BDDA4:
	// bl 0x82092058
	ctx.lr = 0x820BDDA8;
	sub_82092058(ctx, base);
	// b 0x820bddbc
	goto loc_820BDDBC;
loc_820BDDAC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,-20428
	ctx.r3.s64 = ctx.r11.s64 + -20428;
loc_820BDDB4:
	// bl 0x820e9368
	ctx.lr = 0x820BDDB8;
	sub_820E9368(ctx, base);
	// stw r3,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r3.u32);
loc_820BDDBC:
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

DEFINE_REX_FUNC(sub_820C7D40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820C7D48;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2932(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2932);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82091ab8
	ctx.lr = 0x820C7D64;
	sub_82091AB8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ac8
	ctx.lr = 0x820C7D70;
	sub_82091AC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ad8
	ctx.lr = 0x820C7D7C;
	sub_82091AD8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// li r26,2
	ctx.r26.s64 = 2;
	// lfs f31,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
loc_820C7D90:
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_820C7DA0:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// bdnz 0x820c7da0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C7DA0;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820c7d90
	if (ctx.cr6.lt) goto loc_820C7D90;
	// lbz r11,3340(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3340);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820c7e10
	if (!ctx.cr6.eq) goto loc_820C7E10;
	// stw r25,3344(r31)
	REX_STORE_U32(ctx.r31.u32 + 3344, ctx.r25.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// stw r25,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,2420(r31)
	REX_STORE_U32(ctx.r31.u32 + 2420, ctx.r30.u32);
	// addi r5,r11,-14488
	ctx.r5.s64 = ctx.r11.s64 + -14488;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a2e68
	ctx.lr = 0x820C7DEC;
	sub_820A2E68(ctx, base);
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,26072(r10)
	REX_STORE_U32(ctx.r10.u32 + 26072, ctx.r26.u32);
	// stb r25,3341(r31)
	REX_STORE_U8(ctx.r31.u32 + 3341, ctx.r25.u8);
	// stb r25,3342(r31)
	REX_STORE_U8(ctx.r31.u32 + 3342, ctx.r25.u8);
	// stb r25,3343(r31)
	REX_STORE_U8(ctx.r31.u32 + 3343, ctx.r25.u8);
	// lbz r11,3340(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3340);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r9,3340(r31)
	REX_STORE_U8(ctx.r31.u32 + 3340, ctx.r9.u8);
loc_820C7E10:
	// rlwinm r11,r28,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100000;
	// rlwinm r10,r29,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2000;
	// addi r9,r11,0
	ctx.r9.s64 = ctx.r11.s64 + 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r6,r30
	ctx.r24.u64 = ctx.r6.u64 & ctx.r30.u64;
	// beq cr6,0x820c7e50
	if (ctx.cr6.eq) goto loc_820C7E50;
	// bl 0x82092770
	ctx.lr = 0x820C7E34;
	sub_82092770(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820C7E40;
	sub_820A0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb678
	ctx.lr = 0x820C7E48;
	sub_820BB678(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7E50:
	// rlwinm r11,r29,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c7f44
	if (ctx.cr6.eq) goto loc_820C7F44;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820c7f2c
	if (ctx.cr6.gt) goto loc_820C7F2C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c7eac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7EAC;
	// bdzf 4*cr6+eq,0x820c8464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8464;
	// bdzf 4*cr6+eq,0x820c8464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8464;
	// bdzf 4*cr6+eq,0x820c8464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8464;
	// bdzf 4*cr6+eq,0x820c8464
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8464;
	// bdzf 4*cr6+eq,0x820c7ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7ECC;
	// bne cr6,0x820c7f0c
	if (!ctx.cr6.eq) goto loc_820C7F0C;
	// bl 0x82092748
	ctx.lr = 0x820C7E90;
	sub_82092748(ctx, base);
	// lwz r11,2508(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2508);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c8464
	if (ctx.cr6.lt) goto loc_820C8464;
	// stw r25,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r25.u32);
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7EAC:
	// bl 0x82092748
	ctx.lr = 0x820C7EB0;
	sub_82092748(ctx, base);
	// lwz r11,2512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c8464
	if (ctx.cr6.lt) goto loc_820C8464;
	// stw r25,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r25.u32);
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7ECC:
	// bl 0x82092748
	ctx.lr = 0x820C7ED0;
	sub_82092748(ctx, base);
	// stw r25,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r25.u32);
	// li r9,619
	ctx.r9.s64 = 619;
	// stw r25,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r25.u32);
loc_820C7EDC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_820C7EE8:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r8,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, temp.u32);
	// bdnz 0x820c7ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820C7EE8;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmpwi cr6,r9,623
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 623, ctx.xer);
	// blt cr6,0x820c7edc
	if (ctx.cr6.lt) goto loc_820C7EDC;
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7F0C:
	// bl 0x82092748
	ctx.lr = 0x820C7F10;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820C7F1C;
	sub_820A0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb678
	ctx.lr = 0x820C7F24;
	sub_820BB678(ctx, base);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7F2C:
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// stb r25,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r25.u8);
	// stb r25,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r25.u8);
	// stb r25,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r25.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820c8464
	goto loc_820C8464;
loc_820C7F44:
	// rlwinm r11,r28,0,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x7C;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c802c
	if (ctx.cr6.eq) goto loc_820C802C;
	// rlwinm r11,r27,0,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x7C;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c831c
	if (ctx.cr6.eq) goto loc_820C831C;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x820c7f74
	if (!ctx.cr6.lt) goto loc_820C7F74;
	// bl 0x82092748
	ctx.lr = 0x820C7F74;
	sub_82092748(ctx, base);
loc_820C7F74:
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820c831c
	if (ctx.cr6.gt) goto loc_820C831C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c7fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7FB4;
	// bdzf 4*cr6+eq,0x820c7fcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7FCC;
	// bdzf 4*cr6+eq,0x820c7ffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7FFC;
	// bdzf 4*cr6+eq,0x820c7fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C7FE4;
	// bne cr6,0x820c8014
	if (!ctx.cr6.eq) goto loc_820C8014;
	// lwz r11,2508(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2508);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// bge 0x820c831c
	if (!ctx.cr0.lt) goto loc_820C831C;
	// stw r26,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r26.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C7FB4:
	// lwz r11,2512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2512);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// bge 0x820c831c
	if (!ctx.cr0.lt) goto loc_820C831C;
	// stw r26,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r26.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C7FCC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C7FE4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C7FFC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C8014:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C802C:
	// rlwinm r11,r28,0,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF8;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c811c
	if (ctx.cr6.eq) goto loc_820C811C;
	// rlwinm r11,r27,0,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF8;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c831c
	if (ctx.cr6.eq) goto loc_820C831C;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x820c805c
	if (!ctx.cr6.lt) goto loc_820C805C;
	// bl 0x82092748
	ctx.lr = 0x820C805C;
	sub_82092748(ctx, base);
loc_820C805C:
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820c831c
	if (ctx.cr6.gt) goto loc_820C831C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c80a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C80A0;
	// bdzf 4*cr6+eq,0x820c80bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C80BC;
	// bdzf 4*cr6+eq,0x820c80ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C80EC;
	// bdzf 4*cr6+eq,0x820c80d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C80D4;
	// bne cr6,0x820c8104
	if (!ctx.cr6.eq) goto loc_820C8104;
	// lwz r11,2508(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2508);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c831c
	if (ctx.cr6.lt) goto loc_820C831C;
	// stw r25,2508(r31)
	REX_STORE_U32(ctx.r31.u32 + 2508, ctx.r25.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C80A0:
	// lwz r11,2512(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x820c831c
	if (ctx.cr6.lt) goto loc_820C831C;
	// stw r25,2512(r31)
	REX_STORE_U32(ctx.r31.u32 + 2512, ctx.r25.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C80BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C80D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C80EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C8104:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C811C:
	// rlwinm r11,r29,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8174
	if (ctx.cr6.eq) goto loc_820C8174;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c816c
	if (ctx.cr6.gt) goto loc_820C816C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c814c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C814C;
	// bdzf 4*cr6+eq,0x820c815c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C815C;
	// bne cr6,0x820c815c
	if (!ctx.cr6.eq) goto loc_820C815C;
loc_820C814C:
	// stfs f31,2476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 2476, temp.u32);
	// stfs f31,2480(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 2480, temp.u32);
	// bl 0x82092748
	ctx.lr = 0x820C8158;
	sub_82092748(ctx, base);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C815C:
	// stfs f31,2484(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 2484, temp.u32);
	// stfs f31,2488(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 2488, temp.u32);
	// bl 0x82092748
	ctx.lr = 0x820C8168;
	sub_82092748(ctx, base);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C816C:
	// bl 0x82092798
	ctx.lr = 0x820C8170;
	sub_82092798(ctx, base);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C8174:
	// rlwinm r11,r28,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c82bc
	if (ctx.cr6.eq) goto loc_820C82BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// rlwinm r10,r28,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820c81d4
	if (ctx.cr6.eq) goto loc_820C81D4;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c81d4
	if (ctx.cr6.gt) goto loc_820C81D4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c81b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C81B8;
	// bdzf 4*cr6+eq,0x820c81c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C81C8;
	// bne cr6,0x820c81c8
	if (!ctx.cr6.eq) goto loc_820C81C8;
loc_820C81B8:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820c81d4
	goto loc_820C81D4;
loc_820C81C8:
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_820C81D4:
	// rlwinm r11,r28,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c8220
	if (ctx.cr6.eq) goto loc_820C8220;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c8220
	if (ctx.cr6.gt) goto loc_820C8220;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c8204
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8204;
	// bdzf 4*cr6+eq,0x820c8214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8214;
	// bne cr6,0x820c8214
	if (!ctx.cr6.eq) goto loc_820C8214;
loc_820C8204:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// b 0x820c8220
	goto loc_820C8220;
loc_820C8214:
	// lfs f13,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,92(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_820C8220:
	// rlwinm r11,r28,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c826c
	if (ctx.cr6.eq) goto loc_820C826C;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c826c
	if (ctx.cr6.gt) goto loc_820C826C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c8250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8250;
	// bdzf 4*cr6+eq,0x820c8260
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C8260;
	// bne cr6,0x820c8260
	if (!ctx.cr6.eq) goto loc_820C8260;
loc_820C8250:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x820c826c
	goto loc_820C826C;
loc_820C8260:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820C826C:
	// rlwinm r11,r28,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c831c
	if (ctx.cr6.eq) goto loc_820C831C;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820c831c
	if (ctx.cr6.gt) goto loc_820C831C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820c829c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C829C;
	// bdzf 4*cr6+eq,0x820c82ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820C82AC;
	// bne cr6,0x820c82ac
	if (!ctx.cr6.eq) goto loc_820C82AC;
loc_820C829C:
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C82AC:
	// lfs f13,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// b 0x820c831c
	goto loc_820C831C;
loc_820C82BC:
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c82d8
	if (ctx.cr6.eq) goto loc_820C82D8;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820c82f0
	goto loc_820C82F0;
loc_820C82D8:
	// rlwinm r11,r27,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c82f8
	if (ctx.cr6.eq) goto loc_820C82F8;
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820C82F0:
	// stw r11,3344(r31)
	REX_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
	// bl 0x82092720
	ctx.lr = 0x820C82F8;
	sub_82092720(ctx, base);
loc_820C82F8:
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820c830c
	if (!ctx.cr6.lt) goto loc_820C830C;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,3344(r31)
	REX_STORE_U32(ctx.r31.u32 + 3344, ctx.r11.u32);
loc_820C830C:
	// lwz r11,3344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3344);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x820c831c
	if (ctx.cr6.lt) goto loc_820C831C;
	// stw r25,3344(r31)
	REX_STORE_U32(ctx.r31.u32 + 3344, ctx.r25.u32);
loc_820C831C:
	// lwz r11,2516(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2516);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c8334
	if (!ctx.cr6.eq) goto loc_820C8334;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_820C8334:
	// lwz r11,2520(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2520);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820c8348
	if (!ctx.cr6.eq) goto loc_820C8348;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_820C8348:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lfs f10,4488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4488);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,-17152(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -17152);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,4408(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4408);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-17156(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -17156);
	ctx.f13.f64 = double(temp.f32);
loc_820C836C:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_820C8374:
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r6,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x820c8400
	if (ctx.cr6.eq) goto loc_820C8400;
	// addi r11,r8,619
	ctx.r11.s64 = ctx.r8.s64 + 619;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r10,r31
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// stfsx f8,r10,r31
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, temp.u32);
	// blt cr6,0x820c83d8
	if (ctx.cr6.lt) goto loc_820C83D8;
	// bne cr6,0x820c83fc
	if (!ctx.cr6.eq) goto loc_820C83FC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r31
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820c83c4
	if (!ctx.cr6.lt) goto loc_820C83C4;
	// stfsx f13,r11,r31
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_820C83C4:
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x820c83fc
	if (!ctx.cr6.gt) goto loc_820C83FC;
	// stfsx f12,r11,r31
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// b 0x820c83fc
	goto loc_820C83FC;
loc_820C83D8:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x820c83ec
	if (!ctx.cr6.lt) goto loc_820C83EC;
	// stfsx f11,r11,r31
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_820C83EC:
	// lfsx f0,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x820c83fc
	if (!ctx.cr6.gt) goto loc_820C83FC;
	// stfsx f10,r11,r31
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_820C83FC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_820C8400:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// blt cr6,0x820c8374
	if (ctx.cr6.lt) goto loc_820C8374;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x820c836c
	if (ctx.cr6.lt) goto loc_820C836C;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820c8460
	if (!ctx.cr6.eq) goto loc_820C8460;
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3396);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820c8444
	if (!ctx.cr6.eq) goto loc_820C8444;
	// bl 0x82092748
	ctx.lr = 0x820C8434;
	sub_82092748(ctx, base);
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// b 0x820c8464
	goto loc_820C8464;
loc_820C8444:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x820c8450
	if (!ctx.cr6.gt) goto loc_820C8450;
	// stw r25,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r25.u32);
loc_820C8450:
	// lwz r11,3396(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3396);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r11.u32);
	// b 0x820c8464
	goto loc_820C8464;
loc_820C8460:
	// stw r25,3396(r31)
	REX_STORE_U32(ctx.r31.u32 + 3396, ctx.r25.u32);
loc_820C8464:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c5270
	ctx.lr = 0x820C8470;
	sub_820C5270(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E60D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,23196
	ctx.r3.s64 = ctx.r11.s64 + 23196;
	// b 0x820e6050
	sub_820E6050(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E60E8) {
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
	// bl 0x820e6b20
	ctx.lr = 0x820E60F8;
	sub_820E6B20(ctx, base);
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

DEFINE_REX_FUNC(sub_820E64C8) {
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
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x820e79c8
	ctx.lr = 0x820E64E4;
	sub_820E79C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6A60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820E6A68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82374cf4
	ctx.lr = 0x820E6A84;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	ctx.r11.s64 = 537526272;
	// ori r11,r11,12800
	ctx.r11.u64 = ctx.r11.u64 | 12800;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820e6ad4
	if (ctx.cr6.lt) goto loc_820E6AD4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82374f54
	ctx.lr = 0x820E6AA4;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e6ad4
	if (ctx.cr0.lt) goto loc_820E6AD4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x82374f44
	ctx.lr = 0x820E6ABC;
	__imp__XexGetProcedureAddress(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x820e6ad8
	goto loc_820E6AD8;
loc_820E6AD4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_820E6AD8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x820e6b00
	if (ctx.cr6.eq) goto loc_820E6B00;
	// lis r6,8237
	ctx.r6.s64 = 539820032;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// ori r6,r6,65283
	ctx.r6.u64 = ctx.r6.u64 | 65283;
	// bctrl 
	ctx.lr = 0x820E6AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820e6b04
	goto loc_820E6B04;
loc_820E6B00:
	// bl 0x82374da4
	ctx.lr = 0x820E6B04;
	__imp__NetDll_WSAStartup(ctx, base);
loc_820E6B04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E7AA0) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// blt cr6,0x820e7ab4
	if (ctx.cr6.lt) goto loc_820E7AB4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_820E7AB4:
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x820e7ae4
	if (ctx.cr0.eq) goto loc_820E7AE4;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820e7ae4
	if (!ctx.cr0.eq) goto loc_820E7AE4;
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_820E7AE4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8AA8) {
	REX_FUNC_PROLOGUE();
	// b 0x82374e74
	__imp__XamContentClose(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8AC0) {
	REX_FUNC_PROLOGUE();
	// b 0x82374ea4
	__imp__XamContentGetDeviceData(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8B98) {
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
	// bl 0x82375004
	ctx.lr = 0x820E8BD0;
	__imp__vsprintf(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E9010) {
	REX_FUNC_PROLOGUE();
	// b 0x820e9950
	sub_820E9950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E92C0) {
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
	// bl 0x82375054
	ctx.lr = 0x820E92D0;
	__imp__XexUnloadImage(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x820e92e4
	if (!ctx.cr0.lt) goto loc_820E92E4;
	// bl 0x820eb190
	ctx.lr = 0x820E92DC;
	sub_820EB190(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x820e92e8
	goto loc_820E92E8;
loc_820E92E4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_820E92E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E99E8) {
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
	// bl 0x823750a4
	ctx.lr = 0x820E99F8;
	__imp__NtClearEvent(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x820e9a08
	if (ctx.cr0.lt) goto loc_820E9A08;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820e9a10
	goto loc_820E9A10;
loc_820E9A08:
	// bl 0x820e9918
	ctx.lr = 0x820E9A0C;
	sub_820E9918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_820E9A10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EB310) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,-31916(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + -31916);
	// stw r11,-31916(r10)
	REX_STORE_U32(ctx.r10.u32 + -31916, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EB478) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lwz r10,12652(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12652);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820eb4a8
	if (ctx.cr6.eq) goto loc_820EB4A8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB4A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EB4A8:
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// addi r30,r11,92
	ctx.r30.s64 = ctx.r11.s64 + 92;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x820eb4f8
	if (!ctx.cr6.lt) goto loc_820EB4F8;
loc_820EB4C8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820eb540
	if (!ctx.cr6.eq) goto loc_820EB540;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eb4e4
	if (ctx.cr6.eq) goto loc_820EB4E4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB4E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EB4E4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820eb4c8
	if (ctx.cr6.lt) goto loc_820EB4C8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820eb540
	if (!ctx.cr6.eq) goto loc_820EB540;
loc_820EB4F8:
	// lis r10,-32200
	ctx.r10.s64 = -2110259200;
	// lis r11,-32200
	ctx.r11.s64 = -2110259200;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r30,r11,76
	ctx.r30.s64 = ctx.r11.s64 + 76;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x820eb53c
	if (!ctx.cr6.lt) goto loc_820EB53C;
loc_820EB514:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eb530
	if (ctx.cr6.eq) goto loc_820EB530;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820eb530
	if (ctx.cr6.eq) goto loc_820EB530;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820EB530;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820EB530:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x820eb514
	if (ctx.cr6.lt) goto loc_820EB514;
loc_820EB53C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820EB540:
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

DEFINE_REX_FUNC(sub_820EE1E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r28,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// std r22,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r22.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-32(r1)
	REX_STORE_U32(ctx.r1.u32 + -32, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,124(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// lwz r22,104(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// b 0x820ee22c
	goto loc_820EE22C;
loc_820EE22C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x820ee23c
	if (ctx.cr6.eq) goto loc_820EE23C;
	// lwz r3,1408(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 1408);
	// bl 0x82375194
	ctx.lr = 0x820EE23C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_820EE23C:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r22,-24(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EEDA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-320
	ctx.r31.s64 = ctx.r12.s64 + -320;
	// std r21,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r21.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	REX_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,84(r31)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x820eedd8
	goto loc_820EEDD8;
loc_820EEDD8:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820eedec
	if (ctx.cr6.eq) goto loc_820EEDEC;
	// lwz r3,1408(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 1408);
	// bl 0x82375194
	ctx.lr = 0x820EEDEC;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_820EEDEC:
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// ld r21,-16(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820EF500) {
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
	// bl 0x820ef370
	ctx.lr = 0x820EF530;
	sub_820EF370(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,4612
	ctx.r11.s64 = ctx.r11.s64 + 4612;
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

DEFINE_REX_FUNC(sub_820F0968) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820f099c
	if (!ctx.cr6.eq) goto loc_820F099C;
loc_820F0988:
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
loc_820F099C:
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x820f0988
	if (!ctx.cr6.lt) goto loc_820F0988;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// stw r11,16(r9)
	REX_STORE_U32(ctx.r9.u32 + 16, ctx.r11.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r4,0(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x820efd08
	ctx.lr = 0x820F09D0;
	sub_820EFD08(ctx, base);
	// stw r3,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r3.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r4,4(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// stw r4,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lwz r4,8(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// bl 0x820efe00
	ctx.lr = 0x820F09E8;
	sub_820EFE00(ctx, base);
	// stw r3,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r9,12(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r7,16(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// stw r7,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// stw r8,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r8.u32);
	// stw r5,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F2688) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820F2690;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x820ef558
	ctx.lr = 0x820F26AC;
	sub_820EF558(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f2738
	if (ctx.cr6.eq) goto loc_820F2738;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r11,4720
	ctx.r10.s64 = ctx.r11.s64 + 4720;
	// stw r27,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r27,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// bl 0x820fa2d0
	ctx.lr = 0x820F26E0;
	sub_820FA2D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f2764
	if (!ctx.cr6.eq) goto loc_820F2764;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f2708
	if (ctx.cr6.eq) goto loc_820F2708;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F2704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_820F2708:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F271C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f272c
	if (ctx.cr6.eq) goto loc_820F272C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_820F272C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820F2738:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f2748
	if (ctx.cr6.eq) goto loc_820F2748;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_820F2748:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f2758
	if (ctx.cr6.eq) goto loc_820F2758;
	// li r11,-2
	ctx.r11.s64 = -2;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_820F2758:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820F2764:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820fa250
	ctx.lr = 0x820F2774;
	sub_820FA250(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820f27cc
	if (!ctx.cr6.eq) goto loc_820F27CC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f279c
	if (ctx.cr6.eq) goto loc_820F279C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F2798;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
loc_820F279C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F27B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f272c
	if (ctx.cr6.eq) goto loc_820F272C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820F27CC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x820f27d8
	if (ctx.cr6.eq) goto loc_820F27D8;
	// stw r27,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_820F27D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x820f27e4
	if (ctx.cr6.eq) goto loc_820F27E4;
	// stw r27,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
loc_820F27E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F4048) {
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F4080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bge cr6,0x820f40ac
	if (!ctx.cr6.lt) goto loc_820F40AC;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stfsx f31,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, temp.u32);
	// bl 0x820f3260
	ctx.lr = 0x820F40AC;
	sub_820F3260(ctx, base);
loc_820F40AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F40C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F4C98) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x820ef558
	ctx.lr = 0x820F4CC0;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f4d10
	if (ctx.cr6.eq) goto loc_820F4D10;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,28(r8)
	REX_STORE_U8(ctx.r8.u32 + 28, ctx.r11.u8);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,29(r7)
	REX_STORE_U8(ctx.r7.u32 + 29, ctx.r11.u8);
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
loc_820F4D10:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r10,r11,5104
	ctx.r10.s64 = ctx.r11.s64 + 5104;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x820f3098
	ctx.lr = 0x820F4D28;
	sub_820F3098(ctx, base);
}

DEFINE_REX_FUNC(sub_820F6808) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820F6810;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32189
	ctx.r27.s64 = -2109538304;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r31,-30104(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + -30104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f6904
	if (ctx.cr6.eq) goto loc_820F6904;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 8;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f68d0
	if (ctx.cr6.eq) goto loc_820F68D0;
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820f689c
	if (ctx.cr6.eq) goto loc_820F689C;
loc_820F6850:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820f5c60
	ctx.lr = 0x820F685C;
	sub_820F5C60(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f6888
	if (ctx.cr6.eq) goto loc_820F6888;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f6874
	if (ctx.cr6.eq) goto loc_820F6874;
	// bl 0x8215e470
	ctx.lr = 0x820F6874;
	sub_8215E470(ctx, base);
loc_820F6874:
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r26,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// bl 0x8215e470
	ctx.lr = 0x820F6888;
	sub_8215E470(ctx, base);
loc_820F6888:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f6850
	if (!ctx.cr6.eq) goto loc_820F6850;
	// lwz r31,-30104(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + -30104);
loc_820F689C:
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x820f68d0
	if (ctx.cr6.eq) goto loc_820F68D0;
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
	ctx.lr = 0x820F68C4;
	sub_8215F200(ctx, base);
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r10,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r31,-30104(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + -30104);
loc_820F68D0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820f68fc
	if (ctx.cr6.eq) goto loc_820F68FC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820f68e8
	if (ctx.cr6.eq) goto loc_820F68E8;
	// bl 0x8215e470
	ctx.lr = 0x820F68E8;
	sub_8215E470(ctx, base);
loc_820F68E8:
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// bl 0x8215e470
	ctx.lr = 0x820F68FC;
	sub_8215E470(ctx, base);
loc_820F68FC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,-30104(r27)
	REX_STORE_U32(ctx.r27.u32 + -30104, ctx.r26.u32);
loc_820F6904:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F8D70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820F8D78;
	__savegprlr_28(ctx, base);
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// lwz r9,256(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r8,264(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 264);
	// lwz r30,300(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 300);
	// rlwinm r5,r4,17,15,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 17) & 0x1FFF8;
	// andc r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// lwz r28,296(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// and r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 & ctx.r3.u64;
	// and r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 & ctx.r11.u64;
	// lvlx128 v63,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// add r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// andc r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// rlwinm r8,r4,28,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0x3FFF;
	// rlwinm r4,r4,31,29,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7;
	// addi r5,r29,5632
	ctx.r5.s64 = ctx.r29.s64 + 5632;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// and r6,r28,r11
	ctx.r6.u64 = ctx.r28.u64 & ctx.r11.u64;
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// rlwinm r11,r3,23,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 23) & 0x3;
	// lbzx r3,r8,r10
	ctx.r3.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// lbzx r5,r4,r5
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// subfic r4,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r4.u64 = static_cast<uint64_t>(3) - ctx.r11.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// or r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 | ctx.r3.u64;
	// rlwinm r4,r4,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r4,-52(r1)
	REX_STORE_U32(ctx.r1.u32 + -52, ctx.r4.u32);
	// lvx128 v62,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvrx128 v61,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// stbx r5,r8,r10
	REX_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r5.u8);
	// lwz r3,4(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// vslo128 v60,v61,v62
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, rex::ppc::simde_mm_vslo(simde_mm_load_si128((simde__m128i*)ctx.v61.u8), simde_mm_load_si128((simde__m128i*)ctx.v62.u8)));
	// vor128 v59,v63,v60
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// rlwinm r11,r3,4,12,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFF0;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stvx128 v59,r11,r6
	ea = (ctx.r11.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FB220) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820FB228;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fb2ac
	if (!ctx.cr6.eq) goto loc_820FB2AC;
	// lwz r9,12(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// li r8,-1
	ctx.r8.s64 = -1;
loc_820FB260:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x820fb27c
	if (ctx.cr6.eq) goto loc_820FB27C;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.u64 = ctx.r10.u64 - ctx.r9.u64;
	// subfze r31,r8
	temp.u8 = ~ctx.r8.u32 + ctx.xer.ca < ~ctx.r8.u32;
	ctx.r31.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x820fb288
	goto loc_820FB288;
loc_820FB27C:
	// subfc r6,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r6.u64 = ctx.r9.u64 - ctx.r10.u64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r31,r4,31
	ctx.r31.u64 = ctx.r4.u32 & 0x1;
loc_820FB288:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fb29c
	if (ctx.cr6.eq) goto loc_820FB29C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x820fb2a0
	goto loc_820FB2A0;
loc_820FB29C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_820FB2A0:
	// lbz r10,21(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fb260
	if (ctx.cr6.eq) goto loc_820FB260;
loc_820FB2AC:
	// clrlwi r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820fb30c
	if (ctx.cr6.eq) goto loc_820FB30C;
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820fb304
	if (!ctx.cr6.eq) goto loc_820FB304;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82109f88
	ctx.lr = 0x820FB2E8;
	sub_82109F88(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_820FB304:
	// bl 0x82109e68
	ctx.lr = 0x820FB308;
	sub_82109E68(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_820FB30C:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820fb350
	if (!ctx.cr6.lt) goto loc_820FB350;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82109f88
	ctx.lr = 0x820FB334;
	sub_82109F88(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r25.u8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_820FB350:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8215e470
	ctx.lr = 0x820FB358;
	sub_8215E470(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r29,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,4(r28)
	REX_STORE_U8(ctx.r28.u32 + 4, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FF7F8) {
	REX_FUNC_PROLOGUE();
	// addis r9,r3,34
	ctx.r9.s64 = ctx.r3.s64 + 2228224;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,25412
	ctx.r9.s64 = ctx.r9.s64 + 25412;
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF9C8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,296(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF9D8) {
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
	// addi r9,r11,6096
	ctx.r9.s64 = ctx.r11.s64 + 6096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// beq cr6,0x820ffa0c
	if (ctx.cr6.eq) goto loc_820FFA0C;
	// bl 0x8215e470
	ctx.lr = 0x820FFA08;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FFA0C:
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

DEFINE_REX_FUNC(sub_82100430) {
	REX_FUNC_PROLOGUE();
	// stw r4,100(r3)
	REX_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100568) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,0
	ctx.r11.s64 = 0;
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fneg f13,f2
	ctx.f13.u64 = ctx.f2.u64 ^ 0x8000000000000000;
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// sth r11,44(r3)
	REX_STORE_U16(ctx.r3.u32 + 44, ctx.r11.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82100E88) {
	REX_FUNC_PROLOGUE();
	// lwz r11,184(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,20000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20000, ctx.xer);
	// bge cr6,0x82100ee4
	if (!ctx.cr6.lt) goto loc_82100EE4;
	// lis r10,-11849
	ctx.r10.s64 = -776536064;
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r9,r10,5977
	ctx.r9.u64 = ctx.r10.u64 | 5977;
loc_82100EAC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulhwu r10,r11,r9
	ctx.r10.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r5,r10,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFFF;
	// mulli r4,r5,20000
	ctx.r4.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(20000));
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// mulli r10,r11,152
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(152));
	// stw r11,4(r8)
	REX_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82100eec
	if (ctx.cr6.eq) goto loc_82100EEC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmpwi cr6,r6,20000
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 20000, ctx.xer);
	// blt cr6,0x82100eac
	if (ctx.cr6.lt) goto loc_82100EAC;
loc_82100EE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82100EEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,184(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 184);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,184(r8)
	REX_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82104340) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82104348;
	__savegprlr_14(ctx, base);
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x821051b0
	if (!ctx.cr6.eq) goto loc_821051B0;
	// lwz r11,156(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821051b0
	if (ctx.cr6.eq) goto loc_821051B0;
	// lwz r11,100(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821051b0
	if (!ctx.cr6.gt) goto loc_821051B0;
	// lis r8,16
	ctx.r8.s64 = 1048576;
	// lis r25,16
	ctx.r25.s64 = 1048576;
	// lis r24,16
	ctx.r24.s64 = 1048576;
	// stw r8,-192(r1)
	REX_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r23,16
	ctx.r23.s64 = 1048576;
	// stw r25,-188(r1)
	REX_STORE_U32(ctx.r1.u32 + -188, ctx.r25.u32);
	// lis r22,16
	ctx.r22.s64 = 1048576;
	// stw r24,-184(r1)
	REX_STORE_U32(ctx.r1.u32 + -184, ctx.r24.u32);
	// lis r21,16
	ctx.r21.s64 = 1048576;
	// stw r23,-180(r1)
	REX_STORE_U32(ctx.r1.u32 + -180, ctx.r23.u32);
	// lis r20,16
	ctx.r20.s64 = 1048576;
	// stw r22,-176(r1)
	REX_STORE_U32(ctx.r1.u32 + -176, ctx.r22.u32);
	// stw r21,-172(r1)
	REX_STORE_U32(ctx.r1.u32 + -172, ctx.r21.u32);
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// stw r20,-168(r1)
	REX_STORE_U32(ctx.r1.u32 + -168, ctx.r20.u32);
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// lis r7,16
	ctx.r7.s64 = 1048576;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// lis r29,16
	ctx.r29.s64 = 1048576;
	// lis r28,16
	ctx.r28.s64 = 1048576;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// ori r16,r10,50
	ctx.r16.u64 = ctx.r10.u64 | 50;
	// lis r3,16
	ctx.r3.s64 = 1048576;
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// lis r30,16
	ctx.r30.s64 = 1048576;
	// ori r17,r7,51
	ctx.r17.u64 = ctx.r7.u64 | 51;
	// ori r18,r6,52
	ctx.r18.u64 = ctx.r6.u64 | 52;
	// ori r22,r29,57
	ctx.r22.u64 = ctx.r29.u64 | 57;
	// ori r23,r28,58
	ctx.r23.u64 = ctx.r28.u64 | 58;
	// lwz r11,-192(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -192);
	// lis r27,16
	ctx.r27.s64 = 1048576;
	// lwz r10,-188(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -188);
	// lis r26,16
	ctx.r26.s64 = 1048576;
	// lwz r7,-184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -184);
	// ori r19,r3,54
	ctx.r19.u64 = ctx.r3.u64 | 54;
	// lwz r6,-180(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + -180);
	// ori r28,r11,63
	ctx.r28.u64 = ctx.r11.u64 | 63;
	// ori r29,r10,64
	ctx.r29.u64 = ctx.r10.u64 | 64;
	// lwz r3,-176(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r11,-172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -172);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// lwz r10,-168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -168);
	// lis r14,16
	ctx.r14.s64 = 1048576;
	// ori r20,r31,55
	ctx.r20.u64 = ctx.r31.u64 | 55;
	// ori r21,r30,56
	ctx.r21.u64 = ctx.r30.u64 | 56;
	// ori r24,r27,59
	ctx.r24.u64 = ctx.r27.u64 | 59;
	// ori r25,r26,60
	ctx.r25.u64 = ctx.r26.u64 | 60;
	// ori r30,r7,65
	ctx.r30.u64 = ctx.r7.u64 | 65;
	// ori r31,r6,66
	ctx.r31.u64 = ctx.r6.u64 | 66;
	// ori r26,r15,61
	ctx.r26.u64 = ctx.r15.u64 | 61;
	// ori r27,r14,62
	ctx.r27.u64 = ctx.r14.u64 | 62;
	// ori r3,r3,67
	ctx.r3.u64 = ctx.r3.u64 | 67;
	// ori r6,r11,68
	ctx.r6.u64 = ctx.r11.u64 | 68;
	// ori r7,r10,211
	ctx.r7.u64 = ctx.r10.u64 | 211;
loc_82104448:
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82104478
	if (!ctx.cr6.eq) goto loc_82104478;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,28(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104478:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,2
	ctx.r15.u64 = ctx.r15.u64 | 2;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821044a4
	if (!ctx.cr6.eq) goto loc_821044A4;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,32(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821044A4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,3
	ctx.r15.u64 = ctx.r15.u64 | 3;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821044d0
	if (!ctx.cr6.eq) goto loc_821044D0;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,36(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821044D0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,4
	ctx.r15.u64 = ctx.r15.u64 | 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821044fc
	if (!ctx.cr6.eq) goto loc_821044FC;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,40(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821044FC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,5
	ctx.r15.u64 = ctx.r15.u64 | 5;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104528
	if (!ctx.cr6.eq) goto loc_82104528;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,44(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104528:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,6
	ctx.r15.u64 = ctx.r15.u64 | 6;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104554
	if (!ctx.cr6.eq) goto loc_82104554;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,48(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104554:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,7
	ctx.r15.u64 = ctx.r15.u64 | 7;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104580
	if (!ctx.cr6.eq) goto loc_82104580;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,52(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104580:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,8
	ctx.r15.u64 = ctx.r15.u64 | 8;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821045ac
	if (!ctx.cr6.eq) goto loc_821045AC;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,56(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821045AC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,9
	ctx.r15.u64 = ctx.r15.u64 | 9;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821045d8
	if (!ctx.cr6.eq) goto loc_821045D8;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,60(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821045D8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,10
	ctx.r15.u64 = ctx.r15.u64 | 10;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104604
	if (!ctx.cr6.eq) goto loc_82104604;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,64(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104604:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,11
	ctx.r15.u64 = ctx.r15.u64 | 11;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104630
	if (!ctx.cr6.eq) goto loc_82104630;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,68(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 68);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104630:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,12
	ctx.r15.u64 = ctx.r15.u64 | 12;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8210465c
	if (!ctx.cr6.eq) goto loc_8210465C;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,72(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_8210465C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,13
	ctx.r15.u64 = ctx.r15.u64 | 13;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104688
	if (!ctx.cr6.eq) goto loc_82104688;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,76(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104688:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,14
	ctx.r15.u64 = ctx.r15.u64 | 14;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821046b4
	if (!ctx.cr6.eq) goto loc_821046B4;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,80(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821046B4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,15
	ctx.r15.u64 = ctx.r15.u64 | 15;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821046e0
	if (!ctx.cr6.eq) goto loc_821046E0;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,84(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821046E0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,16
	ctx.r15.u64 = ctx.r15.u64 | 16;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8210470c
	if (!ctx.cr6.eq) goto loc_8210470C;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,88(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_8210470C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,17
	ctx.r15.u64 = ctx.r15.u64 | 17;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104738
	if (!ctx.cr6.eq) goto loc_82104738;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,92(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 92);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104738:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,18
	ctx.r15.u64 = ctx.r15.u64 | 18;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104764
	if (!ctx.cr6.eq) goto loc_82104764;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,96(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 96);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104764:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,19
	ctx.r15.u64 = ctx.r15.u64 | 19;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104790
	if (!ctx.cr6.eq) goto loc_82104790;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,100(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 100);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_82104790:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,256
	ctx.r15.s64 = 16777216;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,20
	ctx.r15.u64 = ctx.r15.u64 | 20;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821047bc
	if (!ctx.cr6.eq) goto loc_821047BC;
	// lwz r10,160(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,104(r4)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// stwx r14,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r14.u32);
loc_821047BC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,1
	ctx.r15.u64 = ctx.r15.u64 | 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821047e8
	if (!ctx.cr6.eq) goto loc_821047E8;
	// lhz r10,162(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 162);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821047E8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,2
	ctx.r15.u64 = ctx.r15.u64 | 2;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104814
	if (!ctx.cr6.eq) goto loc_82104814;
	// lhz r10,206(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 206);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104814:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,3
	ctx.r15.u64 = ctx.r15.u64 | 3;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104840
	if (!ctx.cr6.eq) goto loc_82104840;
	// lhz r10,208(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 208);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104840:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,4
	ctx.r15.u64 = ctx.r15.u64 | 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8210486c
	if (!ctx.cr6.eq) goto loc_8210486C;
	// lhz r10,210(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 210);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_8210486C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,5
	ctx.r15.u64 = ctx.r15.u64 | 5;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104898
	if (!ctx.cr6.eq) goto loc_82104898;
	// lhz r10,212(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 212);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104898:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,6
	ctx.r15.u64 = ctx.r15.u64 | 6;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821048c4
	if (!ctx.cr6.eq) goto loc_821048C4;
	// lhz r10,214(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 214);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821048C4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,7
	ctx.r15.u64 = ctx.r15.u64 | 7;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821048f0
	if (!ctx.cr6.eq) goto loc_821048F0;
	// lhz r10,216(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 216);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821048F0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,8
	ctx.r15.u64 = ctx.r15.u64 | 8;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8210491c
	if (!ctx.cr6.eq) goto loc_8210491C;
	// lhz r10,218(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 218);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_8210491C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,9
	ctx.r15.u64 = ctx.r15.u64 | 9;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104948
	if (!ctx.cr6.eq) goto loc_82104948;
	// lhz r10,220(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 220);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104948:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,10
	ctx.r15.u64 = ctx.r15.u64 | 10;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104974
	if (!ctx.cr6.eq) goto loc_82104974;
	// lhz r10,222(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 222);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104974:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,11
	ctx.r15.u64 = ctx.r15.u64 | 11;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821049a0
	if (!ctx.cr6.eq) goto loc_821049A0;
	// lhz r10,204(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 204);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821049A0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,12
	ctx.r15.u64 = ctx.r15.u64 | 12;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821049cc
	if (!ctx.cr6.eq) goto loc_821049CC;
	// lhz r10,486(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 486);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821049CC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,14
	ctx.r15.u64 = ctx.r15.u64 | 14;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x821049f8
	if (!ctx.cr6.eq) goto loc_821049F8;
	// lhz r10,124(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 124);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821049F8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,15
	ctx.r15.u64 = ctx.r15.u64 | 15;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104a24
	if (!ctx.cr6.eq) goto loc_82104A24;
	// lhz r10,126(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 126);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104A24:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,16
	ctx.r15.u64 = ctx.r15.u64 | 16;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104a50
	if (!ctx.cr6.eq) goto loc_82104A50;
	// lhz r10,270(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 270);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104A50:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,17
	ctx.r15.u64 = ctx.r15.u64 | 17;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104a7c
	if (!ctx.cr6.eq) goto loc_82104A7C;
	// lhz r10,282(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 282);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104A7C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,18
	ctx.r15.u64 = ctx.r15.u64 | 18;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104aa8
	if (!ctx.cr6.eq) goto loc_82104AA8;
	// lhz r10,246(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 246);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104AA8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,19
	ctx.r15.u64 = ctx.r15.u64 | 19;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104ad4
	if (!ctx.cr6.eq) goto loc_82104AD4;
	// lhz r10,272(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 272);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104AD4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,20
	ctx.r15.u64 = ctx.r15.u64 | 20;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104b00
	if (!ctx.cr6.eq) goto loc_82104B00;
	// lhz r10,276(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 276);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104B00:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,21
	ctx.r15.u64 = ctx.r15.u64 | 21;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104b2c
	if (!ctx.cr6.eq) goto loc_82104B2C;
	// lhz r10,286(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 286);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104B2C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,22
	ctx.r15.u64 = ctx.r15.u64 | 22;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104b58
	if (!ctx.cr6.eq) goto loc_82104B58;
	// lhz r10,278(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 278);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104B58:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,23
	ctx.r15.u64 = ctx.r15.u64 | 23;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104b84
	if (!ctx.cr6.eq) goto loc_82104B84;
	// lhz r10,254(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 254);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104B84:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,24
	ctx.r15.u64 = ctx.r15.u64 | 24;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104bb0
	if (!ctx.cr6.eq) goto loc_82104BB0;
	// lhz r10,266(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 266);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104BB0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,25
	ctx.r15.u64 = ctx.r15.u64 | 25;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104bdc
	if (!ctx.cr6.eq) goto loc_82104BDC;
	// lhz r10,268(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 268);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104BDC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,28
	ctx.r15.u64 = ctx.r15.u64 | 28;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104c08
	if (!ctx.cr6.eq) goto loc_82104C08;
	// lhz r10,134(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 134);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104C08:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,29
	ctx.r15.u64 = ctx.r15.u64 | 29;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104c34
	if (!ctx.cr6.eq) goto loc_82104C34;
	// lhz r10,432(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 432);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104C34:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,30
	ctx.r15.u64 = ctx.r15.u64 | 30;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104c60
	if (!ctx.cr6.eq) goto loc_82104C60;
	// lhz r10,238(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 238);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104C60:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,31
	ctx.r15.u64 = ctx.r15.u64 | 31;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104c8c
	if (!ctx.cr6.eq) goto loc_82104C8C;
	// lhz r10,274(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 274);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104C8C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,32
	ctx.r15.u64 = ctx.r15.u64 | 32;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104cb8
	if (!ctx.cr6.eq) goto loc_82104CB8;
	// lhz r10,244(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 244);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104CB8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,33
	ctx.r15.u64 = ctx.r15.u64 | 33;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104ce4
	if (!ctx.cr6.eq) goto loc_82104CE4;
	// lhz r10,248(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 248);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104CE4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,34
	ctx.r15.u64 = ctx.r15.u64 | 34;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104d10
	if (!ctx.cr6.eq) goto loc_82104D10;
	// lhz r10,250(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 250);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104D10:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,35
	ctx.r15.u64 = ctx.r15.u64 | 35;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104d3c
	if (!ctx.cr6.eq) goto loc_82104D3C;
	// lhz r10,252(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 252);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104D3C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,36
	ctx.r15.u64 = ctx.r15.u64 | 36;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104d68
	if (!ctx.cr6.eq) goto loc_82104D68;
	// lhz r10,256(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 256);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104D68:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,37
	ctx.r15.u64 = ctx.r15.u64 | 37;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104d94
	if (!ctx.cr6.eq) goto loc_82104D94;
	// lhz r10,258(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 258);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104D94:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,38
	ctx.r15.u64 = ctx.r15.u64 | 38;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104dc0
	if (!ctx.cr6.eq) goto loc_82104DC0;
	// lhz r10,260(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 260);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104DC0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,42
	ctx.r15.u64 = ctx.r15.u64 | 42;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104dec
	if (!ctx.cr6.eq) goto loc_82104DEC;
	// lhz r10,428(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 428);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104DEC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,44
	ctx.r15.u64 = ctx.r15.u64 | 44;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104e18
	if (!ctx.cr6.eq) goto loc_82104E18;
	// lhz r10,288(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 288);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104E18:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,45
	ctx.r15.u64 = ctx.r15.u64 | 45;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104e44
	if (!ctx.cr6.eq) goto loc_82104E44;
	// lhz r10,284(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 284);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104E44:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,46
	ctx.r15.u64 = ctx.r15.u64 | 46;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104e70
	if (!ctx.cr6.eq) goto loc_82104E70;
	// lhz r10,242(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 242);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104E70:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,47
	ctx.r15.u64 = ctx.r15.u64 | 47;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104e9c
	if (!ctx.cr6.eq) goto loc_82104E9C;
	// lhz r10,280(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 280);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104E9C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,48
	ctx.r15.u64 = ctx.r15.u64 | 48;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104ec8
	if (!ctx.cr6.eq) goto loc_82104EC8;
	// lhz r10,240(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 240);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104EC8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lis r15,16
	ctx.r15.s64 = 1048576;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// ori r15,r15,49
	ctx.r15.u64 = ctx.r15.u64 | 49;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82104ef4
	if (!ctx.cr6.eq) goto loc_82104EF4;
	// lhz r10,264(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 264);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104EF4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82104f18
	if (!ctx.cr6.eq) goto loc_82104F18;
	// lhz r10,262(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 262);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104F18:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x82104f3c
	if (!ctx.cr6.eq) goto loc_82104F3C;
	// lhz r10,484(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 484);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104F3C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82104f60
	if (!ctx.cr6.eq) goto loc_82104F60;
	// lhz r10,488(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 488);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104F60:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x82104f84
	if (!ctx.cr6.eq) goto loc_82104F84;
	// lhz r10,430(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 430);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104F84:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82104fa8
	if (!ctx.cr6.eq) goto loc_82104FA8;
	// lhz r10,320(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 320);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104FA8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82104fcc
	if (!ctx.cr6.eq) goto loc_82104FCC;
	// lhz r10,436(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 436);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104FCC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82104ff0
	if (!ctx.cr6.eq) goto loc_82104FF0;
	// lhz r10,172(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 172);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82104FF0:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82105014
	if (!ctx.cr6.eq) goto loc_82105014;
	// lhz r10,148(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 148);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105014:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82105038
	if (!ctx.cr6.eq) goto loc_82105038;
	// lhz r10,332(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 332);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105038:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r25
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8210505c
	if (!ctx.cr6.eq) goto loc_8210505C;
	// lhz r10,334(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 334);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_8210505C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82105080
	if (!ctx.cr6.eq) goto loc_82105080;
	// lhz r10,336(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 336);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105080:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821050a4
	if (!ctx.cr6.eq) goto loc_821050A4;
	// lhz r10,338(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 338);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821050A4:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x821050c8
	if (!ctx.cr6.eq) goto loc_821050C8;
	// lhz r10,340(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 340);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821050C8:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x821050ec
	if (!ctx.cr6.eq) goto loc_821050EC;
	// lhz r10,342(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 342);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_821050EC:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82105110
	if (!ctx.cr6.eq) goto loc_82105110;
	// lhz r10,344(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 344);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105110:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82105134
	if (!ctx.cr6.eq) goto loc_82105134;
	// lhz r10,346(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 346);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105134:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82105158
	if (!ctx.cr6.eq) goto loc_82105158;
	// lhz r10,348(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 348);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_82105158:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8210517c
	if (!ctx.cr6.eq) goto loc_8210517C;
	// lhz r10,350(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 350);
	// rlwinm r15,r9,2,0,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r14,160(r5)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r10,r14,r15
	REX_STORE_U32(ctx.r14.u32 + ctx.r15.u32, ctx.r10.u32);
loc_8210517C:
	// lwz r10,96(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821051a0
	if (!ctx.cr6.eq) goto loc_821051A0;
	// lhz r11,200(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 200);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r15,160(r5)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r5.u32 + 160);
	// stwx r11,r15,r10
	REX_STORE_U32(ctx.r15.u32 + ctx.r10.u32, ctx.r11.u32);
loc_821051A0:
	// lwz r11,100(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 100);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82104448
	if (ctx.cr6.lt) goto loc_82104448;
loc_821051B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821323E0) {
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
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,26296
	ctx.r11.s64 = ctx.r11.s64 + 26296;
	// addi r10,r10,8008
	ctx.r10.s64 = ctx.r10.s64 + 8008;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r10,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r4,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r4.u32);
	// stw r5,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r5.u32);
	// stw r6,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r6.u32);
	// stw r7,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// stw r8,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r8.u32);
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// bl 0x82116c80
	ctx.lr = 0x82132460;
	sub_82116C80(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82116c80
	ctx.lr = 0x82132468;
	sub_82116C80(ctx, base);
	// addi r11,r31,576
	ctx.r11.s64 = ctx.r31.s64 + 576;
	// stw r30,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,656(r31)
	REX_STORE_U32(ctx.r31.u32 + 656, ctx.r11.u32);
	// stw r30,660(r31)
	REX_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
	// stw r30,664(r31)
	REX_STORE_U32(ctx.r31.u32 + 664, ctx.r30.u32);
	// stw r30,668(r31)
	REX_STORE_U32(ctx.r31.u32 + 668, ctx.r30.u32);
	// std r30,672(r31)
	REX_STORE_U64(ctx.r31.u32 + 672, ctx.r30.u64);
	// std r30,680(r31)
	REX_STORE_U64(ctx.r31.u32 + 680, ctx.r30.u64);
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

DEFINE_REX_FUNC(sub_821337C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821337D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821337F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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
	ctx.lr = 0x8213380C;
	sub_821160E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82133820
	if (!ctx.cr0.eq) goto loc_82133820;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x8213385c
	goto loc_8213385C;
loc_82133820:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82134168
	ctx.lr = 0x8213384C;
	sub_82134168(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x8213385c
	if (!ctx.cr0.lt) goto loc_8213385C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x8213385C;
	sub_82118BC8(ctx, base);
loc_8213385C:
	// lwz r3,12(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82134808) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82134AE0) {
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
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-25360
	ctx.r10.s64 = ctx.r10.s64 + -25360;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6144
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6144, ctx.xer);
	// beq cr6,0x82134b80
	if (ctx.cr6.eq) goto loc_82134B80;
	// li r9,6144
	ctx.r9.s64 = 6144;
loc_82134B08:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r10
	ea = ctx.r10.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r10
	ea = ctx.r10.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82134b08
	if (!ctx.cr0.eq) goto loc_82134B08;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82134b74
	if (ctx.cr6.eq) goto loc_82134B74;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// cmplwi cr6,r10,6144
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6144, ctx.xer);
	// bne cr6,0x82134b4c
	if (!ctx.cr6.eq) goto loc_82134B4C;
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82134b50
	goto loc_82134B50;
loc_82134B4C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82134B50:
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r3.u32);
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// bgt cr6,0x82134b80
	if (ctx.cr6.gt) goto loc_82134B80;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// bl 0x8215e640
	ctx.lr = 0x82134B6C;
	sub_8215E640(ctx, base);
	// lwsync 
	// b 0x82134b80
	goto loc_82134B80;
loc_82134B74:
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lwz r10,-31228(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -31228);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_82134B80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82139E68) {
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
	ctx.lr = 0x82139E78;
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
	// lfs f12,88(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f19,f12,f0
	ctx.f19.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,84(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,92(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f20,f13,f0
	ctx.f20.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,8(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,40(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 40);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f8,f11,f0
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f31,f12,f0
	ctx.f31.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,44(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 44);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,48(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f11,f0
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f29,f12,f0
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,52(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,56(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,60(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,64(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f26,f11,f0
	ctx.f26.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f25,f12,f0
	ctx.f25.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,68(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 68);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,72(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f24,f11,f0
	ctx.f24.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f23,f12,f0
	ctx.f23.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f10,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// lfs f7,12(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,16(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,20(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,24(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 24);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,28(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 28);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,32(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,36(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,76(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f12,80(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f22,f11,f0
	ctx.f22.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(ctx.f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fmuls f21,f12,f0
	ctx.f21.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f19,-168(r1)
	temp.f32 = float(ctx.f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f13,-164(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bne cr6,0x8213a150
	if (!ctx.cr6.eq) goto loc_8213A150;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8213a588
	if (ctx.cr6.eq) goto loc_8213A588;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_82139F8C:
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
	// std r6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.r6.u64);
	// lfd f13,-464(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// std r5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.r5.u64);
	// lfd f0,-472(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.r5.u64);
	// lfd f0,-312(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// fcfid f18,f0
	ctx.f18.f64 = double(ctx.f0.s64);
	// std r3,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.r3.u64);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// lfd f12,-448(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// frsp f13,f11
	ctx.f13.f64 = double(float(ctx.f11.f64));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f12,f18
	ctx.f12.f64 = double(float(ctx.f18.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f12,f8
	ctx.f18.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmuls f16,f12,f4
	ctx.f16.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// lfs f17,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f15,f12,f31
	ctx.f15.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmadds f18,f11,f7,f18
	ctx.f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f18.f64)));
	// fmadds f16,f11,f3,f16
	ctx.f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f16.f64)));
	// fmadds f15,f11,f30,f15
	ctx.f15.f64 = double(float(std::fma(ctx.f11.f64, ctx.f30.f64, ctx.f15.f64)));
	// beq cr6,0x8213a0c8
	if (ctx.cr6.eq) goto loc_8213A0C8;
	// stfd f8,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f8.u64);
	// fmuls f8,f12,f27
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// stfd f4,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f4.u64);
	// fmuls f4,f12,f23
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmuls f12,f12,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f19.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f20.f64 = double(temp.f32);
	// lfs f14,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f14.f64 = double(temp.f32);
	// lfs f19,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f8,f11,f26,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f8.f64)));
	// fmadds f4,f11,f22,f4
	ctx.f4.f64 = double(float(std::fma(ctx.f11.f64, ctx.f22.f64, ctx.f4.f64)));
	// fmadds f11,f11,f17,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f17.f64, ctx.f12.f64)));
	// fmadds f12,f13,f9,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f18.f64)));
	// fmadds f18,f13,f5,f16
	ctx.f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f16.f64)));
	// fmadds f17,f13,f1,f15
	ctx.f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f15.f64)));
	// fmadds f16,f13,f28,f8
	ctx.f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, ctx.f8.f64)));
	// lfd f8,-328(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// fmadds f15,f13,f24,f4
	ctx.f15.f64 = double(float(std::fma(ctx.f13.f64, ctx.f24.f64, ctx.f4.f64)));
	// lfd f4,-480(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// fmadds f11,f13,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f20.f64, ctx.f11.f64)));
	// fmadds f13,f0,f10,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f12.f64)));
	// fmadds f12,f0,f6,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f18.f64)));
	// fmadds f18,f0,f2,f17
	ctx.f18.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f17.f64)));
	// fmadds f17,f0,f29,f16
	ctx.f17.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, ctx.f16.f64)));
	// fmadds f16,f0,f25,f15
	ctx.f16.f64 = double(float(std::fma(ctx.f0.f64, ctx.f25.f64, ctx.f15.f64)));
	// fmadds f11,f0,f21,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f21.f64, ctx.f11.f64)));
	// fadds f0,f13,f14
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f14.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f18,f0
	ctx.f13.f64 = double(float(ctx.f18.f64 + ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f12.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f0,f17,f12
	ctx.f0.f64 = double(float(ctx.f17.f64 + ctx.f12.f64));
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f16,f13
	ctx.f12.f64 = double(float(ctx.f16.f64 + ctx.f13.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f0,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f11,f0
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8213a134
	goto loc_8213A134;
loc_8213A0C8:
	// fmuls f14,f12,f27
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = double(float(ctx.f12.f64 * ctx.f27.f64));
	// stfd f8,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f8.u64);
	// fmuls f8,f12,f23
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f23.f64));
	// fmuls f12,f12,f19
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f19.f64));
	// lfs f19,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f19.f64 = double(temp.f32);
	// fmadds f14,f11,f26,f14
	ctx.f14.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f17,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f17.f64, ctx.f12.f64)));
	// fmadds f12,f13,f9,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f13.f64, ctx.f9.f64, ctx.f18.f64)));
	// fmadds f18,f13,f5,f16
	ctx.f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f5.f64, ctx.f16.f64)));
	// fmadds f17,f13,f1,f15
	ctx.f17.f64 = double(float(std::fma(ctx.f13.f64, ctx.f1.f64, ctx.f15.f64)));
	// fmadds f16,f13,f28,f14
	ctx.f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, ctx.f14.f64)));
	// fmadds f15,f13,f24,f8
	ctx.f15.f64 = double(float(std::fma(ctx.f13.f64, ctx.f24.f64, ctx.f8.f64)));
	// lfd f8,-480(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// fmadds f11,f13,f20,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f20.f64, ctx.f11.f64)));
	// fmadds f13,f0,f10,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f10.f64, ctx.f12.f64)));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f12,f0,f6,f18
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f6.f64, ctx.f18.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f0,f2,f17
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f2.f64, ctx.f17.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f12,f0,f29,f16
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, ctx.f16.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f0,f25,f15
	ctx.f13.f64 = double(float(std::fma(ctx.f0.f64, ctx.f25.f64, ctx.f15.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f12,f0,f21,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f0.f64, ctx.f21.f64, ctx.f11.f64)));
	// stfsu f12,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_8213A134:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82139f8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82139F8C;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215ebbc
	ctx.lr = 0x8213A144;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8213A150:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfd f10,-480(r1)
	REX_STORE_U64(ctx.r1.u32 + -480, ctx.f10.u64);
	// stfd f9,-328(r1)
	REX_STORE_U64(ctx.r1.u32 + -328, ctx.f9.u64);
	// stfd f8,-448(r1)
	REX_STORE_U64(ctx.r1.u32 + -448, ctx.f8.u64);
	// stfd f7,-312(r1)
	REX_STORE_U64(ctx.r1.u32 + -312, ctx.f7.u64);
	// stfd f6,-464(r1)
	REX_STORE_U64(ctx.r1.u32 + -464, ctx.f6.u64);
	// stfd f5,-472(r1)
	REX_STORE_U64(ctx.r1.u32 + -472, ctx.f5.u64);
	// stfd f4,-272(r1)
	REX_STORE_U64(ctx.r1.u32 + -272, ctx.f4.u64);
	// stfd f3,-288(r1)
	REX_STORE_U64(ctx.r1.u32 + -288, ctx.f3.u64);
	// stfd f2,-296(r1)
	REX_STORE_U64(ctx.r1.u32 + -296, ctx.f2.u64);
	// stfd f1,-280(r1)
	REX_STORE_U64(ctx.r1.u32 + -280, ctx.f1.u64);
	// stfd f31,-264(r1)
	REX_STORE_U64(ctx.r1.u32 + -264, ctx.f31.u64);
	// stfd f30,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, ctx.f30.u64);
	// stfd f29,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, ctx.f29.u64);
	// stfd f28,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.f28.u64);
	// stfd f27,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.f27.u64);
	// lfs f12,4(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f18,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f18.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f17,16(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f18,f18,f0
	ctx.f18.f64 = double(float(ctx.f18.f64 * ctx.f0.f64));
	// lfs f16,20(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 20);
	ctx.f16.f64 = double(temp.f32);
	// fmuls f17,f17,f0
	ctx.f17.f64 = double(float(ctx.f17.f64 * ctx.f0.f64));
	// lfs f15,24(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 24);
	ctx.f15.f64 = double(temp.f32);
	// fmuls f16,f16,f0
	ctx.f16.f64 = double(float(ctx.f16.f64 * ctx.f0.f64));
	// lfs f14,28(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 28);
	ctx.f14.f64 = double(temp.f32);
	// fmuls f15,f15,f0
	ctx.f15.f64 = double(float(ctx.f15.f64 * ctx.f0.f64));
	// lfs f10,32(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f14,f14,f0
	ctx.f14.f64 = double(float(ctx.f14.f64 * ctx.f0.f64));
	// lfs f9,36(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f8,40(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 40);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,44(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f6,48(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 48);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f7,f7,f0
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// lfs f5,52(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 52);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfs f4,56(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 56);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f0
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f3,60(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 60);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// lfs f2,64(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 64);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f3,f3,f0
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// lfs f1,68(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 68);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f31,72(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 72);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f30,76(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	ctx.f31.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f29,80(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 80);
	ctx.f29.f64 = double(temp.f32);
	// fmuls f30,f30,f0
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f28,84(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 84);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f29,f29,f0
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// lfs f27,88(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f28,f28,f0
	ctx.f28.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// stfd f26,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.f26.u64);
	// fmuls f27,f27,f0
	ctx.f27.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// lfs f26,92(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 92);
	ctx.f26.f64 = double(temp.f32);
	// stfs f11,-432(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f12,-428(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// stfs f13,-424(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// stfs f18,-420(r1)
	temp.f32 = float(ctx.f18.f64);
	REX_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// stfs f17,-416(r1)
	temp.f32 = float(ctx.f17.f64);
	REX_STORE_U32(ctx.r1.u32 + -416, temp.u32);
	// stfs f16,-412(r1)
	temp.f32 = float(ctx.f16.f64);
	REX_STORE_U32(ctx.r1.u32 + -412, temp.u32);
	// stfs f15,-408(r1)
	temp.f32 = float(ctx.f15.f64);
	REX_STORE_U32(ctx.r1.u32 + -408, temp.u32);
	// stfs f14,-404(r1)
	temp.f32 = float(ctx.f14.f64);
	REX_STORE_U32(ctx.r1.u32 + -404, temp.u32);
	// stfs f10,-400(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + -400, temp.u32);
	// stfs f9,-396(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + -396, temp.u32);
	// stfs f8,-392(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + -392, temp.u32);
	// stfs f7,-388(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + -388, temp.u32);
	// stfs f6,-384(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + -384, temp.u32);
	// stfs f5,-380(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + -380, temp.u32);
	// stfs f4,-376(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + -376, temp.u32);
	// stfs f3,-372(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + -372, temp.u32);
	// stfs f2,-368(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + -368, temp.u32);
	// stfs f1,-364(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + -364, temp.u32);
	// stfs f31,-360(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + -360, temp.u32);
	// stfs f30,-356(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + -356, temp.u32);
	// stfs f29,-352(r1)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r1.u32 + -352, temp.u32);
	// stfs f28,-348(r1)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r1.u32 + -348, temp.u32);
	// stfs f27,-344(r1)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r1.u32 + -344, temp.u32);
	// lfd f10,-480(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -480);
	// lfd f9,-328(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + -328);
	// lfd f8,-448(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -448);
	// lfd f7,-312(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + -312);
	// lfd f6,-464(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + -464);
	// lfd f5,-472(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + -472);
	// lfd f4,-272(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + -272);
	// lfd f3,-288(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + -288);
	// lfd f2,-296(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + -296);
	// lfd f1,-280(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -280);
	// lfd f31,-264(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -264);
	// lfd f30,-456(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// lfd f29,-440(r1)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// lfd f28,-336(r1)
	ctx.f28.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// lfd f27,-320(r1)
	ctx.f27.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lfd f26,-304(r1)
	ctx.f26.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// stfs f0,-340(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -340, temp.u32);
	// beq cr6,0x8213a588
	if (ctx.cr6.eq) goto loc_8213A588;
	// addi r9,r8,-1
	ctx.r9.s64 = ctx.r8.s64 + -1;
	// li r8,24
	ctx.r8.s64 = 24;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// li r9,216
	ctx.r9.s64 = 216;
loc_8213A310:
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
	// std r6,-304(r1)
	REX_STORE_U64(ctx.r1.u32 + -304, ctx.r6.u64);
	// lfd f0,-304(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -304);
	// std r5,-320(r1)
	REX_STORE_U64(ctx.r1.u32 + -320, ctx.r5.u64);
	// lfd f12,-320(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -320);
	// lhzu r4,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r4.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lhzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// extsh r5,r4
	ctx.r5.s64 = ctx.r4.s16;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// extsh r3,r6
	ctx.r3.s64 = ctx.r6.s16;
	// std r5,-336(r1)
	REX_STORE_U64(ctx.r1.u32 + -336, ctx.r5.u64);
	// lfd f11,-336(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -336);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// std r3,-440(r1)
	REX_STORE_U64(ctx.r1.u32 + -440, ctx.r3.u64);
	// lfd f11,-440(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -440);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// dcbt r11,r8
	// dcbt r10,r9
	// fmuls f18,f0,f8
	ctx.f18.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// fmuls f19,f0,f19
	ctx.f19.f64 = double(float(ctx.f0.f64 * ctx.f19.f64));
	// fmadds f18,f11,f7,f18
	ctx.f18.f64 = double(float(std::fma(ctx.f11.f64, ctx.f7.f64, ctx.f18.f64)));
	// beq cr6,0x8213a440
	if (ctx.cr6.eq) goto loc_8213A440;
	// fmuls f16,f0,f4
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// stfd f8,-456(r1)
	REX_STORE_U64(ctx.r1.u32 + -456, ctx.f8.u64);
	// fmuls f15,f0,f31
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lfs f20,-172(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -172);
	ctx.f20.f64 = double(temp.f32);
	// fmuls f14,f0,f27
	ctx.f14.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lfs f17,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f17.f64 = double(temp.f32);
	// fmuls f8,f0,f23
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f16,f11,f3,f16
	ctx.f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f16.f64)));
	// fmadds f15,f11,f30,f15
	ctx.f15.f64 = double(float(std::fma(ctx.f11.f64, ctx.f30.f64, ctx.f15.f64)));
	// fmadds f14,f11,f26,f14
	ctx.f14.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f14.f64)));
	// fmadds f8,f11,f22,f8
	ctx.f8.f64 = double(float(std::fma(ctx.f11.f64, ctx.f22.f64, ctx.f8.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f19.f64)));
	// fmadds f19,f12,f9,f18
	ctx.f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f18.f64)));
	// fmadds f18,f12,f5,f16
	ctx.f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f16.f64)));
	// fmadds f16,f12,f1,f15
	ctx.f16.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f15.f64)));
	// fmadds f15,f12,f28,f14
	ctx.f15.f64 = double(float(std::fma(ctx.f12.f64, ctx.f28.f64, ctx.f14.f64)));
	// fmadds f14,f12,f24,f8
	ctx.f14.f64 = double(float(std::fma(ctx.f12.f64, ctx.f24.f64, ctx.f8.f64)));
	// lfd f8,-456(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + -456);
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f19.f64)));
	// fmadds f19,f13,f6,f18
	ctx.f19.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f18.f64)));
	// fmadds f18,f13,f2,f16
	ctx.f18.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f16.f64)));
	// fmadds f16,f13,f29,f15
	ctx.f16.f64 = double(float(std::fma(ctx.f13.f64, ctx.f29.f64, ctx.f15.f64)));
	// fmadds f15,f13,f25,f14
	ctx.f15.f64 = double(float(std::fma(ctx.f13.f64, ctx.f25.f64, ctx.f14.f64)));
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f21.f64, ctx.f12.f64)));
	// fadds f12,f11,f17
	ctx.f12.f64 = double(float(ctx.f11.f64 + ctx.f17.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f19,f11
	ctx.f12.f64 = double(float(ctx.f19.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f18,f11
	ctx.f12.f64 = double(float(ctx.f18.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f16,f11
	ctx.f12.f64 = double(float(ctx.f16.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f12,f15,f11
	ctx.f12.f64 = double(float(ctx.f15.f64 + ctx.f11.f64));
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f11.f64 = double(temp.f32);
	ctx.r10.u32 = ea;
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x8213a4b0
	goto loc_8213A4B0;
loc_8213A440:
	// fmuls f17,f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f17.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fmuls f16,f0,f31
	ctx.f16.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f15,f0,f27
	ctx.f15.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f14,f0,f23
	ctx.f14.f64 = double(float(ctx.f0.f64 * ctx.f23.f64));
	// lfs f0,-164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -164);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f17,f11,f3,f17
	ctx.f17.f64 = double(float(std::fma(ctx.f11.f64, ctx.f3.f64, ctx.f17.f64)));
	// fmadds f16,f11,f30,f16
	ctx.f16.f64 = double(float(std::fma(ctx.f11.f64, ctx.f30.f64, ctx.f16.f64)));
	// fmadds f15,f11,f26,f15
	ctx.f15.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f15.f64)));
	// fmadds f14,f11,f22,f14
	ctx.f14.f64 = double(float(std::fma(ctx.f11.f64, ctx.f22.f64, ctx.f14.f64)));
	// fmadds f11,f11,f0,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f19.f64)));
	// fmadds f19,f12,f9,f18
	ctx.f19.f64 = double(float(std::fma(ctx.f12.f64, ctx.f9.f64, ctx.f18.f64)));
	// fmadds f18,f12,f5,f17
	ctx.f18.f64 = double(float(std::fma(ctx.f12.f64, ctx.f5.f64, ctx.f17.f64)));
	// fmadds f17,f12,f1,f16
	ctx.f17.f64 = double(float(std::fma(ctx.f12.f64, ctx.f1.f64, ctx.f16.f64)));
	// fmadds f16,f12,f28,f15
	ctx.f16.f64 = double(float(std::fma(ctx.f12.f64, ctx.f28.f64, ctx.f15.f64)));
	// fmadds f15,f12,f24,f14
	ctx.f15.f64 = double(float(std::fma(ctx.f12.f64, ctx.f24.f64, ctx.f14.f64)));
	// fmadds f12,f12,f20,f11
	ctx.f12.f64 = double(float(std::fma(ctx.f12.f64, ctx.f20.f64, ctx.f11.f64)));
	// fmadds f11,f13,f10,f19
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f10.f64, ctx.f19.f64)));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f11,f13,f6,f18
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f6.f64, ctx.f18.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f2,f17
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f2.f64, ctx.f17.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f29,f16
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f29.f64, ctx.f16.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f11,f13,f25,f15
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f25.f64, ctx.f15.f64)));
	// stfsu f11,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fmadds f13,f13,f21,f12
	ctx.f13.f64 = double(float(std::fma(ctx.f13.f64, ctx.f21.f64, ctx.f12.f64)));
	// stfsu f13,4(r10)
	ea = 4 + ctx.r10.u32;
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
loc_8213A4B0:
	// lfs f12,-348(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -348);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fadds f20,f12,f20
	ctx.f20.f64 = double(float(ctx.f12.f64 + ctx.f20.f64));
	// lfs f13,-168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-344(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -344);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,-340(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -340);
	ctx.f12.f64 = double(temp.f32);
	// fadds f19,f11,f13
	ctx.f19.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// lfs f11,-432(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -432);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-428(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -428);
	ctx.f13.f64 = double(temp.f32);
	// fadds f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f12,-424(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -424);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f13,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fadds f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// lfs f11,-420(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -420);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-416(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -416);
	ctx.f13.f64 = double(temp.f32);
	// fadds f7,f11,f7
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f7.f64));
	// lfs f12,-412(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -412);
	ctx.f12.f64 = double(temp.f32);
	// fadds f6,f13,f6
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f6.f64));
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f11,-408(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -408);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-404(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -404);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f11,f4
	ctx.f4.f64 = double(float(ctx.f11.f64 + ctx.f4.f64));
	// lfs f12,-400(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -400);
	ctx.f12.f64 = double(temp.f32);
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f2,f12,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// lfs f11,-396(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -396);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-392(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -392);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f11,f1
	ctx.f1.f64 = double(float(ctx.f11.f64 + ctx.f1.f64));
	// lfs f12,-388(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -388);
	ctx.f12.f64 = double(temp.f32);
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fadds f30,f12,f30
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f30.f64));
	// lfs f11,-384(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -384);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-380(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f11,f29
	ctx.f29.f64 = double(float(ctx.f11.f64 + ctx.f29.f64));
	// lfs f12,-376(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -376);
	ctx.f12.f64 = double(temp.f32);
	// fadds f28,f13,f28
	ctx.f28.f64 = double(float(ctx.f13.f64 + ctx.f28.f64));
	// fadds f27,f12,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// lfs f11,-372(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -372);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-368(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -368);
	ctx.f13.f64 = double(temp.f32);
	// fadds f26,f11,f26
	ctx.f26.f64 = double(float(ctx.f11.f64 + ctx.f26.f64));
	// lfs f12,-364(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -364);
	ctx.f12.f64 = double(temp.f32);
	// fadds f25,f13,f25
	ctx.f25.f64 = double(float(ctx.f13.f64 + ctx.f25.f64));
	// fadds f24,f12,f24
	ctx.f24.f64 = double(float(ctx.f12.f64 + ctx.f24.f64));
	// lfs f11,-360(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -360);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,-356(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -356);
	ctx.f13.f64 = double(temp.f32);
	// fadds f23,f11,f23
	ctx.f23.f64 = double(float(ctx.f11.f64 + ctx.f23.f64));
	// lfs f12,-352(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -352);
	ctx.f12.f64 = double(temp.f32);
	// fadds f22,f13,f22
	ctx.f22.f64 = double(float(ctx.f13.f64 + ctx.f22.f64));
	// stfs f20,-172(r1)
	temp.f32 = float(ctx.f20.f64);
	REX_STORE_U32(ctx.r1.u32 + -172, temp.u32);
	// fadds f21,f12,f21
	ctx.f21.f64 = double(float(ctx.f12.f64 + ctx.f21.f64));
	// stfs f19,-168(r1)
	temp.f32 = float(ctx.f19.f64);
	REX_STORE_U32(ctx.r1.u32 + -168, temp.u32);
	// stfs f0,-164(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -164, temp.u32);
	// bdnz 0x8213a310
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213A310;
loc_8213A588:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8215ebbc
	ctx.lr = 0x8213A590;
	__restfpr_14(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82151728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,248(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821517a8
	if (!ctx.cr6.eq) goto loc_821517A8;
	// addi r9,r3,240
	ctx.r9.s64 = ctx.r3.s64 + 240;
loc_82151738:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82151758:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r8,0,r9
	ea = ctx.r9.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8215177c
	if (!ctx.cr6.eq) goto loc_8215177C;
	// stwcx. r11,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82151758
	if (!ctx.cr0.eq) goto loc_82151758;
	// b 0x82151784
	goto loc_82151784;
loc_8215177C:
	// stwcx. r8,0,r9
	ea = ctx.r9.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82151784:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lwsync 
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8215179c
	if (!ctx.cr6.eq) goto loc_8215179C;
	// db16cyc 
	// b 0x82151738
	goto loc_82151738;
loc_8215179C:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,244(r3)
	REX_STORE_U32(ctx.r3.u32 + 244, ctx.r11.u32);
loc_821517A8:
	// lwz r11,244(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 244);
	// li r10,0
	ctx.r10.s64 = 0;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ldx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// std r11,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r11.u64);
	// stw r10,248(r3)
	REX_STORE_U32(ctx.r3.u32 + 248, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82154D68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82154D70;
	__savegprlr_14(ctx, base);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8215543c
	if (ctx.cr6.eq) goto loc_8215543C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8215543c
	if (ctx.cr6.eq) goto loc_8215543C;
	// rlwinm r11,r4,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r5,-360(r1)
	REX_STORE_U32(ctx.r1.u32 + -360, ctx.r5.u32);
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82155430
	if (ctx.cr6.eq) goto loc_82155430;
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// lis r8,-32253
	ctx.r8.s64 = -2113732608;
	// stw r11,-356(r1)
	REX_STORE_U32(ctx.r1.u32 + -356, ctx.r11.u32);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r7,r11,-2848
	ctx.r7.s64 = ctx.r11.s64 + -2848;
	// addi r6,r10,-2876
	ctx.r6.s64 = ctx.r10.s64 + -2876;
	// lfd f0,-2784(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + -2784);
	// addi r4,r9,-2904
	ctx.r4.s64 = ctx.r9.s64 + -2904;
	// stw r7,-384(r1)
	REX_STORE_U32(ctx.r1.u32 + -384, ctx.r7.u32);
	// stw r6,-364(r1)
	REX_STORE_U32(ctx.r1.u32 + -364, ctx.r6.u32);
	// stw r4,-368(r1)
	REX_STORE_U32(ctx.r1.u32 + -368, ctx.r4.u32);
loc_82154DC8:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// lwz r7,-356(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -356);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82154ddc
	if (!ctx.cr6.lt) goto loc_82154DDC;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_82154DDC:
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r7,-400(r1)
	REX_STORE_U32(ctx.r1.u32 + -400, ctx.r7.u32);
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,-396(r1)
	REX_STORE_U32(ctx.r1.u32 + -396, ctx.r11.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82154E00:
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// addi r10,r1,-352
	ctx.r10.s64 = ctx.r1.s64 + -352;
	// addi r6,r1,-320
	ctx.r6.s64 = ctx.r1.s64 + -320;
	// bge cr6,0x82154e48
	if (!ctx.cr6.lt) goto loc_82154E48;
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// fmul f11,f13,f0
	ctx.f11.f64 = ctx.f13.f64 * ctx.f0.f64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// fctiwz f10,f12
	ctx.f10.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f10,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.f10.u64);
	// lwz r4,-372(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// fctiwz f9,f11
	ctx.f9.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f9,-376(r1)
	REX_STORE_U64(ctx.r1.u32 + -376, ctx.f9.u64);
	// lwz r31,-372(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + -372);
	// stwx r4,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// stwx r31,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r31.u32);
	// b 0x82154e50
	goto loc_82154E50;
loc_82154E48:
	// stwx r29,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// stwx r29,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r29.u32);
loc_82154E50:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82154e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154E00;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// lwz r16,-336(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + -336);
	// lwz r19,-340(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r22,-344(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r20,-348(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + -348);
	// lwz r17,-352(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r15,-304(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r18,-308(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + -308);
	// lwz r21,-312(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + -312);
	// lwz r28,-316(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r14,-320(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + -320);
	// stw r11,-376(r1)
	REX_STORE_U32(ctx.r1.u32 + -376, ctx.r11.u32);
loc_82154E8C:
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// addi r24,r1,-288
	ctx.r24.s64 = ctx.r1.s64 + -288;
	// lwz r10,-364(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// addi r23,r1,-256
	ctx.r23.s64 = ctx.r1.s64 + -256;
	// lwzx r26,r29,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwzx r25,r29,r10
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// mullw r11,r20,r26
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r26.s32);
	// mullw r10,r17,r25
	ctx.r10.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r25.s32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// stwx r10,r29,r24
	REX_STORE_U32(ctx.r29.u32 + ctx.r24.u32, ctx.r10.u32);
	// stwx r10,r29,r23
	REX_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.r10.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// subf r8,r22,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r22.u64;
	// bgt cr6,0x82154ed0
	if (ctx.cr6.gt) goto loc_82154ED0;
	// subf r8,r11,r22
	ctx.r8.u64 = ctx.r22.u64 - ctx.r11.u64;
loc_82154ED0:
	// mullw r11,r22,r26
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r26.s32);
	// mullw r10,r20,r25
	ctx.r10.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r25.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r19.s32, ctx.xer);
	// subf r9,r19,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r19.u64;
	// bgt cr6,0x82154ef0
	if (ctx.cr6.gt) goto loc_82154EF0;
	// subf r9,r11,r19
	ctx.r9.u64 = ctx.r19.u64 - ctx.r11.u64;
loc_82154EF0:
	// mullw r10,r22,r25
	ctx.r10.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r25.s32);
	// mullw r11,r19,r26
	ctx.r11.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r26.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r16.s32, ctx.xer);
	// ble cr6,0x82154f14
	if (!ctx.cr6.gt) goto loc_82154F14;
	// subf r11,r16,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r16.u64;
	// b 0x82154f18
	goto loc_82154F18;
loc_82154F14:
	// subf r11,r11,r16
	ctx.r11.u64 = ctx.r16.u64 - ctx.r11.u64;
loc_82154F18:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// divw r7,r11,r4
	ctx.r7.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// bge cr6,0x82154f30
	if (!ctx.cr6.lt) goto loc_82154F30;
	// li r7,16
	ctx.r7.s64 = 16;
loc_82154F30:
	// mullw r11,r14,r25
	ctx.r11.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r28,r26
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// subf r8,r21,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r21.u64;
	// bgt cr6,0x82154f54
	if (ctx.cr6.gt) goto loc_82154F54;
	// subf r8,r11,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r11.u64;
loc_82154F54:
	// mullw r11,r28,r25
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r25.s32);
	// mullw r10,r21,r26
	ctx.r10.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r18.s32, ctx.xer);
	// subf r9,r18,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r18.u64;
	// bgt cr6,0x82154f74
	if (ctx.cr6.gt) goto loc_82154F74;
	// subf r9,r11,r18
	ctx.r9.u64 = ctx.r18.u64 - ctx.r11.u64;
loc_82154F74:
	// mullw r10,r18,r26
	ctx.r10.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r26.s32);
	// mullw r11,r21,r25
	ctx.r11.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpw cr6,r11,r15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r15.s32, ctx.xer);
	// ble cr6,0x82154f98
	if (!ctx.cr6.gt) goto loc_82154F98;
	// subf r11,r15,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r15.u64;
	// b 0x82154f9c
	goto loc_82154F9C;
loc_82154F98:
	// subf r11,r11,r15
	ctx.r11.u64 = ctx.r15.u64 - ctx.r11.u64;
loc_82154F9C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// divw r11,r11,r4
	ctx.r11.u64 = uint32_t((ctx.r4.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r4.s32 == -1)) ? ctx.r11.s32 / ctx.r4.s32 : 0);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82154fb0
	if (!ctx.cr6.lt) goto loc_82154FB0;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82154FB0:
	// addi r10,r1,-224
	ctx.r10.s64 = ctx.r1.s64 + -224;
	// lwz r9,-400(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// addi r8,r1,-192
	ctx.r8.s64 = ctx.r1.s64 + -192;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// stwx r7,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r7.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// stwx r11,r29,r8
	REX_STORE_U32(ctx.r29.u32 + ctx.r8.u32, ctx.r11.u32);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// ble cr6,0x82155158
	if (!ctx.cr6.gt) goto loc_82155158;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,-376(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82154FF4:
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mullw r10,r31,r26
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r3,r25
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r25.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// lwz r9,-388(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// divw r11,r8,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r8.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r8.s32 / ctx.r6.s32 : 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82155034
	if (!ctx.cr6.gt) goto loc_82155034;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82155040
	goto loc_82155040;
loc_82155034:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x82155040
	if (!ctx.cr6.lt) goto loc_82155040;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_82155040:
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82155058
	if (!ctx.cr6.gt) goto loc_82155058;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82155064
	goto loc_82155064;
loc_82155058:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82155064
	if (!ctx.cr6.lt) goto loc_82155064;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82155064:
	// lwz r8,-384(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// rlwinm r3,r11,2,26,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r3,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r6,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 8;
	// cmpwi cr6,r6,16
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 16, ctx.xer);
	// bge cr6,0x82155084
	if (!ctx.cr6.lt) goto loc_82155084;
	// li r6,16
	ctx.r6.s64 = 16;
loc_82155084:
	// lfsu f13,4(r4)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// subf r3,r9,r10
	ctx.r3.u64 = ctx.r10.u64 - ctx.r9.u64;
	// fmul f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r7,r25
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r25.s32);
	// lwzx r8,r29,r24
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f12.u64);
	// mullw r9,r27,r26
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// mullw r3,r3,r3
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r3.s32);
	// lwz r7,-388(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r11,r3,7
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 7;
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subf r11,r9,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r8,r29,r24
	REX_STORE_U32(ctx.r29.u32 + ctx.r24.u32, ctx.r8.u32);
	// divw r11,r11,r30
	ctx.r11.u64 = uint32_t((ctx.r30.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r11.s32 / ctx.r30.s32 : 0);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x821550e0
	if (!ctx.cr6.gt) goto loc_821550E0;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821550ec
	goto loc_821550EC;
loc_821550E0:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x821550ec
	if (!ctx.cr6.lt) goto loc_821550EC;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_821550EC:
	// mullw r10,r11,r30
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x82155104
	if (!ctx.cr6.gt) goto loc_82155104;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x82155110
	goto loc_82155110;
loc_82155104:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x82155110
	if (!ctx.cr6.lt) goto loc_82155110;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_82155110:
	// lwz r9,-384(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// rlwinm r8,r11,2,26,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// mullw r9,r11,r30
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// srawi r11,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82155130
	if (!ctx.cr6.lt) goto loc_82155130;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82155130:
	// subf r9,r7,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lwzx r8,r29,r23
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r23.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mullw r9,r9,r9
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,7
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 7;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// stwx r8,r29,r23
	REX_STORE_U32(ctx.r29.u32 + ctx.r23.u32, ctx.r8.u32);
	// bdnz 0x82154ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82154FF4;
loc_82155158:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r29,28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 28, ctx.xer);
	// blt cr6,0x82154e8c
	if (ctx.cr6.lt) goto loc_82154E8C;
	// lwz r9,-288(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -288);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,-284(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -284);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,-256(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -256);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82155188
	if (!ctx.cr6.lt) goto loc_82155188;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82155188:
	// lwz r8,-252(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -252);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8215519c
	if (!ctx.cr6.lt) goto loc_8215519C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8215519C:
	// lwz r8,-280(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -280);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821551b0
	if (!ctx.cr6.lt) goto loc_821551B0;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_821551B0:
	// lwz r8,-248(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -248);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821551c4
	if (!ctx.cr6.lt) goto loc_821551C4;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_821551C4:
	// lwz r8,-276(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -276);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821551d8
	if (!ctx.cr6.lt) goto loc_821551D8;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_821551D8:
	// lwz r8,-244(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -244);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821551ec
	if (!ctx.cr6.lt) goto loc_821551EC;
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_821551EC:
	// lwz r8,-272(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -272);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82155200
	if (!ctx.cr6.lt) goto loc_82155200;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82155200:
	// lwz r8,-240(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -240);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82155214
	if (!ctx.cr6.lt) goto loc_82155214;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_82155214:
	// lwz r8,-268(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -268);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82155228
	if (!ctx.cr6.lt) goto loc_82155228;
	// li r10,5
	ctx.r10.s64 = 5;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82155228:
	// lwz r8,-236(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -236);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8215523c
	if (!ctx.cr6.lt) goto loc_8215523C;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8215523C:
	// lwz r8,-264(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -264);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8215524c
	if (!ctx.cr6.lt) goto loc_8215524C;
	// li r10,6
	ctx.r10.s64 = 6;
loc_8215524C:
	// lwz r9,-232(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + -232);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8215525c
	if (!ctx.cr6.lt) goto loc_8215525C;
	// li r11,6
	ctx.r11.s64 = 6;
loc_8215525C:
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,-400(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + -400);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,-368(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -368);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-376(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -376);
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// addi r6,r1,-192
	ctx.r6.s64 = ctx.r1.s64 + -192;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// lwzx r27,r8,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// lwzx r25,r4,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// lwz r11,-364(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -364);
	// lwzx r9,r4,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// lwzx r6,r8,r6
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// lwzx r24,r4,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwzx r26,r8,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addic. r11,r7,-2
	ctx.xer.ca = ctx.r7.u32 > 1;
	ctx.r11.s64 = ctx.r7.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r10,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stbu r31,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U8(ea, ctx.r31.u8);
	ctx.r5.u32 = ea;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// sthu r9,1(r5)
	ea = 1 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// sthu r6,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r6.u16);
	ctx.r5.u32 = ea;
	// sthu r20,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r20.u16);
	ctx.r5.u32 = ea;
	// sthu r28,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r28.u16);
	ctx.r5.u32 = ea;
	// sthu r17,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r17.u16);
	ctx.r5.u32 = ea;
	// sthu r14,2(r5)
	ea = 2 + ctx.r5.u32;
	REX_STORE_U16(ea, ctx.r14.u16);
	ctx.r5.u32 = ea;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// beq 0x82155424
	if (ctx.cr0.eq) goto loc_82155424;
	// lwz r23,-384(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + -384);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821552E0:
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r24,r4
	ctx.r11.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r10,r25,r30
	ctx.r10.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// lwz r8,-388(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// srawi r11,r4,8
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 8;
	// subf r3,r11,r8
	ctx.r3.u64 = ctx.r8.u64 - ctx.r11.u64;
	// divw r29,r3,r9
	ctx.r29.u64 = uint32_t((ctx.r9.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r3.s32 / ctx.r9.s32 : 0);
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// ble cr6,0x82155320
	if (!ctx.cr6.gt) goto loc_82155320;
	// li r29,7
	ctx.r29.s64 = 7;
	// b 0x8215532c
	goto loc_8215532C;
loc_82155320:
	// cmpwi cr6,r29,-8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -8, ctx.xer);
	// bge cr6,0x8215532c
	if (!ctx.cr6.lt) goto loc_8215532C;
	// li r29,-8
	ctx.r29.s64 = -8;
loc_8215532C:
	// mullw r10,r29,r9
	ctx.r10.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r9.s32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// ble cr6,0x82155344
	if (!ctx.cr6.gt) goto loc_82155344;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82155350
	goto loc_82155350;
loc_82155344:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bge cr6,0x82155350
	if (!ctx.cr6.lt) goto loc_82155350;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82155350:
	// rlwinm r11,r29,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x3C;
	// lwzx r10,r11,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 8;
	// cmpwi cr6,r9,16
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 16, ctx.xer);
	// bge cr6,0x8215536c
	if (!ctx.cr6.lt) goto loc_8215536C;
	// li r9,16
	ctx.r9.s64 = 16;
loc_8215536C:
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// mullw r10,r27,r28
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// mullw r11,r26,r31
	ctx.r11.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r31.s32);
	// fctiwz f11,f12
	ctx.f11.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f11,-392(r1)
	REX_STORE_U64(ctx.r1.u32 + -392, ctx.f11.u64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srawi r10,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 8;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r3,-388(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -388);
	// subf r3,r10,r3
	ctx.r3.u64 = ctx.r3.u64 - ctx.r10.u64;
	// divw r11,r3,r6
	ctx.r11.u64 = uint32_t((ctx.r6.s32 && !(ctx.r3.s32 == INT32_MIN && ctx.r6.s32 == -1)) ? ctx.r3.s32 / ctx.r6.s32 : 0);
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x821553b4
	if (!ctx.cr6.gt) goto loc_821553B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x821553c0
	goto loc_821553C0;
loc_821553B4:
	// cmpwi cr6,r11,-8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8, ctx.xer);
	// bge cr6,0x821553c0
	if (!ctx.cr6.lt) goto loc_821553C0;
	// li r11,-8
	ctx.r11.s64 = -8;
loc_821553C0:
	// mullw r8,r11,r6
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpwi cr6,r10,32767
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32767, ctx.xer);
	// ble cr6,0x821553d8
	if (!ctx.cr6.gt) goto loc_821553D8;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// b 0x821553e4
	goto loc_821553E4;
loc_821553D8:
	// cmpwi cr6,r10,-32768
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -32768, ctx.xer);
	// bge cr6,0x821553e4
	if (!ctx.cr6.lt) goto loc_821553E4;
	// li r10,-32768
	ctx.r10.s64 = -32768;
loc_821553E4:
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// clrlwi r8,r11,28
	ctx.r8.u64 = ctx.r11.u32 & 0xF;
	// lwzx r11,r7,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r23.u32);
	// mullw r7,r11,r6
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// srawi r11,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 8;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bge cr6,0x82155404
	if (!ctx.cr6.lt) goto loc_82155404;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82155404:
	// rlwinm r7,r29,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stb r8,0(r5)
	REX_STORE_U8(ctx.r5.u32 + 0, ctx.r8.u8);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x821552e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821552E0;
loc_82155424:
	// lwz r11,-396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -396);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82154dc8
	if (!ctx.cr6.eq) goto loc_82154DC8;
loc_82155430:
	// lwz r11,-360(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -360);
	// subf r3,r11,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r11.u64;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_8215543C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_125) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_21) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__restvmx_98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_119) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_82161898) {
	REX_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82161758
	sub_82161758(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821623F0) {
	REX_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// beq cr6,0x8216243c
	if (ctx.cr6.eq) goto loc_8216243C;
	// cmpwi cr6,r11,69
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 69, ctx.xer);
	// beq cr6,0x8216243c
	if (ctx.cr6.eq) goto loc_8216243C;
	// cmpwi cr6,r11,102
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 102, ctx.xer);
	// bne cr6,0x8216241c
	if (!ctx.cr6.eq) goto loc_8216241C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x821621a0
	sub_821621A0(ctx, base);
	return;
loc_8216241C:
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// beq cr6,0x82162434
	if (ctx.cr6.eq) goto loc_82162434;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// beq cr6,0x82162434
	if (ctx.cr6.eq) goto loc_82162434;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82162270
	sub_82162270(ctx, base);
	return;
loc_82162434:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82161be0
	sub_82161BE0(ctx, base);
	return;
loc_8216243C:
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82161af0
	sub_82161AF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82164368) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82164370;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r30,r10,-23792
	ctx.r30.s64 = ctx.r10.s64 + -23792;
	// addi r28,r11,21192
	ctx.r28.s64 = ctx.r11.s64 + 21192;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8216438C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821643b4
	if (!ctx.cr6.eq) goto loc_821643B4;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x821642d0
	ctx.lr = 0x821643AC;
	sub_821642D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821643d4
	if (ctx.cr0.eq) goto loc_821643D4;
loc_821643B4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8216438c
	if (ctx.cr6.lt) goto loc_8216438C;
	// li r3,1
	ctx.r3.s64 = 1;
loc_821643CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_821643D4:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x821643cc
	goto loc_821643CC;
}

DEFINE_REX_FUNC(sub_82165428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82165430;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r30,-4096
	ctx.r30.s64 = -4096;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8216546c
	if (ctx.cr6.eq) goto loc_8216546C;
	// divwu r11,r30,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r30.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8216546c
	if (!ctx.cr6.lt) goto loc_8216546C;
	// bl 0x82162980
	ctx.lr = 0x82165458;
	sub_82162980(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821654e4
	goto loc_821654E4;
loc_8216546C:
	// mullw. r31,r3,r4
	ctx.r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82165478
	if (!ctx.cr0.eq) goto loc_82165478;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82165478:
	// lis r29,-32189
	ctx.r29.s64 = -2109538304;
loc_8216547C:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x821654a0
	if (ctx.cr6.gt) goto loc_821654A0;
	// bl 0x820ef2d0
	ctx.lr = 0x8216548C;
	sub_820EF2D0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x820ed968
	ctx.lr = 0x82165498;
	sub_820ED968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821654e4
	if (!ctx.cr0.eq) goto loc_821654E4;
loc_821654A0:
	// lwz r11,21588(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 21588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821654d4
	if (ctx.cr6.eq) goto loc_821654D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215fc50
	ctx.lr = 0x821654B4;
	sub_8215FC50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8216547c
	if (!ctx.cr0.eq) goto loc_8216547C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821654cc
	if (ctx.cr6.eq) goto loc_821654CC;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821654CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821654e4
	goto loc_821654E4;
loc_821654D4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821654e4
	if (ctx.cr6.eq) goto loc_821654E4;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_821654E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82169C98) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm. r11,r3,0,22,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r8,r4,0,22,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x300;
	// rlwinm r9,r4,0,24,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82169cec
	if (ctx.cr0.eq) goto loc_82169CEC;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// bne cr6,0x82169cd0
	if (!ctx.cr6.eq) goto loc_82169CD0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82169cec
	goto loc_82169CEC;
loc_82169CD0:
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x82169ce0
	if (!ctx.cr6.eq) goto loc_82169CE0;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82169cec
	goto loc_82169CEC;
loc_82169CE0:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82169cec
	if (!ctx.cr6.eq) goto loc_82169CEC;
	// li r3,3
	ctx.r3.s64 = 3;
loc_82169CEC:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169cf8
	if (ctx.cr0.eq) goto loc_82169CF8;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
loc_82169CF8:
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169d04
	if (ctx.cr0.eq) goto loc_82169D04;
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
loc_82169D04:
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169d10
	if (ctx.cr0.eq) goto loc_82169D10;
	// ori r3,r3,64
	ctx.r3.u64 = ctx.r3.u64 | 64;
loc_82169D10:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169d1c
	if (ctx.cr0.eq) goto loc_82169D1C;
	// ori r3,r3,16
	ctx.r3.u64 = ctx.r3.u64 | 16;
loc_82169D1C:
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82169d28
	if (ctx.cr0.eq) goto loc_82169D28;
	// ori r3,r3,128
	ctx.r3.u64 = ctx.r3.u64 | 128;
loc_82169D28:
	// rlwinm. r10,r9,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82169d60
	if (ctx.cr0.eq) goto loc_82169D60;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// bne cr6,0x82169d44
	if (!ctx.cr6.eq) goto loc_82169D44;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82169d60
	goto loc_82169D60;
loc_82169D44:
	// cmplwi cr6,r10,512
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 512, ctx.xer);
	// bne cr6,0x82169d54
	if (!ctx.cr6.eq) goto loc_82169D54;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82169d60
	goto loc_82169D60;
loc_82169D54:
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bne cr6,0x82169d60
	if (!ctx.cr6.eq) goto loc_82169D60;
	// li r11,3
	ctx.r11.s64 = 3;
loc_82169D60:
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169d6c
	if (ctx.cr0.eq) goto loc_82169D6C;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82169D6C:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169d78
	if (ctx.cr0.eq) goto loc_82169D78;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
loc_82169D78:
	// rlwinm. r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169d84
	if (ctx.cr0.eq) goto loc_82169D84;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82169D84:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169d90
	if (ctx.cr0.eq) goto loc_82169D90;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82169D90:
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82169d9c
	if (ctx.cr0.eq) goto loc_82169D9C;
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
loc_82169D9C:
	// rlwinm r10,r8,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 | ctx.r11.u64;
	// bl 0x82167100
	ctx.lr = 0x82169DA8;
	sub_82167100(ctx, base);
	// bl 0x82169c18
	ctx.lr = 0x82169DAC;
	sub_82169C18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82167100
	ctx.lr = 0x82169DBC;
	sub_82167100(ctx, base);
	// bl 0x82169c18
	ctx.lr = 0x82169DC0;
	sub_82169C18(ctx, base);
	// clrlwi r10,r3,12
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFFF;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// rlwinm r10,r10,0,27,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF8001F;
	// ori r11,r11,31
	ctx.r11.u64 = ctx.r11.u64 | 31;
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82169de0
	if (!ctx.cr6.eq) goto loc_82169DE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82169DE0:
	// bl 0x823753c4
	ctx.lr = 0x82169DE4;
	__imp__KeEnableFpuExceptions(ctx, base);
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

DEFINE_REX_FUNC(sub_8216CBF8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,10540(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10540);
	// clrlwi r3,r11,28
	ctx.r3.u64 = ctx.r11.u32 & 0xF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CCD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10572);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216D108) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stw r4,28(r1)
	REX_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	ctx.r11.u64 = ctx.r10.u64 | ctx.r12.u64;
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216DA80) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(24));
	// lwzx r9,r11,r3
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216E338) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8215eba0
	ctx.lr = 0x8216E34C;
	__savefpr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,12616(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12616);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// fmr f29,f5
	ctx.f29.f64 = ctx.f5.f64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fmr f28,f6
	ctx.f28.f64 = ctx.f6.f64;
	// bne 0x8216e380
	if (!ctx.cr0.eq) goto loc_8216E380;
	// lwz r9,12632(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12632);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8216e574
	if (ctx.cr6.eq) goto loc_8216E574;
loc_8216E380:
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8216e394
	if (ctx.cr0.eq) goto loc_8216E394;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216e420
	goto loc_8216E420;
loc_8216E394:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216e418
	if (ctx.cr0.eq) goto loc_8216E418;
	// lwz r11,12904(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12904);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8216e3b0
	if (ctx.cr6.eq) goto loc_8216E3B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8216e418
	if (!ctx.cr6.eq) goto loc_8216E418;
loc_8216E3B0:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e3c8
	if (ctx.cr6.eq) goto loc_8216E3C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e418
	if (!ctx.cr6.eq) goto loc_8216E418;
loc_8216E3C8:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e3e0
	if (ctx.cr6.eq) goto loc_8216E3E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e418
	if (!ctx.cr6.eq) goto loc_8216E418;
loc_8216E3E0:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e3f8
	if (ctx.cr6.eq) goto loc_8216E3F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e418
	if (!ctx.cr6.eq) goto loc_8216E418;
loc_8216E3F8:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e410
	if (ctx.cr6.eq) goto loc_8216E410;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e418
	if (!ctx.cr6.eq) goto loc_8216E418;
loc_8216E410:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216e41c
	goto loc_8216E41C;
loc_8216E418:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216E41C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8216E420:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216e434
	if (ctx.cr0.eq) goto loc_8216E434;
	// lwz r11,13356(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 13356);
	// lwz r7,13360(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 13360);
	// b 0x8216e448
	goto loc_8216E448;
loc_8216E434:
	// lwz r10,36(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_8216E448:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f31.f64) ? int64_t(0x80000000U) : (ctx.f31.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f0,f3
	ctx.f0.s64 = std::isnan(ctx.f3.f64) ? int64_t(0x80000000U) : (ctx.f3.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	ctx.f0.s64 = std::isnan(ctx.f30.f64) ? int64_t(0x80000000U) : (ctx.f30.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8216e47c
	if (!ctx.cr6.lt) goto loc_8216E47C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8216E47C:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f4.f64) ? int64_t(0x80000000U) : (ctx.f4.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8216e498
	if (ctx.cr6.lt) goto loc_8216E498;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8216E498:
	// subf. r11,r6,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r10,r8,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r8.u64;
	// blt 0x8216e4ac
	if (ctx.cr0.lt) goto loc_8216E4AC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x8216e4b4
	if (!ctx.cr6.lt) goto loc_8216E4B4;
loc_8216E4AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8216E4B4:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// stfs f31,12824(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 12824, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,12828(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 12828, temp.u32);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r11,0
	ctx.r11.s64 = 0;
	// frsp f27,f0
	ctx.f27.f64 = double(float(ctx.f0.f64));
	// stfs f29,12840(r31)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 12840, temp.u32);
	// fcfid f0,f13
	ctx.f0.f64 = double(ctx.f13.s64);
	// stfs f28,12844(r31)
	temp.f32 = float(ctx.f28.f64);
	REX_STORE_U32(ctx.r31.u32 + 12844, temp.u32);
	// stfs f27,12836(r31)
	temp.f32 = float(ctx.f27.f64);
	REX_STORE_U32(ctx.r31.u32 + 12836, temp.u32);
	// stw r11,12848(r31)
	REX_STORE_U32(ctx.r31.u32 + 12848, ctx.r11.u32);
	// addi r4,r31,12852
	ctx.r4.s64 = ctx.r31.s64 + 12852;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f26,f0
	ctx.f26.f64 = double(float(ctx.f0.f64));
	// stfs f26,12832(r31)
	temp.f32 = float(ctx.f26.f64);
	REX_STORE_U32(ctx.r31.u32 + 12832, temp.u32);
	// bl 0x8216dd30
	ctx.lr = 0x8216E508;
	sub_8216DD30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 10520, temp.u32);
	// stfs f29,10524(r31)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 10524, temp.u32);
	// lfs f0,2096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2096);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8216E574:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8215ebec
	ctx.lr = 0x8216E580;
	__restfpr_26(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821771B8) {
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
	// lwz r3,19896(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19896);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821771f4
	if (ctx.cr6.eq) goto loc_821771F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821771EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,19896(r31)
	REX_STORE_U32(ctx.r31.u32 + 19896, ctx.r11.u32);
loc_821771F4:
	// lwz r3,19940(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19940);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177208
	if (ctx.cr6.eq) goto loc_82177208;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8216b138
	ctx.lr = 0x82177208;
	sub_8216B138(ctx, base);
loc_82177208:
	// lwz r3,19920(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217721c
	if (ctx.cr6.eq) goto loc_8217721C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8216b138
	ctx.lr = 0x8217721C;
	sub_8216B138(ctx, base);
loc_8217721C:
	// lwz r3,19908(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 19908);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82177230
	if (ctx.cr6.eq) goto loc_82177230;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x8216b138
	ctx.lr = 0x82177230;
	sub_8216B138(ctx, base);
loc_82177230:
	// addi r31,r31,19888
	ctx.r31.s64 = ctx.r31.s64 + 19888;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82177238:
	// addi r31,r31,-9936
	ctx.r31.s64 = ctx.r31.s64 + -9936;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821766d0
	ctx.lr = 0x82177244;
	sub_821766D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82177238
	if (!ctx.cr0.lt) goto loc_82177238;
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

DEFINE_REX_FUNC(sub_82178760) {
	REX_FUNC_PROLOGUE();
	// b 0x821781c0
	sub_821781C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82178770) {
	REX_FUNC_PROLOGUE();
	// b 0x82178328
	sub_82178328(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82178930) {
	REX_FUNC_PROLOGUE();
	// b 0x82178778
	sub_82178778(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82178988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// vor128 v60,v1,v1
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_load_si128((simde__m128i*)ctx.v1.u8));
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r11,r11,22656
	ctx.r11.s64 = ctx.r11.s64 + 22656;
	// addi r10,r10,22640
	ctx.r10.s64 = ctx.r10.s64 + 22640;
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// addi r9,r9,22624
	ctx.r9.s64 = ctx.r9.s64 + 22624;
	// lvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v59,v63,0
	simde_mm_store_si128((simde__m128i*)ctx.v59.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v0,v62,3
	simde_mm_store_si128((simde__m128i*)ctx.v0.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x0));
	// vspltw128 v56,v62,2
	simde_mm_store_si128((simde__m128i*)ctx.v56.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0x55));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v55,v62,1
	simde_mm_store_si128((simde__m128i*)ctx.v55.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xAA));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v60.f32), simde_mm_load_ps(ctx.v59.f32)));
	// vspltw128 v62,v62,0
	simde_mm_store_si128((simde__m128i*)ctx.v62.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v58,v63,2
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v57,v63,3
	simde_mm_store_si128((simde__m128i*)ctx.v57.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0x0));
	// vcmpgtfp128 v12,v56,v60
	simde_mm_store_ps(ctx.v12.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v56.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v9,v61,2
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x55));
	// vcmpgtfp128 v7,v55,v60
	simde_mm_store_ps(ctx.v7.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v55.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	simde_mm_store_ps(ctx.v8.f32, simde_mm_cmpgt_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v60.f32)));
	// vspltw128 v4,v61,3
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v11,v61,1
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vrfin128 v62,v59
	simde_mm_store_ps(ctx.v62.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_NEAREST_INT | SIMDE_MM_FROUND_NO_EXC));
	// vmulfp128 v61,v62,v58
	simde_mm_store_ps(ctx.v61.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v59,v62,v57
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v13,v62,v0
	simde_mm_store_ps(ctx.v13.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vrfiz128 v10,v61
	simde_mm_store_ps(ctx.v10.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v61.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v5,v59
	simde_mm_store_ps(ctx.v5.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v59.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vrfiz128 v6,v63
	simde_mm_store_ps(ctx.v6.f32, simde_mm_round_ps(simde_mm_load_ps(ctx.v63.f32), SIMDE_MM_FROUND_TO_ZERO | SIMDE_MM_FROUND_NO_EXC));
	// vmaddfp v9,v10,v0,v9
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v5,v0,v4
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v4.f32)));
	// vmaddfp v11,v6,v0,v11
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v6.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v11.f32)));
	// vsel v12,v10,v9,v12
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v10.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v9.u8))));
	// vsel v0,v12,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v7.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8))));
	// vsel v1,v0,v13,v8
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_or_si128(simde_mm_andnot_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v0.u8)), simde_mm_and_si128(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)ctx.v13.u8))));
	// vrlimi128 v1,v60,1,0
	simde_mm_store_ps(ctx.v1.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v1.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v60.f32), 228), 1));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8217FA00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
loc_8217FA00:
	// ld r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8217fa14
	if (!ctx.cr6.lt) goto loc_8217FA14;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_8217FA14:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8217fa24
	if (!ctx.cr6.gt) goto loc_8217FA24;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_8217FA24:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_8217FA2C:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r3
	ea = ctx.r3.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8217fa50
	if (!ctx.cr6.eq) goto loc_8217FA50;
	// stdcx. r10,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8217fa2c
	if (!ctx.cr0.eq) goto loc_8217FA2C;
	// b 0x8217fa58
	goto loc_8217FA58;
loc_8217FA50:
	// stdcx. r8,0,r3
	ea = ctx.r3.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8217FA58:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x8217fa00
	if (!ctx.cr6.eq) goto loc_8217FA00;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82180A90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82180A98;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,13408(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 13408);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82180afc
	if (ctx.cr6.eq) goto loc_82180AFC;
	// subfic r11,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// stw r5,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r5,1
	ctx.r5.s64 = 1;
	// rlwinm r11,r11,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// addi r3,r3,13568
	ctx.r3.s64 = ctx.r3.s64 + 13568;
	// rlwimi r30,r11,24,0,7
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (ctx.r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82180210
	ctx.lr = 0x82180AF8;
	sub_82180210(ctx, base);
	// b 0x82180c34
	goto loc_82180C34;
loc_82180AFC:
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82180b84
	if (ctx.cr6.eq) goto loc_82180B84;
	// addi r24,r31,11016
	ctx.r24.s64 = ctx.r31.s64 + 11016;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823754c4
	ctx.lr = 0x82180B14;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82180b70
	if (ctx.cr6.eq) goto loc_82180B70;
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lis r11,-28928
	ctx.r11.s64 = -1895825408;
	// bne cr6,0x82180b38
	if (!ctx.cr6.eq) goto loc_82180B38;
	// lis r11,-32512
	ctx.r11.s64 = -2130706432;
loc_82180B38:
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r27,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82180170
	ctx.lr = 0x82180B60;
	sub_82180170(ctx, base);
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// li r28,1
	ctx.r28.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,11012(r31)
	REX_STORE_U32(ctx.r31.u32 + 11012, ctx.r11.u32);
loc_82180B70:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823754b4
	ctx.lr = 0x82180B7C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82180c34
	if (!ctx.cr6.eq) goto loc_82180C34;
loc_82180B84:
	// lwz r11,24200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24200);
	// lwz r10,21748(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 21748);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r10,r11,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bne cr6,0x82180bac
	if (!ctx.cr6.eq) goto loc_82180BAC;
	// lwz r11,23576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82180bb0
	if (ctx.cr6.eq) goto loc_82180BB0;
loc_82180BAC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82180BB0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82180bf8
	if (ctx.cr6.eq) goto loc_82180BF8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82180bf8
	if (ctx.cr6.eq) goto loc_82180BF8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82180bf8
	if (ctx.cr6.eq) goto loc_82180BF8;
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// lis r7,-28928
	ctx.r7.s64 = -1895825408;
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11012(r31)
	REX_STORE_U32(ctx.r31.u32 + 11012, ctx.r11.u32);
	// bl 0x8218e700
	ctx.lr = 0x82180BF4;
	sub_8218E700(ctx, base);
	// b 0x82180c34
	goto loc_82180C34;
loc_82180BF8:
	// subfic r10,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r23.u64;
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// li r5,1
	ctx.r5.s64 = 1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r11,r10,0,28,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE;
	// stw r9,11012(r31)
	REX_STORE_U32(ctx.r31.u32 + 11012, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-127
	ctx.r11.s64 = ctx.r11.s64 + -127;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r30,r11,24,0,7
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000) | (ctx.r30.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x821803c8
	ctx.lr = 0x82180C34;
	sub_821803C8(ctx, base);
loc_82180C34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821856C0) {
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
	// beq cr6,0x82185704
	if (ctx.cr6.eq) goto loc_82185704;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x821856c0
	ctx.lr = 0x821856E4;
	sub_821856C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x8216b138
	ctx.lr = 0x821856F8;
	sub_8216B138(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x82185704;
	sub_8216B138(ctx, base);
loc_82185704:
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

DEFINE_REX_FUNC(sub_82186028) {
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
	// addi r30,r3,22024
	ctx.r30.s64 = ctx.r3.s64 + 22024;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82186054;
	sub_8215EC60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,23560(r31)
	REX_STORE_U32(ctx.r31.u32 + 23560, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181f38
	ctx.lr = 0x82186068;
	sub_82181F38(ctx, base);
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

DEFINE_REX_FUNC(sub_82186500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82186508;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r4,r5,3
	ctx.r4.s64 = ctx.r5.s64 + 3;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82181270
	ctx.lr = 0x82186524;
	sub_82181270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82186570
	if (ctx.cr0.eq) goto loc_82186570;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 1;
	// ori r11,r11,11008
	ctx.r11.u64 = ctx.r11.u64 | 11008;
	// clrlwi r9,r31,18
	ctx.r9.u64 = ctx.r31.u32 & 0x3FFF;
	// rlwimi r11,r10,16,2,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000) | (ctx.r11.u64 & 0xFFFFFFFFC000FFFF);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x82186564;
	sub_8215E640(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82186570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82189720) {
	REX_FUNC_PROLOGUE();
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,16(r5)
	REX_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// stw r10,20(r5)
	REX_STORE_U32(ctx.r5.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218976c
	if (!ctx.cr6.eq) goto loc_8218976C;
	// stw r11,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// stw r11,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r11.u32);
	// b 0x82189778
	goto loc_82189778;
loc_8218976C:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r5)
	REX_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,40(r5)
	REX_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_82189778:
	// stw r11,28(r5)
	REX_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
	// stw r11,32(r5)
	REX_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
	// stw r11,36(r5)
	REX_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// stw r11,44(r5)
	REX_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// stw r11,48(r5)
	REX_STORE_U32(ctx.r5.u32 + 48, ctx.r11.u32);
	// stw r11,52(r5)
	REX_STORE_U32(ctx.r5.u32 + 52, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218A388) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f13,f1
	ctx.f13.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x8218a404
	if (!ctx.cr6.lt) goto loc_8218A404;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f1,f1
	ctx.f1.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f2,4576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4576);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82189980
	ctx.lr = 0x8218A3C8;
	sub_82189980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f2,2236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2236);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82189980
	ctx.lr = 0x8218A3DC;
	sub_82189980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4652(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4652);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,4664(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4664);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4528(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4528);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f0,f30,f0,f12
	ctx.f0.f64 = double(float(std::fma(ctx.f30.f64, ctx.f0.f64, -ctx.f12.f64)));
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x8218a470
	goto loc_8218A470;
loc_8218A404:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f2,2236(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2236);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// bge cr6,0x8218a468
	if (!ctx.cr6.lt) goto loc_8218A468;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82189980
	ctx.lr = 0x8218A420;
	sub_82189980(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lfs f30,4576(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4576);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82189980
	ctx.lr = 0x8218A438;
	sub_82189980(ctx, base);
	// fmuls f11,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fabs f10,f31
	ctx.f10.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,4652(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4652);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4552);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4548(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4548);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f0,f29,f0,f11
	ctx.f0.f64 = double(float(std::fma(ctx.f29.f64, ctx.f0.f64, -ctx.f11.f64)));
	// fnmsubs f0,f10,f13,f0
	ctx.f0.f64 = double(float(-std::fma(ctx.f10.f64, ctx.f13.f64, -ctx.f0.f64)));
	// fadds f1,f0,f12
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// b 0x8218a470
	goto loc_8218A470;
loc_8218A468:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f1.f64 = double(temp.f32);
loc_8218A470:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

DEFINE_REX_FUNC(sub_8218DA08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8218DA10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,11976(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 11976);
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r28,10952(r31)
	REX_STORE_U32(ctx.r31.u32 + 10952, ctx.r28.u32);
	// bl 0x8216b138
	ctx.lr = 0x8218DA2C;
	sub_8216B138(ctx, base);
	// addi r30,r31,11388
	ctx.r30.s64 = ctx.r31.s64 + 11388;
	// li r29,6
	ctx.r29.s64 = 6;
loc_8218DA34:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8218da50
	if (ctx.cr6.eq) goto loc_8218DA50;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823752b4
	ctx.lr = 0x8218DA50;
	__imp__KeSetEvent(ctx, base);
loc_8218DA50:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bne 0x8218da34
	if (!ctx.cr0.eq) goto loc_8218DA34;
	// addi r30,r31,11404
	ctx.r30.s64 = ctx.r31.s64 + 11404;
	// li r29,6
	ctx.r29.s64 = 6;
loc_8218DA64:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8218da80
	if (ctx.cr6.eq) goto loc_8218DA80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x820eb0a0
	ctx.lr = 0x8218DA78;
	sub_820EB0A0(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820e8f80
	ctx.lr = 0x8218DA80;
	sub_820E8F80(ctx, base);
loc_8218DA80:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// bne 0x8218da64
	if (!ctx.cr0.eq) goto loc_8218DA64;
	// stw r28,10988(r31)
	REX_STORE_U32(ctx.r31.u32 + 10988, ctx.r28.u32);
	// stw r28,10992(r31)
	REX_STORE_U32(ctx.r31.u32 + 10992, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218F0B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8218F0C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8218f19c
	if (ctx.cr6.eq) goto loc_8218F19C;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8218f19c
	if (ctx.cr0.eq) goto loc_8218F19C;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x8218f148
	goto loc_8218F148;
loc_8218F0EC:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8218F0F4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8218f118
	if (ctx.cr0.eq) goto loc_8218F118;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8218f0f4
	if (ctx.cr6.eq) goto loc_8218F0F4;
loc_8218F118:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8218f150
	if (ctx.cr0.eq) goto loc_8218F150;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8218F124:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f124
	if (!ctx.cr6.eq) goto loc_8218F124;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_8218F148:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8218f0ec
	if (ctx.cr6.lt) goto loc_8218F0EC;
loc_8218F150:
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8218f194
	if (!ctx.cr6.eq) goto loc_8218F194;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8218F15C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8218f15c
	if (!ctx.cr6.eq) goto loc_8218F15C;
	// subf r11,r5,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r5.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r31,r11,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 1;
	// bl 0x8215e640
	ctx.lr = 0x8218F184;
	sub_8215E640(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8218F194:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8218f1a0
	goto loc_8218F1A0;
loc_8218F19C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8218F1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82195E50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82195E58;
	__savegprlr_14(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r4,828(r1)
	REX_STORE_U32(ctx.r1.u32 + 828, ctx.r4.u32);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// stw r5,836(r1)
	REX_STORE_U32(ctx.r1.u32 + 836, ctx.r5.u32);
	// mr r14,r22
	ctx.r14.u64 = ctx.r22.u64;
	// stw r6,844(r1)
	REX_STORE_U32(ctx.r1.u32 + 844, ctx.r6.u32);
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// stw r7,852(r1)
	REX_STORE_U32(ctx.r1.u32 + 852, ctx.r7.u32);
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r8,860(r1)
	REX_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// stw r9,868(r1)
	REX_STORE_U32(ctx.r1.u32 + 868, ctx.r9.u32);
	// stw r10,876(r1)
	REX_STORE_U32(ctx.r1.u32 + 876, ctx.r10.u32);
	// stw r22,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
	// stw r22,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bctrl 
	ctx.lr = 0x82195EB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8218f000
	ctx.lr = 0x82195EC8;
	sub_8218F000(ctx, base);
	// mr. r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq 0x82196988
	if (ctx.cr0.eq) goto loc_82196988;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8215e640
	ctx.lr = 0x82195EE0;
	sub_8215E640(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// ori r10,r10,50432
	ctx.r10.u64 = ctx.r10.u64 | 50432;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwzux r21,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	ctx.r21.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwzu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r29.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// mullw r31,r21,r10
	ctx.r31.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r10.s32);
	// stw r29,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x82195F10;
	sub_8218F000(ctx, base);
	// stw r3,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82195f28
	if (!ctx.cr0.eq) goto loc_82195F28;
loc_82195F1C:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,14
	ctx.r17.u64 = ctx.r17.u64 | 14;
	// b 0x821968b4
	goto loc_821968B4;
loc_82195F28:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82195F34;
	sub_8215EC60(ctx, base);
	// mulli r31,r21,12
	ctx.r31.s64 = static_cast<int64_t>(ctx.r21.u64 * static_cast<uint64_t>(12));
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x82195F44;
	sub_8218F000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// beq 0x82195f1c
	if (ctx.cr0.eq) goto loc_82195F1C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82195F60;
	sub_8215EC60(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// addi r18,r11,-13416
	ctx.r18.s64 = ctx.r11.s64 + -13416;
	// beq cr6,0x82196164
	if (ctx.cr6.eq) goto loc_82196164;
	// addi r22,r30,4
	ctx.r22.s64 = ctx.r30.s64 + 4;
loc_82195F78:
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwzu r8,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// lwzu r11,8(r27)
	ea = 8 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82195f98
	if (ctx.cr6.eq) goto loc_82195F98;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82195F98:
	// add r11,r10,r16
	ctx.r11.u64 = ctx.r10.u64 + ctx.r16.u64;
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// beq cr6,0x82196100
	if (ctx.cr6.eq) goto loc_82196100;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82196100
	if (ctx.cr6.eq) goto loc_82196100;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// beq cr6,0x82195fd8
	if (ctx.cr6.eq) goto loc_82195FD8;
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// beq cr6,0x82195fd8
	if (ctx.cr6.eq) goto loc_82195FD8;
	// cmpwi cr6,r10,12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12, ctx.xer);
	// beq cr6,0x82195fd8
	if (ctx.cr6.eq) goto loc_82195FD8;
	// cmpwi cr6,r10,13
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 13, ctx.xer);
	// beq cr6,0x82195fd8
	if (ctx.cr6.eq) goto loc_82195FD8;
	// cmpwi cr6,r10,14
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 14, ctx.xer);
	// bne cr6,0x82196150
	if (!ctx.cr6.eq) goto loc_82196150;
loc_82195FD8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r9,r10,r16
	ctx.r9.u64 = ctx.r10.u64 + ctx.r16.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r23,r9,4
	ctx.r23.s64 = ctx.r9.s64 + 4;
	// lwzx r25,r10,r16
	ctx.r25.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// bgt cr6,0x82195ffc
	if (ctx.cr6.gt) goto loc_82195FFC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82195FFC:
	// add r29,r8,r16
	ctx.r29.u64 = ctx.r8.u64 + ctx.r16.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82196150
	if (ctx.cr6.eq) goto loc_82196150;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r11,r11,788
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(788));
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfic r28,r7,-8
	ctx.xer.ca = ctx.r7.u32 <= 4294967288;
	ctx.r28.u64 = static_cast<uint64_t>(-8) - ctx.r7.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_82196024:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196094
	if (ctx.cr6.eq) goto loc_82196094;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82196038:
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwzu r11,12(r29)
	ea = 12 + ctx.r29.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwzx r8,r11,r16
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwzx r10,r10,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82196090
	if (ctx.cr6.eq) goto loc_82196090;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 + ctx.r31.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stw r10,12(r9)
	REX_STORE_U32(ctx.r9.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82196090:
	// bdnz 0x82196038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82196038;
loc_82196094:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821960f0
	if (!ctx.cr6.gt) goto loc_821960F0;
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x821960B0;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821964b0
	if (ctx.cr0.lt) goto loc_821964B0;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821960CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8215e640
	ctx.lr = 0x821960D8;
	sub_8215E640(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r26,-4(r31)
	REX_STORE_U32(ctx.r31.u32 + -4, ctx.r26.u32);
	// addi r31,r31,788
	ctx.r31.s64 = ctx.r31.s64 + 788;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_821960F0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82196024
	if (ctx.cr6.lt) goto loc_82196024;
	// b 0x82196150
	goto loc_82196150;
loc_82196100:
	// lwzx r10,r8,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,-4(r22)
	REX_STORE_U32(ctx.r22.u32 + -4, ctx.r10.u32);
	// lwzx r30,r31,r16
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r16.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x8219611C;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,0(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r31,r16
	ctx.r11.u64 = ctx.r31.u64 + ctx.r16.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x82196148;
	sub_8215E640(ctx, base);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// addi r22,r22,12
	ctx.r22.s64 = ctx.r22.s64 + 12;
loc_82196150:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplw cr6,r20,r21
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82195f78
	if (ctx.cr6.lt) goto loc_82195F78;
	// lwz r29,112(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r22,0
	ctx.r22.s64 = 0;
loc_82196164:
	// lis r11,3
	ctx.r11.s64 = 196608;
	// li r4,16
	ctx.r4.s64 = 16;
	// ori r11,r11,640
	ctx.r11.u64 = ctx.r11.u64 | 640;
	// mullw r31,r29,r11
	ctx.r31.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r11.s32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x8219617C;
	sub_8218F000(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821964b0
	if (ctx.cr0.eq) goto loc_821964B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82196194;
	sub_8215EC60(ctx, base);
	// rlwinm r31,r29,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x821961A4;
	sub_8218F000(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821964b0
	if (ctx.cr0.eq) goto loc_821964B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821961BC;
	sub_8215EC60(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821963e4
	if (ctx.cr6.eq) goto loc_821963E4;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r19,r10,-12544
	ctx.r19.s64 = ctx.r10.s64 + -12544;
	// addi r21,r11,-12776
	ctx.r21.s64 = ctx.r11.s64 + -12776;
	// addi r20,r9,-12816
	ctx.r20.s64 = ctx.r9.s64 + -12816;
loc_821961E4:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzu r23,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r23.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// beq cr6,0x82196200
	if (ctx.cr6.eq) goto loc_82196200;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82196200:
	// stw r23,-4(r25)
	REX_STORE_U32(ctx.r25.u32 + -4, ctx.r23.u32);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82196234
	if (ctx.cr6.eq) goto loc_82196234;
	// rlwinm r31,r23,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x8219621C;
	sub_8218F000(ctx, base);
	// stw r3,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821964b0
	if (ctx.cr0.eq) goto loc_821964B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x82196234;
	sub_8215EC60(ctx, base);
loc_82196234:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821963cc
	if (ctx.cr6.eq) goto loc_821963CC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r15,6164
	ctx.r11.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(6164));
	// mulli r26,r15,6164
	ctx.r26.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(6164));
	// li r28,0
	ctx.r28.s64 = 0;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82196254:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzu r30,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r30.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// beq cr6,0x82196270
	if (ctx.cr6.eq) goto loc_82196270;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82196270:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stwx r30,r28,r11
	REX_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r30.u32);
	// beq cr6,0x821962ac
	if (ctx.cr6.eq) goto loc_821962AC;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r29,0(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r3,r30,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8218f000
	ctx.lr = 0x82196290;
	sub_8218F000(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821964b0
	if (ctx.cr6.eq) goto loc_821964B0;
loc_821962AC:
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r24,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r24.u32);
	// beq cr6,0x821963a4
	if (ctx.cr6.eq) goto loc_821963A4;
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
loc_821962C4:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r9,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwzu r9,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// cmplwi cr6,r10,135
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 135, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// bge cr6,0x82196398
	if (!ctx.cr6.lt) goto loc_82196398;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r10,111
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 111, ctx.xer);
	// lwzx r9,r9,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r18.u32);
	// bge cr6,0x8219635c
	if (!ctx.cr6.lt) goto loc_8219635C;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82196398
	if (ctx.cr6.eq) goto loc_82196398;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r10,r10,r16
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stwx r10,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82196398
	goto loc_82196398;
loc_8219635C:
	// cmplwi cr6,r9,21
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 21, ctx.xer);
	// bge cr6,0x82196370
	if (!ctx.cr6.lt) goto loc_82196370;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r20
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	// b 0x82196374
	goto loc_82196374;
loc_82196370:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
loc_82196374:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823756c4
	ctx.lr = 0x82196388;
	__imp___snprintf(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,876(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82195348
	ctx.lr = 0x82196394;
	sub_82195348(ctx, base);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82196398:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// bne 0x821962c4
	if (!ctx.cr0.eq) goto loc_821962C4;
loc_821963A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821963bc
	if (!ctx.cr6.gt) goto loc_821963BC;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r26,r26,6164
	ctx.r26.s64 = ctx.r26.s64 + 6164;
	// addi r31,r31,6164
	ctx.r31.s64 = ctx.r31.s64 + 6164;
loc_821963BC:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82196254
	if (ctx.cr6.lt) goto loc_82196254;
loc_821963CC:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821961e4
	if (ctx.cr6.lt) goto loc_821961E4;
	// lwz r19,828(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 828);
loc_821963E4:
	// lwz r26,0(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzu r24,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r24.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// lwz r21,100(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// addi r30,r27,4
	ctx.r30.s64 = ctx.r27.s64 + 4;
	// beq cr6,0x82196494
	if (ctx.cr6.eq) goto loc_82196494;
loc_82196400:
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r29.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x8219647c
	if (ctx.cr6.eq) goto loc_8219647C;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
loc_8219641C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8219643c
	if (ctx.cr6.eq) goto loc_8219643C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x8219641c
	if (ctx.cr6.lt) goto loc_8219641C;
	// b 0x8219647c
	goto loc_8219647C;
loc_8219643C:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x82196454;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196470;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8215e640
	ctx.lr = 0x8219647C;
	sub_8215E640(ctx, base);
loc_8219647C:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82196400
	if (ctx.cr6.lt) goto loc_82196400;
loc_82196494:
	// rlwinm r31,r24,5,0,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8218f000
	ctx.lr = 0x821964A4;
	sub_8218F000(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r23,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// bne 0x821964bc
	if (!ctx.cr0.eq) goto loc_821964BC;
loc_821964B0:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,14
	ctx.r17.u64 = ctx.r17.u64 | 14;
	// b 0x821967a8
	goto loc_821967A8;
loc_821964BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8215ec60
	ctx.lr = 0x821964CC;
	sub_8215EC60(ctx, base);
	// lwz r22,92(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82196770
	if (ctx.cr6.eq) goto loc_82196770;
	// addi r31,r23,16
	ctx.r31.s64 = ctx.r23.s64 + 16;
loc_821964E0:
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821964F0;
	sub_8215E640(ctx, base);
	// lwz r10,-16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + -16);
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8219653c
	if (ctx.cr6.eq) goto loc_8219653C;
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,-12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + -12);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r7,-4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x82196554
	if (ctx.cr6.eq) goto loc_82196554;
	// cmplwi cr6,r10,93
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 93, ctx.xer);
	// beq cr6,0x82196554
	if (ctx.cr6.eq) goto loc_82196554;
loc_8219653C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// b 0x82196764
	goto loc_82196764;
loc_82196554:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821965c8
	if (!ctx.cr6.eq) goto loc_821965C8;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x82196588;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821965A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821965B4;
	sub_8215E640(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x82196758
	goto loc_82196758;
loc_821965C8:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82196994
	if (!ctx.cr6.eq) goto loc_82196994;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x821965EC;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196608;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82196614;
	sub_8215E640(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x821966ac
	if (ctx.cr6.eq) goto loc_821966AC;
	// addi r26,r21,4
	ctx.r26.s64 = ctx.r21.s64 + 4;
loc_82196634:
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196648;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
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
	ctx.lr = 0x82196664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82196664:
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// beq 0x82196688
	if (ctx.cr0.eq) goto loc_82196688;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82196664
	if (ctx.cr6.eq) goto loc_82196664;
loc_82196688:
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821966a4
	if (ctx.cr0.eq) goto loc_821966A4;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// cmplw cr6,r27,r14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x82196634
	if (ctx.cr6.lt) goto loc_82196634;
	// b 0x821966ac
	goto loc_821966AC;
loc_821966A4:
	// mulli r11,r27,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(12));
	// add r28,r11,r21
	ctx.r28.u64 = ctx.r11.u64 + ctx.r21.u64;
loc_821966AC:
	// lwz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821966C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821966D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821966F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x821966F8;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r29,0(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219671C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196734;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219674C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x8215e640
	ctx.lr = 0x82196758;
	sub_8215E640(ctx, base);
loc_82196758:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_82196764:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x821964e0
	if (ctx.cr6.lt) goto loc_821964E0;
loc_82196770:
	// lwz r11,836(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 836);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,844(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 844);
	// lwz r8,852(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r6,860(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,868(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 868);
	// stw r23,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r23.u32);
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r15,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r15.u32);
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// stw r5,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r5.u32);
loc_821967A8:
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82196808
	if (ctx.cr6.eq) goto loc_82196808;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// addi r31,r29,8
	ctx.r31.s64 = ctx.r29.s64 + 8;
loc_821967BC:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821967dc
	if (ctx.cr6.eq) goto loc_821967DC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821967DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821967DC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821967fc
	if (ctx.cr6.eq) goto loc_821967FC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821967FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821967FC:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// bne 0x821967bc
	if (!ctx.cr0.eq) goto loc_821967BC;
loc_82196808:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82196814;
	sub_8216B138(ctx, base);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821968b4
	if (ctx.cr6.eq) goto loc_821968B4;
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821968a8
	if (ctx.cr6.eq) goto loc_821968A8;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82196830:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219689c
	if (ctx.cr6.eq) goto loc_8219689C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196884
	if (ctx.cr6.eq) goto loc_82196884;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82196850:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196870
	if (ctx.cr6.eq) goto loc_82196870;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82196870;
	sub_8216B138(ctx, base);
loc_82196870:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82196850
	if (ctx.cr6.lt) goto loc_82196850;
loc_82196884:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219689c
	if (ctx.cr6.eq) goto loc_8219689C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x8219689C;
	sub_8216B138(ctx, base);
loc_8219689C:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82196830
	if (!ctx.cr0.eq) goto loc_82196830;
loc_821968A8:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821968B4;
	sub_8216B138(ctx, base);
loc_821968B4:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x821968C0;
	sub_8216B138(ctx, base);
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bge cr6,0x82196988
	if (!ctx.cr6.lt) goto loc_82196988;
	// lwz r29,120(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8219691c
	if (ctx.cr6.eq) goto loc_8219691C;
	// lwz r30,92(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82196910
	if (ctx.cr6.eq) goto loc_82196910;
	// addi r31,r29,28
	ctx.r31.s64 = ctx.r29.s64 + 28;
loc_821968E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196904
	if (ctx.cr6.eq) goto loc_82196904;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82196904:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// bne 0x821968e4
	if (!ctx.cr0.eq) goto loc_821968E4;
loc_82196910:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x8219691C;
	sub_8216B138(ctx, base);
loc_8219691C:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196934
	if (ctx.cr6.eq) goto loc_82196934;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82196934;
	sub_8216B138(ctx, base);
loc_82196934:
	// lwz r29,88(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82196988
	if (ctx.cr6.eq) goto loc_82196988;
	// lwz r30,84(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8219697c
	if (ctx.cr6.eq) goto loc_8219697C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82196950:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82196970
	if (ctx.cr6.eq) goto loc_82196970;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82196970:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,788
	ctx.r31.s64 = ctx.r31.s64 + 788;
	// bne 0x82196950
	if (!ctx.cr0.eq) goto loc_82196950;
loc_8219697C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x82196988;
	sub_8216B138(ctx, base);
loc_82196988:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_82196994:
	// rlwinm r10,r22,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0xFFFFFFE0;
	// li r9,2
	ctx.r9.s64 = 2;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stw r9,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r31.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// bl 0x8219e4f8
	ctx.lr = 0x821969BC;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821969D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x821969E4;
	sub_8215E640(ctx, base);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8219e4f8
	ctx.lr = 0x82196A00;
	sub_8219E4F8(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// blt 0x821967a8
	if (ctx.cr0.lt) goto loc_821967A8;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196A1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x8215e640
	ctx.lr = 0x82196A2C;
	sub_8215E640(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-12872
	ctx.r4.s64 = ctx.r11.s64 + -12872;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82375574
	ctx.lr = 0x82196A54;
	__imp__sprintf(ctx, base);
	// lwz r3,104(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196A68;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82196A7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,876(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 876);
	// bl 0x82195348
	ctx.lr = 0x82196A88;
	sub_82195348(ctx, base);
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// ori r17,r17,16385
	ctx.r17.u64 = ctx.r17.u64 | 16385;
	// b 0x821967a8
	goto loc_821967A8;
}

DEFINE_REX_FUNC(sub_821C7030) {
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
	// bl 0x821e9ac0
	ctx.lr = 0x821C7050;
	sub_821E9AC0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821e99f8
	ctx.lr = 0x821C7060;
	sub_821E99F8(ctx, base);
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

DEFINE_REX_FUNC(sub_821C7190) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c71a8
	if (ctx.cr6.eq) goto loc_821C71A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_821C71A8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C7268) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c7294
	if (ctx.cr6.eq) goto loc_821C7294;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821c729c
	if (ctx.cr6.eq) goto loc_821C729C;
loc_821C7294:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c7338
	goto loc_821C7338;
loc_821C729C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_821C72A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821c7310
	if (!ctx.cr6.eq) goto loc_821C7310;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c7294
	if (ctx.cr6.eq) goto loc_821C7294;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821c7294
	if (!ctx.cr6.eq) goto loc_821C7294;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c72e8
	if (ctx.cr6.eq) goto loc_821C72E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C72E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c72f4
	goto loc_821C72F4;
loc_821C72E8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C72F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c7294
	if (ctx.cr6.eq) goto loc_821C7294;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c72a4
	if (!ctx.cr6.eq) goto loc_821C72A4;
	// b 0x821c7334
	goto loc_821C7334;
loc_821C7310:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7328;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x821c7338
	if (ctx.cr0.eq) goto loc_821C7338;
loc_821C7334:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821C7338:
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

DEFINE_REX_FUNC(sub_821C8520) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r10,13220
	ctx.r10.s64 = ctx.r10.s64 + 13220;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C87C8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x821e9ac0
	ctx.lr = 0x821C87E4;
	sub_821E9AC0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x821e99f8
	ctx.lr = 0x821C87F4;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8834
	if (ctx.cr0.eq) goto loc_821C8834;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,13232
	ctx.r10.s64 = ctx.r10.s64 + 13232;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// b 0x821c8838
	goto loc_821C8838;
loc_821C8834:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821C8838:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821c8848
	if (!ctx.cr6.eq) goto loc_821C8848;
loc_821C8840:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c88d8
	goto loc_821C88D8;
loc_821C8848:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c887c
	if (ctx.cr6.eq) goto loc_821C887C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C8870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8840
	if (ctx.cr0.eq) goto loc_821C8840;
loc_821C887C:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c88a8
	if (ctx.cr6.eq) goto loc_821C88A8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C889C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8840
	if (ctx.cr0.eq) goto loc_821C8840;
loc_821C88A8:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c88d4
	if (ctx.cr6.eq) goto loc_821C88D4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C88C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c8840
	if (ctx.cr0.eq) goto loc_821C8840;
loc_821C88D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821C88D8:
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

DEFINE_REX_FUNC(sub_821CA550) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821ca630
	if (ctx.cr6.eq) goto loc_821CA630;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821ca630
	if (!ctx.cr6.eq) goto loc_821CA630;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ca5a8
	if (ctx.cr6.eq) goto loc_821CA5A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CA5A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821ca5b4
	goto loc_821CA5B4;
loc_821CA5A8:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821CA5B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ca630
	if (ctx.cr6.eq) goto loc_821CA630;
	// lwz r3,20(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ca5e0
	if (ctx.cr6.eq) goto loc_821CA5E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CA5DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821ca5ec
	goto loc_821CA5EC;
loc_821CA5E0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821CA5EC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821ca630
	if (ctx.cr6.eq) goto loc_821CA630;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ca618
	if (ctx.cr6.eq) goto loc_821CA618;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CA614;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821ca624
	goto loc_821CA624;
loc_821CA618:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821CA624:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821ca634
	if (!ctx.cr6.eq) goto loc_821CA634;
loc_821CA630:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CA634:
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

DEFINE_REX_FUNC(sub_821CBD10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821CBD18;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,120(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x821c7078
	ctx.lr = 0x821CBD38;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cbd5c
	if (ctx.cr0.eq) goto loc_821CBD5C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-30640
	ctx.r6.s64 = ctx.r11.s64 + -30640;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821CBD54;
	sub_821C7240(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821cbd60
	goto loc_821CBD60;
loc_821CBD5C:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821CBD60:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821cbd70
	if (!ctx.cr6.eq) goto loc_821CBD70;
loc_821CBD68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cbda4
	goto loc_821CBDA4;
loc_821CBD70:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821c7078
	ctx.lr = 0x821CBD78;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cbd90
	if (ctx.cr0.eq) goto loc_821CBD90;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c8338
	ctx.lr = 0x821CBD8C;
	sub_821C8338(ctx, base);
	// b 0x821cbd94
	goto loc_821CBD94;
loc_821CBD90:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CBD94:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cbd68
	if (ctx.cr6.eq) goto loc_821CBD68;
	// stw r3,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821CBDA4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CC8F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821CC8F8;
	__savegprlr_29(ctx, base);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	REX_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	REX_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8211fe78
	ctx.lr = 0x821CC938;
	sub_8211FE78(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r10,5760
	ctx.r6.s64 = ctx.r10.s64 + 5760;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821afd08
	ctx.lr = 0x821CC958;
	sub_821AFD08(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CD8A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821CD8A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// b 0x821cd94c
	goto loc_821CD94C;
loc_821CD8C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cd928
	if (ctx.cr6.eq) goto loc_821CD928;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cd920
	if (ctx.cr6.eq) goto loc_821CD920;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821cd8f4
	if (ctx.cr6.eq) goto loc_821CD8F4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821cd984
	if (ctx.cr6.eq) goto loc_821CD984;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821cd964
	if (!ctx.cr6.eq) goto loc_821CD964;
	// lwz r31,48(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x821cd94c
	goto loc_821CD94C;
loc_821CD8F4:
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821cd398
	ctx.lr = 0x821CD904;
	sub_821CD398(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd954
	if (ctx.cr0.eq) goto loc_821CD954;
	// divwu r11,r30,r3
	ctx.r11.u64 = uint32_t(ctx.r3.u32 ? ctx.r30.u32 / ctx.r3.u32 : 0);
	// twllei r3,0
	if (ctx.r3.s32 == 0 || ctx.r3.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// b 0x821cd94c
	goto loc_821CD94C;
loc_821CD920:
	// lwz r31,24(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x821cd94c
	goto loc_821CD94C;
loc_821CD928:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821cd398
	ctx.lr = 0x821CD934;
	sub_821CD398(ctx, base);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x821cd944
	if (!ctx.cr6.lt) goto loc_821CD944;
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x821cd94c
	goto loc_821CD94C;
loc_821CD944:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r30,r3,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r3.u64;
loc_821CD94C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821cd8c0
	if (!ctx.cr6.eq) goto loc_821CD8C0;
loc_821CD954:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821CD95C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_821CD964:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11092
	ctx.r6.s64 = ctx.r11.s64 + 11092;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cc960
	ctx.lr = 0x821CD97C;
	sub_821CC960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cd95c
	goto loc_821CD95C;
loc_821CD984:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821cd9a8
	if (ctx.cr6.lt) goto loc_821CD9A8;
	// beq cr6,0x821cd9a8
	if (ctx.cr6.eq) goto loc_821CD9A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821cd9a8
	if (ctx.cr6.lt) goto loc_821CD9A8;
	// bne cr6,0x821cd9b0
	if (!ctx.cr6.eq) goto loc_821CD9B0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821cd9ac
	goto loc_821CD9AC;
loc_821CD9A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821CD9AC:
	// stw r11,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r11.u32);
loc_821CD9B0:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// stw r11,32(r28)
	REX_STORE_U32(ctx.r28.u32 + 32, ctx.r11.u32);
	// stw r10,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// stw r11,36(r28)
	REX_STORE_U32(ctx.r28.u32 + 36, ctx.r11.u32);
	// b 0x821cd95c
	goto loc_821CD95C;
}

DEFINE_REX_FUNC(sub_821D3AA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x821D3AB0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// addi r26,r1,128
	ctx.r26.s64 = ctx.r1.s64 + 128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d3cdc
	if (ctx.cr6.eq) goto loc_821D3CDC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r24,1
	ctx.r24.s64 = 1;
	// addi r21,r11,-28652
	ctx.r21.s64 = ctx.r11.s64 + -28652;
loc_821D3AE0:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3cdc
	if (ctx.cr6.eq) goto loc_821D3CDC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D3AF4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3b10
	if (ctx.cr0.eq) goto loc_821D3B10;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D3B0C;
	sub_821C7240(ctx, base);
	// b 0x821d3b14
	goto loc_821D3B14;
loc_821D3B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D3B14:
	// stw r3,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d3cdc
	if (ctx.cr6.eq) goto loc_821D3CDC;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821c7078
	ctx.lr = 0x821D3B28;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3b50
	if (ctx.cr0.eq) goto loc_821D3B50;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7d20
	ctx.lr = 0x821D3B48;
	sub_821C7D20(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x821d3b54
	goto loc_821D3B54;
loc_821D3B50:
	// li r29,0
	ctx.r29.s64 = 0;
loc_821D3B54:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d3cdc
	if (ctx.cr6.eq) goto loc_821D3CDC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r11,12
	ctx.r26.s64 = ctx.r11.s64 + 12;
	// beq cr6,0x821d3b90
	if (ctx.cr6.eq) goto loc_821D3B90;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D3B84;
	sub_821C71B8(ctx, base);
	// stw r3,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3cdc
	if (ctx.cr0.eq) goto loc_821D3CDC;
loc_821D3B90:
	// lwz r30,8(r22)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// b 0x821d3c0c
	goto loc_821D3C0C;
loc_821D3B98:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821c7078
	ctx.lr = 0x821D3BA0;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3bb0
	if (ctx.cr0.eq) goto loc_821D3BB0;
	// bl 0x821c88f0
	ctx.lr = 0x821D3BAC;
	sub_821C88F0(ctx, base);
	// b 0x821d3bb4
	goto loc_821D3BB4;
loc_821D3BB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D3BB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d3cdc
	if (ctx.cr6.eq) goto loc_821D3CDC;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,24(r29)
	REX_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d3bf8
	if (ctx.cr6.eq) goto loc_821D3BF8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821d2a50
	ctx.lr = 0x821D3BE4;
	sub_821D2A50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d3c00
	if (!ctx.cr0.lt) goto loc_821D3C00;
	// li r28,3058
	ctx.r28.s64 = 3058;
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// b 0x821d3c00
	goto loc_821D3C00;
loc_821D3BF8:
	// stw r24,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// li r28,3072
	ctx.r28.s64 = 3072;
loc_821D3C00:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r27,r11,r27
	ctx.r27.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
loc_821D3C0C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821d3b98
	if (!ctx.cr6.eq) goto loc_821D3B98;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821c71b8
	ctx.lr = 0x821D3C20;
	sub_821C71B8(ctx, base);
	// stw r3,20(r29)
	REX_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3cdc
	if (ctx.cr0.eq) goto loc_821D3CDC;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// cmplwi cr6,r28,3058
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3058, ctx.xer);
	// beq cr6,0x821d3cc4
	if (ctx.cr6.eq) goto loc_821D3CC4;
	// cmplwi cr6,r28,3072
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3072, ctx.xer);
	// beq cr6,0x821d3cb4
	if (ctx.cr6.eq) goto loc_821D3CB4;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x821d3ca4
	if (ctx.cr6.lt) goto loc_821D3CA4;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821d3ca4
	if (ctx.cr6.gt) goto loc_821D3CA4;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d3c74
	if (ctx.cr6.eq) goto loc_821D3C74;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821d3c74
	if (!ctx.cr6.eq) goto loc_821D3C74;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_821D3C74:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821cccb0
	ctx.lr = 0x821D3C84;
	sub_821CCCB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821d3cdc
	if (ctx.cr0.lt) goto loc_821D3CDC;
	// lwz r22,12(r22)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x821d3ae0
	if (!ctx.cr6.eq) goto loc_821D3AE0;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_821D3C9C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_821D3CA4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3059
	ctx.r5.s64 = 3059;
	// addi r6,r11,-28704
	ctx.r6.s64 = ctx.r11.s64 + -28704;
	// b 0x821d3cd0
	goto loc_821D3CD0;
loc_821D3CB4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3072
	ctx.r5.s64 = 3072;
	// addi r6,r11,-28752
	ctx.r6.s64 = ctx.r11.s64 + -28752;
	// b 0x821d3cd0
	goto loc_821D3CD0;
loc_821D3CC4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3058
	ctx.r5.s64 = 3058;
	// addi r6,r11,-28812
	ctx.r6.s64 = ctx.r11.s64 + -28812;
loc_821D3CD0:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x821cc878
	ctx.lr = 0x821D3CDC;
	sub_821CC878(ctx, base);
loc_821D3CDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d3c9c
	goto loc_821D3C9C;
}

DEFINE_REX_FUNC(sub_821DF8F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x821DF900;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x821deef0
	ctx.lr = 0x821DF91C;
	sub_821DEEF0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_821DF924:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821df924
	if (!ctx.cr6.eq) goto loc_821DF924;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
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
	ctx.lr = 0x821DF950;
	sub_8216B018(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821df964
	if (!ctx.cr0.eq) goto loc_821DF964;
loc_821DF958:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821df9c8
	goto loc_821DF9C8;
loc_821DF964:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x821DF974;
	sub_8215E640(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x8216b018
	ctx.lr = 0x821DF980;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821df9b0
	if (ctx.cr0.eq) goto loc_821DF9B0;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwzx r10,r10,r28
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// stw r9,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x821df9b4
	goto loc_821DF9B4;
loc_821DF9B0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821DF9B4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821df958
	if (ctx.cr6.eq) goto loc_821DF958;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r11,r10,r28
	REX_STORE_U32(ctx.r10.u32 + ctx.r28.u32, ctx.r11.u32);
loc_821DF9C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E3A38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x821E3A40;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,1032
	ctx.r11.s64 = ctx.r3.s64 + 1032;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// li r26,-1
	ctx.r26.s64 = -1;
	// addi r24,r3,32
	ctx.r24.s64 = ctx.r3.s64 + 32;
	// stw r25,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r25,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r25.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r26,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// sth r25,32(r3)
	REX_STORE_U16(ctx.r3.u32 + 32, ctx.r25.u16);
	// addi r27,r11,-23168
	ctx.r27.s64 = ctx.r11.s64 + -23168;
	// addi r23,r10,7852
	ctx.r23.s64 = ctx.r10.s64 + 7852;
loc_821E3A84:
	// addi r11,r27,256
	ctx.r11.s64 = ctx.r27.s64 + 256;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e3b88
	if (!ctx.cr0.eq) goto loc_821E3B88;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821e3abc
	if (!ctx.cr6.lt) goto loc_821E3ABC;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821e3898
	ctx.lr = 0x821E3AAC;
	sub_821E3898(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e3abc
	if (!ctx.cr0.lt) goto loc_821E3ABC;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_821E3ABC:
	// addi r11,r27,584
	ctx.r11.s64 = ctx.r27.s64 + 584;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e3b48
	if (ctx.cr0.eq) goto loc_821E3B48;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821e3b48
	if (ctx.cr0.lt) goto loc_821E3B48;
	// cmpwi cr6,r11,295
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 295, ctx.xer);
	// bgt cr6,0x821e3b48
	if (ctx.cr6.gt) goto loc_821E3B48;
	// addi r8,r27,1768
	ctx.r8.s64 = ctx.r27.s64 + 1768;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821e3b48
	if (!ctx.cr6.eq) goto loc_821E3B48;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821e4070
	if (!ctx.cr6.lt) goto loc_821E4070;
	// addi r9,r27,1176
	ctx.r9.s64 = ctx.r27.s64 + 1176;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// ble cr6,0x821e3a84
	if (!ctx.cr6.gt) goto loc_821E3A84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821e3a84
	goto loc_821E3A84;
loc_821E3B48:
	// addi r11,r27,848
	ctx.r11.s64 = ctx.r27.s64 + 848;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e3f9c
	if (ctx.cr0.eq) goto loc_821E3F9C;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821e3f9c
	if (ctx.cr0.lt) goto loc_821E3F9C;
	// cmpwi cr6,r11,295
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 295, ctx.xer);
	// bgt cr6,0x821e3f9c
	if (ctx.cr6.gt) goto loc_821E3F9C;
	// addi r9,r27,1768
	ctx.r9.s64 = ctx.r27.s64 + 1768;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821e3f9c
	if (!ctx.cr6.eq) goto loc_821E3F9C;
	// addi r10,r27,1176
	ctx.r10.s64 = ctx.r27.s64 + 1176;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_821E3B88:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,128
	ctx.r9.s64 = ctx.r27.s64 + 128;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,61
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 61, ctx.xer);
	// lhax r29,r30,r9
	ctx.r29.s64 = int16_t(REX_LOAD_U16(ctx.r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x821e3e84
	if (ctx.cr6.gt) goto loc_821E3E84;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-12856
	ctx.r12.s64 = ctx.r12.s64 + -12856;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// nop 
	// addi r12,r12,15324
	ctx.r12.s64 = ctx.r12.s64 + 15324;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821E3BDC;
	case 1:
		goto loc_821E3BE4;
	case 2:
		goto loc_821E3BF0;
	case 3:
		goto loc_821E3BFC;
	case 4:
		goto loc_821E3C08;
	case 5:
		goto loc_821E3C14;
	case 6:
		goto loc_821E3C20;
	case 7:
		goto loc_821E3C28;
	case 8:
		goto loc_821E3C34;
	case 9:
		goto loc_821E3C40;
	case 10:
		goto loc_821E3C4C;
	case 11:
		goto loc_821E3C58;
	case 12:
		goto loc_821E3C64;
	case 13:
		goto loc_821E3C70;
	case 14:
		goto loc_821E3C7C;
	case 15:
		goto loc_821E3C88;
	case 16:
		goto loc_821E3C94;
	case 17:
		goto loc_821E3CA0;
	case 18:
		goto loc_821E3CAC;
	case 19:
		goto loc_821E3CB8;
	case 20:
		goto loc_821E3CC4;
	case 21:
		goto loc_821E3CD0;
	case 22:
		goto loc_821E3CDC;
	case 23:
		goto loc_821E3CE8;
	case 24:
		goto loc_821E3CF4;
	case 25:
		goto loc_821E3D00;
	case 26:
		goto loc_821E3D0C;
	case 27:
		goto loc_821E3D18;
	case 28:
		goto loc_821E3D24;
	case 29:
		goto loc_821E3D30;
	case 30:
		goto loc_821E3D3C;
	case 31:
		goto loc_821E3D48;
	case 32:
		goto loc_821E3D54;
	case 33:
		goto loc_821E3D60;
	case 34:
		goto loc_821E3D6C;
	case 35:
		goto loc_821E3D78;
	case 36:
		goto loc_821E3D84;
	case 37:
		goto loc_821E3D90;
	case 38:
		goto loc_821E3D98;
	case 39:
		goto loc_821E3DA0;
	case 40:
		goto loc_821E3DAC;
	case 41:
		goto loc_821E3DB8;
	case 42:
		goto loc_821E3DC4;
	case 43:
		goto loc_821E3DD0;
	case 44:
		goto loc_821E3DDC;
	case 45:
		goto loc_821E3DE8;
	case 46:
		goto loc_821E3DF4;
	case 47:
		goto loc_821E3E00;
	case 48:
		goto loc_821E3E0C;
	case 49:
		goto loc_821E3E14;
	case 50:
		goto loc_821E3E1C;
	case 51:
		goto loc_821E3E24;
	case 52:
		goto loc_821E3E2C;
	case 53:
		goto loc_821E3E34;
	case 54:
		goto loc_821E3E3C;
	case 55:
		goto loc_821E3E44;
	case 56:
		goto loc_821E3E4C;
	case 57:
		goto loc_821E3E54;
	case 58:
		goto loc_821E3E5C;
	case 59:
		goto loc_821E3E64;
	case 60:
		goto loc_821E3E6C;
	case 61:
		goto loc_821E3E74;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821E3BDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3BE4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3BF0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3BFC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C08:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C14:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C20:
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3C28:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C34:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C40:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C58:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C64:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C70:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C7C:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C88:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3C94:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CA0:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CAC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CB8:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CC4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CD0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CDC:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3CF4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D18:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D24:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D30:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D3C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D48:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D54:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D60:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D6C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D78:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D84:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3D90:
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3D98:
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3DA0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DB8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DD0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DDC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,46
	ctx.r4.s64 = 46;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DE8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,47
	ctx.r4.s64 = 47;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3DF4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,48
	ctx.r4.s64 = 48;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3E00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,49
	ctx.r4.s64 = 49;
	// b 0x821e3e7c
	goto loc_821E3E7C;
loc_821E3E0C:
	// li r4,50
	ctx.r4.s64 = 50;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E14:
	// li r4,51
	ctx.r4.s64 = 51;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E1C:
	// li r4,52
	ctx.r4.s64 = 52;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E24:
	// li r4,53
	ctx.r4.s64 = 53;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E2C:
	// li r4,54
	ctx.r4.s64 = 54;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E34:
	// li r4,55
	ctx.r4.s64 = 55;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E3C:
	// li r4,56
	ctx.r4.s64 = 56;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E44:
	// li r4,57
	ctx.r4.s64 = 57;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E4C:
	// li r4,58
	ctx.r4.s64 = 58;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E54:
	// li r4,59
	ctx.r4.s64 = 59;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E5C:
	// li r4,60
	ctx.r4.s64 = 60;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E64:
	// li r4,61
	ctx.r4.s64 = 61;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E6C:
	// li r4,62
	ctx.r4.s64 = 62;
	// b 0x821e3e78
	goto loc_821E3E78;
loc_821E3E74:
	// li r4,63
	ctx.r4.s64 = 63;
loc_821E3E78:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E3E7C:
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821e1dd8
	ctx.lr = 0x821E3E84;
	sub_821E1DD8(ctx, base);
loc_821E3E84:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// subf r10,r28,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r28.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r27
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r30.u32 + ctx.r27.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821e3f1c
	if (!ctx.cr0.eq) goto loc_821E3F1C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e3f1c
	if (!ctx.cr6.eq) goto loc_821E3F1C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r30,16
	ctx.r30.s64 = 16;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r10,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821e3f08
	if (!ctx.cr6.lt) goto loc_821E3F08;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821e3898
	ctx.lr = 0x821E3EF8;
	sub_821E3898(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e3f08
	if (!ctx.cr0.lt) goto loc_821E3F08;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_821E3F08:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e3a84
	if (!ctx.cr6.eq) goto loc_821E3A84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e4084
	goto loc_821E4084;
loc_821E3F1C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,1112
	ctx.r10.s64 = ctx.r27.s64 + 1112;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821e3f60
	if (ctx.cr0.eq) goto loc_821E3F60;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x821e3f60
	if (ctx.cr0.lt) goto loc_821E3F60;
	// cmpwi cr6,r10,295
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 295, ctx.xer);
	// bgt cr6,0x821e3f60
	if (ctx.cr6.gt) goto loc_821E3F60;
	// addi r8,r27,1768
	ctx.r8.s64 = ctx.r27.s64 + 1768;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821e3f60
	if (!ctx.cr6.eq) goto loc_821E3F60;
	// addi r11,r27,1176
	ctx.r11.s64 = ctx.r27.s64 + 1176;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x821e3f68
	goto loc_821E3F68;
loc_821E3F60:
	// addi r11,r27,520
	ctx.r11.s64 = ctx.r27.s64 + 520;
	// lhax r30,r9,r11
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r11.u32));
loc_821E3F68:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821e4070
	if (!ctx.cr6.lt) goto loc_821E4070;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
loc_821E3F88:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821e3a84
	goto loc_821E3A84;
loc_821E3F9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e3fc0
	if (!ctx.cr6.eq) goto loc_821E3FC0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e2548
	ctx.lr = 0x821E3FB4;
	sub_821E2548(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821E3FC0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x821e405c
	if (!ctx.cr6.lt) goto loc_821E405C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821E3FD4:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,584
	ctx.r10.s64 = ctx.r27.s64 + 584;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821e4014
	if (ctx.cr0.eq) goto loc_821E4014;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x821e4014
	if (ctx.cr0.lt) goto loc_821E4014;
	// cmpwi cr6,r10,295
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 295, ctx.xer);
	// bgt cr6,0x821e4014
	if (ctx.cr6.gt) goto loc_821E4014;
	// addi r9,r27,1768
	ctx.r9.s64 = ctx.r27.s64 + 1768;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x821e4034
	if (ctx.cr6.eq) goto loc_821E4034;
loc_821E4014:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x821e4080
	if (!ctx.cr6.gt) goto loc_821E4080;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// b 0x821e3fd4
	goto loc_821E3FD4;
loc_821E4034:
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821e4070
	if (!ctx.cr6.lt) goto loc_821E4070;
	// addi r9,r27,1176
	ctx.r9.s64 = ctx.r27.s64 + 1176;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhax r30,r10,r9
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x821e3f88
	goto loc_821E3F88;
loc_821E405C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e4080
	if (ctx.cr6.eq) goto loc_821E4080;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x821e3a84
	goto loc_821E3A84;
loc_821E4070:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8308
	ctx.r4.s64 = ctx.r11.s64 + 8308;
	// bl 0x821e2548
	ctx.lr = 0x821E4080;
	sub_821E2548(ctx, base);
loc_821E4080:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821E4084:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EE298) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,-5852
	ctx.r4.s64 = ctx.r11.s64 + -5852;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE2B4;
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

DEFINE_REX_FUNC(sub_821EE930) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821EE938;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EE94C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee96c
	if (ctx.cr0.lt) goto loc_821EE96C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-5192
	ctx.r4.s64 = ctx.r11.s64 + -5192;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE96C;
	sub_821EB2A0(ctx, base);
loc_821EE96C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EFEB8) {
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r4,r10,-4496
	ctx.r4.s64 = ctx.r10.s64 + -4496;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFEE0;
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

DEFINE_REX_FUNC(sub_821F0120) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821F0128;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F013C;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f015c
	if (ctx.cr0.lt) goto loc_821F015C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r4,r11,-4228
	ctx.r4.s64 = ctx.r11.s64 + -4228;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F015C;
	sub_821EB2A0(ctx, base);
loc_821F015C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F0A50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0A68;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0ac4
	if (ctx.cr0.lt) goto loc_821F0AC4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r5,1816(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-3472
	ctx.r4.s64 = ctx.r11.s64 + -3472;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0A84;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0ac4
	if (ctx.cr0.lt) goto loc_821F0AC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0A94;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0ac4
	if (ctx.cr0.lt) goto loc_821F0AC4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-12520
	ctx.r4.s64 = ctx.r11.s64 + -12520;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0AAC;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0ac4
	if (ctx.cr0.lt) goto loc_821F0AC4;
	// lwz r11,1544(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r11.u32);
loc_821F0AC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F3F80) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32225
	ctx.r10.s64 = -2111897600;
	// addi r5,r11,4240
	ctx.r5.s64 = ctx.r11.s64 + 4240;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r10,-20472
	ctx.r4.s64 = ctx.r10.s64 + -20472;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3d10
	ctx.lr = 0x821F3FB0;
	sub_821F3D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a3c8
	ctx.lr = 0x821F3FB8;
	sub_8220A3C8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4280) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-2172
	ctx.r5.s64 = ctx.r11.s64 + -2172;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3d10
	ctx.lr = 0x821F42AC;
	sub_821F3D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a4c8
	ctx.lr = 0x821F42B4;
	sub_8220A4C8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4578) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-2108
	ctx.r5.s64 = ctx.r11.s64 + -2108;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3d10
	ctx.lr = 0x821F45A4;
	sub_821F3D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a3c8
	ctx.lr = 0x821F45AC;
	sub_8220A3C8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4A28) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,-1892
	ctx.r5.s64 = ctx.r11.s64 + -1892;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3d10
	ctx.lr = 0x821F4A54;
	sub_821F3D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82209618
	ctx.lr = 0x821F4A5C;
	sub_82209618(ctx, base);
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

DEFINE_REX_FUNC(sub_821F63F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x821F63F8;
	__savegprlr_17(ctx, base);
	// stfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r19,r11,12
	ctx.r19.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq 0x821f68a8
	if (ctx.cr0.eq) goto loc_821F68A8;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f68a8
	if (ctx.cr6.eq) goto loc_821F68A8;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f68a8
	if (ctx.cr6.eq) goto loc_821F68A8;
	// divwu. r17,r11,r19
	ctx.r17.u64 = uint32_t(ctx.r19.u32 ? ctx.r11.u32 / ctx.r19.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// twllei r19,0
	if (ctx.r19.s32 == 0 || ctx.r19.u32 < 0u) ppc_trap(ctx, base, 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x821f68a8
	if (ctx.cr0.eq) goto loc_821F68A8;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,20(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r18,r19,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
loc_821F6458:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f64dc
	if (ctx.cr6.eq) goto loc_821F64DC;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821f64dc
	if (!ctx.cr0.eq) goto loc_821F64DC;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f64c8
	if (ctx.cr6.eq) goto loc_821F64C8;
	// lwz r8,0(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_821F64AC:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821f64c8
	if (ctx.cr6.eq) goto loc_821F64C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821f64ac
	if (ctx.cr6.lt) goto loc_821F64AC;
loc_821F64C8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821f64d4
	if (!ctx.cr6.eq) goto loc_821F64D4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_821F64D4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_821F64DC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r18,r7
	ctx.r7.u64 = ctx.r18.u64 + ctx.r7.u64;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r9,r17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x821f6458
	if (ctx.cr6.lt) goto loc_821F6458;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821f68a8
	if (ctx.cr6.eq) goto loc_821F68A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// beq cr6,0x821f65f0
	if (ctx.cr6.eq) goto loc_821F65F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821F6510:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821f6564
	if (ctx.cr6.eq) goto loc_821F6564;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r9,r30,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
loc_821F6528:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821f6548
	if (ctx.cr6.eq) goto loc_821F6548;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821f6528
	if (ctx.cr6.lt) goto loc_821F6528;
	// b 0x821f655c
	goto loc_821F655C;
loc_821F6548:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stwx r10,r30,r8
	REX_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r10.u32);
loc_821F655C:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x821f65e0
	if (ctx.cr6.lt) goto loc_821F65E0;
loc_821F6564:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// li r6,3
	ctx.r6.s64 = 3;
	// beq cr6,0x821f6574
	if (ctx.cr6.eq) goto loc_821F6574;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_821F6574:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,140(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 140);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821F6588;
	sub_8220EA28(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq cr6,0x821f6770
	if (ctx.cr6.eq) goto loc_821F6770;
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
loc_821F65E0:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x821f6510
	if (ctx.cr6.lt) goto loc_821F6510;
loc_821F65F0:
	// li r20,0
	ctx.r20.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// li r23,0
	ctx.r23.s64 = 0;
loc_821F6604:
	// lwz r10,260(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821f6740
	if (ctx.cr6.eq) goto loc_821F6740;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821f6740
	if (!ctx.cr0.eq) goto loc_821F6740;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x821f6738
	if (ctx.cr6.eq) goto loc_821F6738;
loc_821F6658:
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// add r10,r25,r30
	ctx.r10.u64 = ctx.r25.u64 + ctx.r30.u64;
	// lwz r9,20(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwzx r11,r11,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r9
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x8220ea28
	ctx.lr = 0x821F6690;
	sub_8220EA28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f6770
	if (ctx.cr6.eq) goto loc_821F6770;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e3a8
	ctx.lr = 0x821F66B4;
	sub_8220E3A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f68ac
	if (ctx.cr0.lt) goto loc_821F68AC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821f6718
	if (ctx.cr6.eq) goto loc_821F6718;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821F66E0;
	sub_8220EA28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821f6770
	if (ctx.cr6.eq) goto loc_821F6770;
	// lwz r11,20(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,56(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 56);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r10,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r4,r9,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// bl 0x8220e3a8
	ctx.lr = 0x821F670C;
	sub_8220E3A8(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// stw r28,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r28.u32);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_821F6718:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r19
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r19.u32, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,260(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stwx r29,r11,r26
	REX_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r29.u32);
	// blt cr6,0x821f6658
	if (ctx.cr6.lt) goto loc_821F6658;
loc_821F6738:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
loc_821F6740:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// add r25,r25,r19
	ctx.r25.u64 = ctx.r25.u64 + ctx.r19.u64;
	// add r23,r23,r18
	ctx.r23.u64 = ctx.r23.u64 + ctx.r18.u64;
	// cmplw cr6,r22,r17
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x821f6604
	if (ctx.cr6.lt) goto loc_821F6604;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821F675C;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821f677c
	if (ctx.cr0.eq) goto loc_821F677C;
	// bl 0x8220d6a0
	ctx.lr = 0x821F6768;
	sub_8220D6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821f6780
	goto loc_821F6780;
loc_821F6770:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821f68ac
	goto loc_821F68AC;
loc_821F677C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821F6780:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f6770
	if (ctx.cr6.eq) goto loc_821F6770;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x821f6814
	if (ctx.cr6.eq) goto loc_821F6814;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_821F67A0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821f67d4
	if (ctx.cr6.eq) goto loc_821F67D4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r8,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
loc_821F67B8:
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821f67d4
	if (ctx.cr6.eq) goto loc_821F67D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f67b8
	if (ctx.cr6.lt) goto loc_821F67B8;
loc_821F67D4:
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f6804
	if (!ctx.cr6.eq) goto loc_821F6804;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// stwx r11,r5,r7
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r9,r5,r4
	REX_STORE_U32(ctx.r5.u32 + ctx.r4.u32, ctx.r9.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_821F6804:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r20
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x821f67a0
	if (ctx.cr6.lt) goto loc_821F67A0;
loc_821F6814:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220de30
	ctx.lr = 0x821F6830;
	sub_8220DE30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bge 0x821f6850
	if (!ctx.cr0.lt) goto loc_821F6850;
loc_821F683C:
	// bl 0x82113c30
	ctx.lr = 0x821F6840;
	sub_82113C30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821F6848;
	sub_8220DDF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821f68ac
	goto loc_821F68AC;
loc_821F6850:
	// lwz r4,260(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821F6858;
	sub_8220D6F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821f6868
	if (!ctx.cr0.lt) goto loc_821F6868;
loc_821F6860:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821f683c
	goto loc_821F683C;
loc_821F6868:
	// rlwinm r31,r20,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x821F687C;
	sub_8215E640(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8215e640
	ctx.lr = 0x821F688C;
	sub_8215E640(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8220e8b8
	ctx.lr = 0x821F6898;
	sub_8220E8B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821f6860
	if (ctx.cr0.lt) goto loc_821F6860;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821f68ac
	goto loc_821F68AC;
loc_821F68A8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821F68AC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82204610) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82204618;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r4,21317
	ctx.r4.s64 = 1397030912;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ori r4,r4,21072
	ctx.r4.u64 = ctx.r4.u64 | 21072;
	// bl 0x8224d2b8
	ctx.lr = 0x82204638;
	sub_8224D2B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82220c60
	ctx.lr = 0x82204640;
	sub_82220C60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8220476c
	if (ctx.cr0.lt) goto loc_8220476C;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8220476c
	if (ctx.cr0.lt) goto loc_8220476C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822046c4
	if (!ctx.cr6.eq) goto loc_822046C4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204684;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822046A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x8224d368
	ctx.lr = 0x822046BC;
	sub_8224D368(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8220476c
	if (ctx.cr0.lt) goto loc_8220476C;
loc_822046C4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224d2d8
	ctx.lr = 0x822046CC;
	sub_8224D2D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,32768
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32768, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bgt cr6,0x82204750
	if (ctx.cr6.gt) goto loc_82204750;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82202bc8
	ctx.lr = 0x822046E4;
	sub_82202BC8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8220476c
	if (ctx.cr0.lt) goto loc_8220476C;
	// lwz r9,276(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215f200
	ctx.lr = 0x82204710;
	sub_8215F200(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8224d650
	ctx.lr = 0x82204724;
	sub_8224D650(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8220476c
	if (ctx.cr0.lt) goto loc_8220476C;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r10,292(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 292);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// stw r11,276(r31)
	REX_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r10,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r10.u32);
	// stw r11,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// b 0x8220476c
	goto loc_8220476C;
loc_82204750:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4548
	ctx.r5.s64 = 4548;
	// addi r6,r11,8156
	ctx.r6.s64 = ctx.r11.s64 + 8156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ff00
	ctx.lr = 0x82204764;
	sub_8221FF00(ctx, base);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_8220476C:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8220478c
	if (ctx.cr6.eq) goto loc_8220478C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82204788;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_8220478C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224d2f0
	ctx.lr = 0x82204794;
	sub_8224D2F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822084E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,90
	ctx.r4.s64 = 90;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// clrlwi r31,r9,12
	ctx.r31.u64 = ctx.r9.u32 & 0xFFFFF;
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x82207590
	ctx.lr = 0x82208538;
	sub_82207590(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82209198) {
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
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82207320
	ctx.lr = 0x822091B4;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822091ec
	if (ctx.cr0.lt) goto loc_822091EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822091D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822091ec
	if (ctx.cr0.lt) goto loc_822091EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x822091E0;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822091ec
	if (ctx.cr0.lt) goto loc_822091EC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_822091EC:
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

DEFINE_REX_FUNC(sub_82209FF8) {
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
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82207320
	ctx.lr = 0x8220A014;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a0b0
	if (ctx.cr0.lt) goto loc_8220A0B0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x8220A050;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a0b0
	if (ctx.cr0.lt) goto loc_8220A0B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A078;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a0b0
	if (ctx.cr0.lt) goto loc_8220A0B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a0b0
	if (ctx.cr0.lt) goto loc_8220A0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8220A0A4;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a0b0
	if (ctx.cr0.lt) goto loc_8220A0B0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220A0B0:
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

DEFINE_REX_FUNC(sub_8220B2C8) {
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
	// bl 0x821ffb28
	ctx.lr = 0x8220B2E0;
	sub_821FFB28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b324
	if (ctx.cr0.lt) goto loc_8220B324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x8220B2F0;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b324
	if (ctx.cr0.lt) goto loc_8220B324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b980
	ctx.lr = 0x8220B300;
	sub_8221B980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b324
	if (ctx.cr0.lt) goto loc_8220B324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x8220B310;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220b324
	if (ctx.cr0.lt) goto loc_8220B324;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f5a08
	ctx.lr = 0x8220B320;
	sub_821F5A08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220B324:
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

DEFINE_REX_FUNC(sub_8220BAB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8220BAC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8220bae0
	if (!ctx.cr6.eq) goto loc_8220BAE0;
loc_8220BAD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8220bd90
	goto loc_8220BD90;
loc_8220BAE0:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r11,r10,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220bd8c
	if (ctx.cr0.eq) goto loc_8220BD8C;
	// lis r9,8304
	ctx.r9.s64 = 544210944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8220bd8c
	if (ctx.cr6.eq) goto loc_8220BD8C;
	// clrlwi r22,r10,12
	ctx.r22.u64 = ctx.r10.u32 & 0xFFFFF;
	// lwz r9,4(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// lis r10,28752
	ctx.r10.s64 = 1884291072;
	// divwu r24,r9,r22
	ctx.r24.u64 = uint32_t(ctx.r22.u32 ? ctx.r9.u32 / ctx.r22.u32 : 0);
	// twllei r22,0
	if (ctx.r22.s32 == 0 || ctx.r22.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220bb2c
	if (ctx.cr6.eq) goto loc_8220BB2C;
	// lis r10,28768
	ctx.r10.s64 = 1885339648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220bb2c
	if (ctx.cr6.eq) goto loc_8220BB2C;
	// lis r10,28784
	ctx.r10.s64 = 1886388224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220bb30
	if (!ctx.cr6.eq) goto loc_8220BB30;
loc_8220BB2C:
	// li r24,2
	ctx.r24.s64 = 2;
loc_8220BB30:
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x8220bd8c
	if (!ctx.cr6.gt) goto loc_8220BD8C;
	// lwz r11,128(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,124(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,148(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stwx r31,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r31.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r9,r5
	REX_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r31.u32);
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// stwx r31,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// stwx r11,r6,r8
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r11.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// stwx r3,r9,r4
	REX_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r3.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stwx r11,r7,r28
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, ctx.r11.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// stwx r31,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r31.u32);
	// stwx r11,r29,r5
	REX_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
	// beq cr6,0x8220bd14
	if (ctx.cr6.eq) goto loc_8220BD14;
	// rlwinm r26,r22,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8220BBBC:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r28,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bne cr6,0x8220bbf8
	if (!ctx.cr6.eq) goto loc_8220BBF8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220bd04
	if (!ctx.cr0.eq) goto loc_8220BD04;
loc_8220BBF8:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220bc14
	if (ctx.cr0.eq) goto loc_8220BC14;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8220bc14
	if (!ctx.cr0.eq) goto loc_8220BC14;
	// lwz r5,124(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// b 0x8220bc5c
	goto loc_8220BC5C;
loc_8220BC14:
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8220bc24
	if (ctx.cr0.eq) goto loc_8220BC24;
	// lwz r5,148(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// b 0x8220bc5c
	goto loc_8220BC5C;
loc_8220BC24:
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8220bc58
	if (ctx.cr0.eq) goto loc_8220BC58;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8220bc58
	if (!ctx.cr6.eq) goto loc_8220BC58;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220BC48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,65535
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 65535, ctx.xer);
	// beq cr6,0x8220bc58
	if (ctx.cr6.eq) goto loc_8220BC58;
	// lwz r5,128(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// b 0x8220bc5c
	goto loc_8220BC5C;
loc_8220BC58:
	// lwz r5,136(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
loc_8220BC5C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8220bcc0
	if (ctx.cr6.eq) goto loc_8220BCC0;
	// lwz r9,8(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r7,4(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_8220BC78:
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
	// bne cr6,0x8220bcb0
	if (!ctx.cr6.eq) goto loc_8220BCB0;
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8220bcb0
	if (!ctx.cr6.eq) goto loc_8220BCB0;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220bcc0
	if (ctx.cr6.eq) goto loc_8220BCC0;
loc_8220BCB0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8220bc78
	if (ctx.cr6.lt) goto loc_8220BC78;
loc_8220BCC0:
	// cmplw cr6,r6,r27
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8220bcec
	if (!ctx.cr6.eq) goto loc_8220BCEC;
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
	// bgt cr6,0x8220bd98
	if (ctx.cr6.gt) goto loc_8220BD98;
loc_8220BCEC:
	// lwz r11,124(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x8220bd04
	if (!ctx.cr6.eq) goto loc_8220BD04;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,2
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 2, ctx.xer);
	// bgt cr6,0x8220bd98
	if (ctx.cr6.gt) goto loc_8220BD98;
loc_8220BD04:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8220bbbc
	if (ctx.cr6.lt) goto loc_8220BBBC;
loc_8220BD14:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8220bd8c
	if (ctx.cr6.eq) goto loc_8220BD8C;
	// rlwinm r27,r22,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
loc_8220BD24:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220bd7c
	if (!ctx.cr6.eq) goto loc_8220BD7C;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,112(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 112);
	// lwzx r29,r11,r10
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r4,108(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// bctrl 
	ctx.lr = 0x8220BD64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x8220bd7c
	if (!ctx.cr6.eq) goto loc_8220BD7C;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,128(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220bda8
	if (ctx.cr6.eq) goto loc_8220BDA8;
loc_8220BD7C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x8220bd24
	if (ctx.cr6.lt) goto loc_8220BD24;
loc_8220BD8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220BD90:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8220BD98:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8220bad8
	if (ctx.cr6.eq) goto loc_8220BAD8;
	// stw r27,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r27.u32);
	// b 0x8220bad8
	goto loc_8220BAD8;
loc_8220BDA8:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8220bad8
	if (ctx.cr6.eq) goto loc_8220BAD8;
	// stw r28,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// b 0x8220bad8
	goto loc_8220BAD8;
}

DEFINE_REX_FUNC(sub_822170B0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822170B8;
	__savegprlr_29(ctx, base);
loc_822170B8:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x822170d4
	if (ctx.cr6.eq) goto loc_822170D4;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_822170D4:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82217294
	if (!ctx.cr6.eq) goto loc_82217294;
	// lwz r11,88(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r31,116(r8)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r8.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82217280
	if (ctx.cr6.eq) goto loc_82217280;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// rlwinm r7,r31,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,76(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,84(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 84);
	// lis r29,8304
	ctx.r29.s64 = 544210944;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r11,r5,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r11,r10,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// stwx r10,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// stwx r6,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82217164
	if (ctx.cr6.eq) goto loc_82217164;
	// lis r7,8320
	ctx.r7.s64 = 545259520;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82217164
	if (ctx.cr6.eq) goto loc_82217164;
	// lis r7,4432
	ctx.r7.s64 = 290455552;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8221717c
	if (!ctx.cr6.eq) goto loc_8221717C;
loc_82217164:
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,24(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// b 0x822171c8
	goto loc_822171C8;
loc_8221717C:
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,16(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r5
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwz r7,20(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r9,r7,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r5
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_822171C8:
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x82217274
	goto loc_82217274;
loc_822171E8:
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,16(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r5,r9,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r30
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r5,r5,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82217264
	if (ctx.cr0.eq) goto loc_82217264;
	// lwz r5,88(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,88(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,88(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 88);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82217264
	if (!ctx.cr6.lt) goto loc_82217264;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,88(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// stw r10,88(r8)
	REX_STORE_U32(ctx.r8.u32 + 88, ctx.r10.u32);
loc_82217264:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_82217274:
	// lwz r5,20(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822171e8
	if (!ctx.cr6.eq) goto loc_822171E8;
loc_82217280:
	// lwz r11,76(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 76);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_82217294:
	// lwz r5,8(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x822170b8
	if (!ctx.cr6.eq) goto loc_822170B8;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82220598) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822205A0;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822205c0
	if (ctx.cr0.eq) goto loc_822205C0;
loc_822205B8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82220c44
	goto loc_82220C44;
loc_822205C0:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822205b8
	if (!ctx.cr0.eq) goto loc_822205B8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221bb68
	ctx.lr = 0x822205D0;
	sub_8221BB68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82220c44
	if (ctx.cr0.lt) goto loc_82220C44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x8216b018
	ctx.lr = 0x822205E4;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822205f8
	if (ctx.cr0.eq) goto loc_822205F8;
	// lwz r4,224(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// bl 0x82240630
	ctx.lr = 0x822205F4;
	sub_82240630(ctx, base);
	// b 0x822205fc
	goto loc_822205FC;
loc_822205F8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822205FC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lis r5,18008
	ctx.r5.s64 = 1180172288;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// ori r5,r5,513
	ctx.r5.u64 = ctx.r5.u64 | 513;
	// ori r6,r11,256
	ctx.r6.u64 = ctx.r11.u64 | 256;
	// bl 0x82218128
	ctx.lr = 0x82220620;
	sub_82218128(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82220c44
	if (ctx.cr0.lt) goto loc_82220C44;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82213530
	ctx.lr = 0x82220630;
	sub_82213530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82220c44
	if (ctx.cr0.lt) goto loc_82220C44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213808
	ctx.lr = 0x82220640;
	sub_82213808(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82220c44
	if (ctx.cr0.lt) goto loc_82220C44;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r28,-1
	ctx.r28.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8222068c
	if (!ctx.cr6.gt) goto loc_8222068C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220660:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r28,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r28.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r28,68(r9)
	REX_STORE_U32(ctx.r9.u32 + 68, ctx.r28.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82220660
	if (ctx.cr6.lt) goto loc_82220660;
loc_8222068C:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r14,r28
	ctx.r14.u64 = ctx.r28.u64;
	// addi r11,r11,13832
	ctx.r11.s64 = ctx.r11.s64 + 13832;
	// li r17,0
	ctx.r17.s64 = 0;
	// lfd f31,1792(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
	// li r16,0
	ctx.r16.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x82220980
	if (!ctx.cr6.gt) goto loc_82220980;
	// li r15,0
	ctx.r15.s64 = 0;
loc_822206BC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r25,r15,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222096c
	if (ctx.cr0.eq) goto loc_8222096C;
	// lwz r10,4(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// clrlwi r20,r11,12
	ctx.r20.u64 = ctx.r11.u32 & 0xFFFFF;
	// li r19,0
	ctx.r19.s64 = 0;
	// divwu. r18,r10,r20
	ctx.r18.u64 = uint32_t(ctx.r20.u32 ? ctx.r10.u32 / ctx.r20.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// twllei r20,0
	if (ctx.r20.s32 == 0 || ctx.r20.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq 0x8222096c
	if (ctx.cr0.eq) goto loc_8222096C;
	// li r21,0
	ctx.r21.s64 = 0;
loc_822206EC:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8222095c
	if (ctx.cr6.eq) goto loc_8222095C;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
loc_82220708:
	// add r11,r21,r8
	ctx.r11.u64 = ctx.r21.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220748
	if (ctx.cr0.eq) goto loc_82220748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f9b8
	ctx.lr = 0x8222073C;
	sub_8220F9B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82220748
	if (!ctx.cr0.eq) goto loc_82220748;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82220748:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82220708
	if (ctx.cr6.lt) goto loc_82220708;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8222095c
	if (ctx.cr6.eq) goto loc_8222095C;
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x8222078c
	if (!ctx.cr6.eq) goto loc_8222078C;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// ori r5,r5,593
	ctx.r5.u64 = ctx.r5.u64 | 593;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82220780;
	sub_8220E988(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
loc_8222078C:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8220eac8
	ctx.lr = 0x822207A8;
	sub_8220EAC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r23,r10,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x822207CC;
	sub_8220D6F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822207DC:
	// add r11,r21,r22
	ctx.r11.u64 = ctx.r21.u64 + ctx.r22.u64;
	// lwz r7,8(r25)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r26,r30,r7
	ctx.r26.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// rlwinm r24,r26,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r24,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220920
	if (ctx.cr0.eq) goto loc_82220920;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f9b8
	ctx.lr = 0x82220820;
	sub_8220F9B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82220920
	if (!ctx.cr0.eq) goto loc_82220920;
	// lwz r11,72(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220854
	if (ctx.cr6.eq) goto loc_82220854;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4112
	ctx.r9.s64 = 269484032;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82220920
	if (ctx.cr6.eq) goto loc_82220920;
loc_82220854:
	// lwz r11,48(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220868
	if (ctx.cr6.eq) goto loc_82220868;
	// stwx r11,r30,r7
	REX_STORE_U32(ctx.r30.u32 + ctx.r7.u32, ctx.r11.u32);
	// b 0x82220920
	goto loc_82220920;
loc_82220868:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,132(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x8220ea28
	ctx.lr = 0x82220880;
	sub_8220EA28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,16(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r28.u32);
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// stwx r26,r11,r27
	REX_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r26.u32);
	// bl 0x8220ea28
	ctx.lr = 0x822208B4;
	sub_8220EA28(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r4,r24,r10
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r11,r10
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8220e4a0
	ctx.lr = 0x822208EC;
	sub_8220E4A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,68(r26)
	REX_STORE_U32(ctx.r26.u32 + 68, ctx.r28.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,100(r26)
	REX_STORE_U32(ctx.r26.u32 + 100, ctx.r11.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r11,96(r26)
	REX_STORE_U32(ctx.r26.u32 + 96, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,-1
	ctx.r28.s64 = -1;
	// lwzx r10,r24,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r10.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
loc_82220920:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r20
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x822207dc
	if (ctx.cr6.lt) goto loc_822207DC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82220940
	if (ctx.cr6.eq) goto loc_82220940;
	// clrlwi r11,r29,12
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFFF;
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// b 0x82220944
	goto loc_82220944;
loc_82220940:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220944:
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r29,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r29.u32);
	// stw r29,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r29.u32);
	// beq cr6,0x8222095c
	if (ctx.cr6.eq) goto loc_8222095C;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
loc_8222095C:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// add r21,r21,r20
	ctx.r21.u64 = ctx.r21.u64 + ctx.r20.u64;
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x822206ec
	if (ctx.cr6.lt) goto loc_822206EC;
loc_8222096C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// addi r15,r15,4
	ctx.r15.s64 = ctx.r15.s64 + 4;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822206bc
	if (ctx.cr6.lt) goto loc_822206BC;
loc_82220980:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82220b14
	if (!ctx.cr6.gt) goto loc_82220B14;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
loc_82220998:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r28,r11,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82220afc
	if (ctx.cr6.eq) goto loc_82220AFC;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82220afc
	if (ctx.cr0.eq) goto loc_82220AFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220f9b8
	ctx.lr = 0x822209D8;
	sub_8220F9B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82220afc
	if (!ctx.cr0.eq) goto loc_82220AFC;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82220af4
	if (!ctx.cr6.eq) goto loc_82220AF4;
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// bne cr6,0x82220a1c
	if (!ctx.cr6.eq) goto loc_82220A1C;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// ori r5,r5,593
	ctx.r5.u64 = ctx.r5.u64 | 593;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82220A10;
	sub_8220E988(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
loc_82220A1C:
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8220eac8
	ctx.lr = 0x82220A34;
	sub_8220EAC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,72(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwzx r4,r9,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82220A64;
	sub_8220D6F0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r4,132(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// bl 0x8220ea28
	ctx.lr = 0x82220A88;
	sub_8220EA28(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x82220AB8;
	sub_8220EA28(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82220c50
	if (ctx.cr6.eq) goto loc_82220C50;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r24,r10,r11
	ctx.r24.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8220e4a0
	ctx.lr = 0x82220ADC;
	sub_8220E4A0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r25,96(r24)
	REX_STORE_U32(ctx.r24.u32 + 96, ctx.r25.u32);
	// stw r25,100(r24)
	REX_STORE_U32(ctx.r24.u32 + 100, ctx.r25.u32);
	// stw r11,68(r24)
	REX_STORE_U32(ctx.r24.u32 + 68, ctx.r11.u32);
loc_82220AF4:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_82220AFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82220998
	if (ctx.cr6.lt) goto loc_82220998;
	// li r28,-1
	ctx.r28.s64 = -1;
loc_82220B14:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82218838
	ctx.lr = 0x82220B1C;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220b2c
	if (ctx.cr0.eq) goto loc_82220B2C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82220c44
	if (ctx.cr6.lt) goto loc_82220C44;
loc_82220B2C:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82213478
	ctx.lr = 0x82220B34;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220b44
	if (ctx.cr0.eq) goto loc_82220B44;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82220c44
	if (ctx.cr6.lt) goto loc_82220C44;
loc_82220B44:
	// lwz r3,228(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x822173b0
	ctx.lr = 0x82220B4C;
	sub_822173B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x82220B54;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220b64
	if (ctx.cr0.eq) goto loc_82220B64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82220c44
	if (ctx.cr6.lt) goto loc_82220C44;
loc_82220B64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x82220B6C;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220b7c
	if (ctx.cr0.eq) goto loc_82220B7C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82220c44
	if (ctx.cr6.lt) goto loc_82220C44;
loc_82220B7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221b980
	ctx.lr = 0x82220B84;
	sub_8221B980(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82220b94
	if (ctx.cr0.eq) goto loc_82220B94;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82220c44
	if (ctx.cr6.lt) goto loc_82220C44;
loc_82220B94:
	// cmpwi cr6,r14,-1
	ctx.cr6.compare<int32_t>(ctx.r14.s32, -1, ctx.xer);
	// beq cr6,0x82220c40
	if (ctx.cr6.eq) goto loc_82220C40;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82220c40
	if (!ctx.cr6.gt) goto loc_82220C40;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82220BBC:
	// lwzx r11,r9,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r14
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82220bdc
	if (!ctx.cr6.eq) goto loc_82220BDC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82220bdc
	if (!ctx.cr6.gt) goto loc_82220BDC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82220BDC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82220bbc
	if (ctx.cr6.lt) goto loc_82220BBC;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82220c40
	if (ctx.cr6.eq) goto loc_82220C40;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82220BFC:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,4(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r7,r14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r14.u32, ctx.xer);
	// bne cr6,0x82220c2c
	if (!ctx.cr6.eq) goto loc_82220C2C;
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82220c2c
	if (ctx.cr6.eq) goto loc_82220C2C;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_82220C2C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82220bfc
	if (ctx.cr6.lt) goto loc_82220BFC;
loc_82220C40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82220C44:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_82220C50:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82220c44
	goto loc_82220C44;
}

DEFINE_REX_FUNC(sub_82233EE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82233EE8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82234010
	if (ctx.cr6.eq) goto loc_82234010;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82234010
	if (ctx.cr6.eq) goto loc_82234010;
loc_82233F00:
	// lwz r30,0(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82234000
	if (ctx.cr6.eq) goto loc_82234000;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82234000
	if (ctx.cr6.eq) goto loc_82234000;
	// lwz r28,12(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82234000
	if (ctx.cr6.eq) goto loc_82234000;
	// lwz r29,0(r7)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82233F30:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82233f68
	if (ctx.cr6.eq) goto loc_82233F68;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
loc_82233F48:
	// lwz r26,0(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82233f7c
	if (ctx.cr6.eq) goto loc_82233F7C;
	// lwz r26,0(r7)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82233f48
	if (ctx.cr6.lt) goto loc_82233F48;
loc_82233F68:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82233f30
	if (ctx.cr6.lt) goto loc_82233F30;
	// b 0x82234000
	goto loc_82234000;
loc_82233F7C:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82233F84:
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82233fc0
	if (ctx.cr6.eq) goto loc_82233FC0;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwzx r31,r31,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
loc_82233FA0:
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82233fc0
	if (ctx.cr6.eq) goto loc_82233FC0;
	// lwz r28,0(r7)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82233fa0
	if (ctx.cr6.lt) goto loc_82233FA0;
loc_82233FC0:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82233fec
	if (!ctx.cr6.eq) goto loc_82233FEC;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x8223401c
	if (ctx.cr6.eq) goto loc_8223401C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r10,r6
	REX_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82233FEC:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82233f84
	if (ctx.cr6.lt) goto loc_82233F84;
loc_82234000:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r27,r5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82233f00
	if (ctx.cr6.lt) goto loc_82233F00;
loc_82234010:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82234014:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8223401C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4803
	ctx.r5.s64 = 4803;
	// addi r6,r11,16756
	ctx.r6.s64 = ctx.r11.s64 + 16756;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ff00
	ctx.lr = 0x82234030;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82234014
	goto loc_82234014;
}

DEFINE_REX_FUNC(sub_82237C70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82237C78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r4,66
	ctx.r4.s64 = 66;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r11,12
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFFF;
	// bl 0x82207320
	ctx.lr = 0x82237C94;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
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
	ctx.lr = 0x82237CD4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
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
	ctx.lr = 0x82237CFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
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
	ctx.lr = 0x82237D40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
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
	ctx.lr = 0x82237D6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// oris r5,r10,2304
	ctx.r5.u64 = ctx.r10.u64 | 150994944;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237D98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82237DB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x82237DC4;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82237dd0
	if (ctx.cr0.lt) goto loc_82237DD0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82237DD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223B5D8) {
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
	// lwz r4,560(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8223b64c
	if (ctx.cr6.eq) goto loc_8223B64C;
	// lwz r5,548(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 548);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223b64c
	if (ctx.cr6.eq) goto loc_8223B64C;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// beq cr6,0x8223b61c
	if (ctx.cr6.eq) goto loc_8223B61C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8223b65c
	goto loc_8223B65C;
loc_8223B61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8223b158
	ctx.lr = 0x8223B624;
	sub_8223B158(ctx, base);
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65533
	ctx.r4.u64 = ctx.r4.u64 | 65533;
	// bl 0x82207320
	ctx.lr = 0x8223B634;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b65c
	if (ctx.cr0.lt) goto loc_8223B65C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8223B644;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223b65c
	if (ctx.cr0.lt) goto loc_8223B65C;
loc_8223B64C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,552(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x8223b158
	ctx.lr = 0x8223B65C;
	sub_8223B158(ctx, base);
loc_8223B65C:
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

DEFINE_REX_FUNC(sub_8223E5C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8223E5C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,260(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223e61c
	if (ctx.cr6.eq) goto loc_8223E61C;
	// lwz r7,20(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8223E5F0:
	// lwz r6,16(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,0(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm. r6,r6,0,6,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8223e61c
	if (ctx.cr0.eq) goto loc_8223E61C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8223e5f0
	if (ctx.cr6.lt) goto loc_8223E5F0;
loc_8223E61C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8223e650
	if (!ctx.cr6.lt) goto loc_8223E650;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r4,14
	ctx.r4.s64 = 14;
loc_8223E62C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82209ce8
	ctx.lr = 0x8223E64C;
	sub_82209CE8(ctx, base);
	// b 0x8223e8f8
	goto loc_8223E8F8;
loc_8223E650:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// blt cr6,0x8223e668
	if (ctx.cr6.lt) goto loc_8223E668;
	// li r4,78
	ctx.r4.s64 = 78;
	// b 0x8223e62c
	goto loc_8223E62C;
loc_8223E668:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8223e760
	if (!ctx.cr6.gt) goto loc_8223E760;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223e8f8
	if (ctx.cr0.lt) goto loc_8223E8F8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207590
	ctx.lr = 0x8223E6E4;
	sub_82207590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223e8f8
	if (ctx.cr0.lt) goto loc_8223E8F8;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8223e71c
	if (!ctx.cr6.gt) goto loc_8223E71C;
	// addi r9,r1,108
	ctx.r9.s64 = ctx.r1.s64 + 108;
loc_8223E704:
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8223e704
	if (ctx.cr6.lt) goto loc_8223E704;
loc_8223E71C:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// bl 0x82207590
	ctx.lr = 0x8223E754;
	sub_82207590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8223e8f4
	if (!ctx.cr0.lt) goto loc_8223E8F4;
	// b 0x8223e8f8
	goto loc_8223E8F8;
loc_8223E760:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223e8f4
	if (ctx.cr6.eq) goto loc_8223E8F4;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8223E770:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r9,r9,r29
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223e7b0
	if (!ctx.cr6.eq) goto loc_8223E7B0;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8223e894
	if (!ctx.cr0.eq) goto loc_8223E894;
loc_8223E7B0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8223e894
	if (ctx.cr6.eq) goto loc_8223E894;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8223e7d4
	if (!ctx.cr6.eq) goto loc_8223E7D4;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8223e7d4
	if (ctx.cr0.eq) goto loc_8223E7D4;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8223e894
	if (!ctx.cr0.eq) goto loc_8223E894;
loc_8223E7D4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8223e810
	if (!ctx.cr6.eq) goto loc_8223E810;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,256(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,340(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223E804;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223e8f8
	if (ctx.cr0.lt) goto loc_8223E8F8;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8223E810:
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82207590
	ctx.lr = 0x8223E84C;
	sub_82207590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223e8f8
	if (ctx.cr0.lt) goto loc_8223E8F8;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82207590
	ctx.lr = 0x8223E890;
	sub_82207590(ctx, base);
	// b 0x8223e8d4
	goto loc_8223E8D4;
loc_8223E894:
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,260(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r4,78
	ctx.r4.s64 = 78;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + ctx.r29.u64;
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82207590
	ctx.lr = 0x8223E8D4;
	sub_82207590(ctx, base);
loc_8223E8D4:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8223e8f8
	if (ctx.cr0.lt) goto loc_8223E8F8;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223e770
	if (ctx.cr6.lt) goto loc_8223E770;
loc_8223E8F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8223E8F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82244450) {
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
	// lwz r3,3032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82243d20
	ctx.lr = 0x8224448C;
	sub_82243D20(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822471F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822471F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82247220
	if (ctx.cr6.eq) goto loc_82247220;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_82247220:
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8224765c
	if (!ctx.cr6.eq) goto loc_8224765C;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8224765c
	if (!ctx.cr6.eq) goto loc_8224765C;
	// lwz r28,56(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r7,52(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r28,27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 27, ctx.xer);
	// blt cr6,0x82247254
	if (ctx.cr6.lt) goto loc_82247254;
	// cmplwi cr6,r28,34
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 34, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82247258
	if (!ctx.cr6.gt) goto loc_82247258;
loc_82247254:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247258:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r28,35
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 35, ctx.xer);
	// blt cr6,0x82247270
	if (ctx.cr6.lt) goto loc_82247270;
	// cmplwi cr6,r28,39
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 39, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82247274
	if (!ctx.cr6.gt) goto loc_82247274;
loc_82247270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247274:
	// clrlwi r8,r11,24
	ctx.r8.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// blt cr6,0x8224728c
	if (ctx.cr6.lt) goto loc_8224728C;
	// cmplwi cr6,r7,23
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 23, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82247290
	if (!ctx.cr6.gt) goto loc_82247290;
loc_8224728C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247290:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,24
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 24, ctx.xer);
	// blt cr6,0x822472a8
	if (ctx.cr6.lt) goto loc_822472A8;
	// cmplwi cr6,r7,27
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 27, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822472ac
	if (!ctx.cr6.gt) goto loc_822472AC;
loc_822472A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822472AC:
	// clrlwi. r6,r9,24
	ctx.r6.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x822472c4
	if (!ctx.cr0.eq) goto loc_822472C4;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822472c8
	if (ctx.cr0.eq) goto loc_822472C8;
loc_822472C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822472C8:
	// clrlwi. r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x822472e0
	if (!ctx.cr0.eq) goto loc_822472E0;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822472e4
	if (ctx.cr0.eq) goto loc_822472E4;
loc_822472E0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822472E4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82247300
	if (ctx.cr0.eq) goto loc_82247300;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247300
	if (ctx.cr0.eq) goto loc_82247300;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30448
	ctx.r4.s64 = ctx.r11.s64 + -30448;
	// b 0x82247664
	goto loc_82247664;
loc_82247300:
	// cmplwi cr6,r28,23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 23, ctx.xer);
	// beq cr6,0x82247324
	if (ctx.cr6.eq) goto loc_82247324;
	// cmplwi cr6,r28,24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 24, ctx.xer);
	// beq cr6,0x82247324
	if (ctx.cr6.eq) goto loc_82247324;
	// cmplwi cr6,r28,252
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 252, ctx.xer);
	// beq cr6,0x82247324
	if (ctx.cr6.eq) goto loc_82247324;
	// cmplwi cr6,r28,253
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 253, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82247328
	if (!ctx.cr6.eq) goto loc_82247328;
loc_82247324:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82247328:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 29, ctx.xer);
	// beq cr6,0x82247340
	if (ctx.cr6.eq) goto loc_82247340;
	// cmplwi cr6,r7,244
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 244, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82247344
	if (!ctx.cr6.eq) goto loc_82247344;
loc_82247340:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82247344:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82247360
	if (ctx.cr0.eq) goto loc_82247360;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247360
	if (ctx.cr0.eq) goto loc_82247360;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30492
	ctx.r4.s64 = ctx.r11.s64 + -30492;
	// b 0x82247664
	goto loc_82247664;
loc_82247360:
	// lwz r31,104(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822474d4
	if (ctx.cr6.eq) goto loc_822474D4;
	// lwz r10,96(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822474d4
	if (ctx.cr6.eq) goto loc_822474D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r28,241
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 241, ctx.xer);
	// beq cr6,0x822473c4
	if (ctx.cr6.eq) goto loc_822473C4;
	// cmplwi cr6,r28,243
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 243, ctx.xer);
	// beq cr6,0x822473ac
	if (ctx.cr6.eq) goto loc_822473AC;
	// cmplwi cr6,r28,251
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 251, ctx.xer);
	// ble cr6,0x8224739c
	if (!ctx.cr6.gt) goto loc_8224739C;
	// cmplwi cr6,r28,253
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 253, ctx.xer);
	// ble cr6,0x822473ac
	if (!ctx.cr6.gt) goto loc_822473AC;
loc_8224739C:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r11,r11,-7600
	ctx.r11.s64 = ctx.r11.s64 + -7600;
	// lbzx r6,r28,r11
	ctx.r6.u64 = REX_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// b 0x822473b0
	goto loc_822473B0;
loc_822473AC:
	// li r6,2
	ctx.r6.s64 = 2;
loc_822473B0:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x822473c4
	if (!ctx.cr6.eq) goto loc_822473C4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-30600
	ctx.r5.s64 = ctx.r11.s64 + -30600;
	// b 0x822473cc
	goto loc_822473CC;
loc_822473C4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-30704
	ctx.r5.s64 = ctx.r11.s64 + -30704;
loc_822473CC:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822473f0
	if (ctx.cr6.eq) goto loc_822473F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30732
	ctx.r4.s64 = ctx.r11.s64 + -30732;
loc_822473E4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822444a0
	ctx.lr = 0x822473EC;
	sub_822444A0(ctx, base);
	// b 0x8224766c
	goto loc_8224766C;
loc_822473F0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8224740c
	if (ctx.cr6.eq) goto loc_8224740C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
	// b 0x822473e4
	goto loc_822473E4;
loc_8224740C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82247428
	if (ctx.cr6.eq) goto loc_82247428;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30800
	ctx.r4.s64 = ctx.r11.s64 + -30800;
	// b 0x822473e4
	goto loc_822473E4;
loc_82247428:
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r8,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// xor. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822474c8
	if (!ctx.cr0.eq) goto loc_822474C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247460
	if (ctx.cr6.eq) goto loc_82247460;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822474c8
	if (!ctx.cr6.eq) goto loc_822474C8;
loc_82247460:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 11, ctx.xer);
	// blt cr6,0x82247478
	if (ctx.cr6.lt) goto loc_82247478;
	// cmplwi cr6,r7,14
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 14, ctx.xer);
	// bgt cr6,0x82247478
	if (ctx.cr6.gt) goto loc_82247478;
	// li r11,5
	ctx.r11.s64 = 5;
loc_82247478:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,-30812
	ctx.r10.s64 = ctx.r10.s64 + -30812;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82242c90
	ctx.lr = 0x82247494;
	sub_82242C90(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// and r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822474b4
	if (ctx.cr6.eq) goto loc_822474B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-30912
	ctx.r4.s64 = ctx.r11.s64 + -30912;
	// b 0x82247664
	goto loc_82247664;
loc_822474B4:
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// bne cr6,0x822474d4
	if (!ctx.cr6.eq) goto loc_822474D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31016
	ctx.r4.s64 = ctx.r11.s64 + -31016;
	// b 0x82247664
	goto loc_82247664;
loc_822474C8:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31068
	ctx.r4.s64 = ctx.r11.s64 + -31068;
	// b 0x822473e4
	goto loc_822473E4;
loc_822474D4:
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82247500
	if (ctx.cr6.eq) goto loc_82247500;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822474f8
	if (!ctx.cr6.eq) goto loc_822474F8;
	// li r10,-1
	ctx.r10.s64 = -1;
	// b 0x82247504
	goto loc_82247504;
loc_822474F8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82247504
	goto loc_82247504;
loc_82247500:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82247504:
	// lwz r11,92(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224752c
	if (ctx.cr6.eq) goto loc_8224752C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82247524
	if (!ctx.cr6.eq) goto loc_82247524;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82247530
	goto loc_82247530;
loc_82247524:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82247530
	goto loc_82247530;
loc_8224752C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247530:
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82247544
	if (ctx.cr6.eq) goto loc_82247544;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31128
	ctx.r4.s64 = ctx.r11.s64 + -31128;
	// b 0x82247664
	goto loc_82247664;
loc_82247544:
	// lwz r7,84(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r8,88(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 88);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82247564
	if (ctx.cr6.eq) goto loc_82247564;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82247568
	if (!ctx.cr6.eq) goto loc_82247568;
loc_82247564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247568:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82247584
	if (ctx.cr6.eq) goto loc_82247584;
	// lwz r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82247588
	if (ctx.cr6.eq) goto loc_82247588;
loc_82247584:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82247588:
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822475a4
	if (ctx.cr6.eq) goto loc_822475A4;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822475a8
	if (!ctx.cr6.eq) goto loc_822475A8;
loc_822475A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822475A8:
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822475c4
	if (ctx.cr6.eq) goto loc_822475C4;
	// lwz r11,16(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x822475c8
	if (ctx.cr6.eq) goto loc_822475C8;
loc_822475C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822475C8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x822475f8
	if (ctx.cr0.eq) goto loc_822475F8;
	// clrlwi. r5,r9,24
	ctx.r5.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x822475f8
	if (ctx.cr0.eq) goto loc_822475F8;
	// lwz r7,24(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822475f8
	if (ctx.cr6.eq) goto loc_822475F8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31200
	ctx.r4.s64 = ctx.r11.s64 + -31200;
	// b 0x82247664
	goto loc_82247664;
loc_822475F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82247608
	if (ctx.cr6.eq) goto loc_82247608;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82247618
	if (!ctx.cr0.eq) goto loc_82247618;
loc_82247608:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247624
	if (ctx.cr0.eq) goto loc_82247624;
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82247624
	if (ctx.cr0.eq) goto loc_82247624;
loc_82247618:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31328
	ctx.r4.s64 = ctx.r11.s64 + -31328;
	// b 0x82247664
	goto loc_82247664;
loc_82247624:
	// stw r28,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r11,72(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 72);
	// stw r11,72(r30)
	REX_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// lwz r11,88(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 88);
	// stw r11,88(r30)
	REX_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// bne cr6,0x82247648
	if (!ctx.cr6.eq) goto loc_82247648;
	// lwz r11,96(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 96);
	// stw r11,104(r30)
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r11.u32);
loc_82247648:
	// lwz r11,100(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// stw r11,108(r30)
	REX_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// b 0x8224766c
	goto loc_8224766C;
loc_8224765C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-31400
	ctx.r4.s64 = ctx.r11.s64 + -31400;
loc_82247664:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822444a0
	ctx.lr = 0x8224766C;
	sub_822444A0(ctx, base);
loc_8224766C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224FC00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8224FC08;
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
	// ble cr6,0x8224fc80
	if (!ctx.cr6.gt) goto loc_8224FC80;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8224fc30
	if (!ctx.cr6.lt) goto loc_8224FC30;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8224FC30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0b0
	ctx.lr = 0x8224FC3C;
	sub_8225C0B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8224fc54
	if (!ctx.cr0.eq) goto loc_8224FC54;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8224fc80
	goto loc_8224FC80;
loc_8224FC54:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224fc7c
	if (ctx.cr6.eq) goto loc_8224FC7C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8215e640
	ctx.lr = 0x8224FC70;
	sub_8215E640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8225c0c0
	ctx.lr = 0x8224FC7C;
	sub_8225C0C0(ctx, base);
loc_8224FC7C:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8224FC80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251690) {
	REX_FUNC_PROLOGUE();
	// b 0x8224fe78
	sub_8224FE78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251BB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x82251BC0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251BDC;
	sub_8224F010(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r18,r10,-15120
	ctx.r18.s64 = ctx.r10.s64 + -15120;
	// addi r22,r11,-15768
	ctx.r22.s64 = ctx.r11.s64 + -15768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251BFC;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82251C04;
	sub_8224FD68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224d2d8
	ctx.lr = 0x82251C0C;
	sub_8224D2D8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x82251C1C;
	sub_8216B018(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82251c34
	if (!ctx.cr0.eq) goto loc_82251C34;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,144(r21)
	REX_STORE_U32(ctx.r21.u32 + 144, ctx.r11.u32);
	// b 0x82251d74
	goto loc_82251D74;
loc_82251C34:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224d648
	ctx.lr = 0x82251C48;
	sub_8224D648(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r19,r26,8
	ctx.r19.s64 = ctx.r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82251d68
	if (!ctx.cr6.lt) goto loc_82251D68;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r20,r6,9925
	ctx.r20.s64 = ctx.r6.s64 + 9925;
	// addi r29,r7,-15892
	ctx.r29.s64 = ctx.r7.s64 + -15892;
	// addi r25,r8,-15708
	ctx.r25.s64 = ctx.r8.s64 + -15708;
	// addi r24,r9,-29040
	ctx.r24.s64 = ctx.r9.s64 + -29040;
	// addi r23,r10,-15752
	ctx.r23.s64 = ctx.r10.s64 + -15752;
	// addi r28,r11,-29052
	ctx.r28.s64 = ctx.r11.s64 + -29052;
loc_82251C94:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82251d4c
	if (ctx.cr0.eq) goto loc_82251D4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251CA8;
	sub_8224F010(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251CB8;
	sub_8224EFB8(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r6,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 4;
	// bl 0x8224efb8
	ctx.lr = 0x82251CD4;
	sub_8224EFB8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251CE8;
	sub_8224EFB8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251CFC;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82251D04;
	sub_8224FD68(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r11,r11,1
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82251d1c
	if (!ctx.cr6.eq) goto loc_82251D1C;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// b 0x82251d24
	goto loc_82251D24;
loc_82251D1C:
	// lwz r10,44(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82251D24:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// bl 0x82251368
	ctx.lr = 0x82251D40;
	sub_82251368(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82251D4C;
	sub_8224F070(ctx, base);
loc_82251D4C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251c94
	if (ctx.cr6.lt) goto loc_82251C94;
loc_82251D68:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8216b138
	ctx.lr = 0x82251D74;
	sub_8216B138(ctx, base);
loc_82251D74:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82251D80;
	sub_8224F070(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822542F8) {
	REX_FUNC_PROLOGUE();
	// b 0x82253180
	sub_82253180(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254328) {
	REX_FUNC_PROLOGUE();
	// b 0x822534a8
	sub_822534A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254338) {
	REX_FUNC_PROLOGUE();
	// b 0x82253568
	sub_82253568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254348) {
	REX_FUNC_PROLOGUE();
	// b 0x822536c0
	sub_822536C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254358) {
	REX_FUNC_PROLOGUE();
	// b 0x822532d0
	sub_822532D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254368) {
	REX_FUNC_PROLOGUE();
	// b 0x82253810
	sub_82253810(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254380) {
	REX_FUNC_PROLOGUE();
	// b 0x822539b8
	sub_822539B8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254810) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82254818;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82254888
	if (ctx.cr6.lt) goto loc_82254888;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82253ce0
	ctx.lr = 0x82254850;
	sub_82253CE0(ctx, base);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82254888
	if (ctx.cr0.lt) goto loc_82254888;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r25,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82251f48
	ctx.lr = 0x82254888;
	sub_82251F48(ctx, base);
loc_82254888:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822553A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822553B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822553c8
	if (!ctx.cr6.eq) goto loc_822553C8;
	// li r30,1
	ctx.r30.s64 = 1;
loc_822553C8:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822553f0
	if (ctx.cr6.eq) goto loc_822553F0;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
loc_822553D8:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82255270
	ctx.lr = 0x822553E4;
	sub_82255270(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822553d8
	if (ctx.cr6.lt) goto loc_822553D8;
loc_822553F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82255F00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82255F08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,-13800
	ctx.r26.s64 = ctx.r10.s64 + -13800;
	// blt cr6,0x82255f54
	if (ctx.cr6.lt) goto loc_82255F54;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-13640
	ctx.r5.s64 = ctx.r11.s64 + -13640;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82255F54;
	sub_82260F30(ctx, base);
loc_82255F54:
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
	// blt cr6,0x82255f88
	if (ctx.cr6.lt) goto loc_82255F88;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-13712
	ctx.r5.s64 = ctx.r11.s64 + -13712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82255F88;
	sub_82260F30(ctx, base);
loc_82255F88:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82255e10
	ctx.lr = 0x82255FB8;
	sub_82255E10(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82258D40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82258D48;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822588a8
	ctx.lr = 0x82258D7C;
	sub_822588A8(ctx, base);
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225915c
	if (ctx.cr0.lt) goto loc_8225915C;
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225915c
	if (ctx.cr0.eq) goto loc_8225915C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r30,28(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// lis r7,-32193
	ctx.r7.s64 = -2109800448;
	// lwz r23,96(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r28,24(r24)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// addi r15,r11,-13284
	ctx.r15.s64 = ctx.r11.s64 + -13284;
	// addi r16,r7,-6168
	ctx.r16.s64 = ctx.r7.s64 + -6168;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// addi r22,r10,-13276
	ctx.r22.s64 = ctx.r10.s64 + -13276;
	// stw r16,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r27,r9,-30764
	ctx.r27.s64 = ctx.r9.s64 + -30764;
	// addi r26,r8,-13300
	ctx.r26.s64 = ctx.r8.s64 + -13300;
	// beq cr6,0x82258ee4
	if (ctx.cr6.eq) goto loc_82258EE4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258DE0;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258DEC;
	sub_82257350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258DF8;
	sub_82257DE0(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-12800
	ctx.r4.s64 = ctx.r10.s64 + -12800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82257350
	ctx.lr = 0x82258E10;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258E1C;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258E28;
	sub_82257350(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82258ed8
	if (ctx.cr6.eq) goto loc_82258ED8;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32193
	ctx.r9.s64 = -2109800448;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// addi r19,r8,-11772
	ctx.r19.s64 = ctx.r8.s64 + -11772;
	// addi r18,r9,-5304
	ctx.r18.s64 = ctx.r9.s64 + -5304;
	// addi r17,r10,-12824
	ctx.r17.s64 = ctx.r10.s64 + -12824;
	// addi r20,r11,-12852
	ctx.r20.s64 = ctx.r11.s64 + -12852;
loc_82258E58:
	// lwz r29,0(r21)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r29,22,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3C;
	// clrlwi r8,r29,20
	ctx.r8.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r7,r29,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r16
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x82257350
	ctx.lr = 0x82258E80;
	sub_82257350(ctx, base);
	// rlwinm. r11,r29,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258e94
	if (ctx.cr0.eq) goto loc_82258E94;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258E94;
	sub_82257350(ctx, base);
loc_82258E94:
	// rlwinm. r11,r29,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82258eb0
	if (ctx.cr0.eq) goto loc_82258EB0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r18
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x82257350
	ctx.lr = 0x82258EB0;
	sub_82257350(ctx, base);
loc_82258EB0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258EBC;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258EC8;
	sub_82257350(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82258e58
	if (ctx.cr6.lt) goto loc_82258E58;
loc_82258ED8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258EE4;
	sub_82257DE0(ctx, base);
loc_82258EE4:
	// lwz r11,20(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm. r21,r11,27,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x8225915c
	if (ctx.cr0.eq) goto loc_8225915C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258EFC;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258F08;
	sub_82257350(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258F14;
	sub_82257DE0(ctx, base);
	// add r11,r21,r30
	ctx.r11.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r9,-12884
	ctx.r4.s64 = ctx.r9.s64 + -12884;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r22,r10,r23
	ctx.r22.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r14,32(r24)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r24.u32 + 32);
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// bl 0x82257350
	ctx.lr = 0x82258F4C;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82258F58;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82258F64;
	sub_82257350(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82259150
	if (ctx.cr6.eq) goto loc_82259150;
	// lis r3,-32249
	ctx.r3.s64 = -2113470464;
	// lis r4,-32249
	ctx.r4.s64 = -2113470464;
	// lis r5,-32249
	ctx.r5.s64 = -2113470464;
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r20,r3,-12944
	ctx.r20.s64 = ctx.r3.s64 + -12944;
	// addi r23,r4,-12960
	ctx.r23.s64 = ctx.r4.s64 + -12960;
	// addi r19,r5,-13188
	ctx.r19.s64 = ctx.r5.s64 + -13188;
	// addi r25,r6,-12988
	ctx.r25.s64 = ctx.r6.s64 + -12988;
	// addi r18,r7,1648
	ctx.r18.s64 = ctx.r7.s64 + 1648;
	// addi r17,r8,3912
	ctx.r17.s64 = ctx.r8.s64 + 3912;
	// addi r16,r9,3908
	ctx.r16.s64 = ctx.r9.s64 + 3908;
	// addi r24,r10,9925
	ctx.r24.s64 = ctx.r10.s64 + 9925;
	// addi r15,r11,3916
	ctx.r15.s64 = ctx.r11.s64 + 3916;
	// b 0x82258fc4
	goto loc_82258FC4;
loc_82258FC0:
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_82258FC4:
	// lwz r29,0(r22)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// rlwinm. r11,r29,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r5,r29,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF;
	// clrlwi r7,r29,28
	ctx.r7.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r9,r29,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// rlwinm r8,r29,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF;
	// bne 0x82258fe8
	if (!ctx.cr0.eq) goto loc_82258FE8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82258FE8:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne 0x82258ff8
	if (!ctx.cr0.eq) goto loc_82258FF8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82258FF8:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne 0x82259008
	if (!ctx.cr0.eq) goto loc_82259008;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82259008:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bne 0x82259018
	if (!ctx.cr0.eq) goto loc_82259018;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82259018:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x8225903C;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82259048;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82259054;
	sub_82257350(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225908c
	if (ctx.cr6.eq) goto loc_8225908C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8225908c
	if (ctx.cr6.lt) goto loc_8225908C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82259074;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82259080;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x8225908C;
	sub_82257350(ctx, base);
loc_8225908C:
	// rlwinm r30,r29,16,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x82259100
	if (!ctx.cr6.lt) goto loc_82259100;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_822590AC:
	// lwz r14,0(r29)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r6,r14,20
	ctx.r6.u64 = ctx.r14.u32 & 0xFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x822590C4;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x822590D0;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x822590DC;
	sub_82257350(ctx, base);
	// rlwinm. r11,r14,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r14,96(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bne 0x822590f8
	if (!ctx.cr0.eq) goto loc_822590F8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x822590ac
	if (ctx.cr6.lt) goto loc_822590AC;
loc_822590F8:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x82259124
	if (ctx.cr6.lt) goto loc_82259124;
loc_82259100:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x8225910C;
	sub_82257350(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82259118;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x82259124;
	sub_82257350(ctx, base);
loc_82259124:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x82259130;
	sub_82257DE0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257350
	ctx.lr = 0x8225913C;
	sub_82257350(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82258fc0
	if (ctx.cr6.lt) goto loc_82258FC0;
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_82259150:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257de0
	ctx.lr = 0x8225915C;
	sub_82257DE0(ctx, base);
loc_8225915C:
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82264BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82264BE0;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,1512
	ctx.r29.s64 = ctx.r10.s64 + 1512;
	// bne cr6,0x82264c2c
	if (!ctx.cr6.eq) goto loc_82264C2C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1956
	ctx.r5.s64 = ctx.r11.s64 + 1956;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264C2C;
	sub_82260F30(ctx, base);
loc_82264C2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82264c50
	if (!ctx.cr6.eq) goto loc_82264C50;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1948
	ctx.r5.s64 = ctx.r11.s64 + 1948;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264C50;
	sub_82260F30(ctx, base);
loc_82264C50:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264c78
	if (ctx.cr6.eq) goto loc_82264C78;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1928
	ctx.r5.s64 = ctx.r11.s64 + 1928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264C78;
	sub_82260F30(ctx, base);
loc_82264C78:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264ca0
	if (ctx.cr6.eq) goto loc_82264CA0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1908
	ctx.r5.s64 = ctx.r11.s64 + 1908;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264CA0;
	sub_82260F30(ctx, base);
loc_82264CA0:
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82264388
	ctx.lr = 0x82264CB8;
	sub_82264388(ctx, base);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82264cdc
	if (!ctx.cr0.eq) goto loc_82264CDC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1888
	ctx.r5.s64 = ctx.r11.s64 + 1888;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// bl 0x82260f30
	ctx.lr = 0x82264CDC;
	sub_82260F30(ctx, base);
loc_82264CDC:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
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
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266710) {
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
	// bne cr6,0x8226674c
	if (!ctx.cr6.eq) goto loc_8226674C;
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
	// li r7,314
	ctx.r7.s64 = 314;
	// bl 0x82260f30
	ctx.lr = 0x8226674C;
	sub_82260F30(ctx, base);
loc_8226674C:
	// lwz r11,2448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82266F78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82266F80;
	__savegprlr_26(ctx, base);
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,2336
	ctx.r29.s64 = ctx.r10.s64 + 2336;
	// bne cr6,0x82266fc8
	if (!ctx.cr6.eq) goto loc_82266FC8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1396
	ctx.r5.s64 = ctx.r11.s64 + 1396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82266FC8;
	sub_82260F30(ctx, base);
loc_82266FC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266FDC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82267008
	if (!ctx.cr0.eq) goto loc_82267008;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,3160
	ctx.r5.s64 = ctx.r11.s64 + 3160;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267000;
	sub_82260F30(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82267028
	goto loc_82267028;
loc_82267008:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82265cd8
	ctx.lr = 0x82267024;
	sub_82265CD8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82267028:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822696B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822696C0;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,4960
	ctx.r29.s64 = ctx.r10.s64 + 4960;
	// bne cr6,0x822696fc
	if (!ctx.cr6.eq) goto loc_822696FC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,4940
	ctx.r5.s64 = ctx.r11.s64 + 4940;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822696FC;
	sub_82260F30(ctx, base);
loc_822696FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x823131f0
	ctx.lr = 0x82269708;
	sub_823131F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82315778
	ctx.lr = 0x82269714;
	sub_82315778(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82315778
	ctx.lr = 0x8226971C;
	sub_82315778(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r28,r11,4920
	ctx.r28.s64 = ctx.r11.s64 + 4920;
	// bne cr6,0x82269758
	if (!ctx.cr6.eq) goto loc_82269758;
	// lwz r27,32(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r26,1436(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 1436);
	// lwz r25,1444(r27)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 1444);
	// bl 0x82325d28
	ctx.lr = 0x82269744;
	sub_82325D28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82269754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82269788
	goto loc_82269788;
loc_82269758:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82269788
	if (ctx.cr6.eq) goto loc_82269788;
	// bl 0x823216d8
	ctx.lr = 0x82269768;
	sub_823216D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82269788
	if (ctx.cr0.eq) goto loc_82269788;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,293
	ctx.r7.s64 = 293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82269788;
	sub_82260F30(ctx, base);
loc_82269788:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8226979C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822697bc
	if (ctx.cr0.eq) goto loc_822697BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,300
	ctx.r7.s64 = 300;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822697BC;
	sub_82260F30(ctx, base);
loc_822697BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D7A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_8226D7C8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r3,r8,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8226d7c8
	if (ctx.cr6.eq) goto loc_8226D7C8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226DE78) {
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
	// lwz r3,768(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 768);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82174dc0
	ctx.lr = 0x8226DE94;
	sub_82174DC0(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,20480
	ctx.r11.s64 = 20480;
	// ori r12,r12,23551
	ctx.r12.u64 = ctx.r12.u64 | 23551;
	// rlwimi r11,r31,10,21,21
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 10) & 0x400) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8226F1F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8226F1F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x8226F210;
	sub_8226DBE8(ctx, base);
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r28,1
	ctx.r10.u64 = ctx.r28.u64 | 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8226F228:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8226f2a8
	if (!ctx.cr0.eq) goto loc_8226F2A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226f2a8
	if (ctx.cr0.eq) goto loc_8226F2A8;
loc_8226F244:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8226f260
	if (ctx.cr6.lt) goto loc_8226F260;
	// cmplwi cr6,r10,82
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8226f264
	if (!ctx.cr6.gt) goto loc_8226F264;
loc_8226F260:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226F264:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226f45c
	if (!ctx.cr0.eq) goto loc_8226F45C;
	// cmplwi cr6,r10,96
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 96, ctx.xer);
	// blt cr6,0x8226f280
	if (ctx.cr6.lt) goto loc_8226F280;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8226f284
	if (!ctx.cr6.gt) goto loc_8226F284;
loc_8226F280:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226F284:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226f45c
	if (!ctx.cr0.eq) goto loc_8226F45C;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226f2a8
	if (!ctx.cr0.eq) goto loc_8226F2A8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8226f244
	if (!ctx.cr6.eq) goto loc_8226F244;
loc_8226F2A8:
	// lwz r30,12(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226f2c4
	if (ctx.cr6.eq) goto loc_8226F2C4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8226f2c8
	if (ctx.cr6.eq) goto loc_8226F2C8;
loc_8226F2C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226F2C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f2e0
	if (ctx.cr0.eq) goto loc_8226F2E0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8226f3e0
	if (ctx.cr6.eq) goto loc_8226F3E0;
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8226f3d8
	goto loc_8226F3D8;
loc_8226F2E0:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8226f3c4
	if (!ctx.cr6.eq) goto loc_8226F3C4;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8226f3c4
	if (ctx.cr0.eq) goto loc_8226F3C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,86
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 86, ctx.xer);
	// beq cr6,0x8226f314
	if (ctx.cr6.eq) goto loc_8226F314;
	// cmplwi cr6,r10,87
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 87, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8226f318
	if (!ctx.cr6.eq) goto loc_8226F318;
loc_8226F314:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226F318:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226f3c4
	if (ctx.cr0.eq) goto loc_8226F3C4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8226F338;
	sub_8226D728(ctx, base);
	// addi r10,r31,-16
	ctx.r10.s64 = ctx.r31.s64 + -16;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r31,28(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
loc_8226F34C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8226f368
	if (ctx.cr6.eq) goto loc_8226F368;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8226f36c
	if (!ctx.cr6.eq) goto loc_8226F36C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8226f34c
	goto loc_8226F34C;
loc_8226F368:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8226F36C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226f39c
	if (!ctx.cr0.eq) goto loc_8226F39C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8226f39c
	if (ctx.cr0.eq) goto loc_8226F39C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8226f3a8
	if (!ctx.cr6.gt) goto loc_8226F3A8;
loc_8226F39C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fade8
	ctx.lr = 0x8226F3A8;
	sub_822FADE8(ctx, base);
loc_8226F3A8:
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
	// b 0x8226f3d8
	goto loc_8226F3D8;
loc_8226F3C4:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226f3e0
	if (!ctx.cr0.eq) goto loc_8226F3E0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8226F3D8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8226f228
	if (!ctx.cr6.eq) goto loc_8226F228;
loc_8226F3E0:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8226f458
	if (!ctx.cr0.eq) goto loc_8226F458;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226f458
	if (ctx.cr0.eq) goto loc_8226F458;
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
	// bne 0x8226f228
	if (!ctx.cr0.eq) goto loc_8226F228;
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
	ctx.lr = 0x8226F454;
	sub_8225B140(ctx, base);
	// b 0x8226f228
	goto loc_8226F228;
loc_8226F458:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8226F45C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227A860) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// not r10,r9
	ctx.r10.u64 = ~ctx.r9.u64;
	// clrlwi r7,r11,27
	ctx.r7.u64 = ctx.r11.u32 & 0x1F;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// slw r4,r6,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// bne 0x8227a884
	if (!ctx.cr0.eq) goto loc_8227A884;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
loc_8227A884:
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x8227a898
	if (ctx.cr6.eq) goto loc_8227A898;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
loc_8227A898:
	// addi r10,r5,1
	ctx.r10.s64 = ctx.r5.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subfic r11,r7,32
	ctx.xer.ca = ctx.r7.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r7.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// srw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8227B858) {
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
	// rlwinm r4,r4,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi r6,r30,28
	ctx.r6.u64 = ctx.r30.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8227a8d0
	ctx.lr = 0x8227B888;
	sub_8227A8D0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227aeb8
	ctx.lr = 0x8227B898;
	sub_8227AEB8(ctx, base);
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

DEFINE_REX_FUNC(sub_8227BFA0) {
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
	// rlwinm r4,r4,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8227a7d0
	ctx.lr = 0x8227BFCC;
	sub_8227A7D0(ctx, base);
	// and r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 & ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227bff0
	if (ctx.cr0.eq) goto loc_8227BFF0;
	// rlwimi r11,r31,0,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,30,2,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFC;
	// clrlwi r6,r11,28
	ctx.r6.u64 = ctx.r11.u32 & 0xF;
	// addi r5,r4,3
	ctx.r5.s64 = ctx.r4.s64 + 3;
	// bl 0x8227a8d0
	ctx.lr = 0x8227BFF0;
	sub_8227A8D0(ctx, base);
loc_8227BFF0:
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

DEFINE_REX_FUNC(sub_8227FCF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x8227FD00;
	__savegprlr_17(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r22,0
	ctx.r22.s64 = 0;
loc_8227FD24:
	// stw r18,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r18.u32);
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 792);
	// std r22,8(r30)
	REX_STORE_U64(ctx.r30.u32 + 8, ctx.r22.u64);
	// std r22,16(r30)
	REX_STORE_U64(ctx.r30.u32 + 16, ctx.r22.u64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,24(r30)
	REX_STORE_U64(ctx.r30.u32 + 24, ctx.r22.u64);
	// std r22,32(r30)
	REX_STORE_U64(ctx.r30.u32 + 32, ctx.r22.u64);
	// bne cr6,0x8227fd4c
	if (!ctx.cr6.eq) goto loc_8227FD4C;
	// li r11,32
	ctx.r11.s64 = 32;
loc_8227FD4C:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x8227fd64
	if (!ctx.cr6.lt) goto loc_8227FD64;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82278830
	ctx.lr = 0x8227FD64;
	sub_82278830(ctx, base);
loc_8227FD64:
	// ld r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 8);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ld r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + 16);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// ld r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r29.u32 + 24);
	// ld r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r29.u32 + 32);
	// std r11,0(r31)
	REX_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// std r10,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// std r9,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// bne 0x8227fd24
	if (!ctx.cr0.eq) goto loc_8227FD24;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r19,2
	ctx.r19.s64 = 2;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_8227FDA8:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// slw r29,r20,r25
	ctx.r29.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r25.u8 & 0x3F));
	// rlwinm r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// and. r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822800f4
	if (!ctx.cr0.eq) goto loc_822800F4;
	// lwz r30,4(r24)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
loc_8227FDCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227fe5c
	if (ctx.cr6.eq) goto loc_8227FE5C;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8227fe54
	if (ctx.cr6.eq) goto loc_8227FE54;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r8,r7,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8227fe54
	if (ctx.cr0.eq) goto loc_8227FE54;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8227fe24
	if (ctx.cr6.eq) goto loc_8227FE24;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_8227FE00:
	// rlwinm r6,r7,27,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// or r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 | ctx.r9.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8227fe00
	if (ctx.cr6.lt) goto loc_8227FE00;
loc_8227FE24:
	// and. r11,r9,r29
	ctx.r11.u64 = ctx.r9.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fe54
	if (ctx.cr0.eq) goto loc_8227FE54;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8227fe50
	if (ctx.cr6.eq) goto loc_8227FE50;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8227fe54
	if (ctx.cr6.eq) goto loc_8227FE54;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227ac20
	ctx.lr = 0x8227FE48;
	sub_8227AC20(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fe54
	if (ctx.cr0.eq) goto loc_8227FE54;
loc_8227FE50:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_8227FE54:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8227fdcc
	goto loc_8227FDCC;
loc_8227FE5C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822800f4
	if (ctx.cr6.eq) goto loc_822800F4;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8227FE68:
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227ff9c
	if (!ctx.cr0.eq) goto loc_8227FF9C;
	// rlwinm r11,r8,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x8227ff9c
	if (ctx.cr6.eq) goto loc_8227FF9C;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8227FE88:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ff9c
	if (ctx.cr6.eq) goto loc_8227FF9C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8227fea8
	if (ctx.cr6.eq) goto loc_8227FEA8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r9,0,4,6
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x8227feb0
	if (!ctx.cr0.eq) goto loc_8227FEB0;
loc_8227FEA8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8227fe88
	goto loc_8227FE88;
loc_8227FEB0:
	// rlwinm. r11,r9,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fec4
	if (ctx.cr0.eq) goto loc_8227FEC4;
	// rlwimi r8,r9,20,19,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r8,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0xFFF;
	// b 0x8227ff94
	goto loc_8227FF94;
loc_8227FEC4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8227FEC8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ff00
	if (ctx.cr6.eq) goto loc_8227FF00;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8227fef8
	if (ctx.cr6.eq) goto loc_8227FEF8;
	// lwz r9,8(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8227fef8
	if (!ctx.cr6.eq) goto loc_8227FEF8;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8227ff04
	if (!ctx.cr0.eq) goto loc_8227FF04;
loc_8227FEF8:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8227fec8
	goto loc_8227FEC8;
loc_8227FF00:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_8227FF04:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8227ff9c
	if (ctx.cr6.eq) goto loc_8227FF9C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227ff24
	if (ctx.cr6.eq) goto loc_8227FF24;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8227ff2c
	if (!ctx.cr0.eq) goto loc_8227FF2C;
loc_8227FF24:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8227ff04
	goto loc_8227FF04;
loc_8227FF2C:
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227ff9c
	if (ctx.cr0.eq) goto loc_8227FF9C;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// rlwinm r4,r10,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// rlwinm r11,r4,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFC;
	// rlwinm r10,r4,24,8,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFFFFFF;
	// addi r5,r11,3
	ctx.r5.s64 = ctx.r11.s64 + 3;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r19,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r9,r3,r9
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + ctx.r9.u32);
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r5,r21,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r11.u8 & 0x7F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8227f9a0
	ctx.lr = 0x8227FF90;
	sub_8227F9A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8227FF94:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82278a58
	ctx.lr = 0x8227FF9C;
	sub_82278A58(ctx, base);
loc_8227FF9C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82280028
	if (ctx.cr6.eq) goto loc_82280028;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// beq cr6,0x82280004
	if (ctx.cr6.eq) goto loc_82280004;
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
loc_8227FFB8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82280004
	if (ctx.cr6.eq) goto loc_82280004;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fffc
	if (ctx.cr0.eq) goto loc_8227FFFC;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fffc
	if (ctx.cr0.eq) goto loc_8227FFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226db28
	ctx.lr = 0x8227FFDC;
	sub_8226DB28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fffc
	if (ctx.cr0.eq) goto loc_8227FFFC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x822789f8
	ctx.lr = 0x8227FFFC;
	sub_822789F8(ctx, base);
loc_8227FFFC:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8227ffb8
	goto loc_8227FFB8;
loc_82280004:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228001c
	if (ctx.cr0.eq) goto loc_8228001C;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x8227fe68
	goto loc_8227FE68;
loc_8228001C:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	ctx.r29.s64 = ctx.r11.s64 + -40;
	// b 0x8227fe68
	goto loc_8227FE68;
loc_82280028:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
loc_8228002C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82280078
	if (ctx.cr6.eq) goto loc_82280078;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280070
	if (ctx.cr0.eq) goto loc_82280070;
	// rlwinm. r11,r30,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280070
	if (ctx.cr0.eq) goto loc_82280070;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226db28
	ctx.lr = 0x82280050;
	sub_8226DB28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280070
	if (ctx.cr0.eq) goto loc_82280070;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r11,r30,20,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r4,r11,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFFF;
	// bl 0x822789f8
	ctx.lr = 0x82280070;
	sub_822789F8(ctx, base);
loc_82280070:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x8228002c
	goto loc_8228002C;
loc_82280078:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82280090
	if (ctx.cr0.eq) goto loc_82280090;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// b 0x82280098
	goto loc_82280098;
loc_82280090:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r29,r11,-40
	ctx.r29.s64 = ctx.r11.s64 + -40;
loc_82280098:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x822800f4
	if (ctx.cr6.eq) goto loc_822800F4;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm. r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82280028
	if (!ctx.cr0.eq) goto loc_82280028;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_822800B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82280028
	if (ctx.cr6.eq) goto loc_82280028;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822800d0
	if (ctx.cr6.eq) goto loc_822800D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x822800d8
	if (!ctx.cr0.eq) goto loc_822800D8;
loc_822800D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822800b0
	goto loc_822800B0;
loc_822800D8:
	// rlwinm. r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280028
	if (ctx.cr0.eq) goto loc_82280028;
	// rlwimi r9,r10,20,19,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1FE0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// rlwinm r4,r9,31,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xFFF;
	// bl 0x822789f8
	ctx.lr = 0x822800F0;
	sub_822789F8(ctx, base);
	// b 0x82280028
	goto loc_82280028;
loc_822800F4:
	// addi r26,r26,5
	ctx.r26.s64 = ctx.r26.s64 + 5;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// cmplwi cr6,r26,20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 20, ctx.xer);
	// blt cr6,0x8227fda8
	if (ctx.cr6.lt) goto loc_8227FDA8;
	// addi r10,r1,152
	ctx.r10.s64 = ctx.r1.s64 + 152;
	// stw r18,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r18.u32);
	// lwz r11,792(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r22.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r22.u64);
	// std r22,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r22.u64);
	// std r22,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r22.u64);
	// bne cr6,0x82280130
	if (!ctx.cr6.eq) goto loc_82280130;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82280130:
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82280148
	if (!ctx.cr6.lt) goto loc_82280148;
	// subfic r5,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82278830
	ctx.lr = 0x82280148;
	sub_82278830(ctx, base);
loc_82280148:
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// lwz r6,8(r24)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// rlwinm r26,r6,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// std r21,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r21.u64);
	// std r21,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r21.u64);
loc_8228016C:
	// slw r11,r20,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822801b0
	if (ctx.cr0.eq) goto loc_822801B0;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8228018C:
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ld r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ldx r9,r9,r4
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r4.u32);
	// and r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 & ctx.r5.u64;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	REX_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x8228018c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228018C;
loc_822801B0:
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r8,20
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 20, ctx.xer);
	// blt cr6,0x8228016c
	if (ctx.cr6.lt) goto loc_8228016C;
	// rlwinm r25,r6,18,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0x7;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8227fb90
	ctx.lr = 0x822801D8;
	sub_8227FB90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82280454
	if (ctx.cr6.eq) goto loc_82280454;
	// clrlwi r27,r26,28
	ctx.r27.u64 = ctx.r26.u32 & 0xF;
loc_822801E4:
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r28,r3,28,4,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 28) & 0xFFFFFFF;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82280200:
	// slw r9,r20,r6
	ctx.r9.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & ctx.r26.u64;
	// clrlwi. r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82280294
	if (ctx.cr0.eq) goto loc_82280294;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r28,28,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x3FFFFFF;
	// addi r5,r9,3
	ctx.r5.s64 = ctx.r9.s64 + 3;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// clrldi r5,r5,58
	ctx.r5.u64 = ctx.r5.u64 & 0x3F;
	// rlwinm r4,r7,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// sld r7,r19,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r19.u64 << (ctx.r5.u8 & 0x7F));
	// ldx r5,r4,r3
	ctx.r5.u64 = REX_LOAD_U64(ctx.r4.u32 + ctx.r3.u32);
	// clrldi r9,r9,58
	ctx.r9.u64 = ctx.r9.u64 & 0x3F;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// sld r4,r21,r9
	ctx.r4.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r9.u8 & 0x7F));
	// and r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 & ctx.r5.u64;
	// lis r5,-28311
	ctx.r5.s64 = -1855389696;
	// and r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 & ctx.r4.u64;
	// lis r4,0
	ctx.r4.s64 = 0;
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// ori r5,r5,5192
	ctx.r5.u64 = ctx.r5.u64 | 5192;
	// ori r4,r4,36262
	ctx.r4.u64 = ctx.r4.u64 | 36262;
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// rldimi r5,r4,32,0
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r5.u64 & 0xFFFFFFFF);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// srd r5,r5,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r9.u8 & 0x7F));
	// stwx r9,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// clrlwi r9,r5,29
	ctx.r9.u64 = ctx.r5.u32 & 0x7;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_82280294:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,5
	ctx.r8.s64 = ctx.r8.s64 + 5;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82280200
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82280200;
	// stw r22,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stw r22,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// stw r22,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
loc_822802BC:
	// slw r11,r20,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// and r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 & ctx.r26.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280304
	if (ctx.cr0.eq) goto loc_82280304;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,0(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_822802E0:
	// slw r10,r20,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822802f8
	if (ctx.cr0.eq) goto loc_822802F8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822802F8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x822802e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822802E0;
loc_82280304:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplwi cr6,r6,4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 4, ctx.xer);
	// blt cr6,0x822802bc
	if (ctx.cr6.lt) goto loc_822802BC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82280320:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82280338:
	// slw r10,r20,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82280358
	if (ctx.cr0.eq) goto loc_82280358;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82280358
	if (!ctx.cr6.lt) goto loc_82280358;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82280358:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82280338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82280338;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228045c
	if (ctx.cr6.eq) goto loc_8228045C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r7,5
	ctx.r7.s64 = 5;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwzx r4,r9,r6
	ctx.r4.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82280390:
	// slw r5,r20,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822803b0
	if (ctx.cr0.eq) goto loc_822803B0;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x822803b0
	if (!ctx.cr6.lt) goto loc_822803B0;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_822803B0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bdnz 0x82280390
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82280390;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228047c
	if (ctx.cr6.eq) goto loc_8228047C;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8228047c
	if (ctx.cr6.eq) goto loc_8228047C;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r8,r9,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r11,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r8.u8 & 0x3F));
	// stwx r22,r5,r6
	REX_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r22.u32);
	// andc r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r7.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// or r30,r7,r8
	ctx.r30.u64 = ctx.r7.u64 | ctx.r8.u64;
loc_82280410:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwzx r8,r11,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// and. r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82280438
	if (ctx.cr0.eq) goto loc_82280438;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// subf r8,r10,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r10.u64;
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
loc_82280438:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82280410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82280410;
	// slw r11,r20,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r31.u8 & 0x3F));
	// subf. r29,r11,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82280320
	if (!ctx.cr0.eq) goto loc_82280320;
	// stw r30,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r30.u32);
	// rlwimi r3,r28,4,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
loc_82280454:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_8228045C:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r28,1
	ctx.r4.s64 = ctx.r28.s64 + 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8227fb90
	ctx.lr = 0x82280470;
	sub_8227FB90(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822801e4
	if (!ctx.cr6.eq) goto loc_822801E4;
	// b 0x82280454
	goto loc_82280454;
loc_8228047C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82280488;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822A45A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822A45B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,-1
	ctx.r27.s64 = -1;
	// beq 0x822a4628
	if (ctx.cr0.eq) goto loc_822A4628;
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// beq cr6,0x822a4600
	if (ctx.cr6.eq) goto loc_822A4600;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x822a4604
	if (!ctx.cr6.eq) goto loc_822A4604;
loc_822A4600:
	// li r10,1
	ctx.r10.s64 = 1;
loc_822A4604:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a4614
	if (ctx.cr0.eq) goto loc_822A4614;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_822A4614:
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4628
	if (ctx.cr0.eq) goto loc_822A4628;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82280d78
	ctx.lr = 0x822A4624;
	sub_82280D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822A4628:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a4694
	if (ctx.cr0.eq) goto loc_822A4694;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x822a4654
	if (ctx.cr6.eq) goto loc_822A4654;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822a4658
	if (!ctx.cr6.eq) goto loc_822A4658;
loc_822A4654:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A4658:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4668
	if (ctx.cr0.eq) goto loc_822A4668;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 & ctx.r27.u64;
loc_822A4668:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4694
	if (ctx.cr0.eq) goto loc_822A4694;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82280d78
	ctx.lr = 0x822A4678;
	sub_82280D78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a4690
	if (ctx.cr6.eq) goto loc_822A4690;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822a4690
	if (ctx.cr6.eq) goto loc_822A4690;
loc_822A4688:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a4710
	goto loc_822A4710;
loc_822A4690:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822A4694:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822a46f8
	if (ctx.cr0.eq) goto loc_822A46F8;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x822a46c0
	if (ctx.cr6.eq) goto loc_822A46C0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822a46c4
	if (!ctx.cr6.eq) goto loc_822A46C4;
loc_822A46C0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_822A46C4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a46d4
	if (ctx.cr0.eq) goto loc_822A46D4;
	// or r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 | ctx.r28.u64;
	// and r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 & ctx.r27.u64;
loc_822A46D4:
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a46f8
	if (ctx.cr0.eq) goto loc_822A46F8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82280d78
	ctx.lr = 0x822A46E4;
	sub_82280D78(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822a46f4
	if (ctx.cr6.eq) goto loc_822A46F4;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822a4688
	if (!ctx.cr6.eq) goto loc_822A4688;
loc_822A46F4:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822A46F8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822a4708
	if (ctx.cr6.eq) goto loc_822A4708;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822a4688
	if (!ctx.cr6.eq) goto loc_822A4688;
loc_822A4708:
	// stw r30,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822A4710:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A7078) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x822A7080;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822A70B0;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822a70d4
	if (ctx.cr6.eq) goto loc_822A70D4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822A70D0;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A70D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822A70DC;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822a7100
	if (ctx.cr6.eq) goto loc_822A7100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822A70FC;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A7100:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822A7108;
	sub_82281428(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x822761f8
	ctx.lr = 0x822A7138;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A7F00) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x822a7f64
	if (!ctx.cr6.eq) goto loc_822A7F64;
	// li r4,48
	ctx.r4.s64 = 48;
	// bl 0x8226e2d8
	ctx.lr = 0x822A7F30;
	sub_8226E2D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r8,r31,1
	ctx.r8.u64 = ctx.r31.u64 | 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// b 0x822a7f84
	goto loc_822A7F84;
loc_822A7F64:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a7f78
	if (ctx.cr0.eq) goto loc_822A7F78;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a7f84
	goto loc_822A7F84;
loc_822A7F78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_822A7F84:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r30.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_822AD2E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x822AD2E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x822AD308;
	sub_8226DBE8(ctx, base);
	// addi r24,r3,4
	ctx.r24.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r24,1
	ctx.r10.u64 = ctx.r24.u64 | 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_822AD320:
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r28,r29,44
	ctx.r28.s64 = ctx.r29.s64 + 44;
loc_822AD328:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x822ad494
	if (!ctx.cr6.lt) goto loc_822AD494;
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,28(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232c520
	ctx.lr = 0x822AD360;
	sub_8232C520(ctx, base);
	// lwz r4,88(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x822ad3fc
	if (!ctx.cr6.eq) goto loc_822AD3FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822ad38c
	if (!ctx.cr6.eq) goto loc_822AD38C;
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// b 0x822ad3a0
	goto loc_822AD3A0;
loc_822AD38C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x822813c8
	ctx.lr = 0x822AD39C;
	sub_822813C8(ctx, base);
	// stw r3,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
loc_822AD3A0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ad3d0
	if (!ctx.cr0.eq) goto loc_822AD3D0;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ad3d0
	if (ctx.cr0.eq) goto loc_822AD3D0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822ad3dc
	if (!ctx.cr6.gt) goto loc_822AD3DC;
loc_822AD3D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822facd8
	ctx.lr = 0x822AD3DC;
	sub_822FACD8(ctx, base);
loc_822AD3DC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// ld r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stdx r10,r11,r3
	REX_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// b 0x822ad488
	goto loc_822AD488;
loc_822AD3FC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822ad488
	if (!ctx.cr6.eq) goto loc_822AD488;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822ad488
	if (!ctx.cr6.eq) goto loc_822AD488;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x822ad424
	if (!ctx.cr6.eq) goto loc_822AD424;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822ad434
	if (ctx.cr6.eq) goto loc_822AD434;
loc_822AD424:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82281370
	ctx.lr = 0x822AD430;
	sub_82281370(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_822AD434:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ad464
	if (!ctx.cr0.eq) goto loc_822AD464;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822ad464
	if (ctx.cr0.eq) goto loc_822AD464;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822ad470
	if (!ctx.cr6.gt) goto loc_822AD470;
loc_822AD464:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fade8
	ctx.lr = 0x822AD470;
	sub_822FADE8(ctx, base);
loc_822AD470:
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
loc_822AD488:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// b 0x822ad328
	goto loc_822AD328;
loc_822AD494:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822ad55c
	if (!ctx.cr0.eq) goto loc_822AD55C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822ad55c
	if (ctx.cr0.eq) goto loc_822AD55C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
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
	// bne 0x822ad508
	if (!ctx.cr0.eq) goto loc_822AD508;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x822AD508;
	sub_8225B140(ctx, base);
loc_822AD508:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,12(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r25,r11,27,30,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822ad320
	if (!ctx.cr6.eq) goto loc_822AD320;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// b 0x822ad534
	goto loc_822AD534;
loc_822AD52C:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822AD534:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822ad52c
	if (!ctx.cr6.eq) goto loc_822AD52C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r6,26
	ctx.r6.s64 = 26;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bl 0x8226df90
	ctx.lr = 0x822AD558;
	sub_8226DF90(ctx, base);
	// b 0x822ad320
	goto loc_822AD320;
loc_822AD55C:
	// lwz r10,976(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 976);
	// addi r11,r26,972
	ctx.r11.s64 = ctx.r26.s64 + 972;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,976(r26)
	REX_STORE_U32(ctx.r26.u32 + 976, ctx.r30.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B9438) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822B9440;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,793
	ctx.r4.s64 = 793;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x822a4318
	ctx.lr = 0x822B9460;
	sub_822A4318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b9488
	if (ctx.cr0.eq) goto loc_822B9488;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822af8a0
	ctx.lr = 0x822B9484;
	sub_822AF8A0(ctx, base);
	// b 0x822b948c
	goto loc_822B948C;
loc_822B9488:
	// li r3,3
	ctx.r3.s64 = 3;
loc_822B948C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822B9E90) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822B9E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9f08
	if (!ctx.cr0.eq) goto loc_822B9F08;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x822b9148
	ctx.lr = 0x822B9EC0;
	sub_822B9148(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822b9f08
	if (ctx.cr0.eq) goto loc_822B9F08;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9f08
	if (!ctx.cr0.eq) goto loc_822B9F08;
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r30,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x822a4de0
	ctx.lr = 0x822B9EEC;
	sub_822A4DE0(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// or r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 | ctx.r31.u64;
	// lwzx r3,r11,r27
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x822a7f00
	ctx.lr = 0x822B9EFC;
	sub_822A7F00(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822B9F08:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BF4D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822BF4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,8(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r8,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822bf56c
	if (ctx.cr0.eq) goto loc_822BF56C;
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r31,r4,44
	ctx.r31.s64 = ctx.r4.s64 + 44;
	// rlwinm r30,r10,13,29,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_822BF500:
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r6,12(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// beq cr6,0x822bf538
	if (ctx.cr6.eq) goto loc_822BF538;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_822BF518:
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822bf538
	if (ctx.cr6.eq) goto loc_822BF538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822bf518
	if (ctx.cr6.lt) goto loc_822BF518;
loc_822BF538:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822bf54c
	if (!ctx.cr6.eq) goto loc_822BF54C;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r10,r10,18,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
loc_822BF54C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x822bf500
	if (ctx.cr6.lt) goto loc_822BF500;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x822bf56c
	if (!ctx.cr6.gt) goto loc_822BF56C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822BF56C;
	sub_8225B1A0(ctx, base);
loc_822BF56C:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwimi r11,r5,13,16,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xE000) | (ctx.r11.u64 & 0xFFFFFFFFFFFF1FFF);
	// rlwimi r8,r11,1,27,30
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1E) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r8,r11,1,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r8,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BFEF8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822BFF00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822BFF28;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822bff4c
	if (ctx.cr6.eq) goto loc_822BFF4C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822BFF48;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822BFF4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822BFF54;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x822bff78
	if (ctx.cr6.eq) goto loc_822BFF78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822BFF74;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822BFF78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822BFF80;
	sub_82281428(ctx, base);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r30,24
	ctx.r10.s64 = ctx.r30.s64 + 24;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,7,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	// rlwimi r8,r9,14,15,17
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x1C000) | (ctx.r8.u64 & 0xFFFFFFFFFFFE3FFF);
	// addi r9,r11,-36
	ctx.r9.s64 = ctx.r11.s64 + -36;
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// ori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 1;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,24(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C60F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_822C60FC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x822c6114
	if (ctx.cr6.eq) goto loc_822C6114;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c60fc
	if (!ctx.cr6.eq) goto loc_822C60FC;
loc_822C6114:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// lis r8,32640
	ctx.r8.s64 = 2139095040;
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfs f13,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,5
	ctx.r10.s64 = ctx.r4.s64 + 5;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f0,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.f0.u64);
	// stfdx f13,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.f13.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C6728) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,16000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16000, ctx.xer);
	// bne cr6,0x822c6778
	if (!ctx.cr6.eq) goto loc_822C6778;
	// rlwinm r10,r3,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,148(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm. r10,r10,18,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c6760
	if (!ctx.cr0.eq) goto loc_822C6760;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_822C6760:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,30,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_822C6778:
	// rlwinm. r10,r10,0,7,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lhz r11,14(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// rlwinm r10,r4,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFC;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822C77C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822C77D0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r10,1664
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1664, ctx.xer);
	// beq cr6,0x822c77fc
	if (ctx.cr6.eq) goto loc_822C77FC;
loc_822C77F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822c7978
	goto loc_822C7978;
loc_822C77FC:
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822c77f4
	if (!ctx.cr0.eq) goto loc_822C77F4;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c77f4
	if (!ctx.cr0.eq) goto loc_822C77F4;
	// rlwinm r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822c77f4
	if (!ctx.cr6.eq) goto loc_822C77F4;
	// lwz r24,48(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822c77f4
	if (!ctx.cr0.eq) goto loc_822C77F4;
	// lwz r27,12(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822c78bc
	if (ctx.cr6.eq) goto loc_822C78BC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x822c77f4
	if (!ctx.cr6.eq) goto loc_822C77F4;
	// lwz r11,44(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822c77f4
	if (!ctx.cr6.eq) goto loc_822C77F4;
	// lwz r11,48(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822c77f4
	if (!ctx.cr6.eq) goto loc_822C77F4;
	// rlwinm r4,r10,27,30,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// bl 0x822c6038
	ctx.lr = 0x822C7884;
	sub_822C6038(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x822c77f4
	if (ctx.cr6.gt) goto loc_822C77F4;
	// fneg f0,f1
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fctidz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// std r28,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r28.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822c77f4
	if (!ctx.cr6.eq) goto loc_822C77F4;
loc_822C78BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x822c78e0
	goto loc_822C78E0;
loc_822C78C8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822c77f4
	if (ctx.cr6.eq) goto loc_822C77F4;
	// ble cr6,0x822c78dc
	if (!ctx.cr6.gt) goto loc_822C78DC;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
loc_822C78DC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822C78E0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c78c8
	if (!ctx.cr6.eq) goto loc_822C78C8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,12
	ctx.r4.s64 = 12;
	// oris r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 67108864;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8226dbe8
	ctx.lr = 0x822C7904;
	sub_8226DBE8(ctx, base);
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// bne cr6,0x822c7934
	if (!ctx.cr6.eq) goto loc_822C7934;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_822C7934:
	// lwz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// bne cr6,0x822c795c
	if (!ctx.cr6.eq) goto loc_822C795C;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwimi r10,r11,0,0,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000) | (ctx.r10.u64 & 0xFFFFFFFF00001FFF);
	// stw r10,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r10.u32);
	// b 0x822c7978
	goto loc_822C7978;
loc_822C795C:
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// bne cr6,0x822c7978
	if (!ctx.cr6.eq) goto loc_822C7978;
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r11,r10,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000;
	// addi r11,r11,8192
	ctx.r11.s64 = ctx.r11.s64 + 8192;
	// rlwimi r11,r10,0,19,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC001FFF) | (ctx.r11.u64 & 0x3FFE000);
	// stw r11,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
loc_822C7978:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CA9E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CA9F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CAA1C;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822caa40
	if (ctx.cr6.eq) goto loc_822CAA40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CAA3C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CAA40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CAA48;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822761f8
	ctx.lr = 0x822CAA60;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CB390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x822CB398;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CB3C8;
	sub_8232D9E0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB3D8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB3E4;
	sub_82281428(ctx, base);
	// stw r3,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB3F4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB400;
	sub_82281428(ctx, base);
	// lwz r11,44(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// stw r3,48(r26)
	REX_STORE_U32(ctx.r26.u32 + 48, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r10.u32);
	// bl 0x822761f8
	ctx.lr = 0x822CB430;
	sub_822761F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CEA68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822CEA70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// b 0x822ceaec
	goto loc_822CEAEC;
loc_822CEA98:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822ceadc
	if (!ctx.cr6.eq) goto loc_822CEADC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82276288
	ctx.lr = 0x822CEAAC;
	sub_82276288(ctx, base);
	// stw r31,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// ori r9,r30,1
	ctx.r9.u64 = ctx.r30.u64 | 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_822CEADC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822ceaf4
	if (!ctx.cr0.eq) goto loc_822CEAF4;
loc_822CEAEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822cea98
	if (!ctx.cr6.eq) goto loc_822CEA98;
loc_822CEAF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D0460) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822D0468;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,44(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// rlwinm. r11,r10,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d04a4
	if (ctx.cr0.eq) goto loc_822D04A4;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d04a4
	if (ctx.cr6.eq) goto loc_822D04A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne 0x822d04a8
	if (!ctx.cr0.eq) goto loc_822D04A8;
loc_822D04A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D04A8:
	// rlwinm. r9,r10,0,7,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x822d04e0
	if (ctx.cr0.eq) goto loc_822D04E0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d04d0
	if (ctx.cr6.eq) goto loc_822D04D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne 0x822d04d4
	if (!ctx.cr0.eq) goto loc_822D04D4;
loc_822D04D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D04D4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne 0x822d04e4
	if (!ctx.cr0.eq) goto loc_822D04E4;
loc_822D04E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D04E4:
	// clrlwi. r22,r10,24
	ctx.r22.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// clrlwi r20,r11,24
	ctx.r20.u64 = ctx.r11.u32 & 0xFF;
	// bne 0x822d04fc
	if (!ctx.cr0.eq) goto loc_822D04FC;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x822d0500
	if (ctx.cr0.eq) goto loc_822D0500;
loc_822D04FC:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_822D0500:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// clrlwi r23,r11,24
	ctx.r23.u64 = ctx.r11.u32 & 0xFF;
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// rlwinm r11,r10,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822d0538
	if (!ctx.cr6.eq) goto loc_822D0538;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,18
	ctx.r4.s64 = 18;
	// addi r6,r11,7304
	ctx.r6.s64 = ctx.r11.s64 + 7304;
	// b 0x822d0544
	goto loc_822D0544;
loc_822D0538:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r6,r11,7296
	ctx.r6.s64 = ctx.r11.s64 + 7296;
loc_822D0544:
	// bl 0x82333780
	ctx.lr = 0x822D0548;
	sub_82333780(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822d0584
	if (!ctx.cr6.eq) goto loc_822D0584;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// addi r6,r11,-12764
	ctx.r6.s64 = ctx.r11.s64 + -12764;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333780
	ctx.lr = 0x822D0580;
	sub_82333780(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
loc_822D0584:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// bne cr6,0x822d0594
	if (!ctx.cr6.eq) goto loc_822D0594;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822d0994
	if (ctx.cr6.eq) goto loc_822D0994;
loc_822D0594:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d0994
	if (!ctx.cr0.eq) goto loc_822D0994;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d0994
	if (ctx.cr0.eq) goto loc_822D0994;
	// li r24,57
	ctx.r24.s64 = 57;
loc_822D05B0:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d05cc
	if (ctx.cr0.eq) goto loc_822D05CC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d05d8
	if (!ctx.cr0.eq) goto loc_822D05D8;
loc_822D05CC:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0790
	if (ctx.cr0.eq) goto loc_822D0790;
loc_822D05D8:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x822D05E4;
	sub_8232DA88(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x822d0620
	if (!ctx.cr6.eq) goto loc_822D0620;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x822D060C;
	sub_8232DA88(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x822D061C;
	sub_8232DA88(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_822D0620:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x822d066c
	goto loc_822D066C;
loc_822D062C:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0648
	if (ctx.cr6.eq) goto loc_822D0648;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x822d064c
	if (!ctx.cr6.eq) goto loc_822D064C;
loc_822D0648:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D064C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d097c
	if (!ctx.cr0.eq) goto loc_822D097C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d0988
	if (ctx.cr6.eq) goto loc_822D0988;
	// lwz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822d0988
	if (ctx.cr6.eq) goto loc_822D0988;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
loc_822D066C:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d062c
	if (ctx.cr0.eq) goto loc_822D062C;
	// addi r29,r30,24
	ctx.r29.s64 = ctx.r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D0694;
	sub_8232D9E0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D06A8;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82281428
	ctx.lr = 0x822D06B4;
	sub_82281428(ctx, base);
	// stw r3,44(r21)
	REX_STORE_U32(ctx.r21.u32 + 44, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D06C4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82281428
	ctx.lr = 0x822D06D0;
	sub_82281428(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d0958
	if (!ctx.cr6.eq) goto loc_822D0958;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822d0958
	if (ctx.cr6.eq) goto loc_822D0958;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D0714;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0724;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D073C;
	sub_82280D20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r24,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D0754;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0768;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0774;
	sub_82281428(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0784;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x822d0954
	goto loc_822D0954;
loc_822D0790:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0958
	if (ctx.cr0.eq) goto loc_822D0958;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d0958
	if (!ctx.cr0.eq) goto loc_822D0958;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0958
	if (ctx.cr0.eq) goto loc_822D0958;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x822d0958
	if (!ctx.cr6.eq) goto loc_822D0958;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d07dc
	if (ctx.cr6.eq) goto loc_822D07DC;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822D07DC:
	// addi r28,r30,24
	ctx.r28.s64 = ctx.r30.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D07FC;
	sub_8232D9E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0810;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82281428
	ctx.lr = 0x822D081C;
	sub_82281428(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r3.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d08ac
	if (!ctx.cr6.eq) goto loc_822D08AC;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822d08ac
	if (ctx.cr6.eq) goto loc_822D08AC;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,104
	ctx.r6.s64 = 104;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D0868;
	sub_8232D9E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0878;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D0890;
	sub_82280D20(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwimi r11,r24,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D08A8;
	sub_82281428(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
loc_822D08AC:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d0958
	if (!ctx.cr0.eq) goto loc_822D0958;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// addi r5,r25,24
	ctx.r5.s64 = ctx.r25.s64 + 24;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D08D0;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x8226d728
	ctx.lr = 0x822D08F4;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r18,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
	// ori r10,r10,7
	ctx.r10.u64 = ctx.r10.u64 | 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82281260
	ctx.lr = 0x822D0918;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0924;
	sub_82281428(ctx, base);
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d0958
	if (!ctx.cr6.eq) goto loc_822D0958;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822d0958
	if (ctx.cr6.eq) goto loc_822D0958;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D094C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_822D0954:
	// bl 0x82281428
	ctx.lr = 0x822D0958;
	sub_82281428(ctx, base);
loc_822D0958:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d0994
	if (!ctx.cr0.eq) goto loc_822D0994;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0994
	if (ctx.cr6.eq) goto loc_822D0994;
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// b 0x822d05b0
	goto loc_822D05B0;
loc_822D097C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D0988;
	sub_8225B1A0(ctx, base);
loc_822D0988:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D0994;
	sub_8225B1A0(ctx, base);
loc_822D0994:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1d78
	if (ctx.cr0.eq) goto loc_822D1D78;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r19,40
	ctx.r19.s64 = 40;
	// li r15,0
	ctx.r15.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822d0a74
	if (ctx.cr6.eq) goto loc_822D0A74;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,7272
	ctx.r6.s64 = ctx.r11.s64 + 7272;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e7a8
	ctx.lr = 0x822D09C8;
	sub_8232E7A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r11,r18,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// rlwimi r11,r18,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r8,56(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 56);
	// rlwimi r10,r8,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r18,1,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r10,r18,2,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r10,r18,3,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x822f6640
	ctx.lr = 0x822D0A50;
	sub_822F6640(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232fd68
	ctx.lr = 0x822D0A70;
	sub_8232FD68(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_822D0A74:
	// clrlwi. r20,r20,24
	ctx.r20.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x822d0b40
	if (ctx.cr0.eq) goto loc_822D0B40;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,7244
	ctx.r6.s64 = ctx.r11.s64 + 7244;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e7a8
	ctx.lr = 0x822D0A94;
	sub_8232E7A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r18,5,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 5) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// rlwimi r10,r18,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r8,58(r8)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r8.u32 + 58);
	// rlwimi r11,r8,20,3,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x1FF00000) | (ctx.r11.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r18,1,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwimi r10,r18,2,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwimi r10,r18,3,28,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 3) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x822f6640
	ctx.lr = 0x822D0B1C;
	sub_822F6640(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232fd68
	ctx.lr = 0x822D0B3C;
	sub_8232FD68(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
loc_822D0B40:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f30.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82333b98
	ctx.lr = 0x822D0B6C;
	sub_82333B98(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822d10f0
	if (ctx.cr6.eq) goto loc_822D10F0;
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d10f0
	if (!ctx.cr0.eq) goto loc_822D10F0;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x822d10f0
	if (ctx.cr0.eq) goto loc_822D10F0;
loc_822D0B90:
	// lwz r11,68(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d10d8
	if (ctx.cr0.eq) goto loc_822D10D8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d0bac
	if (ctx.cr6.eq) goto loc_822D0BAC;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822D0BAC:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1554
	if (!ctx.cr0.eq) goto loc_822D1554;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1554
	if (ctx.cr0.eq) goto loc_822D1554;
loc_822D0BC4:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x822d0c0c
	if (!ctx.cr6.eq) goto loc_822D0C0C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822D0BE8;
	sub_8226D728(ctx, base);
	// addi r11,r22,-16
	ctx.r11.s64 = ctx.r22.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x822d0c0c
	if (!ctx.cr6.eq) goto loc_822D0C0C;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822d0c28
	if (ctx.cr6.eq) goto loc_822D0C28;
loc_822D0C0C:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1554
	if (!ctx.cr0.eq) goto loc_822D1554;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0bc4
	if (!ctx.cr6.eq) goto loc_822D0BC4;
loc_822D0C28:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822d1554
	if (ctx.cr6.eq) goto loc_822D1554;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0c44
	if (ctx.cr0.eq) goto loc_822D0C44;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x822d0c50
	goto loc_822D0C50;
loc_822D0C44:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r23,r11,-40
	ctx.r23.s64 = ctx.r11.s64 + -40;
loc_822D0C50:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r29,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r29.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0ce8
	if (ctx.cr0.eq) goto loc_822D0CE8;
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d0c80
	if (ctx.cr0.eq) goto loc_822D0C80;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x822d0c8c
	goto loc_822D0C8C;
loc_822D0C80:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r26,r11,-40
	ctx.r26.s64 = ctx.r11.s64 + -40;
loc_822D0C8C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d0d58
	if (!ctx.cr6.eq) goto loc_822D0D58;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d0cbc
	if (ctx.cr0.eq) goto loc_822D0CBC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x822d0cc4
	goto loc_822D0CC4;
loc_822D0CBC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r25,r11,-40
	ctx.r25.s64 = ctx.r11.s64 + -40;
loc_822D0CC4:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d0cdc
	if (ctx.cr0.eq) goto loc_822D0CDC;
	// li r26,0
	ctx.r26.s64 = 0;
	// b 0x822d0d58
	goto loc_822D0D58;
loc_822D0CDC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r26,r11,-40
	ctx.r26.s64 = ctx.r11.s64 + -40;
	// b 0x822d0d58
	goto loc_822D0D58;
loc_822D0CE8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d0d58
	if (!ctx.cr6.eq) goto loc_822D0D58;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x822D0D0C;
	sub_8232DA88(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0D20;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0D2C;
	sub_82281428(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232da88
	ctx.lr = 0x822D0D38;
	sub_8232DA88(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0D4C;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0D58;
	sub_82281428(ctx, base);
loc_822D0D58:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd590
	ctx.lr = 0x822D0D68;
	sub_822CD590(ctx, base);
	// addi r28,r29,24
	ctx.r28.s64 = ctx.r29.s64 + 24;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,94
	ctx.r6.s64 = 94;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D0D8C;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822D0DA4;
	sub_8226D728(ctx, base);
	// addi r11,r30,-12
	ctx.r11.s64 = ctx.r30.s64 + -12;
	// li r10,9
	ctx.r10.s64 = 9;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d0dd8
	if (ctx.cr6.eq) goto loc_822D0DD8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D0DD8;
	sub_82281BD8(ctx, base);
loc_822D0DD8:
	// stw r30,100(r29)
	REX_STORE_U32(ctx.r29.u32 + 100, ctx.r30.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D0E04;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0E14;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D0E2C;
	sub_82280D20(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r18,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D0E44;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0E54;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D0E6C;
	sub_82280D20(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D0E84;
	sub_82281428(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0E94;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0EA0;
	sub_82281428(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D0EB0;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,527
	ctx.r5.s64 = 527;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8232f8e8
	ctx.lr = 0x822D0EC8;
	sub_8232F8E8(ctx, base);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// lwz r30,12(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d0ee8
	if (ctx.cr6.eq) goto loc_822D0EE8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D0EE8;
	sub_82281BD8(ctx, base);
loc_822D0EE8:
	// stw r30,100(r29)
	REX_STORE_U32(ctx.r29.u32 + 100, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822D0F0C;
	sub_8226D728(ctx, base);
	// addi r11,r22,-8
	ctx.r11.s64 = ctx.r22.s64 + -8;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82333b98
	ctx.lr = 0x822D0F3C;
	sub_82333B98(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r22,-1
	ctx.r22.s64 = -65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822d0fd4
	if (!ctx.cr6.eq) goto loc_822D0FD4;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x8232db48
	ctx.lr = 0x822D0F68;
	sub_8232DB48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0F7C;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0F88;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0F9C;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0FA8;
	sub_82281428(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0FBC;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0FC8;
	sub_82281428(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x822d1024
	goto loc_822D1024;
loc_822D0FD4:
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x8232db48
	ctx.lr = 0x822D0FDC;
	sub_8232DB48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D0FF0;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D0FFC;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D1010;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D101C;
	sub_82281428(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// li r11,3
	ctx.r11.s64 = 3;
loc_822D1024:
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r30,r11,528
	ctx.r30.u64 = ctx.r11.u64 | 528;
	// bl 0x82281260
	ctx.lr = 0x822D1038;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// bl 0x8232f8e8
	ctx.lr = 0x822D1050;
	sub_8232F8E8(ctx, base);
	// lwz r30,12(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r5,100(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 100);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d107c
	if (ctx.cr6.eq) goto loc_822D107C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D107C;
	sub_82281BD8(ctx, base);
loc_822D107C:
	// stw r30,100(r29)
	REX_STORE_U32(ctx.r29.u32 + 100, ctx.r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822d10c8
	if (!ctx.cr6.eq) goto loc_822D10C8;
	// lwz r5,92(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822d10b8
	if (ctx.cr6.eq) goto loc_822D10B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281bd8
	ctx.lr = 0x822D10B8;
	sub_82281BD8(ctx, base);
loc_822D10B8:
	// stw r30,92(r29)
	REX_STORE_U32(ctx.r29.u32 + 92, ctx.r30.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_822D10C8:
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r14,80(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// oris r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 2097152;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822D10D8:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d10f0
	if (!ctx.cr0.eq) goto loc_822D10F0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822d0b90
	if (!ctx.cr6.eq) goto loc_822D0B90;
loc_822D10F0:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822d1d78
	if (ctx.cr6.eq) goto loc_822D1D78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1120
	if (ctx.cr6.eq) goto loc_822D1120;
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_822D1120:
	// addic r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x823389a8
	ctx.lr = 0x822D1138;
	sub_823389A8(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1148
	if (!ctx.cr6.eq) goto loc_822D1148;
	// stw r18,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r18.u32);
loc_822D1148:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x82276288
	ctx.lr = 0x822D1160;
	sub_82276288(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r30,r3,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x82276288
	ctx.lr = 0x822D11AC;
	sub_82276288(ctx, base);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r7,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r7.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1200;
	sub_82338B20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1210;
	sub_82338B20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1220;
	sub_82338B20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1230;
	sub_82338B20(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r6,r11,7220
	ctx.r6.s64 = ctx.r11.s64 + 7220;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e7a8
	ctx.lr = 0x822D1248;
	sub_8232E7A8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r20,-1
	ctx.r20.s64 = -65536;
	// oris r9,r11,8
	ctx.r9.u64 = ctx.r11.u64 | 524288;
	// rlwinm r11,r10,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r9,62(r9)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + 62);
	// rlwimi r10,r9,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r20
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822d129c
	if (!ctx.cr6.eq) goto loc_822D129C;
	// rlwinm r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// addis r9,r9,2048
	ctx.r9.s64 = ctx.r9.s64 + 134217728;
	// rlwimi r9,r10,0,12,2
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE00FFFFF) | (ctx.r9.u64 & 0x1FF00000);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_822D129C:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r11,r18,16,7,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r11.u64 & 0xFFFFFFFFFE00FFFF);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r18,18,12,13
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 18) & 0xC0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,12,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x822f6640
	ctx.lr = 0x822D12E8;
	sub_822F6640(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x8232fd68
	ctx.lr = 0x822D1308;
	sub_8232FD68(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1318;
	sub_82281260(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822caa70
	ctx.lr = 0x822D132C;
	sub_822CAA70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822D133C;
	sub_82279AA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cacb0
	ctx.lr = 0x822D1350;
	sub_822CACB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r18,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D1374;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// stwx r27,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4320
	ctx.lr = 0x822D1384;
	sub_822F4320(ctx, base);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd590
	ctx.lr = 0x822D1394;
	sub_822CD590(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// addi r6,r11,7200
	ctx.r6.s64 = ctx.r11.s64 + 7200;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232e7a8
	ctx.lr = 0x822D13B0;
	sub_8232E7A8(ctx, base);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// rlwimi r9,r18,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 60);
	// stw r9,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// rlwimi r10,r11,20,3,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FF00000) | (ctx.r10.u64 & 0xFFFFFFFFE00FFFFF);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwimi r11,r18,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// bl 0x822f6640
	ctx.lr = 0x822D140C;
	sub_822F6640(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// divw r4,r11,r19
	ctx.r4.u64 = uint32_t((ctx.r19.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r19.s32 == -1)) ? ctx.r11.s32 / ctx.r19.s32 : 0);
	// bl 0x8232fd68
	ctx.lr = 0x822D142C;
	sub_8232FD68(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,96
	ctx.r6.s64 = 96;
	// addi r5,r29,24
	ctx.r5.s64 = ctx.r29.s64 + 24;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D144C;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D145C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1468;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1478;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1484;
	sub_82281428(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D14A0;
	sub_8226D728(ctx, base);
	// addi r11,r30,-20
	ctx.r11.s64 = ctx.r30.s64 + -20;
	// li r10,265
	ctx.r10.s64 = 265;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,13,18,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x2000) | (ctx.r9.u64 & 0xFFFFFFFFFFFFDFFF);
	// ori r8,r8,255
	ctx.r8.u64 = ctx.r8.u64 | 255;
	// stb r18,11(r11)
	REX_STORE_U8(ctx.r11.u32 + 11, ctx.r18.u8);
	// oris r7,r7,8
	ctx.r7.u64 = ctx.r7.u64 | 524288;
	// rlwimi r9,r10,13,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bl 0x8232da88
	ctx.lr = 0x822D14E4;
	sub_8232DA88(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D14F4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1500;
	sub_82281428(ctx, base);
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r29,r30,31
	ctx.r29.u64 = ctx.r30.u32 & 0x1;
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// beq 0x822d1560
	if (ctx.cr0.eq) goto loc_822D1560;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// and r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// b 0x822d1584
	goto loc_822D1584;
loc_822D1554:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1560;
	sub_8225B1A0(ctx, base);
loc_822D1560:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// and r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r23,r11,16
	ctx.r23.s64 = ctx.r11.s64 + 16;
loc_822D1584:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822d16a0
	if (ctx.cr6.eq) goto loc_822D16A0;
loc_822D158C:
	// addi r11,r24,4
	ctx.r11.s64 = ctx.r24.s64 + 4;
loc_822D1590:
	// lwz r27,0(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822d15f4
	if (ctx.cr6.eq) goto loc_822D15F4;
	// lwz r26,16(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d15ec
	if (ctx.cr6.eq) goto loc_822D15EC;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x822d15ec
	if (!ctx.cr6.eq) goto loc_822D15EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822D15CC;
	sub_8226D728(ctx, base);
	// addi r11,r26,-8
	ctx.r11.s64 = ctx.r26.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d15ec
	if (ctx.cr0.eq) goto loc_822D15EC;
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d1654
	if (ctx.cr6.eq) goto loc_822D1654;
loc_822D15EC:
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// b 0x822d1590
	goto loc_822D1590;
loc_822D15F4:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1610
	if (!ctx.cr0.eq) goto loc_822D1610;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d158c
	if (!ctx.cr6.eq) goto loc_822D158C;
loc_822D1610:
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d16a0
	if (ctx.cr6.eq) goto loc_822D16A0;
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// addi r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 + 24;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d16a0
	if (!ctx.cr0.eq) goto loc_822D16A0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822d158c
	if (!ctx.cr0.eq) goto loc_822D158C;
	// b 0x822d16a0
	goto loc_822D16A0;
loc_822D1654:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// b 0x822d1668
	goto loc_822D1668;
loc_822D1660:
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822D1668:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822d1660
	if (!ctx.cr6.eq) goto loc_822D1660;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// stw r27,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
	// stw r25,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r25.u32);
	// bl 0x82281260
	ctx.lr = 0x822D1694;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82281428
	ctx.lr = 0x822D16A0;
	sub_82281428(ctx, base);
loc_822D16A0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1d78
	if (!ctx.cr0.eq) goto loc_822D1D78;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1d78
	if (ctx.cr0.eq) goto loc_822D1D78;
loc_822D16B8:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1718
	if (!ctx.cr0.eq) goto loc_822D1718;
	// lwz r11,32(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1718
	if (ctx.cr0.eq) goto loc_822D1718;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// bne cr6,0x822d1718
	if (!ctx.cr6.eq) goto loc_822D1718;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d16f8
	if (ctx.cr6.eq) goto loc_822D16F8;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822D16F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
loc_822D16FC:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cd790
	ctx.lr = 0x822D1714;
	sub_822CD790(ctx, base);
	// b 0x822d1d5c
	goto loc_822D1D5C;
loc_822D1718:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1740
	if (ctx.cr0.eq) goto loc_822D1740;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1738
	if (ctx.cr6.eq) goto loc_822D1738;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822D1738:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x822d16fc
	goto loc_822D16FC;
loc_822D1740:
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1d5c
	if (ctx.cr0.eq) goto loc_822D1D5C;
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// li r23,0
	ctx.r23.s64 = 0;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1d5c
	if (!ctx.cr0.eq) goto loc_822D1D5C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1d5c
	if (ctx.cr0.eq) goto loc_822D1D5C;
loc_822D1768:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,12032
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12032, ctx.xer);
	// bne cr6,0x822d1d40
	if (!ctx.cr6.eq) goto loc_822D1D40;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822D178C;
	sub_8226D728(ctx, base);
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1d40
	if (ctx.cr6.eq) goto loc_822D1D40;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x822d17e8
	goto loc_822D17E8;
loc_822D17A8:
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d17c4
	if (ctx.cr6.eq) goto loc_822D17C4;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x822d17c8
	if (!ctx.cr6.eq) goto loc_822D17C8;
loc_822D17C4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D17C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1dcc
	if (!ctx.cr0.eq) goto loc_822D1DCC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1dd8
	if (ctx.cr6.eq) goto loc_822D1DD8;
	// lwz r27,4(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822d1dd8
	if (ctx.cr6.eq) goto loc_822D1DD8;
	// lwz r11,76(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 76);
loc_822D17E8:
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d17a8
	if (ctx.cr0.eq) goto loc_822D17A8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822d1948
	if (!ctx.cr6.eq) goto loc_822D1948;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d180c
	if (ctx.cr6.eq) goto loc_822D180C;
	// lwz r29,0(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822D180C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82276288
	ctx.lr = 0x822D1814;
	sub_82276288(ctx, base);
	// lwz r7,76(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// lwz r9,76(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwinm r8,r25,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwimi r9,r7,0,0,12
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF80000) | (ctx.r9.u64 & 0xFFFFFFFF0007FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// stw r9,76(r3)
	REX_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// addi r4,r25,16
	ctx.r4.s64 = ctx.r25.s64 + 16;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// bl 0x82282f98
	ctx.lr = 0x822D185C;
	sub_82282F98(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d188c
	if (!ctx.cr0.eq) goto loc_822D188C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d188c
	if (ctx.cr0.eq) goto loc_822D188C;
loc_822D1870:
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d188c
	if (!ctx.cr0.eq) goto loc_822D188C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1870
	if (!ctx.cr6.eq) goto loc_822D1870;
loc_822D188C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1898;
	sub_82281260(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,24
	ctx.r5.s64 = ctx.r28.s64 + 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822caa70
	ctx.lr = 0x822D18AC;
	sub_822CAA70(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822D18C0;
	sub_82279AA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cacb0
	ctx.lr = 0x822D18D4;
	sub_822CACB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwimi r11,r18,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D18F8;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stwx r29,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823389a8
	ctx.lr = 0x822D1910;
	sub_823389A8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1920;
	sub_82338B20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1930;
	sub_82338B20(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82338b20
	ctx.lr = 0x822D1940;
	sub_82338B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f4320
	ctx.lr = 0x822D1948;
	sub_822F4320(ctx, base);
loc_822D1948:
	// lwz r11,28(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1de4
	if (!ctx.cr0.eq) goto loc_822D1DE4;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1de4
	if (ctx.cr0.eq) goto loc_822D1DE4;
loc_822D1960:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,13312
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13312, ctx.xer);
	// bne cr6,0x822d19a0
	if (!ctx.cr6.eq) goto loc_822D19A0;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822D1988;
	sub_8226D728(ctx, base);
	// addi r11,r26,-8
	ctx.r11.s64 = ctx.r26.s64 + -8;
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r11,r11,17
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822d19bc
	if (ctx.cr6.eq) goto loc_822D19BC;
loc_822D19A0:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1de4
	if (!ctx.cr0.eq) goto loc_822D1DE4;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1960
	if (!ctx.cr6.eq) goto loc_822D1960;
loc_822D19BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x822d1de4
	if (ctx.cr6.eq) goto loc_822D1DE4;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822c6be8
	ctx.lr = 0x822D19D0;
	sub_822C6BE8(ctx, base);
	// lwz r29,16(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_822D19DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1a04
	if (ctx.cr6.eq) goto loc_822D1A04;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d19fc
	if (ctx.cr6.eq) goto loc_822D19FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1a04
	if (!ctx.cr0.eq) goto loc_822D1A04;
loc_822D19FC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822d19dc
	goto loc_822D19DC;
loc_822D1A04:
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r19,16(r11)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82333b98
	ctx.lr = 0x822D1A24;
	sub_82333B98(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r4,28(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,105
	ctx.r6.s64 = 105;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822D1A44;
	sub_8232D9E0(ctx, base);
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// bl 0x82281260
	ctx.lr = 0x822D1A8C;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D1AA4;
	sub_82280D20(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwimi r11,r18,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D1ABC;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1ACC;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwimi r11,r18,27,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 27) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x822D1AE4;
	sub_82280D20(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// stw r11,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822D1AFC;
	sub_82281428(ctx, base);
	// stw r3,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1B0C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1B18;
	sub_82281428(ctx, base);
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
	// stw r25,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1B2C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,527
	ctx.r5.s64 = 527;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8232f8e8
	ctx.lr = 0x822D1B44;
	sub_8232F8E8(ctx, base);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822d1b5c
	goto loc_822D1B5C;
loc_822D1B54:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822D1B5C:
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x822d1b54
	if (!ctx.cr6.eq) goto loc_822D1B54;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// stw r27,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r27.u32);
	// stw r30,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r30.u32);
	// bl 0x82281bd8
	ctx.lr = 0x822D1B90;
	sub_82281BD8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82333b98
	ctx.lr = 0x822D1BAC;
	sub_82333B98(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1bc0
	if (ctx.cr0.eq) goto loc_822D1BC0;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822d1bcc
	goto loc_822D1BCC;
loc_822D1BC0:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_822D1BCC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822d1c04
	if (!ctx.cr6.eq) goto loc_822D1C04;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d1bfc
	if (ctx.cr0.eq) goto loc_822D1BFC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x822d1c04
	goto loc_822D1C04;
loc_822D1BFC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
loc_822D1C04:
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822D1C14;
	sub_8227A448(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// rlwimi r11,r18,25,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 25) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r11,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
	// lwz r4,28(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// bl 0x8232db48
	ctx.lr = 0x822D1C38;
	sub_8232DB48(ctx, base);
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r6,r10,-36
	ctx.r6.s64 = ctx.r10.s64 + -36;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r6.u32);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bl 0x82281428
	ctx.lr = 0x822D1C7C;
	sub_82281428(ctx, base);
	// stw r3,44(r17)
	REX_STORE_U32(ctx.r17.u32 + 44, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D1C90;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1C9C;
	sub_82281428(ctx, base);
	// stw r3,48(r17)
	REX_STORE_U32(ctx.r17.u32 + 48, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D1CB0;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1CBC;
	sub_82281428(ctx, base);
	// stw r3,52(r17)
	REX_STORE_U32(ctx.r17.u32 + 52, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822D1CD0;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1CDC;
	sub_82281428(ctx, base);
	// stw r3,56(r17)
	REX_STORE_U32(ctx.r17.u32 + 56, ctx.r3.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1CEC;
	sub_82281260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,44(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281b70
	ctx.lr = 0x822D1D00;
	sub_82281B70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1D0C;
	sub_82281428(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822D1D1C;
	sub_82281260(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281b70
	ctx.lr = 0x822D1D30;
	sub_82281B70(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x822D1D3C;
	sub_82281428(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
loc_822D1D40:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1d5c
	if (!ctx.cr0.eq) goto loc_822D1D5C;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1768
	if (!ctx.cr6.eq) goto loc_822D1768;
loc_822D1D5C:
	// rlwinm r11,r25,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1d78
	if (!ctx.cr0.eq) goto loc_822D1D78;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d16b8
	if (!ctx.cr6.eq) goto loc_822D16B8;
loc_822D1D78:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1ea0
	if (!ctx.cr0.eq) goto loc_822D1EA0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1ea0
	if (ctx.cr0.eq) goto loc_822D1EA0;
loc_822D1D90:
	// lwz r11,68(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1dac
	if (ctx.cr0.eq) goto loc_822D1DAC;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1db8
	if (!ctx.cr0.eq) goto loc_822D1DB8;
loc_822D1DAC:
	// lwz r11,76(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 76);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d1e84
	if (ctx.cr0.eq) goto loc_822D1E84;
loc_822D1DB8:
	// lwz r9,8(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_822D1DBC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822d1e84
	if (ctx.cr6.eq) goto loc_822D1E84;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x822d1e2c
	goto loc_822D1E2C;
loc_822D1DCC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1DD8;
	sub_8225B1A0(ctx, base);
loc_822D1DD8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1DE4;
	sub_8225B1A0(ctx, base);
loc_822D1DE4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1DF0;
	sub_8225B1A0(ctx, base);
loc_822D1DF0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1e0c
	if (ctx.cr6.eq) goto loc_822D1E0C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// bne cr6,0x822d1e10
	if (!ctx.cr6.eq) goto loc_822D1E10;
loc_822D1E0C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D1E10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d1eb8
	if (!ctx.cr0.eq) goto loc_822D1EB8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822d1ec4
	if (ctx.cr6.eq) goto loc_822D1EC4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d1ec4
	if (ctx.cr6.eq) goto loc_822D1EC4;
loc_822D1E2C:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// rlwinm. r10,r10,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822d1df0
	if (ctx.cr0.eq) goto loc_822D1DF0;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1e7c
	if (!ctx.cr0.eq) goto loc_822D1E7C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d1e7c
	if (ctx.cr0.eq) goto loc_822D1E7C;
loc_822D1E4C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r7,r10,0,18,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r7,13312
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13312, ctx.xer);
	// bne cr6,0x822d1e64
	if (!ctx.cr6.eq) goto loc_822D1E64;
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_822D1E64:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1e7c
	if (!ctx.cr0.eq) goto loc_822D1E7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1e4c
	if (!ctx.cr6.eq) goto loc_822D1E4C;
loc_822D1E7C:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x822d1dbc
	goto loc_822D1DBC;
loc_822D1E84:
	// rlwinm r11,r8,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d1ea0
	if (!ctx.cr0.eq) goto loc_822D1EA0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d1d90
	if (!ctx.cr6.eq) goto loc_822D1D90;
loc_822D1EA0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_822D1EB8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1EC4;
	sub_8225B1A0(ctx, base);
loc_822D1EC4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D1ED0;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_82325968) {
	REX_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82267488
	sub_82267488(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82325AE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82325AF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1504(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1504);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r11,1500(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1500);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// lwz r10,1496(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 1496);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,1504(r3)
	REX_STORE_U32(ctx.r3.u32 + 1504, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r6,r9,20352
	ctx.r6.s64 = ctx.r9.s64 + 20352;
	// addi r5,r8,5760
	ctx.r5.s64 = ctx.r8.s64 + 5760;
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82370890
	ctx.lr = 0x82325B30;
	sub_82370890(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1500);
	// lwz r10,1496(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1496);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// subfic r4,r11,8192
	ctx.xer.ca = ctx.r11.u32 <= 8192;
	ctx.r4.u64 = static_cast<uint64_t>(8192) - ctx.r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82160230
	ctx.lr = 0x82325B54;
	sub_82160230(ctx, base);
	// lwz r11,1500(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1500);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,1500(r31)
	REX_STORE_U32(ctx.r31.u32 + 1500, ctx.r11.u32);
	// cmpwi cr6,r11,8192
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8192, ctx.xer);
	// blt cr6,0x82325b8c
	if (ctx.cr6.lt) goto loc_82325B8C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,20232
	ctx.r6.s64 = ctx.r11.s64 + 20232;
	// addi r5,r10,20320
	ctx.r5.s64 = ctx.r10.s64 + 20320;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1585
	ctx.r7.s64 = 1585;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82325B8C;
	sub_82260F30(ctx, base);
loc_82325B8C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82327178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82327180;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	ctx.r12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-16640(r1)
	ea = -16640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,16660(r1)
	REX_STORE_U32(ctx.r1.u32 + 16660, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,16668(r1)
	REX_STORE_U32(ctx.r1.u32 + 16668, ctx.r4.u32);
	// stw r5,16676(r1)
	REX_STORE_U32(ctx.r1.u32 + 16676, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r3,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// bl 0x823261b0
	ctx.lr = 0x823271B4;
	sub_823261B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82326260
	ctx.lr = 0x823271BC;
	sub_82326260(ctx, base);
	// stw r29,1536(r31)
	REX_STORE_U32(ctx.r31.u32 + 1536, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82326b50
	ctx.lr = 0x823271CC;
	sub_82326B50(ctx, base);
	// stw r3,1488(r31)
	REX_STORE_U32(ctx.r31.u32 + 1488, ctx.r3.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stb r27,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r27.u8);
	// bl 0x82370cb0
	ctx.lr = 0x823271E0;
	sub_82370CB0(ctx, base);
	// lwz r31,16660(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 16660);
	// lwz r25,16668(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 16668);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r24,116(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82327350
	if (!ctx.cr0.eq) goto loc_82327350;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,16676(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 16676);
	// bl 0x82345c50
	ctx.lr = 0x82327204;
	sub_82345C50(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq 0x82327224
	if (ctx.cr0.eq) goto loc_82327224;
	// stb r26,112(r1)
	REX_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82327228
	goto loc_82327228;
loc_82327224:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82327228:
	// bl 0x82266770
	ctx.lr = 0x8232722C;
	sub_82266770(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82326588
	ctx.lr = 0x82327238;
	sub_82326588(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82345c30
	ctx.lr = 0x82327240;
	sub_82345C30(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = ctx.r30.s64 + -4;
	// lwz r3,-4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8232724C;
	sub_823256A8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1620(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r4,1540(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1540);
	// bl 0x822669e0
	ctx.lr = 0x8232725C;
	sub_822669E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82327288
	if (ctx.cr0.eq) goto loc_82327288;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,20232
	ctx.r6.s64 = ctx.r11.s64 + 20232;
	// addi r5,r10,15020
	ctx.r5.s64 = ctx.r10.s64 + 15020;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1094
	ctx.r7.s64 = 1094;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82327288;
	sub_82260F30(ctx, base);
loc_82327288:
	// lwz r30,1540(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1540);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r29,r11,20368
	ctx.r29.s64 = ctx.r11.s64 + 20368;
	// addi r28,r10,20548
	ctx.r28.s64 = ctx.r10.s64 + 20548;
	// beq cr6,0x823272f4
	if (ctx.cr6.eq) goto loc_823272F4;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2129);
	// stw r26,2036(r31)
	REX_STORE_U32(ctx.r31.u32 + 2036, ctx.r26.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823272f4
	if (ctx.cr0.eq) goto loc_823272F4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20868
	ctx.r4.s64 = ctx.r11.s64 + 20868;
	// bl 0x82113c30
	ctx.lr = 0x823272C4;
	sub_82113C30(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8215ec60
	ctx.lr = 0x823272D4;
	sub_8215EC60(ctx, base);
	// stw r31,8336(r1)
	REX_STORE_U32(ctx.r1.u32 + 8336, ctx.r31.u32);
	// stw r28,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822633f8
	ctx.lr = 0x823272F0;
	sub_822633F8(ctx, base);
	// stw r29,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
loc_823272F4:
	// lwz r30,1544(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1544);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82327350
	if (ctx.cr6.eq) goto loc_82327350;
	// lbz r11,2129(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2129);
	// stw r27,2036(r31)
	REX_STORE_U32(ctx.r31.u32 + 2036, ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82327350
	if (ctx.cr0.eq) goto loc_82327350;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,20848
	ctx.r4.s64 = ctx.r11.s64 + 20848;
	// bl 0x82113c30
	ctx.lr = 0x82327320;
	sub_82113C30(ctx, base);
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,8368
	ctx.r3.s64 = ctx.r1.s64 + 8368;
	// bl 0x8215ec60
	ctx.lr = 0x82327330;
	sub_8215EC60(ctx, base);
	// stw r31,16560(r1)
	REX_STORE_U32(ctx.r1.u32 + 16560, ctx.r31.u32);
	// stw r28,8352(r1)
	REX_STORE_U32(ctx.r1.u32 + 8352, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r3,r1,8352
	ctx.r3.s64 = ctx.r1.s64 + 8352;
	// bl 0x822633f8
	ctx.lr = 0x8232734C;
	sub_822633F8(ctx, base);
	// stw r29,8352(r1)
	REX_STORE_U32(ctx.r1.u32 + 8352, ctx.r29.u32);
loc_82327350:
	// lwz r4,1620(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1620);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8232736c
	if (ctx.cr6.eq) goto loc_8232736C;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8232736C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8232736C:
	// stw r26,1540(r31)
	REX_STORE_U32(ctx.r31.u32 + 1540, ctx.r26.u32);
	// stw r26,1620(r31)
	REX_STORE_U32(ctx.r31.u32 + 1620, ctx.r26.u32);
	// lwz r4,1624(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82327390
	if (ctx.cr6.eq) goto loc_82327390;
	// lwz r11,1436(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1436);
	// lwz r3,1444(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 1444);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82327390;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82327390:
	// stw r26,1624(r31)
	REX_STORE_U32(ctx.r31.u32 + 1624, ctx.r26.u32);
	// stw r26,1544(r31)
	REX_STORE_U32(ctx.r31.u32 + 1544, ctx.r26.u32);
	// lwz r27,1364(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + 1364);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x823275dc
	if (!ctx.cr6.eq) goto loc_823275DC;
	// lbz r11,2025(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2025);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823273d8
	if (ctx.cr0.eq) goto loc_823273D8;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823273d8
	if (!ctx.cr0.eq) goto loc_823273D8;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823273d8
	if (!ctx.cr0.eq) goto loc_823273D8;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823273d8
	if (!ctx.cr0.eq) goto loc_823273D8;
	// li r26,2
	ctx.r26.s64 = 2;
loc_823273D8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327440
	if (!ctx.cr6.eq) goto loc_82327440;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327408
	if (!ctx.cr0.eq) goto loc_82327408;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82327408
	if (ctx.cr0.eq) goto loc_82327408;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327408
	if (!ctx.cr0.eq) goto loc_82327408;
	// li r26,3
	ctx.r26.s64 = 3;
loc_82327408:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82327440
	if (!ctx.cr6.eq) goto loc_82327440;
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82327438
	if (ctx.cr0.eq) goto loc_82327438;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327438
	if (!ctx.cr0.eq) goto loc_82327438;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327438
	if (!ctx.cr0.eq) goto loc_82327438;
	// li r26,4
	ctx.r26.s64 = 4;
loc_82327438:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82327470
	if (ctx.cr6.eq) goto loc_82327470;
loc_82327440:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82327468
	if (ctx.cr0.eq) goto loc_82327468;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327468
	if (!ctx.cr0.eq) goto loc_82327468;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327468
	if (!ctx.cr0.eq) goto loc_82327468;
	// li r26,5
	ctx.r26.s64 = 5;
loc_82327468:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823274c8
	if (!ctx.cr6.eq) goto loc_823274C8;
loc_82327470:
	// lbz r10,2026(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82327498
	if (ctx.cr0.eq) goto loc_82327498;
	// lbz r10,2027(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82327498
	if (ctx.cr0.eq) goto loc_82327498;
	// lbz r10,2028(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82327498
	if (!ctx.cr0.eq) goto loc_82327498;
	// li r26,6
	ctx.r26.s64 = 6;
loc_82327498:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823274c8
	if (!ctx.cr6.eq) goto loc_823274C8;
	// lbz r11,2026(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2026);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823274c8
	if (!ctx.cr0.eq) goto loc_823274C8;
	// lbz r11,2027(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2027);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823274c8
	if (!ctx.cr0.eq) goto loc_823274C8;
	// lbz r11,2028(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2028);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823274c8
	if (ctx.cr0.eq) goto loc_823274C8;
	// li r26,7
	ctx.r26.s64 = 7;
loc_823274C8:
	// lwz r11,1780(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1780);
	// lwz r10,1784(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1784);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// bgt cr6,0x823274e0
	if (ctx.cr6.gt) goto loc_823274E0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_823274E0:
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r9,1860(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 1860);
	// lbz r8,2024(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 2024);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r30,1940(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 1940);
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// and r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82327508
	if (ctx.cr0.eq) goto loc_82327508;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
loc_82327508:
	// lbz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 112);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,1700(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 1700);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82327560
	if (ctx.cr0.eq) goto loc_82327560;
	// li r4,1978
	ctx.r4.s64 = 1978;
	// bl 0x82266d20
	ctx.lr = 0x82327524;
	sub_82266D20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1980
	ctx.r4.s64 = 1980;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x82327534;
	sub_82266D20(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1984
	ctx.r4.s64 = 1984;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x82327544;
	sub_82266D20(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,1985
	ctx.r4.s64 = 1985;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x82327554;
	sub_82266D20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1987
	ctx.r4.s64 = 1987;
	// b 0x823275c0
	goto loc_823275C0;
loc_82327560:
	// li r4,1979
	ctx.r4.s64 = 1979;
	// bl 0x82266d20
	ctx.lr = 0x82327568;
	sub_82266D20(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1981
	ctx.r4.s64 = 1981;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x82327578;
	sub_82266D20(ctx, base);
	// li r4,1982
	ctx.r4.s64 = 1982;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lbz r5,2029(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2029);
	// bl 0x82266d20
	ctx.lr = 0x82327588;
	sub_82266D20(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1983
	ctx.r4.s64 = 1983;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x82327598;
	sub_82266D20(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1986
	ctx.r4.s64 = 1986;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x823275A8;
	sub_82266D20(ctx, base);
	// li r4,1991
	ctx.r4.s64 = 1991;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,2032(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 2032);
	// bl 0x82266d20
	ctx.lr = 0x823275B8;
	sub_82266D20(ctx, base);
	// lbz r5,2030(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 2030);
	// li r4,1989
	ctx.r4.s64 = 1989;
loc_823275C0:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82266d20
	ctx.lr = 0x823275C8;
	sub_82266D20(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
	// bl 0x82113c30
	ctx.lr = 0x823275D8;
	sub_82113C30(ctx, base);
	// bl 0x82326040
	ctx.lr = 0x823275DC;
	sub_82326040(ctx, base);
loc_823275DC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82325d28
	ctx.lr = 0x823275E8;
	sub_82325D28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,16640
	ctx.r1.s64 = ctx.r1.s64 + 16640;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82332CC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82332CC8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r5,12(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8227a448
	ctx.lr = 0x82332CE8;
	sub_8227A448(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r8,r10,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82332d34
	if (ctx.cr0.eq) goto loc_82332D34;
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r8,r10,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_82332D10:
	// srw r6,r8,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r6,r6,30
	ctx.r6.u64 = ctx.r6.u32 & 0x3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r5,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82332d10
	if (ctx.cr6.lt) goto loc_82332D10;
loc_82332D34:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,5192
	ctx.r10.u64 = ctx.r10.u64 | 5192;
	// ori r8,r8,36262
	ctx.r8.u64 = ctx.r8.u64 | 36262;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// li r26,3
	ctx.r26.s64 = 3;
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332dc8
	if (ctx.cr6.eq) goto loc_82332DC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82332D84:
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// andc r7,r27,r7
	ctx.r7.u64 = ctx.r27.u64 & ~ctx.r7.u64;
	// cntlzw r6,r8
	ctx.r6.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf. r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r8,r6,31
	ctx.xer.ca = ctx.r6.u32 <= 31;
	ctx.r8.u64 = static_cast<uint64_t>(31) - ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// slw r5,r26,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r6.u8 & 0x3F));
	// slw r6,r9,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r6.u8 & 0x3F));
	// andc r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 & ~ctx.r5.u64;
	// or r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 | ctx.r8.u64;
	// or r29,r5,r6
	ctx.r29.u64 = ctx.r5.u64 | ctx.r6.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x82332d84
	if (!ctx.cr0.eq) goto loc_82332D84;
loc_82332DC8:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// lwz r24,12(r30)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332f14
	if (ctx.cr0.eq) goto loc_82332F14;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82332f14
	if (!ctx.cr6.eq) goto loc_82332F14;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_82332DE8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82332e28
	if (ctx.cr6.eq) goto loc_82332E28;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82332e18
	if (ctx.cr6.eq) goto loc_82332E18;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x82332e18
	if (!ctx.cr6.eq) goto loc_82332E18;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82332e20
	if (!ctx.cr0.eq) goto loc_82332E20;
loc_82332E18:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82332de8
	goto loc_82332DE8;
loc_82332E20:
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// b 0x82332e2c
	goto loc_82332E2C;
loc_82332E28:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82332E2C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82332f14
	if (ctx.cr6.eq) goto loc_82332F14;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82332c08
	ctx.lr = 0x82332E44;
	sub_82332C08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332f14
	if (ctx.cr0.eq) goto loc_82332F14;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332ed0
	if (ctx.cr0.eq) goto loc_82332ED0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r28,44
	ctx.r7.s64 = ctx.r28.s64 + 44;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwinm r6,r9,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82332E74:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82332E7C:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82332ec8
	if (!ctx.cr6.lt) goto loc_82332EC8;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82332eac
	if (!ctx.cr6.eq) goto loc_82332EAC;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srw r5,r27,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r27.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// xor r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332eb8
	if (ctx.cr0.eq) goto loc_82332EB8;
loc_82332EAC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x82332e7c
	goto loc_82332E7C;
loc_82332EB8:
	// slw r11,r26,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// or r27,r11,r9
	ctx.r27.u64 = ctx.r11.u64 | ctx.r9.u64;
loc_82332EC8:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82332e74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82332E74;
loc_82332ED0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82332ee8
	goto loc_82332EE8;
loc_82332EE0:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82332EE8:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82332ee0
	if (!ctx.cr6.eq) goto loc_82332EE0;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r28,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82332F14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwimi r11,r27,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82283098
	ctx.lr = 0x82332F38;
	sub_82283098(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232d7d8
	ctx.lr = 0x82332F4C;
	sub_8232D7D8(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r9,r10,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x6;
	// rlwinm r8,r10,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x6;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r29,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r10,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r10,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r29,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,0,27,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwinm r9,r8,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82332fac
	goto loc_82332FAC;
loc_82332FA4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82332FAC:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82332fa4
	if (!ctx.cr6.eq) goto loc_82332FA4;
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
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,0,27,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332fe0
	if (ctx.cr0.eq) goto loc_82332FE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822815d8
	ctx.lr = 0x82332FE0;
	sub_822815D8(ctx, base);
loc_82332FE0:
	// lbz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82333000
	if (ctx.cr0.eq) goto loc_82333000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82298c48
	ctx.lr = 0x82332FF4;
	sub_82298C48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82333000:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233A5D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8233A5D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233a618
	if (!ctx.cr6.eq) goto loc_8233A618;
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
	// li r7,1932
	ctx.r7.s64 = 1932;
	// bl 0x82260f30
	ctx.lr = 0x8233A618;
	sub_82260F30(ctx, base);
loc_8233A618:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233A628;
	sub_82266B60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233A63C;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233a6ac
	if (!ctx.cr6.eq) goto loc_8233A6AC;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x8233a6ac
	if (!ctx.cr6.eq) goto loc_8233A6AC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233a668
	if (ctx.cr6.eq) goto loc_8233A668;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A668;
	sub_82266EC0(ctx, base);
loc_8233A668:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233a6a4
	if (ctx.cr6.eq) goto loc_8233A6A4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233a6a4
	if (ctx.cr6.eq) goto loc_8233A6A4;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
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
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x8233A6A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A6A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a708
	goto loc_8233A708;
loc_8233A6AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233a6c8
	if (ctx.cr6.eq) goto loc_8233A6C8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A6C8;
	sub_82266EC0(ctx, base);
loc_8233A6C8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233a704
	if (ctx.cr6.eq) goto loc_8233A704;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233a704
	if (ctx.cr6.eq) goto loc_8233A704;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
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
	// li r6,44
	ctx.r6.s64 = 44;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bctrl 
	ctx.lr = 0x8233A704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A704:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A708:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233C428) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8233C430;
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
	// bne cr6,0x8233c46c
	if (!ctx.cr6.eq) goto loc_8233C46C;
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
	// li r7,3516
	ctx.r7.s64 = 3516;
	// bl 0x82260f30
	ctx.lr = 0x8233C46C;
	sub_82260F30(ctx, base);
loc_8233C46C:
	// li r4,1000
	ctx.r4.s64 = 1000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82317928
	ctx.lr = 0x8233C478;
	sub_82317928(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233c4bc
	if (ctx.cr6.eq) goto loc_8233C4BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233c4bc
	if (ctx.cr6.eq) goto loc_8233C4BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82338ea0
	ctx.lr = 0x8233C494;
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
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// bctrl 
	ctx.lr = 0x8233C4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233C4BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233D708) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8233D710;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,27648
	ctx.r29.s64 = ctx.r10.s64 + 27648;
	// bne cr6,0x8233d75c
	if (!ctx.cr6.eq) goto loc_8233D75C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-13816
	ctx.r5.s64 = ctx.r11.s64 + -13816;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,504
	ctx.r7.s64 = 504;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233D75C;
	sub_82260F30(ctx, base);
loc_8233D75C:
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8233d780
	if (ctx.cr6.lt) goto loc_8233D780;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,28324
	ctx.r5.s64 = ctx.r11.s64 + 28324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,505
	ctx.r7.s64 = 505;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233D780;
	sub_82260F30(ctx, base);
loc_8233D780:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x8233d7a4
	if (!ctx.cr6.lt) goto loc_8233D7A4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,28312
	ctx.r5.s64 = ctx.r11.s64 + 28312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,506
	ctx.r7.s64 = 506;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233D7A4;
	sub_82260F30(ctx, base);
loc_8233D7A4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82266b60
	ctx.lr = 0x8233D7B4;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x8233d818
	if (ctx.cr6.eq) goto loc_8233D818;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233d7d8
	if (ctx.cr6.eq) goto loc_8233D7D8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233D7D8;
	sub_82266EC0(ctx, base);
loc_8233D7D8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233d810
	if (ctx.cr6.eq) goto loc_8233D810;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233d810
	if (ctx.cr6.eq) goto loc_8233D810;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-12472(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12472);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8233D810;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D810:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233d870
	goto loc_8233D870;
loc_8233D818:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233d834
	if (ctx.cr6.eq) goto loc_8233D834;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233D834;
	sub_82266EC0(ctx, base);
loc_8233D834:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233d86c
	if (ctx.cr6.eq) goto loc_8233D86C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233d86c
	if (ctx.cr6.eq) goto loc_8233D86C;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,-12472(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + -12472);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8233D86C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D86C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233D870:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82341BD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x82341BE0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2148);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2148(r3)
	REX_STORE_U32(ctx.r3.u32 + 2148, ctx.r11.u32);
	// lwz r30,1456(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82341C08;
	sub_82325520(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82341c2c
	if (ctx.cr0.eq) goto loc_82341C2C;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x82341C24;
	sub_8233EE50(ctx, base);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x82341c30
	goto loc_82341C30;
loc_82341C2C:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82341C30:
	// lwz r11,96(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r22,4(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x823421ac
	if (!ctx.cr6.gt) goto loc_823421AC;
	// rlwinm r11,r22,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r21,r11,-4
	ctx.r21.s64 = ctx.r11.s64 + -4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r23,r22,-1
	ctx.r23.s64 = ctx.r22.s64 + -1;
	// addi r20,r11,-14148
	ctx.r20.s64 = ctx.r11.s64 + -14148;
	// addi r19,r10,32600
	ctx.r19.s64 = ctx.r10.s64 + 32600;
	// addi r18,r9,31816
	ctx.r18.s64 = ctx.r9.s64 + 31816;
loc_82341C64:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82341c88
	if (ctx.cr6.eq) goto loc_82341C88;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,2864
	ctx.r7.s64 = 2864;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82341C88;
	sub_82260F30(ctx, base);
loc_82341C88:
	// lwz r3,96(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 96);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82341ca4
	if (!ctx.cr6.lt) goto loc_82341CA4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = ctx.r11.u64 + ctx.r21.u64;
	// b 0x82341cac
	goto loc_82341CAC;
loc_82341CA4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8235cb28
	ctx.lr = 0x82341CAC;
	sub_8235CB28(ctx, base);
loc_82341CAC:
	// lwz r28,0(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bgt cr6,0x82342190
	if (ctx.cr6.gt) goto loc_82342190;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341CE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82342190
	if (ctx.cr0.eq) goto loc_82342190;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82342190
	if (!ctx.cr0.eq) goto loc_82342190;
	// lwz r3,236(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 236);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341D08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82342190
	if (!ctx.cr0.eq) goto loc_82342190;
	// lwz r31,236(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 236);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f868
	ctx.lr = 0x82341D20;
	sub_8235F868(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82341f1c
	if (ctx.cr0.eq) goto loc_82341F1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82341b78
	ctx.lr = 0x82341D34;
	sub_82341B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82341f1c
	if (ctx.cr0.eq) goto loc_82341F1C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341D50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82341e8c
	if (ctx.cr0.eq) goto loc_82341E8C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82341dfc
	if (ctx.cr6.lt) goto loc_82341DFC;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_82341D70:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341D88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82341de4
	if (!ctx.cr0.eq) goto loc_82341DE4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82341b78
	ctx.lr = 0x82341D9C;
	sub_82341B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82341de4
	if (ctx.cr0.eq) goto loc_82341DE4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82341de4
	if (ctx.cr6.eq) goto loc_82341DE4;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82341de4
	if (ctx.cr6.eq) goto loc_82341DE4;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341DD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82341de4
	if (!ctx.cr0.eq) goto loc_82341DE4;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bne cr6,0x82341de8
	if (!ctx.cr6.eq) goto loc_82341DE8;
loc_82341DE4:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82341DE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82341d70
	if (!ctx.cr6.gt) goto loc_82341D70;
loc_82341DFC:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342190
	if (ctx.cr0.eq) goto loc_82342190;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82341e54
	if (ctx.cr6.lt) goto loc_82341E54;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_82341E18:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82341e40
	if (ctx.cr6.eq) goto loc_82341E40;
	// stw r11,892(r30)
	REX_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82341E3C;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82341E40:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82341e18
	if (!ctx.cr6.gt) goto loc_82341E18;
loc_82341E54:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233f120
	ctx.lr = 0x82341E60;
	sub_8233F120(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341E88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82341f1c
	goto loc_82341F1C;
loc_82341E8C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x82342190
	if (ctx.cr6.eq) goto loc_82342190;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342190
	if (ctx.cr6.eq) goto loc_82342190;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341EB8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82342190
	if (!ctx.cr0.eq) goto loc_82342190;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x82342190
	if (ctx.cr6.eq) goto loc_82342190;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82342190
	if (!ctx.cr0.eq) goto loc_82342190;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233f120
	ctx.lr = 0x82341EE4;
	sub_8233F120(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,2148(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82341f1c
	if (ctx.cr6.eq) goto loc_82341F1C;
	// stw r11,892(r31)
	REX_STORE_U32(ctx.r31.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82341F18;
	sub_8235CB28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82341F1C:
	// lwz r27,80(r28)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r28.u32 + 80);
	// lwz r26,56(r28)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// b 0x82342180
	goto loc_82342180;
loc_82341F28:
	// lwz r3,8(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8234219c
	if (ctx.cr6.eq) goto loc_8234219C;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8235ca68
	ctx.lr = 0x82341F44;
	sub_8235CA68(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235f868
	ctx.lr = 0x82341F50;
	sub_8235F868(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823420a4
	if (ctx.cr0.eq) goto loc_823420A4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82341b78
	ctx.lr = 0x82341F64;
	sub_82341B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823420a4
	if (ctx.cr0.eq) goto loc_823420A4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// beq cr6,0x823420a4
	if (ctx.cr6.eq) goto loc_823420A4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823420a4
	if (ctx.cr6.eq) goto loc_823420A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341F98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823420a4
	if (!ctx.cr0.eq) goto loc_823420A4;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// beq cr6,0x823420a4
	if (ctx.cr6.eq) goto loc_823420A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82341FC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82342030
	if (ctx.cr0.eq) goto loc_82342030;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82342018
	if (ctx.cr6.lt) goto loc_82342018;
	// addi r29,r31,236
	ctx.r29.s64 = ctx.r31.s64 + 236;
loc_82341FDC:
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,2148(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 892);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82342004
	if (ctx.cr6.eq) goto loc_82342004;
	// stw r11,892(r30)
	REX_STORE_U32(ctx.r30.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82342000;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82342004:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82341fdc
	if (!ctx.cr6.gt) goto loc_82341FDC;
loc_82342018:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234202C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82342180
	goto loc_82342180;
loc_82342030:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342074
	if (ctx.cr0.eq) goto loc_82342074;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233eea8
	ctx.lr = 0x82342044;
	sub_8233EEA8(ctx, base);
	// lwz r11,2148(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 2148);
	// lwz r10,892(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 892);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8234206c
	if (ctx.cr6.eq) goto loc_8234206C;
	// stw r11,892(r3)
	REX_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,4(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82342068;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_8234206C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ef10
	ctx.lr = 0x82342074;
	sub_8233EF10(ctx, base);
loc_82342074:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x8233ef98
	ctx.lr = 0x823420A0;
	sub_8233EF98(ctx, base);
	// b 0x82342180
	goto loc_82342180;
loc_823420A4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// bl 0x82360db8
	ctx.lr = 0x823420B0;
	sub_82360DB8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8233f040
	ctx.lr = 0x823420C0;
	sub_8233F040(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,100(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823420E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x8233ef98
	ctx.lr = 0x823420EC;
	sub_8233EF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x82341b78
	ctx.lr = 0x823420F8;
	sub_82341B78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,100(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// beq 0x82342170
	if (ctx.cr0.eq) goto loc_82342170;
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r11,948(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82342168
	if (!ctx.cr6.eq) goto loc_82342168;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// b 0x82342140
	goto loc_82342140;
loc_82342128:
	// lwz r11,100(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82342158
	if (ctx.cr6.eq) goto loc_82342158;
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
loc_82342140:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234214C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342128
	if (ctx.cr0.eq) goto loc_82342128;
	// b 0x8234215c
	goto loc_8234215C;
loc_82342158:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8234215C:
	// lwz r3,948(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82342178
	goto loc_82342178;
loc_82342168:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82342178
	goto loc_82342178;
loc_82342170:
	// lwz r3,948(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 948);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82342178:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82361fa8
	ctx.lr = 0x82342180;
	sub_82361FA8(ctx, base);
loc_82342180:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82341f28
	if (!ctx.cr6.eq) goto loc_82341F28;
	// b 0x8234219c
	goto loc_8234219C;
loc_82342190:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 100);
	// bl 0x8233ef98
	ctx.lr = 0x8234219C;
	sub_8233EF98(ctx, base);
loc_8234219C:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// addi r21,r21,-4
	ctx.r21.s64 = ctx.r21.s64 + -4;
	// bgt 0x82341c64
	if (ctx.cr0.gt) goto loc_82341C64;
loc_823421AC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82353830) {
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
	// bl 0x82362728
	ctx.lr = 0x82353848;
	sub_82362728(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361e88
	ctx.lr = 0x82353850;
	sub_82361E88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823525b8
	ctx.lr = 0x82353858;
	sub_823525B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82352b30
	ctx.lr = 0x82353860;
	sub_82352B30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233edb0
	ctx.lr = 0x82353868;
	sub_8233EDB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c518
	ctx.lr = 0x82353870;
	sub_8236C518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233faa0
	ctx.lr = 0x82353878;
	sub_8233FAA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823538a4
	if (!ctx.cr0.eq) goto loc_823538A4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-28840
	ctx.r6.s64 = ctx.r11.s64 + -28840;
	// addi r5,r10,-28368
	ctx.r5.s64 = ctx.r10.s64 + -28368;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1428
	ctx.r7.s64 = 1428;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823538A4;
	sub_82260F30(ctx, base);
loc_823538A4:
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

DEFINE_REX_FUNC(sub_823548A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823548fc
	if (!ctx.cr0.eq) goto loc_823548FC;
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823548fc
	if (!ctx.cr0.eq) goto loc_823548FC;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823548ec
	if (ctx.cr6.eq) goto loc_823548EC;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823548ec
	if (!ctx.cr0.eq) goto loc_823548EC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,80(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823548f0
	if (!ctx.cr0.eq) goto loc_823548F0;
loc_823548EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823548F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82354900
	if (!ctx.cr0.eq) goto loc_82354900;
loc_823548FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82354900:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82354D98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82354DA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,40(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354DC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354dd0
	if (ctx.cr0.eq) goto loc_82354DD0;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82354DD0:
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354DE4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// clrlwi. r9,r3,24
	ctx.r9.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r22,r11,-14148
	ctx.r22.s64 = ctx.r11.s64 + -14148;
	// addi r21,r10,-28064
	ctx.r21.s64 = ctx.r10.s64 + -28064;
	// beq 0x82354e60
	if (ctx.cr0.eq) goto loc_82354E60;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82354e24
	if (!ctx.cr6.eq) goto loc_82354E24;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// b 0x82354e48
	goto loc_82354E48;
loc_82354E24:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82354e48
	if (!ctx.cr6.eq) goto loc_82354E48;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// addi r5,r11,-28240
	ctx.r5.s64 = ctx.r11.s64 + -28240;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,350
	ctx.r7.s64 = 350;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354E48;
	sub_82260F30(ctx, base);
loc_82354E48:
	// lwz r3,40(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// bl 0x8236fc28
	ctx.lr = 0x82354E50;
	sub_8236FC28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354e60
	if (ctx.cr0.eq) goto loc_82354E60;
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// stw r11,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
loc_82354E60:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r23,4(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82354fd8
	if (!ctx.cr6.gt) goto loc_82354FD8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r26,r11,-27356
	ctx.r26.s64 = ctx.r11.s64 + -27356;
	// addi r25,r10,-27404
	ctx.r25.s64 = ctx.r10.s64 + -27404;
	// addi r24,r9,-28080
	ctx.r24.s64 = ctx.r9.s64 + -28080;
loc_82354E90:
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82354eac
	if (!ctx.cr6.lt) goto loc_82354EAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82354eb4
	goto loc_82354EB4;
loc_82354EAC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235cb28
	ctx.lr = 0x82354EB4;
	sub_8235CB28(ctx, base);
loc_82354EB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82354fc8
	if (!ctx.cr6.eq) goto loc_82354FC8;
	// lwz r3,52(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82354ee0
	if (!ctx.cr6.lt) goto loc_82354EE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// b 0x82354ee8
	goto loc_82354EE8;
loc_82354EE0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235cb28
	ctx.lr = 0x82354EE8;
	sub_8235CB28(ctx, base);
loc_82354EE8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82354fc8
	if (ctx.cr6.lt) goto loc_82354FC8;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82354f2c
	if (ctx.cr6.eq) goto loc_82354F2C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82354f2c
	if (ctx.cr6.eq) goto loc_82354F2C;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x82354fc4
	goto loc_82354FC4;
loc_82354F2C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82354f50
	if (!ctx.cr6.eq) goto loc_82354F50;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,363
	ctx.r7.s64 = 363;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354F50;
	sub_82260F30(ctx, base);
loc_82354F50:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82354f7c
	if (ctx.cr6.gt) goto loc_82354F7C;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,364
	ctx.r7.s64 = 364;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354F7C;
	sub_82260F30(ctx, base);
loc_82354F7C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82354fa8
	if (ctx.cr6.gt) goto loc_82354FA8;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// li r7,365
	ctx.r7.s64 = 365;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354FA8;
	sub_82260F30(ctx, base);
loc_82354FA8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 4096;
	// stw r10,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
loc_82354FC4:
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82354FC8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r30,r23
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82354e90
	if (ctx.cr6.lt) goto loc_82354E90;
loc_82354FD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235AEE0) {
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
	// lbz r11,1872(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 1872);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8235af2c
	if (!ctx.cr0.eq) goto loc_8235AF2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-25024
	ctx.r6.s64 = ctx.r11.s64 + -25024;
	// addi r5,r10,-25052
	ctx.r5.s64 = ctx.r10.s64 + -25052;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,107
	ctx.r7.s64 = 107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235AF2C;
	sub_82260F30(ctx, base);
loc_8235AF2C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8235af70
	if (!ctx.cr6.eq) goto loc_8235AF70;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235af70
	if (!ctx.cr6.eq) goto loc_8235AF70;
	// lwz r10,136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235af70
	if (!ctx.cr6.eq) goto loc_8235AF70;
	// lwz r11,140(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8235af74
	if (ctx.cr6.eq) goto loc_8235AF74;
loc_8235AF70:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8235AF74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_8235C168) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8235bc28
	ctx.lr = 0x8235C180;
	sub_8235BC28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8235c190
	if (ctx.cr0.eq) goto loc_8235C190;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8235bff8
	ctx.lr = 0x8235C190;
	sub_8235BFF8(ctx, base);
loc_8235C190:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235C800) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8235C938) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8235C940;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8235c97c
	if (ctx.cr6.eq) goto loc_8235C97C;
loc_8235C958:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,8(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235C970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8235c958
	if (!ctx.cr6.eq) goto loc_8235C958;
loc_8235C97C:
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r31,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235D33C) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235D370) {
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
	// b 0x8235d3a8
	goto loc_8235D3A8;
loc_8235D388:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d3a8
	if (ctx.cr6.eq) goto loc_8235D3A8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8235D3A8;
	sub_823256A8(ctx, base);
loc_8235D3A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d388
	if (!ctx.cr6.eq) goto loc_8235D388;
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

DEFINE_REX_FUNC(sub_8235DE60) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8235d3c8
	ctx.lr = 0x8235DE80;
	sub_8235D3C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-14912
	ctx.r11.s64 = ctx.r11.s64 + -14912;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1412);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwz r11,1412(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1412);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1412(r30)
	REX_STORE_U32(ctx.r30.u32 + 1412, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8235EC40) {
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
	// bl 0x8235dcd0
	ctx.lr = 0x8235EC60;
	sub_8235DCD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235ec7c
	if (ctx.cr0.eq) goto loc_8235EC7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235ec7c
	if (ctx.cr6.eq) goto loc_8235EC7C;
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8235EC7C;
	sub_823256A8(ctx, base);
loc_8235EC7C:
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

DEFINE_REX_FUNC(sub_8235F3B0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8235F3B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,216(r1)
	REX_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// std r7,224(r1)
	REX_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// addi r7,r1,232
	ctx.r7.s64 = ctx.r1.s64 + 232;
	// std r8,232(r1)
	REX_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// std r9,240(r1)
	REX_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r7,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r8,r9,-14720
	ctx.r8.s64 = ctx.r9.s64 + -14720;
	// lwz r31,-13432(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + -13432);
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r8,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r8,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r8,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
loc_8235F42C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// blt cr6,0x8235f4b0
	if (ctx.cr6.lt) goto loc_8235F4B0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_8235F43C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x8235f490
	if (ctx.cr6.eq) goto loc_8235F490;
	// lwz r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r27,0(r10)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8235f470
	if (!ctx.cr6.eq) goto loc_8235F470;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8235f474
	if (ctx.cr6.eq) goto loc_8235F474;
loc_8235F470:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8235F474:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235f4a8
	if (!ctx.cr0.eq) goto loc_8235F4A8;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x8235f43c
	if (!ctx.cr6.gt) goto loc_8235F43C;
	// b 0x8235f4b0
	goto loc_8235F4B0;
loc_8235F490:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbx r8,r7,r10
	REX_STORE_U8(ctx.r7.u32 + ctx.r10.u32, ctx.r8.u8);
	// b 0x8235f4b0
	goto loc_8235F4B0;
loc_8235F4A8:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stbx r8,r7,r11
	REX_STORE_U8(ctx.r7.u32 + ctx.r11.u32, ctx.r8.u8);
loc_8235F4B0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x8235f42c
	if (ctx.cr6.lt) goto loc_8235F42C;
	// stw r31,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8235f558
	if (!ctx.cr6.gt) goto loc_8235F558;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8235F4D4:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8235f550
	if (!ctx.cr6.gt) goto loc_8235F550;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_8235F4E4:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x8235f504
	if (ctx.cr6.eq) goto loc_8235F504;
	// subfc r8,r8,r7
	ctx.xer.ca = ctx.r7.u32 >= ctx.r8.u32;
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// b 0x8235f510
	goto loc_8235F510;
loc_8235F504:
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
loc_8235F510:
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8235f540
	if (ctx.cr0.eq) goto loc_8235F540;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// add r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbzx r9,r5,r8
	ctx.r9.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// lbz r7,1(r11)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbx r7,r5,r8
	REX_STORE_U8(ctx.r5.u32 + ctx.r8.u32, ctx.r7.u8);
loc_8235F540:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x8235f4e4
	if (ctx.cr6.lt) goto loc_8235F4E4;
loc_8235F550:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz 0x8235f4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F4D4;
loc_8235F558:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x8235f584
	if (!ctx.cr6.gt) goto loc_8235F584;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_8235F568:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbx r8,r10,r9
	REX_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
	// bdnz 0x8235f568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F568;
loc_8235F584:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8235F590:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	REX_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8235f590
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235F590;
	// lwz r11,952(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 952);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// lbz r11,1393(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1393);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235f6a0
	if (ctx.cr0.eq) goto loc_8235F6A0;
	// beq cr6,0x8235f678
	if (ctx.cr6.eq) goto loc_8235F678;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8235f65c
	if (ctx.cr6.eq) goto loc_8235F65C;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8235f638
	if (ctx.cr6.eq) goto loc_8235F638;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8235f60c
	if (ctx.cr6.eq) goto loc_8235F60C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13408
	ctx.r6.s64 = ctx.r11.s64 + -13408;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235F608;
	sub_82260F30(ctx, base);
	// b 0x8235f68c
	goto loc_8235F68C;
loc_8235F60C:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x8234ec60
	ctx.lr = 0x8235F634;
	sub_8234EC60(ctx, base);
	// b 0x8235f688
	goto loc_8235F688;
loc_8235F638:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x8234ec40
	ctx.lr = 0x8235F658;
	sub_8234EC40(ctx, base);
	// b 0x8235f688
	goto loc_8235F688;
loc_8235F65C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x8234ec20
	ctx.lr = 0x8235F674;
	sub_8234EC20(ctx, base);
	// b 0x8235f688
	goto loc_8235F688;
loc_8235F678:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x8234ec00
	ctx.lr = 0x8235F688;
	sub_8234EC00(ctx, base);
loc_8235F688:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8235F68C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233f040
	ctx.lr = 0x8235F69C;
	sub_8233F040(ctx, base);
	// b 0x8235f774
	goto loc_8235F774;
loc_8235F6A0:
	// beq cr6,0x8235f750
	if (ctx.cr6.eq) goto loc_8235F750;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x8235f734
	if (ctx.cr6.eq) goto loc_8235F734;
	// cmpwi cr6,r6,3
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 3, ctx.xer);
	// beq cr6,0x8235f710
	if (ctx.cr6.eq) goto loc_8235F710;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// beq cr6,0x8235f6e4
	if (ctx.cr6.eq) goto loc_8235F6E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13408
	ctx.r6.s64 = ctx.r11.s64 + -13408;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,410
	ctx.r7.s64 = 410;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235F6E0;
	sub_82260F30(ctx, base);
	// b 0x8235f764
	goto loc_8235F764;
loc_8235F6E4:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,104(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r5,0(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// ld r4,0(r8)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r8.u32 + 0);
	// bl 0x82350590
	ctx.lr = 0x8235F70C;
	sub_82350590(ctx, base);
	// b 0x8235f760
	goto loc_8235F760;
loc_8235F710:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,96(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// bl 0x82350570
	ctx.lr = 0x8235F730;
	sub_82350570(ctx, base);
	// b 0x8235f760
	goto loc_8235F760;
loc_8235F734:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// bl 0x82350550
	ctx.lr = 0x8235F74C;
	sub_82350550(ctx, base);
	// b 0x8235f760
	goto loc_8235F760;
loc_8235F750:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x82350530
	ctx.lr = 0x8235F760;
	sub_82350530(ctx, base);
loc_8235F760:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8235F764:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f338
	ctx.lr = 0x8235F774;
	sub_8235F338(ctx, base);
loc_8235F774:
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236FAF0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-5640
	ctx.r11.s64 = ctx.r11.s64 + -5640;
	// beq 0x8236fb0c
	if (ctx.cr0.eq) goto loc_8236FB0C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8236fb1c
	goto loc_8236FB1C;
loc_8236FB0C:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_8236FB1C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8236fb34
	if (!ctx.cr0.eq) goto loc_8236FB34;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_8236FB34:
	// lwz r10,24(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8236fb58
	if (ctx.cr0.eq) goto loc_8236FB58;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_8236FB58:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82370528) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f1.u64);
	// li r3,248
	ctx.r3.s64 = 248;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// ori r30,r11,65279
	ctx.r30.u64 = ctx.r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82167100
	ctx.lr = 0x82370560;
	sub_82167100(ctx, base);
	// lhz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x823705d4
	if (!ctx.cr6.eq) goto loc_823705D4;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82164768
	ctx.lr = 0x8237057C;
	sub_82164768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x823705c0
	if (!ctx.cr0.gt) goto loc_823705C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x823705a8
	if (!ctx.cr6.gt) goto loc_823705A8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x823705c0
	if (!ctx.cr6.eq) goto loc_823705C0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82166e38
	ctx.lr = 0x823705A4;
	sub_82166E38(ctx, base);
	// b 0x823706cc
	goto loc_823706CC;
loc_823705A8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82167100
	ctx.lr = 0x823705B4;
	sub_82167100(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lfd f1,-23504(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -23504);
	// b 0x823706cc
	goto loc_823706CC;
loc_823705C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fadd f2,f30,f0
	ctx.f2.f64 = ctx.f30.f64 + ctx.f0.f64;
	// b 0x823706bc
	goto loc_823706BC;
loc_823705D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x823705fc
	if (!ctx.cr6.eq) goto loc_823705FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82167100
	ctx.lr = 0x823705F0;
	sub_82167100(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// b 0x823706cc
	goto loc_823706CC;
loc_823705FC:
	// fabs f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,6016
	ctx.r11.s64 = ctx.r11.s64 + 6016;
	// lfd f0,-8(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8237066c
	if (!ctx.cr6.gt) goto loc_8237066C;
	// lfd f0,0(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82370630
	if (!ctx.cr6.gt) goto loc_82370630;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,-23504(r11)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + -23504);
	// b 0x823706bc
	goto loc_823706BC;
loc_82370630:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82160e80
	ctx.lr = 0x82370638;
	sub_82160E80(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82370660
	if (!ctx.cr6.gt) goto loc_82370660;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x821646f0
	ctx.lr = 0x82370654;
	sub_821646F0(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x823706bc
	goto loc_823706BC;
loc_82370660:
	// bl 0x821646f0
	ctx.lr = 0x82370664;
	sub_821646F0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82370698
	goto loc_82370698;
loc_8237066C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82160e80
	ctx.lr = 0x82370674;
	sub_82160E80(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821646f0
	ctx.lr = 0x8237067C;
	sub_821646F0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,4696(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 4696);
	// fadd f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fmul f31,f0,f13
	ctx.f31.f64 = ctx.f0.f64 * ctx.f13.f64;
loc_82370698:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823706b4
	if (ctx.cr0.eq) goto loc_823706B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82167100
	ctx.lr = 0x823706AC;
	sub_82167100(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x823706cc
	goto loc_823706CC;
loc_823706B4:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_823706BC:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82166f40
	ctx.lr = 0x823706CC;
	sub_82166F40(ctx, base);
loc_823706CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

