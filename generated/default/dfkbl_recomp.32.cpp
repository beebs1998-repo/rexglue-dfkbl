#include "dfkbl_funcs.32.h"

DEFINE_REX_FUNC(sub_82091568) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094120
	sub_82094120(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820918B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094bc8
	sub_82094BC8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091AB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82095cf0
	sub_82095CF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091CD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096290
	sub_82096290(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091FB8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094d28
	sub_82094D28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092230) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r11,26084(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// addi r3,r11,5752
	ctx.r3.s64 = ctx.r11.s64 + 5752;
	// b 0x820a5f38
	sub_820A5F38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820925E8) {
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
	// bl 0x8209b8b8
	ctx.lr = 0x820925F8;
	sub_8209B8B8(ctx, base);
	// bl 0x82095650
	ctx.lr = 0x820925FC;
	sub_82095650(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820933D8) {
	REX_FUNC_PROLOGUE();
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r7,21788
	ctx.r6.s64 = ctx.r7.s64 + 21788;
	// lis r5,-32200
	ctx.r5.s64 = -2110259200;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r5,148
	ctx.r4.s64 = ctx.r5.s64 + 148;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// stw r10,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// stw r10,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r10.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// ori r11,r11,32896
	ctx.r11.u64 = ctx.r11.u64 | 32896;
	// stw r9,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r9.u32);
	// stw r8,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r8.u32);
	// stw r9,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// stw r8,32(r6)
	REX_STORE_U32(ctx.r6.u32 + 32, ctx.r8.u32);
	// stw r10,148(r5)
	REX_STORE_U32(ctx.r5.u32 + 148, ctx.r10.u32);
	// stw r11,-4(r4)
	REX_STORE_U32(ctx.r4.u32 + -4, ctx.r11.u32);
	// stw r9,-4(r6)
	REX_STORE_U32(ctx.r6.u32 + -4, ctx.r9.u32);
	// stw r8,21788(r7)
	REX_STORE_U32(ctx.r7.u32 + 21788, ctx.r8.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094B78) {
	REX_FUNC_PROLOGUE();
	// stw r4,6236(r3)
	REX_STORE_U32(ctx.r3.u32 + 6236, ctx.r4.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6240(r3)
	REX_STORE_U32(ctx.r3.u32 + 6240, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094FF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82094FF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8209ccf8
	ctx.lr = 0x82095018;
	sub_8209CCF8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addis r3,r31,238
	ctx.r3.s64 = ctx.r31.s64 + 15597568;
	// lwz r27,80(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// bl 0x820b7298
	ctx.lr = 0x8209502C;
	sub_820B7298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,6536
	ctx.r3.s64 = ctx.r31.s64 + 6536;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x820acc38
	ctx.lr = 0x82095048;
	sub_820ACC38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096258) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209d5a8
	sub_8209D5A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096438) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209cd70
	sub_8209CD70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096780) {
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
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// bl 0x8209e960
	ctx.lr = 0x820967A0;
	sub_8209E960(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820967b0
	if (!ctx.cr6.eq) goto loc_820967B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6480(r31)
	REX_STORE_U32(ctx.r31.u32 + 6480, ctx.r11.u32);
loc_820967B0:
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

DEFINE_REX_FUNC(sub_8209A210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8209A218;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215eba4
	ctx.lr = 0x8209A220;
	__savefpr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,6052(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6052);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209a264
	if (!ctx.cr6.eq) goto loc_8209A264;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215ebf0
	ctx.lr = 0x8209A260;
	__restfpr_27(ctx, base);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_8209A264:
	// lwz r11,300(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r28,r10,47180
	ctx.r28.u64 = ctx.r10.u64 | 47180;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8209a324
	if (ctx.cr6.eq) goto loc_8209A324;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8209a2c0
	if (ctx.cr6.eq) goto loc_8209A2C0;
	// lwz r10,308(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r3,6056(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6056);
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8209a298
	if (ctx.cr6.eq) goto loc_8209A298;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_8209A298:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209A2AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,6136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6136(r31)
	REX_STORE_U32(ctx.r31.u32 + 6136, ctx.r11.u32);
	// b 0x8209a384
	goto loc_8209A384;
loc_8209A2C0:
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820af9a0
	ctx.lr = 0x8209A2D0;
	sub_820AF9A0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r3,6056(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6056);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209a2e8
	if (!ctx.cr6.eq) goto loc_8209A2E8;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// b 0x8209a2f0
	goto loc_8209A2F0;
loc_8209A2E8:
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8209A2F0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209A304;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820af9a0
	ctx.lr = 0x8209A314;
	sub_820AF9A0(ctx, base);
	// lwz r11,6144(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6144);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6144(r31)
	REX_STORE_U32(ctx.r31.u32 + 6144, ctx.r11.u32);
	// b 0x8209a384
	goto loc_8209A384;
loc_8209A324:
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820af9a0
	ctx.lr = 0x8209A334;
	sub_820AF9A0(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r3,6056(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 6056);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8209a34c
	if (!ctx.cr6.eq) goto loc_8209A34C;
	// lwz r11,292(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// b 0x8209a354
	goto loc_8209A354;
loc_8209A34C:
	// lwz r10,292(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8209A354:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r9,148(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 148);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8209A368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820af9a0
	ctx.lr = 0x8209A378;
	sub_820AF9A0(ctx, base);
	// lwz r11,6140(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,6140(r31)
	REX_STORE_U32(ctx.r31.u32 + 6140, ctx.r11.u32);
loc_8209A384:
	// addis r10,r31,238
	ctx.r10.s64 = ctx.r31.s64 + 15597568;
	// addi r29,r31,23704
	ctx.r29.s64 = ctx.r31.s64 + 23704;
	// addi r10,r10,5196
	ctx.r10.s64 = ctx.r10.s64 + 5196;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x820a6d70
	ctx.lr = 0x8209A3A8;
	sub_820A6D70(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209a3c4
	if (!ctx.cr6.eq) goto loc_8209A3C4;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r28
	ctx.r3.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bl 0x820afb38
	ctx.lr = 0x8209A3BC;
	sub_820AFB38(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209a660
	if (ctx.cr6.eq) goto loc_8209A660;
loc_8209A3C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8209a660
	if (ctx.cr6.eq) goto loc_8209A660;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209A3E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a7140
	ctx.lr = 0x8209A3F0;
	sub_820A7140(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8209a430
	if (!ctx.cr6.eq) goto loc_8209A430;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a78e0
	ctx.lr = 0x8209A408;
	sub_820A78E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8209a44c
	if (ctx.cr6.eq) goto loc_8209A44C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r28,0(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a78e0
	ctx.lr = 0x8209A420;
	sub_820A78E0(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// b 0x8209a440
	goto loc_8209A440;
loc_8209A430:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8209A440:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8209A44C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209A44C:
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,-30480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30480);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x8209a474
	if (ctx.cr6.gt) goto loc_8209A474;
	// beq cr6,0x8209a550
	if (ctx.cr6.eq) goto loc_8209A550;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8209a550
	if (ctx.cr6.eq) goto loc_8209A550;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// b 0x8209a478
	goto loc_8209A478;
loc_8209A474:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
loc_8209A478:
	// beq cr6,0x8209a550
	if (ctx.cr6.eq) goto loc_8209A550;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r11,r11,2236
	ctx.r11.s64 = ctx.r11.s64 + 2236;
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f4,f27,f31
	ctx.f4.f64 = double(float(ctx.f27.f64 * ctx.f31.f64));
	// fmuls f3,f28,f31
	ctx.f3.f64 = double(float(ctx.f28.f64 * ctx.f31.f64));
	// bne cr6,0x8209a4b4
	if (!ctx.cr6.eq) goto loc_8209A4B4;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// fmuls f2,f29,f31
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fmuls f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x8209a4f8
	goto loc_8209A4F8;
loc_8209A4B4:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r4,28(r6)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f30,f31,f9
	ctx.f1.f64 = double(float(std::fma(ctx.f30.f64, ctx.f31.f64, ctx.f9.f64)));
	// fmadds f2,f29,f31,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f29.f64, ctx.f31.f64, ctx.f10.f64)));
loc_8209A4F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8209A500;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// extsw r9,r25
	ctx.r9.s64 = ctx.r25.s32;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r7,40(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lfs f3,2104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f2,f10,f31
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// fmuls f1,f9,f31
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// bctrl 
	ctx.lr = 0x8209A54C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8209a62c
	goto loc_8209A62C;
loc_8209A550:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// bne cr6,0x8209a57c
	if (!ctx.cr6.eq) goto loc_8209A57C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x8209a5c0
	goto loc_8209A5C0;
loc_8209A57C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r7,0(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lwz r5,28(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fadds f1,f9,f30
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// fadds f2,f10,f29
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f29.f64));
loc_8209A5C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x8209A5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// extsw r11,r25
	ctx.r11.s64 = ctx.r25.s32;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f12,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r7,40(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f3,2104(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bctrl 
	ctx.lr = 0x8209A60C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// lfs f2,2280(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2280);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x8209A62C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209A62C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209A644;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r4,-128
	ctx.r4.s64 = -8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// lwz r8,64(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x8209A660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8209A660:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215ebf0
	ctx.lr = 0x8209A670;
	__restfpr_27(ctx, base);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209BA68) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820961c0
	sub_820961C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A3984) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4372);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A3D58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2156(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2156);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A4B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r16,19712(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19712);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19712(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19712);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19712(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19712);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19720(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19720);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19720(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19720);
	// lwz r16,19720(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19720);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19744(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19744);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19704(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19704);
	// lwz r16,19728(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19728);
	// lwz r16,19736(r10)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r10.u32 + 19736);
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// b 0x820a4d24
	goto loc_820A4D24;
loc_820A4D24:
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// fadds f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a4b5c
	// ERROR: conditional branch to unknown address 0x820A4B5C
	if (!ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820A4D34 to 0x820A4B5C");
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A6D70) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,32456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32456);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A7A60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820A7A68;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820a67c8
	ctx.lr = 0x820A7A74;
	sub_820A67C8(ctx, base);
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r31,4128
	ctx.r30.s64 = ctx.r31.s64 + 4128;
	// li r28,-1
	ctx.r28.s64 = -1;
	// addi r27,r11,30408
	ctx.r27.s64 = ctx.r11.s64 + 30408;
loc_820A7A8C:
	// lwz r11,4124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4124);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x820a7b20
	if (!ctx.cr6.lt) goto loc_820A7B20;
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x820a7b10
	if (ctx.cr6.eq) goto loc_820A7B10;
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7ac8
	if (!ctx.cr6.eq) goto loc_820A7AC8;
	// sth r28,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lwz r11,4124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4124(r31)
	REX_STORE_U32(ctx.r31.u32 + 4124, ctx.r11.u32);
	// b 0x820a7b10
	goto loc_820A7B10;
loc_820A7AC8:
	// lhz r11,256(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 256);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// sth r9,256(r30)
	REX_STORE_U16(ctx.r30.u32 + 256, ctx.r9.u16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt cr6,0x820a7b0c
	if (ctx.cr6.gt) goto loc_820A7B0C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a77a0
	ctx.lr = 0x820A7AEC;
	sub_820A77A0(ctx, base);
	// lbzx r11,r29,r27
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + ctx.r27.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820a7b0c
	if (!ctx.cr6.eq) goto loc_820A7B0C;
	// sth r28,0(r30)
	REX_STORE_U16(ctx.r30.u32 + 0, ctx.r28.u16);
	// lwz r11,4124(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4124);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4124(r31)
	REX_STORE_U32(ctx.r31.u32 + 4124, ctx.r11.u32);
	// b 0x820a7b10
	goto loc_820A7B10;
loc_820A7B0C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_820A7B10:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmpwi cr6,r25,128
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 128, ctx.xer);
	// blt cr6,0x820a7a8c
	if (ctx.cr6.lt) goto loc_820A7A8C;
loc_820A7B20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AAE08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820AAE10;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x820a9de0
	ctx.lr = 0x820AAE20;
	sub_820A9DE0(ctx, base);
	// lwz r3,17132(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 17132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aae30
	if (ctx.cr6.eq) goto loc_820AAE30;
	// bl 0x8210f568
	ctx.lr = 0x820AAE30;
	sub_8210F568(ctx, base);
loc_820AAE30:
	// stw r29,17132(r31)
	REX_STORE_U32(ctx.r31.u32 + 17132, ctx.r29.u32);
	// addi r30,r31,3724
	ctx.r30.s64 = ctx.r31.s64 + 3724;
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r5,17152(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 17152);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,3656(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3656);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e58d0
	ctx.lr = 0x820AAE54;
	sub_820E58D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x820aaecc
	if (!ctx.cr6.eq) goto loc_820AAECC;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaecc
	if (ctx.cr6.eq) goto loc_820AAECC;
	// bl 0x820ef2e0
	ctx.lr = 0x820AAE70;
	sub_820EF2E0(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r3,17132(r31)
	REX_STORE_U32(ctx.r31.u32 + 17132, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820aaebc
	if (ctx.cr6.eq) goto loc_820AAEBC;
	// addi r8,r31,3664
	ctx.r8.s64 = ctx.r31.s64 + 3664;
	// ld r5,17152(r31)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r31.u32 + 17152);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,3656(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3656);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e58d0
	ctx.lr = 0x820AAE98;
	sub_820E58D0(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820aaeac
	if (!ctx.cr6.eq) goto loc_820AAEAC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820AAEAC:
	// stw r3,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820AAEBC:
	// stw r29,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820AAECC:
	// stw r11,3592(r31)
	REX_STORE_U32(ctx.r31.u32 + 3592, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AE150) {
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
	// lwz r3,988(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 988);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820ae188
	if (!ctx.cr6.eq) goto loc_820AE188;
loc_820AE170:
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
loc_820AE188:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820ae170
	if (!ctx.cr6.eq) goto loc_820AE170;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AE1AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// stw r9,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x820accd8
	ctx.lr = 0x820AE1C0;
	sub_820ACCD8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_820AFAF0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,13
	ctx.r11.s64 = ctx.r4.s64 + 13;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B0458) {
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
	// beq cr6,0x820b0554
	if (ctx.cr6.eq) goto loc_820B0554;
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
	ctx.lr = 0x820B0490;
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
	ctx.lr = 0x820B04AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B04C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B04E4;
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
	ctx.lr = 0x820B0500;
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
	ctx.lr = 0x820B051C;
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
	ctx.lr = 0x820B0538;
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
	ctx.lr = 0x820B0554;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0554:
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

DEFINE_REX_FUNC(sub_820B1EC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x820B1ED0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,-1
	ctx.r26.s64 = -1;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,3
	ctx.r22.s64 = 3;
	// li r25,7
	ctx.r25.s64 = 7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x820b1f50
	if (ctx.cr6.gt) goto loc_820B1F50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820b1fc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B1FC8;
	// bdzf 4*cr6+eq,0x820b21bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B21BC;
	// bdzf 4*cr6+eq,0x820b239c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B239C;
	// bdzf 4*cr6+eq,0x820b26ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B26EC;
	// bdzf 4*cr6+eq,0x820b2544
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B2544;
	// bdzf 4*cr6+eq,0x820b2850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820B2850;
	// bne cr6,0x820b29a0
	if (!ctx.cr6.eq) goto loc_820B29A0;
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b1f60
	if (ctx.cr6.eq) goto loc_820B1F60;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,252(r31)
	REX_STORE_U32(ctx.r31.u32 + 252, ctx.r26.u32);
	// stw r26,260(r31)
	REX_STORE_U32(ctx.r31.u32 + 260, ctx.r26.u32);
	// stw r26,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stw r26,288(r31)
	REX_STORE_U32(ctx.r31.u32 + 288, ctx.r26.u32);
	// stw r26,296(r31)
	REX_STORE_U32(ctx.r31.u32 + 296, ctx.r26.u32);
loc_820B1F4C:
	// stw r26,292(r31)
	REX_STORE_U32(ctx.r31.u32 + 292, ctx.r26.u32);
loc_820B1F50:
	// stb r23,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r23.u8);
loc_820B1F54:
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
loc_820B1F58:
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
loc_820B1F60:
	// lwz r11,348(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 348);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820b2b94
	if (ctx.cr6.eq) goto loc_820B2B94;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b2b20
	if (ctx.cr6.eq) goto loc_820B2B20;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2ae8
	if (ctx.cr6.eq) goto loc_820B2AE8;
	// lwz r11,344(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 344);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b2bdc
	if (ctx.cr6.eq) goto loc_820B2BDC;
	// lwz r3,320(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B1F9C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// addi r4,r31,352
	ctx.r4.s64 = ctx.r31.s64 + 352;
	// bl 0x820b1dc0
	ctx.lr = 0x820B1FA8;
	sub_820B1DC0(ctx, base);
	// lwz r3,320(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B1FBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_820B1FC8:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b202c
	if (ctx.cr6.gt) goto loc_820B202C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2018
	if (!ctx.cr6.lt) goto loc_820B2018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2004
	if (ctx.cr6.eq) goto loc_820B2004;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b2058
	if (!ctx.cr6.gt) goto loc_820B2058;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b2058
	if (ctx.cr6.gt) goto loc_820B2058;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
loc_820B1FFC:
	// stb r24,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2004:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2018:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B202C:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b2058
	if (ctx.cr6.lt) goto loc_820B2058;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x820b2384
	if (!ctx.cr6.gt) goto loc_820B2384;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x820b2058
	if (!ctx.cr6.eq) goto loc_820B2058;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2058:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B205C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b20b0
	if (!ctx.cr6.eq) goto loc_820B20B0;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b2128
	if (ctx.cr6.eq) goto loc_820B2128;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x820b2128
	if (ctx.cr6.eq) goto loc_820B2128;
loc_820B2088:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B20A0;
	sub_820B1CB0(ctx, base);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// stw r9,248(r29)
	REX_STORE_U32(ctx.r29.u32 + 248, ctx.r9.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B20B0:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b2128
	if (ctx.cr6.eq) goto loc_820B2128;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,184(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// lwz r8,256(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 256);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b2138
	if (!ctx.cr6.eq) goto loc_820B2138;
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r28,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r7,r27,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b215c
	if (!ctx.cr6.eq) goto loc_820B215C;
	// lwz r10,248(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 248);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2180
	if (!ctx.cr6.eq) goto loc_820B2180;
loc_820B2128:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820b205c
	if (ctx.cr6.lt) goto loc_820B205C;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B2138:
	// stw r23,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,184(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B214C;
	sub_820B1CB0(ctx, base);
	// lwz r10,184(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 184);
	// stw r10,256(r29)
	REX_STORE_U32(ctx.r29.u32 + 256, ctx.r10.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B215C:
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r27,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2170;
	sub_820B1CB0(ctx, base);
	// lwzx r10,r27,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// stwx r10,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2180:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r23,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r23.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2198;
	sub_820B1CB0(ctx, base);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// stw r9,248(r29)
	REX_STORE_U32(ctx.r29.u32 + 248, ctx.r9.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stw r26,256(r29)
	REX_STORE_U32(ctx.r29.u32 + 256, ctx.r26.u32);
	// stwx r26,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B21BC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b2374
	if (ctx.cr6.gt) goto loc_820B2374;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2018
	if (!ctx.cr6.lt) goto loc_820B2018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2004
	if (ctx.cr6.eq) goto loc_820B2004;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b2394
	if (!ctx.cr6.gt) goto loc_820B2394;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b2394
	if (ctx.cr6.gt) goto loc_820B2394;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
loc_820B21F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820b2288
	if (ctx.cr6.eq) goto loc_820B2288;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820b2258
	if (!ctx.cr6.eq) goto loc_820B2258;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820b2288
	if (ctx.cr6.eq) goto loc_820B2288;
loc_820B2220:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2238;
	sub_820B1CB0(ctx, base);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r29,r11
	ctx.r9.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r8,176(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// stw r8,248(r11)
	REX_STORE_U32(ctx.r11.u32 + 248, ctx.r8.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2258:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b22a0
	if (!ctx.cr6.eq) goto loc_820B22A0;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b22e4
	if (!ctx.cr6.eq) goto loc_820B22E4;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b2318
	if (!ctx.cr6.eq) goto loc_820B2318;
loc_820B2288:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x820b21f4
	if (ctx.cr6.lt) goto loc_820B21F4;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B22A0:
	// addi r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 5;
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B22C4;
	sub_820B1CB0(ctx, base);
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// lwzx r7,r28,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B22E4:
	// stw r24,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r24.u32);
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,188(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2308;
	sub_820B1CB0(ctx, base);
	// lwz r9,188(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r9,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r9.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2318:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r24,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2330;
	sub_820B1CB0(ctx, base);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// add r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r9,r31
	ctx.r11.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,176(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// stw r6,248(r11)
	REX_STORE_U32(ctx.r11.u32 + 248, ctx.r6.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stwx r26,r7,r31
	REX_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B2374:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b2394
	if (ctx.cr6.lt) goto loc_820B2394;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bgt cr6,0x820b2394
	if (ctx.cr6.gt) goto loc_820B2394;
loc_820B2384:
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
loc_820B238C:
	// stb r22,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r22.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2394:
	// stw r26,256(r31)
	REX_STORE_U32(ctx.r31.u32 + 256, ctx.r26.u32);
	// b 0x820b1f4c
	goto loc_820B1F4C;
loc_820B239C:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b23d8
	if (ctx.cr6.gt) goto loc_820B23D8;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2018
	if (!ctx.cr6.lt) goto loc_820B2018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2004
	if (ctx.cr6.eq) goto loc_820B2004;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b2394
	if (!ctx.cr6.gt) goto loc_820B2394;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b2394
	if (ctx.cr6.gt) goto loc_820B2394;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r24,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B23D8:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b2394
	if (ctx.cr6.lt) goto loc_820B2394;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bgt cr6,0x820b2394
	if (ctx.cr6.gt) goto loc_820B2394;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r11,r31,180
	ctx.r11.s64 = ctx.r31.s64 + 180;
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
loc_820B23F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820b2454
	if (ctx.cr6.eq) goto loc_820B2454;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820b2424
	if (!ctx.cr6.eq) goto loc_820B2424;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b2220
	if (!ctx.cr6.eq) goto loc_820B2220;
	// b 0x820b2454
	goto loc_820B2454;
loc_820B2424:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,72(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b246c
	if (!ctx.cr6.eq) goto loc_820B246C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b24b0
	if (!ctx.cr6.eq) goto loc_820B24B0;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,68(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b24e4
	if (!ctx.cr6.eq) goto loc_820B24E4;
loc_820B2454:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x820b23f4
	if (ctx.cr6.lt) goto loc_820B23F4;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B246C:
	// addi r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 5;
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r28,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2490;
	sub_820B1CB0(ctx, base);
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// lwzx r7,r28,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r7.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B24B0:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r24,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,188(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B24D4;
	sub_820B1CB0(ctx, base);
	// lwz r9,188(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r9,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r9.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B24E4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// ori r9,r11,32769
	ctx.r9.u64 = ctx.r11.u64 | 32769;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2500;
	sub_820B1CB0(ctx, base);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r29,7
	ctx.r11.s64 = ctx.r29.s64 + 7;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// stw r5,248(r11)
	REX_STORE_U32(ctx.r11.u32 + 248, ctx.r5.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stwx r26,r6,r31
	REX_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B2544:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b26c0
	if (ctx.cr6.gt) goto loc_820B26C0;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2018
	if (!ctx.cr6.lt) goto loc_820B2018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2580
	if (ctx.cr6.eq) goto loc_820B2580;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b26e0
	if (!ctx.cr6.gt) goto loc_820B26E0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b26e0
	if (ctx.cr6.gt) goto loc_820B26E0;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r24,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2580:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B2584:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b25b4
	if (!ctx.cr6.eq) goto loc_820B25B4;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b262c
	if (ctx.cr6.eq) goto loc_820B262C;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lwz r9,212(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r10,284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2088
	if (!ctx.cr6.eq) goto loc_820B2088;
	// b 0x820b262c
	goto loc_820B262C;
loc_820B25B4:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820b262c
	if (ctx.cr6.eq) goto loc_820B262C;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r28,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r8,r29,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x820b263c
	if (!ctx.cr6.eq) goto loc_820B263C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,260(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r8,188(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b2660
	if (!ctx.cr6.eq) goto loc_820B2660;
	// lwz r10,248(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 248);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2684
	if (!ctx.cr6.eq) goto loc_820B2684;
loc_820B262C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820b2584
	if (ctx.cr6.lt) goto loc_820B2584;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B263C:
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r29,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2650;
	sub_820B1CB0(ctx, base);
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// stwx r10,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r10.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2660:
	// stw r24,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r24.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,188(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r11,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2674;
	sub_820B1CB0(ctx, base);
	// lwz r10,188(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// stw r10,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r10.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2684:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r22,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,32769
	ctx.r10.u64 = ctx.r11.u64 | 32769;
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B269C;
	sub_820B1CB0(ctx, base);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// stw r9,248(r29)
	REX_STORE_U32(ctx.r29.u32 + 248, ctx.r9.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stwx r26,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B26C0:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b26e0
	if (ctx.cr6.lt) goto loc_820B26E0;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// bgt cr6,0x820b26e0
	if (ctx.cr6.gt) goto loc_820B26E0;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r22,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r22.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B26E0:
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// b 0x820b1f50
	goto loc_820B1F50;
loc_820B26EC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b2824
	if (ctx.cr6.gt) goto loc_820B2824;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2728
	if (!ctx.cr6.lt) goto loc_820B2728;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2004
	if (ctx.cr6.eq) goto loc_820B2004;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b26e0
	if (!ctx.cr6.gt) goto loc_820B26E0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b26e0
	if (ctx.cr6.gt) goto loc_820B26E0;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r24,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2728:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B272C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b275c
	if (!ctx.cr6.eq) goto loc_820B275C;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b27d4
	if (ctx.cr6.eq) goto loc_820B27D4;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b2088
	if (!ctx.cr6.eq) goto loc_820B2088;
	// b 0x820b27d4
	goto loc_820B27D4;
loc_820B275C:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x820b27d4
	if (ctx.cr6.eq) goto loc_820B27D4;
	// stw r9,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r9.u32);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// addi r10,r11,5
	ctx.r10.s64 = ctx.r11.s64 + 5;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r10,r7
	ctx.r8.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r8,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r28,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820b263c
	if (!ctx.cr6.eq) goto loc_820B263C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,260(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r8,188(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b2660
	if (!ctx.cr6.eq) goto loc_820B2660;
	// lwz r10,248(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 248);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b27e4
	if (!ctx.cr6.eq) goto loc_820B27E4;
loc_820B27D4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820b272c
	if (ctx.cr6.lt) goto loc_820B272C;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B27E4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// ori r9,r11,32769
	ctx.r9.u64 = ctx.r11.u64 | 32769;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B2800;
	sub_820B1CB0(ctx, base);
	// lwz r8,176(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// stw r8,248(r29)
	REX_STORE_U32(ctx.r29.u32 + 248, ctx.r8.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stwx r26,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B2824:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b26e0
	if (ctx.cr6.lt) goto loc_820B26E0;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x820b2384
	if (!ctx.cr6.gt) goto loc_820B2384;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x820b26e0
	if (!ctx.cr6.eq) goto loc_820B26E0;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2850:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x820b288c
	if (ctx.cr6.gt) goto loc_820B288C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bge cr6,0x820b2018
	if (!ctx.cr6.lt) goto loc_820B2018;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820b2004
	if (ctx.cr6.eq) goto loc_820B2004;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x820b26e0
	if (!ctx.cr6.gt) goto loc_820B26E0;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820b26e0
	if (ctx.cr6.gt) goto loc_820B26E0;
	// stw r26,248(r31)
	REX_STORE_U32(ctx.r31.u32 + 248, ctx.r26.u32);
	// stw r26,284(r31)
	REX_STORE_U32(ctx.r31.u32 + 284, ctx.r26.u32);
	// stb r24,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r24.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B288C:
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// blt cr6,0x820b26e0
	if (ctx.cr6.lt) goto loc_820B26E0;
	// cmpwi cr6,r11,38
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 38, ctx.xer);
	// ble cr6,0x820b2384
	if (!ctx.cr6.gt) goto loc_820B2384;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x820b26e0
	if (!ctx.cr6.eq) goto loc_820B26E0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_820B28A8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820b28d8
	if (!ctx.cr6.eq) goto loc_820B28D8;
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b2950
	if (ctx.cr6.eq) goto loc_820B2950;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r29,r31,36
	ctx.r29.s64 = ctx.r31.s64 + 36;
	// lwz r10,212(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r9,284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 284);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b2088
	if (!ctx.cr6.eq) goto loc_820B2088;
	// b 0x820b2950
	goto loc_820B2950;
loc_820B28D8:
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820b2950
	if (ctx.cr6.eq) goto loc_820B2950;
	// stw r10,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r10.u32);
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// addi r9,r11,5
	ctx.r9.s64 = ctx.r11.s64 + 5;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r9,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r9,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r28,r31
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r7,r29,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b263c
	if (!ctx.cr6.eq) goto loc_820B263C;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r31
	ctx.r29.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lwz r9,260(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r8,188(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 188);
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820b2660
	if (!ctx.cr6.eq) goto loc_820B2660;
	// lwz r10,248(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 248);
	// lwz r9,176(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820b2960
	if (!ctx.cr6.eq) goto loc_820B2960;
loc_820B2950:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x820b28a8
	if (ctx.cr6.lt) goto loc_820B28A8;
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B2960:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// ori r9,r11,32769
	ctx.r9.u64 = ctx.r11.u64 | 32769;
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// bl 0x820b1cb0
	ctx.lr = 0x820B297C;
	sub_820B1CB0(ctx, base);
	// lwz r8,176(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 176);
	// stw r8,248(r29)
	REX_STORE_U32(ctx.r29.u32 + 248, ctx.r8.u32);
	// stb r25,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r25.u8);
	// stb r30,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r30.u8);
	// stb r30,110(r31)
	REX_STORE_U8(ctx.r31.u32 + 110, ctx.r30.u8);
	// stb r30,111(r31)
	REX_STORE_U8(ctx.r31.u32 + 111, ctx.r30.u8);
	// stwx r26,r28,r31
	REX_STORE_U32(ctx.r28.u32 + ctx.r31.u32, ctx.r26.u32);
	// stw r26,260(r29)
	REX_STORE_U32(ctx.r29.u32 + 260, ctx.r26.u32);
	// b 0x820b1f60
	goto loc_820B1F60;
loc_820B29A0:
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 109);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820b2abc
	if (ctx.cr6.lt) goto loc_820B2ABC;
	// bne cr6,0x820b1f60
	if (!ctx.cr6.eq) goto loc_820B1F60;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,172
	ctx.r4.s64 = ctx.r31.s64 + 172;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x820e8df8
	ctx.lr = 0x820B29C0;
	sub_820E8DF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b1f60
	if (!ctx.cr6.eq) goto loc_820B1F60;
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bgt cr6,0x820b1ffc
	if (ctx.cr6.gt) goto loc_820B1FFC;
	// lis r12,-32245
	ctx.r12.s64 = -2113208320;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,10732
	ctx.r12.s64 = ctx.r12.s64 + 10732;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820B1F50;
	case 1:
		goto loc_820B1F50;
	case 2:
		goto loc_820B1F50;
	case 3:
		goto loc_820B2A98;
	case 4:
		goto loc_820B1F50;
	case 5:
		goto loc_820B1F50;
	case 6:
		goto loc_820B1FFC;
	case 7:
		goto loc_820B1FFC;
	case 8:
		goto loc_820B1FFC;
	case 9:
		goto loc_820B1FFC;
	case 10:
		goto loc_820B1FFC;
	case 11:
		goto loc_820B1FFC;
	case 12:
		goto loc_820B1FFC;
	case 13:
		goto loc_820B1FFC;
	case 14:
		goto loc_820B1FFC;
	case 15:
		goto loc_820B1FFC;
	case 16:
		goto loc_820B1FFC;
	case 17:
		goto loc_820B2AB0;
	case 18:
		goto loc_820B2AB0;
	case 19:
		goto loc_820B2AB0;
	case 20:
		goto loc_820B2AB0;
	case 21:
		goto loc_820B2AB0;
	case 22:
		goto loc_820B2AB0;
	case 23:
		goto loc_820B2AB0;
	case 24:
		goto loc_820B2AB0;
	case 25:
		goto loc_820B2AB0;
	case 26:
		goto loc_820B2AB0;
	case 27:
		goto loc_820B2AB0;
	case 28:
		goto loc_820B238C;
	case 29:
		goto loc_820B238C;
	case 30:
		goto loc_820B238C;
	case 31:
		goto loc_820B238C;
	case 32:
		goto loc_820B238C;
	case 33:
		goto loc_820B238C;
	case 34:
		goto loc_820B238C;
	case 35:
		goto loc_820B238C;
	case 36:
		goto loc_820B238C;
	case 37:
		goto loc_820B238C;
	case 38:
		goto loc_820B238C;
	case 39:
		goto loc_820B1F50;
	case 40:
		goto loc_820B1F50;
	case 41:
		goto loc_820B1FFC;
	case 42:
		goto loc_820B2AA4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820B2A98:
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2AA4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2AB0:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,108(r31)
	REX_STORE_U8(ctx.r31.u32 + 108, ctx.r11.u8);
	// b 0x820b1f54
	goto loc_820B1F54;
loc_820B2ABC:
	// addi r6,r31,144
	ctx.r6.s64 = ctx.r31.s64 + 144;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// bl 0x820e80e0
	ctx.lr = 0x820B2AD0;
	sub_820E80E0(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820b1f60
	if (!ctx.cr6.eq) goto loc_820B1F60;
	// lbz r11,109(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 109);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,109(r31)
	REX_STORE_U8(ctx.r31.u32 + 109, ctx.r11.u8);
	// b 0x820b1f58
	goto loc_820B1F58;
loc_820B2AE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,396
	ctx.r4.s64 = ctx.r31.s64 + 396;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x820e8df8
	ctx.lr = 0x820B2AF8;
	sub_820E8DF8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820b2bdc
	if (!ctx.cr6.eq) goto loc_820B2BDC;
	// lwz r3,380(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b2b10
	if (ctx.cr6.eq) goto loc_820B2B10;
	// bl 0x820e8f80
	ctx.lr = 0x820B2B10;
	sub_820E8F80(ctx, base);
loc_820B2B10:
	// stw r26,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r26.u32);
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_820B2B20:
	// addi r29,r31,368
	ctx.r29.s64 = ctx.r31.s64 + 368;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
loc_820B2B30:
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820b2b30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820B2B30;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e8ee0
	ctx.lr = 0x820B2B4C;
	sub_820E8EE0(ctx, base);
	// stw r3,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r3.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r5,360(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 360);
	// lwz r4,356(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lwz r3,352(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 352);
	// bl 0x820e80e0
	ctx.lr = 0x820B2B64;
	sub_820E80E0(ctx, base);
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// bne cr6,0x820b2b78
	if (!ctx.cr6.eq) goto loc_820B2B78;
	// stw r22,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_820B2B78:
	// lwz r3,380(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x820b2bd8
	if (ctx.cr6.eq) goto loc_820B2BD8;
	// bl 0x820e8f80
	ctx.lr = 0x820B2B88;
	sub_820E8F80(ctx, base);
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_820B2B94:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,21760(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 21760);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,68(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 68);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820B2BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r3,320(r31)
	REX_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// stw r30,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r30.u32);
	// li r3,960
	ctx.r3.s64 = 960;
	// stw r30,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	REX_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// stw r8,332(r31)
	REX_STORE_U32(ctx.r31.u32 + 332, ctx.r8.u32);
	// bl 0x820ef2e0
	ctx.lr = 0x820B2BD4;
	sub_820EF2E0(ctx, base);
	// stw r3,328(r31)
	REX_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
loc_820B2BD8:
	// stw r23,348(r31)
	REX_STORE_U32(ctx.r31.u32 + 348, ctx.r23.u32);
loc_820B2BDC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E6040) {
	REX_FUNC_PROLOGUE();
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// lhz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6050) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820e60bc
	if (ctx.cr6.eq) goto loc_820E60BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e60bc
	if (ctx.cr6.eq) goto loc_820E60BC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820e60bc
	if (ctx.cr6.eq) goto loc_820E60BC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x820e6b10
	ctx.lr = 0x820E6090;
	sub_820E6B10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x820e60c0
	if (!ctx.cr0.eq) goto loc_820E60C0;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// bl 0x820e6920
	ctx.lr = 0x820E60AC;
	sub_820E6920(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// li r10,1627
	ctx.r10.s64 = 1627;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x820e60c0
	goto loc_820E60C0;
loc_820E60BC:
	// li r3,87
	ctx.r3.s64 = 87;
loc_820E60C0:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E6C08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820E6C10;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r7,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x820e69e8
	ctx.lr = 0x820E6C40;
	sub_820E69E8(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x820e6c7c
	if (!ctx.cr0.lt) goto loc_820E6C7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,1080(r31)
	REX_STORE_U32(ctx.r31.u32 + 1080, ctx.r11.u32);
	// b 0x820e6cbc
	goto loc_820E6CBC;
loc_820E6C7C:
	// stw r28,1080(r31)
	REX_STORE_U32(ctx.r31.u32 + 1080, ctx.r28.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x820e7568
	ctx.lr = 0x820E6C98;
	sub_820E7568(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_820E6CA8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x820e6ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820E6CA8;
loc_820E6CBC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8040) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_820E8044:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820e8044
	if (!ctx.cr6.eq) goto loc_820E8044;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8870) {
	REX_FUNC_PROLOGUE();
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x82374e44
	__imp__XamNotifyCreateListener(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8AA0) {
	REX_FUNC_PROLOGUE();
	// b 0x82374e64
	__imp__XamContentDelete(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8AB8) {
	REX_FUNC_PROLOGUE();
	// b 0x82374e94
	__imp__XamContentCreateEnumerator(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820E8B88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1252(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1252);
	// lwz r3,16(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820E8C80) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375034
	ctx.lr = 0x820E8C9C;
	__imp__KeQuerySystemTime(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82375024
	ctx.lr = 0x820E8CA8;
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r10,98(r1)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,110(r1)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r8,100(r1)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r7,102(r1)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r6,104(r1)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r5,106(r1)
	ctx.r5.u64 = REX_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r4,108(r1)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r1.u32 + 108);
	// sth r11,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// sth r9,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r9.u16);
	// sth r8,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// sth r7,8(r31)
	REX_STORE_U16(ctx.r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	REX_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// sth r5,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r5.u16);
	// sth r4,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r4.u16);
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

DEFINE_REX_FUNC(sub_820E9EC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r6,16
	ctx.r6.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// li r11,96
	ctx.r11.s64 = 96;
	// li r12,112
	ctx.r12.s64 = 112;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// blt cr6,0x820ea188
	if (ctx.cr6.lt) goto loc_820EA188;
loc_820E9EE4:
	// addi r0,r5,-1024
	ctx.r0.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r0,1024
	ctx.cr6.compare<uint32_t>(ctx.r0.u32, 1024, ctx.xer);
	// blt cr6,0x820e9ef4
	if (ctx.cr6.lt) goto loc_820E9EF4;
	// li r0,1024
	ctx.r0.s64 = 1024;
loc_820E9EF4:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v9,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v9.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v10,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v10.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v11,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v12,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v13,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v14,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v14.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v15,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v15.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v16,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v16.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v17,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v17.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v18,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v18.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v19,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v19.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v20,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v20.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v21,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v21.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v22,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v22.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v23,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v23.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v24,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v24.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v25,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v25.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v26,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v26.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v27,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v27.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v28,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v28.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v29,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v29.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v30,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v30.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v31,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v31.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v32,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v32.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v33,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v33.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v34,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v34.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v35,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v35.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v36,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v36.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v37,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v37.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v38,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v38.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v39,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v39.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v40,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v40.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v41,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v42,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v43,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v43.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v44,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v45,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v46,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v47,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v48,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v50,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v51,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v52,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v53,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v54,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v55,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v56,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// lvx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v58,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v59,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v60,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v62,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v63,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v0,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbt r4,r0
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v9,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v9.u8[15 - i]);
	// stvlx128 v10,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v10.u8[15 - i]);
	// stvlx128 v11,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v11.u8[15 - i]);
	// stvlx128 v12,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvlx128 v13,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// stvlx128 v14,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v14.u8[15 - i]);
	// stvlx128 v15,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v15.u8[15 - i]);
	// stvlx128 v16,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v16.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v17,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v17.u8[15 - i]);
	// stvlx128 v18,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v18.u8[15 - i]);
	// stvlx128 v19,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v19.u8[15 - i]);
	// stvlx128 v20,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v20.u8[15 - i]);
	// stvlx128 v21,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v21.u8[15 - i]);
	// stvlx128 v22,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v22.u8[15 - i]);
	// stvlx128 v23,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v23.u8[15 - i]);
	// stvlx128 v24,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v24.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v25,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v25.u8[15 - i]);
	// stvlx128 v26,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v26.u8[15 - i]);
	// stvlx128 v27,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v27.u8[15 - i]);
	// stvlx128 v28,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v28.u8[15 - i]);
	// stvlx128 v29,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v29.u8[15 - i]);
	// stvlx128 v30,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v30.u8[15 - i]);
	// stvlx128 v31,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v31.u8[15 - i]);
	// stvlx128 v32,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v32.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v33,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v33.u8[15 - i]);
	// stvlx128 v34,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v34.u8[15 - i]);
	// stvlx128 v35,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v35.u8[15 - i]);
	// stvlx128 v36,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v36.u8[15 - i]);
	// stvlx128 v37,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v37.u8[15 - i]);
	// stvlx128 v38,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v38.u8[15 - i]);
	// stvlx128 v39,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v39.u8[15 - i]);
	// stvlx128 v40,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v40.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v41,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v41.u8[15 - i]);
	// stvlx128 v42,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v42.u8[15 - i]);
	// stvlx128 v43,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v43.u8[15 - i]);
	// stvlx128 v44,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v44.u8[15 - i]);
	// stvlx128 v45,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvlx128 v46,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v46.u8[15 - i]);
	// stvlx128 v47,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v47.u8[15 - i]);
	// stvlx128 v48,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v48.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v49,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v49.u8[15 - i]);
	// stvlx128 v50,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v50.u8[15 - i]);
	// stvlx128 v51,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvlx128 v52,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v52.u8[15 - i]);
	// stvlx128 v53,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvlx128 v54,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// stvlx128 v55,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvlx128 v56,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v56.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// stvlx128 v57,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvlx128 v58,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// stvlx128 v59,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvlx128 v60,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvlx128 v61,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvlx128 v62,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvlx128 v63,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvlx128 v0,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-1024
	ctx.r5.s64 = ctx.r5.s64 + -1024;
	// cmplwi cr6,r5,1024
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1024, ctx.xer);
	// bge cr6,0x820e9ee4
	if (!ctx.cr6.lt) goto loc_820E9EE4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_820EA188:
	// lvx128 v1,r0,r4
	ea = (ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v1.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v2,r6,r4
	ea = (ctx.r6.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v2.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v3,r7,r4
	ea = (ctx.r7.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v4,r8,r4
	ea = (ctx.r8.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v4.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v5,r9,r4
	ea = (ctx.r9.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v5.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v6,r10,r4
	ea = (ctx.r10.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v7,r11,r4
	ea = (ctx.r11.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v8,r12,r4
	ea = (ctx.r12.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// dcbf r0,r4
	// addi r4,r4,128
	ctx.r4.s64 = ctx.r4.s64 + 128;
	// stvlx128 v1,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v1.u8[15 - i]);
	// stvlx128 v2,r6,r3
	ea = ctx.r6.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v2.u8[15 - i]);
	// stvlx128 v3,r7,r3
	ea = ctx.r7.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v3.u8[15 - i]);
	// stvlx128 v4,r8,r3
	ea = ctx.r8.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v4.u8[15 - i]);
	// stvlx128 v5,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v5.u8[15 - i]);
	// stvlx128 v6,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v6.u8[15 - i]);
	// stvlx128 v7,r11,r3
	ea = ctx.r11.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v7.u8[15 - i]);
	// stvlx128 v8,r12,r3
	ea = ctx.r12.u32 + ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v8.u8[15 - i]);
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// addi r5,r5,-128
	ctx.r5.s64 = ctx.r5.s64 + -128;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bgt cr6,0x820ea188
	if (ctx.cr6.gt) goto loc_820EA188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FB6E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820FB6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820fb658
	ctx.lr = 0x820FB708;
	sub_820FB658(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820fb724
	if (!ctx.cr6.eq) goto loc_820FB724;
loc_820FB718:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820FB724:
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820fa630
	ctx.lr = 0x820FB730;
	sub_820FA630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820fb718
	if (ctx.cr6.eq) goto loc_820FB718;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820fb718
	if (ctx.cr6.eq) goto loc_820FB718;
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820FB754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r9,r30,304
	ctx.r9.s64 = ctx.r30.s64 + 304;
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820FB770;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FE1D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FE348) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe364
	if (ctx.cr6.eq) goto loc_820FE364;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_820FE364:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fe3a0
	if (!ctx.cr6.eq) goto loc_820FE3A0;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820fe398
	if (!ctx.cr6.eq) goto loc_820FE398;
loc_820FE384:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,33(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820fe384
	if (ctx.cr6.eq) goto loc_820FE384;
loc_820FE398:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_820FE3A0:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820fe3d8
	if (!ctx.cr6.eq) goto loc_820FE3D8;
loc_820FE3B0:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820fe3d8
	if (!ctx.cr6.eq) goto loc_820FE3D8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820fe3b0
	if (ctx.cr6.eq) goto loc_820FE3B0;
loc_820FE3D8:
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF9A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r5,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// lwz r10,44(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r3,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FFE78) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x820e7fe8
	sub_820E7FE8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FFF20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820FFF28;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x820fff48
	if (!ctx.cr6.eq) goto loc_820FFF48;
loc_820FFF3C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820FFF48:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820fff3c
	if (ctx.cr6.eq) goto loc_820FFF3C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,12(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r9,r11,6148
	ctx.r9.s64 = ctx.r11.s64 + 6148;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// beq cr6,0x82100014
	if (ctx.cr6.eq) goto loc_82100014;
loc_820FFF74:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfd f0,40(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfd f0,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
loc_820FFF8C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r1,97
	ctx.r10.s64 = ctx.r1.s64 + 97;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r8,84(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 84);
	// stb r8,-1(r10)
	REX_STORE_U8(ctx.r10.u32 + -1, ctx.r8.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r6,85(r7)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r7.u32 + 85);
	// stb r6,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r4,86(r5)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r5.u32 + 86);
	// stb r4,1(r10)
	REX_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r9,87(r3)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r3.u32 + 87);
	// stb r9,2(r10)
	REX_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lbz r7,88(r8)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r8.u32 + 88);
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stb r7,3(r10)
	REX_STORE_U8(ctx.r10.u32 + 3, ctx.r7.u8);
	// bdnz 0x820fff8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820FFF8C;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82100004;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820fff74
	if (!ctx.cr6.eq) goto loc_820FFF74;
loc_82100014:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82105950) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x821059d4
	if (ctx.cr6.lt) goto loc_821059D4;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x821059d4
	if (!ctx.cr6.lt) goto loc_821059D4;
	// mulli r11,r4,1244
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1244));
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,172(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r7,116(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 116);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r9,112(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82105990:
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x821059b0
	if (ctx.cr6.eq) goto loc_821059B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82105990
	if (ctx.cr6.lt) goto loc_82105990;
	// blr 
	return;
loc_821059B0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,184(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 184);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// blr 
	return;
loc_821059D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821067B0) {
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
	// lwz r3,60(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821067dc
	if (!ctx.cr6.eq) goto loc_821067DC;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x821065b0
	ctx.lr = 0x821067D8;
	sub_821065B0(ctx, base);
	// b 0x821067e0
	goto loc_821067E0;
loc_821067DC:
	// bl 0x821065b0
	ctx.lr = 0x821067E0;
	sub_821065B0(ctx, base);
loc_821067E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
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

DEFINE_REX_FUNC(sub_82107AC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,32(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfs f11,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f11
	ctx.f10.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f10,36(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// lfs f9,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fneg f8,f9
	ctx.f8.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f8,40(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// lfs f7,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fneg f6,f7
	ctx.f6.u64 = ctx.f7.u64 ^ 0x8000000000000000;
	// stfs f6,44(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82108B58) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lfs f12,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
	// bne cr6,0x82108b78
	if (!ctx.cr6.eq) goto loc_82108B78;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmul f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 * ctx.f1.f64;
	// blr 
	return;
loc_82108B78:
	// addi r6,r4,-1
	ctx.r6.s64 = ctx.r4.s64 + -1;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x82108bc0
	if (ctx.cr6.lt) goto loc_82108BC0;
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82108B9C:
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfsx f11,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// lfs f10,4(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fadds f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// blt cr6,0x82108b9c
	if (ctx.cr6.lt) goto loc_82108B9C;
loc_82108BC0:
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82108bd8
	if (!ctx.cr6.lt) goto loc_82108BD8;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f12,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
loc_82108BD8:
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// fadds f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfsx f13,r10,r11
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmul f11,f13,f1
	ctx.f11.f64 = ctx.f13.f64 * ctx.f1.f64;
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fadds f1,f9,f10
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210AFC0) {
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
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,44(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bne cr6,0x8210b000
	if (!ctx.cr6.eq) goto loc_8210B000;
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
loc_8210B000:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x820e7d70
	ctx.lr = 0x8210B008;
	sub_820E7D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x8210b03c
	if (ctx.cr6.eq) goto loc_8210B03C;
	// ld r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bne cr6,0x8210b034
	if (!ctx.cr6.eq) goto loc_8210B034;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820e7d50
	ctx.lr = 0x8210B030;
	sub_820E7D50(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_8210B034:
	// std r11,48(r31)
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r11.u64);
	// std r11,40(r31)
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
loc_8210B03C:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210b074
	if (ctx.cr6.eq) goto loc_8210B074;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x820e7d50
	ctx.lr = 0x8210B050;
	sub_820E7D50(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// ld r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// std r9,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r9.u64);
	// ld r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 48);
	// subf r9,r8,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r8.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// std r11,40(r31)
	REX_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// std r7,48(r31)
	REX_STORE_U64(ctx.r31.u32 + 48, ctx.r7.u64);
loc_8210B074:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8210CEA0) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,7000
	ctx.r10.s64 = ctx.r11.s64 + 7000;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x820f4d28
	ctx.lr = 0x8210CEE4;
	sub_820F4D28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r11,568(r31)
	REX_STORE_U32(ctx.r31.u32 + 568, ctx.r11.u32);
	// stw r11,572(r31)
	REX_STORE_U32(ctx.r31.u32 + 572, ctx.r11.u32);
	// stw r30,952(r31)
	REX_STORE_U32(ctx.r31.u32 + 952, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_8210DE80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8210DE88;
	__savegprlr_21(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r21,r3,1
	ctx.r21.s64 = ctx.r3.s64 + 65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r21,r21,-18208
	ctx.r21.s64 = ctx.r21.s64 + -18208;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210e0e0
	if (ctx.cr6.eq) goto loc_8210E0E0;
	// addis r22,r3,1
	ctx.r22.s64 = ctx.r3.s64 + 65536;
	// addi r22,r22,-18240
	ctx.r22.s64 = ctx.r22.s64 + -18240;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x8210e0e0
	if (ctx.cr6.eq) goto loc_8210E0E0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r11,47488
	ctx.r9.u64 = ctx.r11.u64 | 47488;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r23,r10,47480
	ctx.r23.u64 = ctx.r10.u64 | 47480;
	// ori r24,r8,47472
	ctx.r24.u64 = ctx.r8.u64 | 47472;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r25,r3,r9
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8210e070
	if (ctx.cr6.eq) goto loc_8210E070;
	// lwzx r3,r3,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r24.u32);
	// add r26,r31,r24
	ctx.r26.u64 = ctx.r31.u64 + ctx.r24.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210df24
	if (!ctx.cr6.eq) goto loc_8210DF24;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r7,r11,47504
	ctx.r7.u64 = ctx.r11.u64 | 47504;
	// ori r6,r10,47496
	ctx.r6.u64 = ctx.r10.u64 | 47496;
	// ori r5,r9,47500
	ctx.r5.u64 = ctx.r9.u64 | 47500;
	// ori r11,r8,47508
	ctx.r11.u64 = ctx.r8.u64 | 47508;
	// stwx r28,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r28.u32);
	// stwx r28,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// stwx r28,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x8210e054
	goto loc_8210E054;
loc_8210DF24:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// bl 0x820e8ac0
	ctx.lr = 0x8210DF2C;
	sub_820E8AC0(ctx, base);
	// lis r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r3,1167
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1167, ctx.xer);
	// ori r5,r8,47500
	ctx.r5.u64 = ctx.r8.u64 | 47500;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stwx r28,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r28.u32);
	// bne cr6,0x8210df78
	if (!ctx.cr6.eq) goto loc_8210DF78;
	// ori r9,r11,47496
	ctx.r9.u64 = ctx.r11.u64 | 47496;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r11,r7,47504
	ctx.r11.u64 = ctx.r7.u64 | 47504;
	// stwx r10,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r10.u32);
	// ori r10,r6,47508
	ctx.r10.u64 = ctx.r6.u64 | 47508;
	// stwx r28,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r28.u32);
	// stwx r28,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r9,0(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// b 0x8210e060
	goto loc_8210E060;
loc_8210DF78:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r10,180(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// ori r7,r11,47504
	ctx.r7.u64 = ctx.r11.u64 | 47504;
	// ori r6,r9,47496
	ctx.r6.u64 = ctx.r9.u64 | 47496;
	// addi r27,r27,-18028
	ctx.r27.s64 = ctx.r27.s64 + -18028;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r28,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r28.u32);
	// stw r28,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
	// bne cr6,0x8210dff4
	if (!ctx.cr6.eq) goto loc_8210DFF4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8210DFB0:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e8ac0
	ctx.lr = 0x8210DFBC;
	sub_820E8AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210dfe0
	if (!ctx.cr6.eq) goto loc_8210DFE0;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8210dfe0
	if (!ctx.cr6.eq) goto loc_8210DFE0;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8210dfec
	if (ctx.cr6.eq) goto loc_8210DFEC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8210DFE0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x8210dfb0
	if (ctx.cr6.lt) goto loc_8210DFB0;
loc_8210DFEC:
	// addi r11,r29,11
	ctx.r11.s64 = ctx.r29.s64 + 11;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8210DFF4:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8210e04c
	if (!ctx.cr6.eq) goto loc_8210E04C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8210E008:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820e8ac0
	ctx.lr = 0x8210E014;
	sub_820E8AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210e038
	if (!ctx.cr6.eq) goto loc_8210E038;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8210e038
	if (!ctx.cr6.eq) goto loc_8210E038;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8210e044
	if (ctx.cr6.eq) goto loc_8210E044;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8210E038:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// blt cr6,0x8210e008
	if (ctx.cr6.lt) goto loc_8210E008;
loc_8210E044:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8210E04C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stwx r11,r31,r23
	REX_STORE_U32(ctx.r31.u32 + ctx.r23.u32, ctx.r11.u32);
loc_8210E054:
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8210E060:
	// addis r4,r31,1
	ctx.r4.s64 = ctx.r31.s64 + 65536;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r4,r4,-18044
	ctx.r4.s64 = ctx.r4.s64 + -18044;
	// bctrl 
	ctx.lr = 0x8210E070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210E070:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,47484
	ctx.r10.u64 = ctx.r11.u64 | 47484;
	// lwzx r30,r31,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8210e0bc
	if (ctx.cr6.eq) goto loc_8210E0BC;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwzx r3,r31,r24
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// bl 0x820e8ac0
	ctx.lr = 0x8210E094;
	sub_820E8AC0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8210e0a4
	if (!ctx.cr6.eq) goto loc_8210E0A4;
	// lwzx r11,r31,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8210E0A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210E0BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8210E0BC:
	// stw r28,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x820e8df8
	ctx.lr = 0x8210E0D0;
	sub_820E8DF8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,47324
	ctx.r10.u64 = ctx.r11.u64 | 47324;
	// lwzx r3,r31,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x820e8f80
	ctx.lr = 0x8210E0E0;
	sub_820E8F80(ctx, base);
loc_8210E0E0:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82115D60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82115de0
	if (ctx.cr6.eq) goto loc_82115DE0;
	// b 0x82115db8
	goto loc_82115DB8;
loc_82115D8C:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82115b38
	ctx.lr = 0x82115DA0;
	sub_82115B38(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x8216b138
	ctx.lr = 0x82115DB8;
	sub_8216B138(ctx, base);
loc_82115DB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bne cr6,0x82115d8c
	if (!ctx.cr6.eq) goto loc_82115D8C;
	// lis r4,9367
	ctx.r4.s64 = 613875712;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8216b138
	ctx.lr = 0x82115DD8;
	sub_8216B138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82115DE0:
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

DEFINE_REX_FUNC(sub_82116B10) {
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
	// lwz r11,112(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// addi r30,r3,112
	ctx.r30.s64 = ctx.r3.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116B40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116b88
	if (ctx.cr6.eq) goto loc_82116B88;
	// lwz r31,556(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
loc_82116B50:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82116b68
	if (ctx.cr6.eq) goto loc_82116B68;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82116b6c
	goto loc_82116B6C;
loc_82116B68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82116B6C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116b88
	if (ctx.cr6.eq) goto loc_82116B88;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116B84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82116b50
	goto loc_82116B50;
loc_82116B88:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116B9C;
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

DEFINE_REX_FUNC(sub_82117F18) {
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
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82117F40:
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82117f40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82117F40;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82116c80
	ctx.lr = 0x82117F5C;
	sub_82116C80(ctx, base);
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

DEFINE_REX_FUNC(sub_82118D78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,22125
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22125, ctx.xer);
	// bne cr6,0x82118d88
	if (!ctx.cr6.eq) goto loc_82118D88;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82118D88:
	// cmplwi cr6,r4,43875
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 43875, ctx.xer);
	// bne cr6,0x82118d98
	if (!ctx.cr6.eq) goto loc_82118D98;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82118D98:
	// cmplwi cr6,r4,48000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 48000, ctx.xer);
	// bne cr6,0x82118da8
	if (!ctx.cr6.eq) goto loc_82118DA8;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_82118DA8:
	// cmplwi cr6,r4,11250
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11250, ctx.xer);
	// bne cr6,0x82118db8
	if (!ctx.cr6.eq) goto loc_82118DB8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82118DB8:
	// cmplwi cr6,r4,32250
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32250, ctx.xer);
	// bne cr6,0x82118dc8
	if (!ctx.cr6.eq) goto loc_82118DC8;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82118DC8:
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// bne cr6,0x82118dd8
	if (!ctx.cr6.eq) goto loc_82118DD8;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82118DD8:
	// cmplwi cr6,r4,16125
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16125, ctx.xer);
	// bne cr6,0x82118de8
	if (!ctx.cr6.eq) goto loc_82118DE8;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82118DE8:
	// addi r11,r4,-8250
	ctx.r11.s64 = ctx.r4.s64 + -8250;
	// li r10,8
	ctx.r10.s64 = 8;
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
}

DEFINE_REX_FUNC(sub_82119968) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82119970;
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
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821199A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// beq cr6,0x821199f4
	if (ctx.cr6.eq) goto loc_821199F4;
	// stfs f31,76(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r5,80(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821199d0
	if (ctx.cr6.eq) goto loc_821199D0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821199d4
	goto loc_821199D4;
loc_821199D0:
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_821199D4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821199E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x821199f4
	if (!ctx.cr0.lt) goto loc_821199F4;
	// stfs f30,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 76, temp.u32);
loc_821199F4:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119A0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

DEFINE_REX_FUNC(sub_8211B5B8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8211B5C0;
	__savegprlr_27(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r30,r4,96
	ctx.r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(96));
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r9,36(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// rlwinm r8,r9,8,19,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 82);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// beq 0x8211b6b8
	if (ctx.cr0.eq) goto loc_8211B6B8;
	// subfic r8,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.u64 = static_cast<uint64_t>(256) - ctx.r9.u64;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8211b638
	if (!ctx.cr6.lt) goto loc_8211B638;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r9,82(r8)
	REX_STORE_U16(ctx.r8.u32 + 82, ctx.r9.u16);
	// b 0x8211b6b8
	goto loc_8211B6B8;
loc_8211B638:
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r7,r8,r10
	ctx.r7.u64 = ctx.r10.u64 - ctx.r8.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// sth r6,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// subfc r6,r6,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r6.u32;
	ctx.r6.u64 = ctx.r10.u64 - ctx.r6.u64;
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8211b684
	if (ctx.cr6.eq) goto loc_8211B684;
	// rlwimi r8,r10,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// stw r8,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
loc_8211B684:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8211b6a0
	if (ctx.cr6.eq) goto loc_8211B6A0;
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_8211B6A0:
	// addi r10,r10,0
	ctx.r10.s64 = ctx.r10.s64 + 0;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r31,r10,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addic r10,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r10.s64 = ctx.r31.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_8211B6B8:
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r10,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r10,24
	ctx.r29.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r8,r6,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8211b6f8
	if (ctx.cr6.gt) goto loc_8211B6F8;
	// blt cr6,0x8211b6f4
	if (ctx.cr6.lt) goto loc_8211B6F4;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r8,r8,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8211b6f4
	if (ctx.cr0.eq) goto loc_8211B6F4;
	// clrlwi. r8,r31,24
	ctx.r8.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8211b6fc
	if (!ctx.cr0.eq) goto loc_8211B6FC;
loc_8211B6F4:
	// rlwinm r8,r6,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
loc_8211B6F8:
	// subf r7,r10,r8
	ctx.r7.u64 = ctx.r8.u64 - ctx.r10.u64;
loc_8211B6FC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211b760
	if (ctx.cr6.eq) goto loc_8211B760;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8211b710
	if (ctx.cr6.lt) goto loc_8211B710;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_8211B710:
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r31,r6,10,27,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// rlwinm r6,r9,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// subfc r31,r31,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r31.u32;
	ctx.r31.u64 = ctx.r8.u64 - ctx.r31.u64;
	// subf r7,r9,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r9.u64;
	// subfe r9,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8211b744
	if (ctx.cr6.eq) goto loc_8211B744;
	// rlwimi r5,r9,0,27,31
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// stw r5,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
loc_8211B744:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8211b760
	if (ctx.cr6.eq) goto loc_8211B760;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8211B760:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8211b780
	if (ctx.cr6.eq) goto loc_8211B780;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8211b780
	if (ctx.cr6.eq) goto loc_8211B780;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r29,r4
	ctx.r4.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// sth r29,82(r10)
	REX_STORE_U16(ctx.r10.u32 + 82, ctx.r29.u16);
loc_8211B780:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r30,r10
	ctx.r11.u64 = ctx.r30.u64 + ctx.r10.u64;
	// rlwinm r9,r9,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1;
	// addi r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 + 76;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// srw r3,r4,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120D58) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82127270
	sub_82127270(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120D70) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82126a90
	sub_82126A90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120D98) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82120d70
	sub_82120D70(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120F38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82120F40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120F64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,380(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 380);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82120f80
	if (!ctx.cr6.eq) goto loc_82120F80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82120F80:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120F94;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82121ED8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82121EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82121F04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,324(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 324);
	// b 0x82121f1c
	goto loc_82121F1C;
loc_82121F0C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82121f24
	if (ctx.cr6.eq) goto loc_82121F24;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_82121F1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82121f0c
	if (!ctx.cr6.eq) goto loc_82121F0C;
loc_82121F24:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r30,120
	ctx.r3.s64 = ctx.r30.s64 + 120;
	// bl 0x8211a1b8
	ctx.lr = 0x82121F30;
	sub_8211A1B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82121F44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82122E10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,52(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,60(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bne cr6,0x82122e3c
	if (!ctx.cr6.eq) goto loc_82122E3C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x82122e40
	if (ctx.cr6.eq) goto loc_82122E40;
loc_82122E3C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_82122E40:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8211c320
	sub_8211C320(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82123A58) {
	REX_FUNC_PROLOGUE();
	// b 0x82122f38
	sub_82122F38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82123A60) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123a90
	if (ctx.cr6.eq) goto loc_82123A90;
	// bl 0x82118bc8
	ctx.lr = 0x82123A8C;
	sub_82118BC8(ctx, base);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82123A90:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82123aa4
	if (ctx.cr6.eq) goto loc_82123AA4;
	// bl 0x82118bc8
	ctx.lr = 0x82123AA0;
	sub_82118BC8(ctx, base);
	// stw r30,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82123AA4:
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x8215ec60
	ctx.lr = 0x82123AB4;
	sub_8215EC60(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82123AD0;
	sub_8215EC60(ctx, base);
	// stw r30,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_821266C8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bctrl 
	ctx.lr = 0x82126714;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8215e640
	ctx.lr = 0x82126724;
	sub_8215E640(ctx, base);
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

DEFINE_REX_FUNC(sub_821273C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x821273D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821273fc
	if (!ctx.cr6.eq) goto loc_821273FC;
	// lis r30,4919
	ctx.r30.s64 = 322371584;
	// ori r30,r30,61441
	ctx.r30.u64 = ctx.r30.u64 | 61441;
	// b 0x82127400
	goto loc_82127400;
loc_821273FC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82127400:
	// lwz r31,32(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// b 0x82127438
	goto loc_82127438;
loc_82127408:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82127420
	if (ctx.cr6.eq) goto loc_82127420;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82127424
	goto loc_82127424;
loc_82127420:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82127424:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8211a228
	ctx.lr = 0x82127438;
	sub_8211A228(ctx, base);
loc_82127438:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82127408
	if (!ctx.cr6.eq) goto loc_82127408;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82127468
	if (!ctx.cr6.eq) goto loc_82127468;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
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
	ctx.lr = 0x82127464;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82127468:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212B528) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8212B530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x8212b550
	if (ctx.cr6.gt) goto loc_8212B550;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_8212B550:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212b5b4
	if (!ctx.cr6.gt) goto loc_8212B5B4;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8212B564:
	// lwz r11,576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 576);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212b5a0
	if (!ctx.cr6.eq) goto loc_8212B5A0;
	// lwz r9,564(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwz r8,560(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwz r7,148(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,140(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// lwz r3,136(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// bl 0x82144fe0
	ctx.lr = 0x8212B598;
	sub_82144FE0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212b5b4
	if (ctx.cr6.lt) goto loc_8212B5B4;
loc_8212B5A0:
	// lwz r11,572(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 572);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,152
	ctx.r30.s64 = ctx.r30.s64 + 152;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8212b564
	if (ctx.cr6.lt) goto loc_8212B564;
loc_8212B5B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212F000) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8212F008;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,500(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 500);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// bne cr6,0x8212f038
	if (!ctx.cr6.eq) goto loc_8212F038;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8212F038:
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r29,0(r27)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8212f060
	if (ctx.cr6.eq) goto loc_8212F060;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212e888
	ctx.lr = 0x8212F058;
	sub_8212E888(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212f0bc
	if (ctx.cr6.lt) goto loc_8212F0BC;
loc_8212F060:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8212ebe8
	ctx.lr = 0x8212F06C;
	sub_8212EBE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212f0bc
	if (ctx.cr6.lt) goto loc_8212F0BC;
	// lwz r11,472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8212f0bc
	if (!ctx.cr6.eq) goto loc_8212F0BC;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x8212f0bc
	if (ctx.cr6.eq) goto loc_8212F0BC;
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// lbz r5,201(r30)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r30.u32 + 201);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x8212f0b8
	if (!ctx.cr6.eq) goto loc_8212F0B8;
	// bl 0x8214c980
	ctx.lr = 0x8212F0AC;
	sub_8214C980(ctx, base);
	// sth r29,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8212F0B8:
	// bl 0x8214c430
	ctx.lr = 0x8212F0BC;
	sub_8214C430(ctx, base);
loc_8212F0BC:
	// sth r29,0(r27)
	REX_STORE_U16(ctx.r27.u32 + 0, ctx.r29.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82130408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x82130410;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// lwz r28,108(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 108);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// lwz r29,112(r5)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r5.u32 + 112);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r19,4(r7)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lhz r31,2(r7)
	ctx.r31.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// li r23,2
	ctx.r23.s64 = 2;
	// lwz r24,28(r7)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r25,32(r7)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r7.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r20,36(r7)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// lwz r27,40(r7)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r5,24(r7)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r18,44(r7)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// bne cr6,0x82130474
	if (!ctx.cr6.eq) goto loc_82130474;
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130474
	if (!ctx.cr6.eq) goto loc_82130474;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82130ad8
	if (ctx.cr6.eq) goto loc_82130AD8;
loc_82130474:
	// li r15,8
	ctx.r15.s64 = 8;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// bgt cr6,0x821304dc
	if (ctx.cr6.gt) goto loc_821304DC;
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// rlwinm r10,r8,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821304d4
	if (ctx.cr6.eq) goto loc_821304D4;
	// rlwinm r10,r8,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821304d4
	if (ctx.cr6.eq) goto loc_821304D4;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// rlwinm r30,r8,29,30,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x3;
	// bl 0x821302f8
	ctx.lr = 0x821304B8;
	sub_821302F8(ctx, base);
	// divwu r11,r3,r31
	ctx.r11.u64 = uint32_t(ctx.r31.u32 ? ctx.r3.u32 / ctx.r31.u32 : 0);
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// blt cr6,0x821304cc
	if (ctx.cr6.lt) goto loc_821304CC;
	// slw r31,r15,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r30.u8 & 0x3F));
	// b 0x82130530
	goto loc_82130530;
loc_821304CC:
	// slw r31,r23,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r23.u32 << (ctx.r30.u8 & 0x3F));
	// b 0x82130530
	goto loc_82130530;
loc_821304D4:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82130530
	goto loc_82130530;
loc_821304DC:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,29,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// slw r31,r10,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82130c40
	if (ctx.cr6.gt) goto loc_82130C40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130530
	if (ctx.cr6.eq) goto loc_82130530;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// bdz 0x8213051c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8213051C;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// bdz 0x82130524
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130524;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// b 0x8213052c
	goto loc_8213052C;
loc_8213051C:
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82130530
	goto loc_82130530;
loc_82130524:
	// li r23,4
	ctx.r23.s64 = 4;
	// b 0x82130530
	goto loc_82130530;
loc_8213052C:
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
loc_82130530:
	// lis r11,-13108
	ctx.r11.s64 = -859045888;
	// lis r10,-21846
	ctx.r10.s64 = -1431699456;
	// ori r5,r11,52429
	ctx.r5.u64 = ctx.r11.u64 | 52429;
	// li r3,5
	ctx.r3.s64 = 5;
	// ori r6,r10,43691
	ctx.r6.u64 = ctx.r10.u64 | 43691;
	// li r4,3
	ctx.r4.s64 = 3;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// bne cr6,0x821305b0
	if (!ctx.cr6.eq) goto loc_821305B0;
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821305b0
	if (ctx.cr6.eq) goto loc_821305B0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821305b0
	if (!ctx.cr6.eq) goto loc_821305B0;
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// cmplwi cr6,r11,151
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 151, ctx.xer);
	// bge cr6,0x82130590
	if (!ctx.cr6.lt) goto loc_82130590;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r24,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// bne cr6,0x821305a4
	if (!ctx.cr6.eq) goto loc_821305A4;
loc_82130580:
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821307a0
	if (ctx.cr6.lt) goto loc_821307A0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x821305c0
	goto loc_821305C0;
loc_82130590:
	// cmplwi cr6,r11,251
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 251, ctx.xer);
	// bge cr6,0x821305b0
	if (!ctx.cr6.lt) goto loc_821305B0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r11,r24,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// beq cr6,0x82130580
	if (ctx.cr6.eq) goto loc_82130580;
loc_821305A4:
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821305b0
	if (ctx.cr6.lt) goto loc_821305B0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_821305B0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x821307a0
	if (ctx.cr6.eq) goto loc_821307A0;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// bne cr6,0x821307a0
	if (!ctx.cr6.eq) goto loc_821307A0;
loc_821305C0:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821307a0
	if (ctx.cr6.eq) goto loc_821307A0;
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8213070c
	if (!ctx.cr6.eq) goto loc_8213070C;
	// cmplwi cr6,r23,1
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 1, ctx.xer);
	// ble cr6,0x8213070c
	if (!ctx.cr6.gt) goto loc_8213070C;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// rlwinm r18,r18,31,1,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82130604
	if (!ctx.cr6.eq) goto loc_82130604;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821307a0
	if (!ctx.cr6.eq) goto loc_821307A0;
loc_82130604:
	// rlwinm r11,r27,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82130618
	if (ctx.cr6.lt) goto loc_82130618;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82130618:
	// rlwinm r11,r20,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7FFFFFFF;
	// li r20,1
	ctx.r20.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8213062c
	if (ctx.cr6.lt) goto loc_8213062C;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_8213062C:
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x8213063c
	if (ctx.cr6.gt) goto loc_8213063C;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x821307a0
	goto loc_821307A0;
loc_8213063C:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8213065c
	if (!ctx.cr0.eq) goto loc_8213065C;
	// divwu r25,r27,r3
	ctx.r25.u64 = uint32_t(ctx.r3.u32 ? ctx.r27.u32 / ctx.r3.u32 : 0);
	// b 0x821307a0
	goto loc_821307A0;
loc_8213065C:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// ble cr6,0x82130678
	if (!ctx.cr6.gt) goto loc_82130678;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130678
	if (!ctx.cr6.eq) goto loc_82130678;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821307a0
	goto loc_821307A0;
loc_82130678:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// ble cr6,0x821306a0
	if (!ctx.cr6.gt) goto loc_821306A0;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821306a0
	if (!ctx.cr0.eq) goto loc_821306A0;
	// divwu r25,r27,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r27.u32 / ctx.r4.u32 : 0);
	// b 0x821307a0
	goto loc_821307A0;
loc_821306A0:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821306dc
	if (ctx.cr6.lt) goto loc_821306DC;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821306d4
	if (ctx.cr6.gt) goto loc_821306D4;
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x821306f8
	goto loc_821306F8;
loc_821306D4:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821306f0
	if (ctx.cr6.gt) goto loc_821306F0;
loc_821306DC:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821306f0
	if (ctx.cr6.gt) goto loc_821306F0;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// divwu r25,r27,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r27.u32 / ctx.r4.u32 : 0);
	// b 0x821306f8
	goto loc_821306F8;
loc_821306F0:
	// subf r27,r8,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r8.u64;
	// divwu r25,r27,r3
	ctx.r25.u64 = uint32_t(ctx.r3.u32 ? ctx.r27.u32 / ctx.r3.u32 : 0);
loc_821306F8:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821307a0
	if (ctx.cr6.lt) goto loc_821307A0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// b 0x821307a0
	goto loc_821307A0;
loc_8213070C:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82130758
	if (!ctx.cr6.eq) goto loc_82130758;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// bge cr6,0x82130758
	if (!ctx.cr6.lt) goto loc_82130758;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r18,r18,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130748
	if (!ctx.cr6.eq) goto loc_82130748;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821307a0
	if (!ctx.cr6.eq) goto loc_821307A0;
loc_82130748:
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r25,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x821307a0
	goto loc_821307A0;
loc_82130758:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821307a0
	if (!ctx.cr6.eq) goto loc_821307A0;
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// bge cr6,0x821307a0
	if (!ctx.cr6.lt) goto loc_821307A0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,30,2,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r18,r18,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130794
	if (!ctx.cr6.eq) goto loc_82130794;
	// lwz r11,36(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821307a0
	if (!ctx.cr6.eq) goto loc_821307A0;
loc_82130794:
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r20,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_821307A0:
	// lwz r11,92(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 92);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130980
	if (ctx.cr6.eq) goto loc_82130980;
	// lwz r11,96(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 96);
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mullw r11,r11,r19
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r19.s32);
	// addi r9,r11,999
	ctx.r9.s64 = ctx.r11.s64 + 999;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// divwu r10,r9,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r9.u32 / ctx.r7.u32 : 0);
	// bne cr6,0x82130918
	if (!ctx.cr6.eq) goto loc_82130918;
loc_821307CC:
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r24,r11
	ctx.r11.u64 = ctx.r24.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821307f8
	if (!ctx.cr6.gt) goto loc_821307F8;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// blt cr6,0x82130c40
	if (ctx.cr6.lt) goto loc_82130C40;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x821307cc
	if (ctx.cr6.lt) goto loc_821307CC;
loc_821307F8:
	// addi r11,r27,2
	ctx.r11.s64 = ctx.r27.s64 + 2;
	// mullw r9,r11,r24
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82130980
	if (!ctx.cr6.lt) goto loc_82130980;
	// divwu r11,r10,r24
	ctx.r11.u64 = uint32_t(ctx.r24.u32 ? ctx.r10.u32 / ctx.r24.u32 : 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82130c40
	if (!ctx.cr6.gt) goto loc_82130C40;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82130c40
	if (ctx.cr6.lt) goto loc_82130C40;
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82130838
	if (ctx.cr6.lt) goto loc_82130838;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82130838:
	// cmplwi cr6,r27,5
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 5, ctx.xer);
	// bgt cr6,0x82130848
	if (ctx.cr6.gt) goto loc_82130848;
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// b 0x82130980
	goto loc_82130980;
loc_82130848:
	// mulhwu r11,r27,r5
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r5.u32)) >> 32;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r8,r10,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82130868
	if (!ctx.cr0.eq) goto loc_82130868;
	// divwu r25,r27,r3
	ctx.r25.u64 = uint32_t(ctx.r3.u32 ? ctx.r27.u32 / ctx.r3.u32 : 0);
	// b 0x82130980
	goto loc_82130980;
loc_82130868:
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// ble cr6,0x82130884
	if (!ctx.cr6.gt) goto loc_82130884;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82130884
	if (!ctx.cr6.eq) goto loc_82130884;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82130980
	goto loc_82130980;
loc_82130884:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// ble cr6,0x821308ac
	if (!ctx.cr6.gt) goto loc_821308AC;
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf. r9,r10,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821308ac
	if (!ctx.cr0.eq) goto loc_821308AC;
	// divwu r25,r27,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r27.u32 / ctx.r4.u32 : 0);
	// b 0x82130980
	goto loc_82130980;
loc_821308AC:
	// mulhwu r11,r27,r6
	ctx.r11.u64 = (uint64_t(ctx.r27.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r11,r27,30
	ctx.r11.u64 = ctx.r27.u32 & 0x3;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r10,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821308e8
	if (ctx.cr6.lt) goto loc_821308E8;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821308e0
	if (ctx.cr6.gt) goto loc_821308E0;
	// subf r27,r11,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r11.u64;
	// rlwinm r25,r27,30,2,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82130904
	goto loc_82130904;
loc_821308E0:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x821308fc
	if (ctx.cr6.gt) goto loc_821308FC;
loc_821308E8:
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x821308fc
	if (ctx.cr6.gt) goto loc_821308FC;
	// subf r27,r10,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r10.u64;
	// divwu r25,r27,r4
	ctx.r25.u64 = uint32_t(ctx.r4.u32 ? ctx.r27.u32 / ctx.r4.u32 : 0);
	// b 0x82130904
	goto loc_82130904;
loc_821308FC:
	// subf r27,r8,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r8.u64;
	// divwu r25,r27,r3
	ctx.r25.u64 = uint32_t(ctx.r3.u32 ? ctx.r27.u32 / ctx.r3.u32 : 0);
loc_82130904:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82130980
	if (ctx.cr6.lt) goto loc_82130980;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
	// b 0x82130980
	goto loc_82130980;
loc_82130918:
	// lhz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
loc_8213091C:
	// cmplwi cr6,r9,355
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 355, ctx.xer);
	// beq cr6,0x82130930
	if (ctx.cr6.eq) goto loc_82130930;
	// cmplwi cr6,r9,359
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 359, ctx.xer);
	// rlwinm r11,r24,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x82130934
	if (!ctx.cr6.eq) goto loc_82130934;
loc_82130930:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82130934:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82130958
	if (!ctx.cr6.gt) goto loc_82130958;
	// li r22,1
	ctx.r22.s64 = 1;
	// rlwinm r23,r23,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r24,31,1,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// blt cr6,0x82130c40
	if (ctx.cr6.lt) goto loc_82130C40;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x8213091c
	if (ctx.cr6.lt) goto loc_8213091C;
loc_82130958:
	// mullw r11,r20,r24
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82130980
	if (!ctx.cr6.lt) goto loc_82130980;
	// divwu r20,r10,r24
	ctx.r20.u64 = uint32_t(ctx.r24.u32 ? ctx.r10.u32 / ctx.r24.u32 : 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplw cr6,r25,r20
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82130978
	if (ctx.cr6.lt) goto loc_82130978;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
loc_82130978:
	// cmplwi cr6,r20,1
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 1, ctx.xer);
	// blt cr6,0x82130c40
	if (ctx.cr6.lt) goto loc_82130C40;
loc_82130980:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130ad0
	if (!ctx.cr6.eq) goto loc_82130AD0;
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130ad0
	if (ctx.cr6.eq) goto loc_82130AD0;
	// lwz r10,88(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 88);
	// add r11,r18,r25
	ctx.r11.u64 = ctx.r18.u64 + ctx.r25.u64;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r19.s32);
	// addi r9,r10,999
	ctx.r9.s64 = ctx.r10.s64 + 999;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// divwu r10,r9,r7
	ctx.r10.u64 = uint32_t(ctx.r7.u32 ? ctx.r9.u32 / ctx.r7.u32 : 0);
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82130ad0
	if (!ctx.cr6.gt) goto loc_82130AD0;
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(ctx.r24.u32 ? ctx.r10.u32 / ctx.r24.u32 : 0);
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// bge cr6,0x821309d8
	if (!ctx.cr6.lt) goto loc_821309D8;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// beq cr6,0x82130c40
	if (ctx.cr6.eq) goto loc_82130C40;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// beq cr6,0x82130c40
	if (ctx.cr6.eq) goto loc_82130C40;
loc_821309D8:
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bge cr6,0x821309fc
	if (!ctx.cr6.lt) goto loc_821309FC;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// bne cr6,0x821309fc
	if (!ctx.cr6.eq) goto loc_821309FC;
	// cmplwi cr6,r23,8
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 8, ctx.xer);
	// beq cr6,0x821309fc
	if (ctx.cr6.eq) goto loc_821309FC;
	// divwu r9,r15,r23
	ctx.r9.u64 = uint32_t(ctx.r23.u32 ? ctx.r15.u32 / ctx.r23.u32 : 0);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// divwu r24,r24,r9
	ctx.r24.u64 = uint32_t(ctx.r9.u32 ? ctx.r24.u32 / ctx.r9.u32 : 0);
loc_821309FC:
	// mullw r8,r11,r24
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// divwu r9,r10,r24
	ctx.r9.u64 = uint32_t(ctx.r24.u32 ? ctx.r10.u32 / ctx.r24.u32 : 0);
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82130a10
	if (ctx.cr6.lt) goto loc_82130A10;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82130A10:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82130a4c
	if (!ctx.cr6.gt) goto loc_82130A4C;
	// cmplwi cr6,r9,5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 5, ctx.xer);
	// blt cr6,0x82130c40
	if (ctx.cr6.lt) goto loc_82130C40;
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82130aa0
	if (!ctx.cr6.gt) goto loc_82130AA0;
	// subf r11,r25,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r25.u64;
	// addi r11,r11,253
	ctx.r11.s64 = ctx.r11.s64 + 253;
	// clrlwi r18,r11,24
	ctx.r18.u64 = ctx.r11.u32 & 0xFF;
	// add r11,r18,r25
	ctx.r11.u64 = ctx.r18.u64 + ctx.r25.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82130A40:
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82130a4c
	if (ctx.cr6.lt) goto loc_82130A4C;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_82130A4C:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x82130a6c
	if (!ctx.cr6.eq) goto loc_82130A6C;
	// cmplwi cr6,r17,2
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 2, ctx.xer);
	// bgt cr6,0x82130a6c
	if (ctx.cr6.gt) goto loc_82130A6C;
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
loc_82130A6C:
	// addi r11,r23,-1
	ctx.r11.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82130c40
	if (ctx.cr6.gt) goto loc_82130C40;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130ae4
	if (ctx.cr6.eq) goto loc_82130AE4;
	// bdz 0x82130afc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130AFC;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// bdz 0x82130b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130B18;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// bdz 0x82130c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82130C40;
	// b 0x82130b64
	goto loc_82130B64;
loc_82130AA0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// li r18,1
	ctx.r18.s64 = 1;
	// addi r25,r9,-4
	ctx.r25.s64 = ctx.r9.s64 + -4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82130ac8
	if (!ctx.cr6.eq) goto loc_82130AC8;
	// clrlwi r11,r25,16
	ctx.r11.u64 = ctx.r25.u32 & 0xFFFF;
	// divwu r10,r27,r11
	ctx.r10.u64 = uint32_t(ctx.r11.u32 ? ctx.r27.u32 / ctx.r11.u32 : 0);
	// mullw r9,r10,r11
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r8,r9,r27
	ctx.r8.u64 = ctx.r27.u64 - ctx.r9.u64;
	// subf r27,r8,r27
	ctx.r27.u64 = ctx.r27.u64 - ctx.r8.u64;
loc_82130AC8:
	// addi r11,r25,4
	ctx.r11.s64 = ctx.r25.s64 + 4;
	// b 0x82130a40
	goto loc_82130A40;
loc_82130AD0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82130a4c
	if (!ctx.cr6.eq) goto loc_82130A4C;
loc_82130AD8:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
loc_82130AE4:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// sth r9,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r9.u16);
	// b 0x82130bb4
	goto loc_82130BB4;
loc_82130AFC:
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// bne cr6,0x82130bb4
	if (!ctx.cr6.eq) goto loc_82130BB4;
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// sth r10,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// b 0x82130bb4
	goto loc_82130BB4;
loc_82130B18:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// ori r11,r10,4
	ctx.r11.u64 = ctx.r10.u64 | 4;
	// sth r11,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x82130b38
	if (!ctx.cr6.gt) goto loc_82130B38;
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
loc_82130B38:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// sth r10,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x82130ba4
	if (!ctx.cr6.gt) goto loc_82130BA4;
loc_82130B50:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82130b50
	if (ctx.cr6.gt) goto loc_82130B50;
	// b 0x82130ba4
	goto loc_82130BA4;
loc_82130B64:
	// lhz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// sth r11,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r11.u16);
	// ble cr6,0x82130b7c
	if (!ctx.cr6.gt) goto loc_82130B7C;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82130B7C:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,29,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// sth r10,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r10.u16);
	// ble cr6,0x82130ba4
	if (!ctx.cr6.gt) goto loc_82130BA4;
loc_82130B94:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82130b94
	if (ctx.cr6.gt) goto loc_82130B94;
loc_82130BA4:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r9,20(r26)
	REX_STORE_U16(ctx.r26.u32 + 20, ctx.r9.u16);
loc_82130BB4:
	// stw r24,28(r26)
	REX_STORE_U32(ctx.r26.u32 + 28, ctx.r24.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r18,44(r26)
	REX_STORE_U32(ctx.r26.u32 + 44, ctx.r18.u32);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// stw r27,40(r26)
	REX_STORE_U32(ctx.r26.u32 + 40, ctx.r27.u32);
	// stw r25,32(r26)
	REX_STORE_U32(ctx.r26.u32 + 32, ctx.r25.u32);
	// stw r20,36(r26)
	REX_STORE_U32(ctx.r26.u32 + 36, ctx.r20.u32);
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// lwz r5,24(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x821302f8
	ctx.lr = 0x82130BE4;
	sub_821302F8(ctx, base);
	// stw r3,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r3.u32);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// lhz r8,20(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 20);
	// lwz r6,32(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r5,24(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// lwz r4,4(r16)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r3,0(r16)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// bl 0x821301f8
	ctx.lr = 0x82130C04;
	sub_821301F8(ctx, base);
	// sth r3,12(r26)
	REX_STORE_U16(ctx.r26.u32 + 12, ctx.r3.u16);
	// lwz r11,28(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82130c2c
	if (ctx.cr6.eq) goto loc_82130C2C;
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// rlwinm r11,r11,2,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// bne cr6,0x82130c28
	if (!ctx.cr6.eq) goto loc_82130C28;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_82130C28:
	// sth r11,12(r26)
	REX_STORE_U16(ctx.r26.u32 + 12, ctx.r11.u16);
loc_82130C2C:
	// lhz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// bl 0x8214f910
	ctx.lr = 0x82130C34;
	sub_8214F910(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
loc_82130C40:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82145490) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x821454c4
	if (ctx.cr6.gt) goto loc_821454C4;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x821454bc
	if (ctx.cr6.eq) goto loc_821454BC;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x821454e0
	goto loc_821454E0;
loc_821454BC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821454e4
	goto loc_821454E4;
loc_821454C4:
	// lwz r10,604(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x821454dc
	if (ctx.cr6.eq) goto loc_821454DC;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x821454e0
	goto loc_821454E0;
loc_821454DC:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_821454E0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_821454E4:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r9,60(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// srawi r8,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 3;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r4,r6,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r6.u64;
	// bgt cr6,0x82145524
	if (ctx.cr6.gt) goto loc_82145524;
	// lwz r10,212(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8214551c
	if (ctx.cr6.eq) goto loc_8214551C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// b 0x82145540
	goto loc_82145540;
loc_8214551C:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82145544
	goto loc_82145544;
loc_82145524:
	// lwz r10,604(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 604);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x8214553c
	if (ctx.cr6.eq) goto loc_8214553C;
	// addi r10,r10,17
	ctx.r10.s64 = ctx.r10.s64 + 17;
	// b 0x82145540
	goto loc_82145540;
loc_8214553C:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
loc_82145540:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82145544:
	// lwz r8,24(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r7,r10,29,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1F;
	// lwz r6,28(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r5,620(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 620);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r6,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r6.u64;
	// subf r10,r7,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r7.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// ble cr6,0x8214557c
	if (!ctx.cr6.gt) goto loc_8214557C;
	// stw r10,32(r3)
	REX_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// b 0x8214558c
	goto loc_8214558C;
loc_8214557C:
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// stw r9,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r8,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r8.u32);
loc_8214558C:
	// b 0x82145348
	sub_82145348(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214A540) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x8214A548;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,204(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 204);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214a648
	if (!ctx.cr6.eq) goto loc_8214A648;
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214a580
	if (ctx.cr6.eq) goto loc_8214A580;
	// lwz r28,328(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x8214a584
	goto loc_8214A584;
loc_8214A580:
	// lwz r28,56(r23)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
loc_8214A584:
	// lwz r10,584(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r11,320(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// lhz r9,202(r30)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r10,r6,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r4,118(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r29,r4
	ctx.r29.s64 = ctx.r4.s16;
	// cmpw cr6,r8,r29
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8214a9d8
	if (!ctx.cr6.lt) goto loc_8214A9D8;
	// addi r31,r31,224
	ctx.r31.s64 = ctx.r31.s64 + 224;
	// li r22,1
	ctx.r22.s64 = 1;
loc_8214A5BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214A5CC;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lhz r10,110(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// slw r10,r22,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8214a5fc
	if (ctx.cr6.eq) goto loc_8214A5FC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8214A5FC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhz r10,202(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfsx f12,r7,r28
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r28.u32, temp.u32);
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r5,202(r30)
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r5.u16);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x8214a5bc
	if (ctx.cr6.lt) goto loc_8214A5BC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_8214A648:
	// lwz r11,584(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 584);
	// lwz r10,320(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// lbz r9,145(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// extsb r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// mulli r11,r6,1776
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(1776));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r4,118(r5)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// extsh r25,r4
	ctx.r25.s64 = ctx.r4.s16;
	// bge cr6,0x8214a9d8
	if (!ctx.cr6.lt) goto loc_8214A9D8;
	// addi r24,r23,1456
	ctx.r24.s64 = ctx.r23.s64 + 1456;
	// li r22,1
	ctx.r22.s64 = 1;
	// li r18,7
	ctx.r18.s64 = 7;
	// li r20,10
	ctx.r20.s64 = 10;
	// li r19,3
	ctx.r19.s64 = 3;
	// li r21,6
	ctx.r21.s64 = 6;
loc_8214A690:
	// lwz r11,460(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,145(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// extsb r9,r11
	ctx.r9.s64 = ctx.r11.s8;
	// mullw r8,r9,r25
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r25.s32);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x8214a6b4
	if (ctx.cr6.eq) goto loc_8214A6B4;
	// lwz r10,328(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x8214a6b8
	goto loc_8214A6B8;
loc_8214A6B4:
	// lwz r10,56(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
loc_8214A6B8:
	// add r26,r11,r10
	ctx.r26.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x8214a6dc
	if (ctx.cr6.eq) goto loc_8214A6DC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8214a780
	if (ctx.cr6.eq) goto loc_8214A780;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x8214a7b8
	if (ctx.cr6.eq) goto loc_8214A7B8;
	// b 0x8214a938
	goto loc_8214A938;
loc_8214A6DC:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214a77c
	if (!ctx.cr6.eq) goto loc_8214A77C;
	// lwz r11,164(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214a77c
	if (!ctx.cr6.eq) goto loc_8214A77C;
	// lhz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 168);
	// lhz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8214a77c
	if (!ctx.cr6.lt) goto loc_8214A77C;
	// addi r28,r31,224
	ctx.r28.s64 = ctx.r31.s64 + 224;
loc_8214A710:
	// lhz r11,172(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 172);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r10,170(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 170);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214A730;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lhz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// subfic r11,r29,32
	ctx.xer.ca = ctx.r29.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r29.u64;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// sraw r5,r7,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r5.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r5,r6,r24
	REX_STORE_U32(ctx.r6.u32 + ctx.r24.u32, ctx.r5.u32);
	// lhz r11,148(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 148);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r3,148(r31)
	REX_STORE_U16(ctx.r31.u32 + 148, ctx.r3.u16);
	// lhz r10,168(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 168);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8214a710
	if (ctx.cr6.lt) goto loc_8214A710;
loc_8214A77C:
	// stw r18,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r18.u32);
loc_8214A780:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x8214A790;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lhz r10,110(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8214a9d0
	if (ctx.cr6.gt) goto loc_8214A9D0;
	// stw r20,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r20.u32);
	// stw r27,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// sth r11,196(r31)
	REX_STORE_U16(ctx.r31.u32 + 196, ctx.r11.u16);
	// sth r27,202(r30)
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r27.u16);
loc_8214A7B8:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214a864
	if (!ctx.cr6.eq) goto loc_8214A864;
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8214a864
	if (!ctx.cr6.eq) goto loc_8214A864;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8214a7e4
	if (ctx.cr6.lt) goto loc_8214A7E4;
	// beq cr6,0x8214a808
	if (ctx.cr6.eq) goto loc_8214A808;
	// b 0x8214a858
	goto loc_8214A858;
loc_8214A7E4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x8214A7F4;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r22,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
loc_8214A808:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhz r4,110(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x8214A818;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lhz r11,110(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 110);
	// lwz r9,84(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// slw r10,r22,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r11.u8 & 0x3F));
	// slw r7,r9,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x8214a854
	if (ctx.cr6.eq) goto loc_8214A854;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// orc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ~ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8214A854:
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_8214A858:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// sth r10,202(r30)
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r10.u16);
loc_8214A864:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8214a938
	if (!ctx.cr6.lt) goto loc_8214A938;
loc_8214A874:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214a88c
	if (ctx.cr6.eq) goto loc_8214A88C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8214a8c8
	if (ctx.cr6.eq) goto loc_8214A8C8;
	// b 0x8214a8ec
	goto loc_8214A8EC;
loc_8214A88C:
	// addi r29,r31,224
	ctx.r29.s64 = ctx.r31.s64 + 224;
loc_8214A890:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214A8A0;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8214a8c4
	if (!ctx.cr6.eq) goto loc_8214A8C4;
	// lwz r11,200(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// b 0x8214a890
	goto loc_8214A890;
loc_8214A8C4:
	// stw r19,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r19.u32);
loc_8214A8C8:
	// stw r27,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,224
	ctx.r3.s64 = ctx.r31.s64 + 224;
	// lhz r4,196(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 196);
	// bl 0x82145d70
	ctx.lr = 0x8214A8DC;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214a9d8
	if (ctx.cr6.lt) goto loc_8214A9D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_8214A8EC:
	// lhz r11,202(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// lhz r8,196(r31)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r31.u32 + 196);
	// extsh r7,r11
	ctx.r7.s64 = ctx.r11.s16;
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// slw r11,r9,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r5,r6,r26
	REX_STORE_U32(ctx.r6.u32 + ctx.r26.u32, ctx.r5.u32);
	// stw r27,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r27,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// lhz r4,202(r30)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r30.u32 + 202);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,202(r30)
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r11.u16);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r25
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8214a874
	if (ctx.cr6.lt) goto loc_8214A874;
loc_8214A938:
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x8214a994
	if (!ctx.cr6.lt) goto loc_8214A994;
	// subf r10,r11,r25
	ctx.r10.u64 = ctx.r25.u64 - ctx.r11.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8214A960:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8214a984
	if (ctx.cr6.eq) goto loc_8214A984;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// neg r8,r9
	ctx.r8.s64 = static_cast<int64_t>(-ctx.r9.u64);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x8214a98c
	goto loc_8214A98C;
loc_8214A984:
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8214A98C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8214a960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214A960;
loc_8214A994:
	// stw r21,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r21.u32);
	// sth r27,148(r31)
	REX_STORE_U16(ctx.r31.u32 + 148, ctx.r27.u16);
	// sth r27,202(r30)
	REX_STORE_U16(ctx.r30.u32 + 202, ctx.r27.u16);
	// stw r27,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r27.u32);
	// stw r27,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r27.u32);
	// lbz r11,145(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 145);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,145(r31)
	REX_STORE_U8(ctx.r31.u32 + 145, ctx.r10.u8);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x8214a690
	if (ctx.cr6.lt) goto loc_8214A690;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_8214A9D0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_8214A9D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215B938) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8215B940;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// and r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x8215ba40
	if (!ctx.cr6.gt) goto loc_8215BA40;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f12,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
loc_8215B98C:
	// lwz r29,16(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x8215b9dc
	if (!ctx.cr6.lt) goto loc_8215B9DC;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// rotlwi r4,r29,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r29.u32, 0);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8215B9B8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f13,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f11,r9,r5
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f13.f64, ctx.f11.f64, ctx.f0.f64)));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x8215b9b8
	if (ctx.cr6.lt) goto loc_8215B9B8;
loc_8215B9DC:
	// subf r9,r29,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r29.u64;
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// and r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 & ctx.r9.u64;
	// bge cr6,0x8215ba2c
	if (!ctx.cr6.lt) goto loc_8215BA2C;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_8215BA10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f11,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsu f13,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f13.f64, ctx.f0.f64)));
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8215ba10
	if (ctx.cr6.lt) goto loc_8215BA10;
loc_8215BA2C:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stfsx f0,r28,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + ctx.r6.u32, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8215b98c
	if (ctx.cr6.lt) goto loc_8215B98C;
loc_8215BA40:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215ba80
	if (ctx.cr6.lt) goto loc_8215BA80;
	// subf r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r30.u64;
	// subf r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x8215e640
	ctx.lr = 0x8215BA6C;
	sub_8215E640(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// b 0x8215bac4
	goto loc_8215BAC4;
loc_8215BA80:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215f200
	ctx.lr = 0x8215BA94;
	sub_8215F200(ctx, base);
	// lwz r9,16(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r30,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8215e640
	ctx.lr = 0x8215BAB4;
	sub_8215E640(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r11,r30,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r30.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
loc_8215BAC4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x8215bad4
	if (ctx.cr6.eq) goto loc_8215BAD4;
	// stw r30,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
loc_8215BAD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215E320) {
	REX_FUNC_PROLOGUE();
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r8,-32193
	ctx.r8.s64 = -2109800448;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r30,r8,-24208
	ctx.r30.s64 = ctx.r8.s64 + -24208;
	// addi r11,r11,9200
	ctx.r11.s64 = ctx.r11.s64 + 9200;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r11,-24208(r8)
	REX_STORE_U32(ctx.r8.u32 + -24208, ctx.r11.u32);
	// lis r31,-32234
	ctx.r31.s64 = -2112487424;
	// addi r10,r10,6296
	ctx.r10.s64 = ctx.r10.s64 + 6296;
	// addi r9,r9,6280
	ctx.r9.s64 = ctx.r9.s64 + 6280;
	// addi r11,r31,6288
	ctx.r11.s64 = ctx.r31.s64 + 6288;
	// stw r10,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lis r3,-32234
	ctx.r3.s64 = -2112487424;
	// stw r9,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r9.u32);
	// lis r4,-32234
	ctx.r4.s64 = -2112487424;
	// stw r11,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// lis r5,-32234
	ctx.r5.s64 = -2112487424;
	// addi r10,r3,6152
	ctx.r10.s64 = ctx.r3.s64 + 6152;
	// addi r9,r4,9200
	ctx.r9.s64 = ctx.r4.s64 + 9200;
	// addi r11,r5,9120
	ctx.r11.s64 = ctx.r5.s64 + 9120;
	// stw r10,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// lis r6,-32234
	ctx.r6.s64 = -2112487424;
	// stw r9,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lis r7,-32234
	ctx.r7.s64 = -2112487424;
	// stw r11,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r8,-32234
	ctx.r8.s64 = -2112487424;
	// addi r10,r6,6184
	ctx.r10.s64 = ctx.r6.s64 + 6184;
	// addi r9,r7,5976
	ctx.r9.s64 = ctx.r7.s64 + 5976;
	// addi r11,r8,5816
	ctx.r11.s64 = ctx.r8.s64 + 5816;
	// stw r10,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_20) {
	REX_FUNC_PROLOGUE();
	// ld r20,-104(r1)
	ctx.r20.u64 = REX_LOAD_U64(ctx.r1.u32 + -104);
	// ld r21,-96(r1)
	ctx.r21.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// ld r22,-88(r1)
	ctx.r22.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// ld r23,-80(r1)
	ctx.r23.u64 = REX_LOAD_U64(ctx.r1.u32 + -80);
	// ld r24,-72(r1)
	ctx.r24.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// ld r25,-64(r1)
	ctx.r25.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// ld r26,-56(r1)
	ctx.r26.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// ld r27,-48(r1)
	ctx.r27.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// ld r28,-40(r1)
	ctx.r28.u64 = REX_LOAD_U64(ctx.r1.u32 + -40);
	// ld r29,-32(r1)
	ctx.r29.u64 = REX_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215E610) {
	REX_FUNC_PROLOGUE();
	// cntlzd r5,r3
	ctx.r5.u64 = ctx.r3.u64 == 0 ? 64 : __builtin_clzll(ctx.r3.u64);
	// sld r3,r3,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r3.u64 << (ctx.r5.u8 & 0x7F));
	// cmpdi r3,0
	ctx.cr0.compare<int64_t>(ctx.r3.s64, 0, ctx.xer);
	// beq 0x8215e62c
	if (ctx.cr0.eq) goto loc_8215E62C;
	// subfic r5,r5,1086
	ctx.xer.ca = ctx.r5.u32 <= 1086;
	ctx.r5.u64 = static_cast<uint64_t>(1086) - ctx.r5.u64;
	// rldicl r3,r3,53,12
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u64, 53) & 0xFFFFFFFFFFFFF;
	// rldimi r3,r5,52,1
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r5.u64, 52) & 0x7FF0000000000000) | (ctx.r3.u64 & 0x800FFFFFFFFFFFFF);
loc_8215E62C:
	// std r3,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r3.u64);
	// lfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(__savefpr_28) {
	REX_FUNC_PROLOGUE();
	// stfd f28,-32(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -32, ctx.f28.u64);
	// stfd f29,-24(r12)
	REX_STORE_U64(ctx.r12.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r12)
	REX_STORE_U64(ctx.r12.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r12)
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_27) {
	REX_FUNC_PROLOGUE();
	// lfd f27,-40(r12)
	ctx.fpscr.disableFlushMode();
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

DEFINE_REX_FUNC(sub_8215EEB8) {
	REX_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x8215ee20
	sub_8215EE20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215F0F0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x8215F0F8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8215f144
	if (!ctx.cr6.eq) goto loc_8215F144;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8215f144
	if (ctx.cr6.eq) goto loc_8215F144;
loc_8215F128:
	// bl 0x82162980
	ctx.lr = 0x8215F12C;
	sub_82162980(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8215ff48
	ctx.lr = 0x8215F138;
	sub_8215FF48(ctx, base);
loc_8215F138:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8215F13C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_8215F144:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8215f128
	if (ctx.cr6.eq) goto loc_8215F128;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8215f128
	if (ctx.cr6.eq) goto loc_8215F128;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x8215f138
	if (ctx.cr6.gt) goto loc_8215F138;
loc_8215F15C:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8215f1cc
	if (ctx.cr0.eq) goto loc_8215F1CC;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x8215f174
	if (!ctx.cr0.eq) goto loc_8215F174;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_8215F174:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x8215F18C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8215f1c4
	if (ctx.cr0.eq) goto loc_8215F1C4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8215f1b0
	if (!ctx.cr6.lt) goto loc_8215F1B0;
	// subf r24,r30,r31
	ctx.r24.u64 = ctx.r31.u64 - ctx.r30.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8215f1b4
	if (!ctx.cr6.eq) goto loc_8215F1B4;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x8215f1b8
	goto loc_8215F1B8;
loc_8215F1B0:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_8215F1B4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8215F1B8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x8215f15c
	if (!ctx.cr6.gt) goto loc_8215F15C;
	// b 0x8215f138
	goto loc_8215F138;
loc_8215F1C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8215f13c
	goto loc_8215F13C;
loc_8215F1CC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8215f138
	if (ctx.cr6.eq) goto loc_8215F138;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x8215F1E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// b 0x8215f13c
	goto loc_8215F13C;
}

DEFINE_REX_FUNC(__savevmx_21) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx v21,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v21.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx v22,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v22.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx v23,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v23.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx v24,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v24.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx v25,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v25.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx v26,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v26.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx v27,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v27.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx v28,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v28.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx v29,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v29.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx v30,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v30.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx v31,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v31.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_79) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_123) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_24) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_127) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v127.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82161560) {
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
	// bl 0x82164ae8
	ctx.lr = 0x82161570;
	sub_82164AE8(ctx, base);
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82164d60
	ctx.lr = 0x8216157C;
	sub_82164D60(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82162270) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82162278;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r6,22
	ctx.r6.s64 = 22;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82165380
	ctx.lr = 0x821622A0;
	sub_82165380(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821622c0
	if (!ctx.cr6.eq) goto loc_821622C0;
loc_821622A8:
	// bl 0x82162980
	ctx.lr = 0x821622AC;
	sub_82162980(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8215ff48
	ctx.lr = 0x821622B8;
	sub_8215FF48(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82162398
	goto loc_82162398;
loc_821622C0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821622a8
	if (ctx.cr6.eq) goto loc_821622A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r11,r11,-45
	ctx.r11.s64 = ctx.r11.s64 + -45;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x821622f4
	if (ctx.cr6.eq) goto loc_821622F4;
	// subf r4,r11,r31
	ctx.r4.u64 = ctx.r31.u64 - ctx.r11.u64;
loc_821622F4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82165140
	ctx.lr = 0x82162304;
	sub_82165140(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82162318
	if (ctx.cr0.eq) goto loc_82162318;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// b 0x82162398
	goto loc_82162398;
loc_82162318:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfc r10,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// eqv r9,r11,r30
	ctx.r9.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// cmpwi cr6,r11,-4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -4, ctx.xer);
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// blt cr6,0x8216237c
	if (ctx.cr6.lt) goto loc_8216237C;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8216237c
	if (!ctx.cr6.lt) goto loc_8216237C;
	// extsb. r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82162360
	if (ctx.cr0.eq) goto loc_82162360;
loc_8216234C:
	// lbz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8216234c
	if (!ctx.cr0.eq) goto loc_8216234C;
	// stb r11,-2(r28)
	REX_STORE_U8(ctx.r28.u32 + -2, ctx.r11.u8);
loc_82162360:
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82161fe8
	ctx.lr = 0x82162378;
	sub_82161FE8(ctx, base);
	// b 0x82162398
	goto loc_82162398;
loc_8216237C:
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821618a0
	ctx.lr = 0x82162398;
	sub_821618A0(ctx, base);
loc_82162398:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821671B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821671B8;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// bl 0x82164530
	ctx.lr = 0x821671D0;
	sub_82164530(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	ctx.r28.s64 = 3;
	// lis r29,-32188
	ctx.r29.s64 = -2109472768;
	// lis r27,-32188
	ctx.r27.s64 = -2109472768;
loc_821671E0:
	// stw r28,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// lwz r11,-31612(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + -31612);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82167258
	if (!ctx.cr6.lt) goto loc_82167258;
	// lwz r11,-31616(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -31616);
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216724c
	if (ctx.cr6.eq) goto loc_8216724C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	ctx.r11.u64 = ctx.r11.u64 & 131;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216722c
	if (ctx.cr0.eq) goto loc_8216722C;
	// bl 0x82169ed8
	ctx.lr = 0x8216721C;
	sub_82169ED8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8216722c
	if (ctx.cr6.eq) goto loc_8216722C;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
loc_8216722C:
	// cmpwi cr6,r28,20
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 20, ctx.xer);
	// blt cr6,0x8216724c
	if (ctx.cr6.lt) goto loc_8216724C;
	// lwz r11,-31616(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -31616);
	// lwzx r3,r30,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x8215fbe0
	ctx.lr = 0x82167240;
	sub_8215FBE0(ctx, base);
	// lwz r11,-31616(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -31616);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
loc_8216724C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x821671e0
	goto loc_821671E0;
loc_82167258:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	ctx.r12.s64 = ctx.r31.s64 + 144;
	// bl 0x82167270
	ctx.lr = 0x82167264;
	sub_82167270(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216AAD8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8216AAE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8216ab08
	if (ctx.cr6.eq) goto loc_8216AB08;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_8216AB08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x8216ab80
	if (ctx.cr6.eq) goto loc_8216AB80;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,259
	ctx.r7.s64 = 259;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r7,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// stw r6,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x823753f4
	ctx.lr = 0x8216AB50;
	__imp__NtWriteFile(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// rlwinm r10,r3,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216abec
	if (ctx.cr6.eq) goto loc_8216ABEC;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// beq cr6,0x8216abec
	if (ctx.cr6.eq) goto loc_8216ABEC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8216ab78
	if (ctx.cr6.eq) goto loc_8216AB78;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8216AB78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8216abf4
	goto loc_8216ABF4;
loc_8216AB80:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823753f4
	ctx.lr = 0x8216AB94;
	__imp__NtWriteFile(ctx, base);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x8216abbc
	if (!ctx.cr6.eq) goto loc_8216ABBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823751d4
	ctx.lr = 0x8216ABB0;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8216abd4
	if (ctx.cr0.lt) goto loc_8216ABD4;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8216ABBC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8216abd4
	if (ctx.cr6.lt) goto loc_8216ABD4;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8216abf4
	goto loc_8216ABF4;
loc_8216ABD4:
	// rlwinm r11,r3,0,0,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xC0000000;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8216abec
	if (!ctx.cr6.eq) goto loc_8216ABEC;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8216ABEC:
	// bl 0x820e9918
	ctx.lr = 0x8216ABF0;
	sub_820E9918(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8216ABF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216CB28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r11,r11,0,12,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,10544(r3)
	REX_STORE_U32(ctx.r3.u32 + 10544, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CFB8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10616(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10616);
	// li r12,1
	ctx.r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10616(r3)
	REX_STORE_U32(ctx.r3.u32 + 10616, ctx.r4.u32);
	// ld r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216D828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r11,r4,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(24));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r11,1172(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1172);
	// lfs f0,-12960(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12960);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 28;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216E6D0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8216E6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3154
	ctx.r11.s64 = ctx.r4.s64 + 3154;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r5.u32);
	// beq cr6,0x8216e800
	if (ctx.cr6.eq) goto loc_8216E800;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8216e704
	if (ctx.cr6.eq) goto loc_8216E704;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
loc_8216E704:
	// addi r10,r11,2593
	ctx.r10.s64 = ctx.r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r10,r3,56
	ctx.r10.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// srd r7,r9,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// addi r10,r4,3051
	ctx.r10.s64 = ctx.r4.s64 + 3051;
	// ldx r3,r11,r31
	ctx.r3.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r11,r31
	REX_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r7.u64);
	// lwzx r11,r6,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r7,r10,r31
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r7,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r7.u32);
	// beq cr6,0x8216e800
	if (ctx.cr6.eq) goto loc_8216E800;
	// subfic r11,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r4.u64;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r3,2593
	ctx.r11.s64 = ctx.r3.s64 + 2593;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r30,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// rlwinm r11,r6,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8216e7a0
	if (ctx.cr6.eq) goto loc_8216E7A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8216e7a0
	if (ctx.cr6.eq) goto loc_8216E7A0;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8216e7a0
	if (ctx.cr6.eq) goto loc_8216E7A0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8216e800
	if (!ctx.cr6.eq) goto loc_8216E800;
loc_8216E7A0:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8216e800
	if (ctx.cr0.eq) goto loc_8216E800;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// not r29,r10
	ctx.r29.u64 = ~ctx.r10.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwinm r29,r29,16,0,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// add r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 + ctx.r8.u64;
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// srawi r11,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	REX_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
loc_8216E800:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8216e97c
	if (!ctx.cr6.eq) goto loc_8216E97C;
	// lbz r11,10943(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10943);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// andi. r10,r11,247
	ctx.r10.u64 = ctx.r11.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10943(r31)
	REX_STORE_U8(ctx.r31.u32 + 10943, ctx.r10.u8);
	// beq cr6,0x8216e858
	if (ctx.cr6.eq) goto loc_8216E858;
	// lhz r11,28(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x8216e83c
	if (ctx.cr6.eq) goto loc_8216E83C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8216e83c
	if (ctx.cr6.eq) goto loc_8216E83C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8216e850
	if (!ctx.cr6.eq) goto loc_8216E850;
loc_8216E83C:
	// ori r11,r10,8
	ctx.r11.u64 = ctx.r10.u64 | 8;
	// stb r11,10943(r31)
	REX_STORE_U8(ctx.r31.u32 + 10943, ctx.r11.u8);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8216E850:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x8216e864
	goto loc_8216E864;
loc_8216E858:
	// lwz r4,12632(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12632);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8216e86c
	if (ctx.cr6.eq) goto loc_8216E86C;
loc_8216E864:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e640
	ctx.lr = 0x8216E86C;
	sub_8216E640(ctx, base);
loc_8216E86C:
	// lwz r11,12892(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12892);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e944
	if (!ctx.cr6.eq) goto loc_8216E944;
	// lbz r11,10940(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8216e944
	if (!ctx.cr0.eq) goto loc_8216E944;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8216e944
	if (!ctx.cr0.eq) goto loc_8216E944;
	// lbz r10,12363(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 12363);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8216e944
	if (!ctx.cr0.eq) goto loc_8216E944;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8216e8a8
	if (ctx.cr0.eq) goto loc_8216E8A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216e938
	goto loc_8216E938;
loc_8216E8A8:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216e930
	if (ctx.cr0.eq) goto loc_8216E930;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12616);
	// lwz r10,12904(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12904);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e8c8
	if (ctx.cr6.eq) goto loc_8216E8C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e930
	if (!ctx.cr6.eq) goto loc_8216E930;
loc_8216E8C8:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12620);
	// lwz r10,12908(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12908);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e8e0
	if (ctx.cr6.eq) goto loc_8216E8E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e930
	if (!ctx.cr6.eq) goto loc_8216E930;
loc_8216E8E0:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12624);
	// lwz r10,12912(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12912);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e8f8
	if (ctx.cr6.eq) goto loc_8216E8F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e930
	if (!ctx.cr6.eq) goto loc_8216E930;
loc_8216E8F8:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12628);
	// lwz r10,12916(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12916);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e910
	if (ctx.cr6.eq) goto loc_8216E910;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e930
	if (!ctx.cr6.eq) goto loc_8216E930;
loc_8216E910:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12632);
	// lwz r10,12920(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12920);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8216e928
	if (ctx.cr6.eq) goto loc_8216E928;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216e930
	if (!ctx.cr6.eq) goto loc_8216E930;
loc_8216E928:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8216e934
	goto loc_8216E934;
loc_8216E930:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216E934:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8216E938:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8216e948
	if (!ctx.cr0.eq) goto loc_8216E948;
loc_8216E944:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8216E948:
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 10940);
	// lwz r9,12036(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12036);
	// rlwimi r10,r11,0,31,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r10,10940(r31)
	REX_STORE_U8(ctx.r31.u32 + 10940, ctx.r10.u8);
	// lwz r11,10460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 10460);
	// lwz r10,12616(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12616);
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r10.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r9,12036(r31)
	REX_STORE_U32(ctx.r31.u32 + 12036, ctx.r9.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// rlwimi r11,r10,0,28,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,10460(r31)
	REX_STORE_U32(ctx.r31.u32 + 10460, ctx.r11.u32);
	// b 0x8216ea00
	goto loc_8216EA00;
loc_8216E97C:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// bne cr6,0x8216e9a8
	if (!ctx.cr6.eq) goto loc_8216E9A8;
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12620);
	// lwz r10,12040(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12040);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12040(r31)
	REX_STORE_U32(ctx.r31.u32 + 12040, ctx.r10.u32);
	// rlwimi r9,r11,4,24,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x8216e9fc
	goto loc_8216E9FC;
loc_8216E9A8:
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x8216e9d4
	if (!ctx.cr6.eq) goto loc_8216E9D4;
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12624);
	// lwz r10,12044(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12044);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12044(r31)
	REX_STORE_U32(ctx.r31.u32 + 12044, ctx.r10.u32);
	// rlwimi r9,r11,8,20,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x8216e9fc
	goto loc_8216E9FC;
loc_8216E9D4:
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x8216ea14
	if (!ctx.cr6.eq) goto loc_8216EA14;
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12628);
	// lwz r10,12048(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12048);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// lwz r9,10460(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 10460);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// stw r10,12048(r31)
	REX_STORE_U32(ctx.r31.u32 + 12048, ctx.r10.u32);
	// rlwimi r9,r11,12,16,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
loc_8216E9FC:
	// stw r9,10460(r31)
	REX_STORE_U32(ctx.r31.u32 + 10460, ctx.r9.u32);
loc_8216EA00:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r12,r12,37,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_8216EA14:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217BF18) {
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
	// bl 0x82374f94
	ctx.lr = 0x8217BF34;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x8217bf48
	if (!ctx.cr6.eq) goto loc_8217BF48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1596);
	// b 0x8217bf50
	goto loc_8217BF50;
loc_8217BF48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1592);
loc_8217BF50:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = ctx.r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x8217c110
	if (ctx.cr6.gt) goto loc_8217C110;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8217c024
	if (ctx.cr6.eq) goto loc_8217C024;
	// bdz 0x8217c054
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217C054;
	// bdz 0x8217bfd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217BFD8;
	// bdz 0x8217bf94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217BF94;
	// bdz 0x8217c110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217C110;
	// bdz 0x8217c080
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217C080;
	// bdz 0x8217c0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217C0AC;
	// bdz 0x8217c0c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_8217C0C8;
	// b 0x8217c0e4
	goto loc_8217C0E4;
loc_8217BF94:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8217c110
	if (!ctx.cr0.eq) goto loc_8217C110;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217bfbc
	if (ctx.cr0.eq) goto loc_8217BFBC;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// divwu r4,r11,r10
	ctx.r4.u64 = uint32_t(ctx.r10.u32 ? ctx.r11.u32 / ctx.r10.u32 : 0);
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x821823e8
	ctx.lr = 0x8217BFBC;
	sub_821823E8(ctx, base);
loc_8217BFBC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217c110
	if (ctx.cr0.eq) goto loc_8217C110;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,21736(r10)
	REX_STORE_U32(ctx.r10.u32 + 21736, ctx.r11.u32);
	// b 0x8217c110
	goto loc_8217C110;
loc_8217BFD8:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217bffc
	if (ctx.cr6.eq) goto loc_8217BFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217bffc
	if (ctx.cr6.eq) goto loc_8217BFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x8217fee8
	ctx.lr = 0x8217BFFC;
	sub_8217FEE8(ctx, base);
loc_8217BFFC:
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r30,r10,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x8216b138
	ctx.lr = 0x8217C014;
	sub_8216B138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8217C018:
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// bl 0x8216b138
	ctx.lr = 0x8217C020;
	sub_8216B138(ctx, base);
	// b 0x8217c110
	goto loc_8217C110;
loc_8217C024:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c048
	if (ctx.cr6.eq) goto loc_8217C048;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c048
	if (ctx.cr6.eq) goto loc_8217C048;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x8217fee8
	ctx.lr = 0x8217C048;
	sub_8217FEE8(ctx, base);
loc_8217C048:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8217c018
	goto loc_8217C018;
loc_8217C054:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// li r5,11
	ctx.r5.s64 = 11;
loc_8217C06C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8217fee8
	ctx.lr = 0x8217C078;
	sub_8217FEE8(ctx, base);
loc_8217C078:
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// b 0x8217c018
	goto loc_8217C018;
loc_8217C080:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c0a4
	if (ctx.cr6.eq) goto loc_8217C0A4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c0a4
	if (ctx.cr6.eq) goto loc_8217C0A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x8217fee8
	ctx.lr = 0x8217C0A4;
	sub_8217FEE8(ctx, base);
loc_8217C0A4:
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x8217c018
	goto loc_8217C018;
loc_8217C0AC:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x8217c06c
	goto loc_8217C06C;
loc_8217C0C8:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c078
	if (ctx.cr6.eq) goto loc_8217C078;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x8217c06c
	goto loc_8217C06C;
loc_8217C0E4:
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8217c108
	if (ctx.cr6.eq) goto loc_8217C108;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217c108
	if (ctx.cr6.eq) goto loc_8217C108;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x8217fee8
	ctx.lr = 0x8217C108;
	sub_8217FEE8(ctx, base);
loc_8217C108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181a90
	ctx.lr = 0x8217C110;
	sub_82181A90(ctx, base);
loc_8217C110:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x8217C11C;
	sub_8216B138(ctx, base);
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

DEFINE_REX_FUNC(sub_82181C98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82181CA0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215eba8
	ctx.lr = 0x82181CA8;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// subfe r31,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82375584
	ctx.lr = 0x82181CC4;
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// lis r9,-32189
	ctx.r9.s64 = -2109538304;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-18816
	ctx.r10.s64 = ctx.r10.s64 + -18816;
	// addi r9,r9,21808
	ctx.r9.s64 = ctx.r9.s64 + 21808;
	// rlwinm r8,r31,11,0,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 11) & 0xFFFFF800;
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// add r28,r8,r9
	ctx.r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r7,21800
	ctx.r9.s64 = ctx.r7.s64 + 21800;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82181d08
	if (!ctx.cr6.eq) goto loc_82181D08;
	// lfsx f0,r11,r9
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	ctx.cr6.compare(ctx.f0.f64, ctx.f2.f64);
	// beq cr6,0x82181e04
	if (ctx.cr6.eq) goto loc_82181E04;
loc_82181D08:
	// stfsx f2,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// stwx r8,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f29,4696(r11)
	ctx.f29.u64 = REX_LOAD_U64(ctx.r11.u32 + 4696);
	// addi r29,r28,-2
	ctx.r29.s64 = ctx.r28.s64 + -2;
	// lfd f30,24408(r10)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 24408);
	// lfs f31,2280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// lfs f28,24400(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 24400);
	ctx.f28.f64 = double(temp.f32);
	// b 0x82181d44
	goto loc_82181D44;
loc_82181D3C:
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82181D44:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// bne cr6,0x82181d74
	if (!ctx.cr6.eq) goto loc_82181D74;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82181b38
	ctx.lr = 0x82181D6C;
	sub_82181B38(ctx, base);
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// lwz r8,84(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_82181D74:
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x82181db0
	if (ctx.cr6.eq) goto loc_82181DB0;
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// beq cr6,0x82181da4
	if (ctx.cr6.eq) goto loc_82181DA4;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x82181da4
	if (!ctx.cr6.eq) goto loc_82181DA4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82181d98
	if (!ctx.cr6.eq) goto loc_82181D98;
	// fdivs f2,f31,f2
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f31.f64 / ctx.f2.f64));
loc_82181D98:
	// bl 0x82160690
	ctx.lr = 0x82181D9C;
	sub_82160690(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x82181db8
	goto loc_82181DB8;
loc_82181DA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82181be8
	ctx.lr = 0x82181DAC;
	sub_82181BE8(ctx, base);
	// b 0x82181db8
	goto loc_82181DB8;
loc_82181DB0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82181b38
	ctx.lr = 0x82181DB8;
	sub_82181B38(ctx, base);
loc_82181DB8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82181dc8
	if (ctx.cr6.eq) goto loc_82181DC8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82181b38
	ctx.lr = 0x82181DC8;
	sub_82181B38(ctx, base);
loc_82181DC8:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = std::fma(ctx.f1.f64, ctx.f30.f64, ctx.f29.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82181de8
	if (!ctx.cr6.lt) goto loc_82181DE8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82181df4
	goto loc_82181DF4;
loc_82181DE8:
	// cmpwi cr6,r11,1023
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1023, ctx.xer);
	// ble cr6,0x82181df4
	if (!ctx.cr6.gt) goto loc_82181DF4;
	// li r11,1023
	ctx.r11.s64 = 1023;
loc_82181DF4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// sthu r11,2(r29)
	ea = 2 + ctx.r29.u32;
	REX_STORE_U16(ea, ctx.r11.u16);
	ctx.r29.u32 = ea;
	// cmpwi cr6,r31,1024
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1024, ctx.xer);
	// blt cr6,0x82181d3c
	if (ctx.cr6.lt) goto loc_82181D3C;
loc_82181E04:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215ebf4
	ctx.lr = 0x82181E14;
	__restfpr_28(ctx, base);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82186288) {
	REX_FUNC_PROLOGUE();
	// lbz r11,10943(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 10943);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stb r11,10943(r3)
	REX_STORE_U8(ctx.r3.u32 + 10943, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82186370) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82186394
	if (!ctx.cr6.eq) goto loc_82186394;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x82186400
	goto loc_82186400;
loc_82186394:
	// lbz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x821863e0
	if (ctx.cr6.gt) goto loc_821863E0;
	// beq cr6,0x821863cc
	if (ctx.cr6.eq) goto loc_821863CC;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x821863cc
	if (ctx.cr6.eq) goto loc_821863CC;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// ble cr6,0x821863fc
	if (!ctx.cr6.gt) goto loc_821863FC;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// ble cr6,0x821863cc
	if (!ctx.cr6.gt) goto loc_821863CC;
	// cmplwi cr6,r11,101
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 101, ctx.xer);
	// ble cr6,0x821863fc
	if (!ctx.cr6.gt) goto loc_821863FC;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// bgt cr6,0x821863fc
	if (ctx.cr6.gt) goto loc_821863FC;
loc_821863CC:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-32616
	ctx.r4.s64 = ctx.r11.s64 + -32616;
	// bl 0x82375574
	ctx.lr = 0x821863DC;
	__imp__sprintf(ctx, base);
	// b 0x821863fc
	goto loc_821863FC;
loc_821863E0:
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x821863f4
	if (ctx.cr6.eq) goto loc_821863F4;
	// cmplwi cr6,r11,116
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 116, ctx.xer);
	// bne cr6,0x821863fc
	if (!ctx.cr6.eq) goto loc_821863FC;
	// b 0x821863cc
	goto loc_821863CC;
loc_821863F4:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8218b590
	ctx.lr = 0x821863FC;
	sub_8218B590(ctx, base);
loc_821863FC:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_82186400:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82189898) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-32396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32396);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f12,-32400(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32400);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f13,2280(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,-16(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// addi r11,r11,2000
	ctx.r11.s64 = ctx.r11.s64 + 2000;
	// lfs f11,30112(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 30112);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lvx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r11,r8,2032
	ctx.r11.s64 = ctx.r8.s64 + 2032;
	// addi r8,r1,-16
	ctx.r8.s64 = ctx.r1.s64 + -16;
	// addi r9,r9,2016
	ctx.r9.s64 = ctx.r9.s64 + 2016;
	// fabs f13,f10
	ctx.f13.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lvx128 v60,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lvx128 v61,r0,r9
	ea = (ctx.r9.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f12,f12
	ctx.f12.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f12.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fnmsubs f13,f12,f11,f13
	ctx.f13.f64 = double(float(-std::fma(ctx.f12.f64, ctx.f11.f64, -ctx.f13.f64)));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f10,f0,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,-12(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// stfs f13,-8(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,-4(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// lvx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmulfp128 v59,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v63,v63,1
	simde_mm_store_si128((simde__m128i*)ctx.v63.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v63.u32), 0xAA));
	// vmulfp128 v59,v59,v63
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v58,v59,3
	simde_mm_store_si128((simde__m128i*)ctx.v58.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x0));
	// vmsum4fp128 v62,v59,v62
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v62.f32), 0xFF));
	// vmulfp128 v63,v58,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v62,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// vmulfp128 v62,v59,v63
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v59.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v63,v62,v63
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vmsum4fp128 v62,v62,v61
	simde_mm_store_ps(ctx.v62.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v61.f32), 0xFF));
	// stvx128 v62,r0,r8
	ea = (ctx.r8.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f13,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// vmsum4fp128 v63,v63,v60
	ctx.fpscr.enableFlushModeUnconditional();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_dp_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v60.f32), 0xFF));
	// stvx128 v63,r0,r6
	ea = (ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fadds f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8218DC48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r5,16384
	ctx.r5.s64 = 1073741824;
	// li r6,-1
	ctx.r6.s64 = -1;
loc_8218DC50:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8218dd14
	if (!ctx.cr6.lt) goto loc_8218DD14;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8218DC74:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r11,r5,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r5.u64;
	// beq 0x8218dca8
	if (ctx.cr0.eq) goto loc_8218DCA8;
	// lhz r8,2(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subfc r8,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// addze r4,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r4.s64 = temp.s64;
	// subf r8,r4,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r4.u64;
	// b 0x8218dcdc
	goto loc_8218DCDC;
loc_8218DCA8:
	// addi r8,r11,48
	ctx.r8.s64 = ctx.r11.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,52
	ctx.r4.s64 = ctx.r11.s64 + 52;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r8.u32));
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r7.u32));
	// lwbrx r4,0,r4
	ctx.r4.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r4.u32));
	// subf r8,r8,r7
	ctx.r8.u64 = ctx.r7.u64 - ctx.r8.u64;
	// lwbrx r7,0,r3
	ctx.r7.u64 = __builtin_bswap32(REX_LOAD_U32(ctx.r3.u32));
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r8.u64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_8218DCDC:
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r7,512
	ctx.r9.s64 = ctx.r7.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// dcbf r0,r9
	// dcbf r0,r11
	// li r9,24
	ctx.r9.s64 = 24;
	// dcbf r9,r11
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x8218dc74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8218DC74;
loc_8218DD14:
	// lwz r3,0(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8218dc50
	if (!ctx.cr6.eq) goto loc_8218DC50;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82191308) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82191310;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,560(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 560);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r27,700(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 700);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82191350
	if (ctx.cr6.eq) goto loc_82191350;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82173ea8
	ctx.lr = 0x82191344;
	sub_82173EA8(ctx, base);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82173c90
	ctx.lr = 0x82191350;
	sub_82173C90(ctx, base);
loc_82191350:
	// lwz r11,564(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821913d8
	if (!ctx.cr6.gt) goto loc_821913D8;
loc_82191360:
	// lwz r29,0(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821913bc
	if (ctx.cr6.eq) goto loc_821913BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821913a8
	if (!ctx.cr6.eq) goto loc_821913A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217b4c0
	ctx.lr = 0x82191380;
	sub_8217B4C0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217c480
	ctx.lr = 0x82191388;
	sub_8217C480(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x821913a8
	if (!ctx.cr6.eq) goto loc_821913A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82173cd8
	ctx.lr = 0x8219139C;
	sub_82173CD8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8217c480
	ctx.lr = 0x821913A4;
	sub_8217C480(ctx, base);
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
loc_821913A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217c480
	ctx.lr = 0x821913B0;
	sub_8217C480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821913bc
	if (!ctx.cr0.eq) goto loc_821913BC;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_821913BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,564(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 564);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82191360
	if (ctx.cr6.lt) goto loc_82191360;
loc_821913D8:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821913e8
	if (ctx.cr6.eq) goto loc_821913E8;
	// bl 0x8217c480
	ctx.lr = 0x821913E8;
	sub_8217C480(ctx, base);
loc_821913E8:
	// lwz r11,572(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 572);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82191478
	if (!ctx.cr6.gt) goto loc_82191478;
loc_82191400:
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8219145c
	if (ctx.cr6.eq) goto loc_8219145C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82191448
	if (!ctx.cr6.eq) goto loc_82191448;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217b4c0
	ctx.lr = 0x82191420;
	sub_8217B4C0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217c480
	ctx.lr = 0x82191428;
	sub_8217C480(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82191448
	if (!ctx.cr6.eq) goto loc_82191448;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82173ad0
	ctx.lr = 0x8219143C;
	sub_82173AD0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8217c480
	ctx.lr = 0x82191444;
	sub_8217C480(ctx, base);
	// stw r26,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
loc_82191448:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8217c480
	ctx.lr = 0x82191450;
	sub_8217C480(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8219145c
	if (!ctx.cr0.eq) goto loc_8219145C;
	// stw r26,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_8219145C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,576(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 576);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82191400
	if (ctx.cr6.lt) goto loc_82191400;
loc_82191478:
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82191488
	if (ctx.cr6.eq) goto loc_82191488;
	// bl 0x8217c480
	ctx.lr = 0x82191488;
	sub_8217C480(ctx, base);
loc_82191488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8219A690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8219A698;
	__savegprlr_14(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r16,648(r4)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r4.u32 + 648);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// stw r5,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r5.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r6,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r6.u32);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// stw r9,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r9.u32);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// stw r10,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r10.u32);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219aba0
	if (ctx.cr6.eq) goto loc_8219ABA0;
	// lwz r19,508(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 508);
	// li r15,1
	ctx.r15.s64 = 1;
	// lwz r18,500(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 500);
	// lwz r20,492(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 492);
	// lwz r22,484(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 484);
loc_8219A6F4:
	// lwz r11,444(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 444);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
	// beq cr6,0x8219a71c
	if (ctx.cr6.eq) goto loc_8219A71C;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// b 0x8219a750
	goto loc_8219A750;
loc_8219A71C:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219A72C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// bne cr6,0x8219a74c
	if (!ctx.cr6.eq) goto loc_8219A74C;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// b 0x8219a750
	goto loc_8219A750;
loc_8219A74C:
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
loc_8219A750:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219A75C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219A77C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r31,r11,r17
	ctx.r31.u64 = ctx.r11.u64 + ctx.r17.u64;
	// beq cr6,0x8219a824
	if (ctx.cr6.eq) goto loc_8219A824;
	// addi r4,r21,652
	ctx.r4.s64 = ctx.r21.s64 + 652;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8218f0b8
	ctx.lr = 0x8219A7A4;
	sub_8218F0B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stwx r3,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r23,168(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r25,128(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r23,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x8219a690
	ctx.lr = 0x8219A804;
	sub_8219A690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8219aba4
	if (ctx.cr0.lt) goto loc_8219ABA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,168(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// b 0x8219a8b8
	goto loc_8219A8B8;
loc_8219A824:
	// lwz r11,152(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x8219a8dc
	if (!ctx.cr6.eq) goto loc_8219A8DC;
	// addi r4,r21,652
	ctx.r4.s64 = ctx.r21.s64 + 652;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8218f0b8
	ctx.lr = 0x8219A840;
	sub_8218F0B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r18,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r19,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwx r3,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r3.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r25,128(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r25,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r25.u32);
	// bl 0x8219a690
	ctx.lr = 0x8219A8A0;
	sub_8219A690(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8219aba4
	if (ctx.cr0.lt) goto loc_8219ABA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,0,30,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0x3) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
loc_8219A8B8:
	// rlwimi r11,r10,2,16,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC) | (ctx.r11.u64 & 0xFFFFFFFFFFFF0003);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// sth r11,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r11,r11,30,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFFFF;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// b 0x8219ab60
	goto loc_8219AB60;
loc_8219A8DC:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8219a930
	if (ctx.cr6.lt) goto loc_8219A930;
	// beq cr6,0x8219a924
	if (ctx.cr6.eq) goto loc_8219A924;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8219a918
	if (ctx.cr6.lt) goto loc_8219A918;
	// beq cr6,0x8219a908
	if (ctx.cr6.eq) goto loc_8219A908;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8219a930
	if (ctx.cr6.lt) goto loc_8219A930;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// b 0x8219a93c
	goto loc_8219A93C;
loc_8219A908:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,3
	ctx.r9.s64 = 3;
	// rlwimi r11,r9,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// b 0x8219a938
	goto loc_8219A938;
loc_8219A918:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,5,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 5) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// b 0x8219a938
	goto loc_8219A938;
loc_8219A924:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,4,25,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 4) & 0x70) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// b 0x8219a938
	goto loc_8219A938;
loc_8219A930:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
loc_8219A938:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8219A93C:
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8219a984
	if (ctx.cr6.eq) goto loc_8219A984;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8219a978
	if (ctx.cr6.eq) goto loc_8219A978;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8219a96c
	if (ctx.cr6.eq) goto loc_8219A96C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8219ab58
	if (!ctx.cr6.eq) goto loc_8219AB58;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// b 0x8219a98c
	goto loc_8219A98C;
loc_8219A96C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// b 0x8219a98c
	goto loc_8219A98C;
loc_8219A978:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,2,28,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
	// b 0x8219a98c
	goto loc_8219A98C;
loc_8219A984:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r11,r15,3,28,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 3) & 0xC) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFF3);
loc_8219A98C:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8219ab58
	if (!ctx.cr6.eq) goto loc_8219AB58;
	// addi r4,r21,652
	ctx.r4.s64 = ctx.r21.s64 + 652;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x8218f0b8
	ctx.lr = 0x8219A9A8;
	sub_8218F0B8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r19
	REX_STORE_U32(ctx.r11.u32 + ctx.r19.u32, ctx.r3.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8219a9d8
	if (ctx.cr6.eq) goto loc_8219A9D8;
	// lwz r11,164(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8219a9e0
	if (!ctx.cr6.eq) goto loc_8219A9E0;
loc_8219A9D8:
	// stw r15,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r15.u32);
	// stw r15,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r15.u32);
loc_8219A9E0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r26,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,7,23,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x180) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFE7F);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,9,21,22
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x600) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF9FF);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,30,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0xFFFF;
	// sth r11,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r11.u16);
	// stw r15,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bne cr6,0x8219aa80
	if (!ctx.cr6.eq) goto loc_8219AA80;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219AA54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8219AA5C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8219aa5c
	if (!ctx.cr6.eq) goto loc_8219AA5C;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// b 0x8219aa84
	goto loc_8219AA84;
loc_8219AA80:
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
loc_8219AA84:
	// addi r26,r29,3
	ctx.r26.s64 = ctx.r29.s64 + 3;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,0(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r25,r26,0,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8219aaf4
	if (!ctx.cr6.gt) goto loc_8219AAF4;
	// addi r27,r11,2048
	ctx.r27.s64 = ctx.r11.s64 + 2048;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8218f000
	ctx.lr = 0x8219AAB0;
	sub_8218F000(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8219abac
	if (ctx.cr0.eq) goto loc_8219ABAC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x8215e640
	ctx.lr = 0x8219AAC8;
	sub_8215E640(ctx, base);
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8219aae0
	if (ctx.cr6.eq) goto loc_8219AAE0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x8216b138
	ctx.lr = 0x8219AAE0;
	sub_8216B138(ctx, base);
loc_8219AAE0:
	// stw r30,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r30.u32);
	// stw r27,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r27.u32);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r27,468(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 468);
	// lwz r30,436(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 436);
loc_8219AAF4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm r11,r11,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFC;
	// beq cr6,0x8219ab18
	if (ctx.cr6.eq) goto loc_8219AB18;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x8215e640
	ctx.lr = 0x8219AB14;
	sub_8215E640(ctx, base);
	// b 0x8219ab38
	goto loc_8219AB38;
loc_8219AB18:
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,84(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 84);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8219AB38;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8219AB38:
	// rlwinm r11,r26,30,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xFFFF;
	// lwz r29,476(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 476);
	// li r26,0
	ctx.r26.s64 = 0;
	// sth r11,4(r31)
	REX_STORE_U16(ctx.r31.u32 + 4, ctx.r11.u16);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x8219ab60
	goto loc_8219AB60;
loc_8219AB58:
	// stw r26,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// stw r26,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r26.u32);
loc_8219AB60:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8219ab78
	if (ctx.cr6.eq) goto loc_8219AB78;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_8219AB78:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8219ab90
	if (ctx.cr6.eq) goto loc_8219AB90;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8219AB90:
	// lwz r11,516(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 516);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmplw cr6,r14,r11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8219a6f4
	if (ctx.cr6.lt) goto loc_8219A6F4;
loc_8219ABA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219ABA4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_8219ABAC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8219aba4
	goto loc_8219ABA4;
}

DEFINE_REX_FUNC(sub_821A83C8) {
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
	// bl 0x821a8330
	ctx.lr = 0x821A83E8;
	sub_821A8330(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a83fc
	if (ctx.cr0.eq) goto loc_821A83FC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A83FC;
	sub_8216B138(ctx, base);
loc_821A83FC:
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

DEFINE_REX_FUNC(sub_821A9B78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821A9B80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_821A9B98:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821a9b98
	if (!ctx.cr6.eq) goto loc_821A9B98;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821e99f8
	ctx.lr = 0x821A9BC8;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// beq 0x821a9bf0
	if (ctx.cr0.eq) goto loc_821A9BF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821e99f8
	ctx.lr = 0x821A9BE4;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// bne 0x821a9bfc
	if (!ctx.cr0.eq) goto loc_821A9BFC;
loc_821A9BF0:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x821a9c48
	goto loc_821A9C48;
loc_821A9BFC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8215f358
	ctx.lr = 0x821A9C0C;
	sub_8215F358(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// bl 0x82164ee0
	ctx.lr = 0x821A9C18;
	sub_82164EE0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x821a9c24
	if (ctx.cr0.eq) goto loc_821A9C24;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_821A9C24:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stbx r26,r11,r27
	REX_STORE_U8(ctx.r11.u32 + ctx.r27.u32, ctx.r26.u8);
	// lwz r4,80(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x8215e640
	ctx.lr = 0x821A9C3C;
	sub_8215E640(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821a9c48
	if (ctx.cr6.eq) goto loc_821A9C48;
	// stb r26,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r26.u8);
loc_821A9C48:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AB130) {
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
	// bl 0x821ab0a0
	ctx.lr = 0x821AB150;
	sub_821AB0A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ab164
	if (ctx.cr0.eq) goto loc_821AB164;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821AB164;
	sub_8216B138(ctx, base);
loc_821AB164:
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

DEFINE_REX_FUNC(sub_821ABC18) {
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
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x821aaa70
	ctx.lr = 0x821ABC30;
	sub_821AAA70(ctx, base);
	// addi r11,r3,30
	ctx.r11.s64 = ctx.r3.s64 + 30;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// b 0x821abc8c
	goto loc_821ABC8C;
loc_821ABC44:
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
loc_821ABC50:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r6,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r6.u64;
	// beq 0x821abc74
	if (ctx.cr0.eq) goto loc_821ABC74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821abc50
	if (ctx.cr6.eq) goto loc_821ABC50;
loc_821ABC74:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x821abcac
	if (ctx.cr0.lt) goto loc_821ABCAC;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x821abc98
	if (ctx.cr6.eq) goto loc_821ABC98;
	// addi r9,r3,12
	ctx.r9.s64 = ctx.r3.s64 + 12;
loc_821ABC8C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821abc44
	if (!ctx.cr6.eq) goto loc_821ABC44;
	// b 0x821abcac
	goto loc_821ABCAC;
loc_821ABC98:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x821ab040
	ctx.lr = 0x821ABCAC;
	sub_821AB040(ctx, base);
loc_821ABCAC:
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

DEFINE_REX_FUNC(sub_821AD9B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x821AD9C0;
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
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
	// addi r27,r11,4924
	ctx.r27.s64 = ctx.r11.s64 + 4924;
	// addi r23,r10,7852
	ctx.r23.s64 = ctx.r10.s64 + 7852;
loc_821ADA04:
	// addi r11,r27,220
	ctx.r11.s64 = ctx.r27.s64 + 220;
	// rlwinm r29,r30,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821adb08
	if (!ctx.cr0.eq) goto loc_821ADB08;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x821ada3c
	if (!ctx.cr6.lt) goto loc_821ADA3C;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821ab440
	ctx.lr = 0x821ADA2C;
	sub_821AB440(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821ada3c
	if (!ctx.cr0.lt) goto loc_821ADA3C;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_821ADA3C:
	// addi r11,r27,380
	ctx.r11.s64 = ctx.r27.s64 + 380;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821adac8
	if (ctx.cr0.eq) goto loc_821ADAC8;
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821adac8
	if (ctx.cr0.lt) goto loc_821ADAC8;
	// cmpwi cr6,r11,369
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 369, ctx.xer);
	// bgt cr6,0x821adac8
	if (ctx.cr6.gt) goto loc_821ADAC8;
	// addi r8,r27,1476
	ctx.r8.s64 = ctx.r27.s64 + 1476;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r8
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x821adac8
	if (!ctx.cr6.eq) goto loc_821ADAC8;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821adf5c
	if (!ctx.cr6.lt) goto loc_821ADF5C;
	// addi r9,r27,732
	ctx.r9.s64 = ctx.r27.s64 + 732;
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
	// ble cr6,0x821ada04
	if (!ctx.cr6.gt) goto loc_821ADA04;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x821ada04
	goto loc_821ADA04;
loc_821ADAC8:
	// addi r11,r27,540
	ctx.r11.s64 = ctx.r27.s64 + 540;
	// lhax r11,r29,r11
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r29.u32 + ctx.r11.u32));
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ade88
	if (ctx.cr0.eq) goto loc_821ADE88;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x821ade88
	if (ctx.cr0.lt) goto loc_821ADE88;
	// cmpwi cr6,r11,369
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 369, ctx.xer);
	// bgt cr6,0x821ade88
	if (ctx.cr6.gt) goto loc_821ADE88;
	// addi r9,r27,1476
	ctx.r9.s64 = ctx.r27.s64 + 1476;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r9,r11,r9
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821ade88
	if (!ctx.cr6.eq) goto loc_821ADE88;
	// addi r10,r27,732
	ctx.r10.s64 = ctx.r27.s64 + 732;
	// lhax r11,r11,r10
	ctx.r11.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + ctx.r10.u32));
loc_821ADB08:
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r9,r27,124
	ctx.r9.s64 = ctx.r27.s64 + 124;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
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
	// bgt cr6,0x821add70
	if (ctx.cr6.gt) goto loc_821ADD70;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,7256
	ctx.r12.s64 = ctx.r12.s64 + 7256;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// nop 
	// addi r12,r12,-9380
	ctx.r12.s64 = ctx.r12.s64 + -9380;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821ADB5C;
	case 1:
		goto loc_821ADB68;
	case 2:
		goto loc_821ADB74;
	case 3:
		goto loc_821ADB80;
	case 4:
		goto loc_821ADB8C;
	case 5:
		goto loc_821ADB94;
	case 6:
		goto loc_821ADB9C;
	case 7:
		goto loc_821ADBA8;
	case 8:
		goto loc_821ADBB4;
	case 9:
		goto loc_821ADBC0;
	case 10:
		goto loc_821ADBCC;
	case 11:
		goto loc_821ADBD4;
	case 12:
		goto loc_821ADBDC;
	case 13:
		goto loc_821ADBE4;
	case 14:
		goto loc_821ADBEC;
	case 15:
		goto loc_821ADBF4;
	case 16:
		goto loc_821ADC00;
	case 17:
		goto loc_821ADC0C;
	case 18:
		goto loc_821ADC18;
	case 19:
		goto loc_821ADC24;
	case 20:
		goto loc_821ADC30;
	case 21:
		goto loc_821ADC3C;
	case 22:
		goto loc_821ADC48;
	case 23:
		goto loc_821ADC54;
	case 24:
		goto loc_821ADC60;
	case 25:
		goto loc_821ADC6C;
	case 26:
		goto loc_821ADC78;
	case 27:
		goto loc_821ADC84;
	case 28:
		goto loc_821ADC90;
	case 29:
		goto loc_821ADC9C;
	case 30:
		goto loc_821ADCA8;
	case 31:
		goto loc_821ADCB4;
	case 32:
		goto loc_821ADCC0;
	case 33:
		goto loc_821ADCCC;
	case 34:
		goto loc_821ADCD8;
	case 35:
		goto loc_821ADCE4;
	case 36:
		goto loc_821ADCF0;
	case 37:
		goto loc_821ADCFC;
	case 38:
		goto loc_821ADD08;
	case 39:
		goto loc_821ADD14;
	case 40:
		goto loc_821ADD20;
	case 41:
		goto loc_821ADD2C;
	case 42:
		goto loc_821ADD38;
	case 43:
		goto loc_821ADD44;
	case 44:
		goto loc_821ADD50;
	case 45:
		goto loc_821ADD58;
	case 46:
		goto loc_821ADD60;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821ADB5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADB68:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADB74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADB80:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADB8C:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADB94:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADB9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADBA8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADBB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADBC0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADBCC:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADBD4:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADBDC:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADBE4:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADBEC:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADBF4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC0C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC18:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC24:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC30:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC3C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC48:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC54:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC60:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC6C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC78:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC84:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC90:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADC9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCA8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCB4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCC0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCCC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCD8:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCE4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCF0:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADCFC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD08:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD14:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD20:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD2C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD38:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD44:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x821add68
	goto loc_821ADD68;
loc_821ADD50:
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADD58:
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x821add64
	goto loc_821ADD64;
loc_821ADD60:
	// li r4,46
	ctx.r4.s64 = 46;
loc_821ADD64:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821ADD68:
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821ad458
	ctx.lr = 0x821ADD70;
	sub_821AD458(ctx, base);
loc_821ADD70:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r27,28
	ctx.r8.s64 = ctx.r27.s64 + 28;
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
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhax r10,r30,r8
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r30.u32 + ctx.r8.u32));
	// bne 0x821ade0c
	if (!ctx.cr0.eq) goto loc_821ADE0C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821ade0c
	if (!ctx.cr6.eq) goto loc_821ADE0C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r30,15
	ctx.r30.s64 = 15;
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
	// bge cr6,0x821addf8
	if (!ctx.cr6.lt) goto loc_821ADDF8;
	// lwz r3,3032(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3032);
	// bl 0x821ab440
	ctx.lr = 0x821ADDE8;
	sub_821AB440(ctx, base);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821addf8
	if (!ctx.cr0.lt) goto loc_821ADDF8;
	// stw r25,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
loc_821ADDF8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821ada04
	if (!ctx.cr6.eq) goto loc_821ADA04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821adf70
	goto loc_821ADF70;
loc_821ADE0C:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,700
	ctx.r10.s64 = ctx.r27.s64 + 700;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821ade50
	if (ctx.cr0.eq) goto loc_821ADE50;
	// add. r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x821ade50
	if (ctx.cr0.lt) goto loc_821ADE50;
	// cmpwi cr6,r10,369
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 369, ctx.xer);
	// bgt cr6,0x821ade50
	if (ctx.cr6.gt) goto loc_821ADE50;
	// addi r8,r27,1476
	ctx.r8.s64 = ctx.r27.s64 + 1476;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x821ade50
	if (!ctx.cr6.eq) goto loc_821ADE50;
	// addi r11,r27,732
	ctx.r11.s64 = ctx.r27.s64 + 732;
	// lhax r30,r10,r11
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// b 0x821ade54
	goto loc_821ADE54;
loc_821ADE50:
	// lhax r30,r9,r27
	ctx.r30.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r27.u32));
loc_821ADE54:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821adf5c
	if (!ctx.cr6.lt) goto loc_821ADF5C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// sth r30,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
loc_821ADE74:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821ada04
	goto loc_821ADA04;
loc_821ADE88:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821adeac
	if (!ctx.cr6.eq) goto loc_821ADEAC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acc28
	ctx.lr = 0x821ADEA0;
	sub_821ACC28(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_821ADEAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x821adf48
	if (!ctx.cr6.lt) goto loc_821ADF48;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821ADEC0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r27,380
	ctx.r10.s64 = ctx.r27.s64 + 380;
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(REX_LOAD_U16(ctx.r11.u32 + 0));
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821adf00
	if (ctx.cr0.eq) goto loc_821ADF00;
	// addic. r10,r10,256
	ctx.xer.ca = ctx.r10.u32 > 4294967039;
	ctx.r10.s64 = ctx.r10.s64 + 256;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x821adf00
	if (ctx.cr0.lt) goto loc_821ADF00;
	// cmpwi cr6,r10,369
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 369, ctx.xer);
	// bgt cr6,0x821adf00
	if (ctx.cr6.gt) goto loc_821ADF00;
	// addi r9,r27,1476
	ctx.r9.s64 = ctx.r27.s64 + 1476;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r9,256
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 256, ctx.xer);
	// beq cr6,0x821adf20
	if (ctx.cr6.eq) goto loc_821ADF20;
loc_821ADF00:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x821adf6c
	if (!ctx.cr6.gt) goto loc_821ADF6C;
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
	// b 0x821adec0
	goto loc_821ADEC0;
loc_821ADF20:
	// addi r9,r31,1030
	ctx.r9.s64 = ctx.r31.s64 + 1030;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821adf5c
	if (!ctx.cr6.lt) goto loc_821ADF5C;
	// addi r9,r27,732
	ctx.r9.s64 = ctx.r27.s64 + 732;
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
	// b 0x821ade74
	goto loc_821ADE74;
loc_821ADF48:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821adf6c
	if (ctx.cr6.eq) goto loc_821ADF6C;
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x821ada04
	goto loc_821ADA04;
loc_821ADF5C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,8308
	ctx.r4.s64 = ctx.r11.s64 + 8308;
	// bl 0x821acc28
	ctx.lr = 0x821ADF6C;
	sub_821ACC28(ctx, base);
loc_821ADF6C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_821ADF70:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C8680) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// stw r6,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// addi r10,r10,13232
	ctx.r10.s64 = ctx.r10.s64 + 13232;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C8950) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c8974
	if (ctx.cr6.eq) goto loc_821C8974;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x821c897c
	if (ctx.cr6.eq) goto loc_821C897C;
loc_821C8974:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c89c4
	goto loc_821C89C4;
loc_821C897C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c8974
	if (!ctx.cr6.eq) goto loc_821C8974;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c89b0
	if (ctx.cr6.eq) goto loc_821C89B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C89AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c89bc
	goto loc_821C89BC;
loc_821C89B0:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C89BC:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_821C89C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9CD8) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r10,13304
	ctx.r10.s64 = ctx.r10.s64 + 13304;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821C9DE8) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r3,-32252
	ctx.r3.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// li r5,14
	ctx.r5.s64 = 14;
	// stw r6,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r6.u32);
	// addi r6,r3,13316
	ctx.r6.s64 = ctx.r3.s64 + 13316;
	// stw r4,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r4.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r5,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r6,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// stw r11,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// stw r11,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// stw r7,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r7.u32);
	// stw r8,40(r10)
	REX_STORE_U32(ctx.r10.u32 + 40, ctx.r8.u32);
	// ld r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 0);
	// std r11,48(r10)
	REX_STORE_U64(ctx.r10.u32 + 48, ctx.r11.u64);
	// ld r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r11,56(r10)
	REX_STORE_U64(ctx.r10.u32 + 56, ctx.r11.u64);
	// ld r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// std r11,64(r10)
	REX_STORE_U64(ctx.r10.u32 + 64, ctx.r11.u64);
	// ld r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r11,72(r10)
	REX_STORE_U64(ctx.r10.u32 + 72, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CA840) {
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
	// bl 0x821e9ac0
	ctx.lr = 0x821CA858;
	sub_821E9AC0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,56
	ctx.r4.s64 = 56;
	// bl 0x821e99f8
	ctx.lr = 0x821CA868;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ca89c
	if (ctx.cr0.eq) goto loc_821CA89C;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r10,r10,13352
	ctx.r10.s64 = ctx.r10.s64 + 13352;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// b 0x821ca8a0
	goto loc_821CA8A0;
loc_821CA89C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CA8A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ca8e0
	if (ctx.cr6.eq) goto loc_821CA8E0;
	// ld r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// std r10,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
loc_821CA8E0:
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

DEFINE_REX_FUNC(sub_821CB6B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821CB6B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821cb6dc
	if (!ctx.cr6.eq) goto loc_821CB6DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cb844
	goto loc_821CB844;
loc_821CB6DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821cb7f0
	if (ctx.cr6.eq) goto loc_821CB7F0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821cb7d8
	if (ctx.cr6.eq) goto loc_821CB7D8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821cb79c
	if (ctx.cr6.eq) goto loc_821CB79C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821cb710
	if (ctx.cr6.eq) goto loc_821CB710;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821cb840
	if (!ctx.cr6.eq) goto loc_821CB840;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x821cb7dc
	goto loc_821CB7DC;
loc_821CB710:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r30,r9,r8
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bgt cr6,0x821cb780
	if (ctx.cr6.gt) goto loc_821CB780;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32184
	ctx.r12.s64 = ctx.r12.s64 + 32184;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// nop 
	// addi r12,r12,-18604
	ctx.r12.s64 = ctx.r12.s64 + -18604;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821CB754;
	case 1:
		goto loc_821CB75C;
	case 2:
		goto loc_821CB75C;
	case 3:
		goto loc_821CB75C;
	case 4:
		goto loc_821CB75C;
	case 5:
		goto loc_821CB75C;
	case 6:
		goto loc_821CB764;
	case 7:
		goto loc_821CB764;
	case 8:
		goto loc_821CB764;
	case 9:
		goto loc_821CB764;
	case 10:
		goto loc_821CB76C;
	case 11:
		goto loc_821CB76C;
	case 12:
		goto loc_821CB76C;
	case 13:
		goto loc_821CB76C;
	case 14:
		goto loc_821CB780;
	case 15:
		goto loc_821CB780;
	case 16:
		goto loc_821CB780;
	case 17:
		goto loc_821CB780;
	case 18:
		goto loc_821CB780;
	case 19:
		goto loc_821CB780;
	case 20:
		goto loc_821CB780;
	case 21:
		goto loc_821CB780;
	case 22:
		goto loc_821CB77C;
	case 23:
		goto loc_821CB77C;
	case 24:
		goto loc_821CB77C;
	case 25:
		goto loc_821CB77C;
	case 26:
		goto loc_821CB77C;
	case 27:
		goto loc_821CB77C;
	case 28:
		goto loc_821CB77C;
	case 29:
		goto loc_821CB77C;
	case 30:
		goto loc_821CB77C;
	case 31:
		goto loc_821CB780;
	case 32:
		goto loc_821CB780;
	case 33:
		goto loc_821CB774;
	case 34:
		goto loc_821CB774;
	case 35:
		goto loc_821CB774;
	case 36:
		goto loc_821CB774;
	case 37:
		goto loc_821CB774;
	case 38:
		goto loc_821CB780;
	case 39:
		goto loc_821CB77C;
	case 40:
		goto loc_821CB780;
	case 41:
		goto loc_821CB780;
	case 42:
		goto loc_821CB77C;
	case 43:
		goto loc_821CB77C;
	case 44:
		goto loc_821CB77C;
	case 45:
		goto loc_821CB77C;
	case 46:
		goto loc_821CB77C;
	case 47:
		goto loc_821CB774;
	case 48:
		goto loc_821CB774;
	case 49:
		goto loc_821CB774;
	case 50:
		goto loc_821CB774;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821CB754:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821cb780
	goto loc_821CB780;
loc_821CB75C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x821cb780
	goto loc_821CB780;
loc_821CB764:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821cb780
	goto loc_821CB780;
loc_821CB76C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821cb780
	goto loc_821CB780;
loc_821CB774:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821cb780
	goto loc_821CB780;
loc_821CB77C:
	// li r11,5
	ctx.r11.s64 = 5;
loc_821CB780:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821cb840
	if (ctx.cr6.eq) goto loc_821CB840;
	// addi r10,r27,-16
	ctx.r10.s64 = ctx.r27.s64 + -16;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821CB790:
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821cb790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821CB790;
	// b 0x821cb840
	goto loc_821CB840;
loc_821CB79C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821cb840
	if (!ctx.cr6.gt) goto loc_821CB840;
loc_821CB7AC:
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821cb6b0
	ctx.lr = 0x821CB7C0;
	sub_821CB6B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821cb7ac
	if (ctx.cr6.lt) goto loc_821CB7AC;
	// b 0x821cb840
	goto loc_821CB840;
loc_821CB7D8:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
loc_821CB7DC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821cb6b0
	ctx.lr = 0x821CB7E8;
	sub_821CB6B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821cb840
	goto loc_821CB840;
loc_821CB7F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821cb820
	if (!ctx.cr6.eq) goto loc_821CB820;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821cb6b0
	ctx.lr = 0x821CB810;
	sub_821CB6B0(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821cb7f0
	if (!ctx.cr6.eq) goto loc_821CB7F0;
loc_821CB820:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821cb840
	if (ctx.cr6.eq) goto loc_821CB840;
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821cb6b0
	ctx.lr = 0x821CB83C;
	sub_821CB6B0(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_821CB840:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821CB844:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D28B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x821D28B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d2a44
	if (ctx.cr6.eq) goto loc_821D2A44;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d2a44
	if (!ctx.cr6.eq) goto loc_821D2A44;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// mullw r25,r11,r10
	ctx.r25.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r25,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8216b018
	ctx.lr = 0x821D28F0;
	sub_8216B018(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x821d2a38
	if (ctx.cr0.eq) goto loc_821D2A38;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821d1d40
	ctx.lr = 0x821D2908;
	sub_821D1D40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821d2a38
	if (ctx.cr0.lt) goto loc_821D2A38;
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D2918;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2944
	if (ctx.cr0.eq) goto loc_821D2944;
	// addi r9,r27,48
	ctx.r9.s64 = ctx.r27.s64 + 48;
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
	ctx.lr = 0x821D293C;
	sub_821C9DE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821d2948
	goto loc_821D2948;
loc_821D2944:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821D2948:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821d2a38
	if (ctx.cr6.eq) goto loc_821D2A38;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d297c
	if (ctx.cr6.eq) goto loc_821D297C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D2970;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d2a38
	if (ctx.cr0.eq) goto loc_821D2A38;
loc_821D297C:
	// addi r31,r28,32
	ctx.r31.s64 = ctx.r28.s64 + 32;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821d2a18
	if (ctx.cr6.eq) goto loc_821D2A18;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r26,r11,-29408
	ctx.r26.s64 = ctx.r11.s64 + -29408;
loc_821D2998:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D29A0;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d29bc
	if (ctx.cr0.eq) goto loc_821D29BC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821D29B8;
	sub_821C7240(ctx, base);
	// b 0x821d29c0
	goto loc_821D29C0;
loc_821D29BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D29C0:
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d2a38
	if (ctx.cr6.eq) goto loc_821D2A38;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821c7078
	ctx.lr = 0x821D29D4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d29ec
	if (ctx.cr0.eq) goto loc_821D29EC;
	// addi r5,r27,48
	ctx.r5.s64 = ctx.r27.s64 + 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821ca188
	ctx.lr = 0x821D29E8;
	sub_821CA188(ctx, base);
	// b 0x821d29f0
	goto loc_821D29F0;
loc_821D29EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D29F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq cr6,0x821d2a38
	if (ctx.cr6.eq) goto loc_821D2A38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x821d2998
	if (ctx.cr6.lt) goto loc_821D2998;
loc_821D2A18:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D2A24;
	sub_821CEFE0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216b138
	ctx.lr = 0x821D2A30;
	sub_8216B138(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x821d2a48
	goto loc_821D2A48;
loc_821D2A38:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216b138
	ctx.lr = 0x821D2A44;
	sub_8216B138(ctx, base);
loc_821D2A44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D2A48:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DEEF0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821def50
	if (ctx.cr6.eq) goto loc_821DEF50;
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821def50
	if (ctx.cr0.eq) goto loc_821DEF50;
loc_821DEF20:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82370878
	ctx.lr = 0x821DEF28;
	sub_82370878(ctx, base);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// mulli r10,r30,19
	ctx.r10.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(19));
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r30,r3,r10
	ctx.r30.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bne 0x821def20
	if (!ctx.cr0.eq) goto loc_821DEF20;
	// li r11,7
	ctx.r11.s64 = 7;
	// divwu r11,r30,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r30.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,7
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(7));
	// subf r3,r11,r30
	ctx.r3.u64 = ctx.r30.u64 - ctx.r11.u64;
	// b 0x821def54
	goto loc_821DEF54;
loc_821DEF50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821DEF54:
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

DEFINE_REX_FUNC(sub_821DF0D8) {
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
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821df1cc
	if (ctx.cr6.eq) goto loc_821DF1CC;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821df1cc
	if (ctx.cr0.eq) goto loc_821DF1CC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_821DF110:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x821df178
	if (ctx.cr6.gt) goto loc_821DF178;
	// beq cr6,0x821df16c
	if (ctx.cr6.eq) goto loc_821DF16C;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x821df16c
	if (ctx.cr6.eq) goto loc_821DF16C;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x821df190
	if (ctx.cr6.eq) goto loc_821DF190;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x821df19c
	if (ctx.cr6.eq) goto loc_821DF19C;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x821df1a8
	if (!ctx.cr6.eq) goto loc_821DF1A8;
loc_821DF140:
	// li r11,0
	ctx.r11.s64 = 0;
	// oris r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 65536;
loc_821DF148:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x821df158
	if (ctx.cr6.eq) goto loc_821DF158;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x821df1a8
	if (!ctx.cr6.gt) goto loc_821DF1A8;
loc_821DF158:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x821df110
	if (!ctx.cr0.eq) goto loc_821DF110;
	// b 0x821df1d0
	goto loc_821DF1D0;
loc_821DF16C:
	// li r11,3
	ctx.r11.s64 = 3;
	// oris r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 524288;
	// b 0x821df148
	goto loc_821DF148;
loc_821DF178:
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x821df140
	if (ctx.cr6.eq) goto loc_821DF140;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x821df19c
	if (ctx.cr6.eq) goto loc_821DF19C;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x821df1a8
	if (!ctx.cr6.eq) goto loc_821DF1A8;
loc_821DF190:
	// li r11,2
	ctx.r11.s64 = 2;
	// oris r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 262144;
	// b 0x821df148
	goto loc_821DF148;
loc_821DF19C:
	// li r11,1
	ctx.r11.s64 = 1;
	// oris r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 131072;
	// b 0x821df148
	goto loc_821DF148;
loc_821DF1A8:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2003
	ctx.r5.s64 = 2003;
	// addi r6,r11,-12624
	ctx.r6.s64 = ctx.r11.s64 + -12624;
	// bl 0x821afae0
	ctx.lr = 0x821DF1BC;
	sub_821AFAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x821df1d0
	goto loc_821DF1D0;
loc_821DF1CC:
	// lis r3,15
	ctx.r3.s64 = 983040;
loc_821DF1D0:
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

DEFINE_REX_FUNC(sub_821E1DD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821E1DE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e2428
	if (!ctx.cr6.eq) goto loc_821E2428;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821e1e48
	if (ctx.cr6.eq) goto loc_821E1E48;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_821E1E14:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e1e7c
	if (ctx.cr6.eq) goto loc_821E1E7C;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// stw r29,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// bne cr6,0x821e1e14
	if (!ctx.cr6.eq) goto loc_821E1E14;
loc_821E1E48:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,63
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 63, ctx.xer);
	// bgt cr6,0x821e23c0
	if (ctx.cr6.gt) goto loc_821E23C0;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// rlwinm r0,r4,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-13000
	ctx.r12.s64 = ctx.r12.s64 + -13000;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// addi r12,r12,7804
	ctx.r12.s64 = ctx.r12.s64 + 7804;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u32) {
	case 0:
		goto loc_821E1ED4;
	case 1:
		goto loc_821E1EA0;
	case 2:
		goto loc_821E1EA0;
	case 3:
		goto loc_821E1EA8;
	case 4:
		goto loc_821E1EA0;
	case 5:
		goto loc_821E1EA0;
	case 6:
		goto loc_821E1ED4;
	case 7:
		goto loc_821E1EBC;
	case 8:
		goto loc_821E1EDC;
	case 9:
		goto loc_821E1EF0;
	case 10:
		goto loc_821E1EA0;
	case 11:
		goto loc_821E1F34;
	case 12:
		goto loc_821E1F7C;
	case 13:
		goto loc_821E1F7C;
	case 14:
		goto loc_821E1F7C;
	case 15:
		goto loc_821E1F7C;
	case 16:
		goto loc_821E1F7C;
	case 17:
		goto loc_821E1F7C;
	case 18:
		goto loc_821E1F7C;
	case 19:
		goto loc_821E1F7C;
	case 20:
		goto loc_821E1F7C;
	case 21:
		goto loc_821E1FC4;
	case 22:
		goto loc_821E1FC4;
	case 23:
		goto loc_821E1EA0;
	case 24:
		goto loc_821E1FF8;
	case 25:
		goto loc_821E1EA0;
	case 26:
		goto loc_821E2048;
	case 27:
		goto loc_821E2074;
	case 28:
		goto loc_821E2104;
	case 29:
		goto loc_821E1EA0;
	case 30:
		goto loc_821E2174;
	case 31:
		goto loc_821E23C0;
	case 32:
		goto loc_821E23C0;
	case 33:
		goto loc_821E21C4;
	case 34:
		goto loc_821E21DC;
	case 35:
		goto loc_821E1EA0;
	case 36:
		goto loc_821E21E4;
	case 37:
		goto loc_821E2234;
	case 38:
		goto loc_821E2260;
	case 39:
		goto loc_821E2280;
	case 40:
		goto loc_821E22C0;
	case 41:
		goto loc_821E1EA0;
	case 42:
		goto loc_821E1EA0;
	case 43:
		goto loc_821E22F8;
	case 44:
		goto loc_821E230C;
	case 45:
		goto loc_821E230C;
	case 46:
		goto loc_821E2334;
	case 47:
		goto loc_821E1EA0;
	case 48:
		goto loc_821E1EA0;
	case 49:
		goto loc_821E235C;
	case 50:
		goto loc_821E2368;
	case 51:
		goto loc_821E2368;
	case 52:
		goto loc_821E2368;
	case 53:
		goto loc_821E2368;
	case 54:
		goto loc_821E2368;
	case 55:
		goto loc_821E2368;
	case 56:
		goto loc_821E2368;
	case 57:
		goto loc_821E2368;
	case 58:
		goto loc_821E2368;
	case 59:
		goto loc_821E2368;
	case 60:
		goto loc_821E2368;
	case 61:
		goto loc_821E2390;
	case 62:
		goto loc_821E2390;
	case 63:
		goto loc_821E2390;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821E1E7C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,8276
	ctx.r6.s64 = ctx.r11.s64 + 8276;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E1E94;
	sub_821AFAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r11.u32);
	// b 0x821e2428
	goto loc_821E2428;
loc_821E1EA0:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1EA8:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x821c71d8
	ctx.lr = 0x821E1EB4;
	sub_821C71D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1EBC:
	// lwz r11,120(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e1ed4
	if (!ctx.cr6.eq) goto loc_821E1ED4;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,120(r30)
	REX_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
loc_821E1ED4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1EDC:
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_821E1EE4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e0a98
	ctx.lr = 0x821E1EEC;
	sub_821E0A98(ctx, base);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1EF0:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// blt cr6,0x821e1f14
	if (ctx.cr6.lt) goto loc_821E1F14;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x821e1f14
	if (ctx.cr6.gt) goto loc_821E1F14;
	// stw r28,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r28.u32);
	// b 0x821e1ee4
	goto loc_821E1EE4;
loc_821E1F14:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2027
	ctx.r5.s64 = 2027;
	// addi r6,r11,-10304
	ctx.r6.s64 = ctx.r11.s64 + -10304;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
loc_821E1F24:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x821afae0
	ctx.lr = 0x821E1F2C;
	sub_821AFAE0(ctx, base);
	// stw r28,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1F34:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x821e1f4c
	if (ctx.cr6.lt) goto loc_821E1F4C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821e1f5c
	if (!ctx.cr6.gt) goto loc_821E1F5C;
loc_821E1F4C:
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// blt cr6,0x821e1f68
	if (ctx.cr6.lt) goto loc_821E1F68;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x821e1f68
	if (ctx.cr6.gt) goto loc_821E1F68;
loc_821E1F5C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1F68:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2028
	ctx.r5.s64 = 2028;
	// addi r6,r11,-10368
	ctx.r6.s64 = ctx.r11.s64 + -10368;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// b 0x821e1f24
	goto loc_821E1F24;
loc_821E1F7C:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// ble cr6,0x821e1f98
	if (!ctx.cr6.gt) goto loc_821E1F98;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_821E1F98:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// ble cr6,0x821e23c0
	if (!ctx.cr6.gt) goto loc_821E23C0;
	// addi r9,r5,-2
	ctx.r9.s64 = ctx.r5.s64 + -2;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E1FB0:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821e1fb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E1FB0;
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1FC4:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// stw r29,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// ble cr6,0x821e23c0
	if (!ctx.cr6.gt) goto loc_821E23C0;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821E1FE4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821e1fe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E1FE4;
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E1FF8:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e2030
	if (ctx.cr6.eq) goto loc_821E2030;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-10408
	ctx.r6.s64 = ctx.r11.s64 + -10408;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E2020;
	sub_821AFAE0(ctx, base);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// stw r28,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E2030:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821df0d8
	ctx.lr = 0x821E2040;
	sub_821DF0D8(ctx, base);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E2048:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2068
	if (ctx.cr6.eq) goto loc_821E2068;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2018
	ctx.r5.s64 = 2018;
	// addi r6,r11,-10448
	ctx.r6.s64 = ctx.r11.s64 + -10448;
	// b 0x821e216c
	goto loc_821E216C;
loc_821E2068:
	// lis r11,3328
	ctx.r11.s64 = 218103808;
loc_821E206C:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E2074:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e20fc
	if (ctx.cr6.eq) goto loc_821E20FC;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e20f4
	if (ctx.cr6.eq) goto loc_821E20F4;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e20ec
	if (ctx.cr6.eq) goto loc_821E20EC;
	// lis r10,1792
	ctx.r10.s64 = 117440512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e20e4
	if (ctx.cr6.eq) goto loc_821E20E4;
	// lis r10,2304
	ctx.r10.s64 = 150994944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e20d4
	if (ctx.cr6.eq) goto loc_821E20D4;
	// lis r10,2560
	ctx.r10.s64 = 167772160;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821e20d4
	if (ctx.cr6.eq) goto loc_821E20D4;
	// lis r10,2816
	ctx.r10.s64 = 184549376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821e23c0
	if (!ctx.cr6.eq) goto loc_821E23C0;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E20D4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2011
	ctx.r5.s64 = 2011;
	// addi r6,r11,-10496
	ctx.r6.s64 = ctx.r11.s64 + -10496;
	// b 0x821e216c
	goto loc_821E216C;
loc_821E20E4:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E20EC:
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E20F4:
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E20FC:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E2104:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r31,100(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821e2128
	if (ctx.cr6.eq) goto loc_821E2128;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2010
	ctx.r5.s64 = 2010;
	// addi r6,r11,-10528
	ctx.r6.s64 = ctx.r11.s64 + -10528;
	// b 0x821e216c
	goto loc_821E216C;
loc_821E2128:
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x821e2160
	if (ctx.cr6.lt) goto loc_821E2160;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bgt cr6,0x821e2160
	if (ctx.cr6.gt) goto loc_821E2160;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e2158
	if (ctx.cr6.eq) goto loc_821E2158;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2012
	ctx.r5.s64 = 2012;
	// addi r6,r11,-10576
	ctx.r6.s64 = ctx.r11.s64 + -10576;
	// b 0x821e216c
	goto loc_821E216C;
loc_821E2158:
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// b 0x821e206c
	goto loc_821E206C;
loc_821E2160:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2029
	ctx.r5.s64 = 2029;
	// addi r6,r11,-10628
	ctx.r6.s64 = ctx.r11.s64 + -10628;
loc_821E216C:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// b 0x821e1f24
	goto loc_821E1F24;
loc_821E2174:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e21ac
	if (ctx.cr6.eq) goto loc_821E21AC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,2022
	ctx.r5.s64 = 2022;
	// addi r6,r11,-10664
	ctx.r6.s64 = ctx.r11.s64 + -10664;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E219C;
	sub_821AFAE0(ctx, base);
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// stw r28,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E21AC:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821df1e8
	ctx.lr = 0x821E21BC;
	sub_821DF1E8(ctx, base);
	// stw r3,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E21C4:
	// li r5,0
	ctx.r5.s64 = 0;
loc_821E21C8:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bl 0x821e0190
	ctx.lr = 0x821E21D8;
	sub_821E0190(ctx, base);
	// b 0x821e23a8
	goto loc_821E23A8;
loc_821E21DC:
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x821e21c8
	goto loc_821E21C8;
loc_821E21E4:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,40(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x821e2218
	if (!ctx.cr6.eq) goto loc_821E2218;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r29,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E2218:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e23c0
	if (ctx.cr6.eq) goto loc_821E23C0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r6,r11,-10744
	ctx.r6.s64 = ctx.r11.s64 + -10744;
	// b 0x821e216c
	goto loc_821E216C;
loc_821E2234:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821c7078
	ctx.lr = 0x821E223C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e23b0
	if (ctx.cr0.eq) goto loc_821E23B0;
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r6,0
	ctx.r6.s64 = 0;
loc_821E224C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8224d188
	ctx.lr = 0x821E225C;
	sub_8224D188(ctx, base);
	// b 0x821e23a8
	goto loc_821E23A8;
loc_821E2260:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x821c7078
	ctx.lr = 0x821E2268;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e23b0
	if (ctx.cr0.eq) goto loc_821E23B0;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x821e224c
	goto loc_821E224C;
loc_821E2280:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821c7078
	ctx.lr = 0x821E2288;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e22a0
	if (ctx.cr0.eq) goto loc_821E22A0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821c76a0
	ctx.lr = 0x821E2298;
	sub_821C76A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821e22a4
	goto loc_821E22A4;
loc_821E22A0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821E22A4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821df060
	ctx.lr = 0x821E22B0;
	sub_821DF060(ctx, base);
	// stw r28,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
loc_821E22B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E22C0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821c7078
	ctx.lr = 0x821E22C8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e22e0
	if (ctx.cr0.eq) goto loc_821E22E0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821c76a0
	ctx.lr = 0x821E22D8;
	sub_821C76A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821e22e4
	goto loc_821E22E4;
loc_821E22E0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821E22E4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821df060
	ctx.lr = 0x821E22F0;
	sub_821DF060(ctx, base);
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// b 0x821e22b4
	goto loc_821E22B4;
loc_821E22F8:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// neg r11,r11
	ctx.r11.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E230C:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_821E232C:
	// stfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.f0.u64);
	// b 0x821e23c0
	goto loc_821E23C0;
loc_821E2334:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
loc_821E2354:
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x821e232c
	goto loc_821E232C;
loc_821E235C:
	// lwz r31,96(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lfd f0,24(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// b 0x821e2354
	goto loc_821E2354;
loc_821E2368:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x821c7078
	ctx.lr = 0x821E2370;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e23b0
	if (ctx.cr0.eq) goto loc_821E23B0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r7,72(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r6,68(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r5,64(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// bl 0x8224cf50
	ctx.lr = 0x821E238C;
	sub_8224CF50(ctx, base);
	// b 0x821e23a8
	goto loc_821E23A8;
loc_821E2390:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x821c7078
	ctx.lr = 0x821E2398;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e23b0
	if (ctx.cr0.eq) goto loc_821E23B0;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821c76a0
	ctx.lr = 0x821E23A8;
	sub_821C76A0(ctx, base);
loc_821E23A8:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821e23b4
	goto loc_821E23B4;
loc_821E23B0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821E23B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821df060
	ctx.lr = 0x821E23C0;
	sub_821DF060(ctx, base);
loc_821E23C0:
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e2428
	if (!ctx.cr6.eq) goto loc_821E2428;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821E23D4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e23f4
	if (ctx.cr0.eq) goto loc_821E23F4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r5,52(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r6,r11,8224
	ctx.r6.s64 = ctx.r11.s64 + 8224;
	// bl 0x821c7240
	ctx.lr = 0x821E23F0;
	sub_821C7240(ctx, base);
	// b 0x821e23f8
	goto loc_821E23F8;
loc_821E23F4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821E23F8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821e2424
	if (!ctx.cr6.eq) goto loc_821E2424;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,8192
	ctx.r6.s64 = ctx.r11.s64 + 8192;
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E2418;
	sub_821AFAE0(ctx, base);
	// stw r28,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r28.u32);
	// stw r28,76(r30)
	REX_STORE_U32(ctx.r30.u32 + 76, ctx.r28.u32);
	// b 0x821e2428
	goto loc_821E2428;
loc_821E2424:
	// stw r3,52(r30)
	REX_STORE_U32(ctx.r30.u32 + 52, ctx.r3.u32);
loc_821E2428:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EE720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x821EE728;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lis r20,29760
	ctx.r20.s64 = 1950351360;
	// lis r19,29616
	ctx.r19.s64 = 1940914176;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee868
	if (ctx.cr6.eq) goto loc_821EE868;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r7,-5204
	ctx.r28.s64 = ctx.r7.s64 + -5204;
	// addi r27,r8,-5216
	ctx.r27.s64 = ctx.r8.s64 + -5216;
	// addi r26,r9,-5228
	ctx.r26.s64 = ctx.r9.s64 + -5228;
	// addi r25,r10,-5240
	ctx.r25.s64 = ctx.r10.s64 + -5240;
	// addi r24,r11,4852
	ctx.r24.s64 = ctx.r11.s64 + 4852;
loc_821EE780:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a4f40
	ctx.lr = 0x821EE798;
	sub_821A4F40(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821EE7B0;
	sub_821A4F40(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EE7C8;
	sub_821A4F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EE7D0;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee8e8
	if (ctx.cr0.lt) goto loc_821EE8E8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE7E8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee8e8
	if (ctx.cr0.lt) goto loc_821EE8E8;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x821ee8f0
	if (ctx.cr6.gt) goto loc_821EE8F0;
	// beq cr6,0x821ee828
	if (ctx.cr6.eq) goto loc_821EE828;
	// lis r11,29584
	ctx.r11.s64 = 1938817024;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ee914
	if (ctx.cr6.eq) goto loc_821EE914;
	// lis r11,29600
	ctx.r11.s64 = 1939865600;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ee91c
	if (ctx.cr6.eq) goto loc_821EE91C;
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x821ee828
	if (ctx.cr6.eq) goto loc_821EE828;
	// lis r11,29632
	ctx.r11.s64 = 1941962752;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ee924
	if (!ctx.cr6.eq) goto loc_821EE924;
loc_821EE828:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_821EE82C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE834;
	sub_821EB2A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821ee8e8
	if (ctx.cr6.lt) goto loc_821EE8E8;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE850;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee8e8
	if (ctx.cr0.lt) goto loc_821EE8E8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ee780
	if (ctx.cr6.lt) goto loc_821EE780;
loc_821EE868:
	// cmplw cr6,r29,r19
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x821ee878
	if (ctx.cr6.eq) goto loc_821EE878;
	// cmplw cr6,r29,r20
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x821ee8e4
	if (!ctx.cr6.eq) goto loc_821EE8E4;
loc_821EE878:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ee8e4
	if (ctx.cr6.eq) goto loc_821EE8E4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-5264
	ctx.r29.s64 = ctx.r11.s64 + -5264;
loc_821EE88C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821EE8A4;
	sub_821A4F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EE8AC;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee8e8
	if (ctx.cr0.lt) goto loc_821EE8E8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE8CC;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee8e8
	if (ctx.cr0.lt) goto loc_821EE8E8;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821ee88c
	if (ctx.cr6.lt) goto loc_821EE88C;
loc_821EE8E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821EE8E8:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
loc_821EE8F0:
	// lis r11,29776
	ctx.r11.s64 = 1951399936;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ee828
	if (ctx.cr6.eq) goto loc_821EE828;
	// lis r11,29792
	ctx.r11.s64 = 1952448512;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821ee91c
	if (ctx.cr6.eq) goto loc_821EE91C;
	// lis r11,29808
	ctx.r11.s64 = 1953497088;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ee924
	if (!ctx.cr6.eq) goto loc_821EE924;
loc_821EE914:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// b 0x821ee82c
	goto loc_821EE82C;
loc_821EE91C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x821ee82c
	goto loc_821EE82C;
loc_821EE924:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821ee8e8
	goto loc_821EE8E8;
}

DEFINE_REX_FUNC(sub_821F4810) {
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
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,2,10,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r9,r11,0,11,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f488c
	if (!ctx.cr6.eq) goto loc_821F488C;
	// rlwinm r11,r11,0,13,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF7FFFF;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// addi r5,r10,-1976
	ctx.r5.s64 = ctx.r10.s64 + -1976;
	// bl 0x821f3d10
	ctx.lr = 0x821F487C;
	sub_821F3D10(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// b 0x821f4898
	goto loc_821F4898;
loc_821F488C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-1988
	ctx.r5.s64 = ctx.r11.s64 + -1988;
	// bl 0x821f3d10
	ctx.lr = 0x821F4898;
	sub_821F3D10(ctx, base);
loc_821F4898:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220a4b8
	ctx.lr = 0x821F48A0;
	sub_8220A4B8(ctx, base);
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

DEFINE_REX_FUNC(sub_821F7578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821F7580;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f760c
	if (!ctx.cr6.gt) goto loc_821F760C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821F759C:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r30,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821f75f8
	if (ctx.cr6.eq) goto loc_821F75F8;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x821f75d8
	goto loc_821F75D8;
loc_821F75BC:
	// lwz r9,60(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r11,60(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lwz r11,56(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
loc_821F75D8:
	// lwzx r4,r8,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,56(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x821f75bc
	if (!ctx.cr6.eq) goto loc_821F75BC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821f75f8
	if (ctx.cr6.eq) goto loc_821F75F8;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x8220e4a0
	ctx.lr = 0x821F75F8;
	sub_8220E4A0(ctx, base);
loc_821F75F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f759c
	if (ctx.cr6.lt) goto loc_821F759C;
loc_821F760C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FA458) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821FA460;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r27,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r4,255
	ctx.r4.s64 = 255;
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bl 0x8215ec60
	ctx.lr = 0x821FA49C;
	sub_8215EC60(ctx, base);
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,-24
	ctx.r5.s64 = ctx.r11.s64 + -24;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821FA4D0;
	sub_821F4EA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x821fa4e4
	if (!ctx.cr6.lt) goto loc_821FA4E4;
loc_821FA4DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821fa738
	goto loc_821FA738;
loc_821FA4E4:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821fa544
	if (ctx.cr6.eq) goto loc_821FA544;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
loc_821FA504:
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r5,4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r5,r5,0,26,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x821fa4dc
	if (!ctx.cr0.eq) goto loc_821FA4DC;
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821fa4dc
	if (!ctx.cr6.eq) goto loc_821FA4DC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821fa504
	if (ctx.cr6.lt) goto loc_821FA504;
loc_821FA544:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x821fa734
	if (!ctx.cr6.eq) goto loc_821FA734;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
loc_821FA554:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821fa4dc
	if (!ctx.cr6.eq) goto loc_821FA4DC;
	// lwz r8,32(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x821fa4dc
	if (!ctx.cr6.eq) goto loc_821FA4DC;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821fa594
	if (ctx.cr6.eq) goto loc_821FA594;
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x821fa4dc
	if (!ctx.cr0.eq) goto loc_821FA4DC;
loc_821FA594:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x821fa554
	if (ctx.cr6.lt) goto loc_821FA554;
	// lwz r11,156(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821fa4dc
	if (!ctx.cr6.eq) goto loc_821FA4DC;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821fa4dc
	if (!ctx.cr6.eq) goto loc_821FA4DC;
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821FA5C4;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fa5d8
	if (ctx.cr0.eq) goto loc_821FA5D8;
	// bl 0x8220d6a0
	ctx.lr = 0x821FA5D0;
	sub_8220D6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821fa5dc
	goto loc_821FA5DC;
loc_821FA5D8:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_821FA5DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821fa5f0
	if (!ctx.cr6.eq) goto loc_821FA5F0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821fa738
	goto loc_821FA738;
loc_821FA5F0:
	// li r11,897
	ctx.r11.s64 = 897;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwimi r4,r11,21,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220de30
	ctx.lr = 0x821FA610;
	sub_8220DE30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// blt 0x821fa728
	if (ctx.cr0.lt) goto loc_821FA728;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821FA624;
	sub_8220D6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x821fa724
	if (ctx.cr0.lt) goto loc_821FA724;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x821FA644;
	sub_8215E640(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8215e640
	ctx.lr = 0x821FA654;
	sub_8215E640(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821fa714
	if (ctx.cr6.eq) goto loc_821FA714;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821FA664:
	// lwz r10,108(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821fa6e8
	if (ctx.cr0.eq) goto loc_821FA6E8;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x821fa6e8
	if (ctx.cr6.eq) goto loc_821FA6E8;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,56(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 56);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_821FA6E8:
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x821fa664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FA664;
loc_821FA714:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// bl 0x8220e150
	ctx.lr = 0x821FA720;
	sub_8220E150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821FA724:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821FA728:
	// bl 0x82113c30
	ctx.lr = 0x821FA72C;
	sub_82113C30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821FA734;
	sub_8220DDF0(ctx, base);
loc_821FA734:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821FA738:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82201C30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x82201C38;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82201e94
	if (ctx.cr6.eq) goto loc_82201E94;
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r31,-4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220daa8
	ctx.lr = 0x82201C7C;
	sub_8220DAA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82201e94
	if (!ctx.cr0.eq) goto loc_82201E94;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r17,24576
	ctx.r17.s64 = 1610612736;
	// rlwinm r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r10,r17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82201e94
	if (ctx.cr6.eq) goto loc_82201E94;
	// lis r18,4352
	ctx.r18.s64 = 285212672;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82201e94
	if (ctx.cr6.eq) goto loc_82201E94;
	// addic. r25,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r25.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82201e84
	if (ctx.cr0.lt) goto loc_82201E84;
	// rlwinm r24,r25,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82201CB4:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwzx r31,r24,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82201e78
	if (ctx.cr6.eq) goto loc_82201E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82201e78
	if (ctx.cr0.eq) goto loc_82201E78;
	// rlwinm r11,r11,0,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82201e84
	if (ctx.cr6.eq) goto loc_82201E84;
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82201e84
	if (ctx.cr6.eq) goto loc_82201E84;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f5768
	ctx.lr = 0x82201CFC;
	sub_821F5768(ctx, base);
	// lis r11,20480
	ctx.r11.s64 = 1342177280;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82201d1c
	if (!ctx.cr6.eq) goto loc_82201D1C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82201D1C:
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82201da0
	if (ctx.cr6.eq) goto loc_82201DA0;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r11,r11,29,0,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xE0000000;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// srawi r6,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 31;
loc_82201D44:
	// lwzx r11,r9,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// bne cr6,0x82201d78
	if (!ctx.cr6.eq) goto loc_82201D78;
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,20(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// b 0x82201d7c
	goto loc_82201D7C;
loc_82201D78:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
loc_82201D7C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82201d8c
	if (!ctx.cr6.eq) goto loc_82201D8C;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82201d90
	goto loc_82201D90;
loc_82201D8C:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82201D90:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82201d44
	if (ctx.cr6.lt) goto loc_82201D44;
loc_82201DA0:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82201e78
	if (ctx.cr6.eq) goto loc_82201E78;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x82201e78
	if (ctx.cr6.eq) goto loc_82201E78;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r4,r27,-1
	ctx.r4.s64 = ctx.r27.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821fc238
	ctx.lr = 0x82201DC0;
	sub_821FC238(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82201e84
	if (ctx.cr0.lt) goto loc_82201E84;
	// lwz r11,108(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82201e8c
	if (!ctx.cr0.eq) goto loc_82201E8C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82225290
	ctx.lr = 0x82201DE4;
	sub_82225290(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82201e64
	if (ctx.cr0.lt) goto loc_82201E64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82201e54
	if (ctx.cr6.eq) goto loc_82201E54;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r7,20(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,20(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
loc_82201E0C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r3,12(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82201e40
	if (!ctx.cr6.eq) goto loc_82201E40;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82201e44
	goto loc_82201E44;
loc_82201E40:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82201E44:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82201e0c
	if (ctx.cr6.lt) goto loc_82201E0C;
loc_82201E54:
	// cmpw cr6,r29,r20
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82201e64
	if (ctx.cr6.eq) goto loc_82201E64;
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// bne cr6,0x82201e8c
	if (!ctx.cr6.eq) goto loc_82201E8C;
loc_82201E64:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215e640
	ctx.lr = 0x82201E78;
	sub_8215E640(ctx, base);
loc_82201E78:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r24,r24,-4
	ctx.r24.s64 = ctx.r24.s64 + -4;
	// bge 0x82201cb4
	if (!ctx.cr0.lt) goto loc_82201CB4;
loc_82201E84:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82201e98
	goto loc_82201E98;
loc_82201E8C:
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82201e84
	goto loc_82201E84;
loc_82201E94:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82201E98:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82208B90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82208B98;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208bb8
	if (!ctx.cr6.eq) goto loc_82208BB8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82208e38
	goto loc_82208E38;
loc_82208BB8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82208e34
	if (ctx.cr6.eq) goto loc_82208E34;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r11,r10
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82208BE0:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82208c44
	if (!ctx.cr6.eq) goto loc_82208C44;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82208c44
	if (!ctx.cr6.eq) goto loc_82208C44;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82208c44
	if (!ctx.cr6.eq) goto loc_82208C44;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82208e28
	if (ctx.cr6.eq) goto loc_82208E28;
loc_82208C44:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82207320
	ctx.lr = 0x82208C50;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// oris r29,r10,45056
	ctx.r29.u64 = ctx.r10.u64 | 2952790016;
	// ori r29,r29,4096
	ctx.r29.u64 = ctx.r29.u64 | 4096;
	// blt cr6,0x82208ca8
	if (ctx.cr6.lt) goto loc_82208CA8;
	// beq cr6,0x82208ca4
	if (ctx.cr6.eq) goto loc_82208CA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82208c9c
	if (ctx.cr6.lt) goto loc_82208C9C;
	// bne cr6,0x82208ca8
	if (!ctx.cr6.eq) goto loc_82208CA8;
	// oris r29,r29,255
	ctx.r29.u64 = ctx.r29.u64 | 16711680;
	// b 0x82208ca8
	goto loc_82208CA8;
loc_82208C9C:
	// oris r29,r29,170
	ctx.r29.u64 = ctx.r29.u64 | 11141120;
	// b 0x82208ca8
	goto loc_82208CA8;
loc_82208CA4:
	// oris r29,r29,85
	ctx.r29.u64 = ctx.r29.u64 | 5570560;
loc_82208CA8:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82208cb8
	if (!ctx.cr6.eq) goto loc_82208CB8;
	// oris r29,r29,3328
	ctx.r29.u64 = ctx.r29.u64 | 218103808;
loc_82208CB8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
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
	ctx.lr = 0x82208CF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208D20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208D48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r28
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r28.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82208D90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,332(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 332);
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r5,r28
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208DCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208DF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208E10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x82208E20;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208e38
	if (ctx.cr0.lt) goto loc_82208E38;
loc_82208E28:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82208be0
	if (ctx.cr6.lt) goto loc_82208BE0;
loc_82208E34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208E38:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220E988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8220E990;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x8216b018
	ctx.lr = 0x8220E9B4;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220e9c8
	if (ctx.cr0.eq) goto loc_8220E9C8;
	// bl 0x82113c30
	ctx.lr = 0x8220E9C0;
	sub_82113C30(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8220e9cc
	goto loc_8220E9CC;
loc_8220E9C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8220E9CC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8220e9dc
	if (!ctx.cr6.eq) goto loc_8220E9DC;
loc_8220E9D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8220ea20
	goto loc_8220EA20;
loc_8220E9DC:
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
	// bl 0x8224d658
	ctx.lr = 0x8220E9F4;
	sub_8224D658(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8220ea14
	if (!ctx.cr0.lt) goto loc_8220EA14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113c30
	ctx.lr = 0x8220EA04;
	sub_82113C30(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x8220EA10;
	sub_8216B138(ctx, base);
	// b 0x8220e9d4
	goto loc_8220E9D4;
loc_8220EA14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8220e628
	ctx.lr = 0x8220EA20;
	sub_8220E628(ctx, base);
loc_8220EA20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220F9B8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8220fa04
	if (ctx.cr6.eq) goto loc_8220FA04;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
loc_8220F9C4:
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220fa0c
	if (!ctx.cr0.eq) goto loc_8220FA0C;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x8220f9f8
	if (ctx.cr6.eq) goto loc_8220F9F8;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8220fa0c
	if (!ctx.cr0.eq) goto loc_8220FA0C;
loc_8220F9F8:
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8220f9c4
	if (!ctx.cr6.eq) goto loc_8220F9C4;
loc_8220FA04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220FA0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822121D8) {
	REX_FUNC_PROLOGUE();
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x822121f8
	if (!ctx.cr6.eq) goto loc_822121F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_822121F8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82212270
	if (ctx.cr6.lt) goto loc_82212270;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82212270
	if (!ctx.cr6.lt) goto loc_82212270;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82212254
	if (ctx.cr6.eq) goto loc_82212254;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82212230:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82212254
	if (ctx.cr6.eq) goto loc_82212254;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,20(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r9,24(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82212230
	if (!ctx.cr6.eq) goto loc_82212230;
loc_82212254:
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82212270
	if (!ctx.cr6.eq) goto loc_82212270;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82212270:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82212DE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82212DF0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwzx r31,r10,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r29,r9,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// rlwinm r8,r10,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82212e2c
	if (!ctx.cr6.lt) goto loc_82212E2C;
loc_82212E24:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82213004
	goto loc_82213004;
loc_82212E2C:
	// ble cr6,0x82212e38
	if (!ctx.cr6.gt) goto loc_82212E38;
loc_82212E30:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82213004
	goto loc_82213004;
loc_82212E38:
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82212e30
	if (ctx.cr6.lt) goto loc_82212E30;
	// bgt cr6,0x82212e24
	if (ctx.cr6.gt) goto loc_82212E24;
	// lwz r28,12(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82212ed0
	if (ctx.cr6.eq) goto loc_82212ED0;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r6,20(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_82212E6C:
	// lwzx r11,r7,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	// lwzx r10,r7,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82212e6c
	if (ctx.cr6.lt) goto loc_82212E6C;
loc_82212ED0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220d800
	ctx.lr = 0x82212ED8;
	sub_8220D800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82212fa4
	if (ctx.cr0.eq) goto loc_82212FA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// clrlwi. r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82213000
	if (ctx.cr0.eq) goto loc_82213000;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r31,8(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_82212F04:
	// lwzx r11,r8,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// lwzx r10,r7,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwzx r6,r8,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r7,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r6,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r5,r5,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// lwz r6,48(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 48);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lwz r5,48(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82212f58
	if (ctx.cr6.lt) goto loc_82212F58;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bgt cr6,0x82212f5c
	if (ctx.cr6.gt) goto loc_82212F5C;
loc_82212F58:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82212F5C:
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// blt cr6,0x82212f70
	if (ctx.cr6.lt) goto loc_82212F70;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bgt cr6,0x82212f74
	if (ctx.cr6.gt) goto loc_82212F74;
loc_82212F70:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_82212F74:
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82212f04
	if (ctx.cr6.lt) goto loc_82212F04;
	// b 0x82213000
	goto loc_82213000;
loc_82212FA4:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82213000
	if (ctx.cr6.eq) goto loc_82213000;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,8(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
loc_82212FC4:
	// lwzx r9,r11,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r9,48(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// lwz r8,48(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82212e24
	if (ctx.cr6.lt) goto loc_82212E24;
	// bgt cr6,0x82212e30
	if (ctx.cr6.gt) goto loc_82212E30;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82212fc4
	if (ctx.cr6.lt) goto loc_82212FC4;
loc_82213000:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82213004:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8221ED48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8221ED50;
	__savegprlr_23(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// bl 0x82213478
	ctx.lr = 0x8221ED6C;
	sub_82213478(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217878
	ctx.lr = 0x8221ED7C;
	sub_82217878(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8221ed98
	if (!ctx.cr0.eq) goto loc_8221ED98;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8221ee78
	if (ctx.cr0.eq) goto loc_8221EE78;
loc_8221ED98:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221edcc
	if (ctx.cr6.eq) goto loc_8221EDCC;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_8221EDAC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r26,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221edac
	if (ctx.cr6.lt) goto loc_8221EDAC;
loc_8221EDCC:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8221ee78
	if (ctx.cr0.eq) goto loc_8221EE78;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8221EDDC:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8221ee70
	if (ctx.cr0.eq) goto loc_8221EE70;
	// rlwinm r10,r10,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// lwz r8,44(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lis r7,24576
	ctx.r7.s64 = 1610612736;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8221ee18
	if (ctx.cr6.eq) goto loc_8221EE18;
	// lis r10,4352
	ctx.r10.s64 = 285212672;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8221ee24
	if (!ctx.cr6.eq) goto loc_8221EE24;
loc_8221EE18:
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_8221EE24:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8221ee70
	if (!ctx.cr6.gt) goto loc_8221EE70;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_8221EE38:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwz r4,44(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8221ee5c
	if (!ctx.cr6.lt) goto loc_8221EE5C;
	// stw r8,44(r10)
	REX_STORE_U32(ctx.r10.u32 + 44, ctx.r8.u32);
loc_8221EE5C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221ee38
	if (ctx.cr6.lt) goto loc_8221EE38;
loc_8221EE70:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8221eddc
	if (!ctx.cr6.eq) goto loc_8221EDDC;
loc_8221EE78:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8221ef3c
	if (ctx.cr6.eq) goto loc_8221EF3C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
loc_8221EE90:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r7,r10,0,0,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8221ef28
	if (ctx.cr0.eq) goto loc_8221EF28;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r30,4(r8)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r3.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,28,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8221ef14
	if (!ctx.cr0.eq) goto loc_8221EF14;
	// lis r10,8304
	ctx.r10.s64 = 544210944;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221ef00
	if (ctx.cr6.eq) goto loc_8221EF00;
	// lis r10,8320
	ctx.r10.s64 = 545259520;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221ef00
	if (ctx.cr6.eq) goto loc_8221EF00;
	// lis r10,4432
	ctx.r10.s64 = 290455552;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8221ef00
	if (ctx.cr6.eq) goto loc_8221EF00;
	// lwz r10,20(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// b 0x8221ef14
	goto loc_8221EF14;
loc_8221EF00:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_8221EF14:
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8221ef28
	if (ctx.cr6.eq) goto loc_8221EF28;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8221EF28:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221ee90
	if (ctx.cr6.lt) goto loc_8221EE90;
loc_8221EF3C:
	// lwz r10,204(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221ef50
	if (ctx.cr0.eq) goto loc_8221EF50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8221f1f0
	goto loc_8221F1F0;
loc_8221EF50:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// beq cr6,0x8221f088
	if (ctx.cr6.eq) goto loc_8221F088;
	// bl 0x8216b018
	ctx.lr = 0x8221EF64;
	sub_8216B018(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8221f1c0
	if (ctx.cr0.eq) goto loc_8221F1C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x8221EF7C;
	sub_8216B018(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8221f1c0
	if (ctx.cr0.eq) goto loc_8221F1C0;
loc_8221EF84:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// bl 0x822173b0
	ctx.lr = 0x8221EF90;
	sub_822173B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8221efc0
	if (ctx.cr6.eq) goto loc_8221EFC0;
	// addi r10,r25,-4
	ctx.r10.s64 = ctx.r25.s64 + -4;
loc_8221EFAC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8221efac
	if (ctx.cr6.lt) goto loc_8221EFAC;
loc_8221EFC0:
	// lis r11,-32223
	ctx.r11.s64 = -2111766528;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r11,-3488
	ctx.r3.s64 = ctx.r11.s64 + -3488;
	// bl 0x8220f680
	ctx.lr = 0x8221EFD4;
	sub_8220F680(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221f024
	if (ctx.cr6.eq) goto loc_8221F024;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r8,r25,r24
	ctx.r8.u64 = ctx.r24.u64 - ctx.r25.u64;
loc_8221EFEC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwzx r7,r6,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 & ctx.r29.u64;
	// stwx r7,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221efec
	if (ctx.cr6.lt) goto loc_8221EFEC;
loc_8221F024:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8215e640
	ctx.lr = 0x8221F034;
	sub_8215E640(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8221ef84
	if (ctx.cr6.eq) goto loc_8221EF84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217878
	ctx.lr = 0x8221F044;
	sub_82217878(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r31,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r11,r11,9916
	ctx.r11.s64 = ctx.r11.s64 + 9916;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8221F070;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,9908
	ctx.r11.s64 = ctx.r11.s64 + 9908;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// b 0x8221f1b8
	goto loc_8221F1B8;
loc_8221F088:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x8216b018
	ctx.lr = 0x8221F090;
	sub_8216B018(ctx, base);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x8221f1c0
	if (ctx.cr0.eq) goto loc_8221F1C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x8221F0A8;
	sub_8216B018(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x8221f1c0
	if (ctx.cr0.eq) goto loc_8221F1C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x8221F0C0;
	sub_8216B018(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x8221f1c0
	if (ctx.cr0.eq) goto loc_8221F1C0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8221f128
	if (!ctx.cr6.gt) goto loc_8221F128;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// addi r8,r23,-4
	ctx.r8.s64 = ctx.r23.s64 + -4;
loc_8221F0E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r26,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r26.u32);
	// rlwinm. r6,r6,0,0,11
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r7,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r7.u32);
	// beq 0x8221f114
	if (ctx.cr0.eq) goto loc_8221F114;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8221f114
	if (!ctx.cr6.eq) goto loc_8221F114;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_8221F114:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221f0e0
	if (ctx.cr6.lt) goto loc_8221F0E0;
loc_8221F128:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8221f168
	if (ctx.cr6.eq) goto loc_8221F168;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_8221F13C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822116f8
	ctx.lr = 0x8221F150;
	sub_822116F8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8221f1c8
	if (ctx.cr0.lt) goto loc_8221F1C8;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8221f13c
	if (ctx.cr6.lt) goto loc_8221F13C;
loc_8221F168:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8221f1a8
	if (ctx.cr6.eq) goto loc_8221F1A8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r8,r24,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r24.u64;
loc_8221F180:
	// lwzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221f180
	if (ctx.cr6.lt) goto loc_8221F180;
loc_8221F1A8:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8215e640
	ctx.lr = 0x8221F1B8;
	sub_8215E640(ctx, base);
loc_8221F1B8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// b 0x8221f1c8
	goto loc_8221F1C8;
loc_8221F1C0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_8221F1C8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8216b138
	ctx.lr = 0x8221F1D4;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216b138
	ctx.lr = 0x8221F1E0;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8216b138
	ctx.lr = 0x8221F1EC;
	sub_8216B138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8221F1F0:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8222D668) {
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
	// bl 0x821fee48
	ctx.lr = 0x8222D684;
	sub_821FEE48(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,14792
	ctx.r11.s64 = ctx.r11.s64 + 14792;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r30.u32);
	// addi r3,r31,712
	ctx.r3.s64 = ctx.r31.s64 + 712;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r30,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,1088(r31)
	REX_STORE_U32(ctx.r31.u32 + 1088, ctx.r10.u32);
	// stw r30,1100(r31)
	REX_STORE_U32(ctx.r31.u32 + 1100, ctx.r30.u32);
	// stw r30,696(r31)
	REX_STORE_U32(ctx.r31.u32 + 696, ctx.r30.u32);
	// stw r30,700(r31)
	REX_STORE_U32(ctx.r31.u32 + 700, ctx.r30.u32);
	// stw r30,708(r31)
	REX_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// stw r30,704(r31)
	REX_STORE_U32(ctx.r31.u32 + 704, ctx.r30.u32);
	// bl 0x8215ec60
	ctx.lr = 0x8222D6C8;
	sub_8215EC60(ctx, base);
	// stw r30,1032(r31)
	REX_STORE_U32(ctx.r31.u32 + 1032, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_8222EA38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r30,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8222eac0
	if (ctx.cr6.eq) goto loc_8222EAC0;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// subf r31,r4,r3
	ctx.r31.u64 = ctx.r3.u64 - ctx.r4.u64;
	// addi r3,r11,-9152
	ctx.r3.s64 = ctx.r11.s64 + -9152;
loc_8222EA58:
	// li r10,4
	ctx.r10.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8222EA70:
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r30,r31,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8222eaa0
	if (ctx.cr6.eq) goto loc_8222EAA0;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,-1
	ctx.r30.s64 = -1;
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_8222EAA0:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8222ea70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8222EA70;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8222ead0
	if (!ctx.cr6.eq) goto loc_8222EAD0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8222ea58
	if (ctx.cr6.lt) goto loc_8222EA58;
loc_8222EAC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8222EAC4:
	// ld r30,-16(r1)
	ctx.r30.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8222EAD0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8222eac4
	goto loc_8222EAC4;
}

DEFINE_REX_FUNC(sub_82230770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82230778;
	__savegprlr_27(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,202(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 202);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// cmplwi cr6,r11,260
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 260, ctx.xer);
	// stw r10,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// bne cr6,0x822307b8
	if (!ctx.cr6.eq) goto loc_822307B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82230b58
	goto loc_82230B58;
loc_822307B8:
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r29,r11,11624
	ctx.r29.s64 = ctx.r11.s64 + 11624;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r31,r11,12
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x822307F0;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82230b58
	if (ctx.cr0.lt) goto loc_82230B58;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82230870
	if (!ctx.cr6.eq) goto loc_82230870;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82230b54
	if (ctx.cr6.eq) goto loc_82230B54;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lfd f0,4696(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 4696);
loc_82230828:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82230860
	if (ctx.cr0.eq) goto loc_82230860;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82230860
	if (!ctx.cr6.eq) goto loc_82230860;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82230864
	goto loc_82230864;
loc_82230860:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82230864:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82230828
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230828;
	// b 0x8223099c
	goto loc_8223099C;
loc_82230870:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x82230898;
	sub_821F4EA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82230b58
	if (!ctx.cr0.eq) goto loc_82230B58;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfd f0,8072(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 8072);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82230b54
	if (ctx.cr6.eq) goto loc_82230B54;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_822308D0:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r3,r3,0,23,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82230908
	if (ctx.cr0.eq) goto loc_82230908;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82230908
	if (!ctx.cr6.eq) goto loc_82230908;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x8223090c
	goto loc_8223090C;
loc_82230908:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
loc_8223090C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x822308d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822308D0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82230940
	if (ctx.cr6.eq) goto loc_82230940;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82230940
	if (!ctx.cr6.eq) goto loc_82230940;
	// addi r11,r1,236
	ctx.r11.s64 = ctx.r1.s64 + 236;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8223092C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,-44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -44);
	// stw r10,-44(r11)
	REX_STORE_U32(ctx.r11.u32 + -44, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8223092c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223092C;
loc_82230940:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82230b54
	if (ctx.cr6.eq) goto loc_82230B54;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82230958:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82230990
	if (ctx.cr0.eq) goto loc_82230990;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82230990
	if (!ctx.cr6.eq) goto loc_82230990;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82230994
	goto loc_82230994;
loc_82230990:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82230994:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82230958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230958;
loc_8223099C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82230b54
	if (!ctx.cr6.eq) goto loc_82230B54;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82230b54
	if (!ctx.cr6.eq) goto loc_82230B54;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// ble cr6,0x822309dc
	if (!ctx.cr6.gt) goto loc_822309DC;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
loc_822309BC:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82230b54
	if (!ctx.cr6.eq) goto loc_82230B54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x822309bc
	if (ctx.cr6.lt) goto loc_822309BC;
loc_822309DC:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r8,1807
	ctx.r8.s64 = 1807;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rlwimi r9,r8,20,0,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFF00000) | (ctx.r9.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82230a6c
	if (!ctx.cr6.gt) goto loc_82230A6C;
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,8(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_82230A3C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r4,4(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82230a5c
	if (!ctx.cr6.eq) goto loc_82230A5C;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82230a5c
	if (ctx.cr6.lt) goto loc_82230A5C;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
loc_82230A5C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82230a3c
	if (ctx.cr6.lt) goto loc_82230A3C;
loc_82230A6C:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,136(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lfd f1,1792(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x8220ea28
	ctx.lr = 0x82230A9C;
	sub_8220EA28(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82230ad8
	if (!ctx.cr6.eq) goto loc_82230AD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82230b58
	goto loc_82230B58;
loc_82230AD8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// b 0x82230ae8
	goto loc_82230AE8;
loc_82230AE4:
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
loc_82230AE8:
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82230ae4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230AE4;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
loc_82230B14:
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r6,r7,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r6,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,260(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// stwx r5,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r5.u32);
	// bdnz 0x82230b14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82230B14;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r27,1104(r30)
	REX_STORE_U32(ctx.r30.u32 + 1104, ctx.r27.u32);
	// b 0x82230b58
	goto loc_82230B58;
loc_82230B54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82230B58:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8223BB90) {
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
	// bl 0x82238aa0
	ctx.lr = 0x8223BBB0;
	sub_82238AA0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223bbc4
	if (ctx.cr0.eq) goto loc_8223BBC4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x8223BBC4;
	sub_8216B138(ctx, base);
loc_8223BBC4:
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

DEFINE_REX_FUNC(sub_8223D190) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x8223D198;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,348(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 348);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d1b4
	if (ctx.cr6.eq) goto loc_8223D1B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223d370
	goto loc_8223D370;
loc_8223D1B4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// std r21,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r21.u64);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// std r21,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r21.u64);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// ble cr6,0x8223d310
	if (!ctx.cr6.gt) goto loc_8223D310;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// addi r25,r11,19556
	ctx.r25.s64 = ctx.r11.s64 + 19556;
	// addi r24,r10,9692
	ctx.r24.s64 = ctx.r10.s64 + 9692;
loc_8223D1F8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r31,r22,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8223d2fc
	if (ctx.cr0.eq) goto loc_8223D2FC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D234;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// beq cr6,0x8223d2dc
	if (ctx.cr6.eq) goto loc_8223D2DC;
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// beq cr6,0x8223d2a0
	if (ctx.cr6.eq) goto loc_8223D2A0;
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d2fc
	if (!ctx.cr6.gt) goto loc_8223D2FC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,4540
	ctx.r5.s64 = 4540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8223D298;
	sub_8221FF00(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x8223d2d4
	goto loc_8223D2D4;
loc_8223D2A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223d2fc
	if (!ctx.cr6.gt) goto loc_8223D2FC;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// li r5,4540
	ctx.r5.s64 = 4540;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8223D2D0;
	sub_8221FF00(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8223D2D4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x8223d2fc
	goto loc_8223D2FC;
loc_8223D2DC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8223d2fc
	if (!ctx.cr6.eq) goto loc_8223D2FC;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r20,96(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8223D2FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223d1f8
	if (ctx.cr6.lt) goto loc_8223D1F8;
loc_8223D310:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8223D320:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8223d330
	if (ctx.cr6.eq) goto loc_8223D330;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8223D330:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8223d320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8223D320;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x8223d35c
	if (ctx.cr6.eq) goto loc_8223D35C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4541
	ctx.r5.s64 = 4541;
	// addi r6,r11,9624
	ctx.r6.s64 = ctx.r11.s64 + 9624;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8223D358;
	sub_8221FF00(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8223D35C:
	// subfic r11,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r28.u64;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_8223D370:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82242120) {
	REX_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// addi r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x8224214c
	if (ctx.cr6.eq) goto loc_8224214C;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82242144
	if (ctx.cr6.eq) goto loc_82242144;
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82242204
	if (!ctx.cr6.eq) goto loc_82242204;
loc_82242144:
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// bne cr6,0x822421d0
	if (!ctx.cr6.eq) goto loc_822421D0;
loc_8224214C:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,31488
	ctx.r10.s64 = ctx.r10.s64 + 31488;
loc_82242158:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x8224217c
	if (ctx.cr0.eq) goto loc_8224217C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82242158
	if (ctx.cr6.eq) goto loc_82242158;
loc_8224217C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8224222c
	if (ctx.cr0.eq) goto loc_8224222C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r10,r10,31484
	ctx.r10.s64 = ctx.r10.s64 + 31484;
loc_82242190:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r7,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r7.u64;
	// beq 0x822421b4
	if (ctx.cr0.eq) goto loc_822421B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82242190
	if (ctx.cr6.eq) goto loc_82242190;
loc_822421B4:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8224222c
	if (ctx.cr0.eq) goto loc_8224222C;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,67
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 67, ctx.xer);
	// bne cr6,0x82242220
	if (!ctx.cr6.eq) goto loc_82242220;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// b 0x82242220
	goto loc_82242220;
loc_822421D0:
	// cmpwi cr6,r11,101
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 101, ctx.xer);
	// bne cr6,0x82242220
	if (!ctx.cr6.eq) goto loc_82242220;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// bne cr6,0x822421fc
	if (!ctx.cr6.eq) goto loc_822421FC;
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_822421FC:
	// cmpwi cr6,r11,77
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 77, ctx.xer);
	// beq cr6,0x82242220
	if (ctx.cr6.eq) goto loc_82242220;
loc_82242204:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8224220C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82242204
	if (ctx.cr6.lt) goto loc_82242204;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82242204
	if (ctx.cr6.gt) goto loc_82242204;
loc_82242220:
	// lbz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8224220c
	if (!ctx.cr0.eq) goto loc_8224220C;
loc_8224222C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82242FD8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822430a0
	if (ctx.cr6.eq) goto loc_822430A0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82242ef0
	ctx.lr = 0x82242FFC;
	sub_82242EF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224300c
	if (ctx.cr0.lt) goto loc_8224300C;
loc_82243004:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822430a8
	goto loc_822430A8;
loc_8224300C:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bne cr6,0x822430a0
	if (!ctx.cr6.eq) goto loc_822430A0;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,4172
	ctx.r10.s64 = ctx.r11.s64 + 4172;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82243028:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x8224304c
	if (ctx.cr0.eq) goto loc_8224304C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82243028
	if (ctx.cr6.eq) goto loc_82243028;
loc_8224304C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8224305c
	if (!ctx.cr0.eq) goto loc_8224305C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82243098
	goto loc_82243098;
loc_8224305C:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,4180
	ctx.r10.s64 = ctx.r10.s64 + 4180;
loc_82243068:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x8224308c
	if (ctx.cr0.eq) goto loc_8224308C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82243068
	if (ctx.cr6.eq) goto loc_82243068;
loc_8224308C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822430a0
	if (!ctx.cr0.eq) goto loc_822430A0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82243098:
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82243004
	goto loc_82243004;
loc_822430A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_822430A8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82247C58) {
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
	// lwz r10,88(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 88);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82247c8c
	if (!ctx.cr6.gt) goto loc_82247C8C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-29752
	ctx.r4.s64 = ctx.r11.s64 + -29752;
	// bl 0x822444a0
	ctx.lr = 0x82247C84;
	sub_822444A0(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
loc_82247C8C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822483B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822483C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r29,4(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r24,8(r4)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248418
	if (ctx.cr6.eq) goto loc_82248418;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// beq cr6,0x82248404
	if (ctx.cr6.eq) goto loc_82248404;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82248404:
	// neg r10,r11
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r11.u64);
	// oris r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 2147483648;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwimi r24,r11,31,0,0
	ctx.r24.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x80000000) | (ctx.r24.u64 & 0xFFFFFFFF7FFFFFFF);
loc_82248418:
	// clrlwi r11,r31,27
	ctx.r11.u64 = ctx.r31.u32 & 0x1F;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x822484dc
	if (ctx.cr6.gt) goto loc_822484DC;
	// lwz r30,84(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 84);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r5,r11,-28088
	ctx.r5.s64 = ctx.r11.s64 + -28088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82248338
	ctx.lr = 0x8224843C;
	sub_82248338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224860c
	if (!ctx.cr0.eq) goto loc_8224860C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248464
	if (ctx.cr6.eq) goto loc_82248464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28148
	ctx.r4.s64 = ctx.r11.s64 + -28148;
loc_82248458:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822444a0
	ctx.lr = 0x82248460;
	sub_822444A0(ctx, base);
	// b 0x8224860c
	goto loc_8224860C;
loc_82248464:
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// rlwimi r31,r10,12,14,19
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F000) | (ctx.r31.u64 & 0xFFFFFFFFFFFC0FFF);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248494
	if (ctx.cr6.eq) goto loc_82248494;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82248490
	if (ctx.cr6.eq) goto loc_82248490;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28240
	ctx.r4.s64 = ctx.r11.s64 + -28240;
	// b 0x82248458
	goto loc_82248458;
loc_82248490:
	// oris r31,r31,4
	ctx.r31.u64 = ctx.r31.u64 | 262144;
loc_82248494:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// rlwinm r9,r29,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,-28276
	ctx.r10.s64 = ctx.r10.s64 + -28276;
	// rlwinm r8,r11,25,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1C;
	// rlwinm r7,r11,28,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1C;
	// rlwinm r6,r11,31,27,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1C;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r6,r6,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// rlwimi r7,r8,3,26,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x38) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFC7);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// rlwimi r6,r10,3,0,28
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r6.u64 & 0xFFFFFFFF00000007);
	// rlwimi r11,r6,3,0,28
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8) | (ctx.r11.u64 & 0xFFFFFFFF00000007);
	// or r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 | ctx.r9.u64;
	// b 0x822484e0
	goto loc_822484E0;
loc_822484DC:
	// ori r29,r29,4095
	ctx.r29.u64 = ctx.r29.u64 | 4095;
loc_822484E0:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// beq cr6,0x82248600
	if (ctx.cr6.eq) goto loc_82248600;
	// lwz r30,96(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 96);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82248504
	if (ctx.cr6.eq) goto loc_82248504;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28344
	ctx.r4.s64 = ctx.r11.s64 + -28344;
	// b 0x82248458
	goto loc_82248458;
loc_82248504:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8224852c
	if (ctx.cr6.eq) goto loc_8224852C;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82248528
	if (ctx.cr6.eq) goto loc_82248528;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28432
	ctx.r4.s64 = ctx.r11.s64 + -28432;
	// b 0x82248458
	goto loc_82248458;
loc_82248528:
	// ori r31,r31,2048
	ctx.r31.u64 = ctx.r31.u64 | 2048;
loc_8224852C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-28444
	ctx.r5.s64 = ctx.r11.s64 + -28444;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82248338
	ctx.lr = 0x82248540;
	sub_82248338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8224860c
	if (!ctx.cr0.eq) goto loc_8224860C;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// rlwimi r31,r11,5,21,26
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7E0) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// clrlwi. r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822485f8
	if (ctx.cr0.eq) goto loc_822485F8;
	// rlwimi r11,r10,26,0,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0xFC000000) | (ctx.r11.u64 & 0xFFFFFFFF03FFFFFF);
	// cmplwi cr6,r9,18
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 18, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// beq cr6,0x822485d0
	if (ctx.cr6.eq) goto loc_822485D0;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x82248594
	if (ctx.cr6.eq) goto loc_82248594;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,24,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82248600
	if (ctx.cr0.eq) goto loc_82248600;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28512
	ctx.r4.s64 = ctx.r11.s64 + -28512;
	// b 0x822485c4
	goto loc_822485C4;
loc_82248594:
	// rlwinm r11,r31,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0x3;
	// rlwinm r9,r31,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822485bc
	if (!ctx.cr6.eq) goto loc_822485BC;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822485bc
	if (!ctx.cr6.eq) goto loc_822485BC;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82248600
	if (ctx.cr6.eq) goto loc_82248600;
loc_822485BC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28576
	ctx.r4.s64 = ctx.r11.s64 + -28576;
loc_822485C4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822444a0
	ctx.lr = 0x822485CC;
	sub_822444A0(ctx, base);
	// b 0x82248600
	goto loc_82248600;
loc_822485D0:
	// rlwinm r11,r31,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0x3;
	// rlwinm r9,r31,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822485ec
	if (!ctx.cr6.eq) goto loc_822485EC;
	// rlwinm r10,r10,26,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82248600
	if (ctx.cr6.eq) goto loc_82248600;
loc_822485EC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-28644
	ctx.r4.s64 = ctx.r11.s64 + -28644;
	// b 0x822485c4
	goto loc_822485C4;
loc_822485F8:
	// rlwimi r11,r10,30,0,1
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xC0000000) | (ctx.r11.u64 & 0xFFFFFFFF3FFFFFFF);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82248600:
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// stw r29,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// stw r24,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r24.u32);
loc_8224860C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8224D658) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// ble cr6,0x8224d668
	if (!ctx.cr6.gt) goto loc_8224D668;
	// li r7,4
	ctx.r7.s64 = 4;
loc_8224D668:
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r9,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r9,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r9,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224E2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8224E2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r3,76
	ctx.r5.s64 = ctx.r3.s64 + 76;
	// addi r4,r3,80
	ctx.r4.s64 = ctx.r3.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8224d998
	ctx.lr = 0x8224E2D4;
	sub_8224D998(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r5,56(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8224e314
	if (ctx.cr6.eq) goto loc_8224E314;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8224E2E8:
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,64(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8224e2e8
	if (ctx.cr6.lt) goto loc_8224E2E8;
loc_8224E314:
	// lis r11,-32219
	ctx.r11.s64 = -2111504384;
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r11,-10136
	ctx.r3.s64 = ctx.r11.s64 + -10136;
	// bl 0x8220f680
	ctx.lr = 0x8224E328;
	sub_8220F680(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224e370
	if (!ctx.cr6.gt) goto loc_8224E370;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8224E33C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8224db08
	ctx.lr = 0x8224E34C;
	sub_8224DB08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224e374
	if (ctx.cr0.lt) goto loc_8224E374;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8224e37c
	if (ctx.cr6.eq) goto loc_8224E37C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224e33c
	if (ctx.cr6.lt) goto loc_8224E33C;
loc_8224E370:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8224E374:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_8224E37C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8224e374
	goto loc_8224E374;
}

DEFINE_REX_FUNC(sub_8224F370) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82160230
	ctx.lr = 0x8224F398;
	sub_82160230(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224f3b0
	if (!ctx.cr0.lt) goto loc_8224F3B0;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x8224f3bc
	goto loc_8224F3BC;
loc_8224F3B0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_8224F3BC:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8224FAE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8224FAE8;
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
	// ble cr6,0x8224fb64
	if (!ctx.cr6.gt) goto loc_8224FB64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8224fb10
	if (!ctx.cr6.lt) goto loc_8224FB10;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8224FB10:
	// mulli r4,r30,276
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(276));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0b0
	ctx.lr = 0x8224FB1C;
	sub_8225C0B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8224fb34
	if (!ctx.cr0.eq) goto loc_8224FB34;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8224fb64
	goto loc_8224FB64;
loc_8224FB34:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224fb60
	if (ctx.cr6.eq) goto loc_8224FB60;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,276
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(276));
	// bl 0x8215e640
	ctx.lr = 0x8224FB54;
	sub_8215E640(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0c0
	ctx.lr = 0x8224FB60;
	sub_8225C0C0(ctx, base);
loc_8224FB60:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8224FB64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822515D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x822515E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8225167c
	if (ctx.cr6.lt) goto loc_8225167C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,388(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x8224f010
	ctx.lr = 0x82251604;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r27,r11,-15164
	ctx.r27.s64 = ctx.r11.s64 + -15164;
	// addi r4,r10,-15768
	ctx.r4.s64 = ctx.r10.s64 + -15768;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251620;
	sub_8224EFB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82251628;
	sub_8224FD68(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82251670
	if (ctx.cr6.eq) goto loc_82251670;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82251670
	if (!ctx.cr6.gt) goto loc_82251670;
loc_82251648:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822514f0
	ctx.lr = 0x8225165C;
	sub_822514F0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251648
	if (ctx.cr6.lt) goto loc_82251648;
loc_82251670:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224f070
	ctx.lr = 0x8225167C;
	sub_8224F070(ctx, base);
loc_8225167C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822523D8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// stw r4,272(r11)
	REX_STORE_U32(ctx.r11.u32 + 272, ctx.r4.u32);
	// lhz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 156);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,156(r3)
	REX_STORE_U16(ctx.r3.u32 + 156, ctx.r11.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82252788) {
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
	// lwz r11,136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// bne 0x822527c4
	if (!ctx.cr0.eq) goto loc_822527C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822524d0
	ctx.lr = 0x822527B4;
	sub_822524D0(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x822527C0;
	sub_8216B138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822527C4:
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

DEFINE_REX_FUNC(sub_82253048) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82253050;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r29,r11,4172
	ctx.r29.s64 = ctx.r11.s64 + 4172;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r9,r4,0,5,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r28,r10,4180
	ctx.r28.s64 = ctx.r10.s64 + 4180;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x8225307c
	if (!ctx.cr0.eq) goto loc_8225307C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8225307C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14568
	ctx.r4.s64 = ctx.r11.s64 + -14568;
	// bl 0x822529a8
	ctx.lr = 0x8225308C;
	sub_822529A8(ctx, base);
	// rlwinm. r11,r31,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x8225309c
	if (!ctx.cr0.eq) goto loc_8225309C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_8225309C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14576
	ctx.r4.s64 = ctx.r11.s64 + -14576;
	// bl 0x822529a8
	ctx.lr = 0x822530AC;
	sub_822529A8(ctx, base);
	// rlwinm. r11,r31,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bne 0x822530bc
	if (!ctx.cr0.eq) goto loc_822530BC;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_822530BC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-14584
	ctx.r4.s64 = ctx.r11.s64 + -14584;
	// bl 0x822529a8
	ctx.lr = 0x822530CC;
	sub_822529A8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82253900) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82253908;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r27,r3,144
	ctx.r27.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822539b0
	if (ctx.cr6.lt) goto loc_822539B0;
	// lwz r31,120(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82253968
	if (ctx.cr6.gt) goto loc_82253968;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82253958
	if (!ctx.cr6.gt) goto loc_82253958;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fa50
	ctx.lr = 0x82253958;
	sub_8224FA50(ctx, base);
loc_82253958:
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x822539b0
	if (ctx.cr6.lt) goto loc_822539B0;
loc_82253968:
	// lwz r10,120(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 120);
	// mulli r11,r30,24
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(24));
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x822539ac
	if (ctx.cr6.gt) goto loc_822539AC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822539a8
	if (!ctx.cr6.gt) goto loc_822539A8;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f6f0
	ctx.lr = 0x822539A8;
	sub_8224F6F0(ctx, base);
loc_822539A8:
	// stw r26,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
loc_822539AC:
	// lwz r3,0(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
loc_822539B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822550E8) {
	REX_FUNC_PROLOGUE();
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822550F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_82255630) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x82255668
	if (!ctx.cr6.eq) goto loc_82255668;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82255668:
	// stw r11,44(r4)
	REX_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	REX_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	REX_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	REX_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82256F88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82256F90;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x82266b08
	ctx.lr = 0x82256FBC;
	sub_82266B08(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82257008
	if (!ctx.cr6.lt) goto loc_82257008;
loc_82256FDC:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82260e40
	ctx.lr = 0x82256FEC;
	sub_82260E40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82256ffc
	if (!ctx.cr0.gt) goto loc_82256FFC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82257058
	if (!ctx.cr6.gt) goto loc_82257058;
loc_82256FFC:
	// addi r26,r26,6
	ctx.r26.s64 = ctx.r26.s64 + 6;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82256fdc
	if (ctx.cr6.lt) goto loc_82256FDC;
loc_82257008:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r27,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r27.u32 / ctx.r11.u32 : 0);
loc_82257010:
	// mulli r11,r3,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// rlwinm. r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82257040
	if (ctx.cr0.eq) goto loc_82257040;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_82257024:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82257024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82257024;
loc_82257040:
	// bl 0x82177448
	ctx.lr = 0x82257044;
	sub_82177448(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8225706c
	if (!ctx.cr0.eq) goto loc_8225706C;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82257188
	goto loc_82257188;
loc_82257058:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82260e40
	ctx.lr = 0x82257068;
	sub_82260E40(ctx, base);
	// b 0x82257010
	goto loc_82257010;
loc_8225706C:
	// stw r31,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82257080
	if (ctx.cr6.eq) goto loc_82257080;
	// li r4,54
	ctx.r4.s64 = 54;
loc_82257080:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821786f0
	ctx.lr = 0x82257088;
	sub_821786F0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82256760
	ctx.lr = 0x82257098;
	sub_82256760(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82256bb8
	ctx.lr = 0x822570C0;
	sub_82256BB8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82257188
	if (ctx.cr0.lt) goto loc_82257188;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82256cc8
	ctx.lr = 0x822570E0;
	sub_82256CC8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82257188
	if (ctx.cr0.lt) goto loc_82257188;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82257130
	if (ctx.cr6.eq) goto loc_82257130;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257104;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82257130
	if (ctx.cr0.eq) goto loc_82257130;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82257120;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821786f8
	ctx.lr = 0x82257130;
	sub_821786F8(ctx, base);
loc_82257130:
	// addic r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subfe r7,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82256278
	ctx.lr = 0x8225714C;
	sub_82256278(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82256a58
	ctx.lr = 0x82257170;
	sub_82256A58(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82257188
	if (ctx.cr6.eq) goto loc_82257188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x82178760
	ctx.lr = 0x82257188;
	sub_82178760(ctx, base);
loc_82257188:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225CC40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8225CC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r9,r3,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x8225c220
	ctx.lr = 0x8225CC88;
	sub_8225C220(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225ccf4
	if (ctx.cr6.eq) goto loc_8225CCF4;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x8225ccc4
	if (ctx.cr0.eq) goto loc_8225CCC4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8225CCC4:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225ccd0
	if (ctx.cr0.eq) goto loc_8225CCD0;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_8225CCD0:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225ccdc
	if (ctx.cr0.eq) goto loc_8225CCDC;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_8225CCDC:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cce8
	if (ctx.cr0.eq) goto loc_8225CCE8;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_8225CCE8:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8225cd08
	goto loc_8225CD08;
loc_8225CCF4:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8225CD08:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addis r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -218103808;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// subfe r6,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// addi r11,r11,-3860
	ctx.r11.s64 = ctx.r11.s64 + -3860;
	// bne cr6,0x8225cd50
	if (!ctx.cr6.eq) goto loc_8225CD50;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8225cd50
	if (!ctx.cr6.eq) goto loc_8225CD50;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x8225cda4
	goto loc_8225CDA4;
loc_8225CD50:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r3,68
	ctx.r3.s64 = 4456448;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r3,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r6,r5,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_8225CDA4:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8225ce04
	if (ctx.cr6.eq) goto loc_8225CE04;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// b 0x8225ce10
	goto loc_8225CE10;
loc_8225CE04:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8225CE10:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822644E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822644F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822645c4
	if (ctx.cr6.eq) goto loc_822645C4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-14148
	ctx.r31.s64 = ctx.r11.s64 + -14148;
	// addi r30,r10,1512
	ctx.r30.s64 = ctx.r10.s64 + 1512;
	// bne cr6,0x82264538
	if (!ctx.cr6.eq) goto loc_82264538;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1712
	ctx.r5.s64 = ctx.r11.s64 + 1712;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264538;
	sub_82260F30(ctx, base);
loc_82264538:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82264560
	if (!ctx.cr6.eq) goto loc_82264560;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1692
	ctx.r5.s64 = ctx.r11.s64 + 1692;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264560;
	sub_82260F30(ctx, base);
loc_82264560:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82264588
	if (ctx.cr6.eq) goto loc_82264588;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1632
	ctx.r5.s64 = ctx.r11.s64 + 1632;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264588;
	sub_82260F30(ctx, base);
loc_82264588:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822645b0
	if (ctx.cr6.eq) goto loc_822645B0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1604
	ctx.r5.s64 = ctx.r11.s64 + 1604;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822645B0;
	sub_82260F30(ctx, base);
loc_822645B0:
	// stw r29,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_822645C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82265748) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82314800
	ctx.lr = 0x82265774;
	sub_82314800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822657a0
	if (!ctx.cr0.eq) goto loc_822657A0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,1512
	ctx.r6.s64 = ctx.r11.s64 + 1512;
	// addi r5,r10,1948
	ctx.r5.s64 = ctx.r10.s64 + 1948;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822657A0;
	sub_82260F30(ctx, base);
loc_822657A0:
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

DEFINE_REX_FUNC(sub_822660E0) {
	REX_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8226610c
	if (!ctx.cr6.eq) goto loc_8226610C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,1512
	ctx.r6.s64 = ctx.r11.s64 + 1512;
	// addi r5,r10,1756
	ctx.r5.s64 = ctx.r10.s64 + 1756;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// b 0x82260f30
	sub_82260F30(ctx, base);
	return;
loc_8226610C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82314a28
	sub_82314A28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266360) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82266368;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r27,r10,2336
	ctx.r27.s64 = ctx.r10.s64 + 2336;
	// bne cr6,0x822663c0
	if (!ctx.cr6.eq) goto loc_822663C0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,1808
	ctx.r5.s64 = ctx.r11.s64 + 1808;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822663C0;
	sub_82260F30(ctx, base);
loc_822663C0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x822663e4
	if (!ctx.cr6.eq) goto loc_822663E4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,1796
	ctx.r5.s64 = ctx.r11.s64 + 1796;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822663E4;
	sub_82260F30(ctx, base);
loc_822663E4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82266408
	if (!ctx.cr6.eq) goto loc_82266408;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2324
	ctx.r5.s64 = ctx.r11.s64 + 2324;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82266408;
	sub_82260F30(ctx, base);
loc_82266408:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x8226642c
	if (!ctx.cr6.eq) goto loc_8226642C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2308
	ctx.r5.s64 = ctx.r11.s64 + 2308;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8226642C;
	sub_82260F30(ctx, base);
loc_8226642C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82266450
	if (!ctx.cr6.eq) goto loc_82266450;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2292
	ctx.r5.s64 = ctx.r11.s64 + 2292;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82266450;
	sub_82260F30(ctx, base);
loc_82266450:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82266474
	if (!ctx.cr6.eq) goto loc_82266474;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2276
	ctx.r5.s64 = ctx.r11.s64 + 2276;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82266474;
	sub_82260F30(ctx, base);
loc_82266474:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82266484;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822664b0
	if (!ctx.cr0.eq) goto loc_822664B0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,2232
	ctx.r5.s64 = ctx.r11.s64 + 2232;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822664A8;
	sub_82260F30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82266530
	goto loc_82266530;
loc_822664B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r23,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82314fc8
	ctx.lr = 0x822664F8;
	sub_82314FC8(ctx, base);
	// stw r3,2428(r31)
	REX_STORE_U32(ctx.r31.u32 + 2428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82314fc8
	ctx.lr = 0x82266504;
	sub_82314FC8(ctx, base);
	// stw r3,2436(r31)
	REX_STORE_U32(ctx.r31.u32 + 2436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82314fc8
	ctx.lr = 0x82266510;
	sub_82314FC8(ctx, base);
	// stw r3,2440(r31)
	REX_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82314b38
	ctx.lr = 0x8226651C;
	sub_82314B38(ctx, base);
	// stw r3,2432(r31)
	REX_STORE_U32(ctx.r31.u32 + 2432, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82314d88
	ctx.lr = 0x82266528;
	sub_82314D88(ctx, base);
	// stw r3,2444(r31)
	REX_STORE_U32(ctx.r31.u32 + 2444, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82266530:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82267ECC) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226D270) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8226D278;
	__savegprlr_27(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82173a48
	ctx.lr = 0x8226D290;
	sub_82173A48(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi. r4,r11,31
	ctx.r4.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// beq 0x8226d2d0
	if (ctx.cr0.eq) goto loc_8226D2D0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,28(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8226d2d8
	goto loc_8226D2D8;
loc_8226D2D0:
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8226D2D8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bne cr6,0x8226d338
	if (!ctx.cr6.eq) goto loc_8226D338;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r5,12,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xF;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// rlwinm. r11,r11,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8226d334
	if (ctx.cr0.eq) goto loc_8226D334;
loc_8226D310:
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r30,r30,24,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8226d324
	if (ctx.cr6.gt) goto loc_8226D324;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8226D324:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8226d310
	if (ctx.cr6.lt) goto loc_8226D310;
loc_8226D334:
	// rlwimi r5,r9,20,8,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF00000) | (ctx.r5.u64 & 0xFFFFFFFFFF0FFFFF);
loc_8226D338:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c1d0
	ctx.lr = 0x8226D358;
	sub_8226C1D0(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r5,r11,-14240
	ctx.r5.s64 = ctx.r11.s64 + -14240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82175100
	ctx.lr = 0x8226D36C;
	sub_82175100(ctx, base);
	// lis r11,-32217
	ctx.r11.s64 = -2111373312;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r6,r11,-14048
	ctx.r6.s64 = ctx.r11.s64 + -14048;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d0a8
	ctx.lr = 0x8226D384;
	sub_8226D0A8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226d040
	ctx.lr = 0x8226D38C;
	sub_8226D040(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c2d8
	ctx.lr = 0x8226D398;
	sub_8226C2D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D764) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82273948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82273950;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82273980
	if (ctx.cr6.lt) goto loc_82273980;
loc_82273974:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82273b18
	goto loc_82273B18;
loc_82273980:
	// lwz r28,228(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq 0x822739a8
	if (ctx.cr0.eq) goto loc_822739A8;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// li r12,-4417
	ctx.r12.s64 = -4417;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_822739A8:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// clrlwi. r25,r7,24
	ctx.r25.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x822739c4
	if (ctx.cr0.eq) goto loc_822739C4;
	// rlwinm r11,r11,0,24,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// b 0x822739ec
	goto loc_822739EC;
loc_822739C4:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822739d4
	if (!ctx.cr0.eq) goto loc_822739D4;
	// rlwinm r11,r11,0,20,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_822739D4:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// li r10,512
	ctx.r10.s64 = 512;
	// li r6,2
	ctx.r6.s64 = 2;
	// rlwimi r10,r27,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_822739EC:
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r7,r31,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
loc_822739F8:
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r8,r8,2,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82273a18
	if (ctx.cr0.eq) goto loc_82273A18;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82273974
	if (!ctx.cr6.eq) goto loc_82273974;
loc_82273A18:
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r6,30,0,1
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xC0000000) | (ctx.r8.u64 & 0xFFFFFFFF3FFFFFFF);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// blt cr6,0x822739f8
	if (ctx.cr6.lt) goto loc_822739F8;
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x82273a44
	if (ctx.cr0.eq) goto loc_82273A44;
	// bne cr6,0x82273a48
	if (!ctx.cr6.eq) goto loc_82273A48;
	// b 0x82273974
	goto loc_82273974;
loc_82273A44:
	// beq cr6,0x82273aa8
	if (ctx.cr6.eq) goto loc_82273AA8;
loc_82273A48:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82273a60
	if (ctx.cr6.eq) goto loc_82273A60;
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82273974
	if (!ctx.cr0.eq) goto loc_82273974;
loc_82273A60:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82273aa8
	if (ctx.cr6.eq) goto loc_82273AA8;
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82273a8c
	if (ctx.cr0.eq) goto loc_82273A8C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822731d0
	ctx.lr = 0x82273A88;
	sub_822731D0(ctx, base);
	// b 0x82273af8
	goto loc_82273AF8;
loc_82273A8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82273aa8
	if (ctx.cr6.eq) goto loc_82273AA8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82273438
	ctx.lr = 0x82273AA4;
	sub_82273438(ctx, base);
	// b 0x82273af8
	goto loc_82273AF8;
loc_82273AA8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822737d0
	ctx.lr = 0x82273ABC;
	sub_822737D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82273af8
	if (ctx.cr0.lt) goto loc_82273AF8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82273540
	ctx.lr = 0x82273AD8;
	sub_82273540(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82273af8
	if (ctx.cr0.lt) goto loc_82273AF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82273660
	ctx.lr = 0x82273AF0;
	sub_82273660(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_82273AF8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82273b18
	if (ctx.cr6.lt) goto loc_82273B18;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82273b14
	if (ctx.cr6.eq) goto loc_82273B14;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
loc_82273B14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82273B18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82278CF8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82278D00;
	__savegprlr_14(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addic r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// stb r5,407(r1)
	REX_STORE_U8(ctx.r1.u32 + 407, ctx.r5.u8);
	// li r20,0
	ctx.r20.s64 = 0;
	// addi r14,r4,24
	ctx.r14.s64 = ctx.r4.s64 + 24;
	// subfe r11,r11,r6
	temp.u8 = (~ctx.r11.u32 + ctx.r6.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r16,r20
	ctx.r16.u64 = ctx.r20.u64;
	// mr r15,r20
	ctx.r15.u64 = ctx.r20.u64;
	// addi r18,r14,4
	ctx.r18.s64 = ctx.r14.s64 + 4;
loc_82278D34:
	// lwz r4,732(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82278d54
	if (ctx.cr6.eq) goto loc_82278D54;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r5,r16,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(12));
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822761a0
	ctx.lr = 0x82278D50;
	sub_822761A0(ctx, base);
	// stw r20,732(r21)
	REX_STORE_U32(ctx.r21.u32 + 732, ctx.r20.u32);
loc_82278D54:
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lbz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8227b018
	ctx.lr = 0x82278D64;
	sub_8227B018(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
loc_82278D68:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r10,r11
	ctx.r19.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822797fc
	if (ctx.cr6.eq) goto loc_822797FC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82278898
	ctx.lr = 0x82278D8C;
	sub_82278898(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822795f8
	if (ctx.cr0.eq) goto loc_822795F8;
	// lwz r11,732(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822790cc
	if (!ctx.cr6.eq) goto loc_822790CC;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r16,r11,1
	ctx.r16.s64 = ctx.r11.s64 + 1;
	// mulli r4,r16,12
	ctx.r4.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(12));
	// bl 0x8226e388
	ctx.lr = 0x82278DD0;
	sub_8226E388(ctx, base);
	// stw r3,732(r21)
	REX_STORE_U32(ctx.r21.u32 + 732, ctx.r3.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822790cc
	if (!ctx.cr0.eq) goto loc_822790CC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822790cc
	if (ctx.cr0.eq) goto loc_822790CC;
loc_82278DEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82278898
	ctx.lr = 0x82278DF8;
	sub_82278898(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822790b0
	if (ctx.cr0.eq) goto loc_822790B0;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r25,8191
	ctx.r25.s64 = 8191;
loc_82278E08:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82278e3c
	if (ctx.cr6.eq) goto loc_82278E3C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lbz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 16);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82278e34
	if (ctx.cr0.eq) goto loc_82278E34;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82278e34
	if (!ctx.cr6.lt) goto loc_82278E34;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
loc_82278E34:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82278e08
	goto loc_82278E08;
loc_82278E3C:
	// lwz r11,48(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 48);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278e64
	if (ctx.cr0.eq) goto loc_82278E64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x82278E50;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278e64
	if (ctx.cr0.eq) goto loc_82278E64;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r25,r11,1
	ctx.r25.s64 = ctx.r11.s64 + 1;
loc_82278E64:
	// lwz r30,4(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
loc_82278E70:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82278ed0
	if (ctx.cr6.eq) goto loc_82278ED0;
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82278ec8
	if (ctx.cr6.eq) goto loc_82278EC8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226db28
	ctx.lr = 0x82278E8C;
	sub_8226DB28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278e98
	if (ctx.cr0.eq) goto loc_82278E98;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82278E98:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x82278eb0
	if (!ctx.cr6.eq) goto loc_82278EB0;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82278eb8
	goto loc_82278EB8;
loc_82278EB0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
loc_82278EB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x82278ec8
	if (!ctx.cr6.gt) goto loc_82278EC8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82278EC8:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82278e70
	goto loc_82278E70;
loc_82278ED0:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// clrlwi r27,r11,19
	ctx.r27.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82278ee4
	if (!ctx.cr6.eq) goto loc_82278EE4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82278EE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82278fac
	if (ctx.cr6.eq) goto loc_82278FAC;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8227908c
	if (ctx.cr6.eq) goto loc_8227908C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82278EF8:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278f14
	if (ctx.cr0.eq) goto loc_82278F14;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82278f38
	if (!ctx.cr6.eq) goto loc_82278F38;
loc_82278F14:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82278f34
	if (!ctx.cr0.eq) goto loc_82278F34;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82278ef8
	if (!ctx.cr0.eq) goto loc_82278EF8;
	// b 0x82278f38
	goto loc_82278F38;
loc_82278F34:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82278F38:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r29,r10,31,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// beq cr6,0x82278fac
	if (ctx.cr6.eq) goto loc_82278FAC;
loc_82278F50:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r30,r11,19
	ctx.r30.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82278fac
	if (!ctx.cr6.lt) goto loc_82278FAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278348
	ctx.lr = 0x82278F6C;
	sub_82278348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82278fa8
	if (!ctx.cr0.eq) goto loc_82278FA8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82278410
	ctx.lr = 0x82278F80;
	sub_82278410(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82278fa8
	if (!ctx.cr0.eq) goto loc_82278FA8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82278fac
	if (!ctx.cr0.eq) goto loc_82278FAC;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82278f50
	if (!ctx.cr0.eq) goto loc_82278F50;
	// b 0x82278fac
	goto loc_82278FAC;
loc_82278FA8:
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
loc_82278FAC:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8227908c
	if (ctx.cr6.eq) goto loc_8227908C;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82278FB8:
	// lbz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 16);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278fd4
	if (ctx.cr0.eq) goto loc_82278FD4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82278ff0
	if (!ctx.cr6.eq) goto loc_82278FF0;
loc_82278FD4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227908c
	if (!ctx.cr0.eq) goto loc_8227908C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82278fb8
	if (!ctx.cr6.eq) goto loc_82278FB8;
	// b 0x8227908c
	goto loc_8227908C;
loc_82278FF0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// ble cr6,0x8227908c
	if (!ctx.cr6.gt) goto loc_8227908C;
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82279008:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227906c
	if (ctx.cr6.eq) goto loc_8227906C;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227902c
	if (ctx.cr6.eq) goto loc_8227902C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226db28
	ctx.lr = 0x82279024;
	sub_8226DB28(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279034
	if (!ctx.cr0.eq) goto loc_82279034;
loc_8227902C:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82279008
	goto loc_82279008;
loc_82279034:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r10,r11,20,19,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x1FE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwinm r30,r10,31,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82278348
	ctx.lr = 0x82279050;
	sub_82278348(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279088
	if (!ctx.cr0.eq) goto loc_82279088;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82278410
	ctx.lr = 0x82279064;
	sub_82278410(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279088
	if (!ctx.cr0.eq) goto loc_82279088;
loc_8227906C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227908c
	if (!ctx.cr0.eq) goto loc_8227908C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82278ff0
	if (!ctx.cr6.eq) goto loc_82278FF0;
	// b 0x8227908c
	goto loc_8227908C;
loc_82279088:
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
loc_8227908C:
	// lwz r11,732(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 732);
	// mulli r10,r27,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r27.u64 * static_cast<uint64_t>(12));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822797e4
	if (!ctx.cr6.eq) goto loc_822797E4;
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// stw r26,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r26.u32);
loc_822790B0:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822790cc
	if (!ctx.cr0.eq) goto loc_822790CC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82278dec
	if (!ctx.cr6.eq) goto loc_82278DEC;
loc_822790CC:
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// lwz r24,732(r21)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r21.u32 + 732);
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r23,r11,r24
	ctx.r23.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82279460
	goto loc_82279460;
loc_822790E4:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227945c
	if (ctx.cr6.eq) goto loc_8227945C;
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8227945c
	if (ctx.cr6.gt) goto loc_8227945C;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// lwz r9,0(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r8,r11,25,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8227911c
	if (ctx.cr6.lt) goto loc_8227911C;
	// cmplwi cr6,r8,31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 31, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82279120
	if (!ctx.cr6.gt) goto loc_82279120;
loc_8227911C:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82279120:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8227913c
	if (ctx.cr6.lt) goto loc_8227913C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82279140
	if (!ctx.cr6.gt) goto loc_82279140;
loc_8227913C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82279140:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8227945c
	if (ctx.cr6.eq) goto loc_8227945C;
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
loc_82279154:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82279178
	if (ctx.cr6.eq) goto loc_82279178;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82279170
	if (ctx.cr6.eq) goto loc_82279170;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82279154
	goto loc_82279154;
loc_82279170:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8227917c
	goto loc_8227917C;
loc_82279178:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_8227917C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227945c
	if (!ctx.cr0.eq) goto loc_8227945C;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
loc_82279188:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822791ac
	if (ctx.cr6.eq) goto loc_822791AC;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822791a4
	if (ctx.cr6.eq) goto loc_822791A4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82279188
	goto loc_82279188;
loc_822791A4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822791b0
	goto loc_822791B0;
loc_822791AC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822791B0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227945c
	if (!ctx.cr0.eq) goto loc_8227945C;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x822791cc
	if (ctx.cr6.lt) goto loc_822791CC;
	// cmplwi cr6,r8,31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822791d0
	if (!ctx.cr6.gt) goto loc_822791D0;
loc_822791CC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822791D0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822791e4
	if (ctx.cr0.eq) goto loc_822791E4;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// b 0x822791ec
	goto loc_822791EC;
loc_822791E4:
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
loc_822791EC:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82298e98
	ctx.lr = 0x822791FC;
	sub_82298E98(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227945c
	if (ctx.cr0.eq) goto loc_8227945C;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,4(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227921c
	if (ctx.cr6.lt) goto loc_8227921C;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
loc_8227921C:
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82279234
	if (ctx.cr6.gt) goto loc_82279234;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_82279234:
	// cmplw cr6,r25,r27
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x822797f0
	if (ctx.cr6.lt) goto loc_822797F0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82279278
	if (ctx.cr6.eq) goto loc_82279278;
	// std r20,8(r22)
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r20.u64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// std r20,16(r22)
	REX_STORE_U64(ctx.r22.u32 + 16, ctx.r20.u64);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// std r20,24(r22)
	REX_STORE_U64(ctx.r22.u32 + 24, ctx.r20.u64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r20,32(r22)
	REX_STORE_U64(ctx.r22.u32 + 32, ctx.r20.u64);
	// std r20,40(r22)
	REX_STORE_U64(ctx.r22.u32 + 40, ctx.r20.u64);
	// std r20,48(r22)
	REX_STORE_U64(ctx.r22.u32 + 48, ctx.r20.u64);
	// std r20,56(r22)
	REX_STORE_U64(ctx.r22.u32 + 56, ctx.r20.u64);
	// std r20,64(r22)
	REX_STORE_U64(ctx.r22.u32 + 64, ctx.r20.u64);
	// stw r20,72(r22)
	REX_STORE_U32(ctx.r22.u32 + 72, ctx.r20.u32);
	// bl 0x82278bd0
	ctx.lr = 0x82279278;
	sub_82278BD0(ctx, base);
loc_82279278:
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8215ec60
	ctx.lr = 0x82279290;
	sub_8215EC60(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// stw r21,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r21.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// stw r20,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// bne 0x82279454
	if (!ctx.cr0.eq) goto loc_82279454;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// b 0x82279448
	goto loc_82279448;
loc_822792B0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82279438
	if (ctx.cr6.eq) goto loc_82279438;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82279438
	if (ctx.cr6.eq) goto loc_82279438;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r29,r11,19
	ctx.r29.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82279410
	if (ctx.cr6.lt) goto loc_82279410;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822784a8
	ctx.lr = 0x822792DC;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279410
	if (ctx.cr0.eq) goto loc_82279410;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278ae0
	ctx.lr = 0x822792F0;
	sub_82278AE0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822784a8
	ctx.lr = 0x822792FC;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279358
	if (ctx.cr0.eq) goto loc_82279358;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278ae0
	ctx.lr = 0x82279310;
	sub_82278AE0(ctx, base);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82279314:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822784a8
	ctx.lr = 0x82279320;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279350
	if (ctx.cr0.eq) goto loc_82279350;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278ae0
	ctx.lr = 0x82279334;
	sub_82278AE0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279604
	if (!ctx.cr0.eq) goto loc_82279604;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82279314
	if (!ctx.cr0.eq) goto loc_82279314;
loc_82279350:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82279604
	if (ctx.cr6.eq) goto loc_82279604;
loc_82279358:
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82279374;
	sub_8215EC60(ctx, base);
	// stw r31,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r20,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// stw r20,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// beq cr6,0x822793bc
	if (ctx.cr6.eq) goto loc_822793BC;
	// std r20,8(r22)
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r20.u64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// std r20,16(r22)
	REX_STORE_U64(ctx.r22.u32 + 16, ctx.r20.u64);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// std r20,24(r22)
	REX_STORE_U64(ctx.r22.u32 + 24, ctx.r20.u64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r20,32(r22)
	REX_STORE_U64(ctx.r22.u32 + 32, ctx.r20.u64);
	// std r20,40(r22)
	REX_STORE_U64(ctx.r22.u32 + 40, ctx.r20.u64);
	// std r20,48(r22)
	REX_STORE_U64(ctx.r22.u32 + 48, ctx.r20.u64);
	// std r20,56(r22)
	REX_STORE_U64(ctx.r22.u32 + 56, ctx.r20.u64);
	// std r20,64(r22)
	REX_STORE_U64(ctx.r22.u32 + 64, ctx.r20.u64);
	// stw r20,72(r22)
	REX_STORE_U32(ctx.r22.u32 + 72, ctx.r20.u32);
	// bl 0x82278bd0
	ctx.lr = 0x822793BC;
	sub_82278BD0(ctx, base);
loc_822793BC:
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279410
	if (!ctx.cr0.eq) goto loc_82279410;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// b 0x82279404
	goto loc_82279404;
loc_822793D0:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82279410
	if (ctx.cr6.eq) goto loc_82279410;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x822793f4
	if (ctx.cr6.eq) goto loc_822793F4;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x822793f4
	if (ctx.cr6.eq) goto loc_822793F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278ae0
	ctx.lr = 0x822793F4;
	sub_82278AE0(ctx, base);
loc_822793F4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279410
	if (!ctx.cr0.eq) goto loc_82279410;
loc_82279404:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822793d0
	if (!ctx.cr0.eq) goto loc_822793D0;
loc_82279410:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8227945c
	if (!ctx.cr6.lt) goto loc_8227945C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822784a8
	ctx.lr = 0x82279424;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227945c
	if (ctx.cr0.eq) goto loc_8227945C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82278ae0
	ctx.lr = 0x82279438;
	sub_82278AE0(ctx, base);
loc_82279438:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279454
	if (!ctx.cr0.eq) goto loc_82279454;
loc_82279448:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822792b0
	if (!ctx.cr0.eq) goto loc_822792B0;
loc_82279454:
	// cmplwi cr6,r25,8191
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 8191, ctx.xer);
	// beq cr6,0x82279660
	if (ctx.cr6.eq) goto loc_82279660;
loc_8227945C:
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
loc_82279460:
	// cmplw cr6,r24,r23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x822790e4
	if (ctx.cr6.lt) goto loc_822790E4;
	// lbz r11,407(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 407);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822795f8
	if (ctx.cr0.eq) goto loc_822795F8;
	// lwz r11,76(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + 76);
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822795f8
	if (!ctx.cr0.eq) goto loc_822795F8;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8227949c
	if (ctx.cr6.lt) goto loc_8227949C;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822794a0
	if (!ctx.cr6.gt) goto loc_822794A0;
loc_8227949C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822794A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822795f8
	if (ctx.cr0.eq) goto loc_822795F8;
	// rlwinm r11,r10,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x822795f8
	if (!ctx.cr6.eq) goto loc_822795F8;
	// rlwinm. r11,r10,7,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822795f8
	if (!ctx.cr0.eq) goto loc_822795F8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82299f90
	ctx.lr = 0x822794C4;
	sub_82299F90(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x822795f8
	if (!ctx.cr6.eq) goto loc_822795F8;
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
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229ce50
	ctx.lr = 0x822794F4;
	sub_8229CE50(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822795f8
	if (!ctx.cr0.eq) goto loc_822795F8;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r30,r11,-40
	ctx.r30.s64 = ctx.r11.s64 + -40;
	// beq cr6,0x82279548
	if (ctx.cr6.eq) goto loc_82279548;
	// std r20,8(r22)
	REX_STORE_U64(ctx.r22.u32 + 8, ctx.r20.u64);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// std r20,16(r22)
	REX_STORE_U64(ctx.r22.u32 + 16, ctx.r20.u64);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// std r20,24(r22)
	REX_STORE_U64(ctx.r22.u32 + 24, ctx.r20.u64);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// std r20,32(r22)
	REX_STORE_U64(ctx.r22.u32 + 32, ctx.r20.u64);
	// std r20,40(r22)
	REX_STORE_U64(ctx.r22.u32 + 40, ctx.r20.u64);
	// std r20,48(r22)
	REX_STORE_U64(ctx.r22.u32 + 48, ctx.r20.u64);
	// std r20,56(r22)
	REX_STORE_U64(ctx.r22.u32 + 56, ctx.r20.u64);
	// std r20,64(r22)
	REX_STORE_U64(ctx.r22.u32 + 64, ctx.r20.u64);
	// stw r20,72(r22)
	REX_STORE_U32(ctx.r22.u32 + 72, ctx.r20.u32);
	// bl 0x82278bd0
	ctx.lr = 0x82279548;
	sub_82278BD0(ctx, base);
loc_82279548:
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r22,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r21,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x8215ec60
	ctx.lr = 0x82279560;
	sub_8215EC60(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// stw r21,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r21.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r20,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r20.u32);
	// stw r20,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r20.u32);
	// bne 0x82279748
	if (!ctx.cr0.eq) goto loc_82279748;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82279748
	if (ctx.cr0.eq) goto loc_82279748;
loc_82279588:
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bne cr6,0x822795ac
	if (!ctx.cr6.eq) goto loc_822795AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822784a8
	ctx.lr = 0x8227959C;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822795e4
	if (ctx.cr0.eq) goto loc_822795E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x822795c0
	goto loc_822795C0;
loc_822795AC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822784a8
	ctx.lr = 0x822795B4;
	sub_822784A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822795e4
	if (ctx.cr0.eq) goto loc_822795E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_822795C0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82278ae0
	ctx.lr = 0x822795C8;
	sub_82278AE0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279748
	if (!ctx.cr0.eq) goto loc_82279748;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82279588
	if (!ctx.cr0.eq) goto loc_82279588;
loc_822795E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82279748
	if (ctx.cr6.eq) goto loc_82279748;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8229aac0
	ctx.lr = 0x822795F8;
	sub_8229AAC0(ctx, base);
loc_822795F8:
	// rlwinm r11,r19,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x82278d68
	goto loc_82278D68;
loc_82279604:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r30,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r5.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r5,r5,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x822796b0
	goto loc_822796B0;
loc_82279660:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r18,1
	ctx.r9.u64 = ctx.r18.u64 | 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r6,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r6.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r7,0(r18)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r7)
	REX_STORE_U32(ctx.r7.u32 + 36, ctx.r10.u32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r8.u32);
loc_822796B0:
	// rlwinm r10,r26,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r5.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r5,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
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
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// bne cr6,0x82279734
	if (!ctx.cr6.eq) goto loc_82279734;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8229c080
	ctx.lr = 0x8227971C;
	sub_8229C080(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8229c080
	ctx.lr = 0x82279730;
	sub_8229C080(ctx, base);
	// b 0x82279740
	goto loc_82279740;
loc_82279734:
	// lwz r10,20(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// rlwimi r11,r10,0,0,18
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFE000) | (ctx.r11.u64 & 0xFFFFFFFF00001FFF);
	// stw r11,20(r26)
	REX_STORE_U32(ctx.r26.u32 + 20, ctx.r11.u32);
loc_82279740:
	// li r15,1
	ctx.r15.s64 = 1;
	// b 0x82278d34
	goto loc_82278D34;
loc_82279748:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r19,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r31,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r31.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// bl 0x8229a5f8
	ctx.lr = 0x822797B0;
	sub_8229A5F8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x822797cc
	if (!ctx.cr6.eq) goto loc_822797CC;
	// lwz r11,20(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// clrlwi r5,r11,19
	ctx.r5.u64 = ctx.r11.u32 & 0x1FFF;
	// bl 0x8229c080
	ctx.lr = 0x822797CC;
	sub_8229C080(ctx, base);
loc_822797CC:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82334408
	ctx.lr = 0x822797E0;
	sub_82334408(ctx, base);
	// b 0x82278d34
	goto loc_82278D34;
loc_822797E4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822797F0;
	sub_8225B1A0(ctx, base);
loc_822797F0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822797FC;
	sub_8225B1A0(ctx, base);
loc_822797FC:
	// lwz r4,732(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 732);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8227981c
	if (ctx.cr6.eq) goto loc_8227981C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulli r5,r16,12
	ctx.r5.s64 = static_cast<int64_t>(ctx.r16.u64 * static_cast<uint64_t>(12));
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822761a0
	ctx.lr = 0x82279818;
	sub_822761A0(ctx, base);
	// stw r20,732(r21)
	REX_STORE_U32(ctx.r21.u32 + 732, ctx.r20.u32);
loc_8227981C:
	// clrlwi. r11,r15,24
	ctx.r11.u64 = ctx.r15.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279874
	if (ctx.cr0.eq) goto loc_82279874;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82279874
	if (!ctx.cr6.eq) goto loc_82279874;
	// lwz r31,0(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279874
	if (!ctx.cr0.eq) goto loc_82279874;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82279874
	if (ctx.cr0.eq) goto loc_82279874;
loc_82279840:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8227985c
	if (!ctx.cr6.eq) goto loc_8227985C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82299db8
	ctx.lr = 0x8227985C;
	sub_82299DB8(ctx, base);
loc_8227985C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279874
	if (!ctx.cr0.eq) goto loc_82279874;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82279840
	if (!ctx.cr6.eq) goto loc_82279840;
loc_82279874:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A8158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822A8160;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// addi r10,r5,44
	ctx.r10.s64 = ctx.r5.s64 + 44;
	// stw r6,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r5,r5,r15
	ctx.r5.u64 = ctx.r15.u64 - ctx.r5.u64;
	// lwz r8,8(r15)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// rlwinm r16,r11,18,29,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r5,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r17,r8,18,29,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 18) & 0x7;
	// rlwinm r6,r8,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x7;
loc_822A81A4:
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x822a81f0
	if (!ctx.cr6.lt) goto loc_822A81F0;
	// lwzx r8,r5,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822a81e4
	if (ctx.cr6.eq) goto loc_822A81E4;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16000, ctx.xer);
	// bne cr6,0x822a8610
	if (!ctx.cr6.eq) goto loc_822A8610;
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,16000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16000, ctx.xer);
	// bne cr6,0x822a8610
	if (!ctx.cr6.eq) goto loc_822A8610;
loc_822A81E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x822a81a4
	goto loc_822A81A4;
loc_822A81F0:
	// lwz r22,44(r15)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r15.u32 + 44);
	// lwz r21,0(r10)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x822a8610
	if (!ctx.cr6.eq) goto loc_822A8610;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x822a8610
	if (!ctx.cr6.eq) goto loc_822A8610;
	// lwz r9,4(r15)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// li r14,1
	ctx.r14.s64 = 1;
loc_822A8228:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822a82b0
	if (ctx.cr6.eq) goto loc_822A82B0;
	// lwz r10,16(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a82a8
	if (ctx.cr6.eq) goto loc_822A82A8;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r11,r8,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a82a8
	if (ctx.cr0.eq) goto loc_822A82A8;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x822a82a8
	if (!ctx.cr6.eq) goto loc_822A82A8;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8274
	if (ctx.cr6.eq) goto loc_822A8274;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x822a8278
	if (!ctx.cr6.eq) goto loc_822A8278;
loc_822A8274:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822A8278:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a829c
	if (!ctx.cr0.eq) goto loc_822A829C;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,28(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a82a8
	if (ctx.cr0.eq) goto loc_822A82A8;
loc_822A829C:
	// rlwinm r11,r8,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// or r19,r11,r19
	ctx.r19.u64 = ctx.r11.u64 | ctx.r19.u64;
loc_822A82A8:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x822a8228
	goto loc_822A8228;
loc_822A82B0:
	// lwz r8,4(r23)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
loc_822A82B4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822a833c
	if (ctx.cr6.eq) goto loc_822A833C;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822a8334
	if (ctx.cr6.eq) goto loc_822A8334;
	// lwz r9,0(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm. r11,r9,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8334
	if (ctx.cr0.eq) goto loc_822A8334;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x822a8334
	if (!ctx.cr6.eq) goto loc_822A8334;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822a8300
	if (ctx.cr6.eq) goto loc_822A8300;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// bne cr6,0x822a8304
	if (!ctx.cr6.eq) goto loc_822A8304;
loc_822A8300:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822A8304:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a8328
	if (!ctx.cr0.eq) goto loc_822A8328;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r10,28(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// lwz r10,76(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 76);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,13
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8334
	if (ctx.cr0.eq) goto loc_822A8334;
loc_822A8328:
	// rlwinm r11,r9,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// slw r11,r14,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r11.u8 & 0x3F));
	// or r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 | ctx.r20.u64;
loc_822A8334:
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x822a82b4
	goto loc_822A82B4;
loc_822A833C:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// std r26,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// beq cr6,0x822a846c
	if (ctx.cr6.eq) goto loc_822A846C;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_822A8358:
	// slw r11,r14,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r25.u8 & 0x3F));
	// and. r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 & ctx.r19.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a8458
	if (!ctx.cr0.eq) goto loc_822A8458;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r15,r23
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r23.u32, ctx.xer);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r26
	ctx.r11.u64 = ctx.r26.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r26.u8 & 0x3F));
	// clrlwi r27,r11,30
	ctx.r27.u64 = ctx.r11.u32 & 0x3;
	// bne cr6,0x822a8384
	if (!ctx.cr6.eq) goto loc_822A8384;
	// addi r30,r25,1
	ctx.r30.s64 = ctx.r25.s64 + 1;
loc_822A8384:
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x822a8458
	if (!ctx.cr6.lt) goto loc_822A8458;
	// rlwinm r29,r18,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r30,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
loc_822A8394:
	// slw r11,r14,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r14.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 & ctx.r20.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822a8448
	if (!ctx.cr0.eq) goto loc_822A8448;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r3,12(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r28
	ctx.r11.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r28.u8 & 0x3F));
	// clrlwi r31,r11,30
	ctx.r31.u64 = ctx.r11.u32 & 0x3;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r27,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r27.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x822a8414
	if (!ctx.cr6.eq) goto loc_822A8414;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8232a6d8
	ctx.lr = 0x822A83E0;
	sub_8232A6D8(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,12(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8232a6d8
	ctx.lr = 0x822A83F8;
	sub_8232A6D8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq cr6,0x822a8408
	if (ctx.cr6.eq) goto loc_822A8408;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A8408:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_822A8414:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8448
	if (ctx.cr0.eq) goto loc_822A8448;
	// rlwinm r10,r29,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// add r9,r24,r30
	ctx.r9.u64 = ctx.r24.u64 + ctx.r30.u64;
	// clrldi r8,r29,58
	ctx.r8.u64 = ctx.r29.u64 & 0x3F;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// ldx r7,r10,r11
	ctx.r7.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// sld r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
loc_822A8448:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x822a8394
	if (ctx.cr6.lt) goto loc_822A8394;
loc_822A8458:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r25,r17
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x822a8358
	if (ctx.cr6.lt) goto loc_822A8358;
loc_822A846C:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r17,r14
	ctx.r17.u64 = ctx.r14.u64;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822a85ec
	if (!ctx.cr6.gt) goto loc_822A85EC;
	// addi r20,r23,48
	ctx.r20.s64 = ctx.r23.s64 + 48;
	// li r21,2
	ctx.r21.s64 = 2;
	// li r22,-1
	ctx.r22.s64 = -1;
loc_822A8490:
	// lwzx r24,r20,r5
	ctx.r24.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r5.u32);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r23,0(r20)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a85d4
	if (ctx.cr6.eq) goto loc_822A85D4;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
loc_822A84B0:
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// clrldi r31,r27,58
	ctx.r31.u64 = ctx.r27.u64 & 0x3F;
	// lwz r9,0(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrldi r10,r10,58
	ctx.r10.u64 = ctx.r10.u64 & 0x3F;
	// lwz r3,12(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// rlwinm r29,r27,29,3,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFF8;
	// sld r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r10.u8 & 0x7F));
	// addi r30,r1,88
	ctx.r30.s64 = ctx.r1.s64 + 88;
	// lwz r8,8(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sld r7,r22,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x40 ? 0 : (ctx.r22.u64 << (ctx.r31.u8 & 0x7F));
	// and r26,r10,r7
	ctx.r26.u64 = ctx.r10.u64 & ctx.r7.u64;
	// ldx r6,r29,r30
	ctx.r6.u64 = REX_LOAD_U64(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// and r7,r6,r26
	ctx.r7.u64 = ctx.r6.u64 & ctx.r26.u64;
	// rlwinm r9,r9,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// srd r7,r7,r31
	ctx.r7.u64 = ctx.r31.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r31.u8 & 0x7F));
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// rlwinm r6,r7,31,1,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFE;
	// rlwinm r7,r7,1,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// srw r10,r10,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r6.u8 & 0x3F));
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// clrlwi r4,r10,30
	ctx.r4.u64 = ctx.r10.u32 & 0x3;
	// clrlwi r28,r9,30
	ctx.r28.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r8,16000
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 16000, ctx.xer);
	// subf r10,r4,r28
	ctx.r10.u64 = ctx.r28.u64 - ctx.r4.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x822a8564
	if (!ctx.cr6.eq) goto loc_822A8564;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x8232a6d8
	ctx.lr = 0x822A8534;
	sub_8232A6D8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,12(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8232a6d8
	ctx.lr = 0x822A854C;
	sub_8232A6D8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// beq cr6,0x822a855c
	if (ctx.cr6.eq) goto loc_822A855C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_822A855C:
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
loc_822A8564:
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a8578
	if (ctx.cr0.eq) goto loc_822A8578;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x822a85c8
	goto loc_822A85C8;
loc_822A8578:
	// addi r11,r25,3
	ctx.r11.s64 = ctx.r25.s64 + 3;
	// ldx r10,r29,r30
	ctx.r10.u64 = REX_LOAD_U64(ctx.r29.u32 + ctx.r30.u32);
	// rlwinm r9,r25,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 29) & 0x1FFFFFF8;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// clrldi r11,r11,58
	ctx.r11.u64 = ctx.r11.u64 & 0x3F;
	// andc r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r26.u64;
	// sld r11,r21,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r21.u64 << (ctx.r11.u8 & 0x7F));
	// ldx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r8,r25,58
	ctx.r8.u64 = ctx.r25.u64 & 0x3F;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// sld r7,r22,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r22.u64 << (ctx.r8.u8 & 0x7F));
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// srd r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r8.u8 & 0x7F));
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// sld r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r31.u8 & 0x7F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stdx r11,r29,r30
	REX_STORE_U64(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u64);
loc_822A85C8:
	// cmplw cr6,r19,r18
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x822a84b0
	if (ctx.cr6.lt) goto loc_822A84B0;
	// lwz r4,300(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_822A85D4:
	// lwz r11,8(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822a8490
	if (ctx.cr6.lt) goto loc_822A8490;
loc_822A85EC:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822a8610
	if (ctx.cr6.eq) goto loc_822A8610;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// rlwimi r11,r18,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// std r10,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r10.u64);
	// b 0x822a8614
	goto loc_822A8614;
loc_822A8610:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822A8614:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C0700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x822C0708;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r27,16(r4)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r28,r11,7,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// lwz r22,12(r4)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r21,r11,25
	ctx.r21.u64 = ctx.r11.u64 & 25;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// lwz r30,28(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x822c0790
	if (ctx.cr0.eq) goto loc_822C0790;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// rlwinm r7,r11,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r6,7,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 7) & 0x7;
loc_822C0750:
	// srw r5,r7,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r5,r5,30
	ctx.r5.u64 = ctx.r5.u32 & 0x3;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r5,r4,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// or r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 | ctx.r8.u64;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x822c0750
	if (ctx.cr6.lt) goto loc_822C0750;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822c0790
	if (ctx.cr6.eq) goto loc_822C0790;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// subf. r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x822c0794
	if (ctx.cr0.eq) goto loc_822C0794;
loc_822C0790:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C0794:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// beq 0x822c0934
	if (ctx.cr0.eq) goto loc_822C0934;
	// rlwinm r6,r11,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x822bf978
	ctx.lr = 0x822C07B8;
	sub_822BF978(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822c07d4
	goto loc_822C07D4;
loc_822C07CC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822C07D4:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822c07cc
	if (!ctx.cr6.eq) goto loc_822C07CC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0a24
	if (ctx.cr0.eq) goto loc_822C0A24;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_822C0810:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c0848
	if (ctx.cr6.eq) goto loc_822C0848;
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c0840
	if (ctx.cr6.eq) goto loc_822C0840;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x822c0840
	if (!ctx.cr6.eq) goto loc_822C0840;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c084c
	if (!ctx.cr0.eq) goto loc_822C084C;
loc_822C0840:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822c0810
	goto loc_822C0810;
loc_822C0848:
	// li r30,0
	ctx.r30.s64 = 0;
loc_822C084C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c0a24
	if (ctx.cr6.eq) goto loc_822C0A24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8232f108
	ctx.lr = 0x822C0860;
	sub_8232F108(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0a24
	if (ctx.cr0.eq) goto loc_822C0A24;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c08f8
	if (ctx.cr0.eq) goto loc_822C08F8;
	// addi r8,r30,44
	ctx.r8.s64 = ctx.r30.s64 + 44;
loc_822C087C:
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
loc_822C088C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x822c08e4
	if (!ctx.cr6.lt) goto loc_822C08E4;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplw cr6,r6,r29
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822c08b0
	if (ctx.cr6.eq) goto loc_822C08B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x822c088c
	goto loc_822C088C;
loc_822C08B0:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r6,r11,26
	ctx.r6.u64 = ctx.r11.u32 & 0x3F;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r10,r10,2,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3C;
	// rlwinm r9,r9,0,27,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822C08E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822c087c
	if (ctx.cr6.lt) goto loc_822C087C;
loc_822C08F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822c0910
	goto loc_822C0910;
loc_822C0908:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822C0910:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822c0908
	if (!ctx.cr6.eq) goto loc_822C0908;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// b 0x822c0a24
	goto loc_822C0A24;
loc_822C0934:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x8232db48
	ctx.lr = 0x822C0940;
	sub_8232DB48(ctx, base);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r3,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 + 24;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r9,36
	ctx.r11.s64 = ctx.r9.s64 + 36;
	// stw r8,40(r9)
	REX_STORE_U32(ctx.r9.u32 + 40, ctx.r8.u32);
	// ori r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 1;
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r11,r11,-36
	ctx.r11.s64 = ctx.r11.s64 + -36;
	// stw r10,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r10.u32);
	// stw r7,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r7.u32);
	// stw r11,28(r30)
	REX_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822c0994
	goto loc_822C0994;
loc_822C098C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822C0994:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822c098c
	if (!ctx.cr6.eq) goto loc_822C098C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r24,r11,27,24,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// beq cr6,0x822c0a14
	if (ctx.cr6.eq) goto loc_822C0A14;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r29,40
	ctx.r26.s64 = ctx.r29.s64 + 40;
loc_822C09CC:
	// srw r11,r24,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r24.u32 >> (ctx.r27.u8 & 0x3F));
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// clrlwi r6,r11,30
	ctx.r6.u64 = ctx.r11.u32 & 0x3;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822bf978
	ctx.lr = 0x822C09EC;
	sub_822BF978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281260
	ctx.lr = 0x822C09F8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x822C0A04;
	sub_82281428(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwu r3,4(r26)
	ea = 4 + ctx.r26.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r26.u32 = ea;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// bne 0x822c09cc
	if (!ctx.cr0.eq) goto loc_822C09CC;
loc_822C0A14:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// rlwimi r11,r10,7,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822C0A24:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822c0a40
	if (ctx.cr6.eq) goto loc_822C0A40;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// subf r10,r21,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r21.u64;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_822C0A40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CA850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CA858;
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
	// li r6,54
	ctx.r6.s64 = 54;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CA884;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822ca8a8
	if (ctx.cr6.eq) goto loc_822CA8A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CA8A4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CA8A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CA8B0;
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
	ctx.lr = 0x822CA8C8;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CB088) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CB090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,46
	ctx.r6.s64 = 46;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CB0BC;
	sub_8232D9E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB0CC;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB0D8;
	sub_82281428(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822761f8
	ctx.lr = 0x822CB0F0;
	sub_822761F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CBA50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822CBA58;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r4,28(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,13
	ctx.r6.s64 = 13;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CBA8C;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x822cbab0
	if (ctx.cr6.eq) goto loc_822CBAB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CBAAC;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CBAB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBAB8;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281260
	ctx.lr = 0x822CBAC8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBAD4;
	sub_82281428(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281260
	ctx.lr = 0x822CBAE4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBAF0;
	sub_82281428(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r3,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// rlwimi r10,r11,14,15,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1C000) | (ctx.r10.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// bl 0x822761f8
	ctx.lr = 0x822CBB20;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D03D8) {
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
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bgt cr6,0x822d0400
	if (ctx.cr6.gt) goto loc_822D0400;
	// li r30,10
	ctx.r30.s64 = 10;
loc_822D0400:
	// mulli r11,r30,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(12));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226e2d8
	ctx.lr = 0x822D0410;
	sub_8226E2D8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// ori r8,r31,1
	ctx.r8.u64 = ctx.r31.u64 | 1;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
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

DEFINE_REX_FUNC(sub_822D2F20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822D2F28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822d3148
	if (ctx.cr6.eq) goto loc_822D3148;
	// lwz r11,536(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 536);
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822d3148
	if (!ctx.cr6.gt) goto loc_822D3148;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r7,r3,348
	ctx.r7.s64 = ctx.r3.s64 + 348;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r5,r11,-1748
	ctx.r5.s64 = ctx.r11.s64 + -1748;
loc_822D2F6C:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r6,r11,27
	ctx.r6.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r6,18
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 18, ctx.xer);
	// beq cr6,0x822d2ff4
	if (ctx.cr6.eq) goto loc_822D2FF4;
	// rlwinm. r11,r11,0,23,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3024
	if (!ctx.cr0.eq) goto loc_822D3024;
	// slw r11,r3,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// and. r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d3030
	if (!ctx.cr0.eq) goto loc_822D3030;
	// lwz r9,4(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// or r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 | ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r9,18,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
loc_822D2FA8:
	// lhz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r28,r9,21,11,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1FFFFF;
	// cmplw cr6,r28,r6
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822d2fc4
	if (!ctx.cr6.eq) goto loc_822D2FC4;
	// rlwinm r9,r9,24,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x7;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822d2fd8
	if (ctx.cr6.eq) goto loc_822D2FD8;
loc_822D2FC4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x822d2fa8
	if (ctx.cr6.lt) goto loc_822D2FA8;
	// b 0x822d2fec
	goto loc_822D2FEC;
loc_822D2FD8:
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// and r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 & ctx.r29.u64;
	// clrlwi r29,r10,25
	ctx.r29.u64 = ctx.r10.u32 & 0x7F;
loc_822D2FEC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x822d303c
	if (ctx.cr6.eq) goto loc_822D303C;
loc_822D2FF4:
	// lwz r11,536(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 536);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822d2f6c
	if (ctx.cr6.lt) goto loc_822D2F6C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d3148
	if (ctx.cr6.eq) goto loc_822D3148;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x822d3048
	if (!ctx.cr6.eq) goto loc_822D3048;
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D3024;
	sub_8225B1A0(ctx, base);
loc_822D3024:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D3030;
	sub_8225B1A0(ctx, base);
loc_822D3030:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D303C;
	sub_8225B1A0(ctx, base);
loc_822D303C:
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D3048;
	sub_8225B1A0(ctx, base);
loc_822D3048:
	// lis r8,-32188
	ctx.r8.s64 = -2109472768;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r31,r11,-32436
	ctx.r31.s64 = ctx.r11.s64 + -32436;
	// lwz r11,-32408(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -32408);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d30b0
	if (!ctx.cr0.eq) goto loc_822D30B0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r11,-32408(r8)
	REX_STORE_U32(ctx.r8.u32 + -32408, ctx.r11.u32);
	// lis r11,2051
	ctx.r11.s64 = 134414336;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r9,5940
	ctx.r9.s64 = 389283840;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// lis r10,14116
	ctx.r10.s64 = 925106176;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r9,5907
	ctx.r9.s64 = 387121152;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lis r11,6163
	ctx.r11.s64 = 403898368;
	// lis r10,6195
	ctx.r10.s64 = 405995520;
	// ori r9,r9,53760
	ctx.r9.u64 = ctx.r9.u64 | 53760;
	// ori r11,r11,49600
	ctx.r11.u64 = ctx.r11.u64 | 49600;
	// ori r10,r10,33248
	ctx.r10.u64 = ctx.r10.u64 | 33248;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
loc_822D30B0:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// andc r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ~ctx.r11.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r11.u64 = static_cast<uint64_t>(31) - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,544(r30)
	REX_STORE_U32(ctx.r30.u32 + 544, ctx.r11.u32);
	// lwzx r11,r10,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r7,r11,18,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1F;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// slw r9,r3,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r7.u8 & 0x3F));
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r11,9,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// slw r9,r3,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x822d3104
	if (ctx.cr6.eq) goto loc_822D3104;
	// li r4,3543
	ctx.r4.s64 = 3543;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822D3104;
	sub_8225B1A0(ctx, base);
loc_822D3104:
	// rlwinm. r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x822d3118
	if (ctx.cr0.eq) goto loc_822D3118;
	// rlwinm r6,r11,13,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1ed0
	ctx.lr = 0x822D3118;
	sub_822D1ED0(ctx, base);
loc_822D3118:
	// lwz r11,544(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 544);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm. r6,r11,22,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x822d3148
	if (ctx.cr0.eq) goto loc_822D3148;
	// rlwinm r10,r11,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// rlwinm r7,r11,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r5,r11,9,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1F;
	// rlwinm r4,r10,13,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822d1ed0
	ctx.lr = 0x822D3148;
	sub_822D1ED0(ctx, base);
loc_822D3148:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D8710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822D8718;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x822D873C;
	sub_8226DBE8(ctx, base);
	// addi r25,r3,4
	ctx.r25.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r25,1
	ctx.r10.u64 = ctx.r25.u64 | 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r24,512
	ctx.r24.s64 = 33554432;
loc_822D8758:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d28f8
	ctx.lr = 0x822D876C;
	sub_822D28F8(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d8900
	if (ctx.cr0.eq) goto loc_822D8900;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822d8900
	if (!ctx.cr6.eq) goto loc_822D8900;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r9,r24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822d8900
	if (!ctx.cr6.eq) goto loc_822D8900;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d8900
	if (!ctx.cr0.eq) goto loc_822D8900;
	// rlwinm r30,r10,25,25,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r30,11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11, ctx.xer);
	// beq cr6,0x822d87f4
	if (ctx.cr6.eq) goto loc_822D87F4;
	// cmplwi cr6,r30,10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 10, ctx.xer);
	// beq cr6,0x822d87f4
	if (ctx.cr6.eq) goto loc_822D87F4;
	// cmplwi cr6,r30,103
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 103, ctx.xer);
	// bne cr6,0x822d87cc
	if (!ctx.cr6.eq) goto loc_822D87CC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c6aa0
	ctx.lr = 0x822D87C4;
	sub_822C6AA0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d87f4
	if (!ctx.cr0.eq) goto loc_822D87F4;
loc_822D87CC:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// beq cr6,0x822d87dc
	if (ctx.cr6.eq) goto loc_822D87DC;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bne cr6,0x822d8900
	if (!ctx.cr6.eq) goto loc_822D8900;
loc_822D87DC:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822d8900
	if (!ctx.cr6.eq) goto loc_822D8900;
loc_822D87F4:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822D87F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822d8900
	if (ctx.cr6.eq) goto loc_822D8900;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822d88f8
	if (ctx.cr6.eq) goto loc_822D88F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d88f8
	if (ctx.cr0.eq) goto loc_822D88F8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x822d8834
	if (ctx.cr6.lt) goto loc_822D8834;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822d8838
	if (!ctx.cr6.gt) goto loc_822D8838;
loc_822D8834:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822D8838:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d8848
	if (!ctx.cr0.eq) goto loc_822D8848;
	// cmplwi cr6,r10,103
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 103, ctx.xer);
	// bne cr6,0x822d88f8
	if (!ctx.cr6.eq) goto loc_822D88F8;
loc_822D8848:
	// lwz r11,616(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 616);
	// li r10,68
	ctx.r10.s64 = 68;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// subf r11,r11,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r11.u64;
	// divw r10,r11,r10
	ctx.r10.u64 = uint32_t((ctx.r10.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r10.s32 == -1)) ? ctx.r11.s32 / ctx.r10.s32 : 0);
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r11,r11,21
	ctx.r11.s64 = ctx.r11.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d88f8
	if (ctx.cr0.eq) goto loc_822D88F8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822d28f8
	ctx.lr = 0x822D888C;
	sub_822D28F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d88f8
	if (!ctx.cr0.eq) goto loc_822D88F8;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822d88f8
	if (!ctx.cr6.eq) goto loc_822D88F8;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d88d4
	if (!ctx.cr0.eq) goto loc_822D88D4;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822d88d4
	if (ctx.cr0.eq) goto loc_822D88D4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822d88e0
	if (!ctx.cr6.gt) goto loc_822D88E0;
loc_822D88D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fade8
	ctx.lr = 0x822D88E0;
	sub_822FADE8(ctx, base);
loc_822D88E0:
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
loc_822D88F8:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x822d87f8
	goto loc_822D87F8;
loc_822D8900:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d897c
	if (!ctx.cr0.eq) goto loc_822D897C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d897c
	if (ctx.cr0.eq) goto loc_822D897C;
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
	// lwzx r30,r10,r4
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x822d8974
	if (!ctx.cr0.eq) goto loc_822D8974;
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
	ctx.lr = 0x822D8974;
	sub_8225B140(ctx, base);
loc_822D8974:
	// lwz r31,16(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x822d8758
	goto loc_822D8758;
loc_822D897C:
	// lwz r10,976(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 976);
	// addi r11,r28,972
	ctx.r11.s64 = ctx.r28.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r28)
	REX_STORE_U32(ctx.r28.u32 + 976, ctx.r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822E7B10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x822E7B18;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e806c
	if (!ctx.cr0.eq) goto loc_822E806C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r25,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r25.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x822e806c
	if (ctx.cr0.eq) goto loc_822E806C;
loc_822E7B40:
	// rlwinm r23,r25,0,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e7b58
	if (ctx.cr0.eq) goto loc_822E7B58;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x822e7b60
	goto loc_822E7B60;
loc_822E7B58:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r21,r11,-4
	ctx.r21.s64 = ctx.r11.s64 + -4;
loc_822E7B60:
	// lwz r11,68(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 68);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e8060
	if (ctx.cr0.eq) goto loc_822E8060;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r9,r10
	ctx.r26.u64 = ctx.r9.u64 & ctx.r10.u64;
	// beq cr6,0x822e7ba0
	if (ctx.cr6.eq) goto loc_822E7BA0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822e7ba4
	if (!ctx.cr6.eq) goto loc_822E7BA4;
loc_822E7BA0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7BA4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7c58
	if (ctx.cr0.eq) goto loc_822E7C58;
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
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
	// and r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 & ctx.r11.u64;
	// beq cr6,0x822e7c58
	if (ctx.cr6.eq) goto loc_822E7C58;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7be8
	if (ctx.cr0.eq) goto loc_822E7BE8;
	// lwz r11,36(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 36);
	// addi r30,r24,32
	ctx.r30.s64 = ctx.r24.s64 + 32;
	// b 0x822e7bf0
	goto loc_822E7BF0;
loc_822E7BE8:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// addi r30,r24,24
	ctx.r30.s64 = ctx.r24.s64 + 24;
loc_822E7BF0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e7cdc
	if (ctx.cr6.eq) goto loc_822E7CDC;
loc_822E7C08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x822E7C10;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e8088
	if (!ctx.cr0.eq) goto loc_822E8088;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7c30
	if (!ctx.cr0.eq) goto loc_822E7C30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e7c08
	if (!ctx.cr6.eq) goto loc_822E7C08;
loc_822E7C30:
	// addi r11,r24,32
	ctx.r11.s64 = ctx.r24.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e7cdc
	if (ctx.cr6.eq) goto loc_822E7CDC;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7cdc
	if (!ctx.cr0.eq) goto loc_822E7CDC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x822e7c08
	if (!ctx.cr0.eq) goto loc_822E7C08;
	// b 0x822e7cdc
	goto loc_822E7CDC;
loc_822E7C58:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7c70
	if (ctx.cr0.eq) goto loc_822E7C70;
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// addi r30,r25,32
	ctx.r30.s64 = ctx.r25.s64 + 32;
	// b 0x822e7c78
	goto loc_822E7C78;
loc_822E7C70:
	// lwz r11,28(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// addi r30,r25,24
	ctx.r30.s64 = ctx.r25.s64 + 24;
loc_822E7C78:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e7cdc
	if (ctx.cr6.eq) goto loc_822E7CDC;
loc_822E7C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x822E7C98;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e8094
	if (!ctx.cr0.eq) goto loc_822E8094;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7cb8
	if (!ctx.cr0.eq) goto loc_822E7CB8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e7c90
	if (!ctx.cr6.eq) goto loc_822E7C90;
loc_822E7CB8:
	// addi r11,r25,32
	ctx.r11.s64 = ctx.r25.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e7cdc
	if (ctx.cr6.eq) goto loc_822E7CDC;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7cdc
	if (!ctx.cr0.eq) goto loc_822E7CDC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x822e7c90
	if (!ctx.cr0.eq) goto loc_822E7C90;
loc_822E7CDC:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7cf4
	if (ctx.cr0.eq) goto loc_822E7CF4;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// addi r30,r26,32
	ctx.r30.s64 = ctx.r26.s64 + 32;
	// b 0x822e7cfc
	goto loc_822E7CFC;
loc_822E7CF4:
	// lwz r11,28(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// addi r30,r26,24
	ctx.r30.s64 = ctx.r26.s64 + 24;
loc_822E7CFC:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822e7d60
	if (ctx.cr6.eq) goto loc_822E7D60;
loc_822E7D14:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x822E7D1C;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e80a0
	if (!ctx.cr0.eq) goto loc_822E80A0;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7d3c
	if (!ctx.cr0.eq) goto loc_822E7D3C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822e7d14
	if (!ctx.cr6.eq) goto loc_822E7D14;
loc_822E7D3C:
	// addi r11,r26,32
	ctx.r11.s64 = ctx.r26.s64 + 32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822e7d60
	if (ctx.cr6.eq) goto loc_822E7D60;
	// lwz r31,4(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7d60
	if (!ctx.cr0.eq) goto loc_822E7D60;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne 0x822e7d14
	if (!ctx.cr0.eq) goto loc_822E7D14;
loc_822E7D60:
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7d74
	if (ctx.cr6.eq) goto loc_822E7D74;
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_822E7D74:
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7d88
	if (ctx.cr6.eq) goto loc_822E7D88;
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_822E7D88:
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822e7d9c
	if (ctx.cr0.eq) goto loc_822E7D9C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x822e7da8
	goto loc_822E7DA8;
loc_822E7D9C:
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r31,r11,-40
	ctx.r31.s64 = ctx.r11.s64 + -40;
loc_822E7DA8:
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
	ctx.lr = 0x822E7DC0;
	sub_8226D728(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r31,-16
	ctx.r9.s64 = ctx.r31.s64 + -16;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// add r29,r3,r9
	ctx.r29.u64 = ctx.r3.u64 + ctx.r9.u64;
loc_822E7DD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7df4
	if (ctx.cr6.eq) goto loc_822E7DF4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r28,r9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822e7dec
	if (ctx.cr6.eq) goto loc_822E7DEC;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e7dd0
	goto loc_822E7DD0;
loc_822E7DEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x822e7df8
	goto loc_822E7DF8;
loc_822E7DF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822E7DF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822e7e54
	if (!ctx.cr0.eq) goto loc_822E7E54;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822E7E04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e7e20
	if (ctx.cr6.eq) goto loc_822E7E20;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822e7e24
	if (!ctx.cr6.eq) goto loc_822E7E24;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822e7e04
	goto loc_822E7E04;
loc_822E7E20:
	// li r31,0
	ctx.r31.s64 = 0;
loc_822E7E24:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823389a8
	ctx.lr = 0x822E7E34;
	sub_823389A8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338b20
	ctx.lr = 0x822E7E44;
	sub_82338B20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822e7e54
	if (!ctx.cr6.eq) goto loc_822E7E54;
	// stw r28,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r28.u32);
loc_822E7E54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823389a8
	ctx.lr = 0x822E7E64;
	sub_823389A8(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822e7ea0
	if (ctx.cr6.eq) goto loc_822E7EA0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823389a8
	ctx.lr = 0x822E7E7C;
	sub_823389A8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338b20
	ctx.lr = 0x822E7E8C;
	sub_82338B20(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x822e8060
	if (!ctx.cr6.eq) goto loc_822E8060;
	// stw r22,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// b 0x822e8060
	goto loc_822E8060;
loc_822E7EA0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822e7ef0
	if (ctx.cr6.eq) goto loc_822E7EF0;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
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
loc_822E7EF0:
	// rlwinm r11,r26,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFE;
	// ori r9,r27,1
	ctx.r9.u64 = ctx.r27.u64 | 1;
	// addi r8,r23,4
	ctx.r8.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r9,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r9.u32);
	// stw r8,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// beq cr6,0x822e7f60
	if (ctx.cr6.eq) goto loc_822E7F60;
	// rlwinm r10,r24,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r7,r10,4
	ctx.r7.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r7,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r7.u32);
loc_822E7F60:
	// lwz r5,0(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// addi r31,r26,32
	ctx.r31.s64 = ctx.r26.s64 + 32;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,83
	ctx.r6.s64 = 83;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r31,r31,0,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// bl 0x8232d9e0
	ctx.lr = 0x822E7FA0;
	sub_8232D9E0(ctx, base);
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e8060
	if (!ctx.cr0.eq) goto loc_822E8060;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822e8060
	if (ctx.cr0.eq) goto loc_822E8060;
loc_822E7FB8:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x822e8044
	if (!ctx.cr6.eq) goto loc_822E8044;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_822E7FCC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822e8044
	if (ctx.cr6.eq) goto loc_822E8044;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822e8030
	if (ctx.cr0.eq) goto loc_822E8030;
	// rlwinm. r10,r10,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e8030
	if (ctx.cr0.eq) goto loc_822E8030;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822e8030
	if (ctx.cr0.eq) goto loc_822E8030;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822e8010
	goto loc_822E8010;
loc_822E8008:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_822E8010:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e8008
	if (!ctx.cr6.eq) goto loc_822E8008;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r3,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
loc_822E8030:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822e7fcc
	if (!ctx.cr6.eq) goto loc_822E7FCC;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// b 0x822e7fcc
	goto loc_822E7FCC;
loc_822E8044:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822e8060
	if (!ctx.cr0.eq) goto loc_822E8060;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822e7fb8
	if (!ctx.cr6.eq) goto loc_822E7FB8;
loc_822E8060:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x822e7b40
	if (!ctx.cr6.eq) goto loc_822E7B40;
loc_822E806C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822f4320
	ctx.lr = 0x822E8074;
	sub_822F4320(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e2890
	ctx.lr = 0x822E8080;
	sub_822E2890(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_822E8088:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822E8094;
	sub_8225B1A0(ctx, base);
loc_822E8094:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822E80A0;
	sub_8225B1A0(ctx, base);
loc_822E80A0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822E80AC;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822F7778) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F7780;
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
	// li r6,8
	ctx.r6.s64 = 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F77A8;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f77cc
	if (ctx.cr6.eq) goto loc_822F77CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F77C8;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F77CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F77D4;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822f77f8
	if (ctx.cr6.eq) goto loc_822F77F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F77F4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F77F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F7800;
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

DEFINE_REX_FUNC(sub_822F8A40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F8A48;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F8A70;
	sub_8232D9E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281260
	ctx.lr = 0x822F8A80;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F8A8C;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x822f8ab0
	if (ctx.cr6.eq) goto loc_822F8AB0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F8AAC;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F8AB0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F8AB8;
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

DEFINE_REX_FUNC(sub_822FA988) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822faa0c
	if (!ctx.cr0.eq) goto loc_822FAA0C;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x822faa0c
	if (ctx.cr0.eq) goto loc_822FAA0C;
loc_822FA9B4:
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
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subfe r9,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// and r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 & ctx.r8.u64;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8225b140
	ctx.lr = 0x822FAA00;
	sub_8225B140(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822fa9b4
	if (!ctx.cr6.eq) goto loc_822FA9B4;
loc_822FAA0C:
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

DEFINE_REX_FUNC(sub_822FBCD8) {
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
	// std r4,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x822fb480
	ctx.lr = 0x822FBCF4;
	sub_822FB480(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82280d20
	ctx.lr = 0x822FBD00;
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

DEFINE_REX_FUNC(sub_822FC4A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822FC4B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FC4DC;
	sub_8232D9E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FC4EC;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82281428
	ctx.lr = 0x822FC4F8;
	sub_82281428(ctx, base);
	// stw r3,44(r27)
	REX_STORE_U32(ctx.r27.u32 + 44, ctx.r3.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822761f8
	ctx.lr = 0x822FC510;
	sub_822761F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FCA28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FCA30;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FCA58;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fca7c
	if (ctx.cr6.eq) goto loc_822FCA7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822FCA78;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822FCA7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FCA84;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FCA94;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FCAA0;
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

DEFINE_REX_FUNC(sub_822FEB10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x822FEB18;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r23,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,4,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r22,r23
	ctx.r22.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// beq 0x822fecd8
	if (ctx.cr0.eq) goto loc_822FECD8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r27,r4,12
	ctx.r27.s64 = ctx.r4.s64 + 12;
	// lfs f31,2104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
loc_822FEB5C:
	// ld r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r10,30
	ctx.r11.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x822febe0
	if (!ctx.cr6.eq) goto loc_822FEBE0;
	// rlwinm. r10,r10,16,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822febe0
	if (ctx.cr0.eq) goto loc_822FEBE0;
	// lwz r30,88(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822feb94
	if (ctx.cr6.eq) goto loc_822FEB94;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822febc4
	if (ctx.cr6.eq) goto loc_822FEBC4;
loc_822FEB94:
	// ld r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x822f9768
	ctx.lr = 0x822FEBAC;
	sub_822F9768(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,88(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_822FEBC4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822feb10
	ctx.lr = 0x822FEBDC;
	sub_822FEB10(ctx, base);
	// b 0x822fecb8
	goto loc_822FECB8;
loc_822FEBE0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822febf4
	if (!ctx.cr6.eq) goto loc_822FEBF4;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb8d0
	ctx.lr = 0x822FEBF4;
	sub_822FB8D0(ctx, base);
loc_822FEBF4:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x8232fe98
	ctx.lr = 0x822FEC28;
	sub_8232FE98(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// bl 0x822f9768
	ctx.lr = 0x822FEC3C;
	sub_822F9768(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fd530
	ctx.lr = 0x822FEC50;
	sub_822FD530(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r21,r11,18
	ctx.r21.u64 = ctx.r11.u32 & 0x3FFF;
	// rlwinm r20,r11,18,18,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x82275ef8
	ctx.lr = 0x822FEC70;
	sub_82275EF8(ctx, base);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// rlwimi r20,r21,14,4,17
	ctx.r20.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 14) & 0xFFFC000) | (ctx.r20.u64 & 0xFFFFFFFFF0003FFF);
	// rlwinm r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// rlwimi r20,r9,0,0,3
	ctx.r20.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000000) | (ctx.r20.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// stw r20,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r20.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x822ffa88
	ctx.lr = 0x822FECB8;
	sub_822FFA88(ctx, base);
loc_822FECB8:
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// clrlwi r11,r10,18
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFF;
	// rlwinm r10,r10,18,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3FFF;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r24,r10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822feb5c
	if (ctx.cr6.lt) goto loc_822FEB5C;
loc_822FECD8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8230D968) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8230D970;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// mulli r4,r10,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// stw r11,600(r3)
	REX_STORE_U32(ctx.r3.u32 + 600, ctx.r11.u32);
	// bl 0x82295980
	ctx.lr = 0x8230D990;
	sub_82295980(ctx, base);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230d9c4
	if (ctx.cr6.eq) goto loc_8230D9C4;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x8215e640
	ctx.lr = 0x8230D9AC;
	sub_8215E640(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x8226df90
	ctx.lr = 0x8230D9C4;
	sub_8226DF90(ctx, base);
loc_8230D9C4:
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r28,r11,-1552
	ctx.r28.s64 = ctx.r11.s64 + -1552;
	// stw r10,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
loc_8230D9E4:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f9ef8
	ctx.lr = 0x8230DA10;
	sub_822F9EF8(ctx, base);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x8230daa0
	if (ctx.cr6.eq) goto loc_8230DAA0;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x8230daa0
	if (!ctx.cr6.eq) goto loc_8230DAA0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823039e0
	ctx.lr = 0x8230DA40;
	sub_823039E0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r11,r30,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(40));
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bgt cr6,0x8230da5c
	if (ctx.cr6.gt) goto loc_8230DA5C;
	// rlwimi r9,r27,2,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// b 0x8230da60
	goto loc_8230DA60;
loc_8230DA5C:
	// rlwimi r9,r27,1,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
loc_8230DA60:
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// blt cr6,0x8230d9e4
	if (ctx.cr6.lt) goto loc_8230D9E4;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// oris r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 262144;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8230DAA0:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DAAC;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_82313B88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r9,6
	ctx.r9.s64 = 6;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82313B98:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,32(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bdnz 0x82313b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82313B98;
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r9,28(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lwz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,3
	ctx.r3.s64 = ctx.r11.s64 + 3;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823148C0) {
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
	// b 0x82314904
	goto loc_82314904;
loc_823148D8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823148EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r31,28(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// bctrl 
	ctx.lr = 0x82314904;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82314904:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823148d8
	if (!ctx.cr6.eq) goto loc_823148D8;
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

DEFINE_REX_FUNC(sub_82314CE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82314CE8;
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
	// addi r29,r10,13032
	ctx.r29.s64 = ctx.r10.s64 + 13032;
	// bne cr6,0x82314d24
	if (!ctx.cr6.eq) goto loc_82314D24;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,12752
	ctx.r5.s64 = ctx.r11.s64 + 12752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,375
	ctx.r7.s64 = 375;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314D24;
	sub_82260F30(ctx, base);
loc_82314D24:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82314d4c
	if (ctx.cr6.eq) goto loc_82314D4C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,13192
	ctx.r5.s64 = ctx.r11.s64 + 13192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314D4C;
	sub_82260F30(ctx, base);
loc_82314D4C:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314d5c
	if (ctx.cr6.eq) goto loc_82314D5C;
	// bl 0x823148c0
	ctx.lr = 0x82314D5C;
	sub_823148C0(ctx, base);
loc_82314D5C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82314d6c
	if (ctx.cr6.eq) goto loc_82314D6C;
	// bl 0x823148c0
	ctx.lr = 0x82314D6C;
	sub_823148C0(ctx, base);
loc_82314D6C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82314D80;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82315A78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82315A80;
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
	// bne cr6,0x82315ac0
	if (!ctx.cr6.eq) goto loc_82315AC0;
	// lwz r28,1188(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 1188);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82315af0
	goto loc_82315AF0;
loc_82315AC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82315ae4
	if (ctx.cr6.eq) goto loc_82315AE4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,13604
	ctx.r5.s64 = ctx.r11.s64 + 13604;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,740
	ctx.r7.s64 = 740;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315AE4;
	sub_82260F30(ctx, base);
loc_82315AE4:
	// lwz r11,1188(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1188);
	// li r28,32
	ctx.r28.s64 = 32;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.u64 = static_cast<uint64_t>(32) - ctx.r11.u64;
loc_82315AF0:
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82315b64
	if (!ctx.cr6.lt) goto loc_82315B64;
	// mulli r11,r11,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(36));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,28
	ctx.r31.s64 = ctx.r11.s64 + 28;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r29,r11,13776
	ctx.r29.s64 = ctx.r11.s64 + 13776;
loc_82315B10:
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82315b34
	if (ctx.cr6.eq) goto loc_82315B34;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,748
	ctx.r7.s64 = 748;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315B34;
	sub_82260F30(ctx, base);
loc_82315B34:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82315b54
	if (ctx.cr6.eq) goto loc_82315B54;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82315b54
	if (!ctx.cr6.eq) goto loc_82315B54;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82315b70
	if (ctx.cr6.eq) goto loc_82315B70;
loc_82315B54:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82315b10
	if (ctx.cr6.lt) goto loc_82315B10;
loc_82315B64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82315B68:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_82315B70:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r30,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// b 0x82315b68
	goto loc_82315B68;
}

DEFINE_REX_FUNC(sub_82317690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82317698;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-14148
	ctx.r31.s64 = ctx.r11.s64 + -14148;
	// addi r30,r10,15664
	ctx.r30.s64 = ctx.r10.s64 + 15664;
	// bne cr6,0x823176d8
	if (!ctx.cr6.eq) goto loc_823176D8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15644
	ctx.r5.s64 = ctx.r11.s64 + 15644;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823176D8;
	sub_82260F30(ctx, base);
loc_823176D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823176fc
	if (!ctx.cr6.eq) goto loc_823176FC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15624
	ctx.r5.s64 = ctx.r11.s64 + 15624;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823176FC;
	sub_82260F30(ctx, base);
loc_823176FC:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82317724
	if (!ctx.cr6.eq) goto loc_82317724;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15588
	ctx.r5.s64 = ctx.r11.s64 + 15588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317724;
	sub_82260F30(ctx, base);
loc_82317724:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231774c
	if (!ctx.cr6.eq) goto loc_8231774C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15556
	ctx.r5.s64 = ctx.r11.s64 + 15556;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231774C;
	sub_82260F30(ctx, base);
loc_8231774C:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82317774
	if (!ctx.cr6.eq) goto loc_82317774;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15520
	ctx.r5.s64 = ctx.r11.s64 + 15520;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,161
	ctx.r7.s64 = 161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317774;
	sub_82260F30(ctx, base);
loc_82317774:
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8231779c
	if (!ctx.cr6.eq) goto loc_8231779C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,15488
	ctx.r5.s64 = ctx.r11.s64 + 15488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,162
	ctx.r7.s64 = 162;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231779C;
	sub_82260F30(ctx, base);
loc_8231779C:
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,544
	ctx.r4.s64 = 544;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823177B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823177c0
	if (!ctx.cr0.eq) goto loc_823177C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823177fc
	goto loc_823177FC;
loc_823177C0:
	// li r5,544
	ctx.r5.s64 = 544;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215ec60
	ctx.lr = 0x823177D0;
	sub_8215EC60(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8215e640
	ctx.lr = 0x823177E8;
	sub_8215E640(ctx, base);
	// addi r3,r31,472
	ctx.r3.s64 = ctx.r31.s64 + 472;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8215e640
	ctx.lr = 0x823177F8;
	sub_8215E640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823177FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231B9F0) {
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
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8231bc60
	if (ctx.cr6.lt) goto loc_8231BC60;
	// beq cr6,0x8231bc5c
	if (ctx.cr6.eq) goto loc_8231BC5C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8231ba60
	if (ctx.cr6.lt) goto loc_8231BA60;
	// beq cr6,0x8231ba5c
	if (ctx.cr6.eq) goto loc_8231BA5C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x8231ba58
	if (ctx.cr6.lt) goto loc_8231BA58;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,16040
	ctx.r6.s64 = ctx.r11.s64 + 16040;
	// addi r5,r10,-1888
	ctx.r5.s64 = ctx.r10.s64 + -1888;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,5708
	ctx.r7.s64 = 5708;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231BA54;
	sub_82260F30(ctx, base);
	// b 0x8231be58
	goto loc_8231BE58;
loc_8231BA58:
	// li r7,3
	ctx.r7.s64 = 3;
loc_8231BA5C:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
loc_8231BA60:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231be58
	if (ctx.cr6.eq) goto loc_8231BE58;
loc_8231BA6C:
	// li r10,34
	ctx.r10.s64 = 34;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r10,0,24,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r9.u64 & 0x100);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r10,r9,0,23,18
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFE1FF) | (ctx.r10.u64 & 0x1E00);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bae4
	if (!ctx.cr6.eq) goto loc_8231BAE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// b 0x8231bae8
	goto loc_8231BAE8;
loc_8231BAE4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231BAE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bb08
	if (!ctx.cr6.eq) goto loc_8231BB08;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// b 0x8231bb0c
	goto loc_8231BB0C;
loc_8231BB08:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BB0C:
	// rlwimi r10,r9,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bb28
	if (!ctx.cr6.eq) goto loc_8231BB28;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// b 0x8231bb2c
	goto loc_8231BB2C;
loc_8231BB28:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BB2C:
	// rlwimi r10,r9,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bb48
	if (!ctx.cr6.eq) goto loc_8231BB48;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,26,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// b 0x8231bb4c
	goto loc_8231BB4C;
loc_8231BB48:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BB4C:
	// rlwimi r10,r9,6,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bb70
	if (ctx.cr0.eq) goto loc_8231BB70;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BB70:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r10,0,10,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r9.u64 & 0x400000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bbc4
	if (ctx.cr0.eq) goto loc_8231BBC4;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BBC4:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bbdc
	if (ctx.cr0.eq) goto loc_8231BBDC;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BBDC:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r10,r9,0,9,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r10.u64 & 0x800000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r10,r9,0,10,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r10.u64 & 0x400000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231bc34
	if (ctx.cr0.eq) goto loc_8231BC34;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231BC34:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231bc4c
	if (ctx.cr0.eq) goto loc_8231BC4C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231BC4C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8231ba6c
	if (ctx.cr6.lt) goto loc_8231BA6C;
	// b 0x8231be58
	goto loc_8231BE58;
loc_8231BC5C:
	// li r7,3
	ctx.r7.s64 = 3;
loc_8231BC60:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8231be58
	if (ctx.cr6.eq) goto loc_8231BE58;
loc_8231BC6C:
	// li r10,35
	ctx.r10.s64 = 35;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r10,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r10.u16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// sth r10,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,0,8,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000) | (ctx.r9.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r9,64
	ctx.r10.u64 = ctx.r9.u64 | 4194304;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r10,0,24,22
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF) | (ctx.r9.u64 & 0x100);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r9,r10,0,23,18
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE1FF) | (ctx.r9.u64 & 0x1E00);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// bne cr6,0x8231bce4
	if (!ctx.cr6.eq) goto loc_8231BCE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// b 0x8231bce8
	goto loc_8231BCE8;
loc_8231BCE4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8231BCE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bd08
	if (!ctx.cr6.eq) goto loc_8231BD08;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,30,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3;
	// b 0x8231bd0c
	goto loc_8231BD0C;
loc_8231BD08:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BD0C:
	// rlwimi r10,r9,2,28,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF3);
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bd28
	if (!ctx.cr6.eq) goto loc_8231BD28;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x3;
	// b 0x8231bd2c
	goto loc_8231BD2C;
loc_8231BD28:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BD2C:
	// rlwimi r10,r9,4,26,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x30) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFCF);
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8231bd48
	if (!ctx.cr6.eq) goto loc_8231BD48;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r9,26,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// b 0x8231bd4c
	goto loc_8231BD4C;
loc_8231BD48:
	// li r9,0
	ctx.r9.s64 = 0;
loc_8231BD4C:
	// rlwimi r10,r9,6,24,25
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xC0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF3F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bd70
	if (ctx.cr0.eq) goto loc_8231BD70;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BD70:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r10,r9,0,9,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r10.u64 & 0x800000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r9,r10,0,10,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r9.u64 & 0x400000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bdc4
	if (ctx.cr0.eq) goto loc_8231BDC4;
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BDC4:
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231bddc
	if (ctx.cr0.eq) goto loc_8231BDDC;
	// lwz r10,40(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231BDDC:
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,0,16,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r9.u64 & 0x3F0000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r9,r10,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwimi r9,r10,0,10,8
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r9.u64 & 0x400000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231be34
	if (ctx.cr0.eq) goto loc_8231BE34;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231BE34:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231be4c
	if (ctx.cr0.eq) goto loc_8231BE4C;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231BE4C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8231bc6c
	if (ctx.cr6.lt) goto loc_8231BC6C;
loc_8231BE58:
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

DEFINE_REX_FUNC(sub_82328968) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82328970;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,22176
	ctx.r29.s64 = ctx.r10.s64 + 22176;
	// bne cr6,0x823289ac
	if (!ctx.cr6.eq) goto loc_823289AC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,203
	ctx.r7.s64 = 203;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823289AC;
	sub_82260F30(ctx, base);
loc_823289AC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x823289d4
	if (ctx.cr6.gt) goto loc_823289D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,22152
	ctx.r5.s64 = ctx.r11.s64 + 22152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,204
	ctx.r7.s64 = 204;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823289D4;
	sub_82260F30(ctx, base);
loc_823289D4:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne 0x82328a84
	if (!ctx.cr0.eq) goto loc_82328A84;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328a04
	if (ctx.cr6.eq) goto loc_82328A04;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328A04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328A04:
	// lwz r4,60(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328a20
	if (ctx.cr6.eq) goto loc_82328A20;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328A20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328A20:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82328a30
	if (ctx.cr6.eq) goto loc_82328A30;
	// bl 0x82266538
	ctx.lr = 0x82328A30;
	sub_82266538(ctx, base);
loc_82328A30:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82328a40
	if (ctx.cr6.eq) goto loc_82328A40;
	// bl 0x82266538
	ctx.lr = 0x82328A40;
	sub_82266538(ctx, base);
loc_82328A40:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
	// li r29,6
	ctx.r29.s64 = 6;
loc_82328A48:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82328a64
	if (ctx.cr6.eq) goto loc_82328A64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328A64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328A64:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82328a48
	if (!ctx.cr0.eq) goto loc_82328A48;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82328A84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82328A84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232A548) {
	REX_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8232a564
	if (ctx.cr6.lt) goto loc_8232A564;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8232a568
	if (!ctx.cr6.gt) goto loc_8232A568;
loc_8232A564:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232A568:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232a5b8
	if (!ctx.cr0.eq) goto loc_8232A5B8;
	// rlwinm. r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a580
	if (ctx.cr0.eq) goto loc_8232A580;
loc_8232A578:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8232A580:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8232a59c
	if (ctx.cr6.eq) goto loc_8232A59C;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232a5a0
	if (!ctx.cr6.eq) goto loc_8232A5A0;
loc_8232A59C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232A5A0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_8232A5A4:
	// bne 0x8232a578
	if (!ctx.cr0.eq) goto loc_8232A578;
loc_8232A5A8:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8232a6a0
	goto loc_8232A6A0;
loc_8232A5B8:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8232a5d4
	if (ctx.cr6.eq) goto loc_8232A5D4;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232a5d8
	if (!ctx.cr6.eq) goto loc_8232A5D8;
loc_8232A5D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232A5D8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a690
	if (ctx.cr0.eq) goto loc_8232A690;
	// rlwinm r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8232a5a8
	if (!ctx.cr6.gt) goto loc_8232A5A8;
	// lwz r8,44(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r9,48(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,12(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8232a618
	if (ctx.cr6.eq) goto loc_8232A618;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232a61c
	if (!ctx.cr6.eq) goto loc_8232A61C;
loc_8232A618:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232A61C:
	// lwz r3,12(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8232a640
	if (ctx.cr6.eq) goto loc_8232A640;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8232a644
	if (!ctx.cr6.eq) goto loc_8232A644;
loc_8232A640:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232A644:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8232a668
	if (ctx.cr0.eq) goto loc_8232A668;
	// clrlwi. r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232a668
	if (ctx.cr0.eq) goto loc_8232A668;
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// xor r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// rlwinm. r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8232a578
	if (!ctx.cr0.eq) goto loc_8232A578;
loc_8232A668:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8232a678
	if (!ctx.cr6.eq) goto loc_8232A678;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a5a8
	if (ctx.cr0.eq) goto loc_8232A5A8;
loc_8232A678:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r11,31,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xFF;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8232a5a4
	goto loc_8232A5A4;
loc_8232A690:
	// rlwinm. r11,r7,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// b 0x8232a5a4
	goto loc_8232A5A4;
loc_8232A698:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8232A6A0:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8232a698
	if (!ctx.cr6.eq) goto loc_8232A698;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r4,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r11,r6,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r7,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r5,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r5.u32);
	// stw r11,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232F1E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8232F1E8;
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
	// li r6,59
	ctx.r6.s64 = 59;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x8232F20C;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232f230
	if (ctx.cr6.eq) goto loc_8232F230;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x8232F22C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8232F230:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x8232F238;
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

DEFINE_REX_FUNC(sub_8232F7E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8232F7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232f820
	if (ctx.cr0.eq) goto loc_8232F820;
	// rlwinm. r10,r5,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232f820
	if (ctx.cr0.eq) goto loc_8232F820;
loc_8232F818:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8232f848
	goto loc_8232F848;
loc_8232F820:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232f830
	if (ctx.cr0.eq) goto loc_8232F830;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8232f818
	if (!ctx.cr0.eq) goto loc_8232F818;
loc_8232F830:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232f844
	if (ctx.cr0.eq) goto loc_8232F844;
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne 0x8232f848
	if (!ctx.cr0.eq) goto loc_8232F848;
loc_8232F844:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8232F848:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232f880
	if (!ctx.cr0.eq) goto loc_8232F880;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822f72c8
	ctx.lr = 0x8232F860;
	sub_822F72C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281260
	ctx.lr = 0x8232F86C;
	sub_82281260(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r10,r11,0,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_8232F880:
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// rlwinm. r8,r10,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// beq 0x8232f8a0
	if (ctx.cr0.eq) goto loc_8232F8A0;
	// rlwinm. r8,r30,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232f8a0
	if (ctx.cr0.eq) goto loc_8232F8A0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_8232F8A0:
	// and r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 & ctx.r30.u64;
	// rlwinm. r8,r8,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232f8b4
	if (ctx.cr0.eq) goto loc_8232F8B4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
loc_8232F8B4:
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232f8c8
	if (ctx.cr0.eq) goto loc_8232F8C8;
	// rlwinm. r8,r9,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8232f8c8
	if (ctx.cr0.eq) goto loc_8232F8C8;
	// addi r9,r9,-2
	ctx.r9.s64 = ctx.r9.s64 + -2;
loc_8232F8C8:
	// rlwinm r7,r10,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r5,r10,7,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x7;
	// or r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 | ctx.r9.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232b290
	ctx.lr = 0x8232F8E0;
	sub_8232B290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82333AD8) {
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
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lfs f0,2104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// or r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x82330080
	ctx.lr = 0x82333B34;
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

DEFINE_REX_FUNC(sub_823348B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x823348B8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,117
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 117, ctx.xer);
	// beq cr6,0x82334a68
	if (ctx.cr6.eq) goto loc_82334A68;
	// rlwinm r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	// clrlwi r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823349e4
	if (!ctx.cr6.eq) goto loc_823349E4;
	// cmpwi cr6,r10,87
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 87, ctx.xer);
	// beq cr6,0x8233496c
	if (ctx.cr6.eq) goto loc_8233496C;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// beq cr6,0x82334908
	if (ctx.cr6.eq) goto loc_82334908;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,10092
	ctx.r5.s64 = ctx.r11.s64 + 10092;
	// bl 0x8225b1a0
	ctx.lr = 0x82334908;
	sub_8225B1A0(ctx, base);
loc_82334908:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8233491C;
	sub_8226D728(ctx, base);
	// lwz r27,28(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// addi r28,r27,12
	ctx.r28.s64 = ctx.r27.s64 + 12;
	// lwz r29,12(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwzx r26,r3,r11
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
loc_82334930:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82334a3c
	if (ctx.cr6.eq) goto loc_82334A3C;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82334954
	if (ctx.cr6.eq) goto loc_82334954;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7c90
	ctx.lr = 0x82334950;
	sub_822C7C90(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82334954:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82334964
	if (!ctx.cr6.eq) goto loc_82334964;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
loc_82334964:
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82334930
	goto loc_82334930;
loc_8233496C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x82334980;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwzx r28,r3,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334408
	ctx.lr = 0x823349A0;
	sub_82334408(ctx, base);
	// addi r5,r29,32
	ctx.r5.s64 = ctx.r29.s64 + 32;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,86
	ctx.r6.s64 = 86;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x823349BC;
	sub_8232D9E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x823349D8;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// stwx r28,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r28.u32);
	// b 0x82334a50
	goto loc_82334A50;
loc_823349E4:
	// cmpwi cr6,r10,85
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 85, ctx.xer);
	// beq cr6,0x82334a68
	if (ctx.cr6.eq) goto loc_82334A68;
	// cmpwi cr6,r10,87
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 87, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// beq cr6,0x82334a58
	if (ctx.cr6.eq) goto loc_82334A58;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// beq cr6,0x82334a10
	if (ctx.cr6.eq) goto loc_82334A10;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,10092
	ctx.r5.s64 = ctx.r11.s64 + 10092;
	// bl 0x8225b1a0
	ctx.lr = 0x82334A10;
	sub_8225B1A0(ctx, base);
loc_82334A10:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x82334A24;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwzx r5,r3,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c7c90
	ctx.lr = 0x82334A38;
	sub_822C7C90(ctx, base);
	// li r25,1
	ctx.r25.s64 = 1;
loc_82334A3C:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82334408
	ctx.lr = 0x82334A50;
	sub_82334408(ctx, base);
loc_82334A50:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82334a6c
	goto loc_82334A6C;
loc_82334A58:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,23096
	ctx.r5.s64 = ctx.r11.s64 + 23096;
	// bl 0x8225b1a0
	ctx.lr = 0x82334A68;
	sub_8225B1A0(ctx, base);
loc_82334A68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82334A6C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82339398) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x823393A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82266b60
	ctx.lr = 0x823393C0;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82339428
	if (!ctx.cr6.eq) goto loc_82339428;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823393e4
	if (ctx.cr6.eq) goto loc_823393E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x823393E4;
	sub_82266EC0(ctx, base);
loc_823393E4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339420
	if (ctx.cr6.eq) goto loc_82339420;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339420
	if (ctx.cr6.eq) goto loc_82339420;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bctrl 
	ctx.lr = 0x82339420;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339420:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339484
	goto loc_82339484;
loc_82339428:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339444
	if (ctx.cr6.eq) goto loc_82339444;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339444;
	sub_82266EC0(ctx, base);
loc_82339444:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339480
	if (ctx.cr6.eq) goto loc_82339480;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339480
	if (ctx.cr6.eq) goto loc_82339480;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27752
	ctx.r4.s64 = ctx.r10.s64 + 27752;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bctrl 
	ctx.lr = 0x82339480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339480:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233A410) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8233A418;
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
	// bne cr6,0x8233a454
	if (!ctx.cr6.eq) goto loc_8233A454;
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
	// li r7,1828
	ctx.r7.s64 = 1828;
	// bl 0x82260f30
	ctx.lr = 0x8233A454;
	sub_82260F30(ctx, base);
loc_8233A454:
	// li r4,582
	ctx.r4.s64 = 582;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233A460;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233a4c4
	if (!ctx.cr6.eq) goto loc_8233A4C4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233a484
	if (ctx.cr6.eq) goto loc_8233A484;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A484;
	sub_82266EC0(ctx, base);
loc_8233A484:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233a4bc
	if (ctx.cr6.eq) goto loc_8233A4BC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233a4bc
	if (ctx.cr6.eq) goto loc_8233A4BC;
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
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// bctrl 
	ctx.lr = 0x8233A4BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A4BC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233a51c
	goto loc_8233A51C;
loc_8233A4C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233a4e0
	if (ctx.cr6.eq) goto loc_8233A4E0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233A4E0;
	sub_82266EC0(ctx, base);
loc_8233A4E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233a518
	if (ctx.cr6.eq) goto loc_8233A518;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233a518
	if (ctx.cr6.eq) goto loc_8233A518;
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
	// li r6,38
	ctx.r6.s64 = 38;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,152(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// bctrl 
	ctx.lr = 0x8233A518;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233A518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233A51C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233C308) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,27992(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 27992);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233C410) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,28000(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 28000);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233C620) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233C628;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c668
	if (!ctx.cr6.eq) goto loc_8233C668;
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
	// li r7,3620
	ctx.r7.s64 = 3620;
	// bl 0x82260f30
	ctx.lr = 0x8233C668;
	sub_82260F30(ctx, base);
loc_8233C668:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823188f8
	ctx.lr = 0x8233C678;
	sub_823188F8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233c6c0
	if (ctx.cr6.eq) goto loc_8233C6C0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233c6c0
	if (ctx.cr6.eq) goto loc_8233C6C0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82338ea0
	ctx.lr = 0x8233C694;
	sub_82338EA0(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,28004
	ctx.r4.s64 = ctx.r10.s64 + 28004;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,11
	ctx.r6.s64 = 11;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bctrl 
	ctx.lr = 0x8233C6C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233C6C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233DB98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8233DBA0;
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
	// bne cr6,0x8233dbec
	if (!ctx.cr6.eq) goto loc_8233DBEC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-13816
	ctx.r5.s64 = ctx.r11.s64 + -13816;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DBEC;
	sub_82260F30(ctx, base);
loc_8233DBEC:
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// blt cr6,0x8233dc10
	if (ctx.cr6.lt) goto loc_8233DC10;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,28324
	ctx.r5.s64 = ctx.r11.s64 + 28324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,678
	ctx.r7.s64 = 678;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DC10;
	sub_82260F30(ctx, base);
loc_8233DC10:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8233dc34
	if (!ctx.cr6.lt) goto loc_8233DC34;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,28312
	ctx.r5.s64 = ctx.r11.s64 + 28312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,679
	ctx.r7.s64 = 679;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233DC34;
	sub_82260F30(ctx, base);
loc_8233DC34:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233DC40;
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
	ctx.lr = 0x8233DC54;
	sub_82266B60(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233dcc4
	if (!ctx.cr6.eq) goto loc_8233DCC4;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bne cr6,0x8233dcc4
	if (!ctx.cr6.eq) goto loc_8233DCC4;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233dc80
	if (ctx.cr6.eq) goto loc_8233DC80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233DC80;
	sub_82266EC0(ctx, base);
loc_8233DC80:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233dcbc
	if (ctx.cr6.eq) goto loc_8233DCBC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233dcbc
	if (ctx.cr6.eq) goto loc_8233DCBC;
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
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bctrl 
	ctx.lr = 0x8233DCBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DCBC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233dd20
	goto loc_8233DD20;
loc_8233DCC4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233dce0
	if (ctx.cr6.eq) goto loc_8233DCE0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233DCE0;
	sub_82266EC0(ctx, base);
loc_8233DCE0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8233dd1c
	if (ctx.cr6.eq) goto loc_8233DD1C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8233dd1c
	if (ctx.cr6.eq) goto loc_8233DD1C;
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
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bctrl 
	ctx.lr = 0x8233DD1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233DD1C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233DD20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82342CD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82342CD8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233f520
	ctx.lr = 0x82342CE4;
	sub_8233F520(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8234e8f8
	ctx.lr = 0x82342D04;
	sub_8234E8F8(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,1508(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 1508);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// stw r5,1508(r10)
	REX_STORE_U32(ctx.r10.u32 + 1508, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 172);
	// bl 0x8234e8f8
	ctx.lr = 0x82342D24;
	sub_8234E8F8(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x823624a0
	ctx.lr = 0x82342D2C;
	sub_823624A0(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r24,r11,-14148
	ctx.r24.s64 = ctx.r11.s64 + -14148;
	// addi r23,r10,31816
	ctx.r23.s64 = ctx.r10.s64 + 31816;
	// beq cr6,0x82342d60
	if (ctx.cr6.eq) goto loc_82342D60;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,32292
	ctx.r5.s64 = ctx.r11.s64 + 32292;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1083
	ctx.r7.s64 = 1083;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82342D60;
	sub_82260F30(ctx, base);
loc_82342D60:
	// lwz r22,168(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,60(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82342D7C:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82342d8c
	if (!ctx.cr6.gt) goto loc_82342D8C;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82342d98
	goto loc_82342D98;
loc_82342D8C:
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
loc_82342D98:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82342db0
	if (ctx.cr0.eq) goto loc_82342DB0;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82342d7c
	goto loc_82342D7C;
loc_82342DB0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82342DBC;
	sub_8235EED0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x82342DCC;
	sub_8235F338(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,168(r30)
	REX_STORE_U32(ctx.r30.u32 + 168, ctx.r11.u32);
loc_82342DD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82342dd8
	if (ctx.cr6.lt) goto loc_82342DD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82342E10;
	sub_8233F698(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r29,1452(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325520
	ctx.lr = 0x82342E24;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82342e50
	if (ctx.cr0.eq) goto loc_82342E50;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82362fc0
	ctx.lr = 0x82342E48;
	sub_82362FC0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82342e54
	goto loc_82342E54;
loc_82342E50:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82342E54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82342E5C;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82342e80
	if (!ctx.cr0.eq) goto loc_82342E80;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,32636
	ctx.r5.s64 = ctx.r11.s64 + 32636;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82342E80;
	sub_82260F30(ctx, base);
loc_82342E80:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r27,144(r29)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82342E90;
	sub_8235EED0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x82342EA0;
	sub_8235F338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342EC0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342EE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342F00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342F20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f338
	ctx.lr = 0x82342F30;
	sub_8235F338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x82342F50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x82342F70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x823253e8
	ctx.lr = 0x82342F78;
	sub_823253E8(ctx, base);
	// stw r3,172(r30)
	REX_STORE_U32(ctx.r30.u32 + 172, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82342F88;
	sub_8233F698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361f18
	ctx.lr = 0x82342F94;
	sub_82361F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82342F9C;
	sub_8235EF60(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,32616
	ctx.r26.s64 = ctx.r11.s64 + 32616;
	// bne 0x82342fc4
	if (!ctx.cr0.eq) goto loc_82342FC4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1121
	ctx.r7.s64 = 1121;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82342FC4;
	sub_82260F30(ctx, base);
loc_82342FC4:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82342FD0;
	sub_8235EED0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x82342FF0;
	sub_8235F338(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82342FFC;
	sub_8233F698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361f18
	ctx.lr = 0x82343008;
	sub_82361F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82343010;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343030
	if (!ctx.cr0.eq) goto loc_82343030;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1129
	ctx.r7.s64 = 1129;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82343030;
	sub_82260F30(ctx, base);
loc_82343030:
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,32(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8235eed0
	ctx.lr = 0x82343044;
	sub_8235EED0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x82343054;
	sub_8235F338(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343074;
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
	ctx.lr = 0x82343094;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	ctx.lr = 0x823430B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823430D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8235f338
	ctx.lr = 0x823430E4;
	sub_8235F338(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235f338
	ctx.lr = 0x823430F4;
	sub_8235F338(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_823430F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82343138;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x823430f8
	if (ctx.cr6.lt) goto loc_823430F8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82343150;
	sub_8233F698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82361f18
	ctx.lr = 0x8234315C;
	sub_82361F18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82343164;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82343184
	if (!ctx.cr0.eq) goto loc_82343184;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82343184;
	sub_82260F30(ctx, base);
loc_82343184:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,1452(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82343198;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x823431b8
	if (ctx.cr0.eq) goto loc_823431B8;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82362138
	ctx.lr = 0x823431B0;
	sub_82362138(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823431bc
	goto loc_823431BC;
loc_823431B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823431BC:
	// stw r30,148(r29)
	REX_STORE_U32(ctx.r29.u32 + 148, ctx.r30.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82362918
	ctx.lr = 0x823431CC;
	sub_82362918(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r28,152(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 152);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82362918
	ctx.lr = 0x823431DC;
	sub_82362918(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362918
	ctx.lr = 0x823431E8;
	sub_82362918(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82362e48
	ctx.lr = 0x823431FC;
	sub_82362E48(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ed48
	ctx.lr = 0x8234320C;
	sub_8233ED48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ed48
	ctx.lr = 0x8234321C;
	sub_8233ED48(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ed48
	ctx.lr = 0x8234322C;
	sub_8233ED48(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233ed48
	ctx.lr = 0x8234323C;
	sub_8233ED48(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234E7A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8234E7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8235d170
	ctx.lr = 0x8234E7C4;
	sub_8235D170(ctx, base);
	// b 0x8234e7e4
	goto loc_8234E7E4;
loc_8234E7C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234E7DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8235d0b8
	ctx.lr = 0x8234E7E4;
	sub_8235D0B8(ctx, base);
loc_8234E7E4:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bne cr6,0x8234e7c8
	if (!ctx.cr6.eq) goto loc_8234E7C8;
	// lwz r31,4(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8234e814
	if (ctx.cr6.eq) goto loc_8234E814;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235d048
	ctx.lr = 0x8234E808;
	sub_8235D048(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8234E814;
	sub_823256A8(ctx, base);
loc_8234E814:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r29,1452(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325520
	ctx.lr = 0x8234E828;
	sub_82325520(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// beq 0x8234e85c
	if (ctx.cr0.eq) goto loc_8234E85C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,-8424
	ctx.r6.s64 = ctx.r10.s64 + -8424;
	// addi r5,r9,-8408
	ctx.r5.s64 = ctx.r9.s64 + -8408;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8234de88
	ctx.lr = 0x8234E858;
	sub_8234DE88(ctx, base);
	// b 0x8234e860
	goto loc_8234E860;
loc_8234E85C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8234E860:
	// stw r31,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82350FD0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82350FD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x823507e8
	ctx.lr = 0x82350FE4;
	sub_823507E8(ctx, base);
	// lwz r9,2080(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 2080);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// li r18,0
	ctx.r18.s64 = 0;
	// addi r16,r9,1
	ctx.r16.s64 = ctx.r9.s64 + 1;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,1524(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 1524);
	// stw r18,-31940(r11)
	REX_STORE_U32(ctx.r11.u32 + -31940, ctx.r18.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r9,1
	ctx.r6.s64 = ctx.r9.s64 + 1;
	// add r24,r16,r6
	ctx.r24.u64 = ctx.r16.u64 + ctx.r6.u64;
	// lwz r10,2136(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 2136);
	// rlwinm. r10,r10,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82351040
	if (ctx.cr0.eq) goto loc_82351040;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82351040
	if (!ctx.cr6.eq) goto loc_82351040;
	// stw r18,-31940(r11)
	REX_STORE_U32(ctx.r11.u32 + -31940, ctx.r18.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r4,r9,-28952
	ctx.r4.s64 = ctx.r9.s64 + -28952;
	// bl 0x82113c30
	ctx.lr = 0x8235103C;
	sub_82113C30(ctx, base);
	// b 0x82351690
	goto loc_82351690;
loc_82351040:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r8,136(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// addi r7,r11,4136
	ctx.r7.s64 = ctx.r11.s64 + 4136;
	// stw r7,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// b 0x823510d8
	goto loc_823510D8;
loc_82351054:
	// lwz r11,28(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// b 0x823510c8
	goto loc_823510C8;
loc_8235105C:
	// lwz r9,228(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823510c4
	if (ctx.cr0.eq) goto loc_823510C4;
	// rlwinm. r10,r9,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823510c4
	if (!ctx.cr0.eq) goto loc_823510C4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823510a0
	if (ctx.cr6.eq) goto loc_823510A0;
	// rlwinm. r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823510a0
	if (!ctx.cr0.eq) goto loc_823510A0;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r5.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x823510a4
	if (!ctx.cr0.eq) goto loc_823510A4;
loc_823510A0:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_823510A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823510c4
	if (ctx.cr0.eq) goto loc_823510C4;
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// ori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 | 128;
	// stw r18,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r18.u32);
	// add r10,r10,r16
	ctx.r10.u64 = ctx.r10.u64 + ctx.r16.u64;
	// stw r9,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r9.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
loc_823510C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823510C8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8235105c
	if (!ctx.cr6.eq) goto loc_8235105C;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
loc_823510D8:
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82351054
	if (!ctx.cr6.eq) goto loc_82351054;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addi r4,r11,-29032
	ctx.r4.s64 = ctx.r11.s64 + -29032;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bl 0x82113c30
	ctx.lr = 0x823510FC;
	sub_82113C30(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c6a8
	ctx.lr = 0x82351108;
	sub_8236C6A8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x8235111C;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x82351144
	if (ctx.cr0.eq) goto loc_82351144;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x8236d5d8
	ctx.lr = 0x8235113C;
	sub_8236D5D8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82351148
	goto loc_82351148;
loc_82351144:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82351148:
	// stw r11,2064(r31)
	REX_STORE_U32(ctx.r31.u32 + 2064, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// stw r18,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r18.u32);
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r17,r18
	ctx.r17.u64 = ctx.r18.u64;
	// mr r14,r18
	ctx.r14.u64 = ctx.r18.u64;
	// mr r20,r18
	ctx.r20.u64 = ctx.r18.u64;
	// bl 0x8233f3c0
	ctx.lr = 0x8235116C;
	sub_8233F3C0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r19,r31,128
	ctx.r19.s64 = ctx.r31.s64 + 128;
loc_82351174:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r18,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r18.u32);
	// lwz r10,1492(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1492);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1492(r11)
	REX_STORE_U32(ctx.r11.u32 + 1492, ctx.r10.u32);
	// ble cr6,0x823511a4
	if (!ctx.cr6.gt) goto loc_823511A4;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236da40
	ctx.lr = 0x8235119C;
	sub_8236DA40(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236d2d8
	ctx.lr = 0x823511A4;
	sub_8236D2D8(ctx, base);
loc_823511A4:
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r4,2064(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82350960
	ctx.lr = 0x823511BC;
	sub_82350960(ctx, base);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r26,r18
	ctx.r26.u64 = ctx.r18.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// bl 0x8235c8c8
	ctx.lr = 0x823511CC;
	sub_8235C8C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8235157c
	if (!ctx.cr0.gt) goto loc_8235157C;
	// mr r22,r15
	ctx.r22.u64 = ctx.r15.u64;
loc_823511D8:
	// lwz r23,0(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r25,28(r23)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// b 0x82351558
	goto loc_82351558;
loc_823511E8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82351548
	if (ctx.cr0.eq) goto loc_82351548;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_823511F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351548
	if (!ctx.cr0.eq) goto loc_82351548;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82351528
	if (ctx.cr0.eq) goto loc_82351528;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82351220;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82351528
	if (!ctx.cr0.eq) goto loc_82351528;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82351428
	if (ctx.cr0.eq) goto loc_82351428;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236d0f8
	ctx.lr = 0x82351244;
	sub_8236D0F8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8233eea8
	ctx.lr = 0x82351250;
	sub_8233EEA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x8236d0f8
	ctx.lr = 0x82351264;
	sub_8236D0F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82351528
	if (ctx.cr6.eq) goto loc_82351528;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823513f4
	if (ctx.cr0.eq) goto loc_823513F4;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823513f4
	if (ctx.cr0.eq) goto loc_823513F4;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// bl 0x8235eed0
	ctx.lr = 0x82351298;
	sub_8235EED0(ctx, base);
	// stw r24,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r24.u32);
	// stw r18,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r18.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8233f040
	ctx.lr = 0x823512B0;
	sub_8233F040(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ori r11,r11,2176
	ctx.r11.u64 = ctx.r11.u64 | 2176;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r11,228(r30)
	REX_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82362008
	ctx.lr = 0x823512CC;
	sub_82362008(ctx, base);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// beq 0x823512f0
	if (ctx.cr0.eq) goto loc_823512F0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u32);
	// b 0x82351310
	goto loc_82351310;
loc_823512F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r11,58
	ctx.r10.s64 = ctx.r11.s64 + 58;
	// stw r11,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r28
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r30.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// stw r11,228(r28)
	REX_STORE_U32(ctx.r28.u32 + 228, ctx.r11.u32);
loc_82351310:
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// bl 0x8236d780
	ctx.lr = 0x8235131C;
	sub_8236D780(ctx, base);
	// lwz r29,136(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x82351388
	goto loc_82351388;
loc_82351324:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,104(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// bl 0x823506c8
	ctx.lr = 0x82351330;
	sub_823506C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351384
	if (!ctx.cr0.eq) goto loc_82351384;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r30,104(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 104);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233fa30
	ctx.lr = 0x8235134C;
	sub_8233FA30(ctx, base);
	// stw r3,104(r29)
	REX_STORE_U32(ctx.r29.u32 + 104, ctx.r3.u32);
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82351384
	if (!ctx.cr6.gt) goto loc_82351384;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// subf r9,r3,r30
	ctx.r9.u64 = ctx.r30.u64 - ctx.r3.u64;
loc_82351368:
	// lwzx r8,r9,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82351368
	if (ctx.cr6.lt) goto loc_82351368;
loc_82351384:
	// lwz r29,8(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_82351388:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82351324
	if (!ctx.cr6.eq) goto loc_82351324;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82351528
	if (!ctx.cr6.gt) goto loc_82351528;
loc_823513A0:
	// rlwinm r11,r30,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,104(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 104);
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823513e4
	if (ctx.cr0.eq) goto loc_823513E4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236d0f8
	ctx.lr = 0x823513D4;
	sub_8236D0F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236d8f0
	ctx.lr = 0x823513E4;
	sub_8236D8F0(ctx, base);
loc_823513E4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x823513a0
	if (ctx.cr6.lt) goto loc_823513A0;
	// b 0x82351528
	goto loc_82351528;
loc_823513F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236dab0
	ctx.lr = 0x82351400;
	sub_8236DAB0(ctx, base);
	// clrlwi r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8235141c
	if (ctx.cr0.eq) goto loc_8235141C;
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// b 0x82351528
	goto loc_82351528;
loc_8235141C:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82351528
	goto loc_82351528;
loc_82351428:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234a7e8
	ctx.lr = 0x82351430;
	sub_8234A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82351528
	if (ctx.cr0.eq) goto loc_82351528;
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// rlwinm. r11,r11,21,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82351528
	if (!ctx.cr0.eq) goto loc_82351528;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,56(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236d0f8
	ctx.lr = 0x82351454;
	sub_8236D0F8(ctx, base);
	// lwz r11,236(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 236);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82351494
	if (ctx.cr6.eq) goto loc_82351494;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82351494
	if (!ctx.cr0.eq) goto loc_82351494;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r9,88(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lbzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82351498
	if (!ctx.cr0.eq) goto loc_82351498;
loc_82351494:
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
loc_82351498:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82351528
	if (ctx.cr0.eq) goto loc_82351528;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,56(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236d0f8
	ctx.lr = 0x823514B0;
	sub_8236D0F8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r11,2712(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x823514d8
	if (!ctx.cr6.gt) goto loc_823514D8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236dab0
	ctx.lr = 0x823514D8;
	sub_8236DAB0(ctx, base);
loc_823514D8:
	// clrlwi r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82351510
	if (ctx.cr0.eq) goto loc_82351510;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235150C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82351528
	goto loc_82351528;
loc_82351510:
	// cmpw cr6,r29,r16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r16.s32, ctx.xer);
	// blt cr6,0x82351528
	if (ctx.cr6.lt) goto loc_82351528;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8236d6f8
	ctx.lr = 0x82351528;
	sub_8236D6F8(ctx, base);
loc_82351528:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// lwz r28,8(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// bne cr6,0x823511f8
	if (!ctx.cr6.eq) goto loc_823511F8;
loc_82351548:
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 228);
	// lwz r25,8(r25)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
loc_82351558:
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x823511e8
	if (!ctx.cr6.eq) goto loc_823511E8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// bl 0x8235c8c8
	ctx.lr = 0x82351574;
	sub_8235C8C8(ctx, base);
	// cmpw cr6,r21,r3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x823511d8
	if (ctx.cr6.lt) goto loc_823511D8;
loc_8235157C:
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// beq 0x82351598
	if (ctx.cr0.eq) goto loc_82351598;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,2712(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2712);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82351174
	if (ctx.cr6.lt) goto loc_82351174;
loc_82351598:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bgt cr6,0x823515b0
	if (ctx.cr6.gt) goto loc_823515B0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x823515b0
	if (ctx.cr6.gt) goto loc_823515B0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823515f4
	if (ctx.cr6.eq) goto loc_823515F4;
loc_823515B0:
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x823515d8
	if (!ctx.cr6.gt) goto loc_823515D8;
loc_823515BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8236d0f8
	ctx.lr = 0x823515CC;
	sub_8236D0F8(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r24
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x823515bc
	if (ctx.cr6.lt) goto loc_823515BC;
loc_823515D8:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x823515f4
	if (ctx.cr6.eq) goto loc_823515F4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// addi r4,r11,-29112
	ctx.r4.s64 = ctx.r11.s64 + -29112;
	// bl 0x82113c30
	ctx.lr = 0x823515F4;
	sub_82113C30(ctx, base);
loc_823515F4:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82351604
	if (!ctx.cr6.eq) goto loc_82351604;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8235161c
	if (ctx.cr6.eq) goto loc_8235161C;
loc_82351604:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r6,r27,r14
	ctx.r6.u64 = ctx.r27.u64 + ctx.r14.u64;
	// addi r4,r11,-29176
	ctx.r4.s64 = ctx.r11.s64 + -29176;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// bl 0x82113c30
	ctx.lr = 0x8235161C;
	sub_82113C30(ctx, base);
loc_8235161C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x8235163c
	if (!ctx.cr6.gt) goto loc_8235163C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// addi r4,r11,-29236
	ctx.r4.s64 = ctx.r11.s64 + -29236;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82113c30
	ctx.lr = 0x8235163C;
	sub_82113C30(ctx, base);
loc_8235163C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,2736(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// bl 0x8236c550
	ctx.lr = 0x82351648;
	sub_8236C550(ctx, base);
	// lwz r3,2064(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// bl 0x8236dd20
	ctx.lr = 0x82351650;
	sub_8236DD20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823507e8
	ctx.lr = 0x82351658;
	sub_823507E8(ctx, base);
	// lwz r11,2080(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2080);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-29288
	ctx.r4.s64 = ctx.r10.s64 + -29288;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82113c30
	ctx.lr = 0x82351670;
	sub_82113C30(ctx, base);
	// lwz r31,2064(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 2064);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82351690
	if (ctx.cr6.eq) goto loc_82351690;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236e3c0
	ctx.lr = 0x82351684;
	sub_8236E3C0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// lwz r3,-4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x82351690;
	sub_823256A8(ctx, base);
loc_82351690:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235BC08) {
	REX_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235BE14) {
	REX_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x8235bd98
	// FATAL: unresolved function 0x8235BD98 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BE18 to 0x8235BD98");
	return;
}

DEFINE_REX_FUNC(sub_8235BFC8) {
	REX_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x8235bf34
	// FATAL: unresolved function 0x8235BF34 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BFCC to 0x8235BF34");
	return;
}

DEFINE_REX_FUNC(sub_82360BF0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82360BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,139
	ctx.r4.s64 = 139;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82360C14;
	sub_8235FD90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,168(r3)
	REX_STORE_U32(ctx.r3.u32 + 168, ctx.r30.u32);
	// addi r11,r11,-9784
	ctx.r11.s64 = ctx.r11.s64 + -9784;
	// stw r29,172(r3)
	REX_STORE_U32(ctx.r3.u32 + 172, ctx.r29.u32);
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82361268) {
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
	// lwz r30,1452(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 1452);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82361290;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x823612bc
	if (ctx.cr0.eq) goto loc_823612BC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,142
	ctx.r4.s64 = 142;
	// bl 0x82360670
	ctx.lr = 0x823612AC;
	sub_82360670(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-11064
	ctx.r11.s64 = ctx.r11.s64 + -11064;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823612c0
	goto loc_823612C0;
loc_823612BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823612C0:
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

DEFINE_REX_FUNC(sub_82362550) {
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
	// lwz r31,144(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// b 0x82362618
	goto loc_82362618;
loc_82362568:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82362620
	if (!ctx.cr6.gt) goto loc_82362620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236258C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362620
	if (!ctx.cr0.eq) goto loc_82362620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823625A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82362620
	if (!ctx.cr0.eq) goto loc_82362620;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823625C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823625d4
	if (ctx.cr0.eq) goto loc_823625D4;
	// lwz r31,156(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 156);
	// b 0x82362618
	goto loc_82362618;
loc_823625D4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823625E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823625f8
	if (ctx.cr0.eq) goto loc_823625F8;
	// lwz r31,152(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// b 0x82362618
	goto loc_82362618;
loc_823625F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82362610
	if (!ctx.cr6.gt) goto loc_82362610;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82362614
	goto loc_82362614;
loc_82362610:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82362614:
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_82362618:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82362568
	if (!ctx.cr6.eq) goto loc_82362568;
loc_82362620:
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

DEFINE_REX_FUNC(sub_8236CB08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236CB10;
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
	ctx.lr = 0x8236CB30;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8236cb54
	if (ctx.cr0.eq) goto loc_8236CB54;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235de60
	ctx.lr = 0x8236CB50;
	sub_8235DE60(ctx, base);
	// b 0x8236cb58
	goto loc_8236CB58;
loc_8236CB54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CB58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236CF80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236CF88;
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
	ctx.lr = 0x8236CFA8;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// beq 0x8236cfcc
	if (ctx.cr0.eq) goto loc_8236CFCC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235e0f0
	ctx.lr = 0x8236CFC8;
	sub_8235E0F0(ctx, base);
	// b 0x8236cfd0
	goto loc_8236CFD0;
loc_8236CFCC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236CFD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236DCB0) {
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
	// b 0x8236dce8
	goto loc_8236DCE8;
loc_8236DCC8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// beq 0x8236dce8
	if (ctx.cr0.eq) goto loc_8236DCE8;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8236DCE8;
	sub_823256A8(ctx, base);
loc_8236DCE8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236dcc8
	if (!ctx.cr6.eq) goto loc_8236DCC8;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236dd08
	if (ctx.cr6.eq) goto loc_8236DD08;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82348c88
	ctx.lr = 0x8236DD08;
	sub_82348C88(ctx, base);
loc_8236DD08:
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

DEFINE_REX_FUNC(sub_8236F450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236F458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,228(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,-5640
	ctx.r29.s64 = ctx.r11.s64 + -5640;
	// beq 0x8236f484
	if (ctx.cr0.eq) goto loc_8236F484;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8236f494
	goto loc_8236F494;
loc_8236F484:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
loc_8236F494:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f4ac
	if (!ctx.cr0.eq) goto loc_8236F4AC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,5112
	ctx.r11.s64 = ctx.r11.s64 + 5112;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x8236f4f0
	goto loc_8236F4F0;
loc_8236F4AC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F4C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236f4fc
	if (!ctx.cr0.eq) goto loc_8236F4FC;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,5112
	ctx.r11.s64 = ctx.r11.s64 + 5112;
	// beq 0x8236f4ec
	if (ctx.cr0.eq) goto loc_8236F4EC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8236f4f0
	goto loc_8236F4F0;
loc_8236F4EC:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8236F4F0:
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8236F4FC:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82370890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82370898;
	__savegprlr_28(ctx, base);
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x8215ec60
	ctx.lr = 0x823708D4;
	sub_8215EC60(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823708f4
	if (!ctx.cr6.eq) goto loc_823708F4;
loc_823708DC:
	// bl 0x82162980
	ctx.lr = 0x823708E0;
	sub_82162980(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8215ff48
	ctx.lr = 0x823708EC;
	sub_8215FF48(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82370984
	goto loc_82370984;
loc_823708F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82370904
	if (ctx.cr6.eq) goto loc_82370904;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823708dc
	if (ctx.cr6.eq) goto loc_823708DC;
loc_82370904:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bgt cr6,0x82370928
	if (ctx.cr6.gt) goto loc_82370928;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82370928:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82162bc8
	ctx.lr = 0x8237094C;
	sub_82162BC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82370980
	if (ctx.cr6.eq) goto loc_82370980;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82370974
	if (ctx.cr0.lt) goto loc_82370974;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stb r28,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x82370980
	goto loc_82370980;
loc_82370974:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82162738
	ctx.lr = 0x82370980;
	sub_82162738(ctx, base);
loc_82370980:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82370984:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374730) {
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
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r3,r11,21824
	ctx.r3.s64 = ctx.r11.s64 + 21824;
	// bl 0x820a61d0
	ctx.lr = 0x82374748;
	sub_820A61D0(ctx, base);
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// addi r3,r10,19480
	ctx.r3.s64 = ctx.r10.s64 + 19480;
	// bl 0x8215e5e0
	ctx.lr = 0x82374754;
	sub_8215E5E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374BA8) {
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
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r11,r11,-24708
	ctx.r11.s64 = ctx.r11.s64 + -24708;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82374f34
	ctx.lr = 0x82374BC4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32201
	ctx.r11.s64 = -2110324736;
	// addi r3,r11,19536
	ctx.r3.s64 = ctx.r11.s64 + 19536;
	// bl 0x8215e5e0
	ctx.lr = 0x82374BD0;
	sub_8215E5E0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

