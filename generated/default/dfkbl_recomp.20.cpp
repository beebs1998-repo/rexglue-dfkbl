#include "dfkbl_funcs.20.h"

DEFINE_REX_FUNC(sub_820913B8) {
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
	ctx.lr = 0x820913D0;
	sub_8209B8B8(ctx, base);
	// stw r31,6040(r3)
	REX_STORE_U32(ctx.r3.u32 + 6040, ctx.r31.u32);
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

DEFINE_REX_FUNC(sub_82091B60) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820960b0
	sub_820960B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091E88) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096698
	sub_82096698(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820920C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094fc0
	sub_82094FC0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092538) {
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
	// b 0x82095418
	sub_82095418(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820928D0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820971d0
	sub_820971D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092A80) {
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
	ctx.lr = 0x82092A98;
	sub_8209B8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8209afe8
	ctx.lr = 0x82092AA0;
	sub_8209AFE8(ctx, base);
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

DEFINE_REX_FUNC(sub_82094098) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820940A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 2359296;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r31,21888
	ctx.r31.s64 = ctx.r31.s64 + 21888;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209c020
	ctx.lr = 0x820940BC;
	sub_8209C020(ctx, base);
	// addis r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 1572864;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// bl 0x820a8800
	ctx.lr = 0x820940CC;
	sub_820A8800(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x820940e0
	if (!ctx.cr6.eq) goto loc_820940E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209bf80
	ctx.lr = 0x820940DC;
	sub_8209BF80(ctx, base);
	// b 0x820940e4
	goto loc_820940E4;
loc_820940E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_820940E4:
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// addis r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 1572864;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// addi r3,r3,3040
	ctx.r3.s64 = ctx.r3.s64 + 3040;
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// bl 0x820aede0
	ctx.lr = 0x82094104;
	sub_820AEDE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095CD0) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// b 0x820a8d40
	sub_820A8D40(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095D70) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,6480(r3)
	REX_STORE_U32(ctx.r3.u32 + 6480, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820960A8) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820961B8) {
	REX_FUNC_PROLOGUE();
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x820b6df0
	sub_820B6DF0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096238) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209d4e0
	sub_8209D4E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096368) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209e6d8
	sub_8209E6D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820965F0) {
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
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// bl 0x8209c128
	ctx.lr = 0x82096614;
	sub_8209C128(ctx, base);
	// mulli r11,r31,200
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(200));
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
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

DEFINE_REX_FUNC(sub_82098F30) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82098F38;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215eba4
	ctx.lr = 0x82098F40;
	__savefpr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// addi r3,r3,-7532
	ctx.r3.s64 = ctx.r3.s64 + -7532;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x820b3fd0
	ctx.lr = 0x82098F74;
	sub_820B3FD0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820990ec
	if (ctx.cr6.eq) goto loc_820990EC;
	// addi r27,r30,23704
	ctx.r27.s64 = ctx.r30.s64 + 23704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a6d70
	ctx.lr = 0x82098F90;
	sub_820A6D70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82098fb0
	if (!ctx.cr6.eq) goto loc_82098FB0;
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-18356
	ctx.r3.s64 = ctx.r3.s64 + -18356;
	// bl 0x820afb38
	ctx.lr = 0x82098FAC;
	sub_820AFB38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82098FB0:
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x820b3d20
	ctx.lr = 0x82098FC0;
	sub_820B3D20(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d210
	ctx.lr = 0x82098FCC;
	sub_8210D210(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a7140
	ctx.lr = 0x82098FD8;
	sub_820A7140(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f31,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82099008
	if (!ctx.cr6.eq) goto loc_82099008;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820a78e0
	ctx.lr = 0x82098FF8;
	sub_820A78E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// b 0x8209903c
	goto loc_8209903C;
loc_82099008:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
loc_8209903C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3d28
	ctx.lr = 0x82099044;
	sub_820B3D28(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,-30480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -30480);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x8209906c
	if (ctx.cr6.gt) goto loc_8209906C;
	// beq cr6,0x82099078
	if (ctx.cr6.eq) goto loc_82099078;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x82099078
	if (ctx.cr6.eq) goto loc_82099078;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// b 0x82099070
	goto loc_82099070;
loc_8209906C:
	// cmpwi cr6,r11,34
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 34, ctx.xer);
loc_82099070:
	// li r4,2
	ctx.r4.s64 = 2;
	// bne cr6,0x8209907c
	if (!ctx.cr6.eq) goto loc_8209907C;
loc_82099078:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8209907C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3d18
	ctx.lr = 0x82099084;
	sub_820B3D18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// fmr f3,f28
	ctx.f3.f64 = ctx.f28.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x820b3d68
	ctx.lr = 0x8209909C;
	sub_820B3D68(ctx, base);
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// fmr f3,f31
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f31.f64;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// bl 0x820b3db8
	ctx.lr = 0x820990D0;
	sub_820B3DB8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b3de0
	ctx.lr = 0x820990DC;
	sub_820B3DE0(ctx, base);
	// lis r4,-128
	ctx.r4.s64 = -8388608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32896
	ctx.r4.u64 = ctx.r4.u64 | 32896;
	// bl 0x820b3df8
	ctx.lr = 0x820990EC;
	sub_820B3DF8(ctx, base);
loc_820990EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8215ebf0
	ctx.lr = 0x820990FC;
	__restfpr_27(ctx, base);
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209F620) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,26088(r11)
	REX_STORE_U32(ctx.r11.u32 + 26088, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209F730) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8209f7d0
	if (ctx.cr6.eq) goto loc_8209F7D0;
	// addi r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 1;
	// bl 0x820a4d50
	ctx.lr = 0x8209F760;
	sub_820A4D50(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a2f48
	ctx.lr = 0x8209F76C;
	sub_820A2F48(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x820a5c18
	ctx.lr = 0x8209F778;
	sub_820A5C18(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8209F794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32190
	ctx.r9.s64 = -2109603840;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r8,-32190
	ctx.r8.s64 = -2109603840;
	// lis r7,-32190
	ctx.r7.s64 = -2109603840;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stw r11,26268(r9)
	REX_STORE_U32(ctx.r9.u32 + 26268, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,26292(r7)
	REX_STORE_U32(ctx.r7.u32 + 26292, ctx.r10.u32);
	// lfs f0,2104(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,26296(r8)
	REX_STORE_U32(ctx.r8.u32 + 26296, ctx.r11.u32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// stw r5,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r5.u32);
loc_8209F7D0:
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

DEFINE_REX_FUNC(sub_820A1030) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820A1038;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8215eb9c
	ctx.lr = 0x820A1040;
	__savefpr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32190
	ctx.r30.s64 = -2109603840;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,26272(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 26272);
	// lfs f28,4564(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4564);
	ctx.f28.f64 = double(temp.f32);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x820f1468
	ctx.lr = 0x820A1080;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820A1084;
	sub_820F21E8(ctx, base);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// lfs f13,4560(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4560);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,32
	ctx.r11.s64 = 2097152;
	// fsubs f10,f30,f13
	ctx.f10.f64 = double(float(ctx.f30.f64 - ctx.f13.f64));
	// lfs f0,4556(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f27,4552(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4552);
	ctx.f27.f64 = double(temp.f32);
	// lfs f0,4524(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4524);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f30,f31,f27
	ctx.f30.f64 = double(float(ctx.f31.f64 - ctx.f27.f64));
	// lfs f13,4548(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4548);
	ctx.f13.f64 = double(temp.f32);
	// fadds f9,f29,f0
	ctx.f9.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// ori r29,r11,8224
	ctx.r29.u64 = ctx.r11.u64 | 8224;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,9
	ctx.r6.s64 = 9;
	// fsubs f25,f10,f13
	ctx.f25.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f31,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// fctiwz f8,f11
	ctx.f8.s64 = std::isnan(ctx.f11.f64) ? int64_t(0x80000000U) : (ctx.f11.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f11.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r31,r5,128
	ctx.xer.ca = ctx.r5.u32 <= 128;
	ctx.r31.u64 = static_cast<uint64_t>(128) - ctx.r5.u64;
	// lfs f0,4544(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4544);
	ctx.f0.f64 = double(temp.f32);
	// li r3,36
	ctx.r3.s64 = 36;
	// rlwimi r7,r31,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmuls f29,f9,f0
	ctx.f29.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x82092160
	ctx.lr = 0x820A1114;
	sub_82092160(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lfs f26,4540(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4540);
	ctx.f26.f64 = double(temp.f32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A112C;
	sub_820B3E10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820924e8
	ctx.lr = 0x820A1138;
	sub_820924E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210d210
	ctx.lr = 0x820A1144;
	sub_8210D210(ctx, base);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// srawi r11,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 1;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// lfs f0,4536(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 4536);
	ctx.f0.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fadds f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 + ctx.f0.f64));
	// rlwimi r7,r10,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r3,36
	ctx.r3.s64 = 36;
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// bl 0x82092160
	ctx.lr = 0x820A1184;
	sub_82092160(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f2,4532(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4532);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b3e10
	ctx.lr = 0x820A1198;
	sub_820B3E10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820924e8
	ctx.lr = 0x820A11A4;
	sub_820924E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8210d210
	ctx.lr = 0x820A11B0;
	sub_8210D210(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// li r28,15
	ctx.r28.s64 = 15;
	// lfs f0,4528(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4528);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f25,f25,f0
	ctx.f25.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
loc_820A11C8:
	// lwz r11,26272(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 26272);
	// clrlwi r10,r11,29
	ctx.r10.u64 = ctx.r11.u32 & 0x7;
	// divw r11,r11,r27
	ctx.r11.u64 = uint32_t((ctx.r27.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r27.s32 == -1)) ? ctx.r11.s32 / ctx.r27.s32 : 0);
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// clrlwi r26,r9,28
	ctx.r26.u64 = ctx.r9.u32 & 0xF;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f12,f28
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// bl 0x820f1468
	ctx.lr = 0x820A11FC;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820A1200;
	sub_820F21E8(ctx, base);
	// rlwinm r7,r26,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// subfic r6,r26,15
	ctx.xer.ca = ctx.r26.u32 <= 15;
	ctx.r6.u64 = static_cast<uint64_t>(15) - ctx.r26.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mulli r4,r6,47
	ctx.r4.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(47));
	// fmr f2,f25
	ctx.f2.f64 = ctx.f25.f64;
	// std r5,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// divw r3,r4,r28
	ctx.r3.u64 = uint32_t((ctx.r28.s32 && !(ctx.r4.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r4.s32 / ctx.r28.s32 : 0);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwimi r7,r3,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// li r6,9
	ctx.r6.s64 = 9;
	// li r3,36
	ctx.r3.s64 = 36;
	// fmuls f8,f1,f9
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f9.f64));
	// fmuls f7,f8,f27
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = std::isnan(ctx.f7.f64) ? int64_t(0x80000000U) : (ctx.f7.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f7.f64));
	// stfd f6,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f6.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f1,f5
	ctx.f1.f64 = double(ctx.f5.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// bl 0x82092160
	ctx.lr = 0x820A1274;
	sub_82092160(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f2,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f26.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A1284;
	sub_820B3E10(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820924e8
	ctx.lr = 0x820A1290;
	sub_820924E8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8210d210
	ctx.lr = 0x820A129C;
	sub_8210D210(ctx, base);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// cmpwi cr6,r31,12
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 12, ctx.xer);
	// blt cr6,0x820a11c8
	if (ctx.cr6.lt) goto loc_820A11C8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8215ebe8
	ctx.lr = 0x820A12B4;
	__restfpr_25(ctx, base);
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AA158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x820AA160;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,640
	ctx.r5.s64 = 640;
	// stw r30,8804(r3)
	REX_STORE_U32(ctx.r3.u32 + 8804, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,7272
	ctx.r3.s64 = ctx.r3.s64 + 7272;
	// stw r30,8800(r31)
	REX_STORE_U32(ctx.r31.u32 + 8800, ctx.r30.u32);
	// bl 0x8215ec60
	ctx.lr = 0x820AA184;
	sub_8215EC60(ctx, base);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// ori r11,r11,12
	ctx.r11.u64 = ctx.r11.u64 | 12;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stw r11,7912(r31)
	REX_STORE_U32(ctx.r31.u32 + 7912, ctx.r11.u32);
	// addi r11,r26,31176
	ctx.r11.s64 = ctx.r26.s64 + 31176;
	// stw r10,7936(r31)
	REX_STORE_U32(ctx.r31.u32 + 7936, ctx.r10.u32);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// lis r29,4096
	ctx.r29.s64 = 268435456;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// lis r28,8192
	ctx.r28.s64 = 536870912;
	// lis r27,4096
	ctx.r27.s64 = 268435456;
	// lis r25,4096
	ctx.r25.s64 = 268435456;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r24,r6,10
	ctx.r24.u64 = ctx.r6.u64 | 10;
	// stw r9,7960(r31)
	REX_STORE_U32(ctx.r31.u32 + 7960, ctx.r9.u32);
	// ori r21,r29,13
	ctx.r21.u64 = ctx.r29.u64 | 13;
	// stb r7,7920(r31)
	REX_STORE_U8(ctx.r31.u32 + 7920, ctx.r7.u8);
	// lwz r23,3956(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 3956);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r22,3960(r31)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r31.u32 + 3960);
	// ori r5,r5,11
	ctx.r5.u64 = ctx.r5.u64 | 11;
	// lwz r20,3952(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 3952);
	// ori r4,r4,15
	ctx.r4.u64 = ctx.r4.u64 | 15;
	// lwz r19,3972(r31)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r31.u32 + 3972);
	// ori r3,r3,9
	ctx.r3.u64 = ctx.r3.u64 | 9;
	// lwz r18,3976(r31)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// ori r28,r28,1
	ctx.r28.u64 = ctx.r28.u64 | 1;
	// lwz r17,3948(r31)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 3948);
	// ori r27,r27,24
	ctx.r27.u64 = ctx.r27.u64 | 24;
	// lwz r26,3980(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 3980);
	// ori r25,r25,25
	ctx.r25.u64 = ctx.r25.u64 | 25;
	// lwz r16,3984(r31)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r31.u32 + 3984);
	// addi r29,r31,7912
	ctx.r29.s64 = ctx.r31.s64 + 7912;
	// ld r15,3744(r31)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r31.u32 + 3744);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r11,3964(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3964);
	// addi r9,r31,3744
	ctx.r9.s64 = ctx.r31.s64 + 3744;
	// lwz r14,3968(r31)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r31.u32 + 3968);
	// stb r7,7944(r31)
	REX_STORE_U8(ctx.r31.u32 + 7944, ctx.r7.u8);
	// stb r7,7968(r31)
	REX_STORE_U8(ctx.r31.u32 + 7968, ctx.r7.u8);
	// stw r24,7984(r31)
	REX_STORE_U32(ctx.r31.u32 + 7984, ctx.r24.u32);
	// stb r7,7992(r31)
	REX_STORE_U8(ctx.r31.u32 + 7992, ctx.r7.u8);
	// stw r5,8008(r31)
	REX_STORE_U32(ctx.r31.u32 + 8008, ctx.r5.u32);
	// stb r7,8016(r31)
	REX_STORE_U8(ctx.r31.u32 + 8016, ctx.r7.u8);
	// stw r4,8032(r31)
	REX_STORE_U32(ctx.r31.u32 + 8032, ctx.r4.u32);
	// stb r7,8040(r31)
	REX_STORE_U8(ctx.r31.u32 + 8040, ctx.r7.u8);
	// stw r3,8056(r31)
	REX_STORE_U32(ctx.r31.u32 + 8056, ctx.r3.u32);
	// stw r23,7928(r31)
	REX_STORE_U32(ctx.r31.u32 + 7928, ctx.r23.u32);
	// stw r22,7952(r31)
	REX_STORE_U32(ctx.r31.u32 + 7952, ctx.r22.u32);
	// stw r20,7976(r31)
	REX_STORE_U32(ctx.r31.u32 + 7976, ctx.r20.u32);
	// stw r19,8000(r31)
	REX_STORE_U32(ctx.r31.u32 + 8000, ctx.r19.u32);
	// stw r18,8024(r31)
	REX_STORE_U32(ctx.r31.u32 + 8024, ctx.r18.u32);
	// stw r17,8048(r31)
	REX_STORE_U32(ctx.r31.u32 + 8048, ctx.r17.u32);
	// stb r7,8064(r31)
	REX_STORE_U8(ctx.r31.u32 + 8064, ctx.r7.u8);
	// stw r26,8072(r31)
	REX_STORE_U32(ctx.r31.u32 + 8072, ctx.r26.u32);
	// stw r21,8080(r31)
	REX_STORE_U32(ctx.r31.u32 + 8080, ctx.r21.u32);
	// stb r7,8088(r31)
	REX_STORE_U8(ctx.r31.u32 + 8088, ctx.r7.u8);
	// stw r16,8096(r31)
	REX_STORE_U32(ctx.r31.u32 + 8096, ctx.r16.u32);
	// stw r28,8104(r31)
	REX_STORE_U32(ctx.r31.u32 + 8104, ctx.r28.u32);
	// stb r8,8112(r31)
	REX_STORE_U8(ctx.r31.u32 + 8112, ctx.r8.u8);
	// std r15,8120(r31)
	REX_STORE_U64(ctx.r31.u32 + 8120, ctx.r15.u64);
	// stw r27,8128(r31)
	REX_STORE_U32(ctx.r31.u32 + 8128, ctx.r27.u32);
	// stb r7,8136(r31)
	REX_STORE_U8(ctx.r31.u32 + 8136, ctx.r7.u8);
	// stw r11,8144(r31)
	REX_STORE_U32(ctx.r31.u32 + 8144, ctx.r11.u32);
	// stw r25,8152(r31)
	REX_STORE_U32(ctx.r31.u32 + 8152, ctx.r25.u32);
	// stb r7,8160(r31)
	REX_STORE_U8(ctx.r31.u32 + 8160, ctx.r7.u8);
	// stw r14,8168(r31)
	REX_STORE_U32(ctx.r31.u32 + 8168, ctx.r14.u32);
	// addi r11,r31,8168
	ctx.r11.s64 = ctx.r31.s64 + 8168;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_820AA2B4:
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stb r8,16(r11)
	REX_STORE_U8(ctx.r11.u32 + 16, ctx.r8.u8);
	// stw r6,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r6.u32);
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// std r5,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r5.u64);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r4,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// stb r8,40(r11)
	REX_STORE_U8(ctx.r11.u32 + 40, ctx.r8.u8);
	// ld r3,16(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 16);
	// std r3,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.r3.u64);
	// lwz r6,12(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r6,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stb r8,64(r11)
	REX_STORE_U8(ctx.r11.u32 + 64, ctx.r8.u8);
	// ld r5,24(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 24);
	// std r5,72(r11)
	REX_STORE_U64(ctx.r11.u32 + 72, ctx.r5.u64);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// stw r4,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r4.u32);
	// stb r8,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r8.u8);
	// ld r3,32(r9)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// std r3,96(r11)
	REX_STORE_U64(ctx.r11.u32 + 96, ctx.r3.u64);
	// lwz r6,20(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// stw r6,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r6.u32);
	// stb r8,112(r11)
	REX_STORE_U8(ctx.r11.u32 + 112, ctx.r8.u8);
	// ld r5,40(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 40);
	// std r5,120(r11)
	REX_STORE_U64(ctx.r11.u32 + 120, ctx.r5.u64);
	// lwzu r6,24(r10)
	ea = 24 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r6,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r6.u32);
	// stb r8,136(r11)
	REX_STORE_U8(ctx.r11.u32 + 136, ctx.r8.u8);
	// ldu r6,48(r9)
	ea = 48 + ctx.r9.u32;
	ctx.r6.u64 = REX_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r6,144(r11)
	ea = 144 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r6.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x820aa2b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820AA2B4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// ld r10,4032(r31)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r31.u32 + 4032);
	// lis r5,8192
	ctx.r5.s64 = 536870912;
	// lwz r6,8844(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8844);
	// lis r3,4096
	ctx.r3.s64 = 268435456;
	// stb r8,8760(r31)
	REX_STORE_U8(ctx.r31.u32 + 8760, ctx.r8.u8);
	// addi r4,r11,31328
	ctx.r4.s64 = ctx.r11.s64 + 31328;
	// stb r7,8784(r31)
	REX_STORE_U8(ctx.r31.u32 + 8784, ctx.r7.u8);
	// ori r11,r5,17
	ctx.r11.u64 = ctx.r5.u64 | 17;
	// ori r9,r3,32785
	ctx.r9.u64 = ctx.r3.u64 | 32785;
	// std r10,8768(r31)
	REX_STORE_U64(ctx.r31.u32 + 8768, ctx.r10.u64);
	// stw r11,8752(r31)
	REX_STORE_U32(ctx.r31.u32 + 8752, ctx.r11.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r9,8776(r31)
	REX_STORE_U32(ctx.r31.u32 + 8776, ctx.r9.u32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// stw r6,8792(r31)
	REX_STORE_U32(ctx.r31.u32 + 8792, ctx.r6.u32);
	// li r3,37
	ctx.r3.s64 = 37;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_820AA378:
	// addi r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 + 24;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820aa480
	if (!ctx.cr6.eq) goto loc_820AA480;
	// addi r8,r4,12
	ctx.r8.s64 = ctx.r4.s64 + 12;
	// lwz r10,3736(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 3736);
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820aa480
	if (!ctx.cr6.eq) goto loc_820AA480;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// lwz r6,3732(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3732);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x820aa480
	if (!ctx.cr6.eq) goto loc_820AA480;
	// cmplwi cr6,r10,30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 30, ctx.xer);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// beq cr6,0x820aa3e4
	if (ctx.cr6.eq) goto loc_820AA3E4;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x820aa3f4
	if (ctx.cr6.eq) goto loc_820AA3F4;
	// lwz r11,3952(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 3952);
	// lwz r6,3976(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 3976);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// b 0x820aa3f0
	goto loc_820AA3F0;
loc_820AA3E4:
	// lwz r8,3956(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 3956);
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
loc_820AA3F0:
	// bne cr6,0x820aa480
	if (!ctx.cr6.eq) goto loc_820AA480;
loc_820AA3F4:
	// lwz r11,8800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// addi r11,r11,337
	ctx.r11.s64 = ctx.r11.s64 + 337;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r10,r31
	REX_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,8800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,4048(r6)
	REX_STORE_U32(ctx.r6.u32 + 4048, ctx.r29.u32);
	// lwz r11,8800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,4040(r11)
	REX_STORE_U32(ctx.r11.u32 + 4040, ctx.r8.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r9,8800(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r10,7272(r8)
	REX_STORE_U32(ctx.r8.u32 + 7272, ctx.r10.u32);
	// lwz r6,8800(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// rlwinm r11,r6,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r7,7288(r11)
	REX_STORE_U32(ctx.r11.u32 + 7288, ctx.r7.u32);
	// lwz r10,8800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// rlwinm r11,r10,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r5,7292(r9)
	REX_STORE_U32(ctx.r9.u32 + 7292, ctx.r5.u32);
	// lwz r11,8800(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8800);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,8800(r31)
	REX_STORE_U32(ctx.r31.u32 + 8800, ctx.r8.u32);
loc_820AA480:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// lwzx r10,r11,r4
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x820aa378
	if (!ctx.cr6.eq) goto loc_820AA378;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B54F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820B5500;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820b55c8
	if (!ctx.cr6.eq) goto loc_820B55C8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820b5468
	ctx.lr = 0x820B5524;
	sub_820B5468(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820b55e0
	if (!ctx.cr6.eq) goto loc_820B55E0;
	// lwz r3,5168(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b5548
	if (ctx.cr6.eq) goto loc_820B5548;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B5548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B5548:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,5168(r31)
	REX_STORE_U32(ctx.r31.u32 + 5168, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b557c
	if (ctx.cr6.eq) goto loc_820B557C;
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// beq cr6,0x820b557c
	if (ctx.cr6.eq) goto loc_820B557C;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b5574
	if (ctx.cr6.eq) goto loc_820B5574;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B5574:
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x820b558c
	goto loc_820B558C;
loc_820B557C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b5588
	if (ctx.cr6.eq) goto loc_820B5588;
	// stw r30,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_820B5588:
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_820B558C:
	// lwz r5,5212(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 5212);
	// lwz r3,5208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5208);
	// lwz r4,5200(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 5200);
	// bl 0x8215e640
	ctx.lr = 0x820B559C;
	sub_8215E640(ctx, base);
	// lwz r3,5200(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5200);
	// stw r30,5208(r31)
	REX_STORE_U32(ctx.r31.u32 + 5208, ctx.r30.u32);
	// stw r30,5212(r31)
	REX_STORE_U32(ctx.r31.u32 + 5212, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b55b4
	if (ctx.cr6.eq) goto loc_820B55B4;
	// bl 0x8210f568
	ctx.lr = 0x820B55B4;
	sub_8210F568(ctx, base);
loc_820B55B4:
	// stw r30,5200(r31)
	REX_STORE_U32(ctx.r31.u32 + 5200, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,5204(r31)
	REX_STORE_U32(ctx.r31.u32 + 5204, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_820B55C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x820b55d4
	if (ctx.cr6.eq) goto loc_820B55D4;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_820B55D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_820B55E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B7D08) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r4,3896(r3)
	REX_STORE_U8(ctx.r3.u32 + 3896, ctx.r4.u8);
	// stw r11,2800(r3)
	REX_STORE_U32(ctx.r3.u32 + 2800, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B7D48) {
	REX_FUNC_PROLOGUE();
	// stb r4,3904(r3)
	REX_STORE_U8(ctx.r3.u32 + 3904, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B7ED8) {
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
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x820b7f2c
	if (ctx.cr6.eq) goto loc_820B7F2C;
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bne cr6,0x820b7f40
	if (!ctx.cr6.eq) goto loc_820B7F40;
	// lwz r11,2524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2524);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x820b7f40
	if (ctx.cr6.eq) goto loc_820B7F40;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x820b7f40
	if (ctx.cr6.eq) goto loc_820B7F40;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x820b7f40
	if (ctx.cr6.eq) goto loc_820B7F40;
	// bl 0x820e8b88
	ctx.lr = 0x820B7F24;
	sub_820E8B88(ctx, base);
	// stw r3,4200(r31)
	REX_STORE_U32(ctx.r31.u32 + 4200, ctx.r3.u32);
	// b 0x820b7f40
	goto loc_820B7F40;
loc_820B7F2C:
	// lwz r11,2524(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2524);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820b7f40
	if (ctx.cr6.eq) goto loc_820B7F40;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8209ba48
	ctx.lr = 0x820B7F40;
	sub_8209BA48(ctx, base);
loc_820B7F40:
	// stw r30,2524(r31)
	REX_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_820BB418) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bb440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BB440;
	// bdzf 4*cr6+eq,0x820bb448
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BB448;
	// bne cr6,0x820bb450
	if (!ctx.cr6.eq) goto loc_820BB450;
	// lhz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// blr 
	return;
loc_820BB440:
	// lhz r3,2(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 2);
	// blr 
	return;
loc_820BB448:
	// lhz r3,4(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 4);
	// blr 
	return;
loc_820BB450:
	// lhz r3,6(r4)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r4.u32 + 6);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BBD20) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r11,4219(r3)
	REX_STORE_U8(ctx.r3.u32 + 4219, ctx.r11.u8);
	// stw r10,4212(r3)
	REX_STORE_U32(ctx.r3.u32 + 4212, ctx.r10.u32);
	// stb r11,4218(r3)
	REX_STORE_U8(ctx.r3.u32 + 4218, ctx.r11.u8);
	// stb r11,4217(r3)
	REX_STORE_U8(ctx.r3.u32 + 4217, ctx.r11.u8);
	// stb r11,4216(r3)
	REX_STORE_U8(ctx.r3.u32 + 4216, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BD258) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820bd2a8
	if (!ctx.cr6.eq) goto loc_820BD2A8;
	// addi r30,r3,128
	ctx.r30.s64 = ctx.r3.s64 + 128;
	// lwz r4,2936(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2936);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a2030
	ctx.lr = 0x820BD288;
	sub_820A2030(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a2408
	ctx.lr = 0x820BD294;
	sub_820A2408(ctx, base);
	// li r5,7
	ctx.r5.s64 = 7;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r31,129
	ctx.r3.s64 = ctx.r31.s64 + 129;
	// bl 0x820a4d70
	ctx.lr = 0x820BD2A4;
	sub_820A4D70(ctx, base);
	// b 0x820bd2b4
	goto loc_820BD2B4;
loc_820BD2A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0c00
	ctx.lr = 0x820BD2B4;
	sub_820A0C00(ctx, base);
loc_820BD2B4:
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

DEFINE_REX_FUNC(sub_820BEF58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x820BEF60;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2932(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2932);
	// bl 0x82091ab8
	ctx.lr = 0x820BEF70;
	sub_82091AB8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ac8
	ctx.lr = 0x820BEF7C;
	sub_82091AC8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ad8
	ctx.lr = 0x820BEF88;
	sub_82091AD8(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r28,2
	ctx.r28.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820bf118
	if (ctx.cr6.gt) goto loc_820BF118;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bf130
	if (ctx.cr6.eq) goto loc_820BF130;
	// bdz 0x820bf138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF138;
	// bdz 0x820befc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BEFC0;
	// bdz 0x820bf030
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF030;
	// b 0x820bf078
	goto loc_820BF078;
loc_820BEFC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb078
	ctx.lr = 0x820BEFC8;
	sub_820BB078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b8310
	ctx.lr = 0x820BEFD0;
	sub_820B8310(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BEFDC;
	sub_820A0700(ctx, base);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,616(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 616);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BEFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x820bf010
	if (!ctx.cr6.eq) goto loc_820BF010;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// stb r10,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF010:
	// lbz r11,3900(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3900);
	// li r26,0
	ctx.r26.s64 = 0;
	// stb r26,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r26.u8);
	// stb r26,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r26.u8);
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb078
	ctx.lr = 0x820BF038;
	sub_820BB078(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-20112
	ctx.r4.s64 = ctx.r11.s64 + -20112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a1fb0
	ctx.lr = 0x820BF050;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820bf010
	if (ctx.cr6.eq) goto loc_820BF010;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820bf3b4
	if (!ctx.cr6.eq) goto loc_820BF3B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// stb r10,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb078
	ctx.lr = 0x820BF080;
	sub_820BB078(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-20200
	ctx.r4.s64 = ctx.r11.s64 + -20200;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a1fb0
	ctx.lr = 0x820BF098;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820bf0c0
	if (ctx.cr6.eq) goto loc_820BF0C0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820bf3b4
	if (!ctx.cr6.eq) goto loc_820BF3B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// stb r10,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r10.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF0C0:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,624(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 624);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820BF0D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82092088
	ctx.lr = 0x820BF0DC;
	sub_82092088(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// li r26,0
	ctx.r26.s64 = 0;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// stdx r26,r9,r8
	REX_STORE_U64(ctx.r9.u32 + ctx.r8.u32, ctx.r26.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bl 0x820e8878
	ctx.lr = 0x820BF100;
	sub_820E8878(ctx, base);
	// bl 0x820917a8
	ctx.lr = 0x820BF104;
	sub_820917A8(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
	// stb r7,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r7.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF118:
	// stw r26,2988(r31)
	REX_STORE_U32(ctx.r31.u32 + 2988, ctx.r26.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-19480
	ctx.r5.s64 = ctx.r11.s64 + -19480;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a2e68
	ctx.lr = 0x820BF130;
	sub_820A2E68(ctx, base);
loc_820BF130:
	// stb r28,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r28.u8);
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
loc_820BF138:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb078
	ctx.lr = 0x820BF140;
	sub_820BB078(ctx, base);
	// rlwinm r11,r30,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf1b4
	if (ctx.cr6.eq) goto loc_820BF1B4;
	// lwz r11,2988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2988);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820bf198
	if (ctx.cr6.eq) goto loc_820BF198;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820bf180
	if (ctx.cr6.eq) goto loc_820BF180;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820bf3b4
	if (!ctx.cr6.eq) goto loc_820BF3B4;
	// bl 0x82092748
	ctx.lr = 0x820BF16C;
	sub_82092748(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF180:
	// bl 0x82092748
	ctx.lr = 0x820BF184;
	sub_82092748(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF198:
	// bl 0x82092748
	ctx.lr = 0x820BF19C;
	sub_82092748(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r28,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r28.u32);
	// stw r11,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
loc_820BF1A8:
	// stw r26,2556(r31)
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF1B4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf1d8
	if (ctx.cr6.eq) goto loc_820BF1D8;
	// bl 0x82092770
	ctx.lr = 0x820BF1C4;
	sub_82092770(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r26,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r26.u8);
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF1D8:
	// lwz r11,2988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820bf35c
	if (ctx.cr6.lt) goto loc_820BF35C;
	// lwz r10,2800(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x820bf35c
	if (ctx.cr6.gt) goto loc_820BF35C;
	// rlwinm r10,r27,0,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFC;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bf35c
	if (ctx.cr6.eq) goto loc_820BF35C;
	// rlwinm r10,r29,0,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFC;
	// rlwinm r10,r10,0,28,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bf3b4
	if (ctx.cr6.eq) goto loc_820BF3B4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820bf2e8
	if (ctx.cr6.lt) goto loc_820BF2E8;
	// beq cr6,0x820bf280
	if (ctx.cr6.eq) goto loc_820BF280;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x820bf3b4
	if (!ctx.cr6.lt) goto loc_820BF3B4;
	// rlwinm r11,r29,0,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x7C;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf240
	if (ctx.cr6.eq) goto loc_820BF240;
	// lwz r11,2556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820bf258
	goto loc_820BF258;
loc_820BF240:
	// rlwinm r11,r29,0,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF8;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf25c
	if (ctx.cr6.eq) goto loc_820BF25C;
	// lwz r11,2556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BF258:
	// stw r11,2556(r31)
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
loc_820BF25C:
	// lwz r11,2556(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820bf1a8
	if (ctx.cr6.lt) goto loc_820BF1A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x820bf350
	if (!ctx.cr6.gt) goto loc_820BF350;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,2556(r31)
	REX_STORE_U32(ctx.r31.u32 + 2556, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF280:
	// rlwinm r11,r29,0,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x7C;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf29c
	if (ctx.cr6.eq) goto loc_820BF29C;
	// lwz r11,2552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820bf2b4
	goto loc_820BF2B4;
loc_820BF29C:
	// rlwinm r11,r29,0,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF8;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf2b8
	if (ctx.cr6.eq) goto loc_820BF2B8;
	// lwz r11,2552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BF2B4:
	// stw r11,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
loc_820BF2B8:
	// lwz r11,2552(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820bf2d0
	if (!ctx.cr6.lt) goto loc_820BF2D0;
	// stw r26,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF2D0:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x820bf350
	if (!ctx.cr6.gt) goto loc_820BF350;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2552(r31)
	REX_STORE_U32(ctx.r31.u32 + 2552, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF2E8:
	// rlwinm r11,r29,0,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x7C;
	// rlwinm r11,r11,0,29,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC7;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf304
	if (ctx.cr6.eq) goto loc_820BF304;
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820bf31c
	goto loc_820BF31C;
loc_820BF304:
	// rlwinm r11,r29,0,24,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF8;
	// rlwinm r11,r11,0,28,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bf320
	if (ctx.cr6.eq) goto loc_820BF320;
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BF31C:
	// stw r11,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
loc_820BF320:
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820bf338
	if (!ctx.cr6.lt) goto loc_820BF338;
	// stw r26,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r26.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF338:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x820bf350
	if (!ctx.cr6.gt) goto loc_820BF350;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,2548(r31)
	REX_STORE_U32(ctx.r31.u32 + 2548, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF350:
	// bl 0x82092748
	ctx.lr = 0x820BF354;
	sub_82092748(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_820BF35C:
	// clrlwi r10,r29,27
	ctx.r10.u64 = ctx.r29.u32 & 0x1F;
	// rlwinm r10,r10,0,31,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bf374
	if (ctx.cr6.eq) goto loc_820BF374;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820bf388
	goto loc_820BF388;
loc_820BF374:
	// rlwinm r10,r29,0,26,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3E;
	// rlwinm r10,r10,0,30,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820bf390
	if (ctx.cr6.eq) goto loc_820BF390;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BF388:
	// stw r11,2988(r31)
	REX_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
	// bl 0x82092720
	ctx.lr = 0x820BF390;
	sub_82092720(ctx, base);
loc_820BF390:
	// lwz r11,2988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2988);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820bf3a4
	if (!ctx.cr6.lt) goto loc_820BF3A4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2988(r31)
	REX_STORE_U32(ctx.r31.u32 + 2988, ctx.r11.u32);
loc_820BF3A4:
	// lwz r11,2988(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2988);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x820bf3b4
	if (ctx.cr6.lt) goto loc_820BF3B4;
	// stw r26,2988(r31)
	REX_STORE_U32(ctx.r31.u32 + 2988, ctx.r26.u32);
loc_820BF3B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D0370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820D0378;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820919f0
	ctx.lr = 0x820D0384;
	sub_820919F0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0068
	ctx.lr = 0x820D0390;
	sub_820D0068(ctx, base);
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// bgt cr6,0x820d0f74
	if (ctx.cr6.gt) goto loc_820D0F74;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,952
	ctx.r12.s64 = ctx.r12.s64 + 952;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D0434;
	case 1:
		goto loc_820D0460;
	case 2:
		goto loc_820D0484;
	case 3:
		goto loc_820D04B8;
	case 4:
		goto loc_820D05DC;
	case 5:
		goto loc_820D0664;
	case 6:
		goto loc_820D0758;
	case 7:
		goto loc_820D06DC;
	case 8:
		goto loc_820D078C;
	case 9:
		goto loc_820D07C4;
	case 10:
		goto loc_820D0840;
	case 11:
		goto loc_820D088C;
	case 12:
		goto loc_820D08D4;
	case 13:
		goto loc_820D090C;
	case 14:
		goto loc_820D0954;
	case 15:
		goto loc_820D0998;
	case 16:
		goto loc_820D09D0;
	case 17:
		goto loc_820D0A48;
	case 18:
		goto loc_820D0AA4;
	case 19:
		goto loc_820D0AE4;
	case 20:
		goto loc_820D0B2C;
	case 21:
		goto loc_820D0BDC;
	case 22:
		goto loc_820D0C0C;
	case 23:
		goto loc_820D0C44;
	case 24:
		goto loc_820D0C74;
	case 25:
		goto loc_820D0CA4;
	case 26:
		goto loc_820D0CF0;
	case 27:
		goto loc_820D0D44;
	case 28:
		goto loc_820D0DBC;
	case 29:
		goto loc_820D0E30;
	case 30:
		goto loc_820D0EF0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D0434:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r30.u32);
	// li r4,30
	ctx.r4.s64 = 30;
	// stw r11,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r11.u32);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x820a5c70
	ctx.lr = 0x820D044C;
	sub_820A5C70(ctx, base);
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r10,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r10.u8);
loc_820D0460:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x820a5de8
	ctx.lr = 0x820D0468;
	sub_820A5DE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
loc_820D0484:
	// bl 0x82092028
	ctx.lr = 0x820D0488;
	sub_82092028(ctx, base);
	// bl 0x82091998
	ctx.lr = 0x820D048C;
	sub_82091998(ctx, base);
	// bl 0x82091410
	ctx.lr = 0x820D0490;
	sub_82091410(ctx, base);
	// bl 0x82091dd0
	ctx.lr = 0x820D0494;
	sub_82091DD0(ctx, base);
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// stw r30,2376(r31)
	REX_STORE_U32(ctx.r31.u32 + 2376, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r30,7728(r31)
	REX_STORE_U32(ctx.r31.u32 + 7728, ctx.r30.u32);
	// stw r30,7732(r31)
	REX_STORE_U32(ctx.r31.u32 + 7732, ctx.r30.u32);
	// stw r30,7536(r31)
	REX_STORE_U32(ctx.r31.u32 + 7536, ctx.r30.u32);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
loc_820D04B8:
	// lwz r11,2392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d04e8
	if (ctx.cr6.eq) goto loc_820D04E8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r10,-19588
	ctx.r5.s64 = ctx.r10.s64 + -19588;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f1,-11448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11448);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8209ffd8
	ctx.lr = 0x820D04E8;
	sub_8209FFD8(ctx, base);
loc_820D04E8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r7,9
	ctx.r7.s64 = 9;
	// addi r5,r10,-11480
	ctx.r5.s64 = ctx.r10.s64 + -11480;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// lfs f1,-11452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -11452);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820a0198
	ctx.lr = 0x820D0508;
	sub_820A0198(ctx, base);
	// bl 0x82091aa8
	ctx.lr = 0x820D050C;
	sub_82091AA8(ctx, base);
	// rlwinm r9,r3,0,9,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7FF000;
	// rlwinm r9,r9,0,19,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFC01FFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820d05a0
	if (ctx.cr6.eq) goto loc_820D05A0;
	// bl 0x82091f48
	ctx.lr = 0x820D0520;
	sub_82091F48(ctx, base);
	// bl 0x820927c0
	ctx.lr = 0x820D0524;
	sub_820927C0(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_820D0528:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82091a98
	ctx.lr = 0x820D0530;
	sub_82091A98(ctx, base);
	// rlwinm r11,r3,0,9,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x7FF000;
	// rlwinm r11,r11,0,19,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFC01FFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820d0550
	if (!ctx.cr6.eq) goto loc_820D0550;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x820d0528
	if (ctx.cr6.lt) goto loc_820D0528;
	// b 0x820d05ac
	goto loc_820D05AC;
loc_820D0550:
	// stw r29,3244(r31)
	REX_STORE_U32(ctx.r31.u32 + 3244, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82091f58
	ctx.lr = 0x820D055C;
	sub_82091F58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d058c
	if (!ctx.cr6.eq) goto loc_820D058C;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3244(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091970
	ctx.lr = 0x820D0570;
	sub_82091970(ctx, base);
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091f68
	ctx.lr = 0x820D0578;
	sub_82091F68(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// b 0x820d05ac
	goto loc_820D05AC;
loc_820D058C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d05ac
	goto loc_820D05AC;
loc_820D05A0:
	// lwz r11,2380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r11.u32);
loc_820D05AC:
	// lwz r11,2388(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r11.u32);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// ble cr6,0x820d0f84
	if (!ctx.cr6.gt) goto loc_820D0F84;
	// lwz r11,2392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2392);
	// stw r30,2388(r31)
	REX_STORE_U32(ctx.r31.u32 + 2388, ctx.r30.u32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r9,2392(r31)
	REX_STORE_U32(ctx.r31.u32 + 2392, ctx.r9.u32);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D05DC:
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091f58
	ctx.lr = 0x820D05E4;
	sub_82091F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d0618
	if (!ctx.cr6.eq) goto loc_820D0618;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-11720
	ctx.r4.s64 = ctx.r11.s64 + -11720;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8209f978
	ctx.lr = 0x820D0600;
	sub_8209F978(ctx, base);
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091a98
	ctx.lr = 0x820D0608;
	sub_82091A98(ctx, base);
	// rlwinm r10,r3,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820d0628
	if (ctx.cr6.eq) goto loc_820D0628;
	// bl 0x82091610
	ctx.lr = 0x820D0618;
	sub_82091610(ctx, base);
loc_820D0618:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0628:
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091a98
	ctx.lr = 0x820D0630;
	sub_82091A98(ctx, base);
	// rlwinm r11,r3,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,3244(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091970
	ctx.lr = 0x820D0648;
	sub_82091970(ctx, base);
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091f68
	ctx.lr = 0x820D0650;
	sub_82091F68(ctx, base);
loc_820D0650:
	// bl 0x82091dd0
	ctx.lr = 0x820D0654;
	sub_82091DD0(ctx, base);
loc_820D0654:
	// li r11,27
	ctx.r11.s64 = 27;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0664:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d06b8
	if (ctx.cr6.lt) goto loc_820D06B8;
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c58
	ctx.lr = 0x820D0680;
	sub_82091C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// beq cr6,0x820d06ac
	if (ctx.cr6.eq) goto loc_820D06AC;
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D06AC:
	// li r11,7
	ctx.r11.s64 = 7;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D06B8:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c40
	ctx.lr = 0x820D06C4;
	sub_82091C40(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D06DC:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d0738
	if (ctx.cr6.lt) goto loc_820D0738;
	// beq cr6,0x820d06f4
	if (ctx.cr6.eq) goto loc_820D06F4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D06F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c80
	ctx.lr = 0x820D0700;
	sub_82091C80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// beq cr6,0x820d072c
	if (ctx.cr6.eq) goto loc_820D072C;
	// li r11,6
	ctx.r11.s64 = 6;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D072C:
	// li r11,9
	ctx.r11.s64 = 9;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0738:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c70
	ctx.lr = 0x820D0740;
	sub_82091C70(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0758:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091d80
	ctx.lr = 0x820D0760;
	sub_82091D80(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// bne cr6,0x820d0780
	if (!ctx.cr6.eq) goto loc_820D0780;
	// li r11,11
	ctx.r11.s64 = 11;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0780:
	// li r11,15
	ctx.r11.s64 = 15;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D078C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-11864
	ctx.r4.s64 = ctx.r11.s64 + -11864;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D07A4;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0650
	if (ctx.cr6.eq) goto loc_820D0650;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D07C4:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d0820
	if (ctx.cr6.lt) goto loc_820D0820;
	// beq cr6,0x820d07dc
	if (ctx.cr6.eq) goto loc_820D07DC;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D07DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091ca8
	ctx.lr = 0x820D07E8;
	sub_82091CA8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// beq cr6,0x820d0814
	if (ctx.cr6.eq) goto loc_820D0814;
	// li r11,10
	ctx.r11.s64 = 10;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0814:
	// li r11,24
	ctx.r11.s64 = 24;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0820:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c98
	ctx.lr = 0x820D0828;
	sub_82091C98(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0840:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12008
	ctx.r4.s64 = ctx.r11.s64 + -12008;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0858;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0878
	if (ctx.cr6.eq) goto loc_820D0878;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0878:
	// bl 0x82091dd0
	ctx.lr = 0x820D087C;
	sub_82091DD0(ctx, base);
	// li r11,18
	ctx.r11.s64 = 18;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D088C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12080
	ctx.r4.s64 = ctx.r11.s64 + -12080;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D08A4;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d08c4
	if (ctx.cr6.eq) goto loc_820D08C4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D08C4:
	// li r11,14
	ctx.r11.s64 = 14;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D08D4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12216
	ctx.r4.s64 = ctx.r11.s64 + -12216;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D08EC;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0654
	if (ctx.cr6.eq) goto loc_820D0654;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D090C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22080
	ctx.r4.s64 = ctx.r11.s64 + -22080;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0924;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0944
	if (ctx.cr6.eq) goto loc_820D0944;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0944:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0954:
	// bl 0x82091d40
	ctx.lr = 0x820D0958;
	sub_82091D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0970
	if (ctx.cr6.eq) goto loc_820D0970;
	// li r11,13
	ctx.r11.s64 = 13;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0970:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091d80
	ctx.lr = 0x820D0978;
	sub_82091D80(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// bne cr6,0x820d0780
	if (!ctx.cr6.eq) goto loc_820D0780;
	// li r11,17
	ctx.r11.s64 = 17;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0998:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22584
	ctx.r4.s64 = ctx.r11.s64 + -22584;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D09B0;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0944
	if (ctx.cr6.eq) goto loc_820D0944;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D09D0:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d0a24
	if (ctx.cr6.lt) goto loc_820D0A24;
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c58
	ctx.lr = 0x820D09EC;
	sub_82091C58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// beq cr6,0x820d0a18
	if (ctx.cr6.eq) goto loc_820D0A18;
	// li r11,12
	ctx.r11.s64 = 12;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0A18:
	// li r11,14
	ctx.r11.s64 = 14;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0A24:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091c40
	ctx.lr = 0x820D0A30;
	sub_82091C40(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0A48:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22672
	ctx.r4.s64 = ctx.r11.s64 + -22672;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0A60;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0a88
	if (ctx.cr6.eq) goto loc_820D0A88;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// bl 0x82091dc0
	ctx.lr = 0x820D0A74;
	sub_82091DC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0A88:
	// bl 0x82091dc0
	ctx.lr = 0x820D0A8C;
	sub_82091DC0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r10,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r10.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0AA4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22672
	ctx.r4.s64 = ctx.r11.s64 + -22672;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0ABC;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0a88
	if (ctx.cr6.eq) goto loc_820D0A88;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// bl 0x82091dc0
	ctx.lr = 0x820D0AD0;
	sub_82091DC0(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0AE4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-21952
	ctx.r4.s64 = ctx.r11.s64 + -21952;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0AFC;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0b1c
	if (ctx.cr6.eq) goto loc_820D0B1C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0B1C:
	// li r11,20
	ctx.r11.s64 = 20;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0B2C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-22220
	ctx.r4.s64 = ctx.r11.s64 + -22220;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x8209f978
	ctx.lr = 0x820D0B40;
	sub_8209F978(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d0bc8
	if (ctx.cr6.lt) goto loc_820D0BC8;
	// beq cr6,0x820d0ba4
	if (ctx.cr6.eq) goto loc_820D0BA4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x820d0b60
	if (ctx.cr6.lt) goto loc_820D0B60;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0B60:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091cd8
	ctx.lr = 0x820D0B6C;
	sub_82091CD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// beq cr6,0x820d0b98
	if (ctx.cr6.eq) goto loc_820D0B98;
	// li r11,21
	ctx.r11.s64 = 21;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0B98:
	// li r11,23
	ctx.r11.s64 = 23;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0BA4:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091cc0
	ctx.lr = 0x820D0BB0;
	sub_82091CC0(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0BC8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0BDC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22720
	ctx.r4.s64 = ctx.r11.s64 + -22720;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0BF4;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,22
	ctx.r11.s64 = 22;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0C0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-22872
	ctx.r4.s64 = ctx.r11.s64 + -22872;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0C24;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0944
	if (ctx.cr6.eq) goto loc_820D0944;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0C44:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12284
	ctx.r4.s64 = ctx.r11.s64 + -12284;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0C5C;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,27
	ctx.r11.s64 = 27;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0C74:
	// bl 0x82091d90
	ctx.lr = 0x820D0C78;
	sub_82091D90(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// bne cr6,0x820d0c98
	if (!ctx.cr6.eq) goto loc_820D0C98;
	// li r11,27
	ctx.r11.s64 = 27;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0C98:
	// li r11,25
	ctx.r11.s64 = 25;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0CA4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12432
	ctx.r4.s64 = ctx.r11.s64 + -12432;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0CBC;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0cdc
	if (ctx.cr6.eq) goto loc_820D0CDC;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,26
	ctx.r11.s64 = 26;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0CDC:
	// bl 0x82091dd0
	ctx.lr = 0x820D0CE0;
	sub_82091DD0(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0CF0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-12512
	ctx.r4.s64 = ctx.r11.s64 + -12512;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x820a1fb0
	ctx.lr = 0x820D0D08;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d0d28
	if (ctx.cr6.eq) goto loc_820D0D28;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0D28:
	// bl 0x82091dd0
	ctx.lr = 0x820D0D2C;
	sub_82091DD0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091d60
	ctx.lr = 0x820D0D34;
	sub_82091D60(ctx, base);
	// li r11,27
	ctx.r11.s64 = 27;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0D44:
	// bl 0x82091dc0
	ctx.lr = 0x820D0D48;
	sub_82091DC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,84(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// bl 0x820925d0
	ctx.lr = 0x820D0D58;
	sub_820925D0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,88(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// bl 0x820925d0
	ctx.lr = 0x820D0D64;
	sub_820925D0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r4,92(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x820925d0
	ctx.lr = 0x820D0D70;
	sub_820925D0(ctx, base);
	// bl 0x82091528
	ctx.lr = 0x820D0D74;
	sub_82091528(ctx, base);
	// bl 0x82091538
	ctx.lr = 0x820D0D78;
	sub_82091538(ctx, base);
	// bl 0x82091548
	ctx.lr = 0x820D0D7C;
	sub_82091548(ctx, base);
	// bl 0x82091558
	ctx.lr = 0x820D0D80;
	sub_82091558(ctx, base);
	// lwz r3,3244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 3244);
	// bl 0x82091f58
	ctx.lr = 0x820D0D88;
	sub_82091F58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0dac
	if (ctx.cr6.eq) goto loc_820D0DAC;
	// bl 0x82091d30
	ctx.lr = 0x820D0D94;
	sub_82091D30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0dac
	if (ctx.cr6.eq) goto loc_820D0DAC;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0DAC:
	// li r11,30
	ctx.r11.s64 = 30;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0DBC:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d0dec
	if (ctx.cr6.eq) goto loc_820D0DEC;
	// bl 0x82091e10
	ctx.lr = 0x820D0DCC;
	sub_82091E10(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,7739(r31)
	REX_STORE_U8(ctx.r31.u32 + 7739, ctx.r30.u8);
	// stb r30,7738(r31)
	REX_STORE_U8(ctx.r31.u32 + 7738, ctx.r30.u8);
	// stb r30,7737(r31)
	REX_STORE_U8(ctx.r31.u32 + 7737, ctx.r30.u8);
	// stb r30,7736(r31)
	REX_STORE_U8(ctx.r31.u32 + 7736, ctx.r30.u8);
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// b 0x820d0f80
	goto loc_820D0F80;
loc_820D0DEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cfc40
	ctx.lr = 0x820D0DF8;
	sub_820CFC40(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// bne cr6,0x820d0e24
	if (!ctx.cr6.eq) goto loc_820D0E24;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0E24:
	// li r11,29
	ctx.r11.s64 = 29;
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0E30:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820d0ecc
	if (ctx.cr6.gt) goto loc_820D0ECC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d0ed8
	if (ctx.cr6.eq) goto loc_820D0ED8;
	// bdz 0x820d0e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D0E5C;
	// bdz 0x820d0ea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820D0EA8;
	// b 0x820d0dac
	goto loc_820D0DAC;
loc_820D0E5C:
	// bl 0x82091908
	ctx.lr = 0x820D0E60;
	sub_82091908(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d0e7c
	if (!ctx.cr6.eq) goto loc_820D0E7C;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0E7C:
	// lwz r11,2380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r10,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r10.u32);
	// ble cr6,0x820d0f84
	if (!ctx.cr6.gt) goto loc_820D0F84;
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0EA8:
	// bl 0x82091908
	ctx.lr = 0x820D0EAC;
	sub_82091908(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820d0f84
	if (!ctx.cr6.eq) goto loc_820D0F84;
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stb r10,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r10.u8);
	// stb r9,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r9.u8);
	// b 0x820d0f84
	goto loc_820D0F84;
loc_820D0ECC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
loc_820D0ED8:
	// bl 0x820918f8
	ctx.lr = 0x820D0EDC;
	sub_820918F8(ctx, base);
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// stw r30,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// b 0x820d0f80
	goto loc_820D0F80;
loc_820D0EF0:
	// lbz r11,2374(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2374);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d0f24
	if (ctx.cr6.eq) goto loc_820D0F24;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// beq cr6,0x820d0f44
	if (ctx.cr6.eq) goto loc_820D0F44;
	// li r4,30
	ctx.r4.s64 = 30;
	// bl 0x820a5c38
	ctx.lr = 0x820D0F14;
	sub_820A5C38(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r30.u32);
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
loc_820D0F24:
	// lwz r11,2380(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// stw r10,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r10.u32);
	// ble cr6,0x820d0f84
	if (!ctx.cr6.gt) goto loc_820D0F84;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r11.u8);
	// b 0x820d0f80
	goto loc_820D0F80;
loc_820D0F44:
	// bl 0x820a5d80
	ctx.lr = 0x820D0F48;
	sub_820A5D80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0f84
	if (ctx.cr6.eq) goto loc_820D0F84;
	// bl 0x82092960
	ctx.lr = 0x820D0F54;
	sub_82092960(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091730
	ctx.lr = 0x820D0F5C;
	sub_82091730(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r11.u8);
	// stb r10,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r10.u8);
	// b 0x820d0f7c
	goto loc_820D0F7C;
loc_820D0F74:
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r30.u8);
loc_820D0F7C:
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
loc_820D0F80:
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
loc_820D0F84:
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x820d0fa4
	if (ctx.cr6.lt) goto loc_820D0FA4;
	// bl 0x820916e0
	ctx.lr = 0x820D0F94;
	sub_820916E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d0fa4
	if (ctx.cr6.eq) goto loc_820D0FA4;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82092298
	ctx.lr = 0x820D0FA4;
	sub_82092298(ctx, base);
loc_820D0FA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x820cab00
	ctx.lr = 0x820D0FB0;
	sub_820CAB00(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F2CA8) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-28464
	ctx.r3.s64 = ctx.r3.s64 + -28464;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820F2DE0) {
	REX_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,-25924
	ctx.r3.s64 = ctx.r3.s64 + -25924;
	// b 0x82101390
	sub_82101390(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F2E60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,29(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 29);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820f2e80
	if (!ctx.cr6.eq) goto loc_820F2E80;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_820F2E80:
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
	// bne cr6,0x820f2ea8
	if (!ctx.cr6.eq) goto loc_820F2EA8;
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_820F2EA8:
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x820f2ec8
	if (!ctx.cr6.eq) goto loc_820F2EC8;
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_820F2EC8:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820F3B40) {
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
	// addi r8,r11,5176
	ctx.r8.s64 = ctx.r11.s64 + 5176;
	// addi r7,r10,7204
	ctx.r7.s64 = ctx.r10.s64 + 7204;
	// addi r6,r9,4752
	ctx.r6.s64 = ctx.r9.s64 + 4752;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// clrlwi r5,r4,31
	ctx.r5.u64 = ctx.r4.u32 & 0x1;
	// stw r7,312(r3)
	REX_STORE_U32(ctx.r3.u32 + 312, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820f3b8c
	if (ctx.cr6.eq) goto loc_820F3B8C;
	// bl 0x8215e470
	ctx.lr = 0x820F3B88;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820F3B8C:
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

DEFINE_REX_FUNC(sub_820F47A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820F47B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r31,-25812
	ctx.r31.s64 = ctx.r31.s64 + -25812;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820F47D8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x820f3260
	ctx.lr = 0x820F47F4;
	sub_820F3260(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x820F4808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820F4E48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820F4E50;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,33(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 33);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4e78
	if (ctx.cr6.eq) goto loc_820F4E78;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,5488
	ctx.r3.s64 = ctx.r11.s64 + 5488;
	// bl 0x8216a730
	ctx.lr = 0x820F4E78;
	sub_8216A730(ctx, base);
loc_820F4E78:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x820f3dd8
	ctx.lr = 0x820F4E84;
	sub_820F3DD8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// beq cr6,0x820f4ea0
	if (ctx.cr6.eq) goto loc_820F4EA0;
	// lwz r28,8(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x820f4ec4
	goto loc_820F4EC4;
loc_820F4EA0:
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r9,33(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 33);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820f4eb8
	if (ctx.cr6.eq) goto loc_820F4EB8;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x820f4ec4
	goto loc_820F4EC4;
loc_820F4EB8:
	// lwz r28,8(r25)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f4fb0
	if (!ctx.cr6.eq) goto loc_820F4FB0;
loc_820F4EC4:
	// lbz r11,33(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4ed8
	if (!ctx.cr6.eq) goto loc_820F4ED8;
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_820F4ED8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f4ef0
	if (!ctx.cr6.eq) goto loc_820F4EF0;
	// stw r28,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x820f4f08
	goto loc_820F4F08;
loc_820F4EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f4f04
	if (!ctx.cr6.eq) goto loc_820F4F04;
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x820f4f08
	goto loc_820F4F08;
loc_820F4F04:
	// stw r28,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_820F4F08:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f4f58
	if (!ctx.cr6.eq) goto loc_820F4F58;
	// lbz r11,33(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f2c
	if (ctx.cr6.eq) goto loc_820F4F2C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x820f4f54
	goto loc_820F4F54;
loc_820F4F2C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f4f54
	if (!ctx.cr6.eq) goto loc_820F4F54;
loc_820F4F40:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,33(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f4f40
	if (ctx.cr6.eq) goto loc_820F4F40;
loc_820F4F54:
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_820F4F58:
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f5044
	if (!ctx.cr6.eq) goto loc_820F5044;
	// lbz r11,33(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f4f80
	if (ctx.cr6.eq) goto loc_820F4F80;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r31,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// b 0x820f5044
	goto loc_820F5044;
loc_820F4F80:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lbz r8,33(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x820f4fa8
	if (!ctx.cr6.eq) goto loc_820F4FA8;
loc_820F4F94:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,33(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820f4f94
	if (ctx.cr6.eq) goto loc_820F4F94;
loc_820F4FA8:
	// stw r10,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x820f5044
	goto loc_820F5044;
loc_820F4FB0:
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f4fd0
	if (!ctx.cr6.eq) goto loc_820F4FD0;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x820f4ff8
	goto loc_820F4FF8;
loc_820F4FD0:
	// lbz r11,33(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 33);
	// lwz r31,4(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820f4fe4
	if (!ctx.cr6.eq) goto loc_820F4FE4;
	// stw r31,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_820F4FE4:
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r11,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r25,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r25.u32);
loc_820F4FF8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f5010
	if (!ctx.cr6.eq) goto loc_820F5010;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x820f502c
	goto loc_820F502C;
loc_820F5010:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x820f5028
	if (!ctx.cr6.eq) goto loc_820F5028;
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x820f502c
	goto loc_820F502C;
loc_820F5028:
	// stw r25,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_820F502C:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r9,32(r26)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r26.u32 + 32);
	// lbz r10,32(r25)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r25.u32 + 32);
	// stb r9,32(r25)
	REX_STORE_U8(ctx.r25.u32 + 32, ctx.r9.u8);
	// stb r10,32(r26)
	REX_STORE_U8(ctx.r26.u32 + 32, ctx.r10.u8);
loc_820F5044:
	// lbz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f51dc
	if (!ctx.cr6.eq) goto loc_820F51DC;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x820f51d8
	if (ctx.cr6.eq) goto loc_820F51D8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_820F5068:
	// lbz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r28.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x820f51d8
	if (!ctx.cr6.eq) goto loc_820F51D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820f5120
	if (!ctx.cr6.eq) goto loc_820F5120;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f50a8
	if (!ctx.cr6.eq) goto loc_820F50A8;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f3f58
	ctx.lr = 0x820F50A4;
	sub_820F3F58(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_820F50A8:
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5174
	if (!ctx.cr6.eq) goto loc_820F5174;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820f50d4
	if (!ctx.cr6.eq) goto loc_820F50D4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// beq cr6,0x820f5170
	if (ctx.cr6.eq) goto loc_820F5170;
loc_820F50D4:
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x820f50fc
	if (!ctx.cr6.eq) goto loc_820F50FC;
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f3fd0
	ctx.lr = 0x820F50F8;
	sub_820F3FD0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_820F50FC:
	// lbz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stb r29,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x820f3f58
	ctx.lr = 0x820F511C;
	sub_820F3F58(ctx, base);
	// b 0x820f51d8
	goto loc_820F51D8;
loc_820F5120:
	// lbz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5144
	if (!ctx.cr6.eq) goto loc_820F5144;
	// stb r29,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r29.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r30,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f3fd0
	ctx.lr = 0x820F5140;
	sub_820F3FD0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_820F5144:
	// lbz r10,33(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 33);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820f5174
	if (!ctx.cr6.eq) goto loc_820F5174;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,32(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x820f5190
	if (!ctx.cr6.eq) goto loc_820F5190;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x820f5190
	if (!ctx.cr6.eq) goto loc_820F5190;
loc_820F5170:
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
loc_820F5174:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820f5068
	if (!ctx.cr6.eq) goto loc_820F5068;
	// b 0x820f51d8
	goto loc_820F51D8;
loc_820F5190:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r8,32(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 32);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x820f51b8
	if (!ctx.cr6.eq) goto loc_820F51B8;
	// stb r29,32(r10)
	REX_STORE_U8(ctx.r10.u32 + 32, ctx.r29.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r30,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r30.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x820f3f58
	ctx.lr = 0x820F51B4;
	sub_820F3F58(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_820F51B8:
	// lbz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,32(r11)
	REX_STORE_U8(ctx.r11.u32 + 32, ctx.r10.u8);
	// stb r29,32(r31)
	REX_STORE_U8(ctx.r31.u32 + 32, ctx.r29.u8);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r29,32(r9)
	REX_STORE_U8(ctx.r9.u32 + 32, ctx.r29.u8);
	// bl 0x820f3fd0
	ctx.lr = 0x820F51D8;
	sub_820F3FD0(ctx, base);
loc_820F51D8:
	// stb r29,32(r28)
	REX_STORE_U8(ctx.r28.u32 + 32, ctx.r29.u8);
loc_820F51DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8215e470
	ctx.lr = 0x820F51E4;
	sub_8215E470(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820f51f8
	if (ctx.cr6.eq) goto loc_820F51F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_820F51F8:
	// stw r25,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820FF0B0) {
	REX_FUNC_PROLOGUE();
	// lis r11,34
	ctx.r11.s64 = 2228224;
	// ori r11,r11,20256
	ctx.r11.u64 = ctx.r11.u64 | 20256;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF378) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r8,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r8.u32);
	// addi r11,r10,68
	ctx.r11.s64 = ctx.r10.s64 + 68;
	// stfs f1,68(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 68, temp.u32);
	// stw r5,72(r10)
	REX_STORE_U32(ctx.r10.u32 + 72, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF8F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820FF8F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,6048
	ctx.r9.s64 = ctx.r11.s64 + 6048;
	// addi r8,r10,5936
	ctx.r8.s64 = ctx.r10.s64 + 5936;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r31,r3,5136
	ctx.r31.s64 = ctx.r3.s64 + 5136;
	// stw r8,5144(r3)
	REX_STORE_U32(ctx.r3.u32 + 5144, ctx.r8.u32);
	// li r30,255
	ctx.r30.s64 = 255;
	// li r29,0
	ctx.r29.s64 = 0;
loc_820FF920:
	// lwzu r3,-20(r31)
	ea = -20 + ctx.r31.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ff930
	if (ctx.cr6.eq) goto loc_820FF930;
	// bl 0x8215e470
	ctx.lr = 0x820FF930;
	sub_8215E470(ctx, base);
loc_820FF930:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r29,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// bge 0x820ff920
	if (!ctx.cr0.lt) goto loc_820FF920;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821006C0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r9,r4,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f0,2392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2392);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x821006dc
	if (ctx.cr6.eq) goto loc_821006DC;
	// stfs f0,36(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 36, temp.u32);
loc_821006DC:
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821006ec
	if (ctx.cr6.eq) goto loc_821006EC;
	// stfs f0,40(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 40, temp.u32);
loc_821006EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821014F0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x821014F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,52(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82101578
	if (!ctx.cr6.gt) goto loc_82101578;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// addi r27,r11,5116
	ctx.r27.s64 = ctx.r11.s64 + 5116;
loc_82101524:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82101548
	if (!ctx.cr6.eq) goto loc_82101548;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82101548;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82101548:
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82101568
	if (ctx.cr6.eq) goto loc_82101568;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82101584
	if (ctx.cr6.eq) goto loc_82101584;
loc_82101568:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82101524
	if (ctx.cr6.lt) goto loc_82101524;
loc_82101578:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82101584:
	// stw r25,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82105A70) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82105ac8
	if (ctx.cr6.lt) goto loc_82105AC8;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82105ac8
	if (!ctx.cr6.lt) goto loc_82105AC8;
	// mulli r11,r4,1244
	ctx.r11.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(1244));
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,172(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82105ac8
	if (ctx.cr6.eq) goto loc_82105AC8;
	// lwz r4,116(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82105ac8
	if (ctx.cr6.eq) goto loc_82105AC8;
	// lwz r8,112(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82105AAC:
	// lwzx r3,r9,r8
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82105ad0
	if (ctx.cr6.eq) goto loc_82105AD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82105aac
	if (ctx.cr6.lt) goto loc_82105AAC;
loc_82105AC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82105AD0:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82105ac8
	if (ctx.cr6.eq) goto loc_82105AC8;
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,184(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r9,184(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r6,28(r9)
	REX_STORE_U32(ctx.r9.u32 + 28, ctx.r6.u32);
	// lwz r10,184(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 184);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r7,32(r8)
	REX_STORE_U32(ctx.r8.u32 + 32, ctx.r7.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107128) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82107130;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82107160;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r27,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// bl 0x82106648
	ctx.lr = 0x82107180;
	sub_82106648(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,8(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8210719C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82108AD0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r8,r9,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82108b14
	if (ctx.cr6.eq) goto loc_82108B14;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82108b14
	if (ctx.cr6.eq) goto loc_82108B14;
loc_82108AF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82108b1c
	if (ctx.cr6.eq) goto loc_82108B1C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82108af8
	if (!ctx.cr6.eq) goto loc_82108AF8;
loc_82108B14:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82108B1C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82108b14
	if (ctx.cr6.eq) goto loc_82108B14;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r10,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82109F10) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x820ef558
	ctx.lr = 0x82109F2C;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82109f6c
	if (ctx.cr6.eq) goto loc_82109F6C;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r8,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stb r11,20(r3)
	REX_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	REX_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
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
loc_82109F6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5104
	ctx.r9.s64 = ctx.r11.s64 + 5104;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// bl 0x820f3098
	ctx.lr = 0x82109F88;
	sub_820F3098(ctx, base);
}

DEFINE_REX_FUNC(sub_8210B090) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8210B098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,68(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r10,72(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8210b0c0
	if (!ctx.cr6.eq) goto loc_8210B0C0;
loc_8210B0B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8210B0C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x820f2688
	ctx.lr = 0x8210B0D0;
	sub_820F2688(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210b0b4
	if (ctx.cr6.eq) goto loc_8210B0B4;
	// lwz r31,68(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 68);
	// lwz r11,72(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8210b158
	if (ctx.cr6.eq) goto loc_8210B158;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r10,-30088
	ctx.r30.s64 = ctx.r10.s64 + -30088;
	// addi r27,r11,6904
	ctx.r27.s64 = ctx.r11.s64 + 6904;
loc_8210B0FC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215f3b8
	ctx.lr = 0x8210B10C;
	sub_8215F3B8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8210B114:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8210b114
	if (!ctx.cr6.eq) goto loc_8210B114;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rotlwi r5,r8,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x8210B148;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,72(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8210b0fc
	if (!ctx.cr6.eq) goto loc_8210B0FC;
loc_8210B158:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8210B16C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210D0B8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// bne cr6,0x8210d0d4
	if (!ctx.cr6.eq) goto loc_8210D0D4;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// stw r4,240(r3)
	REX_STORE_U32(ctx.r3.u32 + 240, ctx.r4.u32);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,156(r3)
	REX_STORE_U32(ctx.r3.u32 + 156, ctx.r10.u32);
	// blr 
	return;
loc_8210D0D4:
	// mulli r11,r5,88
	ctx.r11.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(88));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// stw r4,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r4.u32);
	// ori r9,r10,4
	ctx.r9.u64 = ctx.r10.u64 | 4;
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210DC18) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10192(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10192);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210DC38) {
	REX_FUNC_PROLOGUE();
	// lwz r3,10188(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 10188);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E0E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-3184(r1)
	ea = -3184 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820e8ab8
	ctx.lr = 0x8210E114;
	sub_820E8AB8(ctx, base);
	// cmplwi cr6,r3,18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 18, ctx.xer);
	// bne cr6,0x8210e130
	if (!ctx.cr6.eq) goto loc_8210E130;
loc_8210E11C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,3184
	ctx.r1.s64 = ctx.r1.s64 + 3184;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8210E130:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,87
	ctx.r10.u64 = ctx.r11.u64 | 87;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8210e11c
	if (ctx.cr6.eq) goto loc_8210E11C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,3080
	ctx.r5.s64 = 3080;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x820e8ff0
	ctx.lr = 0x8210E158;
	sub_820E8FF0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,3184
	ctx.r1.s64 = ctx.r1.s64 + 3184;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8210E788) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x820f16a0
	sub_820F16A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8210E9B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8210E9C0;
	__savegprlr_22(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8210e9e8
	if (ctx.cr6.eq) goto loc_8210E9E8;
	// stw r27,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
loc_8210E9E8:
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r30,r30,-17768
	ctx.r30.s64 = ctx.r30.s64 + -17768;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82115400
	ctx.lr = 0x8210EA04;
	sub_82115400(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210eae4
	if (ctx.cr6.eq) goto loc_8210EAE4;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8210e8c8
	ctx.lr = 0x8210EA1C;
	sub_8210E8C8(ctx, base);
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8210EA2C:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x8210ea2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210EA2C;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820b66c0
	ctx.lr = 0x8210EA40;
	sub_820B66C0(ctx, base);
	// lis r10,11552
	ctx.r10.s64 = 757071872;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r3.u32);
	// ori r9,r10,406
	ctx.r9.u64 = ctx.r10.u64 | 406;
	// stw r29,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r29.u32);
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// stw r11,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// bl 0x821152e0
	ctx.lr = 0x8210EA74;
	sub_821152E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821152c8
	ctx.lr = 0x8210EA80;
	sub_821152C8(ctx, base);
	// lwz r8,176(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8210eaf0
	if (!ctx.cr6.eq) goto loc_8210EAF0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r27,116(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,112(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r23,100(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// stw r10,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// lwz r22,96(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x820b7148
	ctx.lr = 0x8210EAB4;
	sub_820B7148(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x820f3ba0
	ctx.lr = 0x8210EADC;
	sub_820F3BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8210ebac
	if (!ctx.cr6.eq) goto loc_8210EBAC;
loc_8210EAE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_8210EAF0:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// lwz r8,132(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// lwz r23,116(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// stw r8,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r8.u32);
	// lwz r22,112(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x820b7148
	ctx.lr = 0x8210EB24;
	sub_820B7148(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bl 0x820f3ba0
	ctx.lr = 0x8210EB4C;
	sub_820F3BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8210eba4
	if (!ctx.cr6.eq) goto loc_8210EBA4;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,116(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r24,112(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r23,100(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r22,96(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// bl 0x820b7148
	ctx.lr = 0x8210EB74;
	sub_820B7148(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stw r27,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bl 0x820f3ba0
	ctx.lr = 0x8210EB9C;
	sub_820F3BA0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8210eae4
	if (ctx.cr6.eq) goto loc_8210EAE4;
loc_8210EBA4:
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8210EBAC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821152c8
	ctx.lr = 0x8210EBB8;
	sub_821152C8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// ori r8,r11,47380
	ctx.r8.u64 = ctx.r11.u64 | 47380;
	// ori r7,r10,47384
	ctx.r7.u64 = ctx.r10.u64 | 47384;
	// ori r6,r9,47352
	ctx.r6.u64 = ctx.r9.u64 | 47352;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stwx r5,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r5.u32);
	// stwx r4,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r4.u32);
	// stwx r25,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r25.u32);
	// beq cr6,0x8210ebf0
	if (ctx.cr6.eq) goto loc_8210EBF0;
	// stw r28,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
loc_8210EBF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82116264) {
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

DEFINE_REX_FUNC(sub_82116590) {
	REX_FUNC_PROLOGUE();
	// lwz r3,16032(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16032);
	// b 0x8215dd08
	sub_8215DD08(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82116750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82116758;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211677C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116794;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,36(r29)
	REX_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r11,400(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 400);
	// stw r11,40(r29)
	REX_STORE_U32(ctx.r29.u32 + 40, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r11.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// stw r11,52(r29)
	REX_STORE_U32(ctx.r29.u32 + 52, ctx.r11.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r11,56(r29)
	REX_STORE_U32(ctx.r29.u32 + 56, ctx.r11.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,60(r29)
	REX_STORE_U32(ctx.r29.u32 + 60, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821167E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82117700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82117708;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r30,r3,44
	ctx.r30.s64 = ctx.r3.s64 + 44;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211772C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117098
	ctx.lr = 0x82117734;
	sub_82117098(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82117748
	if (ctx.cr0.lt) goto loc_82117748;
	// lwz r11,152(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82117748:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211775C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821163e0
	ctx.lr = 0x82117764;
	sub_821163E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821188B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x821188B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// addi r25,r3,44
	ctx.r25.s64 = ctx.r3.s64 + 44;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821188F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,375
	ctx.r11.s64 = 375;
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r31.u32 / ctx.r11.u32 : 0);
	// mulli r11,r11,375
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(375));
	// subf. r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82118924
	if (ctx.cr0.eq) goto loc_82118924;
	// subf r11,r11,r31
	ctx.r11.u64 = ctx.r31.u64 - ctx.r11.u64;
	// cmplwi cr6,r11,32000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32000, ctx.xer);
	// bge cr6,0x82118918
	if (!ctx.cr6.lt) goto loc_82118918;
	// addi r11,r11,375
	ctx.r11.s64 = ctx.r11.s64 + 375;
loc_82118918:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82118924
	if (ctx.cr6.eq) goto loc_82118924;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82118924:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82118198
	ctx.lr = 0x8211893C;
	sub_82118198(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x82118a30
	if (ctx.cr0.lt) goto loc_82118A30;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// li r4,148
	ctx.r4.s64 = 148;
	// bl 0x821160e0
	ctx.lr = 0x82118964;
	sub_821160E0(ctx, base);
	// lwz r26,84(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82118990
	if (ctx.cr0.eq) goto loc_82118990;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,44(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 44);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82120cf8
	ctx.lr = 0x82118988;
	sub_82120CF8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82118994
	goto loc_82118994;
loc_82118990:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82118994:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821189ac
	if (!ctx.cr6.eq) goto loc_821189AC;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82118a30
	goto loc_82118A30;
loc_821189AC:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82120bf0
	ctx.lr = 0x821189C0;
	sub_82120BF0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// blt 0x821189fc
	if (ctx.cr0.lt) goto loc_821189FC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r26,4
	ctx.r3.s64 = ctx.r26.s64 + 4;
	// bl 0x8211e790
	ctx.lr = 0x821189D8;
	sub_8211E790(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821189f0
	if (ctx.cr0.eq) goto loc_821189F0;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82118a30
	goto loc_82118A30;
loc_821189F0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_821189FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82118A14;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82118A2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82118bc8
	ctx.lr = 0x82118A30;
	sub_82118BC8(ctx, base);
loc_82118A30:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82118A44;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82118a54
	if (!ctx.cr6.lt) goto loc_82118A54;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82116598
	ctx.lr = 0x82118A54;
	sub_82116598(ctx, base);
loc_82118A54:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821163e0
	ctx.lr = 0x82118A5C;
	sub_821163E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211BB90) {
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
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r31,r11,32600
	ctx.r31.s64 = ctx.r11.s64 + 32600;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823751a4
	ctx.lr = 0x8211BBB0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// ori r11,r11,6148
	ctx.r11.u64 = ctx.r11.u64 | 6148;
	// stwx r10,0,r11
	REX_MM_STORE_U32(ctx.r11.u32, ctx.r10.u32);
	// eieio 
	// li r11,320
	ctx.r11.s64 = 320;
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,-17392
	ctx.r4.s64 = ctx.r10.s64 + -17392;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8211BBD8:
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8211bcc4
	if (ctx.cr6.eq) goto loc_8211BCC4;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8211bcc4
	if (ctx.cr0.eq) goto loc_8211BCC4;
	// rlwinm. r11,r11,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8211bcc4
	if (!ctx.cr0.eq) goto loc_8211BCC4;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8211bcb8
	if (!ctx.cr6.gt) goto loc_8211BCB8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_8211BC0C:
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8211bc7c
	if (ctx.cr0.eq) goto loc_8211BC7C;
	// lwz r10,64(r11)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 64);
	// lvx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r3,r10,12,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r7,r10,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// bne 0x8211bc4c
	if (!ctx.cr0.eq) goto loc_8211BC4C;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r5,20(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// stw r5,84(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// stw r10,0(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8211BC4C:
	// rlwinm. r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8211bc68
	if (!ctx.cr0.eq) goto loc_8211BC68;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 4);
	// stw r5,24(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r5,88(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 88, ctx.r5.u32);
	// stw r10,4(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_8211BC68:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8211bc7c
	if (!ctx.cr6.eq) goto loc_8211BC7C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_MM_LOAD_U32(ctx.r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	REX_MM_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
loc_8211BC7C:
	// lhz r11,80(r11)
	ctx.r11.u64 = REX_MM_LOAD_U16(ctx.r11.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r7,r11,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// addis r7,r7,8187
	ctx.r7.s64 = ctx.r7.s64 + 536543232;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r7,r7,-31088
	ctx.r7.s64 = ctx.r7.s64 + -31088;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwbrx r11,0,r10
	REX_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(ctx.r11.u32));
	// eieio 
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211bc0c
	if (ctx.cr6.lt) goto loc_8211BC0C;
loc_8211BCB8:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_8211BCC4:
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bdnz 0x8211bbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8211BBD8;
	// lis r11,32746
	ctx.r11.s64 = 2146041856;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// ori r11,r11,6148
	ctx.r11.u64 = ctx.r11.u64 | 6148;
	// stwx r10,0,r11
	REX_MM_STORE_U32(ctx.r11.u32, ctx.r10.u32);
	// eieio 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375194
	ctx.lr = 0x8211BCE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_8211F4B8) {
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
	// bl 0x8211f450
	ctx.lr = 0x8211F4D8;
	sub_8211F450(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211f4e8
	if (ctx.cr0.eq) goto loc_8211F4E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x8211F4E8;
	sub_82118BC8(ctx, base);
loc_8211F4E8:
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

DEFINE_REX_FUNC(sub_82120100) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82120108;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// clrlwi. r11,r8,16
	ctx.r11.u64 = ctx.r8.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82120148
	if (!ctx.cr0.eq) goto loc_82120148;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82120134
	if (!ctx.cr6.eq) goto loc_82120134;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82120148
	goto loc_82120148;
loc_82120134:
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// li r10,32
	ctx.r10.s64 = 32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82120148:
	// addis r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 65536;
	// sth r6,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r6.u16);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// addi r10,r10,-18
	ctx.r10.s64 = ctx.r10.s64 + -18;
	// clrlwi r28,r5,16
	ctx.r28.u64 = ctx.r5.u32 & 0xFFFF;
	// sth r29,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r29.u16);
	// sth r10,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r10.u16);
	// clrlwi r30,r6,16
	ctx.r30.u64 = ctx.r6.u32 & 0xFFFF;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x82120198
	if (ctx.cr6.eq) goto loc_82120198;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mullw r10,r11,r7
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// b 0x8212020c
	goto loc_8212020C;
loc_82120198:
	// lhz r11,246(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 246);
	// li r10,7
	ctx.r10.s64 = 7;
	// mulli r9,r30,7
	ctx.r9.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(7));
	// sth r10,20(r31)
	REX_STORE_U16(ctx.r31.u32 + 20, ctx.r10.u16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mullw r9,r10,r7
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// sth r10,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r10.u16);
	// divwu r11,r9,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r9.u32 / ctx.r11.u32 : 0);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,9128
	ctx.r11.s64 = ctx.r11.s64 + 9128;
loc_821201F0:
	// lhzx r10,r8,r11
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lhzx r10,r8,r9
	ctx.r10.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r9.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U16(ea, ctx.r10.u16);
	ctx.r6.u32 = ea;
	// bdnz 0x821201f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821201F0;
loc_8212020C:
	// cmplwi cr6,r4,40
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 40, ctx.xer);
	// beq cr6,0x8212021c
	if (ctx.cr6.eq) goto loc_8212021C;
	// sth r5,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r5.u16);
	// b 0x821202b4
	goto loc_821202B4;
loc_8212021C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,-2
	ctx.r10.s64 = -2;
	// addi r9,r11,8224
	ctx.r9.s64 = ctx.r11.s64 + 8224;
	// sth r10,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// lwz r11,8224(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8224);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r8,8(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x8215e640
	ctx.lr = 0x82120264;
	sub_8215E640(ctx, base);
	// clrlwi. r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne 0x82120274
	if (!ctx.cr0.eq) goto loc_82120274;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82120274:
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// cmpwi cr6,r26,-1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -1, ctx.xer);
	// bne cr6,0x821202b0
	if (!ctx.cr6.eq) goto loc_821202B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x821202a8
	if (ctx.cr6.lt) goto loc_821202A8;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// bgt cr6,0x821202a8
	if (ctx.cr6.gt) goto loc_821202A8;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,32628
	ctx.r11.s64 = ctx.r11.s64 + 32628;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_821202A8:
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x821202b4
	goto loc_821202B4;
loc_821202B0:
	// stw r26,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
loc_821202B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82126070) {
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
	// lwz r31,44(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821260d4
	goto loc_821260D4;
loc_82126094:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821260dc
	if (ctx.cr6.lt) goto loc_821260DC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821260b4
	if (ctx.cr6.eq) goto loc_821260B4;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x821260b8
	goto loc_821260B8;
loc_821260B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821260B8:
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821260D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821260D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82126094
	if (!ctx.cr6.eq) goto loc_82126094;
loc_821260DC:
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

DEFINE_REX_FUNC(sub_821272D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821272D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127308;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82126200
	ctx.lr = 0x82127320;
	sub_82126200(ctx, base);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821163e0
	ctx.lr = 0x8212732C;
	sub_821163E0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82127344;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82129188) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82129190;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821291ac
	if (!ctx.cr6.eq) goto loc_821291AC;
loc_821291A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_821291AC:
	// lwz r31,0(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821291a0
	if (ctx.cr6.eq) goto loc_821291A0;
	// addi r27,r30,224
	ctx.r27.s64 = ctx.r30.s64 + 224;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821452f0
	ctx.lr = 0x821291C4;
	sub_821452F0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r29,236(r30)
	REX_STORE_U32(ctx.r30.u32 + 236, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,284(r30)
	REX_STORE_U32(ctx.r30.u32 + 284, ctx.r28.u32);
	// stw r29,240(r30)
	REX_STORE_U32(ctx.r30.u32 + 240, ctx.r29.u32);
	// lwz r3,356(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 356);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// rotlwi r5,r11,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// bl 0x8215ec60
	ctx.lr = 0x821291EC;
	sub_8215EC60(ctx, base);
	// lhz r7,34(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// li r8,-2
	ctx.r8.s64 = -2;
	// stw r29,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r29.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// stw r29,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r29.u32);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82129278
	if (ctx.cr6.eq) goto loc_82129278;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82129218:
	// lwz r7,256(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// sth r4,122(r5)
	REX_STORE_U16(ctx.r5.u32 + 122, ctx.r4.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lhz r7,122(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 122);
	// sth r7,124(r9)
	REX_STORE_U16(ctx.r9.u32 + 124, ctx.r7.u16);
	// lwz r6,256(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r3,424(r5)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r5.u32 + 424);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// sth r6,-2(r9)
	REX_STORE_U16(ctx.r9.u32 + -2, ctx.r6.u16);
	// lwz r9,320(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// sth r29,116(r7)
	REX_STORE_U16(ctx.r7.u32 + 116, ctx.r29.u16);
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82129218
	if (ctx.cr6.lt) goto loc_82129218;
loc_82129278:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r29,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// rldicr r11,r10,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r8,276(r30)
	REX_STORE_U32(ctx.r30.u32 + 276, ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// std r29,184(r30)
	REX_STORE_U64(ctx.r30.u32 + 184, ctx.r29.u64);
	// stw r29,160(r30)
	REX_STORE_U32(ctx.r30.u32 + 160, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r10,r6,1
	ctx.r10.u64 = ctx.r6.u64 ^ 1;
	// stw r9,164(r30)
	REX_STORE_U32(ctx.r30.u32 + 164, ctx.r9.u32);
	// stw r29,60(r30)
	REX_STORE_U32(ctx.r30.u32 + 60, ctx.r29.u32);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r28,696(r30)
	REX_STORE_U32(ctx.r30.u32 + 696, ctx.r28.u32);
	// stw r29,300(r30)
	REX_STORE_U32(ctx.r30.u32 + 300, ctx.r29.u32);
	// stw r5,692(r30)
	REX_STORE_U32(ctx.r30.u32 + 692, ctx.r5.u32);
	// stw r29,156(r30)
	REX_STORE_U32(ctx.r30.u32 + 156, ctx.r29.u32);
	// std r11,168(r30)
	REX_STORE_U64(ctx.r30.u32 + 168, ctx.r11.u64);
	// std r11,176(r30)
	REX_STORE_U64(ctx.r30.u32 + 176, ctx.r11.u64);
	// sth r29,154(r30)
	REX_STORE_U16(ctx.r30.u32 + 154, ctx.r29.u16);
	// stw r29,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// bl 0x82141568
	ctx.lr = 0x821292DC;
	sub_82141568(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212FF48) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// beq cr6,0x8212ff78
	if (ctx.cr6.eq) goto loc_8212FF78;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// beq cr6,0x8212ff6c
	if (ctx.cr6.eq) goto loc_8212FF6C;
	// li r9,11
	ctx.r9.s64 = 11;
	// addi r8,r11,8768
	ctx.r8.s64 = ctx.r11.s64 + 8768;
	// b 0x8212ff80
	goto loc_8212FF80;
loc_8212FF6C:
	// li r9,22
	ctx.r9.s64 = 22;
	// addi r8,r11,6104
	ctx.r8.s64 = ctx.r11.s64 + 6104;
	// b 0x8212ff80
	goto loc_8212FF80;
loc_8212FF78:
	// li r9,30
	ctx.r9.s64 = 30;
	// addi r8,r11,15824
	ctx.r8.s64 = ctx.r11.s64 + 15824;
loc_8212FF80:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8212ffe0
	if (ctx.cr6.eq) goto loc_8212FFE0;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_8212FF90:
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8212ffa8
	if (!ctx.cr6.eq) goto loc_8212FFA8;
	// lhz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x8212ffc0
	if (ctx.cr6.eq) goto loc_8212FFC0;
loc_8212FFA8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8212ff90
	if (ctx.cr6.lt) goto loc_8212FF90;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8212FFC0:
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8212ffe0
	if (ctx.cr6.eq) goto loc_8212FFE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8212FFE0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821312C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821312C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r9,528(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_821312E4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x82131310
	goto loc_82131310;
loc_821312EC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82131304
	if (ctx.cr6.eq) goto loc_82131304;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82131308
	goto loc_82131308;
loc_82131304:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82131308:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r27,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r27.u32);
loc_82131310:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821312ec
	if (!ctx.cr6.eq) goto loc_821312EC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82131330
	if (ctx.cr6.eq) goto loc_82131330;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,40
	ctx.r8.s64 = ctx.r8.s64 + 40;
	// cmplwi cr6,r7,13
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 13, ctx.xer);
	// blt cr6,0x821312e4
	if (ctx.cr6.lt) goto loc_821312E4;
loc_82131330:
	// lwz r30,540(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 540);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r10,536(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// lwz r28,552(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 552);
	// addi r29,r11,-17520
	ctx.r29.s64 = ctx.r11.s64 + -17520;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8213138c
	if (ctx.cr6.eq) goto loc_8213138C;
	// lwz r3,532(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82131360
	if (ctx.cr6.eq) goto loc_82131360;
	// bl 0x82118bc8
	ctx.lr = 0x8213135C;
	sub_82118BC8(ctx, base);
	// stw r27,532(r31)
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r27.u32);
loc_82131360:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821160e0
	ctx.lr = 0x82131378;
	sub_821160E0(ctx, base);
	// stw r3,532(r31)
	REX_STORE_U32(ctx.r31.u32 + 532, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821313e0
	if (ctx.cr0.eq) goto loc_821313E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r30,536(r31)
	REX_STORE_U32(ctx.r31.u32 + 536, ctx.r30.u32);
loc_8213138C:
	// lwz r11,548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 548);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821313d8
	if (!ctx.cr6.gt) goto loc_821313D8;
	// lwz r3,544(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 544);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821313ac
	if (ctx.cr6.eq) goto loc_821313AC;
	// bl 0x82118bc8
	ctx.lr = 0x821313A8;
	sub_82118BC8(ctx, base);
	// stw r27,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r27.u32);
loc_821313AC:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821160e0
	ctx.lr = 0x821313C4;
	sub_821160E0(ctx, base);
	// stw r3,544(r31)
	REX_STORE_U32(ctx.r31.u32 + 544, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821313e0
	if (ctx.cr0.eq) goto loc_821313E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r28,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r28.u32);
loc_821313D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_821313E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821313d8
	goto loc_821313D8;
}

DEFINE_REX_FUNC(sub_82132F60) {
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
	ctx.lr = 0x82132F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82133b20
	ctx.lr = 0x82132F9C;
	sub_82133B20(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82132FB8;
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

DEFINE_REX_FUNC(sub_82133B90) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133BBC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133BD4;
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

DEFINE_REX_FUNC(sub_821345E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821345E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82134368
	ctx.lr = 0x821345F8;
	sub_82134368(ctx, base);
	// lwz r31,212(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// b 0x82134650
	goto loc_82134650;
loc_82134600:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8213461c
	if (ctx.cr6.eq) goto loc_8213461C;
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82134620
	goto loc_82134620;
loc_8213461C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82134620:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82134634
	if (ctx.cr6.eq) goto loc_82134634;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82134654
	if (!ctx.cr6.eq) goto loc_82134654;
loc_82134634:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8211a1b8
	ctx.lr = 0x8213463C;
	sub_8211A1B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82134488
	ctx.lr = 0x82134648;
	sub_82134488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82134654
	if (!ctx.cr0.lt) goto loc_82134654;
loc_82134650:
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82134654:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82134600
	if (!ctx.cr6.eq) goto loc_82134600;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82135478) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r9,14(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 14);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// beq cr6,0x821354a8
	if (ctx.cr6.eq) goto loc_821354A8;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// beq cr6,0x821354a8
	if (ctx.cr6.eq) goto loc_821354A8;
	// cmplwi cr6,r9,24
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24, ctx.xer);
	// beq cr6,0x821354a8
	if (ctx.cr6.eq) goto loc_821354A8;
	// addi r11,r9,-32
	ctx.r11.s64 = ctx.r9.s64 + -32;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_821354A8:
	// lhz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// bne cr6,0x82135500
	if (!ctx.cr6.eq) goto loc_82135500;
	// lhz r11,18(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 18);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821354f0
	if (ctx.cr0.eq) goto loc_821354F0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x821354f0
	if (ctx.cr6.eq) goto loc_821354F0;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// beq cr6,0x821354f0
	if (ctx.cr6.eq) goto loc_821354F0;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x821354f0
	if (ctx.cr6.eq) goto loc_821354F0;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x821354f0
	if (ctx.cr6.eq) goto loc_821354F0;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
loc_821354F0:
	// subfc r8,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r8.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82135500:
	// lhz r11,2(r3)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r3.u32 + 2);
	// lhz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r3.u32 + 12);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r7,8(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213B560) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8213B568;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215eba8
	ctx.lr = 0x8213B570;
	__savefpr_28(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r27,0(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r16,4(r3)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r18,24(r3)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r15,28(r3)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r14,32(r3)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// beq cr6,0x8213b5a4
	if (ctx.cr6.eq) goto loc_8213B5A4;
	// li r15,1
	ctx.r15.s64 = 1;
	// li r18,1
	ctx.r18.s64 = 1;
loc_8213B5A4:
	// lwz r30,16(r22)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213b5d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B5D8;
	// bdzf 4*cr6+eq,0x8213b5e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B5E8;
	// bdzf 4*cr6+eq,0x8213b608
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B608;
	// bdzf 4*cr6+eq,0x8213b5f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B5F8;
	// bdzf 4*cr6+eq,0x8213b614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B614;
	// bne cr6,0x8213b620
	if (!ctx.cr6.eq) goto loc_8213B620;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r17,1
	ctx.r17.s64 = 1;
	// addi r26,r11,-5080
	ctx.r26.s64 = ctx.r11.s64 + -5080;
	// b 0x8213b62c
	goto loc_8213B62C;
loc_8213B5D8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r17,2
	ctx.r17.s64 = 2;
	// addi r26,r11,-19264
	ctx.r26.s64 = ctx.r11.s64 + -19264;
	// b 0x8213b62c
	goto loc_8213B62C;
loc_8213B5E8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r17,3
	ctx.r17.s64 = 3;
	// addi r26,r11,-19224
	ctx.r26.s64 = ctx.r11.s64 + -19224;
	// b 0x8213b62c
	goto loc_8213B62C;
loc_8213B5F8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r17,3
	ctx.r17.s64 = 3;
	// addi r26,r11,-5032
	ctx.r26.s64 = ctx.r11.s64 + -5032;
	// b 0x8213b62c
	goto loc_8213B62C;
loc_8213B608:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r26,r11,-19152
	ctx.r26.s64 = ctx.r11.s64 + -19152;
	// b 0x8213b628
	goto loc_8213B628;
loc_8213B614:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r26,r11,-4960
	ctx.r26.s64 = ctx.r11.s64 + -4960;
	// b 0x8213b628
	goto loc_8213B628;
loc_8213B620:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r26,r11,-4912
	ctx.r26.s64 = ctx.r11.s64 + -4912;
loc_8213B628:
	// li r17,4
	ctx.r17.s64 = 4;
loc_8213B62C:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8213b8c4
	if (!ctx.cr6.eq) goto loc_8213B8C4;
	// divwu. r3,r10,r18
	ctx.r3.u64 = uint32_t(ctx.r18.u32 ? ctx.r10.u32 / ctx.r18.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x8213b8b4
	if (ctx.cr0.eq) goto loc_8213B8B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r22)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f8,26836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26836);
	ctx.f8.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,26832(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 26832);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,26828(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 26828);
	ctx.f12.f64 = double(temp.f32);
	// lfs f7,26824(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 26824);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,4672(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4672);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4420(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4420);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,2104(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2104);
	ctx.f6.f64 = double(temp.f32);
loc_8213B680:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8213b898
	if (ctx.cr6.eq) goto loc_8213B898;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
loc_8213B694:
	// fmr f0,f6
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f6.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8213b86c
	if (ctx.cr6.eq) goto loc_8213B86C;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_8213B6B0:
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x8213b6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B6FC;
	// bdzf 4*cr6+eq,0x8213b728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B728;
	// bdzf 4*cr6+eq,0x8213b7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B7D0;
	// bdzf 4*cr6+eq,0x8213b77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B77C;
	// bdzf 4*cr6+eq,0x8213b800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_8213B800;
	// bne cr6,0x8213b830
	if (!ctx.cr6.eq) goto loc_8213B830;
	// lbzx r29,r8,r27
	ctx.r29.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r29,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r29.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fsubs f2,f3,f10
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f10.f64));
	// fmuls f1,f2,f13
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmadds f0,f1,f9,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f1.f64, ctx.f9.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B6FC:
	// lhz r29,0(r7)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r7.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// std r29,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r29.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f7,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f7.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B728:
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbzx r28,r10,r27
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// add r26,r10,r27
	ctx.r26.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r29,2(r29)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r26,1(r26)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// or r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 | ctx.r26.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r29,r29,12
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 12;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B77C:
	// add r29,r10,r27
	ctx.r29.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lbzx r28,r10,r27
	ctx.r28.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r27.u32);
	// add r26,r10,r27
	ctx.r26.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lbz r29,2(r29)
	ctx.r29.u64 = REX_LOAD_U8(ctx.r29.u32 + 2);
	// lbz r26,1(r26)
	ctx.r26.u64 = REX_LOAD_U8(ctx.r26.u32 + 1);
	// rotlwi r29,r29,8
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 8);
	// or r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 | ctx.r26.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// or r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 | ctx.r28.u64;
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r29.u64);
	// lfd f5,104(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B7D0:
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r29,r29,12
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 12;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lfd f5,112(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f12,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f12.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B800:
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r29,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r29.s32 >> 8;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r29.u64);
	// lfd f5,120(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f11,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f11.f64, ctx.f0.f64)));
	// b 0x8213b854
	goto loc_8213B854;
loc_8213B830:
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r11.u32 = ea;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r29,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r29.u64);
	// lfd f5,128(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f13
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmadds f0,f2,f8,f0
	ctx.f0.f64 = double(float(std::fma(ctx.f2.f64, ctx.f8.f64, ctx.f0.f64)));
loc_8213B854:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r18
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x8213b6b0
	if (ctx.cr6.lt) goto loc_8213B6B0;
loc_8213B86C:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8213b884
	if (ctx.cr6.eq) goto loc_8213B884;
	// lfs f13,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x8213b888
	goto loc_8213B888;
loc_8213B884:
	// stfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
loc_8213B888:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmplw cr6,r5,r15
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8213b694
	if (ctx.cr6.lt) goto loc_8213B694;
loc_8213B898:
	// mullw r11,r17,r18
	ctx.r11.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r18.s32);
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r16,r10,r16
	ctx.r16.u64 = ctx.r10.u64 + ctx.r16.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x8213b680
	if (ctx.cr6.lt) goto loc_8213B680;
loc_8213B8B4:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215ebf4
	ctx.lr = 0x8213B8C0;
	__restfpr_28(ctx, base);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_8213B8C4:
	// divwu. r19,r10,r18
	ctx.r19.u64 = uint32_t(ctx.r18.u32 ? ctx.r10.u32 / ctx.r18.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x8213b8b4
	if (ctx.cr0.eq) goto loc_8213B8B4;
	// mullw r21,r17,r18
	ctx.r21.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r18.s32);
	// rlwinm r20,r15,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
loc_8213B8D8:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// lwz r10,12(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// beq cr6,0x8213b990
	if (ctx.cr6.eq) goto loc_8213B990;
	// clrldi r9,r23,32
	ctx.r9.u64 = ctx.r23.u64 & 0xFFFFFFFF;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// std r9,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// mr r24,r15
	ctx.r24.u64 = ctx.r15.u64;
	// addi r29,r10,-4
	ctx.r29.s64 = ctx.r10.s64 + -4;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f28,f13
	ctx.f28.f64 = double(float(ctx.f13.f64));
loc_8213B90C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f31,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r28)
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8213B920;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmadds f0,f31,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f31.f64, ctx.f28.f64, ctx.f30.f64)));
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r18,1
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 1, ctx.xer);
	// fmuls f31,f1,f0
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// ble cr6,0x8213b968
	if (!ctx.cr6.gt) goto loc_8213B968;
	// add r30,r17,r27
	ctx.r30.u64 = ctx.r17.u64 + ctx.r27.u64;
	// addi r31,r18,-1
	ctx.r31.s64 = ctx.r18.s64 + -1;
loc_8213B940:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfsu f30,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f30.f64 = double(temp.f32);
	ctx.r29.u32 = ea;
	// lfsu f29,4(r28)
	ea = 4 + ctx.r28.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f29.f64 = double(temp.f32);
	ctx.r28.u32 = ea;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8213B954;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmadds f0,f30,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(std::fma(ctx.f30.f64, ctx.f28.f64, ctx.f29.f64)));
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 + ctx.r17.u64;
	// fmadds f31,f1,f0,f31
	ctx.f31.f64 = double(float(std::fma(ctx.f1.f64, ctx.f0.f64, ctx.f31.f64)));
	// bne 0x8213b940
	if (!ctx.cr0.eq) goto loc_8213B940;
loc_8213B968:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x8213b980
	if (ctx.cr6.eq) goto loc_8213B980;
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,0(r25)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x8213b984
	goto loc_8213B984;
loc_8213B980:
	// stfs f31,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r25.u32 + 0, temp.u32);
loc_8213B984:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bne 0x8213b90c
	if (!ctx.cr0.eq) goto loc_8213B90C;
loc_8213B990:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r27,r21,r27
	ctx.r27.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r16,r20,r16
	ctx.r16.u64 = ctx.r20.u64 + ctx.r16.u64;
	// cmplw cr6,r23,r19
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x8213b8d8
	if (ctx.cr6.lt) goto loc_8213B8D8;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215ebf4
	ctx.lr = 0x8213B9B0;
	__restfpr_28(ctx, base);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82144500) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82144508;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lhz r26,34(r3)
	ctx.r26.u64 = REX_LOAD_U16(ctx.r3.u32 + 34);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82144534
	if (!ctx.cr6.lt) goto loc_82144534;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,548(r27)
	REX_STORE_U32(ctx.r27.u32 + 548, ctx.r25.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82144534:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821407f0
	ctx.lr = 0x82144544;
	sub_821407F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,548(r27)
	REX_STORE_U32(ctx.r27.u32 + 548, ctx.r3.u32);
	// beq cr6,0x82144620
	if (ctx.cr6.eq) goto loc_82144620;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x8214455C;
	sub_8215EC60(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 548);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// stw r25,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// blt cr6,0x82144628
	if (ctx.cr6.lt) goto loc_82144628;
	// li r31,4
	ctx.r31.s64 = 4;
loc_82144574:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821407f0
	ctx.lr = 0x8214457C;
	sub_821407F0(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 548);
	// stwx r3,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82144620
	if (ctx.cr6.eq) goto loc_82144620;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821445A4;
	sub_8215EC60(ctx, base);
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// ble cr6,0x82144604
	if (!ctx.cr6.gt) goto loc_82144604;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82144604
	if (!ctx.cr6.gt) goto loc_82144604;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_821445BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821407f0
	ctx.lr = 0x821445C4;
	sub_821407F0(ctx, base);
	// lwz r11,548(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 548);
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// stwx r3,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r9,548(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 548);
	// lwzx r11,r31,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwzx r8,r11,r30
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82144620
	if (ctx.cr6.eq) goto loc_82144620;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rotlwi r3,r8,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821445F4;
	sub_8215EC60(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r28
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x821445bc
	if (ctx.cr6.lt) goto loc_821445BC;
loc_82144604:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82144574
	if (!ctx.cr6.gt) goto loc_82144574;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
loc_82144620:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
loc_82144628:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82146F70) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82146f8c
	if (ctx.cr6.lt) goto loc_82146F8C;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r7.u16);
	// b 0x82146fb0
	goto loc_82146FB0;
loc_82146F8C:
	// subf r6,r10,r11
	ctx.r6.u64 = ctx.r11.u64 - ctx.r10.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r11,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// sth r6,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r6.u16);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82146FB0:
	// sth r11,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r11.u16);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// bne cr6,0x82147000
	if (!ctx.cr6.eq) goto loc_82147000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,156(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r7
	ctx.r11.s64 = ctx.r7.s16;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r5,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r3.u16);
	// sth r3,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r3.u16);
	// blr 
	return;
loc_82147000:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r11,148(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lhz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 0);
	// lhz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r9.u32 + 0);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// addze r5,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r5.s64 = temp.s64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,0(r8)
	REX_STORE_U16(ctx.r8.u32 + 0, ctx.r4.u16);
	// sth r4,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r4.u16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214B720) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// lwz r11,-14848(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + -14848);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214b774
	if (!ctx.cr6.eq) goto loc_8214B774;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r11,-15872
	ctx.r10.s64 = ctx.r11.s64 + -15872;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8214B748:
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
	// addi r5,r9,32
	ctx.r5.s64 = ctx.r9.s64 + 32;
	// srawi r9,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r9,15
	ctx.r4.s64 = ctx.r9.s64 + 15;
	// slw r3,r5,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r4.u8 & 0x3F));
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8214b748
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214B748;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,-14848(r8)
	REX_STORE_U32(ctx.r8.u32 + -14848, ctx.r11.u32);
loc_8214B774:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8214D658) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8214D660;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,116(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r10,120(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mulli r9,r9,152
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(152));
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// lwz r25,0(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwzx r28,r9,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// lwz r8,96(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bne cr6,0x8214d6c8
	if (!ctx.cr6.eq) goto loc_8214D6C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8214D6C8:
	// addi r30,r11,224
	ctx.r30.s64 = ctx.r11.s64 + 224;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8214d7b0
	if (!ctx.cr6.eq) goto loc_8214D7B0;
	// bl 0x82145d70
	ctx.lr = 0x8214D6E8;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214d9bc
	if (ctx.cr6.lt) goto loc_8214D9BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d740
	if (!ctx.cr6.eq) goto loc_8214D740;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lfs f0,12624(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12624);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stfs f0,0(r9)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,12620(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12620);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,8(r6)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,12(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8214D740:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214D754;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214d9bc
	if (ctx.cr6.lt) goto loc_8214D9BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d9bc
	if (!ctx.cr6.eq) goto loc_8214D9BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,148(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// lfs f0,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfs f13,2104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f13,8(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfs f0,12(r4)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8214D7B0:
	// bl 0x82145d70
	ctx.lr = 0x8214D7B4;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214d9bc
	if (ctx.cr6.lt) goto loc_8214D9BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d878
	if (!ctx.cr6.eq) goto loc_8214D878;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// stw r8,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// lfs f0,2280(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x8214d844
	if (ctx.cr6.lt) goto loc_8214D844;
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// addi r7,r28,-3
	ctx.r7.s64 = ctx.r28.s64 + -3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r8,r9,r26
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r26.s32);
loc_8214D7FC:
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stfsx f0,r8,r6
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r6.u32, temp.u32);
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r8,148(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r5,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r6,r5
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r5.u32, temp.u32);
	// lwz r6,148(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f0,r4,r6
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r6.u32, temp.u32);
	// blt cr6,0x8214d7fc
	if (ctx.cr6.lt) goto loc_8214D7FC;
loc_8214D844:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8214d9bc
	if (!ctx.cr6.lt) goto loc_8214D9BC;
	// subf r9,r11,r28
	ctx.r9.u64 = ctx.r28.u64 - ctx.r11.u64;
	// addi r8,r28,1
	ctx.r8.s64 = ctx.r28.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8214D85C:
	// lwz r9,148(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r8.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8214d85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214D85C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8214D878:
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82145d70
	ctx.lr = 0x8214D88C;
	sub_82145D70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8214d9bc
	if (ctx.cr6.lt) goto loc_8214D9BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8214d9b4
	if (!ctx.cr6.eq) goto loc_8214D9B4;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r10,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// ble cr6,0x8214d9bc
	if (!ctx.cr6.gt) goto loc_8214D9BC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
loc_8214D8C4:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8214d958
	if (ctx.cr6.lt) goto loc_8214D958;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r6,3
	ctx.r30.s64 = ctx.r6.s64 + 3;
	// addi r29,r28,-3
	ctx.r29.s64 = ctx.r28.s64 + -3;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwzx r7,r9,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r9,r7,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
loc_8214D8EC:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r23,148(r31)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r8,r10,12
	ctx.r8.s64 = ctx.r10.s64 + 12;
	// addi r22,r4,2
	ctx.r22.s64 = ctx.r4.s64 + 2;
	// add r21,r30,r11
	ctx.r21.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stfsx f0,r7,r23
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r23.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lfs f13,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r4,r22,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// rlwinm r7,r21,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lfs f12,-4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,148(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// stfsx f12,r4,r5
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + ctx.r5.u32, temp.u32);
	// lwz r4,148(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f11,r9,r8
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stfsx f11,r7,r4
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// blt cr6,0x8214d8ec
	if (ctx.cr6.lt) goto loc_8214D8EC;
loc_8214D958:
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x8214d99c
	if (!ctx.cr6.lt) goto loc_8214D99C;
	// lwz r9,548(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 548);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r11,r28
	ctx.r7.u64 = ctx.r28.u64 - ctx.r11.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r9,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lwzx r9,r5,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r27.u32);
loc_8214D97C:
	// add r8,r6,r11
	ctx.r8.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r7,148(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 148);
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stfsx f0,r5,r7
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r7.u32, temp.u32);
	// bdnz 0x8214d97c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8214D97C;
loc_8214D99C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + ctx.r28.u64;
	// bne 0x8214d8c4
	if (!ctx.cr0.eq) goto loc_8214D8C4;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8214D9B4:
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
loc_8214D9BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215A910) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x8215A918;
	__savegprlr_16(ctx, base);
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8215eba8
	ctx.lr = 0x8215A920;
	__savefpr_28(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,296(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 296);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// bl 0x82147330
	ctx.lr = 0x8215A938;
	sub_82147330(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,156(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r18.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r19,0(r18)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r22,144(r18)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r18.u32 + 144);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r21,12(r18)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f0,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r17,20(r18)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r18.u32 + 20);
	// fdivs f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fmuls f31,f28,f1
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f1.f64));
	// bne cr6,0x8215aa1c
	if (!ctx.cr6.eq) goto loc_8215AA1C;
	// lwz r11,264(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x8215A988;
	sub_8215EC60(ctx, base);
	// lwz r10,264(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// lwz r9,268(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x8215a9e4
	if (!ctx.cr6.lt) goto loc_8215A9E4;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r19,-4
	ctx.r9.s64 = ctx.r19.s64 + -4;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r7,r22,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_8215A9A8:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lfsx f0,r7,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r6,268(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8215a9a8
	if (ctx.cr6.lt) goto loc_8215A9A8;
loc_8215A9E4:
	// lhz r11,118(r18)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r18.u32 + 118);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,268(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x8215AA08;
	sub_8215EC60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8215ebf4
	ctx.lr = 0x8215AA18;
	__restfpr_28(ctx, base);
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
loc_8215AA1C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r6,264(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lfs f0,292(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// ori r30,r10,26125
	ctx.r30.u64 = ctx.r10.u64 | 26125;
	// ori r31,r9,62303
	ctx.r31.u64 = ctx.r9.u64 | 62303;
	// lfs f29,26224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 26224);
	ctx.f29.f64 = double(temp.f32);
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// fmuls f30,f0,f29
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// blt cr6,0x8215abc0
	if (ctx.cr6.lt) goto loc_8215ABC0;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
loc_8215AA54:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r5,264(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// lfsx f0,r4,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,264(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lfsx f7,r3,r25
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfs f1,8(r10)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r4,264(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// lfsx f0,r3,r25
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r3,r4,r30
	ctx.r3.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r3,r31
	ctx.r8.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// subf r5,r5,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r5.u64;
	// lwz r4,264(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r3,r25
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r25.u32);
	ctx.f7.f64 = double(temp.f32);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f6,104(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f3,f7
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fmuls f1,f2,f31
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// stfsu f1,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x8215aa54
	if (ctx.cr6.lt) goto loc_8215AA54;
loc_8215ABC0:
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8215ac40
	if (!ctx.cr6.lt) goto loc_8215AC40;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 + ctx.r22.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215ABE4:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,264(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 264);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// lfsx f12,r8,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// std r3,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r3.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmuls f9,f10,f12
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// stfsu f8,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8215abe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215ABE4;
loc_8215AC40:
	// lwz r26,404(r28)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r28.u32 + 404);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8215af90
	if (!ctx.cr6.lt) goto loc_8215AF90;
	// subf r11,r29,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8215aec8
	if (ctx.cr6.lt) goto loc_8215AEC8;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-4
	ctx.r4.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r27,r26,-3
	ctx.r27.s64 = ctx.r26.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r29,2
	ctx.r7.s64 = ctx.r29.s64 + 2;
	// addi r8,r19,-4
	ctx.r8.s64 = ctx.r19.s64 + -4;
	// add r10,r6,r22
	ctx.r10.u64 = ctx.r6.u64 + ctx.r22.u64;
	// subf r3,r22,r25
	ctx.r3.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_8215AC88:
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r20,0(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r6,r20,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r20.u64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lwz r6,308(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,4(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// blt cr6,0x8215ace4
	if (ctx.cr6.lt) goto loc_8215ACE4;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215ACE4:
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f13,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r20,r7,-1
	ctx.r20.s64 = ctx.r7.s64 + -1;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,-4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r16,0(r11)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r5,r16,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r16.u64;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f6,88(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r6,308(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r20,r6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x8215ad70
	if (ctx.cr6.lt) goto loc_8215AD70;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215AD70:
	// lwz r6,8(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lfsx f13,r3,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,0(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r20,0(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// subf r5,r20,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r20.u64;
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r6.u64);
	// lfd f6,112(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r6,308(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x8215adf8
	if (ctx.cr6.lt) goto loc_8215ADF8;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215ADF8:
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r20,r7,1
	ctx.r20.s64 = ctx.r7.s64 + 1;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r16,0(r11)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r5,r6,r30
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r30.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r6,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r5,r16,r6
	ctx.r5.u64 = ctx.r6.u64 - ctx.r16.u64;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// extsw r6,r5
	ctx.r6.s64 = ctx.r5.s32;
	// std r6,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r6.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lwz r6,308(r28)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,4(r5)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpw cr6,r20,r6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r6.s32, ctx.xer);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f0,f4,f30
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// blt cr6,0x8215ae84
	if (ctx.cr6.lt) goto loc_8215AE84;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_8215AE84:
	// lwzu r6,16(r8)
	ea = 16 + ctx.r8.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// lfsu f13,16(r4)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r4.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r4.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// extsw r6,r6
	ctx.r6.s64 = ctx.r6.s32;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// std r6,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,8(r10)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x8215ac88
	if (ctx.cr6.lt) goto loc_8215AC88;
loc_8215AEC8:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8215af90
	if (!ctx.cr6.lt) goto loc_8215AF90;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r29,r26
	ctx.r10.u64 = ctx.r26.u64 - ctx.r29.u64;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// rlwinm r8,r23,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// addi r6,r9,-4
	ctx.r6.s64 = ctx.r9.s64 + -4;
	// subf r5,r22,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r22.u64;
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_8215AEFC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r10,r30
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r9,r3,r31
	ctx.r9.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r4,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r4.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lwz r10,308(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfd f0,136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmpw cr6,r29,r9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r9.s32, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f12,f30
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// blt cr6,0x8215af58
	if (ctx.cr6.lt) goto loc_8215AF58;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
loc_8215AF58:
	// lwzu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lfsx f13,r5,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f7,f8,f31
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// stfs f7,0(r7)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x8215aefc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215AEFC;
loc_8215AF90:
	// lwz r11,268(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8215b4b0
	if (!ctx.cr6.lt) goto loc_8215B4B0;
	// li r20,0
	ctx.r20.s64 = 0;
	// add r21,r21,r23
	ctx.r21.u64 = ctx.r21.u64 + ctx.r23.u64;
	// rlwinm r26,r23,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
loc_8215AFA8:
	// lwz r10,308(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 308);
	// add r9,r10,r26
	ctx.r9.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r29,r8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8215afc4
	if (ctx.cr6.lt) goto loc_8215AFC4;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
loc_8215AFC4:
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// blt cr6,0x8215afdc
	if (ctx.cr6.lt) goto loc_8215AFDC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8215AFDC:
	// lbz r9,0(r21)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8215b1fc
	if (!ctx.cr6.eq) goto loc_8215B1FC;
	// lwzx r3,r20,r17
	ctx.r3.u64 = REX_LOAD_U32(ctx.r20.u32 + ctx.r17.u32);
	// bl 0x82147330
	ctx.lr = 0x8215AFF0;
	sub_82147330(ctx, base);
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// lfsx f0,r11,r20
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmuls f12,f13,f28
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f0,f12,f29
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// bge cr6,0x8215b1f4
	if (!ctx.cr6.lt) goto loc_8215B1F4;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8215b17c
	if (ctx.cr6.lt) goto loc_8215B17C;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r6,r27,-3
	ctx.r6.s64 = ctx.r27.s64 + -3;
	// add r10,r8,r22
	ctx.r10.u64 = ctx.r8.u64 + ctx.r22.u64;
	// subf r5,r22,r25
	ctx.r5.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_8215B03C:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r3,r8,r30
	ctx.r3.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// add r7,r3,r31
	ctx.r7.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfs f13,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,136(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,-4(r10)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfsx f7,r5,r10
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f6,128(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f3,f7,f4
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,0(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfs f1,12(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r3.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stfs f9,4(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r3,r30
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r7,r8,r31
	ctx.r7.u64 = ctx.r8.u64 + ctx.r31.u64;
	// srawi r8,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 2;
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lfsu f13,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f13.f64 = double(temp.f32);
	ctx.r9.u32 = ea;
	// subf r4,r4,r8
	ctx.r4.u64 = ctx.r8.u64 - ctx.r4.u64;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r3.u64);
	// lfd f8,112(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fmuls f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x8215b03c
	if (ctx.cr6.lt) goto loc_8215B03C;
loc_8215B17C:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8215b1f4
	if (!ctx.cr6.lt) goto loc_8215B1F4;
	// subf r9,r29,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r29.u64;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,540
	ctx.r10.s64 = ctx.r28.s64 + 540;
	// add r11,r11,r22
	ctx.r11.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r7,r22,r25
	ctx.r7.u64 = ctx.r25.u64 - ctx.r22.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_8215B1A0:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r5,r9,r30
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r9,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 2;
	// stw r4,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r3,r6,r9
	ctx.r3.u64 = ctx.r9.u64 - ctx.r6.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfsx f13,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,104(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f13,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8215b1a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B1A0;
loc_8215B1F4:
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// b 0x8215b4a4
	goto loc_8215B4A4;
loc_8215B1FC:
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8215b208
	if (!ctx.cr6.lt) goto loc_8215B208;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_8215B208:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8215b4a4
	if (!ctx.cr6.lt) goto loc_8215B4A4;
	// subf r11,r29,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8215b400
	if (ctx.cr6.lt) goto loc_8215B400;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r9,r24,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r19
	ctx.r9.u64 = ctx.r9.u64 + ctx.r19.u64;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r5,r27,-3
	ctx.r5.s64 = ctx.r27.s64 + -3;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// add r10,r7,r22
	ctx.r10.u64 = ctx.r7.u64 + ctx.r22.u64;
	// subf r4,r22,r25
	ctx.r4.u64 = ctx.r25.u64 - ctx.r22.u64;
loc_8215B24C:
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r5.s32, ctx.xer);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// subf r3,r3,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r3.u64;
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r7,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r3,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f9,f30,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r6,r7,r30
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// add r7,r6,r31
	ctx.r7.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// extsw r7,r6
	ctx.r7.s64 = ctx.r6.s32;
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lfsx f4,r4,r10
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	ctx.f4.f64 = double(temp.f32);
	// std r6,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lfd f2,144(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f3,80(r1)
	ctx.f3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f3
	ctx.f1.f64 = double(ctx.f3.s64);
	// fcfid f0,f2
	ctx.f0.f64 = double(ctx.f2.s64);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// fmadds f11,f13,f30,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f30.f64, ctx.f12.f64)));
	// fmuls f10,f11,f4
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// stfs f9,0(r10)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r7,r3,r30
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r6,r3,r7
	ctx.r6.u64 = ctx.r7.u64 - ctx.r3.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfs f8,12(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// std r3,152(r1)
	REX_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// std r6,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// lfd f7,152(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 152);
	// lfd f6,160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f4,f7
	ctx.f4.f64 = double(ctx.f7.s64);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// fmadds f1,f2,f30,f3
	ctx.f1.f64 = double(float(std::fma(ctx.f2.f64, ctx.f30.f64, ctx.f3.f64)));
	// fmuls f0,f1,f8
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,0(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r7,r3,r30
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r6,r7,r31
	ctx.r6.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r6.s32 >> 2;
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// srawi r6,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 2;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// subf r3,r23,r7
	ctx.r3.u64 = ctx.r7.u64 - ctx.r23.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// extsw r7,r3
	ctx.r7.s64 = ctx.r3.s32;
	// std r7,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// lwzu r7,16(r9)
	ea = 16 + ctx.r9.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// lfd f12,168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// std r6,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// lfd f9,176(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfsu f0,16(r8)
	ea = 16 + ctx.r8.u32;
	temp.u32 = REX_LOAD_U32(ea);
	ctx.f0.f64 = double(temp.f32);
	ctx.r8.u32 = ea;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmadds f6,f10,f30,f7
	ctx.f6.f64 = double(float(std::fma(ctx.f10.f64, ctx.f30.f64, ctx.f7.f64)));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f4,f5,f31
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64));
	// stfs f4,8(r10)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x8215b24c
	if (ctx.cr6.lt) goto loc_8215B24C;
loc_8215B400:
	// cmpw cr6,r29,r27
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x8215b4a4
	if (!ctx.cr6.lt) goto loc_8215B4A4;
	// subf r9,r29,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r29.u64;
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r29,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r19
	ctx.r8.u64 = ctx.r11.u64 + ctx.r19.u64;
	// addi r10,r28,540
	ctx.r10.s64 = ctx.r28.s64 + 540;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// add r11,r7,r22
	ctx.r11.u64 = ctx.r7.u64 + ctx.r22.u64;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// subf r6,r22,r25
	ctx.r6.u64 = ctx.r25.u64 - ctx.r22.u64;
	// add r24,r9,r24
	ctx.r24.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
loc_8215B434:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// stw r3,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// srawi r7,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 2;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r7,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// std r5,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f13,184(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// lfsx f0,r6,r11
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// lfd f12,192(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmadds f7,f9,f30,f8
	ctx.f7.f64 = double(float(std::fma(ctx.f9.f64, ctx.f30.f64, ctx.f8.f64)));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f5,f6,f31
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f31.f64));
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8215b434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B434;
loc_8215B4A4:
	// lwz r11,268(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 268);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8215afa8
	if (ctx.cr6.lt) goto loc_8215AFA8;
loc_8215B4B0:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r10,118(r18)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r18.u32 + 118);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// extsh r6,r10
	ctx.r6.s64 = ctx.r10.s16;
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// lfs f0,-4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bge cr6,0x8215b678
	if (!ctx.cr6.lt) goto loc_8215B678;
	// subf r11,r29,r6
	ctx.r11.u64 = ctx.r6.u64 - ctx.r29.u64;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x8215b610
	if (ctx.cr6.lt) goto loc_8215B610;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r7,r6,-3
	ctx.r7.s64 = ctx.r6.s64 + -3;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_8215B4F4:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r4,r9,r30
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmpw cr6,r29,r7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r7.s32, ctx.xer);
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r5.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,4(r10)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r4,r30
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r3,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r3.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r4.u64);
	// lfd f9,184(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r4,r3,r30
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r5,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r5.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f5,176(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// fmuls f2,f3,f0
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f2,12(r10)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r9,r3,r30
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// srawi r9,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 2;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r5,r4,r9
	ctx.r5.u64 = ctx.r9.u64 - ctx.r4.u64;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f1,168(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f13,f1
	ctx.f13.f64 = double(ctx.f1.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfsu f11,16(r10)
	ea = 16 + ctx.r10.u32;
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x8215b4f4
	if (ctx.cr6.lt) goto loc_8215B4F4;
loc_8215B610:
	// cmpw cr6,r29,r6
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x8215b678
	if (!ctx.cr6.lt) goto loc_8215B678;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r29,r6
	ctx.r8.u64 = ctx.r6.u64 - ctx.r29.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + ctx.r22.u64;
	// addi r11,r28,540
	ctx.r11.s64 = ctx.r28.s64 + 540;
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8215B630:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r6,r10,r30
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r5,r6,r31
	ctx.r5.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r10,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 2;
	// stw r5,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// subf r4,r7,r10
	ctx.r4.u64 = ctx.r10.u64 - ctx.r7.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r3,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r3.u64);
	// lfd f13,192(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfsu f10,4(r9)
	ea = 4 + ctx.r9.u32;
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8215b630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B630;
loc_8215B678:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-136
	ctx.r12.s64 = ctx.r1.s64 + -136;
	// bl 0x8215ebf4
	ctx.lr = 0x8215B688;
	__restfpr_28(ctx, base);
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216C180) {
	REX_FUNC_PROLOGUE();
	// lwz r11,24200(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24200);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C228) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C2D0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C3B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10548(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10548);
	// rlwimi r11,r4,23,6,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 23) & 0x3800000) | (ctx.r11.u64 & 0xFFFFFFFFFC7FFFFF);
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

DEFINE_REX_FUNC(sub_8216C768) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12036);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216C888) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12068(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 12068);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8216CAD8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10544(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10544);
	// rlwinm r10,r4,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r11,r11,0,20,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
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

DEFINE_REX_FUNC(sub_8216CEB0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12628(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12628);
	// stw r4,12216(r3)
	REX_STORE_U32(ctx.r3.u32 + 12216, ctx.r4.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r11,r8,16,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8216cee8
	if (ctx.cr6.eq) goto loc_8216CEE8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8216cee8
	if (ctx.cr6.eq) goto loc_8216CEE8;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8216cee8
	if (ctx.cr6.eq) goto loc_8216CEE8;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8216CEE8:
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
	// rldicr r12,r12,52,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	REX_STORE_U32(ctx.r3.u32 + 10388, ctx.r11.u32);
	// ld r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82170190) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82170198;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8216f5d8
	ctx.lr = 0x821701DC;
	sub_8216F5D8(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8216b018
	ctx.lr = 0x821701E8;
	sub_8216B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821701f8
	if (!ctx.cr0.eq) goto loc_821701F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82170240
	goto loc_82170240;
loc_821701F8:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x8217b4c0
	ctx.lr = 0x8217023C;
	sub_8217B4C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82170240:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82172E08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82172E10;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// stw r4,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r14,r8
	ctx.r14.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r19,-1
	ctx.r19.s64 = -1;
	// li r15,-1
	ctx.r15.s64 = -1;
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// addi r25,r11,-4
	ctx.r25.s64 = ctx.r11.s64 + -4;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82172E60:
	// li r11,12
	ctx.r11.s64 = 12;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r11,r31,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r31.u32 / ctx.r11.u32 : 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// subf r10,r11,r31
	ctx.r10.u64 = ctx.r31.u64 - ctx.r11.u64;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// beq cr6,0x82172e90
	if (ctx.cr6.eq) goto loc_82172E90;
	// cmplw cr6,r31,r16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82173158
	if (!ctx.cr6.lt) goto loc_82173158;
	// add r28,r11,r17
	ctx.r28.u64 = ctx.r11.u64 + ctx.r17.u64;
	// b 0x82172ea0
	goto loc_82172EA0;
loc_82172E90:
	// lwz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82173158
	if (!ctx.cr6.lt) goto loc_82173158;
	// add r28,r11,r18
	ctx.r28.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_82172EA0:
	// lwz r8,0(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// clrlwi. r7,r22,31
	ctx.r7.u64 = ctx.r22.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,6(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 6);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// lhz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lhz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 8);
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq 0x82172f00
	if (ctx.cr0.eq) goto loc_82172F00;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r6,404(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// divwu r4,r31,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r31.u32 / ctx.r9.u32 : 0);
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x82172EF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82173160
	if (ctx.cr0.lt) goto loc_82173160;
loc_82172F00:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bgt cr6,0x821730e0
	if (ctx.cr6.gt) goto loc_821730E0;
	// lis r12,-32253
	ctx.r12.s64 = -2113732608;
	// addi r12,r12,22464
	ctx.r12.s64 = ctx.r12.s64 + 22464;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// nop 
	// addi r12,r12,12092
	ctx.r12.s64 = ctx.r12.s64 + 12092;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_821730DC;
	case 1:
		goto loc_82172F3C;
	case 2:
		goto loc_821730D4;
	case 3:
		goto loc_82172F44;
	case 4:
		goto loc_821730AC;
	case 5:
		goto loc_82172F3C;
	case 6:
		goto loc_821730D4;
	case 7:
		goto loc_82172F70;
	case 8:
		goto loc_82172FA4;
	case 9:
		goto loc_82172FE4;
	case 10:
		goto loc_82173050;
	case 11:
		goto loc_8217306C;
	case 12:
		goto loc_821730DC;
	case 13:
		goto loc_82172F44;
	case 14:
		goto loc_821730AC;
	case 15:
		goto loc_821730DC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82172F3C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x821730dc
	goto loc_821730DC;
loc_82172F44:
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821730dc
	if (!ctx.cr6.eq) goto loc_821730DC;
	// b 0x82172f3c
	goto loc_82172F3C;
loc_82172F70:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,18,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7C;
	// lwzx r9,r9,r14
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r14.u32);
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82173040
	if (ctx.cr0.eq) goto loc_82173040;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpwi cr6,r15,4
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 4, ctx.xer);
	// blt cr6,0x82172f9c
	if (ctx.cr6.lt) goto loc_82172F9C;
loc_82172F94:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// b 0x821730e0
	goto loc_821730E0;
loc_82172F9C:
	// stw r8,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// b 0x821730dc
	goto loc_821730DC;
loc_82172FA4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt cr6,0x82172f94
	if (ctx.cr6.lt) goto loc_82172F94;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r7,r9,18,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// lwzx r7,r7,r14
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r14.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82172fd8
	if (!ctx.cr6.lt) goto loc_82172FD8;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// b 0x82173044
	goto loc_82173044;
loc_82172FD8:
	// addi r15,r15,-1
	ctx.r15.s64 = ctx.r15.s64 + -1;
	// addi r25,r25,-4
	ctx.r25.s64 = ctx.r25.s64 + -4;
	// b 0x821730dc
	goto loc_821730DC;
loc_82172FE4:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82173020
	if (!ctx.cr0.eq) goto loc_82173020;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82173020
	if (!ctx.cr0.eq) goto loc_82173020;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821730dc
	if (!ctx.cr6.eq) goto loc_821730DC;
loc_82173020:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// bge cr6,0x82172f94
	if (!ctx.cr6.lt) goto loc_82172F94;
	// rlwinm r9,r29,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFFF0000;
	// addi r7,r31,6
	ctx.r7.s64 = ctx.r31.s64 + 6;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,-4(r21)
	REX_STORE_U32(ctx.r21.u32 + -4, ctx.r9.u32);
loc_82173040:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
loc_82173044:
	// rlwinm r29,r11,21,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x1;
	// mulli r31,r10,6
	ctx.r31.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(6));
	// b 0x821730e0
	goto loc_821730E0;
loc_82173050:
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82172f94
	if (ctx.cr6.lt) goto loc_82172F94;
	// lwzu r11,-4(r21)
	ea = -4 + ctx.r21.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r21.u32 = ea;
	// addi r19,r19,-1
	ctx.r19.s64 = ctx.r19.s64 + -1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r29,r11,16,16,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// b 0x821730e0
	goto loc_821730E0;
loc_8217306C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82173040
	if (!ctx.cr0.eq) goto loc_82173040;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821730dc
	if (!ctx.cr0.eq) goto loc_821730DC;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// subfe r9,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x821730dc
	if (!ctx.cr6.eq) goto loc_821730DC;
	// b 0x82173040
	goto loc_82173040;
loc_821730AC:
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821730dc
	if (!ctx.cr6.eq) goto loc_821730DC;
loc_821730D4:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
loc_821730DC:
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
loc_821730E0:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8217311c
	if (ctx.cr0.eq) goto loc_8217311C;
	// lwz r11,404(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82172c78
	ctx.lr = 0x82173114;
	sub_82172C78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82173160
	if (ctx.cr0.lt) goto loc_82173160;
loc_8217311C:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r26,24
	ctx.r10.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// beq 0x82172e60
	if (ctx.cr0.eq) goto loc_82172E60;
	// b 0x82173160
	goto loc_82173160;
loc_82173158:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82173160:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217DAA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8217DAA8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,120
	ctx.r4.s64 = 120;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82181270
	ctx.lr = 0x8217DABC;
	sub_82181270(ctx, base);
	// li r11,486
	ctx.r11.s64 = 486;
	// lbz r10,3(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// li r9,917
	ctx.r9.s64 = 917;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r7,918
	ctx.r7.s64 = 918;
	// rlwinm r8,r10,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3528
	ctx.r11.s64 = 3528;
	// li r6,3529
	ctx.r6.s64 = 3529;
	// li r5,3530
	ctx.r5.s64 = 3530;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r4,3531
	ctx.r4.s64 = 3531;
	// lbz r27,7(r30)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// li r29,3144
	ctx.r29.s64 = 3144;
	// li r28,3145
	ctx.r28.s64 = 3145;
	// or r8,r27,r8
	ctx.r8.u64 = ctx.r27.u64 | ctx.r8.u64;
	// li r10,3146
	ctx.r10.s64 = 3146;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r26,3147
	ctx.r26.s64 = 3147;
	// li r27,3656
	ctx.r27.s64 = 3656;
	// li r24,3659
	ctx.r24.s64 = 3659;
	// li r9,3662
	ctx.r9.s64 = 3662;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// li r23,3665
	ctx.r23.s64 = 3665;
	// lbz r8,11(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 11);
	// li r22,3208
	ctx.r22.s64 = 3208;
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | ctx.r25.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r25,r8,0,0,23
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,15(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 15);
	// or r8,r8,r25
	ctx.r8.u64 = ctx.r8.u64 | ctx.r25.u64;
	// li r25,4100
	ctx.r25.s64 = 4100;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,19(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 19);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// li r7,3209
	ctx.r7.s64 = 3209;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,23(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 23);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3224
	ctx.r5.s64 = 3224;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,27(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 27);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r4,3225
	ctx.r4.s64 = 3225;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,31(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 31);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r29,3226
	ctx.r29.s64 = 3226;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,35(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 35);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r28,3227
	ctx.r28.s64 = 3227;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,39(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 39);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// li r8,3210
	ctx.r8.s64 = 3210;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r10,3211
	ctx.r10.s64 = 3211;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,43(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 43);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r26,3677
	ctx.r26.s64 = 3677;
	// lbz r11,47(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 47);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,51(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 51);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,55(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 55);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r6,r11,0,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,59(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 59);
	// or r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 | ctx.r6.u64;
	// li r6,3668
	ctx.r6.s64 = 3668;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,63(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 63);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,67(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 67);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3592
	ctx.r7.s64 = 3592;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,71(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 71);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3589
	ctx.r8.s64 = 3589;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,75(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 75);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,79(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 79);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// li r9,4103
	ctx.r9.s64 = 4103;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3671
	ctx.r5.s64 = 3671;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3674
	ctx.r11.s64 = 3674;
	// lbz r27,83(r30)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r30.u32 + 83);
	// or r10,r27,r10
	ctx.r10.u64 = ctx.r27.u64 | ctx.r10.u64;
	// li r27,3680
	ctx.r27.s64 = 3680;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r24,r10,0,0,23
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,87(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 87);
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | ctx.r24.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,91(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 91);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,95(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 95);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,99(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 99);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r4,r10,0,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,103(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 103);
	// or r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 | ctx.r4.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r8,3686
	ctx.r8.s64 = 3686;
	// li r4,3698
	ctx.r4.s64 = 3698;
	// li r29,3701
	ctx.r29.s64 = 3701;
	// li r28,3704
	ctx.r28.s64 = 3704;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,107(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 107);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,111(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 111);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,3692
	ctx.r6.s64 = 3692;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,115(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 115);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,3695
	ctx.r5.s64 = 3695;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,119(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 119);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r9,r10,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// li r11,3683
	ctx.r11.s64 = 3683;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,123(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 123);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r9,3689
	ctx.r9.s64 = 3689;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,127(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 127);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r10,131(r30)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r30.u32 + 131);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r10,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lbz r11,135(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 135);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,139(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 139);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,143(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 143);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,147(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 147);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,151(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 151);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,155(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 155);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,159(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 159);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r9,3707
	ctx.r9.s64 = 3707;
	// lbz r11,163(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 163);
	// li r8,3618
	ctx.r8.s64 = 3618;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// li r10,3615
	ctx.r10.s64 = 3615;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// li r7,3624
	ctx.r7.s64 = 3624;
	// li r6,3627
	ctx.r6.s64 = 3627;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r5,3633
	ctx.r5.s64 = 3633;
	// lbz r4,167(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 167);
	// li r11,3636
	ctx.r11.s64 = 3636;
	// li r29,3642
	ctx.r29.s64 = 3642;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// li r4,3645
	ctx.r4.s64 = 3645;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r9,0,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF00;
	// li r27,3540
	ctx.r27.s64 = 3540;
	// li r10,3844
	ctx.r10.s64 = 3844;
	// li r26,3845
	ctx.r26.s64 = 3845;
	// li r25,3846
	ctx.r25.s64 = 3846;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r24,3847
	ctx.r24.s64 = 3847;
	// lbz r21,171(r30)
	ctx.r21.u64 = REX_LOAD_U8(ctx.r30.u32 + 171);
	// li r23,2069
	ctx.r23.s64 = 2069;
	// li r22,2133
	ctx.r22.s64 = 2133;
	// or r28,r21,r28
	ctx.r28.u64 = ctx.r21.u64 | ctx.r28.u64;
	// li r9,2584
	ctx.r9.s64 = 2584;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// rlwinm r21,r28,0,0,23
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// lbz r8,175(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 175);
	// or r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 | ctx.r21.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r28,r8,0,0,23
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,179(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 179);
	// or r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 | ctx.r28.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r6,2590
	ctx.r6.s64 = 2590;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,183(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 183);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// li r5,72
	ctx.r5.s64 = 72;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r8,187(r30)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r30.u32 + 187);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// rlwinm r7,r8,0,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lbz r11,191(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 191);
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// li r7,2587
	ctx.r7.s64 = 2587;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,195(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 195);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,199(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 199);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,203(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 203);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// rlwinm r8,r11,0,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,207(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 207);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,211(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 211);
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,215(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 215);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,219(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 219);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,223(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 223);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r22,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r22.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,227(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 227);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,231(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 231);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,235(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 235);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// rlwinm r10,r11,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lbz r11,239(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 239);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x8217e06c
	if (!ctx.cr6.gt) goto loc_8217E06C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181038
	ctx.lr = 0x8217E06C;
	sub_82181038(ctx, base);
loc_8217E06C:
	// li r11,501
	ctx.r11.s64 = 501;
	// li r10,0
	ctx.r10.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,8697
	ctx.r11.s64 = 8697;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,501
	ctx.r8.s64 = 501;
	// li r7,1
	ctx.r7.s64 = 1;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821972C8) {
	REX_FUNC_PROLOGUE();
	// li r11,-23593
	ctx.r11.s64 = -23593;
	// li r10,321
	ctx.r10.s64 = 321;
	// sth r11,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r11.u16);
	// sth r10,2(r6)
	REX_STORE_U16(ctx.r6.u32 + 2, ctx.r10.u16);
	// lwz r11,280(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// addi r11,r11,114
	ctx.r11.s64 = ctx.r11.s64 + 114;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,312(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82197300
	if (!ctx.cr6.gt) goto loc_82197300;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82197300:
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,312(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 312);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,524(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,580(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 580);
	// lwz r8,568(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 568);
	// lwz r9,544(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 544);
	// mulli r9,r9,20
	ctx.r9.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(20));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,592(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8219735c
	if (!ctx.cr6.gt) goto loc_8219735C;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_8219735C:
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,592(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 592);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,604(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82197384
	if (!ctx.cr6.gt) goto loc_82197384;
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82197384:
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,652(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 652);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r10,272(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,276(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 276);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r9,280(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82197410
	if (!ctx.cr6.gt) goto loc_82197410;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r4,280(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 280);
	// lwz r7,524(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mulli r11,r11,6
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(6));
	// lwz r8,544(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 544);
	// lwz r9,624(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 624);
	// lwz r10,8(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
loc_82197410:
	// lwz r11,8(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 8);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r10,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r10.u32);
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82197444
	if (!ctx.cr6.gt) goto loc_82197444;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_82197444:
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82197460
	if (ctx.cr6.eq) goto loc_82197460;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_82197460:
	// lwz r11,316(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82197488
	if (!ctx.cr6.gt) goto loc_82197488;
	// lwz r11,4(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,15
	ctx.r11.s64 = ctx.r11.s64 + 15;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r10,316(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_82197488:
	// lwz r11,660(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821974a8
	if (ctx.cr6.eq) goto loc_821974A8;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
loc_821974A8:
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8219F6F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8219F700;
	__savegprlr_21(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r22,r3,16
	ctx.r22.s64 = ctx.r3.s64 + 16;
	// stw r30,940(r3)
	REX_STORE_U32(ctx.r3.u32 + 940, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// bl 0x821a9ee8
	ctx.lr = 0x8219F734;
	sub_821A9EE8(ctx, base);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,940(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 940);
	// bl 0x821b10c8
	ctx.lr = 0x8219F748;
	sub_821B10C8(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8219f754
	if (ctx.cr6.eq) goto loc_8219F754;
	// stw r30,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r30.u32);
loc_8219F754:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8219f760
	if (ctx.cr6.eq) goto loc_8219F760;
	// stw r30,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r30.u32);
loc_8219F760:
	// not r11,r29
	ctx.r11.u64 = ~ctx.r29.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x8219f77c
	if (!ctx.cr6.eq) goto loc_8219F77C;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8219f788
	if (!ctx.cr6.eq) goto loc_8219F788;
loc_8219F77C:
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// b 0x8219f840
	goto loc_8219F840;
loc_8219F788:
	// addi r25,r31,40
	ctx.r25.s64 = ctx.r31.s64 + 40;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821af900
	ctx.lr = 0x8219F794;
	sub_821AF900(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8219f840
	if (ctx.cr0.lt) goto loc_8219F840;
	// lwz r11,924(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 924);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ori r9,r26,256
	ctx.r9.u64 = ctx.r26.u64 | 256;
	// lwz r6,32(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r5,840(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 840);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x821c6ad0
	ctx.lr = 0x8219F7CC;
	sub_821C6AD0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8219f840
	if (ctx.cr0.lt) goto loc_8219F840;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8210fda0
	ctx.lr = 0x8219F7DC;
	sub_8210FDA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8219f7ec
	if (ctx.cr0.eq) goto loc_8219F7EC;
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2905
	ctx.r28.u64 = ctx.r28.u64 | 2905;
loc_8219F7EC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x8219f840
	if (ctx.cr6.lt) goto loc_8219F840;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219F808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x821a98b8
	ctx.lr = 0x8219F810;
	sub_821A98B8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x8219f840
	if (ctx.cr0.lt) goto loc_8219F840;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8219f82c
	if (ctx.cr6.eq) goto loc_8219F82C;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_8219F82C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8219f840
	if (ctx.cr6.eq) goto loc_8219F840;
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
loc_8219F840:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8219f854
	if (ctx.cr6.eq) goto loc_8219F854;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x821aeeb8
	ctx.lr = 0x8219F854;
	sub_821AEEB8(ctx, base);
loc_8219F854:
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219f874
	if (ctx.cr6.eq) goto loc_8219F874;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219F870;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
loc_8219F874:
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8219f894
	if (ctx.cr6.eq) goto loc_8219F894;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8219F890;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_8219F894:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x821b3020
	ctx.lr = 0x8219F89C;
	sub_821B3020(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821a9f40
	ctx.lr = 0x8219F8A4;
	sub_821A9F40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A1418) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a149c
	if (ctx.cr6.eq) goto loc_821A149C;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821a149c
	if (!ctx.cr6.eq) goto loc_821A149C;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,876(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 876);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,64(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821a149c
	if (ctx.cr6.gt) goto loc_821A149C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a149c
	if (ctx.cr6.eq) goto loc_821A149C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821a149c
	if (!ctx.cr6.eq) goto loc_821A149C;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821a1494
	if (ctx.cr6.eq) goto loc_821A1494;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a149c
	if (!ctx.cr6.eq) goto loc_821A149C;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x821a0290
	sub_821A0290(ctx, base);
	return;
loc_821A1494:
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x821a0088
	sub_821A0088(ctx, base);
	return;
loc_821A149C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A1DA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821a1e60
	if (!ctx.cr6.eq) goto loc_821A1E60;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,876(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 876);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r8,64(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 64);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a1de8
	if (ctx.cr6.eq) goto loc_821A1DE8;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821a1e60
	if (ctx.cr6.eq) goto loc_821A1E60;
loc_821A1DE8:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x821a1e60
	if (!ctx.cr6.lt) goto loc_821A1E60;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821a1e60
	if (!ctx.cr6.eq) goto loc_821A1E60;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821a1e60
	if (!ctx.cr6.eq) goto loc_821A1E60;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821a1e50
	if (ctx.cr6.lt) goto loc_821A1E50;
	// beq cr6,0x821a1e48
	if (ctx.cr6.eq) goto loc_821A1E48;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821a1e48
	if (ctx.cr6.lt) goto loc_821A1E48;
	// bne cr6,0x821a1e60
	if (!ctx.cr6.eq) goto loc_821A1E60;
	// extsw r10,r5
	ctx.r10.s64 = ctx.r5.s32;
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.f0.u64);
	// blr 
	return;
loc_821A1E48:
	// stw r5,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r5.u32);
	// blr 
	return;
loc_821A1E50:
	// addic r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// subfe r10,r10,r5
	temp.u8 = (~ctx.r10.u32 + ctx.r5.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
loc_821A1E60:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A4678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821A4680;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a4818
	if (ctx.cr6.eq) goto loc_821A4818;
	// not r31,r4
	ctx.r31.u64 = ~ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x821a4818
	if (!ctx.cr6.eq) goto loc_821A4818;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,876(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r30,16(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// bne cr6,0x821a4818
	if (!ctx.cr6.eq) goto loc_821A4818;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a4818
	if (ctx.cr6.eq) goto loc_821A4818;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x821a4818
	if (!ctx.cr6.lt) goto loc_821A4818;
	// lwz r6,12(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a4720
	if (ctx.cr6.eq) goto loc_821A4720;
loc_821A46F0:
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821a470c
	if (!ctx.cr6.lt) goto loc_821A470C;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// lwz r6,12(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x821a46f0
	if (!ctx.cr6.eq) goto loc_821A46F0;
loc_821A470C:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a4720
	if (ctx.cr6.eq) goto loc_821A4720;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x821a4810
	if (!ctx.cr6.gt) goto loc_821A4810;
loc_821A4720:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A472C;
	sub_8216B018(ctx, base);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821a474c
	if (ctx.cr0.eq) goto loc_821A474C;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r28,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r28.u32);
	// stw r28,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// stw r11,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// stw r28,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r28.u32);
	// b 0x821a4750
	goto loc_821A4750;
loc_821A474C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_821A4750:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a4818
	if (ctx.cr6.eq) goto loc_821A4818;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,876(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 876);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x8219ea90
	ctx.lr = 0x821A477C;
	sub_8219EA90(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r9,r10,r29
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// stw r11,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// divwu r11,r3,r30
	ctx.r11.u64 = uint32_t(ctx.r30.u32 ? ctx.r3.u32 / ctx.r30.u32 : 0);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// divwu. r9,r9,r30
	ctx.r9.u64 = uint32_t(ctx.r30.u32 ? ctx.r9.u32 / ctx.r30.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,24(r6)
	REX_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r11,20(r6)
	REX_STORE_U32(ctx.r6.u32 + 20, ctx.r11.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r29,16(r6)
	REX_STORE_U32(ctx.r6.u32 + 16, ctx.r29.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// stw r9,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// beq 0x821a47ec
	if (ctx.cr0.eq) goto loc_821A47EC;
loc_821A47C4:
	// lwz r9,28(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 28);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// stw r9,28(r6)
	REX_STORE_U32(ctx.r6.u32 + 28, ctx.r9.u32);
	// lwz r9,16(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// divwu r9,r9,r30
	ctx.r9.u64 = uint32_t(ctx.r30.u32 ? ctx.r9.u32 / ctx.r30.u32 : 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821a47c4
	if (ctx.cr6.lt) goto loc_821A47C4;
loc_821A47EC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a4804
	if (ctx.cr6.eq) goto loc_821A4804;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r6,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r6.u32);
	// b 0x821a4810
	goto loc_821A4810;
loc_821A4804:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r6)
	REX_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r6,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r6.u32);
loc_821A4810:
	// not r3,r6
	ctx.r3.u64 = ~ctx.r6.u64;
	// b 0x821a481c
	goto loc_821A481C;
loc_821A4818:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821A481C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AB180) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ab1b0
	if (ctx.cr6.eq) goto loc_821AB1B0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821ab180
	ctx.lr = 0x821AB1B0;
	sub_821AB180(ctx, base);
loc_821AB1B0:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821ab1c4
	if (ctx.cr0.eq) goto loc_821AB1C4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821AB1C4;
	sub_8216B138(ctx, base);
loc_821AB1C4:
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

DEFINE_REX_FUNC(sub_821ABF00) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821ABF08;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,640
	ctx.r31.s64 = ctx.r3.s64 + 640;
	// lwz r4,672(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x821b0d68
	ctx.lr = 0x821ABF24;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// addi r27,r29,648
	ctx.r27.s64 = ctx.r29.s64 + 648;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,4276
	ctx.r10.s64 = ctx.r10.s64 + 4276;
loc_821ABF48:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821abf6c
	if (ctx.cr0.eq) goto loc_821ABF6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821abf48
	if (ctx.cr6.eq) goto loc_821ABF48;
loc_821ABF6C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ac2b0
	if (!ctx.cr0.eq) goto loc_821AC2B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821ABF84;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r22,0(r27)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821ABFAC;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r24,r10,18504
	ctx.r24.s64 = ctx.r10.s64 + 18504;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_821ABFD0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821abff4
	if (ctx.cr0.eq) goto loc_821ABFF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821abfd0
	if (ctx.cr6.eq) goto loc_821ABFD0;
loc_821ABFF4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ac2b0
	if (!ctx.cr0.eq) goto loc_821AC2B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821AC00C;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 9, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r23,0(r27)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,-19632
	ctx.r25.s64 = ctx.r11.s64 + -19632;
loc_821AC034:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x821b0d68
	ctx.lr = 0x821AC048;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821AC064:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821ac088
	if (ctx.cr0.eq) goto loc_821AC088;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ac064
	if (ctx.cr6.eq) goto loc_821AC064;
loc_821AC088:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ac2b0
	if (!ctx.cr0.eq) goto loc_821AC2B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821AC0A0;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821ac104
	if (!ctx.cr6.eq) goto loc_821AC104;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_821AC0BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821ac0e0
	if (ctx.cr0.eq) goto loc_821AC0E0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ac0bc
	if (ctx.cr6.eq) goto loc_821AC0BC;
loc_821AC0E0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ac104
	if (!ctx.cr0.eq) goto loc_821AC104;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x821b0d68
	ctx.lr = 0x821AC0FC;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
loc_821AC104:
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x821ac144
	if (ctx.cr6.eq) goto loc_821AC144;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// beq cr6,0x821ac134
	if (ctx.cr6.eq) goto loc_821AC134;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// beq cr6,0x821ac144
	if (ctx.cr6.eq) goto loc_821AC144;
	// ble cr6,0x821ac2b0
	if (!ctx.cr6.gt) goto loc_821AC2B0;
	// cmpwi cr6,r8,8
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 8, ctx.xer);
	// bgt cr6,0x821ac2b0
	if (ctx.cr6.gt) goto loc_821AC2B0;
	// lfd f0,0(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r27.u32 + 0);
	// b 0x821ac154
	goto loc_821AC154;
loc_821AC134:
	// lwa r11,0(r27)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r27.u32 + 0));
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x821ac150
	goto loc_821AC150;
loc_821AC144:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// std r11,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
loc_821AC150:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_821AC154:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x821ac168
	if (ctx.cr6.eq) goto loc_821AC168;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r28)
	REX_STORE_U64(ctx.r28.u32 + 0, ctx.f0.u64);
loc_821AC168:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// blt cr6,0x821ac034
	if (ctx.cr6.lt) goto loc_821AC034;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821AC188;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,4200
	ctx.r10.s64 = ctx.r10.s64 + 4200;
loc_821AC1A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821ac1cc
	if (ctx.cr0.eq) goto loc_821AC1CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821ac1a8
	if (ctx.cr6.eq) goto loc_821AC1A8;
loc_821AC1CC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821ac2b0
	if (!ctx.cr0.eq) goto loc_821AC2B0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 672);
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0d68
	ctx.lr = 0x821AC1E4;
	sub_821B0D68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ac2d0
	if (ctx.cr0.lt) goto loc_821AC2D0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// beq cr6,0x821ac200
	if (ctx.cr6.eq) goto loc_821AC200;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// bne cr6,0x821ac2b0
	if (!ctx.cr6.eq) goto loc_821AC2B0;
loc_821AC200:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x8216b018
	ctx.lr = 0x821AC20C;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ac224
	if (ctx.cr0.eq) goto loc_821AC224;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x821ac228
	goto loc_821AC228;
loc_821AC224:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821AC228:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821ac23c
	if (!ctx.cr6.eq) goto loc_821AC23C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821ac2d0
	goto loc_821AC2D0;
loc_821AC23C:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r22,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r23,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// addi r30,r29,64
	ctx.r30.s64 = ctx.r29.s64 + 64;
	// ld r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + 8);
	// ld r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 16);
	// ld r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r10.u32 + 24);
	// std r11,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r11.u64);
	// std r9,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r8.u64);
	// std r10,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r10.u64);
	// lwz r11,64(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 64);
	// b 0x821ac298
	goto loc_821AC298;
loc_821AC278:
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8215f2c0
	ctx.lr = 0x821AC284;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821ac2a0
	if (!ctx.cr0.lt) goto loc_821AC2A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r11,40
	ctx.r30.s64 = ctx.r11.s64 + 40;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_821AC298:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821ac278
	if (!ctx.cr6.eq) goto loc_821AC278;
loc_821AC2A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r31,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// b 0x821ac2cc
	goto loc_821AC2CC;
loc_821AC2B0:
	// cmpwi cr6,r8,12
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 12, ctx.xer);
	// beq cr6,0x821ac2cc
	if (ctx.cr6.eq) goto loc_821AC2CC;
	// cmpwi cr6,r8,13
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 13, ctx.xer);
	// beq cr6,0x821ac2cc
	if (ctx.cr6.eq) goto loc_821AC2CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,632(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 632);
	// bl 0x821b0160
	ctx.lr = 0x821AC2CC;
	sub_821B0160(ctx, base);
loc_821AC2CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AC2D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821BA660) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x821BA668;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,1716(r1)
	REX_STORE_U32(ctx.r1.u32 + 1716, ctx.r3.u32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// stw r4,1724(r1)
	REX_STORE_U32(ctx.r1.u32 + 1724, ctx.r4.u32);
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// stw r5,1732(r1)
	REX_STORE_U32(ctx.r1.u32 + 1732, ctx.r5.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821ba6a0
	if (!ctx.cr6.eq) goto loc_821BA6A0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x821c0fbc
	if (!ctx.cr6.eq) goto loc_821C0FBC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c0fc4
	goto loc_821C0FC4;
loc_821BA6A0:
	// lwz r11,4(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821c0fbc
	if (!ctx.cr6.eq) goto loc_821C0FBC;
	// lwz r11,36(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 36);
	// lwz r10,20(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// lwz r9,28(r16)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r16.u32 + 28);
	// lwz r8,24(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
	// cmpwi cr6,r9,32
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 32, ctx.xer);
	// stw r11,524(r1)
	REX_STORE_U32(ctx.r1.u32 + 524, ctx.r11.u32);
	// mullw r30,r10,r8
	ctx.r30.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// bne cr6,0x821c0fbc
	if (!ctx.cr6.eq) goto loc_821C0FBC;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,28(r14)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + 28);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r7,100(r14)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + 100);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r26,8(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r25,3584
	ctx.r25.s64 = 234881024;
	// std r22,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r22.u64);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// std r22,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r22.u64);
	// std r22,0(r6)
	REX_STORE_U64(ctx.r6.u32 + 0, ctx.r22.u64);
	// std r22,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r22.u64);
	// std r22,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r22.u64);
	// std r22,8(r6)
	REX_STORE_U64(ctx.r6.u32 + 8, ctx.r22.u64);
	// stw r9,528(r1)
	REX_STORE_U32(ctx.r1.u32 + 528, ctx.r9.u32);
	// stw r7,532(r1)
	REX_STORE_U32(ctx.r1.u32 + 532, ctx.r7.u32);
	// beq cr6,0x821ba7d8
	if (ctx.cr6.eq) goto loc_821BA7D8;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
loc_821BA718:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ba7bc
	if (ctx.cr6.eq) goto loc_821BA7BC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// addi r27,r1,160
	ctx.r27.s64 = ctx.r1.s64 + 160;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stwx r11,r29,r31
	REX_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r11.u32);
	// mullw r11,r10,r9
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stwx r11,r29,r27
	REX_STORE_U32(ctx.r29.u32 + ctx.r27.u32, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x821BA750;
	sub_8216B018(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stwx r28,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r28.u32);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwzx r4,r29,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821c3a90
	ctx.lr = 0x821BA774;
	sub_821C3A90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwzx r9,r29,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821ba7bc
	if (ctx.cr6.eq) goto loc_821BA7BC;
	// lwz r8,8(r14)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r8,20(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
loc_821BA798:
	// lwzx r7,r28,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r7,0(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// and r25,r7,r25
	ctx.r25.u64 = ctx.r7.u64 & ctx.r25.u64;
	// blt cr6,0x821ba798
	if (ctx.cr6.lt) goto loc_821BA798;
loc_821BA7BC:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x821ba718
	if (!ctx.cr6.eq) goto loc_821BA718;
	// lis r11,3584
	ctx.r11.s64 = 234881024;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821ba7dc
	if (!ctx.cr6.eq) goto loc_821BA7DC;
loc_821BA7D8:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_821BA7DC:
	// stw r25,100(r14)
	REX_STORE_U32(ctx.r14.u32 + 100, ctx.r25.u32);
	// lwz r11,32(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,137
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 137, ctx.xer);
	// bgt cr6,0x821c0f5c
	if (ctx.cr6.gt) goto loc_821C0F5C;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,10744
	ctx.r12.s64 = ctx.r12.s64 + 10744;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32228
	ctx.r12.s64 = -2112094208;
	// addi r12,r12,-22500
	ctx.r12.s64 = ctx.r12.s64 + -22500;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821BA81C;
	case 1:
		goto loc_821BA8D0;
	case 2:
		goto loc_821BA928;
	case 3:
		goto loc_821BAC4C;
	case 4:
		goto loc_821BACD8;
	case 5:
		goto loc_821C0F5C;
	case 6:
		goto loc_821BAD1C;
	case 7:
		goto loc_821BAD74;
	case 8:
		goto loc_821BADC0;
	case 9:
		goto loc_821BAEC8;
	case 10:
		goto loc_821BAF8C;
	case 11:
		goto loc_821BAFB0;
	case 12:
		goto loc_821BB008;
	case 13:
		goto loc_821BB2A0;
	case 14:
		goto loc_821C0F5C;
	case 15:
		goto loc_821C0F5C;
	case 16:
		goto loc_821BB404;
	case 17:
		goto loc_821BB458;
	case 18:
		goto loc_821BB4A4;
	case 19:
		goto loc_821BB548;
	case 20:
		goto loc_821C0F5C;
	case 21:
		goto loc_821BBE60;
	case 22:
		goto loc_821BBFD0;
	case 23:
		goto loc_821BC02C;
	case 24:
		goto loc_821BC0D0;
	case 25:
		goto loc_821BC1F4;
	case 26:
		goto loc_821BC238;
	case 27:
		goto loc_821BC440;
	case 28:
		goto loc_821BC518;
	case 29:
		goto loc_821BC748;
	case 30:
		goto loc_821BC794;
	case 31:
		goto loc_821BCBA0;
	case 32:
		goto loc_821BCE08;
	case 33:
		goto loc_821BD098;
	case 34:
		goto loc_821BD2FC;
	case 35:
		goto loc_821BD584;
	case 36:
		goto loc_821BD630;
	case 37:
		goto loc_821BD734;
	case 38:
		goto loc_821BD784;
	case 39:
		goto loc_821C0F5C;
	case 40:
		goto loc_821BDA48;
	case 41:
		goto loc_821BDB58;
	case 42:
		goto loc_821BDC4C;
	case 43:
		goto loc_821BDC8C;
	case 44:
		goto loc_821BDCE0;
	case 45:
		goto loc_821BDD3C;
	case 46:
		goto loc_821BE168;
	case 47:
		goto loc_821BE168;
	case 48:
		goto loc_821BE168;
	case 49:
		goto loc_821BE1E8;
	case 50:
		goto loc_821BE264;
	case 51:
		goto loc_821BE264;
	case 52:
		goto loc_821BE1E8;
	case 53:
		goto loc_821BE264;
	case 54:
		goto loc_821BE264;
	case 55:
		goto loc_821BE88C;
	case 56:
		goto loc_821BE8BC;
	case 57:
		goto loc_821BEABC;
	case 58:
		goto loc_821BEAFC;
	case 59:
		goto loc_821C0F5C;
	case 60:
		goto loc_821C0F5C;
	case 61:
		goto loc_821C0F5C;
	case 62:
		goto loc_821BEB8C;
	case 63:
		goto loc_821BED14;
	case 64:
		goto loc_821BF194;
	case 65:
		goto loc_821BF348;
	case 66:
		goto loc_821BF388;
	case 67:
		goto loc_821BF488;
	case 68:
		goto loc_821BF654;
	case 69:
		goto loc_821BF698;
	case 70:
		goto loc_821BF730;
	case 71:
		goto loc_821BFA14;
	case 72:
		goto loc_821BFD34;
	case 73:
		goto loc_821BFDE4;
	case 74:
		goto loc_821BFE3C;
	case 75:
		goto loc_821BFF6C;
	case 76:
		goto loc_821C02F4;
	case 77:
		goto loc_821C0F5C;
	case 78:
		goto loc_821C0F5C;
	case 79:
		goto loc_821C0F5C;
	case 80:
		goto loc_821C0F5C;
	case 81:
		goto loc_821C045C;
	case 82:
		goto loc_821C0F5C;
	case 83:
		goto loc_821C0F5C;
	case 84:
		goto loc_821C0F5C;
	case 85:
		goto loc_821C0F5C;
	case 86:
		goto loc_821C0508;
	case 87:
		goto loc_821C057C;
	case 88:
		goto loc_821C05F0;
	case 89:
		goto loc_821C0F5C;
	case 90:
		goto loc_821C0F5C;
	case 91:
		goto loc_821C0F5C;
	case 92:
		goto loc_821C0F5C;
	case 93:
		goto loc_821C0F5C;
	case 94:
		goto loc_821C0664;
	case 95:
		goto loc_821C0F5C;
	case 96:
		goto loc_821C0F5C;
	case 97:
		goto loc_821C0F5C;
	case 98:
		goto loc_821C0F5C;
	case 99:
		goto loc_821C06D4;
	case 100:
		goto loc_821C0F5C;
	case 101:
		goto loc_821C0F5C;
	case 102:
		goto loc_821C0F5C;
	case 103:
		goto loc_821C0F5C;
	case 104:
		goto loc_821C07A8;
	case 105:
		goto loc_821C081C;
	case 106:
		goto loc_821C0890;
	case 107:
		goto loc_821C0F5C;
	case 108:
		goto loc_821C0F5C;
	case 109:
		goto loc_821C0F5C;
	case 110:
		goto loc_821C0F5C;
	case 111:
		goto loc_821C0F5C;
	case 112:
		goto loc_821C0904;
	case 113:
		goto loc_821C0F5C;
	case 114:
		goto loc_821C0F5C;
	case 115:
		goto loc_821C0978;
	case 116:
		goto loc_821C0F5C;
	case 117:
		goto loc_821C0F5C;
	case 118:
		goto loc_821C0A4C;
	case 119:
		goto loc_821C0AC0;
	case 120:
		goto loc_821C0B34;
	case 121:
		goto loc_821C0F5C;
	case 122:
		goto loc_821C0F5C;
	case 123:
		goto loc_821C0BA8;
	case 124:
		goto loc_821C0F5C;
	case 125:
		goto loc_821C0F5C;
	case 126:
		goto loc_821C0C14;
	case 127:
		goto loc_821C0F5C;
	case 128:
		goto loc_821C0F5C;
	case 129:
		goto loc_821C0CE8;
	case 130:
		goto loc_821C0D5C;
	case 131:
		goto loc_821C0DD0;
	case 132:
		goto loc_821C0F5C;
	case 133:
		goto loc_821C0F5C;
	case 134:
		goto loc_821C0F5C;
	case 135:
		goto loc_821C0E44;
	case 136:
		goto loc_821C0F5C;
	case 137:
		goto loc_821C0EC8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821BA81C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BA83C;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ba88c
	if (ctx.cr6.eq) goto loc_821BA88C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821ba86c
	if (ctx.cr0.eq) goto loc_821BA86C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BA864:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ba864
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA864;
loc_821BA86C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ba88c
	if (ctx.cr6.eq) goto loc_821BA88C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821ba88c
	if (ctx.cr0.eq) goto loc_821BA88C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BA884:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ba884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA884;
loc_821BA88C:
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BA8B4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = ctx.r30.u64 | 537919488;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BA8D0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821ba908
	if (ctx.cr6.eq) goto loc_821BA908;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821ba908
	if (ctx.cr0.eq) goto loc_821BA908;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BA900:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821ba900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BA900;
loc_821BA908:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_821BA910:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b5148
	ctx.lr = 0x821BA924;
	sub_821B5148(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BA928:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r31,160(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x821ba994
	if (!ctx.cr6.eq) goto loc_821BA994;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,412(r1)
	REX_STORE_U32(ctx.r1.u32 + 412, ctx.r29.u32);
	// addi r6,r1,420
	ctx.r6.s64 = ctx.r1.s64 + 420;
	// stw r29,420(r1)
	REX_STORE_U32(ctx.r1.u32 + 420, ctx.r29.u32);
	// addi r5,r1,412
	ctx.r5.s64 = ctx.r1.s64 + 412;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821b6d58
	ctx.lr = 0x821BA974;
	sub_821B6D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r8,r1,412
	ctx.r8.s64 = ctx.r1.s64 + 412;
	// addi r7,r1,420
	ctx.r7.s64 = ctx.r1.s64 + 420;
loc_821BA984:
	// lis r5,8224
	ctx.r5.s64 = 538968064;
loc_821BA988:
	// li r9,23
	ctx.r9.s64 = 23;
loc_821BA98C:
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BA994:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x821baa08
	if (!ctx.cr6.eq) goto loc_821BAA08;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// stw r29,428(r1)
	REX_STORE_U32(ctx.r1.u32 + 428, ctx.r29.u32);
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// stw r29,384(r1)
	REX_STORE_U32(ctx.r1.u32 + 384, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,364(r1)
	REX_STORE_U32(ctx.r1.u32 + 364, ctx.r29.u32);
	// addi r6,r1,428
	ctx.r6.s64 = ctx.r1.s64 + 428;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BA9D0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,428
	ctx.r7.s64 = ctx.r1.s64 + 428;
	// addi r6,r1,364
	ctx.r6.s64 = ctx.r1.s64 + 364;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6d58
	ctx.lr = 0x821BA9F4;
	sub_821B6D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r8,r1,384
	ctx.r8.s64 = ctx.r1.s64 + 384;
	// addi r7,r1,364
	ctx.r7.s64 = ctx.r1.s64 + 364;
	// b 0x821ba984
	goto loc_821BA984;
loc_821BAA08:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x821baab8
	if (!ctx.cr6.eq) goto loc_821BAAB8;
	// addi r10,r1,496
	ctx.r10.s64 = ctx.r1.s64 + 496;
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lis r8,8272
	ctx.r8.s64 = 542113792;
	// stw r29,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,424(r1)
	REX_STORE_U32(ctx.r1.u32 + 424, ctx.r29.u32);
	// ori r28,r8,1
	ctx.r28.u64 = ctx.r8.u64 | 1;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAA58;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r30,8
	ctx.r8.s64 = ctx.r30.s64 + 8;
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r6,r1,500
	ctx.r6.s64 = ctx.r1.s64 + 500;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAA80;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,500
	ctx.r7.s64 = ctx.r1.s64 + 500;
	// addi r6,r1,424
	ctx.r6.s64 = ctx.r1.s64 + 424;
	// addi r5,r1,316
	ctx.r5.s64 = ctx.r1.s64 + 316;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6d58
	ctx.lr = 0x821BAAA4;
	sub_821B6D58(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r8,r1,316
	ctx.r8.s64 = ctx.r1.s64 + 316;
	// addi r7,r1,424
	ctx.r7.s64 = ctx.r1.s64 + 424;
	// b 0x821ba984
	goto loc_821BA984;
loc_821BAAB8:
	// mulli r4,r31,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(3));
	// bl 0x821b31c0
	ctx.lr = 0x821BAAC0;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BAAD8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x821baad8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAAD8;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bab10
	if (ctx.cr6.eq) goto loc_821BAB10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bab10
	if (ctx.cr0.eq) goto loc_821BAB10;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BAB08:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bab08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAB08;
loc_821BAB10:
	// lwz r26,132(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bab38
	if (ctx.cr6.eq) goto loc_821BAB38;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bab38
	if (ctx.cr0.eq) goto loc_821BAB38;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BAB30:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bab30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAB30;
loc_821BAB38:
	// lwz r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bab60
	if (ctx.cr6.eq) goto loc_821BAB60;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bab60
	if (ctx.cr0.eq) goto loc_821BAB60;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BAB58:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bab58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAB58;
loc_821BAB60:
	// stw r29,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r29.u32);
	// clrlwi r30,r31,12
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFFF;
	// stw r29,324(r1)
	REX_STORE_U32(ctx.r1.u32 + 324, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// oris r5,r30,8272
	ctx.r5.u64 = ctx.r30.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAB90;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BABB8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8240
	ctx.r5.u64 = ctx.r30.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BABE0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,6
	ctx.r9.s64 = 6;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,284
	ctx.r6.s64 = ctx.r1.s64 + 284;
	// oris r5,r30,20480
	ctx.r5.u64 = ctx.r30.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAC08;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,284
	ctx.r7.s64 = ctx.r1.s64 + 284;
	// addi r6,r1,324
	ctx.r6.s64 = ctx.r1.s64 + 324;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAC34;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// addi r8,r1,284
	ctx.r8.s64 = ctx.r1.s64 + 284;
	// addi r7,r1,324
	ctx.r7.s64 = ctx.r1.s64 + 324;
	// b 0x821ba988
	goto loc_821BA988;
loc_821BAC4C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r29,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,400(r1)
	REX_STORE_U32(ctx.r1.u32 + 400, ctx.r29.u32);
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// addi r6,r1,296
	ctx.r6.s64 = ctx.r1.s64 + 296;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAC98;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,296
	ctx.r7.s64 = ctx.r1.s64 + 296;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BACC4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r8,r1,296
	ctx.r8.s64 = ctx.r1.s64 + 296;
	// addi r7,r1,400
	ctx.r7.s64 = ctx.r1.s64 + 400;
	// b 0x821ba984
	goto loc_821BA984;
loc_821BACD8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bad10
	if (ctx.cr6.eq) goto loc_821BAD10;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bad10
	if (ctx.cr0.eq) goto loc_821BAD10;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAD08:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bad08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAD08;
loc_821BAD10:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// b 0x821ba910
	goto loc_821BA910;
loc_821BAD1C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bad54
	if (ctx.cr6.eq) goto loc_821BAD54;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bad54
	if (ctx.cr0.eq) goto loc_821BAD54;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAD4C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bad4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAD4C;
loc_821BAD54:
	// li r6,0
	ctx.r6.s64 = 0;
loc_821BAD58:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b57d0
	ctx.lr = 0x821BAD70;
	sub_821B57D0(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BAD74:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821badb8
	if (ctx.cr6.eq) goto loc_821BADB8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821badb8
	if (ctx.cr0.eq) goto loc_821BADB8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BADB0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821badb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BADB0;
loc_821BADB8:
	// lwz r6,148(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x821bad58
	goto loc_821BAD58;
loc_821BADC0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BADE0;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x821bae5c
	if (ctx.cr6.eq) goto loc_821BAE5C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bae18
	if (ctx.cr0.eq) goto loc_821BAE18;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAE10:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bae10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAE10;
loc_821BAE18:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bae5c
	if (ctx.cr6.eq) goto loc_821BAE5C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bae3c
	if (ctx.cr0.eq) goto loc_821BAE3C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAE34:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bae34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAE34;
loc_821BAE3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bae5c
	if (ctx.cr6.eq) goto loc_821BAE5C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bae5c
	if (ctx.cr0.eq) goto loc_821BAE5C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAE54:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bae54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAE54;
loc_821BAE5C:
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAE84;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,20
	ctx.r9.s64 = 20;
	// oris r5,r30,4160
	ctx.r5.u64 = ctx.r30.u64 | 272629760;
loc_821BAE94:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAEAC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
loc_821BAEC0:
	// oris r5,r30,8256
	ctx.r5.u64 = ctx.r30.u64 | 541065216;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BAEC8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BAF00;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821baf50
	if (ctx.cr6.eq) goto loc_821BAF50;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821baf30
	if (ctx.cr0.eq) goto loc_821BAF30;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAF28:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821baf28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAF28;
loc_821BAF30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821baf50
	if (ctx.cr6.eq) goto loc_821BAF50;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821baf50
	if (ctx.cr0.eq) goto loc_821BAF50;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAF48:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821baf48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAF48;
loc_821BAF50:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = ctx.r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BAF74;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = ctx.r30.u64 | 536870912;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BAF8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// bl 0x821b6ba8
	ctx.lr = 0x821BAFAC;
	sub_821B6BA8(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BAFB0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bafe8
	if (ctx.cr6.eq) goto loc_821BAFE8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bafe8
	if (ctx.cr0.eq) goto loc_821BAFE8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BAFE0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bafe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BAFE0;
loc_821BAFE8:
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_821BAFF0:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
loc_821BAFF4:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b4738
	ctx.lr = 0x821BB004;
	sub_821B4738(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BB008:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BB02C;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821BB04C;
	sub_8220EA28(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,4696(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 4696);
	// bl 0x8220ea28
	ctx.lr = 0x821BB070;
	sub_8220EA28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mulli r4,r30,7
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(7));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BB080;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r11,7
	ctx.r11.s64 = 7;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BB098:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x821bb098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB098;
	// lwz r22,184(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r8,180(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// beq cr6,0x821bb0d0
	if (ctx.cr6.eq) goto loc_821BB0D0;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// subf r10,r22,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r22.u64;
loc_821BB0C0:
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bb0c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB0C0;
loc_821BB0D0:
	// lwz r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb0fc
	if (ctx.cr6.eq) goto loc_821BB0FC;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb0fc
	if (ctx.cr0.eq) goto loc_821BB0FC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB0F4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb0f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB0F4;
loc_821BB0FC:
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb124
	if (ctx.cr6.eq) goto loc_821BB124;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb124
	if (ctx.cr0.eq) goto loc_821BB124;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB11C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb11c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB11C;
loc_821BB124:
	// lwz r24,168(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb14c
	if (ctx.cr6.eq) goto loc_821BB14C;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb14c
	if (ctx.cr0.eq) goto loc_821BB14C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB144:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB144;
loc_821BB14C:
	// lwz r26,172(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb174
	if (ctx.cr6.eq) goto loc_821BB174;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb174
	if (ctx.cr0.eq) goto loc_821BB174;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB16C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb16c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB16C;
loc_821BB174:
	// lwz r27,176(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb1bc
	if (ctx.cr6.eq) goto loc_821BB1BC;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb19c
	if (ctx.cr0.eq) goto loc_821BB19C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB194:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb194
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB194;
loc_821BB19C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb1bc
	if (ctx.cr6.eq) goto loc_821BB1BC;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb1bc
	if (ctx.cr0.eq) goto loc_821BB1BC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB1B4:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB1B4;
loc_821BB1BC:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r28,r30,8272
	ctx.r28.u64 = ctx.r30.u64 | 542113792;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB1E0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r30,4176
	ctx.r29.u64 = ctx.r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB20C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB234;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB25C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = ctx.r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB284;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BB2A0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r25,r1,808
	ctx.r25.s64 = ctx.r1.s64 + 808;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r24,r1,824
	ctx.r24.s64 = ctx.r1.s64 + 824;
	// addi r23,r1,752
	ctx.r23.s64 = ctx.r1.s64 + 752;
	// li r29,-1
	ctx.r29.s64 = -1;
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r8,4(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r26,r30,8272
	ctx.r26.u64 = ctx.r30.u64 | 542113792;
	// addi r6,r1,808
	ctx.r6.s64 = ctx.r1.s64 + 808;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r8,568(r1)
	REX_STORE_U32(ctx.r1.u32 + 568, ctx.r8.u32);
	// addi r8,r1,584
	ctx.r8.s64 = ctx.r1.s64 + 584;
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// stw r7,572(r1)
	REX_STORE_U32(ctx.r1.u32 + 572, ctx.r7.u32);
	// addi r7,r1,568
	ctx.r7.s64 = ctx.r1.s64 + 568;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r5,576(r1)
	REX_STORE_U32(ctx.r1.u32 + 576, ctx.r5.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r3,584(r1)
	REX_STORE_U32(ctx.r1.u32 + 584, ctx.r3.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r22,0(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r22,588(r1)
	REX_STORE_U32(ctx.r1.u32 + 588, ctx.r22.u32);
	// lwz r22,4(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r22,592(r1)
	REX_STORE_U32(ctx.r1.u32 + 592, ctx.r22.u32);
	// lwz r22,8(r10)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// stw r22,600(r1)
	REX_STORE_U32(ctx.r1.u32 + 600, ctx.r22.u32);
	// lwz r22,0(r10)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r22,604(r1)
	REX_STORE_U32(ctx.r1.u32 + 604, ctx.r22.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,608(r1)
	REX_STORE_U32(ctx.r1.u32 + 608, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,616(r1)
	REX_STORE_U32(ctx.r1.u32 + 616, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,620(r1)
	REX_STORE_U32(ctx.r1.u32 + 620, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r29,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r29,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r29.u32);
	// stw r29,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// stw r29,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r29.u32);
	// stw r29,4(r24)
	REX_STORE_U32(ctx.r24.u32 + 4, ctx.r29.u32);
	// stw r29,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r29.u32);
	// stw r29,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r29.u32);
	// stw r29,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r29.u32);
	// stw r29,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r29.u32);
	// stw r11,624(r1)
	REX_STORE_U32(ctx.r1.u32 + 624, ctx.r11.u32);
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// stw r29,4(r15)
	REX_STORE_U32(ctx.r15.u32 + 4, ctx.r29.u32);
	// stw r29,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r29.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BB39C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,616
	ctx.r8.s64 = ctx.r1.s64 + 616;
	// addi r7,r1,600
	ctx.r7.s64 = ctx.r1.s64 + 600;
	// addi r6,r1,824
	ctx.r6.s64 = ctx.r1.s64 + 824;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB3C4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,824
	ctx.r7.s64 = ctx.r1.s64 + 824;
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB3EC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r8,r1,752
	ctx.r8.s64 = ctx.r1.s64 + 752;
	// addi r7,r1,808
	ctx.r7.s64 = ctx.r1.s64 + 808;
	// oris r5,r30,8256
	ctx.r5.u64 = ctx.r30.u64 | 541065216;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BB404:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb43c
	if (ctx.cr6.eq) goto loc_821BB43C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb43c
	if (ctx.cr0.eq) goto loc_821BB43C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB434:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB434;
loc_821BB43C:
	// li r11,269
	ctx.r11.s64 = 269;
	// li r9,0
	ctx.r9.s64 = 0;
loc_821BB444:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
loc_821BB44C:
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BB458:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb490
	if (ctx.cr6.eq) goto loc_821BB490;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb490
	if (ctx.cr0.eq) goto loc_821BB490;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB488:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB488;
loc_821BB490:
	// li r11,135
	ctx.r11.s64 = 135;
loc_821BB494:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821bb44c
	goto loc_821BB44C;
loc_821BB4A4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,11552(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 11552);
	// bl 0x8220ea28
	ctx.lr = 0x821BB4D4;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BB4E4;
	sub_821B31C0(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb50c
	if (ctx.cr0.eq) goto loc_821BB50C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB504:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb504
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB504;
loc_821BB50C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb530
	if (ctx.cr0.eq) goto loc_821BB530;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB528:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB528;
loc_821BB530:
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821BB534:
	// li r11,517
	ctx.r11.s64 = 517;
loc_821BB538:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821BB53C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BB548:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821bb5d4
	if (!ctx.cr6.eq) goto loc_821BB5D4;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
loc_821BB574:
	// lwz r11,524(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 524);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb5cc
	if (ctx.cr6.eq) goto loc_821BB5CC;
	// lwz r28,1716(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// addi r29,r1,144
	ctx.r29.s64 = ctx.r1.s64 + 144;
loc_821BB58C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821bb5bc
	if (ctx.cr6.eq) goto loc_821BB5BC;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x821c3a90
	ctx.lr = 0x821BB5B4;
	sub_821C3A90(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
loc_821BB5BC:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821bb58c
	if (!ctx.cr6.eq) goto loc_821BB58C;
loc_821BB5CC:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x821c0f80
	goto loc_821C0F80;
loc_821BB5D4:
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821bb6a8
	if (!ctx.cr6.eq) goto loc_821BB6A8;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// beq cr6,0x821bb618
	if (ctx.cr6.eq) goto loc_821BB618;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb618
	if (ctx.cr0.eq) goto loc_821BB618;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB610:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb610
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB610;
loc_821BB618:
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,560
	ctx.r8.s64 = ctx.r1.s64 + 560;
	// addi r7,r1,536
	ctx.r7.s64 = ctx.r1.s64 + 536;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r10,536(r1)
	REX_STORE_U32(ctx.r1.u32 + 536, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,560(r1)
	REX_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,540(r1)
	REX_STORE_U32(ctx.r1.u32 + 540, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,564(r1)
	REX_STORE_U32(ctx.r1.u32 + 564, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BB660;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,516
	ctx.r7.s64 = ctx.r1.s64 + 516;
	// addi r6,r1,520
	ctx.r6.s64 = ctx.r1.s64 + 520;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB68C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// addi r8,r1,520
	ctx.r8.s64 = ctx.r1.s64 + 520;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BB6A8:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x821bb864
	if (!ctx.cr6.eq) goto loc_821BB864;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,776
	ctx.r6.s64 = ctx.r1.s64 + 776;
	// addi r5,r1,840
	ctx.r5.s64 = ctx.r1.s64 + 840;
	// addi r4,r1,792
	ctx.r4.s64 = ctx.r1.s64 + 792;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// stw r29,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r29,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r29,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r29.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r29,4(r7)
	REX_STORE_U32(ctx.r7.u32 + 4, ctx.r29.u32);
	// stw r29,4(r6)
	REX_STORE_U32(ctx.r6.u32 + 4, ctx.r29.u32);
	// stw r29,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r29.u32);
	// stw r29,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// stw r29,8(r7)
	REX_STORE_U32(ctx.r7.u32 + 8, ctx.r29.u32);
	// stw r29,8(r6)
	REX_STORE_U32(ctx.r6.u32 + 8, ctx.r29.u32);
	// stw r29,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r29.u32);
	// stw r29,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r29.u32);
	// beq cr6,0x821bb724
	if (ctx.cr6.eq) goto loc_821BB724;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb724
	if (ctx.cr0.eq) goto loc_821BB724;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB71C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB71C;
loc_821BB724:
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	ctx.r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r6,r1,736
	ctx.r6.s64 = ctx.r1.s64 + 736;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BB780;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,480
	ctx.r8.s64 = ctx.r1.s64 + 480;
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// addi r6,r1,776
	ctx.r6.s64 = ctx.r1.s64 + 776;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,480(r1)
	REX_STORE_U32(ctx.r1.u32 + 480, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,484(r1)
	REX_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,488(r1)
	REX_STORE_U32(ctx.r1.u32 + 488, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BB7D8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,776
	ctx.r7.s64 = ctx.r1.s64 + 776;
	// addi r6,r1,840
	ctx.r6.s64 = ctx.r1.s64 + 840;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB804;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,840
	ctx.r8.s64 = ctx.r1.s64 + 840;
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// addi r6,r1,792
	ctx.r6.s64 = ctx.r1.s64 + 792;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BB830;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,20480
	ctx.r5.s64 = 1342177280;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,792
	ctx.r7.s64 = ctx.r1.s64 + 792;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// stw r11,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BB864:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x821bb574
	if (!ctx.cr6.eq) goto loc_821BB574;
	// li r11,12
	ctx.r11.s64 = 12;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r10,r1,988
	ctx.r10.s64 = ctx.r1.s64 + 988;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BB880:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bb880
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB880;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,940
	ctx.r10.s64 = ctx.r1.s64 + 940;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BB898:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bb898
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB898;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,1036
	ctx.r10.s64 = ctx.r1.s64 + 1036;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BB8B0:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bb8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB8B0;
	// li r11,12
	ctx.r11.s64 = 12;
	// addi r10,r1,892
	ctx.r10.s64 = ctx.r1.s64 + 892;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BB8C8:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bb8c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB8C8;
	// addi r10,r1,544
	ctx.r10.s64 = ctx.r1.s64 + 544;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r29.u32);
	// stw r29,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// stw r29,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stw r29,12(r10)
	REX_STORE_U32(ctx.r10.u32 + 12, ctx.r29.u32);
	// beq cr6,0x821bb908
	if (ctx.cr6.eq) goto loc_821BB908;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb908
	if (ctx.cr0.eq) goto loc_821BB908;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BB900:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bb900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BB900;
loc_821BB908:
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	ctx.r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// addi r6,r1,992
	ctx.r6.s64 = ctx.r1.s64 + 992;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BB9F4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,444
	ctx.r8.s64 = ctx.r1.s64 + 444;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// addi r6,r1,1004
	ctx.r6.s64 = ctx.r1.s64 + 1004;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBA1C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,1016
	ctx.r6.s64 = ctx.r1.s64 + 1016;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBA44;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,468
	ctx.r8.s64 = ctx.r1.s64 + 468;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r1,1028
	ctx.r6.s64 = ctx.r1.s64 + 1028;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBA6C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,432
	ctx.r8.s64 = ctx.r1.s64 + 432;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r6,r1,944
	ctx.r6.s64 = ctx.r1.s64 + 944;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,432(r1)
	REX_STORE_U32(ctx.r1.u32 + 432, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,436(r1)
	REX_STORE_U32(ctx.r1.u32 + 436, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,440(r1)
	REX_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,444(r1)
	REX_STORE_U32(ctx.r1.u32 + 444, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,448(r1)
	REX_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,452(r1)
	REX_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,456(r1)
	REX_STORE_U32(ctx.r1.u32 + 456, ctx.r11.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// stw r11,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,464(r1)
	REX_STORE_U32(ctx.r1.u32 + 464, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,468(r1)
	REX_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,472(r1)
	REX_STORE_U32(ctx.r1.u32 + 472, ctx.r11.u32);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,476(r1)
	REX_STORE_U32(ctx.r1.u32 + 476, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BBB54;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,444
	ctx.r8.s64 = ctx.r1.s64 + 444;
	// addi r7,r1,236
	ctx.r7.s64 = ctx.r1.s64 + 236;
	// addi r6,r1,956
	ctx.r6.s64 = ctx.r1.s64 + 956;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBB7C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,456
	ctx.r8.s64 = ctx.r1.s64 + 456;
	// addi r7,r1,248
	ctx.r7.s64 = ctx.r1.s64 + 248;
	// addi r6,r1,968
	ctx.r6.s64 = ctx.r1.s64 + 968;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBBA4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,468
	ctx.r8.s64 = ctx.r1.s64 + 468;
	// addi r7,r1,260
	ctx.r7.s64 = ctx.r1.s64 + 260;
	// addi r6,r1,980
	ctx.r6.s64 = ctx.r1.s64 + 980;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBBCC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r11,4112
	ctx.r11.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	ctx.r29.u64 = ctx.r11.u64 | 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,944
	ctx.r7.s64 = ctx.r1.s64 + 944;
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBBFC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,956
	ctx.r7.s64 = ctx.r1.s64 + 956;
	// addi r6,r1,1052
	ctx.r6.s64 = ctx.r1.s64 + 1052;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBC24;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,968
	ctx.r7.s64 = ctx.r1.s64 + 968;
	// addi r6,r1,1064
	ctx.r6.s64 = ctx.r1.s64 + 1064;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBC4C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,980
	ctx.r7.s64 = ctx.r1.s64 + 980;
	// addi r6,r1,1076
	ctx.r6.s64 = ctx.r1.s64 + 1076;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBC74;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r11,3
	ctx.r29.u64 = ctx.r11.u64 | 3;
	// addi r8,r1,1040
	ctx.r8.s64 = ctx.r1.s64 + 1040;
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,896
	ctx.r6.s64 = ctx.r1.s64 + 896;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBCA4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1052
	ctx.r8.s64 = ctx.r1.s64 + 1052;
	// addi r7,r1,1004
	ctx.r7.s64 = ctx.r1.s64 + 1004;
	// addi r6,r1,908
	ctx.r6.s64 = ctx.r1.s64 + 908;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBCCC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1064
	ctx.r8.s64 = ctx.r1.s64 + 1064;
	// addi r7,r1,1016
	ctx.r7.s64 = ctx.r1.s64 + 1016;
	// addi r6,r1,920
	ctx.r6.s64 = ctx.r1.s64 + 920;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBCF4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,1076
	ctx.r8.s64 = ctx.r1.s64 + 1076;
	// addi r7,r1,1028
	ctx.r7.s64 = ctx.r1.s64 + 1028;
	// addi r6,r1,932
	ctx.r6.s64 = ctx.r1.s64 + 932;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBD1C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r29,r10,3
	ctx.r29.u64 = ctx.r10.u64 | 3;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// stw r11,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r11.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BBDAC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,236
	ctx.r8.s64 = ctx.r1.s64 + 236;
	// addi r7,r1,908
	ctx.r7.s64 = ctx.r1.s64 + 908;
	// addi r6,r1,548
	ctx.r6.s64 = ctx.r1.s64 + 548;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBDD4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,248
	ctx.r8.s64 = ctx.r1.s64 + 248;
	// addi r7,r1,920
	ctx.r7.s64 = ctx.r1.s64 + 920;
	// addi r6,r1,552
	ctx.r6.s64 = ctx.r1.s64 + 552;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBDFC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,260
	ctx.r8.s64 = ctx.r1.s64 + 260;
	// addi r7,r1,932
	ctx.r7.s64 = ctx.r1.s64 + 932;
	// addi r6,r1,556
	ctx.r6.s64 = ctx.r1.s64 + 556;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBE24;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r5,20480
	ctx.r5.s64 = 1342177280;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stw r11,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r11.u32);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// stw r11,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BBE60:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r31,160(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// rlwinm r4,r31,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x821b31c0
	ctx.lr = 0x821BBE90;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BBEA8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x821bbea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BBEA8;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bbee0
	if (ctx.cr6.eq) goto loc_821BBEE0;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bbee0
	if (ctx.cr0.eq) goto loc_821BBEE0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BBED8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bbed8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BBED8;
loc_821BBEE0:
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bbf08
	if (ctx.cr6.eq) goto loc_821BBF08;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bbf08
	if (ctx.cr0.eq) goto loc_821BBF08;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BBF00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bbf00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BBF00;
loc_821BBF08:
	// stw r29,332(r1)
	REX_STORE_U32(ctx.r1.u32 + 332, ctx.r29.u32);
	// clrlwi r30,r31,12
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFFF;
	// stw r29,360(r1)
	REX_STORE_U32(ctx.r1.u32 + 360, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBF38;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = ctx.r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBF60;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,332
	ctx.r6.s64 = ctx.r1.s64 + 332;
	// oris r5,r30,20480
	ctx.r5.u64 = ctx.r30.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBF88;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,332
	ctx.r7.s64 = ctx.r1.s64 + 332;
	// addi r6,r1,360
	ctx.r6.s64 = ctx.r1.s64 + 360;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BBFB4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,360
	ctx.r7.s64 = ctx.r1.s64 + 360;
	// b 0x821ba98c
	goto loc_821BA98C;
loc_821BBFD0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc014
	if (ctx.cr6.eq) goto loc_821BC014;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc014
	if (ctx.cr0.eq) goto loc_821BC014;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC00C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc00c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC00C;
loc_821BC014:
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,5
	ctx.r11.s64 = 5;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BC02C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r9,32(r14)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r9,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,692(r1)
	REX_STORE_U32(ctx.r1.u32 + 692, ctx.r9.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,696(r1)
	REX_STORE_U32(ctx.r1.u32 + 696, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stw r11,700(r1)
	REX_STORE_U32(ctx.r1.u32 + 700, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stw r11,704(r1)
	REX_STORE_U32(ctx.r1.u32 + 704, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,708(r1)
	REX_STORE_U32(ctx.r1.u32 + 708, ctx.r11.u32);
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stw r11,712(r1)
	REX_STORE_U32(ctx.r1.u32 + 712, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,716(r1)
	REX_STORE_U32(ctx.r1.u32 + 716, ctx.r11.u32);
	// beq cr6,0x821bc0b8
	if (ctx.cr6.eq) goto loc_821BC0B8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc0b8
	if (ctx.cr0.eq) goto loc_821BC0B8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC0B0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc0b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC0B0;
loc_821BC0B8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r11,517
	ctx.r11.s64 = 517;
	// addi r8,r1,704
	ctx.r8.s64 = ctx.r1.s64 + 704;
	// rlwimi r5,r11,20,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// addi r7,r1,688
	ctx.r7.s64 = ctx.r1.s64 + 688;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BC0D0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BC0F4;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821BC114;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BC124;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BC13C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bc13c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC13C;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc16c
	if (ctx.cr6.eq) goto loc_821BC16C;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc16c
	if (ctx.cr0.eq) goto loc_821BC16C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC164:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC164;
loc_821BC16C:
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc1b8
	if (ctx.cr6.eq) goto loc_821BC1B8;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc198
	if (ctx.cr0.eq) goto loc_821BC198;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC190:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc190
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC190;
loc_821BC198:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc1b8
	if (ctx.cr6.eq) goto loc_821BC1B8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc1b8
	if (ctx.cr0.eq) goto loc_821BC1B8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC1B0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC1B0;
loc_821BC1B8:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = ctx.r30.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC1D8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// oris r5,r30,4176
	ctx.r5.u64 = ctx.r30.u64 | 273678336;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BC1F4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc22c
	if (ctx.cr6.eq) goto loc_821BC22C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc22c
	if (ctx.cr0.eq) goto loc_821BC22C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC224:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc224
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC224;
loc_821BC22C:
	// li r11,261
	ctx.r11.s64 = 261;
loc_821BC230:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x821bb444
	goto loc_821BB444;
loc_821BC238:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r25,r30,12
	ctx.r25.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// stw r29,340(r1)
	REX_STORE_U32(ctx.r1.u32 + 340, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,368(r1)
	REX_STORE_U32(ctx.r1.u32 + 368, ctx.r29.u32);
	// addi r6,r1,340
	ctx.r6.s64 = ctx.r1.s64 + 340;
	// oris r5,r25,20480
	ctx.r5.u64 = ctx.r25.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC294;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r14,36
	ctx.r8.s64 = ctx.r14.s64 + 36;
	// addi r7,r1,340
	ctx.r7.s64 = ctx.r1.s64 + 340;
	// addi r6,r1,368
	ctx.r6.s64 = ctx.r1.s64 + 368;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC2C0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BC2D8;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BC2EC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bc2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC2EC;
	// lwz r24,172(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc318
	if (ctx.cr6.eq) goto loc_821BC318;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC30C:
	// lwz r10,368(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 368);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc30c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC30C;
loc_821BC318:
	// lwz r27,160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc340
	if (ctx.cr6.eq) goto loc_821BC340;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc340
	if (ctx.cr0.eq) goto loc_821BC340;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC338:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc338
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC338;
loc_821BC340:
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc368
	if (ctx.cr6.eq) goto loc_821BC368;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc368
	if (ctx.cr0.eq) goto loc_821BC368;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC360:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC360;
loc_821BC368:
	// lwz r28,168(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc3b0
	if (ctx.cr6.eq) goto loc_821BC3B0;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc390
	if (ctx.cr0.eq) goto loc_821BC390;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC388:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc388
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC388;
loc_821BC390:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc3b0
	if (ctx.cr6.eq) goto loc_821BC3B0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc3b0
	if (ctx.cr0.eq) goto loc_821BC3B0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC3A8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc3a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC3A8;
loc_821BC3B0:
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r25,4112
	ctx.r5.u64 = ctx.r25.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC3D4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r30,r25,8256
	ctx.r30.u64 = ctx.r25.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC400;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r25,8272
	ctx.r5.u64 = ctx.r25.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC428;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BC440:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BC460;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
	// beq cr6,0x821bc4dc
	if (ctx.cr6.eq) goto loc_821BC4DC;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc498
	if (ctx.cr0.eq) goto loc_821BC498;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC490:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC490;
loc_821BC498:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc4dc
	if (ctx.cr6.eq) goto loc_821BC4DC;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc4bc
	if (ctx.cr0.eq) goto loc_821BC4BC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC4B4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc4b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC4B4;
loc_821BC4BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc4dc
	if (ctx.cr6.eq) goto loc_821BC4DC;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc4dc
	if (ctx.cr0.eq) goto loc_821BC4DC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC4D4:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc4d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC4D4;
loc_821BC4DC:
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = ctx.r30.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC504;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,24
	ctx.r9.s64 = 24;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// b 0x821bae94
	goto loc_821BAE94;
loc_821BC518:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BC544;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BC55C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x821bc55c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC55C;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,8
	ctx.r8.s64 = 8;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821BC574:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc59c
	if (ctx.cr6.eq) goto loc_821BC59C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc59c
	if (ctx.cr0.eq) goto loc_821BC59C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC594:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc594
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC594;
loc_821BC59C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x821bc574
	if (!ctx.cr0.eq) goto loc_821BC574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc5c8
	if (ctx.cr6.eq) goto loc_821BC5C8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc5c8
	if (ctx.cr0.eq) goto loc_821BC5C8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC5C0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc5c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC5C0;
loc_821BC5C8:
	// lwz r22,148(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r29,r30,12
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r27,160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r29,4144
	ctx.r5.u64 = ctx.r29.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC5F4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r28,164(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// oris r23,r29,8272
	ctx.r23.u64 = ctx.r29.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC624;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// oris r24,r29,4112
	ctx.r24.u64 = ctx.r29.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC654;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r29,8208
	ctx.r5.u64 = ctx.r29.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC680;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r26,176(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r29,4160
	ctx.r5.u64 = ctx.r29.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC6AC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r25,180(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = ctx.r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC6D8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r28,184(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC704;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r29,188(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6128
	ctx.lr = 0x821BC730;
	sub_821B6128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BC748:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc780
	if (ctx.cr6.eq) goto loc_821BC780;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc780
	if (ctx.cr0.eq) goto loc_821BC780;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC778:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC778;
loc_821BC780:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r11,65
	ctx.r11.s64 = 65;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r5,r11,22,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821bb44c
	goto loc_821BB44C;
loc_821BC794:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b018
	ctx.lr = 0x821BC7B0;
	sub_8216B018(ctx, base);
	// mr. r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// stw r17,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r17.u32);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// mulli r4,r30,10
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(10));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BC7C8;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BC7DC:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bdnz 0x821bc7dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC7DC;
	// lwz r19,160(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc814
	if (ctx.cr6.eq) goto loc_821BC814;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc814
	if (ctx.cr0.eq) goto loc_821BC814;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC80C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc80c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC80C;
loc_821BC814:
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc83c
	if (ctx.cr6.eq) goto loc_821BC83C;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc83c
	if (ctx.cr0.eq) goto loc_821BC83C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC834:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc834
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC834;
loc_821BC83C:
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc864
	if (ctx.cr6.eq) goto loc_821BC864;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc864
	if (ctx.cr0.eq) goto loc_821BC864;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC85C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc85c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC85C;
loc_821BC864:
	// lwz r20,172(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc88c
	if (ctx.cr6.eq) goto loc_821BC88C;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc88c
	if (ctx.cr0.eq) goto loc_821BC88C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC884:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc884
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC884;
loc_821BC88C:
	// lwz r21,176(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc8b4
	if (ctx.cr6.eq) goto loc_821BC8B4;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc8b4
	if (ctx.cr0.eq) goto loc_821BC8B4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC8AC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc8ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC8AC;
loc_821BC8B4:
	// lwz r22,180(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc8dc
	if (ctx.cr6.eq) goto loc_821BC8DC;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc8dc
	if (ctx.cr0.eq) goto loc_821BC8DC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC8D4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc8d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC8D4;
loc_821BC8DC:
	// lwz r24,184(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc904
	if (ctx.cr6.eq) goto loc_821BC904;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc904
	if (ctx.cr0.eq) goto loc_821BC904;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC8FC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc8fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC8FC;
loc_821BC904:
	// lwz r25,188(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc950
	if (ctx.cr6.eq) goto loc_821BC950;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc92c
	if (ctx.cr0.eq) goto loc_821BC92C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC924:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC924;
loc_821BC92C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bc950
	if (ctx.cr6.eq) goto loc_821BC950;
	// addi r11,r17,-4
	ctx.r11.s64 = ctx.r17.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bc950
	if (ctx.cr0.eq) goto loc_821BC950;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BC948:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bc948
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BC948;
loc_821BC950:
	// clrlwi r28,r30,12
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r18,144(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r26,r28,4112
	ctx.r26.u64 = ctx.r28.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC97C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// oris r5,r28,8208
	ctx.r5.u64 = ctx.r28.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC9A4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC9CC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// oris r5,r28,8240
	ctx.r5.u64 = ctx.r28.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BC9F4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r27,r28,8256
	ctx.r27.u64 = ctx.r28.u64 | 541065216;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCA20;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// oris r5,r28,4192
	ctx.r5.u64 = ctx.r28.u64 | 274726912;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCA48;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCA70;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r28,4160
	ctx.r5.u64 = ctx.r28.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCA98;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCAC0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r26,192(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcaf8
	if (ctx.cr6.eq) goto loc_821BCAF8;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcaf8
	if (ctx.cr0.eq) goto loc_821BCAF8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCAF0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcaf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCAF0;
loc_821BCAF8:
	// lwz r27,196(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcb40
	if (ctx.cr6.eq) goto loc_821BCB40;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcb20
	if (ctx.cr0.eq) goto loc_821BCB20;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCB18:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcb18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCB18;
loc_821BCB20:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcb40
	if (ctx.cr6.eq) goto loc_821BCB40;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcb40
	if (ctx.cr0.eq) goto loc_821BCB40;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCB38:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcb38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCB38;
loc_821BCB40:
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r28,4176
	ctx.r5.u64 = ctx.r28.u64 | 273678336;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCB60;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r28,4144
	ctx.r5.u64 = ctx.r28.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCB88;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_821BCB98:
	// oris r5,r28,8272
	ctx.r5.u64 = ctx.r28.u64 | 542113792;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BCBA0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mulli r4,r30,6
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(6));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BCBC0;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BCBD8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bcbd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCBD8;
	// lwz r23,160(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcc10
	if (ctx.cr6.eq) goto loc_821BCC10;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcc10
	if (ctx.cr0.eq) goto loc_821BCC10;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCC08:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcc08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCC08;
loc_821BCC10:
	// lwz r22,164(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcc38
	if (ctx.cr6.eq) goto loc_821BCC38;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcc38
	if (ctx.cr0.eq) goto loc_821BCC38;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCC30:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCC30;
loc_821BCC38:
	// lwz r21,168(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcc60
	if (ctx.cr6.eq) goto loc_821BCC60;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcc60
	if (ctx.cr0.eq) goto loc_821BCC60;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCC58:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcc58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCC58;
loc_821BCC60:
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcc88
	if (ctx.cr6.eq) goto loc_821BCC88;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcc88
	if (ctx.cr0.eq) goto loc_821BCC88;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCC80:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcc80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCC80;
loc_821BCC88:
	// lwz r24,176(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bccb0
	if (ctx.cr6.eq) goto loc_821BCCB0;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bccb0
	if (ctx.cr0.eq) goto loc_821BCCB0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCCA8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCCA8;
loc_821BCCB0:
	// lwz r26,180(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bccf8
	if (ctx.cr6.eq) goto loc_821BCCF8;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bccd8
	if (ctx.cr0.eq) goto loc_821BCCD8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCCD0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bccd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCCD0;
loc_821BCCD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bccf8
	if (ctx.cr6.eq) goto loc_821BCCF8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bccf8
	if (ctx.cr0.eq) goto loc_821BCCF8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCCF0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bccf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCCF0;
loc_821BCCF8:
	// lwz r27,144(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// oris r5,r30,4304
	ctx.r5.u64 = ctx.r30.u64 | 282066944;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCD20;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r28,r30,4112
	ctx.r28.u64 = ctx.r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCD4C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r30,8208
	ctx.r29.u64 = ctx.r30.u64 | 537919488;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCD78;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r30,4320
	ctx.r5.u64 = ctx.r30.u64 | 283115520;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCDA0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCDC8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCDF0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// b 0x821baec0
	goto loc_821BAEC0;
loc_821BCE08:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bd078
	if (!ctx.cr0.eq) goto loc_821BD078;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BCE3C;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BCE50:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bce50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCE50;
	// lwz r23,160(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bce88
	if (ctx.cr6.eq) goto loc_821BCE88;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bce88
	if (ctx.cr0.eq) goto loc_821BCE88;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCE80:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bce80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCE80;
loc_821BCE88:
	// lwz r24,164(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bceb0
	if (ctx.cr6.eq) goto loc_821BCEB0;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bceb0
	if (ctx.cr0.eq) goto loc_821BCEB0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCEA8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcea8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCEA8;
loc_821BCEB0:
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bced8
	if (ctx.cr6.eq) goto loc_821BCED8;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bced8
	if (ctx.cr0.eq) goto loc_821BCED8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCED0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bced0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCED0;
loc_821BCED8:
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcf20
	if (ctx.cr6.eq) goto loc_821BCF20;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcf00
	if (ctx.cr0.eq) goto loc_821BCF00;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCEF8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcef8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCEF8;
loc_821BCF00:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bcf20
	if (ctx.cr6.eq) goto loc_821BCF20;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bcf20
	if (ctx.cr0.eq) goto loc_821BCF20;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BCF18:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bcf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BCF18;
loc_821BCF20:
	// clrlwi r29,r30,12
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r26,144(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,64
	ctx.r9.s64 = 64;
	// oris r28,r29,4112
	ctx.r28.u64 = ctx.r29.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCF4C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// oris r5,r29,8256
	ctx.r5.u64 = ctx.r29.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCF74;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = ctx.r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCF9C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCFC4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = ctx.r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BCFEC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// subf r28,r15,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r15.u64;
loc_821BD008:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r28,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r29.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b18f0
	ctx.lr = 0x821BD018;
	sub_821B18F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lfd f0,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r14.u32 + 176);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f12,168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821bd048
	if (!ctx.cr6.gt) goto loc_821BD048;
	// lfd f11,168(r14)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r14.u32 + 168);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x821bd048
	if (!ctx.cr6.lt) goto loc_821BD048;
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// b 0x821bd060
	goto loc_821BD060;
loc_821BD048:
	// lfd f11,168(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r14.u32 + 168);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x821bd05c
	if (ctx.cr6.eq) goto loc_821BD05C;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x821bd064
	if (!ctx.cr6.eq) goto loc_821BD064;
loc_821BD05C:
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
loc_821BD060:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821BD064:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821bd008
	if (ctx.cr6.lt) goto loc_821BD008;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD078:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
loc_821BD088:
	// lwz r10,32(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD088;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD098:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bd2dc
	if (!ctx.cr0.eq) goto loc_821BD2DC;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BD0CC;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BD0E0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bd0e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD0E0;
	// lwz r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd118
	if (ctx.cr6.eq) goto loc_821BD118;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd118
	if (ctx.cr0.eq) goto loc_821BD118;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD110:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd110
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD110;
loc_821BD118:
	// lwz r27,164(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd140
	if (ctx.cr6.eq) goto loc_821BD140;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd140
	if (ctx.cr0.eq) goto loc_821BD140;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD138:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd138
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD138;
loc_821BD140:
	// lwz r26,168(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd1b0
	if (ctx.cr6.eq) goto loc_821BD1B0;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd168
	if (ctx.cr0.eq) goto loc_821BD168;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD160:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd160
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD160;
loc_821BD168:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd1b0
	if (ctx.cr6.eq) goto loc_821BD1B0;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq 0x821bd190
	if (ctx.cr0.eq) goto loc_821BD190;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD188:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD188;
loc_821BD190:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd1b0
	if (ctx.cr6.eq) goto loc_821BD1B0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd1b0
	if (ctx.cr0.eq) goto loc_821BD1B0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD1A8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD1A8;
loc_821BD1B0:
	// lwz r28,144(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r29,r30,12
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r29,4144
	ctx.r5.u64 = ctx.r29.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD1D8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = ctx.r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD200;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r29,4112
	ctx.r5.u64 = ctx.r29.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD228;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// oris r5,r29,8240
	ctx.r5.u64 = ctx.r29.u64 | 540016640;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD250;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// subf r28,r15,r28
	ctx.r28.u64 = ctx.r28.u64 - ctx.r15.u64;
loc_821BD26C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r29,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b18f0
	ctx.lr = 0x821BD27C;
	sub_821B18F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lfd f0,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r14.u32 + 176);
	// lfd f13,160(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// lfd f12,168(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x821bd2ac
	if (!ctx.cr6.gt) goto loc_821BD2AC;
	// lfd f11,168(r14)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r14.u32 + 168);
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x821bd2ac
	if (!ctx.cr6.lt) goto loc_821BD2AC;
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// b 0x821bd2c4
	goto loc_821BD2C4;
loc_821BD2AC:
	// lfd f11,168(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r14.u32 + 168);
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// beq cr6,0x821bd2c0
	if (ctx.cr6.eq) goto loc_821BD2C0;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bne cr6,0x821bd2c8
	if (!ctx.cr6.eq) goto loc_821BD2C8;
loc_821BD2C0:
	// lwz r11,32(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
loc_821BD2C4:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821BD2C8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821bd26c
	if (ctx.cr6.lt) goto loc_821BD26C;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD2DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
loc_821BD2EC:
	// lwz r10,36(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd2ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD2EC;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD2FC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bd564
	if (!ctx.cr0.eq) goto loc_821BD564;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BD330;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BD344:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bd344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD344;
	// lwz r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd37c
	if (ctx.cr6.eq) goto loc_821BD37C;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd37c
	if (ctx.cr0.eq) goto loc_821BD37C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD374:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD374;
loc_821BD37C:
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd3a4
	if (ctx.cr6.eq) goto loc_821BD3A4;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd3a4
	if (ctx.cr0.eq) goto loc_821BD3A4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD39C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd39c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD39C;
loc_821BD3A4:
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd3cc
	if (ctx.cr6.eq) goto loc_821BD3CC;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd3cc
	if (ctx.cr0.eq) goto loc_821BD3CC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD3C4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd3c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD3C4;
loc_821BD3CC:
	// lwz r24,172(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd414
	if (ctx.cr6.eq) goto loc_821BD414;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd3f4
	if (ctx.cr0.eq) goto loc_821BD3F4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD3EC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd3ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD3EC;
loc_821BD3F4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd414
	if (ctx.cr6.eq) goto loc_821BD414;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd414
	if (ctx.cr0.eq) goto loc_821BD414;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD40C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD40C;
loc_821BD414:
	// lwz r26,144(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r29,r30,12
	ctx.r29.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// oris r5,r29,8272
	ctx.r5.u64 = ctx.r29.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD43C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r28,r29,4112
	ctx.r28.u64 = ctx.r29.u64 | 269484032;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD468;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r29,8240
	ctx.r29.u64 = ctx.r29.u64 | 540016640;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD494;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,90
	ctx.r9.s64 = 90;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD4BC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,87
	ctx.r9.s64 = 87;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD4E4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// subf r28,r15,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r15.u64;
loc_821BD500:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwzx r4,r29,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b18f0
	ctx.lr = 0x821BD510;
	sub_821B18F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lfd f12,176(r14)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r14.u32 + 176);
	// lfd f11,160(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bgt cr6,0x821bd548
	if (ctx.cr6.gt) goto loc_821BD548;
	// lfd f0,168(r14)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r14.u32 + 168);
	// lfd f13,168(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x821bd548
	if (ctx.cr6.lt) goto loc_821BD548;
	// fcmpu cr6,f11,f0
	ctx.cr6.compare(ctx.f11.f64, ctx.f0.f64);
	// beq cr6,0x821bd548
	if (ctx.cr6.eq) goto loc_821BD548;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bne cr6,0x821bd550
	if (!ctx.cr6.eq) goto loc_821BD550;
loc_821BD548:
	// lwz r11,36(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821BD550:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r30
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821bd500
	if (ctx.cr6.lt) goto loc_821BD500;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD564:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
loc_821BD574:
	// lwz r10,36(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd574
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD574;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BD584:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BD5A4;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd5f4
	if (ctx.cr6.eq) goto loc_821BD5F4;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd5d4
	if (ctx.cr0.eq) goto loc_821BD5D4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD5CC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd5cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD5CC;
loc_821BD5D4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bd5f4
	if (ctx.cr6.eq) goto loc_821BD5F4;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd5f4
	if (ctx.cr0.eq) goto loc_821BD5F4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD5EC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd5ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD5EC;
loc_821BD5F4:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4176
	ctx.r5.u64 = ctx.r30.u64 | 273678336;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD618;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821BD624:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// oris r5,r30,8272
	ctx.r5.u64 = ctx.r30.u64 | 542113792;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BD630:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x821bd6a0
	if (!ctx.cr6.eq) goto loc_821BD6A0;
	// stw r29,348(r1)
	REX_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,348
	ctx.r6.s64 = ctx.r1.s64 + 348;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD684;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8208
	ctx.r5.s64 = 537919488;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,348
	ctx.r8.s64 = ctx.r1.s64 + 348;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// b 0x821ba98c
	goto loc_821BA98C;
loc_821BD6A0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r29,376(r1)
	REX_STORE_U32(ctx.r1.u32 + 376, ctx.r29.u32);
	// stw r29,356(r1)
	REX_STORE_U32(ctx.r1.u32 + 356, ctx.r29.u32);
	// beq cr6,0x821bd6c8
	if (ctx.cr6.eq) goto loc_821BD6C8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bd6c8
	if (ctx.cr0.eq) goto loc_821BD6C8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BD6C0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bd6c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD6C0;
loc_821BD6C8:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwimi r5,r11,28,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r6,r1,376
	ctx.r6.s64 = ctx.r1.s64 + 376;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD6EC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,376
	ctx.r7.s64 = ctx.r1.s64 + 376;
	// addi r6,r1,356
	ctx.r6.s64 = ctx.r1.s64 + 356;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD718;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,356
	ctx.r7.s64 = ctx.r1.s64 + 356;
	// b 0x821ba98c
	goto loc_821BA98C;
loc_821BD734:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6128
	ctx.lr = 0x821BD780;
	sub_821B6128(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BD784:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x821c0f78
	if (!ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// rlwinm. r11,r11,0,7,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bd824
	if (ctx.cr0.eq) goto loc_821BD824;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r31,148(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,20496
	ctx.r5.s64 = 1343225856;
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// lwz r30,0(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// stw r30,640(r1)
	REX_STORE_U32(ctx.r1.u32 + 640, ctx.r30.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r31,644(r1)
	REX_STORE_U32(ctx.r1.u32 + 644, ctx.r31.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r31,648(r1)
	REX_STORE_U32(ctx.r1.u32 + 648, ctx.r31.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,652(r1)
	REX_STORE_U32(ctx.r1.u32 + 652, ctx.r10.u32);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	REX_STORE_U32(ctx.r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	REX_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// b 0x821c02dc
	goto loc_821C02DC;
loc_821BD824:
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821b31c0
	ctx.lr = 0x821BD82C;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BD848:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bd848
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD848;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r29,-1
	ctx.r29.s64 = -1;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BD86C:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821bd86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BD86C;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// stw r29,4(r15)
	REX_STORE_U32(ctx.r15.u32 + 4, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,12(r15)
	REX_STORE_U32(ctx.r15.u32 + 12, ctx.r29.u32);
	// lwz r30,144(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// lwz r28,160(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD8B0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD8E0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r15,4
	ctx.r6.s64 = ctx.r15.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD910;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,148(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// lwz r29,168(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD944;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r30,172(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD974;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r29,176(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD9A0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r30,180(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6608
	ctx.lr = 0x821BD9C8;
	sub_821B6608(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r15,8
	ctx.r6.s64 = ctx.r15.s64 + 8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BD9F0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r30,r14,32
	ctx.r30.s64 = ctx.r14.s64 + 32;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDA20;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r15,12
	ctx.r6.s64 = ctx.r15.s64 + 12;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// b 0x821c02e0
	goto loc_821C02E0;
loc_821BDA48:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BDA6C;
	sub_82160C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821BDA80;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BDA90;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BDAA8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x821bdaa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDAA8;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdad8
	if (ctx.cr6.eq) goto loc_821BDAD8;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdad8
	if (ctx.cr0.eq) goto loc_821BDAD8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDAD0:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdad0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDAD0;
loc_821BDAD8:
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdb24
	if (ctx.cr6.eq) goto loc_821BDB24;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdb04
	if (ctx.cr0.eq) goto loc_821BDB04;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDAFC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdafc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDAFC;
loc_821BDB04:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdb24
	if (ctx.cr6.eq) goto loc_821BDB24;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdb24
	if (ctx.cr0.eq) goto loc_821BDB24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDB1C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDB1C;
loc_821BDB24:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4192
	ctx.r5.u64 = ctx.r30.u64 | 274726912;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDB48;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x821bd624
	goto loc_821BD624;
loc_821BDB58:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BDB7C;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,10808(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 10808);
	// bl 0x82160c10
	ctx.lr = 0x821BDB8C;
	sub_82160C10(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fdiv f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f1.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821BDBA4;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BDBB4;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BDBCC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bdnz 0x821bdbcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDBCC;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdbfc
	if (ctx.cr6.eq) goto loc_821BDBFC;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdbfc
	if (ctx.cr0.eq) goto loc_821BDBFC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDBF4:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdbf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDBF4;
loc_821BDBFC:
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdb24
	if (ctx.cr6.eq) goto loc_821BDB24;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdc28
	if (ctx.cr0.eq) goto loc_821BDC28;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDC20:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdc20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDC20;
loc_821BDC28:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdb24
	if (ctx.cr6.eq) goto loc_821BDB24;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdb24
	if (ctx.cr0.eq) goto loc_821BDB24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDC40:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdc40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDC40;
	// b 0x821bdb24
	goto loc_821BDB24;
loc_821BDC4C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdc84
	if (ctx.cr6.eq) goto loc_821BDC84;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdc84
	if (ctx.cr0.eq) goto loc_821BDC84;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDC7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdc7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDC7C;
loc_821BDC84:
	// li r11,131
	ctx.r11.s64 = 131;
	// b 0x821bb494
	goto loc_821BB494;
loc_821BDC8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdcd0
	if (ctx.cr6.eq) goto loc_821BDCD0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdcd0
	if (ctx.cr0.eq) goto loc_821BDCD0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDCC8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdcc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDCC8;
loc_821BDCD0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,513
	ctx.r11.s64 = 513;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// b 0x821bb538
	goto loc_821BB538;
loc_821BDCE0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdd24
	if (ctx.cr6.eq) goto loc_821BDD24;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdd24
	if (ctx.cr0.eq) goto loc_821BDD24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDD1C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdd1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDD1C;
loc_821BDD24:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// rlwimi r5,r11,29,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BDD3C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b018
	ctx.lr = 0x821BDD58;
	sub_8216B018(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r15,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r15.u32);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// mulli r4,r30,10
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(10));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BDD70;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BDD84:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bdd84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDD84;
	// lwz r18,160(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bddbc
	if (ctx.cr6.eq) goto loc_821BDDBC;
	// addi r11,r18,-4
	ctx.r11.s64 = ctx.r18.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bddbc
	if (ctx.cr0.eq) goto loc_821BDDBC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDDB4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bddb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDDB4;
loc_821BDDBC:
	// lwz r17,164(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdde4
	if (ctx.cr6.eq) goto loc_821BDDE4;
	// addi r11,r17,-4
	ctx.r11.s64 = ctx.r17.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdde4
	if (ctx.cr0.eq) goto loc_821BDDE4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDDDC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDDDC;
loc_821BDDE4:
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bde0c
	if (ctx.cr6.eq) goto loc_821BDE0C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bde0c
	if (ctx.cr0.eq) goto loc_821BDE0C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDE04:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bde04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDE04;
loc_821BDE0C:
	// lwz r16,172(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bde34
	if (ctx.cr6.eq) goto loc_821BDE34;
	// addi r11,r16,-4
	ctx.r11.s64 = ctx.r16.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bde34
	if (ctx.cr0.eq) goto loc_821BDE34;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDE2C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bde2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDE2C;
loc_821BDE34:
	// lwz r20,176(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bde5c
	if (ctx.cr6.eq) goto loc_821BDE5C;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bde5c
	if (ctx.cr0.eq) goto loc_821BDE5C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDE54:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bde54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDE54;
loc_821BDE5C:
	// lwz r19,180(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bde84
	if (ctx.cr6.eq) goto loc_821BDE84;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bde84
	if (ctx.cr0.eq) goto loc_821BDE84;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDE7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bde7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDE7C;
loc_821BDE84:
	// lwz r21,184(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdeac
	if (ctx.cr6.eq) goto loc_821BDEAC;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdeac
	if (ctx.cr0.eq) goto loc_821BDEAC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDEA4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDEA4;
loc_821BDEAC:
	// lwz r22,188(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bded4
	if (ctx.cr6.eq) goto loc_821BDED4;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bded4
	if (ctx.cr0.eq) goto loc_821BDED4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDECC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDECC;
loc_821BDED4:
	// lwz r23,192(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdf20
	if (ctx.cr6.eq) goto loc_821BDF20;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdefc
	if (ctx.cr0.eq) goto loc_821BDEFC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDEF4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDEF4;
loc_821BDEFC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bdf20
	if (ctx.cr6.eq) goto loc_821BDF20;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bdf20
	if (ctx.cr0.eq) goto loc_821BDF20;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BDF18:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bdf18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BDF18;
loc_821BDF20:
	// lwz r24,144(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r28,r30,12
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r25,1724(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// oris r5,r28,4128
	ctx.r5.u64 = ctx.r28.u64 | 270532608;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDF4C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// oris r5,r28,4160
	ctx.r5.u64 = ctx.r28.u64 | 272629760;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDF74;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r26,r28,4112
	ctx.r26.u64 = ctx.r28.u64 | 269484032;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDFA0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// rotlwi r18,r25,0
	ctx.r18.u64 = __builtin_rotateleft32(ctx.r25.u32, 0);
	// oris r25,r28,8256
	ctx.r25.u64 = ctx.r28.u64 | 541065216;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDFD0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BDFF8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r27,r28,8224
	ctx.r27.u64 = ctx.r28.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE024;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE04C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE074;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// oris r5,r28,8272
	ctx.r5.u64 = ctx.r28.u64 | 542113792;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE09C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE0C4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,1732(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r28,196(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821be120
	if (ctx.cr6.eq) goto loc_821BE120;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821be100
	if (ctx.cr0.eq) goto loc_821BE100;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE0F8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be0f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE0F8;
loc_821BE100:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821be120
	if (ctx.cr6.eq) goto loc_821BE120;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821be120
	if (ctx.cr0.eq) goto loc_821BE120;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE118:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE118;
loc_821BE120:
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE140;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,16
	ctx.r9.s64 = 16;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// b 0x821c02e4
	goto loc_821C02E4;
loc_821BE168:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BE194;
	sub_821B31C0(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821be1e0
	if (ctx.cr6.eq) goto loc_821BE1E0;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE1B0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be1b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE1B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821be1e0
	if (ctx.cr6.eq) goto loc_821BE1E0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821be1e0
	if (ctx.cr0.eq) goto loc_821BE1E0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE1D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be1d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE1D8;
loc_821BE1E0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// b 0x821bb534
	goto loc_821BB534;
loc_821BE1E8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BE214;
	sub_821B31C0(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE230:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be230
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE230;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb530
	if (ctx.cr0.eq) goto loc_821BB530;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE258:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE258;
	// b 0x821bb530
	goto loc_821BB530;
loc_821BE264:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r29,132(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r27,16(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821c0f78
	if (!ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821be2b0
	if (!ctx.cr6.eq) goto loc_821BE2B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x821be2d4
	goto loc_821BE2D4;
loc_821BE2B0:
	// li r9,1024
	ctx.r9.s64 = 1024;
	// lwz r5,20(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,32(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,28(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// addi r3,r1,1488
	ctx.r3.s64 = ctx.r1.s64 + 1488;
	// bl 0x821c8ae8
	ctx.lr = 0x821BE2D0;
	sub_821C8AE8(ctx, base);
	// addi r4,r1,1488
	ctx.r4.s64 = ctx.r1.s64 + 1488;
loc_821BE2D4:
	// lwz r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r6,160(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// bl 0x821b7588
	ctx.lr = 0x821BE2E8;
	sub_821B7588(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r11,32(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 32);
	// lwz r29,16(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r15,28(r27)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821c0f78
	if (!ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821be350
	if (!ctx.cr6.eq) goto loc_821BE350;
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,148(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821b7588
	ctx.lr = 0x821BE33C;
	sub_821B7588(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r16,32(r29)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// lwz r18,28(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// b 0x821be39c
	goto loc_821BE39C;
loc_821BE350:
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r5,20(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,32(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,28(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// addi r3,r1,1440
	ctx.r3.s64 = ctx.r1.s64 + 1440;
	// bl 0x821c8ae8
	ctx.lr = 0x821BE370;
	sub_821C8AE8(ctx, base);
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,148(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x821b7588
	ctx.lr = 0x821BE38C;
	sub_821B7588(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r16,28(r29)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r18,32(r29)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
loc_821BE39C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x821c0f78
	if (!ctx.cr6.eq) goto loc_821C0F78;
	// mullw r11,r18,r15
	ctx.r11.s64 = int64_t(ctx.r18.s32) * int64_t(ctx.r15.s32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0f78
	if (!ctx.cr6.eq) goto loc_821C0F78;
	// lwz r31,1716(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r7,128(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,16(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// bl 0x821b2660
	ctx.lr = 0x821BE3D0;
	sub_821B2660(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x821be584
	if (!ctx.cr0.eq) goto loc_821BE584;
	// mulli r4,r15,5
	ctx.r4.s64 = static_cast<int64_t>(ctx.r15.u64 * static_cast<uint64_t>(5));
	// bl 0x821b31c0
	ctx.lr = 0x821BE3E4;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r17,r15,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BE3FC:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r17,r11
	ctx.r11.u64 = ctx.r17.u64 + ctx.r11.u64;
	// bdnz 0x821be3fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE3FC;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r19,1732(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r20,176(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r26,172(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r23,168(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r27,164(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r25,160(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_821BE430:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821be54c
	if (ctx.cr6.eq) goto loc_821BE54C;
	// clrlwi r24,r15,12
	ctx.r24.u64 = ctx.r15.u32 & 0xFFFFF;
	// oris r22,r24,8272
	ctx.r22.u64 = ctx.r24.u64 | 542113792;
loc_821BE444:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821be4ac
	if (ctx.cr6.eq) goto loc_821BE4AC;
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r11,r30,r18
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r18.s32);
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + ctx.r14.u64;
	// subf r8,r27,r25
	ctx.r8.u64 = ctx.r25.u64 - ctx.r27.u64;
loc_821BE478:
	// lwzux r6,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwx r6,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r7,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821be478
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE478;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq 0x821be4ac
	if (ctx.cr0.eq) goto loc_821BE4AC;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
loc_821BE4A4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be4a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE4A4;
loc_821BE4AC:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE4CC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821be4e4
	if (!ctx.cr6.eq) goto loc_821BE4E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// b 0x821be534
	goto loc_821BE534;
loc_821BE4E4:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821be508
	if (ctx.cr6.eq) goto loc_821BE508;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r15,0
	ctx.cr0.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq 0x821be508
	if (ctx.cr0.eq) goto loc_821BE508;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
loc_821BE500:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE500;
loc_821BE508:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// oris r5,r24,8256
	ctx.r5.u64 = ctx.r24.u64 | 541065216;
	// bl 0x821b35d8
	ctx.lr = 0x821BE528;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_821BE534:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8215e640
	ctx.lr = 0x821BE540;
	sub_8215E640(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x821be444
	if (ctx.cr6.lt) goto loc_821BE444;
loc_821BE54C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821be570
	if (ctx.cr6.eq) goto loc_821BE570;
	// rlwinm r11,r18,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// addi r10,r23,-4
	ctx.r10.s64 = ctx.r23.s64 + -4;
	// subf r9,r11,r19
	ctx.r9.u64 = ctx.r19.u64 - ctx.r11.u64;
loc_821BE564:
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwux r8,r9,r11
	ea = ctx.r9.u32 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821be564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE564;
loc_821BE570:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x821be430
	if (ctx.cr6.lt) goto loc_821BE430;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BE584:
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// lwz r5,16(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x821b2840
	ctx.lr = 0x821BE598;
	sub_821B2840(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x821be6c8
	if (ctx.cr0.eq) goto loc_821BE6C8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BE5AC;
	sub_821B31C0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821be608
	if (ctx.cr6.eq) goto loc_821BE608;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
loc_821BE5C8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821be5f8
	if (ctx.cr6.eq) goto loc_821BE5F8;
	// rlwinm r10,r16,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// subf r11,r10,r7
	ctx.r11.u64 = ctx.r7.u64 - ctx.r10.u64;
loc_821BE5E0:
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// stwux r5,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE5E0;
loc_821BE5F8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x821be5c8
	if (!ctx.cr0.eq) goto loc_821BE5C8;
loc_821BE608:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821be630
	if (ctx.cr6.eq) goto loc_821BE630;
	// lwz r11,1732(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// beq 0x821be630
	if (ctx.cr0.eq) goto loc_821BE630;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BE628:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be628
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE628;
loc_821BE630:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// rlwinm r23,r11,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_821BE64C:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821be6b0
	if (ctx.cr6.eq) goto loc_821BE6B0;
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r25,r16,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// clrlwi r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	// oris r26,r11,20480
	ctx.r26.u64 = ctx.r11.u64 | 1342177280;
loc_821BE66C:
	// add r11,r27,r29
	ctx.r11.u64 = ctx.r27.u64 + ctx.r29.u64;
	// lwz r10,1732(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE698;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r30,r25
	ctx.r30.u64 = ctx.r30.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r18
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x821be66c
	if (ctx.cr6.lt) goto loc_821BE66C;
loc_821BE6B0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r28,r28,r23
	ctx.r28.u64 = ctx.r28.u64 + ctx.r23.u64;
	// add r27,r27,r18
	ctx.r27.u64 = ctx.r27.u64 + ctx.r18.u64;
	// cmplw cr6,r24,r15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x821be64c
	if (ctx.cr6.lt) goto loc_821BE64C;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BE6C8:
	// mulli r4,r18,5
	ctx.r4.s64 = static_cast<int64_t>(ctx.r18.u64 * static_cast<uint64_t>(5));
	// bl 0x821b31c0
	ctx.lr = 0x821BE6D0;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r16,r18,2,0,29
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BE6E8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// bdnz 0x821be6e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE6E8;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r20,176(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r19,0
	ctx.r19.s64 = 0;
	// lwz r27,172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r22,168(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r25,164(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r21,160(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
loc_821BE720:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821be840
	if (ctx.cr6.eq) goto loc_821BE840;
	// clrlwi r26,r18,12
	ctx.r26.u64 = ctx.r18.u32 & 0xFFFFF;
	// oris r24,r26,8272
	ctx.r24.u64 = ctx.r26.u64 | 542113792;
loc_821BE738:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821be79c
	if (ctx.cr6.eq) goto loc_821BE79C;
	// add r11,r23,r30
	ctx.r11.u64 = ctx.r23.u64 + ctx.r30.u64;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
	// mullw r10,r30,r18
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r18.s32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// subf r9,r25,r21
	ctx.r9.u64 = ctx.r21.u64 - ctx.r25.u64;
loc_821BE75C:
	// lwzx r6,r8,r14
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r14.u32);
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r6.u32);
	// lwzx r6,r5,r28
	ctx.r6.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821be75c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE75C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r18,0
	ctx.cr0.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq 0x821be79c
	if (ctx.cr0.eq) goto loc_821BE79C;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
loc_821BE794:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be794
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE794;
loc_821BE79C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE7BC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821be7d4
	if (!ctx.cr6.eq) goto loc_821BE7D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x821be824
	goto loc_821BE824;
loc_821BE7D4:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821be7f8
	if (ctx.cr6.eq) goto loc_821BE7F8;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r18,0
	ctx.cr0.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq 0x821be7f8
	if (ctx.cr0.eq) goto loc_821BE7F8;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
loc_821BE7F0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821be7f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE7F0;
loc_821BE7F8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,1724(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 1724);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,1716(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// oris r5,r26,8256
	ctx.r5.u64 = ctx.r26.u64 | 541065216;
	// bl 0x821b35d8
	ctx.lr = 0x821BE818;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
loc_821BE824:
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8215e640
	ctx.lr = 0x821BE830;
	sub_8215E640(ctx, base);
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821be738
	if (ctx.cr6.lt) goto loc_821BE738;
loc_821BE840:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x821be870
	if (ctx.cr6.eq) goto loc_821BE870;
	// addi r10,r22,-4
	ctx.r10.s64 = ctx.r22.s64 + -4;
	// mtctr r18
	ctx.ctr.u64 = ctx.r18.u64;
loc_821BE854:
	// add r8,r19,r11
	ctx.r8.u64 = ctx.r19.u64 + ctx.r11.u64;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r7,1732(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 1732);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r8,r7
	REX_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// bdnz 0x821be854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE854;
loc_821BE870:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// add r19,r19,r18
	ctx.r19.u64 = ctx.r19.u64 + ctx.r18.u64;
	// add r23,r23,r11
	ctx.r23.u64 = ctx.r23.u64 + ctx.r11.u64;
	// cmplw cr6,r17,r15
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x821be720
	if (ctx.cr6.lt) goto loc_821BE720;
	// b 0x821bb574
	goto loc_821BB574;
loc_821BE88C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r5,160(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,641
	ctx.r10.s64 = 641;
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwimi r5,r10,21,0,11
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0xFFF00000) | (ctx.r5.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821bb44c
	goto loc_821BB44C;
loc_821BE8BC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bne cr6,0x821bea00
	if (!ctx.cr6.eq) goto loc_821BEA00;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x821b31c0
	ctx.lr = 0x821BE8E4;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// subf r9,r9,r3
	ctx.r9.u64 = ctx.r3.u64 - ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BE900:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821be900
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BE900;
	// lwz r30,160(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,144(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// stw r29,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// stw r29,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,0(r25)
	REX_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r29,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r29.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BE960;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE98C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8224
	ctx.r5.s64 = 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE9B8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BE9E4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,18
	ctx.r9.s64 = 18;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x821ba98c
	goto loc_821BA98C;
loc_821BEA00:
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r27,144(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r28,r30,12
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFFF;
	// stw r29,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r29.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r29,404(r1)
	REX_STORE_U32(ctx.r1.u32 + 404, ctx.r29.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,396
	ctx.r6.s64 = ctx.r1.s64 + 396;
	// oris r5,r28,20480
	ctx.r5.u64 = ctx.r28.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEA30;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,396
	ctx.r7.s64 = ctx.r1.s64 + 396;
	// addi r6,r1,404
	ctx.r6.s64 = ctx.r1.s64 + 404;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEA5C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BEA70;
	sub_821B31C0(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821beab4
	if (ctx.cr6.eq) goto loc_821BEAB4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BEA88:
	// lwz r10,404(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 404);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bea88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEA88;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821beab4
	if (ctx.cr6.eq) goto loc_821BEAB4;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821beab4
	if (ctx.cr0.eq) goto loc_821BEAB4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BEAAC:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821beaac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEAAC;
loc_821BEAB4:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x821bcb98
	goto loc_821BCB98;
loc_821BEABC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// lwz r6,144(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b6608
	ctx.lr = 0x821BEAF8;
	sub_821B6608(ctx, base);
	// b 0x821c02e8
	goto loc_821C02E8;
loc_821BEAFC:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,11544(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 11544);
	// bl 0x8220ea28
	ctx.lr = 0x821BEB2C;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BEB3C;
	sub_821B31C0(ctx, base);
	// mr. r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821beb64
	if (ctx.cr0.eq) goto loc_821BEB64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BEB5C:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821beb5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEB5C;
loc_821BEB64:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bb530
	if (ctx.cr6.eq) goto loc_821BB530;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bb530
	if (ctx.cr0.eq) goto loc_821BB530;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BEB80:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821beb80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEB80;
	// b 0x821bb530
	goto loc_821BB530;
loc_821BEB8C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r26,148(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r25,144(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r27,r30,12
	ctx.r27.u64 = ctx.r30.u32 & 0xFFFFF;
	// stw r29,304(r1)
	REX_STORE_U32(ctx.r1.u32 + 304, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,416(r1)
	REX_STORE_U32(ctx.r1.u32 + 416, ctx.r29.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r29,372(r1)
	REX_STORE_U32(ctx.r1.u32 + 372, ctx.r29.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// oris r5,r27,20480
	ctx.r5.u64 = ctx.r27.u64 | 1342177280;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEBE8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8256
	ctx.r5.s64 = 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEC14;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// addi r6,r1,372
	ctx.r6.s64 = ctx.r1.s64 + 372;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEC40;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BEC54;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BEC6C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bec6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEC6C;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bec98
	if (ctx.cr6.eq) goto loc_821BEC98;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BEC8C:
	// lwz r10,372(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bec8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BEC8C;
loc_821BEC98:
	// lwz r28,132(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bece0
	if (ctx.cr6.eq) goto loc_821BECE0;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821becc0
	if (ctx.cr0.eq) goto loc_821BECC0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BECB8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821becb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BECB8;
loc_821BECC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bece0
	if (ctx.cr6.eq) goto loc_821BECE0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bece0
	if (ctx.cr0.eq) goto loc_821BECE0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BECD8:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821becd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BECD8;
loc_821BECE0:
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r27,8272
	ctx.r5.u64 = ctx.r27.u64 | 542113792;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BECFC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// oris r5,r27,8256
	ctx.r5.u64 = ctx.r27.u64 | 541065216;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BED14:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lwz r22,148(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r23,144(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r24,r30,12
	ctx.r24.u64 = ctx.r30.u32 & 0xFFFFF;
	// stw r29,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r29,380(r1)
	REX_STORE_U32(ctx.r1.u32 + 380, ctx.r29.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r29,408(r1)
	REX_STORE_U32(ctx.r1.u32 + 408, ctx.r29.u32);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// stw r29,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r29.u32);
	// addi r6,r1,216
	ctx.r6.s64 = ctx.r1.s64 + 216;
	// stw r29,388(r1)
	REX_STORE_U32(ctx.r1.u32 + 388, ctx.r29.u32);
	// oris r5,r24,20480
	ctx.r5.u64 = ctx.r24.u64 | 1342177280;
	// stw r29,392(r1)
	REX_STORE_U32(ctx.r1.u32 + 392, ctx.r29.u32);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// stw r29,312(r1)
	REX_STORE_U32(ctx.r1.u32 + 312, ctx.r29.u32);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r29,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r29.u32);
	// stw r29,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r29.u32);
	// stw r29,320(r1)
	REX_STORE_U32(ctx.r1.u32 + 320, ctx.r29.u32);
	// stw r29,292(r1)
	REX_STORE_U32(ctx.r1.u32 + 292, ctx.r29.u32);
	// stw r29,344(r1)
	REX_STORE_U32(ctx.r1.u32 + 344, ctx.r29.u32);
	// stw r29,328(r1)
	REX_STORE_U32(ctx.r1.u32 + 328, ctx.r29.u32);
	// stw r29,336(r1)
	REX_STORE_U32(ctx.r1.u32 + 336, ctx.r29.u32);
	// stw r29,352(r1)
	REX_STORE_U32(ctx.r1.u32 + 352, ctx.r29.u32);
	// bl 0x821b35d8
	ctx.lr = 0x821BEDAC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r11,8272
	ctx.r11.s64 = 542113792;
	// li r9,4
	ctx.r9.s64 = 4;
	// ori r28,r11,1
	ctx.r28.u64 = ctx.r11.u64 | 1;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,216
	ctx.r7.s64 = ctx.r1.s64 + 216;
	// addi r6,r1,380
	ctx.r6.s64 = ctx.r1.s64 + 380;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEDDC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r26,152(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r6,r1,408
	ctx.r6.s64 = ctx.r1.s64 + 408;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEE08;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,380
	ctx.r7.s64 = ctx.r1.s64 + 380;
	// addi r6,r1,308
	ctx.r6.s64 = ctx.r1.s64 + 308;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEE34;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r11,8256
	ctx.r11.s64 = 541065216;
	// addi r27,r14,32
	ctx.r27.s64 = ctx.r14.s64 + 32;
	// ori r25,r11,1
	ctx.r25.u64 = ctx.r11.u64 | 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,308
	ctx.r8.s64 = ctx.r1.s64 + 308;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,388
	ctx.r6.s64 = ctx.r1.s64 + 388;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEE68;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,388
	ctx.r8.s64 = ctx.r1.s64 + 388;
	// addi r7,r1,408
	ctx.r7.s64 = ctx.r1.s64 + 408;
	// addi r6,r1,392
	ctx.r6.s64 = ctx.r1.s64 + 392;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEE90;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4112
	ctx.r5.s64 = 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,392
	ctx.r7.s64 = ctx.r1.s64 + 392;
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEEBC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,312
	ctx.r8.s64 = ctx.r1.s64 + 312;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,300
	ctx.r6.s64 = ctx.r1.s64 + 300;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEEE4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,8240
	ctx.r5.s64 = 540016640;
	// li r9,23
	ctx.r9.s64 = 23;
	// addi r8,r14,36
	ctx.r8.s64 = ctx.r14.s64 + 36;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEF10;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// addi r7,r1,300
	ctx.r7.s64 = ctx.r1.s64 + 300;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEF38;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,288
	ctx.r8.s64 = ctx.r1.s64 + 288;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,292
	ctx.r6.s64 = ctx.r1.s64 + 292;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEF60;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,216
	ctx.r8.s64 = ctx.r1.s64 + 216;
	// addi r7,r1,292
	ctx.r7.s64 = ctx.r1.s64 + 292;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEF88;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4208
	ctx.r5.s64 = 275775488;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,320
	ctx.r7.s64 = ctx.r1.s64 + 320;
	// addi r6,r1,328
	ctx.r6.s64 = ctx.r1.s64 + 328;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEFB4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lis r5,4144
	ctx.r5.s64 = 271581184;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,328
	ctx.r7.s64 = ctx.r1.s64 + 328;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// ori r5,r5,1
	ctx.r5.u64 = ctx.r5.u64 | 1;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BEFE0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,344
	ctx.r7.s64 = ctx.r1.s64 + 344;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF008;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mulli r4,r30,5
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(5));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BF01C;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BF034:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bf034
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF034;
	// lwz r25,176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// beq cr6,0x821bf074
	if (ctx.cr6.eq) goto loc_821BF074;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// subf r10,r25,r7
	ctx.r10.u64 = ctx.r7.u64 - ctx.r25.u64;
loc_821BF05C:
	// lwz r9,292(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 292);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,352(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 352);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bf05c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF05C;
loc_821BF074:
	// lwz r26,160(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf09c
	if (ctx.cr6.eq) goto loc_821BF09C;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf09c
	if (ctx.cr0.eq) goto loc_821BF09C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF094:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf094
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF094;
loc_821BF09C:
	// lwz r27,164(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf0c4
	if (ctx.cr6.eq) goto loc_821BF0C4;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf0c4
	if (ctx.cr0.eq) goto loc_821BF0C4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF0BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf0bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF0BC;
loc_821BF0C4:
	// lwz r28,168(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf10c
	if (ctx.cr6.eq) goto loc_821BF10C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf0ec
	if (ctx.cr0.eq) goto loc_821BF0EC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF0E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf0e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF0E4;
loc_821BF0EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf10c
	if (ctx.cr6.eq) goto loc_821BF10C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf10c
	if (ctx.cr0.eq) goto loc_821BF10C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF104:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF104;
loc_821BF10C:
	// oris r30,r24,8272
	ctx.r30.u64 = ctx.r24.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF12C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF154;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r24,4112
	ctx.r5.u64 = ctx.r24.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF17C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// oris r5,r24,8256
	ctx.r5.u64 = ctx.r24.u64 | 541065216;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BF194:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,4696(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 4696);
	// bl 0x8220ea28
	ctx.lr = 0x821BF1C4;
	sub_8220EA28(ctx, base);
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BF1D8;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,156
	ctx.r11.s64 = ctx.r1.s64 + 156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BF1EC:
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// bdnz 0x821bf1ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF1EC;
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf21c
	if (ctx.cr6.eq) goto loc_821BF21C;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf21c
	if (ctx.cr0.eq) goto loc_821BF21C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF214:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf214
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF214;
loc_821BF21C:
	// lwz r27,160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf248
	if (ctx.cr6.eq) goto loc_821BF248;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf248
	if (ctx.cr0.eq) goto loc_821BF248;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF240:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF240;
loc_821BF248:
	// lwz r26,164(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf270
	if (ctx.cr6.eq) goto loc_821BF270;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf270
	if (ctx.cr0.eq) goto loc_821BF270;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF268:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF268;
loc_821BF270:
	// lwz r28,168(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf2b8
	if (ctx.cr6.eq) goto loc_821BF2B8;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf298
	if (ctx.cr0.eq) goto loc_821BF298;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF290:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF290;
loc_821BF298:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf2b8
	if (ctx.cr6.eq) goto loc_821BF2B8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf2b8
	if (ctx.cr0.eq) goto loc_821BF2B8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF2B0:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF2B0;
loc_821BF2B8:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r29,r30,8256
	ctx.r29.u64 = ctx.r30.u64 | 541065216;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF2DC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,4160
	ctx.r5.u64 = ctx.r30.u64 | 272629760;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF304;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF32C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,2
	ctx.r9.s64 = 2;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BF348:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf380
	if (ctx.cr6.eq) goto loc_821BF380;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf380
	if (ctx.cr0.eq) goto loc_821BF380;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF378:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf378
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF378;
loc_821BF380:
	// li r11,263
	ctx.r11.s64 = 263;
	// b 0x821bc230
	goto loc_821BC230;
loc_821BF388:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BF3A8;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BF3C0:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bf3c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF3C0;
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// beq cr6,0x821bf400
	if (ctx.cr6.eq) goto loc_821BF400;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// subf r10,r27,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r27.u64;
loc_821BF3E8:
	// lwz r9,36(r14)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,32(r14)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bf3e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF3E8;
loc_821BF400:
	// lwz r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf44c
	if (ctx.cr6.eq) goto loc_821BF44C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf42c
	if (ctx.cr0.eq) goto loc_821BF42C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF424:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF424;
loc_821BF42C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf44c
	if (ctx.cr6.eq) goto loc_821BF44C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf44c
	if (ctx.cr0.eq) goto loc_821BF44C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF444:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF444;
loc_821BF44C:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = ctx.r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF46C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = ctx.r30.u64 | 536870912;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BF488:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// rlwinm r31,r30,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BF4AC;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_821BF4C0:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bdnz 0x821bf4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF4C0;
	// lwz r26,160(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf4f8
	if (ctx.cr6.eq) goto loc_821BF4F8;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf4f8
	if (ctx.cr0.eq) goto loc_821BF4F8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF4F0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf4f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF4F0;
loc_821BF4F8:
	// lwz r23,164(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf520
	if (ctx.cr6.eq) goto loc_821BF520;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf520
	if (ctx.cr0.eq) goto loc_821BF520;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF518:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF518;
loc_821BF520:
	// lwz r24,168(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf548
	if (ctx.cr6.eq) goto loc_821BF548;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf548
	if (ctx.cr0.eq) goto loc_821BF548;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF540:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF540;
loc_821BF548:
	// lwz r25,172(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf590
	if (ctx.cr6.eq) goto loc_821BF590;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf570
	if (ctx.cr0.eq) goto loc_821BF570;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF568:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf568
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF568;
loc_821BF570:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf590
	if (ctx.cr6.eq) goto loc_821BF590;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf590
	if (ctx.cr0.eq) goto loc_821BF590;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF588:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF588;
loc_821BF590:
	// clrlwi r28,r30,12
	ctx.r28.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r28,4112
	ctx.r27.u64 = ctx.r28.u64 | 269484032;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF5BC;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r30,r28,8224
	ctx.r30.u64 = ctx.r28.u64 | 538968064;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF5E8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,23
	ctx.r9.s64 = 23;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF610;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,26
	ctx.r9.s64 = 26;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF638;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,18
	ctx.r9.s64 = 18;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// oris r5,r28,8256
	ctx.r5.u64 = ctx.r28.u64 | 541065216;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BF654:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf68c
	if (ctx.cr6.eq) goto loc_821BF68C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf68c
	if (ctx.cr0.eq) goto loc_821BF68C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF684:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf684
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF684;
loc_821BF68C:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// b 0x821baff0
	goto loc_821BAFF0;
loc_821BF698:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r31,160(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x821BF6B8;
	sub_8216B018(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r28,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x821BF6D0;
	sub_8216B018(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bf724
	if (ctx.cr6.eq) goto loc_821BF724;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bf704
	if (ctx.cr0.eq) goto loc_821BF704;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BF6FC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf6fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF6FC;
loc_821BF704:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821bf724
	if (ctx.cr6.eq) goto loc_821BF724;
	// addi r11,r7,-4
	ctx.r11.s64 = ctx.r7.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x821bf724
	if (ctx.cr0.eq) goto loc_821BF724;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821BF71C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf71c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF71C;
loc_821BF724:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// b 0x821baff4
	goto loc_821BAFF4;
loc_821BF730:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BF754;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821BF774;
	sub_8220EA28(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,4696(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 4696);
	// bl 0x8220ea28
	ctx.lr = 0x821BF798;
	sub_8220EA28(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BF7A8;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BF7C0:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x821bf7c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF7C0;
	// lwz r20,188(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r8,184(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// beq cr6,0x821bf7f8
	if (ctx.cr6.eq) goto loc_821BF7F8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// subf r10,r20,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r20.u64;
loc_821BF7E8:
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bf7e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF7E8;
loc_821BF7F8:
	// lwz r24,160(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf824
	if (ctx.cr6.eq) goto loc_821BF824;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf824
	if (ctx.cr0.eq) goto loc_821BF824;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF81C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf81c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF81C;
loc_821BF824:
	// lwz r21,164(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf84c
	if (ctx.cr6.eq) goto loc_821BF84C;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf84c
	if (ctx.cr0.eq) goto loc_821BF84C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF844:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf844
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF844;
loc_821BF84C:
	// lwz r22,168(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf874
	if (ctx.cr6.eq) goto loc_821BF874;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf874
	if (ctx.cr0.eq) goto loc_821BF874;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF86C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF86C;
loc_821BF874:
	// lwz r23,172(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf89c
	if (ctx.cr6.eq) goto loc_821BF89C;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf89c
	if (ctx.cr0.eq) goto loc_821BF89C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF894:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF894;
loc_821BF89C:
	// lwz r25,176(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf8c4
	if (ctx.cr6.eq) goto loc_821BF8C4;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf8c4
	if (ctx.cr0.eq) goto loc_821BF8C4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF8BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf8bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF8BC;
loc_821BF8C4:
	// lwz r26,180(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf90c
	if (ctx.cr6.eq) goto loc_821BF90C;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf8ec
	if (ctx.cr0.eq) goto loc_821BF8EC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF8E4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf8e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF8E4;
loc_821BF8EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bf90c
	if (ctx.cr6.eq) goto loc_821BF90C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bf90c
	if (ctx.cr0.eq) goto loc_821BF90C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BF904:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bf904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BF904;
loc_821BF90C:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r30,8272
	ctx.r27.u64 = ctx.r30.u64 | 542113792;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF930;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r28,r30,4176
	ctx.r28.u64 = ctx.r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF95C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r30,4112
	ctx.r29.u64 = ctx.r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF988;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF9B0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BF9D8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,8256
	ctx.r5.u64 = ctx.r30.u64 | 541065216;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFA00;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x821c02d0
	goto loc_821C02D0;
loc_821BFA14:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,11184(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 11184);
	// bl 0x8220ea28
	ctx.lr = 0x821BFA5C;
	sub_8220EA28(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r4,120(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// lfd f1,4704(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 4704);
	// bl 0x8220ea28
	ctx.lr = 0x821BFA80;
	sub_8220EA28(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mulli r4,r30,14
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(14));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BFA90;
	sub_821B31C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r11,14
	ctx.r11.s64 = 14;
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821BFAA8:
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bdnz 0x821bfaa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFAA8;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r8,10
	ctx.r8.s64 = 10;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_821BFAC0:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfae8
	if (ctx.cr6.eq) goto loc_821BFAE8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfae8
	if (ctx.cr0.eq) goto loc_821BFAE8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFAE0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFAE0;
loc_821BFAE8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x821bfac0
	if (!ctx.cr0.eq) goto loc_821BFAC0;
	// lwz r21,212(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r22,208(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// lwz r24,204(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r23,200(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// beq cr6,0x821bfb60
	if (ctx.cr6.eq) goto loc_821BFB60;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// subf r10,r24,r23
	ctx.r10.u64 = ctx.r23.u64 - ctx.r24.u64;
	// subf r9,r24,r22
	ctx.r9.u64 = ctx.r22.u64 - ctx.r24.u64;
	// subf r8,r24,r21
	ctx.r8.u64 = ctx.r21.u64 - ctx.r24.u64;
loc_821BFB20:
	// lwz r7,36(r14)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + 36);
	// stwx r7,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r7.u32);
	// lwz r7,32(r14)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r14.u32 + 32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stwx r31,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r31.u32);
	// stwx r28,r8,r11
	REX_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821bfb20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFB20;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfb60
	if (ctx.cr6.eq) goto loc_821BFB60;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfb60
	if (ctx.cr0.eq) goto loc_821BFB60;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFB58:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfb58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFB58;
loc_821BFB60:
	// lwz r29,160(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// oris r5,r30,4112
	ctx.r5.u64 = ctx.r30.u64 | 269484032;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFB88;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r28,164(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// oris r25,r30,8256
	ctx.r25.u64 = ctx.r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFBB8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r26,168(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFBE4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = ctx.r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFC10;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r29,176(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// oris r28,r30,8272
	ctx.r28.u64 = ctx.r30.u64 | 542113792;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFC40;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,180(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// oris r5,r30,8208
	ctx.r5.u64 = ctx.r30.u64 | 537919488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFC6C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r29,184(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// oris r5,r30,8192
	ctx.r5.u64 = ctx.r30.u64 | 536870912;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFC98;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r30,188(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFCC4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r27,192(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFCF0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// lwz r30,196(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFD1C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821BFD34:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BFD54;
	sub_821B31C0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfda4
	if (ctx.cr6.eq) goto loc_821BFDA4;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfd84
	if (ctx.cr0.eq) goto loc_821BFD84;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFD7C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfd7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFD7C;
loc_821BFD84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfda4
	if (ctx.cr6.eq) goto loc_821BFDA4;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfda4
	if (ctx.cr0.eq) goto loc_821BFDA4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFD9C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFD9C;
loc_821BFDA4:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4208
	ctx.r5.u64 = ctx.r30.u64 | 275775488;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFDC8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = ctx.r30.u64 | 271581184;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821BFDE4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfe28
	if (ctx.cr6.eq) goto loc_821BFE28;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfe28
	if (ctx.cr0.eq) goto loc_821BFE28;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFE20:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfe20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFE20;
loc_821BFE28:
	// lwz r8,144(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,515
	ctx.r11.s64 = 515;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// li r9,23
	ctx.r9.s64 = 23;
	// b 0x821bb53c
	goto loc_821BB53C;
loc_821BFE3C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// mulli r4,r30,3
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(3));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BFE54;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821bffc8
	if (ctx.cr0.eq) goto loc_821BFFC8;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BFE6C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bfe6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFE6C;
	// lwz r26,128(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfea4
	if (ctx.cr6.eq) goto loc_821BFEA4;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfea4
	if (ctx.cr0.eq) goto loc_821BFEA4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFE9C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfe9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFE9C;
loc_821BFEA4:
	// lwz r27,132(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bfecc
	if (ctx.cr6.eq) goto loc_821BFECC;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfecc
	if (ctx.cr0.eq) goto loc_821BFECC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFEC4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFEC4;
loc_821BFECC:
	// lwz r28,136(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bff14
	if (ctx.cr6.eq) goto loc_821BFF14;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bfef4
	if (ctx.cr0.eq) goto loc_821BFEF4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFEEC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bfeec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFEEC;
loc_821BFEF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821bff14
	if (ctx.cr6.eq) goto loc_821BFF14;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821bff14
	if (ctx.cr0.eq) goto loc_821BFF14;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821BFF0C:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821bff0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFF0C;
loc_821BFF14:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// lwz r5,144(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b4738
	ctx.lr = 0x821BFF30;
	sub_821B4738(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = ctx.r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821BFF5C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// b 0x821bd624
	goto loc_821BD624;
loc_821BFF6C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r31,8(r14)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lfd f1,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x821BFF90;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 / ctx.f1.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821BFFB0;
	sub_8220EA28(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mulli r4,r30,9
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(9));
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b31c0
	ctx.lr = 0x821BFFC0;
	sub_821B31C0(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821bffd4
	if (!ctx.cr0.eq) goto loc_821BFFD4;
loc_821BFFC8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x821c0f80
	goto loc_821C0F80;
loc_821BFFD4:
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_821BFFE4:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// bdnz 0x821bffe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821BFFE4;
	// lwz r8,192(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0014
	if (ctx.cr6.eq) goto loc_821C0014;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0014
	if (ctx.cr0.eq) goto loc_821C0014;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C000C:
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c000c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C000C;
loc_821C0014:
	// lwz r23,160(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// li r29,-1
	ctx.r29.s64 = -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0040
	if (ctx.cr6.eq) goto loc_821C0040;
	// addi r11,r23,-4
	ctx.r11.s64 = ctx.r23.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0040
	if (ctx.cr0.eq) goto loc_821C0040;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0038:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0038;
loc_821C0040:
	// lwz r19,164(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0068
	if (ctx.cr6.eq) goto loc_821C0068;
	// addi r11,r19,-4
	ctx.r11.s64 = ctx.r19.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0068
	if (ctx.cr0.eq) goto loc_821C0068;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0060:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0060
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0060;
loc_821C0068:
	// lwz r20,168(r1)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0090
	if (ctx.cr6.eq) goto loc_821C0090;
	// addi r11,r20,-4
	ctx.r11.s64 = ctx.r20.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0090
	if (ctx.cr0.eq) goto loc_821C0090;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0088:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0088;
loc_821C0090:
	// lwz r22,172(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c00b8
	if (ctx.cr6.eq) goto loc_821C00B8;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c00b8
	if (ctx.cr0.eq) goto loc_821C00B8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C00B0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c00b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C00B0;
loc_821C00B8:
	// lwz r24,176(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c00e0
	if (ctx.cr6.eq) goto loc_821C00E0;
	// addi r11,r24,-4
	ctx.r11.s64 = ctx.r24.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c00e0
	if (ctx.cr0.eq) goto loc_821C00E0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C00D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c00d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C00D8;
loc_821C00E0:
	// lwz r21,180(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0108
	if (ctx.cr6.eq) goto loc_821C0108;
	// addi r11,r21,-4
	ctx.r11.s64 = ctx.r21.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0108
	if (ctx.cr0.eq) goto loc_821C0108;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0100:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0100
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0100;
loc_821C0108:
	// lwz r25,184(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0130
	if (ctx.cr6.eq) goto loc_821C0130;
	// addi r11,r25,-4
	ctx.r11.s64 = ctx.r25.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0130
	if (ctx.cr0.eq) goto loc_821C0130;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0128:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0128
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0128;
loc_821C0130:
	// lwz r26,188(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0178
	if (ctx.cr6.eq) goto loc_821C0178;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0158
	if (ctx.cr0.eq) goto loc_821C0158;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0150:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0150;
loc_821C0158:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0178
	if (ctx.cr6.eq) goto loc_821C0178;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0178
	if (ctx.cr0.eq) goto loc_821C0178;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0170:
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0170;
loc_821C0178:
	// clrlwi r30,r30,12
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFFF;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r9,0
	ctx.r9.s64 = 0;
	// oris r27,r30,8272
	ctx.r27.u64 = ctx.r30.u64 | 542113792;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C019C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r28,r30,4176
	ctx.r28.u64 = ctx.r30.u64 | 273678336;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C01C8;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r30,4112
	ctx.r29.u64 = ctx.r30.u64 | 269484032;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C01F4;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C021C;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C0244;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// oris r29,r30,8256
	ctx.r29.u64 = ctx.r30.u64 | 541065216;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C0270;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C0298;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// oris r5,r30,4144
	ctx.r5.u64 = ctx.r30.u64 | 271581184;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b35d8
	ctx.lr = 0x821C02C0;
	sub_821B35D8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821c0f80
	if (ctx.cr0.lt) goto loc_821C0F80;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
loc_821C02D0:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
loc_821C02D4:
	// li r9,0
	ctx.r9.s64 = 0;
loc_821C02D8:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
loc_821C02DC:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
loc_821C02E0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_821C02E4:
	// bl 0x821b35d8
	ctx.lr = 0x821C02E8;
	sub_821B35D8(ctx, base);
loc_821C02E8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821bb574
	if (!ctx.cr0.lt) goto loc_821BB574;
	// b 0x821c0f80
	goto loc_821C0F80;
loc_821C02F4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,144(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// addi r11,r1,676
	ctx.r11.s64 = ctx.r1.s64 + 676;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,148(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_821C0328:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0328
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0328;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,504
	ctx.r5.s64 = ctx.r1.s64 + 504;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// stw r11,504(r1)
	REX_STORE_U32(ctx.r1.u32 + 504, ctx.r11.u32);
	// bl 0x821b7588
	ctx.lr = 0x821C0358;
	sub_821B7588(ctx, base);
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r10,680(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 680);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r8,r10,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x821c0424
	if (ctx.cr0.eq) goto loc_821C0424;
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821c0424
	if (!ctx.cr6.eq) goto loc_821C0424;
	// lwz r5,8(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c03fc
	if (ctx.cr6.eq) goto loc_821C03FC;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
loc_821C03A8:
	// lwzx r11,r7,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x821c03e4
	if (!ctx.cr6.eq) goto loc_821C03E4;
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821c03e4
	if (!ctx.cr6.eq) goto loc_821C03E4;
	// lwz r4,12(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x821c03e4
	if (!ctx.cr6.eq) goto loc_821C03E4;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x821c03f8
	if (ctx.cr6.eq) goto loc_821C03F8;
loc_821C03E4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821c03a8
	if (ctx.cr6.lt) goto loc_821C03A8;
	// b 0x821c03fc
	goto loc_821C03FC;
loc_821C03F8:
	// stw r9,684(r1)
	REX_STORE_U32(ctx.r1.u32 + 684, ctx.r9.u32);
loc_821C03FC:
	// lwz r11,8(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821c0424
	if (!ctx.cr6.eq) goto loc_821C0424;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,3509
	ctx.r5.s64 = 3509;
	// addi r6,r11,11456
	ctx.r6.s64 = ctx.r11.s64 + 11456;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b3550
	ctx.lr = 0x821C0424;
	sub_821B3550(ctx, base);
loc_821C0424:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0448
	if (ctx.cr6.eq) goto loc_821C0448;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0448
	if (ctx.cr0.eq) goto loc_821C0448;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0440:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0440
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0440;
loc_821C0448:
	// lis r5,24576
	ctx.r5.s64 = 1610612736;
	// addi r8,r1,680
	ctx.r8.s64 = ctx.r1.s64 + 680;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
loc_821C0454:
	// ori r5,r5,2
	ctx.r5.u64 = ctx.r5.u64 | 2;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821C045C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,152(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r1,1428
	ctx.r11.s64 = ctx.r1.s64 + 1428;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,156(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
loc_821C04B0:
	// lwz r6,0(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// stw r6,-20(r11)
	REX_STORE_U32(ctx.r11.u32 + -20, ctx.r6.u32);
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r6,-12(r11)
	REX_STORE_U32(ctx.r11.u32 + -12, ctx.r6.u32);
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r6,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c04b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C04B0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c04f8
	if (ctx.cr6.eq) goto loc_821C04F8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c04f8
	if (ctx.cr0.eq) goto loc_821C04F8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C04F0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c04f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C04F0;
loc_821C04F8:
	// lis r5,24592
	ctx.r5.s64 = 1611661312;
	// addi r8,r1,1416
	ctx.r8.s64 = ctx.r1.s64 + 1416;
	// addi r7,r1,1408
	ctx.r7.s64 = ctx.r1.s64 + 1408;
	// b 0x821c0454
	goto loc_821C0454;
loc_821C0508:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1180
	ctx.r10.s64 = ctx.r1.s64 + 1180;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0538:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0538;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0568
	if (ctx.cr6.eq) goto loc_821C0568;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0568
	if (ctx.cr0.eq) goto loc_821C0568;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0560:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0560;
loc_821C0568:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24608
	ctx.r5.s64 = 1612709888;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1184
	ctx.r7.s64 = ctx.r1.s64 + 1184;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C057C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1196
	ctx.r10.s64 = ctx.r1.s64 + 1196;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C05AC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c05ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C05AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c05dc
	if (ctx.cr6.eq) goto loc_821C05DC;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c05dc
	if (ctx.cr0.eq) goto loc_821C05DC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C05D4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c05d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C05D4;
loc_821C05DC:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24624
	ctx.r5.s64 = 1613758464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1200
	ctx.r7.s64 = ctx.r1.s64 + 1200;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C05F0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1340
	ctx.r10.s64 = ctx.r1.s64 + 1340;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0620:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0620;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0650
	if (ctx.cr6.eq) goto loc_821C0650;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0650
	if (ctx.cr0.eq) goto loc_821C0650;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0648:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0648;
loc_821C0650:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24640
	ctx.r5.s64 = 1614807040;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1344
	ctx.r7.s64 = ctx.r1.s64 + 1344;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0664:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,764
	ctx.r11.s64 = ctx.r1.s64 + 764;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0694:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0694;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c06c4
	if (ctx.cr6.eq) goto loc_821C06C4;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c06c4
	if (ctx.cr0.eq) goto loc_821C06C4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C06BC:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c06bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C06BC;
loc_821C06C4:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24656
	ctx.r5.s64 = 1615855616;
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// b 0x821c0454
	goto loc_821C0454;
loc_821C06D4:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,872
	ctx.r7.s64 = ctx.r1.s64 + 872;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,880
	ctx.r5.s64 = ctx.r1.s64 + 880;
	// addi r4,r1,888
	ctx.r4.s64 = ctx.r1.s64 + 888;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_821C074C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821c074c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C074C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0798
	if (ctx.cr6.eq) goto loc_821C0798;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0798
	if (ctx.cr0.eq) goto loc_821C0798;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0790:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0790;
loc_821C0798:
	// lis r5,24672
	ctx.r5.s64 = 1616904192;
	// addi r8,r1,872
	ctx.r8.s64 = ctx.r1.s64 + 872;
	// addi r7,r1,864
	ctx.r7.s64 = ctx.r1.s64 + 864;
	// b 0x821c0454
	goto loc_821C0454;
loc_821C07A8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1148
	ctx.r10.s64 = ctx.r1.s64 + 1148;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C07D8:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c07d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C07D8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0808
	if (ctx.cr6.eq) goto loc_821C0808;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0808
	if (ctx.cr0.eq) goto loc_821C0808;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0800:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0800
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0800;
loc_821C0808:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24688
	ctx.r5.s64 = 1617952768;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C081C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1116
	ctx.r10.s64 = ctx.r1.s64 + 1116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C084C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c084c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C084C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c087c
	if (ctx.cr6.eq) goto loc_821C087C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c087c
	if (ctx.cr0.eq) goto loc_821C087C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0874:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0874
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0874;
loc_821C087C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24704
	ctx.r5.s64 = 1619001344;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0890:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1212
	ctx.r10.s64 = ctx.r1.s64 + 1212;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C08C0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c08c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C08C0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c08f0
	if (ctx.cr6.eq) goto loc_821C08F0;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c08f0
	if (ctx.cr0.eq) goto loc_821C08F0;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C08E8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c08e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C08E8;
loc_821C08F0:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24720
	ctx.r5.s64 = 1620049920;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1216
	ctx.r7.s64 = ctx.r1.s64 + 1216;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0904:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,1100
	ctx.r11.s64 = ctx.r1.s64 + 1100;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0934:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0934;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0964
	if (ctx.cr6.eq) goto loc_821C0964;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0964
	if (ctx.cr0.eq) goto loc_821C0964;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C095C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c095c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C095C;
loc_821C0964:
	// lis r5,24736
	ctx.r5.s64 = 1621098496;
	// addi r7,r1,1104
	ctx.r7.s64 = ctx.r1.s64 + 1104;
loc_821C096C:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
loc_821C0970:
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// b 0x821c02d4
	goto loc_821C02D4;
loc_821C0978:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,1280
	ctx.r9.s64 = ctx.r1.s64 + 1280;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,1292
	ctx.r7.s64 = ctx.r1.s64 + 1292;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,1304
	ctx.r5.s64 = ctx.r1.s64 + 1304;
	// addi r4,r1,1316
	ctx.r4.s64 = ctx.r1.s64 + 1316;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_821C09F0:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821c09f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C09F0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0a3c
	if (ctx.cr6.eq) goto loc_821C0A3C;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0a3c
	if (ctx.cr0.eq) goto loc_821C0A3C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0A34:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0a34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0A34;
loc_821C0A3C:
	// lis r5,24752
	ctx.r5.s64 = 1622147072;
	// addi r8,r1,1292
	ctx.r8.s64 = ctx.r1.s64 + 1292;
	// addi r7,r1,1280
	ctx.r7.s64 = ctx.r1.s64 + 1280;
	// b 0x821c0970
	goto loc_821C0970;
loc_821C0A4C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1324
	ctx.r10.s64 = ctx.r1.s64 + 1324;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0A7C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0a7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0A7C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0aac
	if (ctx.cr6.eq) goto loc_821C0AAC;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0aac
	if (ctx.cr0.eq) goto loc_821C0AAC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0AA4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0AA4;
loc_821C0AAC:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24768
	ctx.r5.s64 = 1623195648;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1328
	ctx.r7.s64 = ctx.r1.s64 + 1328;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0AC0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1356
	ctx.r10.s64 = ctx.r1.s64 + 1356;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0AF0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0AF0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0b20
	if (ctx.cr6.eq) goto loc_821C0B20;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0b20
	if (ctx.cr0.eq) goto loc_821C0B20;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0B18:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0B18;
loc_821C0B20:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24784
	ctx.r5.s64 = 1624244224;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1360
	ctx.r7.s64 = ctx.r1.s64 + 1360;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0B34:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1388
	ctx.r10.s64 = ctx.r1.s64 + 1388;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0B64:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0b64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0B64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0b94
	if (ctx.cr6.eq) goto loc_821C0B94;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0b94
	if (ctx.cr0.eq) goto loc_821C0B94;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0B8C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0b8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0B8C;
loc_821C0B94:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24800
	ctx.r5.s64 = 1625292800;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1392
	ctx.r7.s64 = ctx.r1.s64 + 1392;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0BA8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,1084
	ctx.r11.s64 = ctx.r1.s64 + 1084;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0BD8:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0BD8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0c08
	if (ctx.cr6.eq) goto loc_821C0C08;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0c08
	if (ctx.cr0.eq) goto loc_821C0C08;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0C00:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0c00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0C00;
loc_821C0C08:
	// lis r5,24816
	ctx.r5.s64 = 1626341376;
	// addi r7,r1,1088
	ctx.r7.s64 = ctx.r1.s64 + 1088;
	// b 0x821c096c
	goto loc_821C096C;
loc_821C0C14:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// addi r9,r1,1232
	ctx.r9.s64 = ctx.r1.s64 + 1232;
	// lwz r8,152(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// addi r7,r1,1244
	ctx.r7.s64 = ctx.r1.s64 + 1244;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// addi r5,r1,1256
	ctx.r5.s64 = ctx.r1.s64 + 1256;
	// addi r4,r1,1268
	ctx.r4.s64 = ctx.r1.s64 + 1268;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
	// subf r9,r11,r7
	ctx.r9.u64 = ctx.r7.u64 - ctx.r11.u64;
	// subf r7,r11,r5
	ctx.r7.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r5,r11,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// subf r6,r11,r6
	ctx.r6.u64 = ctx.r6.u64 - ctx.r11.u64;
loc_821C0C8C:
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwx r3,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r8,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r3,r7,r11
	REX_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwzx r3,r6,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// stwx r3,r5,r11
	REX_STORE_U32(ctx.r5.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821c0c8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0C8C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0cd8
	if (ctx.cr6.eq) goto loc_821C0CD8;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0cd8
	if (ctx.cr0.eq) goto loc_821C0CD8;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0CD0:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0cd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0CD0;
loc_821C0CD8:
	// lis r5,24832
	ctx.r5.s64 = 1627389952;
	// addi r8,r1,1244
	ctx.r8.s64 = ctx.r1.s64 + 1244;
	// addi r7,r1,1232
	ctx.r7.s64 = ctx.r1.s64 + 1232;
	// b 0x821c0970
	goto loc_821C0970;
loc_821C0CE8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1132
	ctx.r10.s64 = ctx.r1.s64 + 1132;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0D18:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0d18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0D18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0d48
	if (ctx.cr6.eq) goto loc_821C0D48;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0d48
	if (ctx.cr0.eq) goto loc_821C0D48;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0D40:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0d40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0D40;
loc_821C0D48:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24848
	ctx.r5.s64 = 1628438528;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1136
	ctx.r7.s64 = ctx.r1.s64 + 1136;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0D5C:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1164
	ctx.r10.s64 = ctx.r1.s64 + 1164;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0D8C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0d8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0D8C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0dbc
	if (ctx.cr6.eq) goto loc_821C0DBC;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0dbc
	if (ctx.cr0.eq) goto loc_821C0DBC;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0DB4:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0db4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0DB4;
loc_821C0DBC:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24864
	ctx.r5.s64 = 1629487104;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0DD0:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,1372
	ctx.r10.s64 = ctx.r1.s64 + 1372;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,144(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0E00:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c0e00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0E00;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821c0e30
	if (ctx.cr6.eq) goto loc_821C0E30;
	// addi r11,r15,-4
	ctx.r11.s64 = ctx.r15.s64 + -4;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821c0e30
	if (ctx.cr0.eq) goto loc_821C0E30;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821C0E28:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821c0e28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C0E28;
loc_821C0E30:
	// lwz r8,148(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lis r5,24880
	ctx.r5.s64 = 1630535680;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,1376
	ctx.r7.s64 = ctx.r1.s64 + 1376;
	// b 0x821c0f54
	goto loc_821C0F54;
loc_821C0E44:
	// lwz r9,128(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821bb574
	if (!ctx.cr6.gt) goto loc_821BB574;
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
loc_821C0E70:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821c0eb4
	if (ctx.cr6.eq) goto loc_821C0EB4;
loc_821C0E7C:
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r6,24(r16)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r16.u32 + 24);
	// mullw r8,r11,r8
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r10,r6
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// stwx r6,r8,r15
	REX_STORE_U32(ctx.r8.u32 + ctx.r15.u32, ctx.r6.u32);
	// lwz r8,20(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821c0e7c
	if (ctx.cr6.lt) goto loc_821C0E7C;
loc_821C0EB4:
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821c0e70
	if (ctx.cr6.lt) goto loc_821C0E70;
	// b 0x821bb574
	goto loc_821BB574;
loc_821C0EC8:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c0f78
	if (ctx.cr6.eq) goto loc_821C0F78;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x821bb574
	if (ctx.cr6.eq) goto loc_821BB574;
	// lwz r3,8(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// lfd f1,11448(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 11448);
	// bl 0x8220ea28
	ctx.lr = 0x821C0EF8;
	sub_8220EA28(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r5,8272
	ctx.r5.s64 = 542113792;
	// li r9,6
	ctx.r9.s64 = 6;
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// addi r8,r1,656
	ctx.r8.s64 = ctx.r1.s64 + 656;
	// addi r7,r1,720
	ctx.r7.s64 = ctx.r1.s64 + 720;
	// stw r3,720(r1)
	REX_STORE_U32(ctx.r1.u32 + 720, ctx.r3.u32);
	// lwz r30,4(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r30,724(r1)
	REX_STORE_U32(ctx.r1.u32 + 724, ctx.r30.u32);
	// lwz r30,0(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r30,728(r1)
	REX_STORE_U32(ctx.r1.u32 + 728, ctx.r30.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r31,656(r1)
	REX_STORE_U32(ctx.r1.u32 + 656, ctx.r31.u32);
	// stw r31,660(r1)
	REX_STORE_U32(ctx.r1.u32 + 660, ctx.r31.u32);
	// stw r31,664(r1)
	REX_STORE_U32(ctx.r1.u32 + 664, ctx.r31.u32);
	// stw r31,668(r1)
	REX_STORE_U32(ctx.r1.u32 + 668, ctx.r31.u32);
	// stw r10,732(r1)
	REX_STORE_U32(ctx.r1.u32 + 732, ctx.r10.u32);
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r11,4(r15)
	REX_STORE_U32(ctx.r15.u32 + 4, ctx.r11.u32);
	// stw r11,8(r15)
	REX_STORE_U32(ctx.r15.u32 + 8, ctx.r11.u32);
	// stw r11,12(r15)
	REX_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
loc_821C0F54:
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// b 0x821c02d8
	goto loc_821C02D8;
loc_821C0F5C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r7,56(r16)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r16.u32 + 56);
	// li r5,3042
	ctx.r5.s64 = 3042;
	// addi r6,r11,11400
	ctx.r6.s64 = ctx.r11.s64 + 11400;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x821b34c0
	ctx.lr = 0x821C0F78;
	sub_821B34C0(ctx, base);
loc_821C0F78:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_821C0F80:
	// lwz r10,1716(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 1716);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r9,528(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 528);
	// li r30,4
	ctx.r30.s64 = 4;
	// lwz r8,532(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 532);
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
	// stw r9,28(r10)
	REX_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r8,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r8.u32);
loc_821C0FA0:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x8216b138
	ctx.lr = 0x821C0FAC;
	sub_8216B138(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x821c0fa0
	if (!ctx.cr0.eq) goto loc_821C0FA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821c0fc4
	goto loc_821C0FC4;
loc_821C0FBC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821C0FC4:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FC948) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FC950;
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
	// li r6,5
	ctx.r6.s64 = 5;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FC978;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fc99c
	if (ctx.cr6.eq) goto loc_822FC99C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822FC998;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822FC99C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FC9A4;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FC9B4;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FC9C0;
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

DEFINE_REX_FUNC(sub_822FE230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x822FE238;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r24,0
	ctx.r24.s64 = 0;
loc_822FE250:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822fe3d4
	if (ctx.cr6.eq) goto loc_822FE3D4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// blt cr6,0x822fe268
	if (ctx.cr6.lt) goto loc_822FE268;
	// li r27,4
	ctx.r27.s64 = 4;
loc_822FE268:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb620
	ctx.lr = 0x822FE280;
	sub_822FB620(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb620
	ctx.lr = 0x822FE29C;
	sub_822FB620(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f71d8
	ctx.lr = 0x822FE2AC;
	sub_822F71D8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822fe2cc
	if (!ctx.cr6.eq) goto loc_822FE2CC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822fe39c
	goto loc_822FE39C;
loc_822FE2CC:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE2DC;
	sub_82281370(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE2F0;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x822f70e8
	ctx.lr = 0x822FE300;
	sub_822F70E8(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822fe350
	if (!ctx.cr6.gt) goto loc_822FE350;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE328;
	sub_82281370(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE33C;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// bl 0x822f70e8
	ctx.lr = 0x822FE34C;
	sub_822F70E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822FE350:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822fe39c
	if (!ctx.cr6.gt) goto loc_822FE39C;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE374;
	sub_82281370(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822FE388;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x822f70e8
	ctx.lr = 0x822FE398;
	sub_822F70E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_822FE39C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822fe3ac
	if (!ctx.cr6.eq) goto loc_822FE3AC;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x822fe3c0
	goto loc_822FE3C0;
loc_822FE3AC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f93f8
	ctx.lr = 0x822FE3BC;
	sub_822F93F8(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_822FE3C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// subf r25,r27,r25
	ctx.r25.u64 = ctx.r25.u64 - ctx.r27.u64;
	// bl 0x822f6df8
	ctx.lr = 0x822FE3D0;
	sub_822F6DF8(ctx, base);
	// b 0x822fe250
	goto loc_822FE250;
loc_822FE3D4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82302FD0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82302FD8;
	__savegprlr_19(ctx, base);
	// stfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -136, ctx.f29.u64);
	// stfd f30,-128(r1)
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822969a8
	ctx.lr = 0x82303000;
	sub_822969A8(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823036d8
	if (ctx.cr6.eq) goto loc_823036D8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r23,-1
	ctx.r23.s64 = -1;
	// lfs f29,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f29.f64 = double(temp.f32);
	// lfd f30,1792(r10)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
	// lfs f31,2104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
loc_82303034:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82300498
	ctx.lr = 0x8230303C;
	sub_82300498(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x823035c8
	if (ctx.cr6.lt) goto loc_823035C8;
	// cmplwi cr6,r3,14
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 14, ctx.xer);
	// bge cr6,0x82303710
	if (!ctx.cr6.lt) goto loc_82303710;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822a8f48
	ctx.lr = 0x8230305C;
	sub_822A8F48(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x822faa28
	ctx.lr = 0x82303068;
	sub_822FAA28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r27,172(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// lwz r19,176(r1)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// bl 0x822f6df8
	ctx.lr = 0x8230307C;
	sub_822F6DF8(ctx, base);
	// lwz r10,176(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,172(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r27,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r27.u32);
	// stw r19,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r19.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823030b8
	if (!ctx.cr0.eq) goto loc_823030B8;
	// rlwinm r4,r11,15,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x7FFF;
	// rlwinm r29,r11,30,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// b 0x82303134
	goto loc_82303134;
loc_823030B8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82303264
	if (!ctx.cr6.eq) goto loc_82303264;
	// lwz r30,0(r27)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,124
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 124, ctx.xer);
	// bne cr6,0x82303108
	if (!ctx.cr6.eq) goto loc_82303108;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x823030EC;
	sub_8226D728(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
loc_823030F8:
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// subfc r11,r22,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r22.u32;
	ctx.r11.u64 = ctx.r11.u64 - ctx.r22.u64;
	// subfze r30,r23
	temp.u8 = ~ctx.r23.u32 + ctx.xer.ca < ~ctx.r23.u32;
	ctx.r30.u64 = ~ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82303240
	goto loc_82303240;
loc_82303108:
	// cmplwi cr6,r10,112
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 112, ctx.xer);
	// bne cr6,0x823031f4
	if (!ctx.cr6.eq) goto loc_823031F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x82303124;
	sub_8226D728(ctx, base);
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// lwzx r11,r3,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// clrlwi r4,r11,17
	ctx.r4.u64 = ctx.r11.u32 & 0x7FFF;
	// rlwinm r29,r11,17,18,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x3FFF;
loc_82303134:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r30,r4,40
	ctx.r30.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82303180
	if (!ctx.cr6.eq) goto loc_82303180;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82303164
	if (!ctx.cr6.eq) goto loc_82303164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82296ba0
	ctx.lr = 0x82303164;
	sub_82296BA0(ctx, base);
loc_82303164:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,14,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3;
	// b 0x823030f8
	goto loc_823030F8;
loc_82303180:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,20(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822969a8
	ctx.lr = 0x82303194;
	sub_822969A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82303198:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82300498
	ctx.lr = 0x823031A0;
	sub_82300498(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// bne cr6,0x82303198
	if (!ctx.cr6.eq) goto loc_82303198;
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// addi r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 + 972;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,1004(r31)
	REX_STORE_U32(ctx.r31.u32 + 1004, ctx.r30.u32);
	// ble cr6,0x823031d0
	if (!ctx.cr6.gt) goto loc_823031D0;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// ble cr6,0x823031d4
	if (!ctx.cr6.gt) goto loc_823031D4;
loc_823031D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823031D4:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x823031ec
	if (ctx.cr6.lt) goto loc_823031EC;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// bgt cr6,0x823031ec
	if (ctx.cr6.gt) goto loc_823031EC;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x82303264
	goto loc_82303264;
loc_823031EC:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82303264
	goto loc_82303264;
loc_823031F4:
	// cmplwi cr6,r10,125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 125, ctx.xer);
	// bne cr6,0x8230324c
	if (!ctx.cr6.eq) goto loc_8230324C;
	// rlwinm r10,r30,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
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
	// bne 0x82303220
	if (!ctx.cr0.eq) goto loc_82303220;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82303234
	goto loc_82303234;
loc_82303220:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r11,r11,31,17,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFE;
	// rlwinm r10,r10,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xFF;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82303234:
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82303240:
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// b 0x82303264
	goto loc_82303264;
loc_8230324C:
	// lhz r10,14(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 14);
	// rlwinm r11,r11,0,16,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r30,r11,30,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// rlwinm r29,r10,31,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
loc_82303264:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,6
	ctx.r10.s64 = 6;
	// subfc r9,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r28.u64 - ctx.r11.u64;
	// eqv r11,r11,r28
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r28.u64);
	// eqv r8,r10,r28
	ctx.r8.u64 = ~(ctx.r10.u64 ^ ctx.r28.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// subfc r10,r10,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r10.u32;
	ctx.r10.u64 = ctx.r28.u64 - ctx.r10.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r8,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	// beq 0x823034ac
	if (ctx.cr0.eq) goto loc_823034AC;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230343c
	if (!ctx.cr0.eq) goto loc_8230343C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f5d78
	ctx.lr = 0x823032B0;
	sub_822F5D78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq 0x823032fc
	if (ctx.cr0.eq) goto loc_823032FC;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823032e0
	if (ctx.cr0.eq) goto loc_823032E0;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// b 0x823032f4
	goto loc_823032F4;
loc_823032E0:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_823032F4:
	// bl 0x82333b48
	ctx.lr = 0x823032F8;
	sub_82333B48(ctx, base);
	// b 0x823034f0
	goto loc_823034F0;
loc_823032FC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82333b48
	ctx.lr = 0x8230330C;
	sub_82333B48(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82333b48
	ctx.lr = 0x82303320;
	sub_82333B48(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x822fd620
	ctx.lr = 0x82303334;
	sub_822FD620(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fc238
	ctx.lr = 0x82303344;
	sub_822FC238(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,228
	ctx.r7.s64 = 228;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r11,18,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// bl 0x8232b290
	ctx.lr = 0x82303364;
	sub_8232B290(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fc158
	ctx.lr = 0x82303374;
	sub_822FC158(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// rlwinm r5,r11,18,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// li r7,228
	ctx.r7.s64 = 228;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b290
	ctx.lr = 0x82303394;
	sub_8232B290(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ld r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// ld r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x822fd430
	ctx.lr = 0x823033A8;
	sub_822FD430(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f94c8
	ctx.lr = 0x823033B8;
	sub_822F94C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f93f8
	ctx.lr = 0x823033C8;
	sub_822F93F8(ctx, base);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x823033E8;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x8226d728
	ctx.lr = 0x82303408;
	sub_8226D728(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x82303428;
	sub_82281260(ctx, base);
loc_82303428:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x82303434;
	sub_82281428(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// b 0x82303574
	goto loc_82303574;
loc_8230343C:
	// clrlwi r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823036cc
	if (ctx.cr6.eq) goto loc_823036CC;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x82303468;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x8226d728
	ctx.lr = 0x82303484;
	sub_8226D728(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// addi r10,r30,-4
	ctx.r10.s64 = ctx.r30.s64 + -4;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stwx r11,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x823034A8;
	sub_822FB480(ctx, base);
	// b 0x82303428
	goto loc_82303428;
loc_823034AC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f5d78
	ctx.lr = 0x823034BC;
	sub_822F5D78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303504
	if (ctx.cr0.eq) goto loc_82303504;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82303504
	if (!ctx.cr6.eq) goto loc_82303504;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8232fe98
	ctx.lr = 0x823034F0;
	sub_8232FE98(ctx, base);
loc_823034F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// b 0x823036cc
	goto loc_823036CC;
loc_82303504:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823036cc
	if (ctx.cr0.eq) goto loc_823036CC;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// li r6,103
	ctx.r6.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x82303528;
	sub_8232D9E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,103
	ctx.r4.s64 = 103;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r29,24
	ctx.r29.u64 = ctx.r29.u32 & 0xFF;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// bl 0x8226d728
	ctx.lr = 0x82303548;
	sub_8226D728(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x82303564;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x82303570;
	sub_82281428(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
loc_82303574:
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// beq cr6,0x82303594
	if (ctx.cr6.eq) goto loc_82303594;
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x823035a8
	if (ctx.cr6.eq) goto loc_823035A8;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x823035a4
	goto loc_823035A4;
loc_82303594:
	// andi. r10,r11,26214
	ctx.r10.u64 = ctx.r11.u64 & 26214;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,26214
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 26214, ctx.xer);
	// beq cr6,0x823035a8
	if (ctx.cr6.eq) goto loc_823035A8;
	// ori r11,r11,26214
	ctx.r11.u64 = ctx.r11.u64 | 26214;
loc_823035A4:
	// sth r11,14(r30)
	REX_STORE_U16(ctx.r30.u32 + 14, ctx.r11.u16);
loc_823035A8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r30,0(r27)
	REX_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
	// rlwimi r11,r21,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
	// stw r11,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x823036cc
	goto loc_823036CC;
loc_823035C8:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822a8f48
	ctx.lr = 0x823035D4;
	sub_822A8F48(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x822faa28
	ctx.lr = 0x823035E0;
	sub_822FAA28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// lwz r30,188(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r29,192(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x822f6df8
	ctx.lr = 0x823035F4;
	sub_822F6DF8(ctx, base);
	// lwz r10,192(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// lwz r11,188(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r30,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r29,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r29.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822f5d78
	ctx.lr = 0x82303620;
	sub_822F5D78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82303674
	if (ctx.cr0.eq) goto loc_82303674;
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x8230363c
	if (ctx.cr6.eq) goto loc_8230363C;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// b 0x82303640
	goto loc_82303640;
loc_8230363C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82303640:
	// fcmpu cr6,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x823036cc
	if (ctx.cr6.eq) goto loc_823036CC;
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x8232fe98
	ctx.lr = 0x82303664;
	sub_8232FE98(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x823036c8
	goto loc_823036C8;
loc_82303674:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x82303680;
	sub_822FB480(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82280d20
	ctx.lr = 0x8230368C;
	sub_82280D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8232fe98
	ctx.lr = 0x823036AC;
	sub_8232FE98(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// ld r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fca28
	ctx.lr = 0x823036BC;
	sub_822FCA28(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// rlwimi r11,r21,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
loc_823036C8:
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_823036CC:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82303034
	if (ctx.cr6.lt) goto loc_82303034;
loc_823036D8:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823036f8
	if (!ctx.cr6.eq) goto loc_823036F8;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82300440
	ctx.lr = 0x823036EC;
	sub_82300440(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// beq 0x823036fc
	if (ctx.cr0.eq) goto loc_823036FC;
loc_823036F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823036FC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230371c
	if (!ctx.cr0.eq) goto loc_8230371C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82303710;
	sub_8225B1A0(ctx, base);
loc_82303710:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230371C;
	sub_8225B1A0(ctx, base);
loc_8230371C:
	// lwz r10,1004(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 1004);
	// addi r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 + 972;
	// stw r10,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r10.u32);
	// stw r20,1004(r31)
	REX_STORE_U32(ctx.r31.u32 + 1004, ctx.r20.u32);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f29,-136(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f30,-128(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231F6E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r9,32
	ctx.r9.s64 = 32;
	// lhz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r8,r5,-1
	ctx.r8.s64 = ctx.r5.s64 + -1;
	// clrlwi r11,r11,19
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8231F704:
	// stbu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	REX_STORE_U8(ea, ctx.r7.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x8231f704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8231F704;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// li r8,65
	ctx.r8.s64 = 65;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,23356(r10)
	REX_STORE_U32(ctx.r10.u32 + 23356, ctx.r11.u32);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// sth r8,2(r5)
	REX_STORE_U16(ctx.r5.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,23352(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 23352);
	// sth r10,6(r5)
	REX_STORE_U16(ctx.r5.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,0,28
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r9.u64 & 0xFFFFFFFF00000007);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,20,16
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r9.u64 & 0x7000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,29,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r9.u64 & 0x8);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,25,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r9.u64 & 0x80);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,21,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r9.u64 & 0x800);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,17,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r9.u64 & 0x8000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,12,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r9.u64 & 0x100000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231f824
	if (ctx.cr0.eq) goto loc_8231F824;
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231F824:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r9,0,10,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,16(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwimi r10,r9,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// oris r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r10,r9,0,0,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r10.u64 & 0xFFFFFFFF00000007);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,28,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F) | (ctx.r9.u64 & 0x70);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,24,20
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r9.u64 & 0x700);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r10,r9,0,20,16
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF) | (ctx.r10.u64 & 0x7000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,29,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7) | (ctx.r9.u64 & 0x8);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,25,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F) | (ctx.r9.u64 & 0x80);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,21,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF) | (ctx.r9.u64 & 0x800);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,17,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF) | (ctx.r9.u64 & 0x8000);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,28(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// rlwimi r9,r10,0,12,10
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF) | (ctx.r9.u64 & 0x100000);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231f8fc
	if (ctx.cr0.eq) goto loc_8231F8FC;
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231F8FC:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231f928
	if (ctx.cr0.eq) goto loc_8231F928;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231F928:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,9,9
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231f94c
	if (ctx.cr0.eq) goto loc_8231F94C;
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231F94C:
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82328C28) {
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
	// bne cr6,0x82328c64
	if (!ctx.cr6.eq) goto loc_82328C64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,22176
	ctx.r6.s64 = ctx.r11.s64 + 22176;
	// addi r5,r10,14904
	ctx.r5.s64 = ctx.r10.s64 + 14904;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,574
	ctx.r7.s64 = 574;
	// bl 0x82260f30
	ctx.lr = 0x82328C64;
	sub_82260F30(ctx, base);
loc_82328C64:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
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

DEFINE_REX_FUNC(sub_823296D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x823296E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,22176
	ctx.r29.s64 = ctx.r10.s64 + 22176;
	// bne cr6,0x8232972c
	if (!ctx.cr6.eq) goto loc_8232972C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,890
	ctx.r7.s64 = 890;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8232972C;
	sub_82260F30(ctx, base);
loc_8232972C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82329750
	if (!ctx.cr6.eq) goto loc_82329750;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,14312
	ctx.r5.s64 = ctx.r11.s64 + 14312;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,891
	ctx.r7.s64 = 891;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82329750;
	sub_82260F30(ctx, base);
loc_82329750:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822668a0
	ctx.lr = 0x8232975C;
	sub_822668A0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82329784
	if (ctx.cr6.eq) goto loc_82329784;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2460
	ctx.r5.s64 = ctx.r11.s64 + 2460;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,896
	ctx.r7.s64 = 896;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82329784;
	sub_82260F30(ctx, base);
loc_82329784:
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82266538
	ctx.lr = 0x8232978C;
	sub_82266538(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// stw r28,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823297ac
	if (ctx.cr6.eq) goto loc_823297AC;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823297AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823297AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82266e68
	ctx.lr = 0x823297B4;
	sub_82266E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329628
	ctx.lr = 0x823297C0;
	sub_82329628(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82328f28
	ctx.lr = 0x823297D0;
	sub_82328F28(ctx, base);
	// stw r3,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232A978) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,59
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 59, ctx.xer);
	// bgt cr6,0x8232a9fc
	if (ctx.cr6.gt) goto loc_8232A9FC;
	// beq cr6,0x8232a9f0
	if (ctx.cr6.eq) goto loc_8232A9F0;
	// cmplwi cr6,r10,21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 21, ctx.xer);
	// beq cr6,0x8232a9e4
	if (ctx.cr6.eq) goto loc_8232A9E4;
	// cmplwi cr6,r10,22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 22, ctx.xer);
	// beq cr6,0x8232a9dc
	if (ctx.cr6.eq) goto loc_8232A9DC;
	// cmplwi cr6,r10,23
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 23, ctx.xer);
	// beq cr6,0x8232a9c4
	if (ctx.cr6.eq) goto loc_8232A9C4;
	// cmplwi cr6,r10,24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 24, ctx.xer);
	// bne cr6,0x8232aa14
	if (!ctx.cr6.eq) goto loc_8232AA14;
	// li r10,23
	ctx.r10.s64 = 23;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82280d20
	sub_82280D20(ctx, base);
	return;
loc_8232A9C4:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,10,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,48(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// b 0x82280d20
	sub_82280D20(ctx, base);
	return;
loc_8232A9DC:
	// li r10,21
	ctx.r10.s64 = 21;
	// b 0x8232aa5c
	goto loc_8232AA5C;
loc_8232A9E4:
	// li r10,11
	ctx.r10.s64 = 11;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x8232aa60
	goto loc_8232AA60;
loc_8232A9F0:
	// li r10,15
	ctx.r10.s64 = 15;
	// rlwimi r11,r10,9,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// b 0x8232aa60
	goto loc_8232AA60;
loc_8232A9FC:
	// cmplwi cr6,r10,60
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 60, ctx.xer);
	// beq cr6,0x8232aa58
	if (ctx.cr6.eq) goto loc_8232AA58;
	// cmplwi cr6,r10,61
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61, ctx.xer);
	// beq cr6,0x8232aa40
	if (ctx.cr6.eq) goto loc_8232AA40;
	// cmplwi cr6,r10,62
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 62, ctx.xer);
	// beq cr6,0x8232aa28
	if (ctx.cr6.eq) goto loc_8232AA28;
loc_8232AA14:
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
loc_8232AA28:
	// li r10,61
	ctx.r10.s64 = 61;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82280d20
	sub_82280D20(ctx, base);
	return;
loc_8232AA40:
	// li r10,31
	ctx.r10.s64 = 31;
	// li r4,4
	ctx.r4.s64 = 4;
	// rlwimi r11,r10,8,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// b 0x82280d20
	sub_82280D20(ctx, base);
	return;
loc_8232AA58:
	// li r10,59
	ctx.r10.s64 = 59;
loc_8232AA5C:
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
loc_8232AA60:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232DBE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8232DBF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8232DC10;
	sub_8226D728(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8232dc2c
	if (!ctx.cr6.eq) goto loc_8232DC2C;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
loc_8232DC2C:
	// li r5,35
	ctx.r5.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82275ef8
	ctx.lr = 0x8232DC38;
	sub_82275EF8(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8232dc50
	if (!ctx.cr6.eq) goto loc_8232DC50;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8232DC50:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x8232DC60;
	sub_8215E640(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// stw r27,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r27,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// sth r27,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r27.u16);
	// stw r27,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,18,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232dd20
	if (ctx.cr0.eq) goto loc_8232DD20;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// b 0x8232dcb0
	goto loc_8232DCB0;
loc_8232DC9C:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8232dcac
	if (ctx.cr6.eq) goto loc_8232DCAC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8232DCAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8232DCB0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8232dc9c
	if (!ctx.cr6.eq) goto loc_8232DC9C;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232dd20
	if (ctx.cr0.eq) goto loc_8232DD20;
	// stw r27,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r28,16(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// b 0x8232dd18
	goto loc_8232DD18;
loc_8232DCCC:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8232dce4
	if (ctx.cr6.lt) goto loc_8232DCE4;
	// bne cr6,0x8232ddac
	if (!ctx.cr6.eq) goto loc_8232DDAC;
	// li r26,72
	ctx.r26.s64 = 72;
	// b 0x8232dce8
	goto loc_8232DCE8;
loc_8232DCE4:
	// li r26,12
	ctx.r26.s64 = 12;
loc_8232DCE8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82275ef8
	ctx.lr = 0x8232DCF8;
	sub_82275EF8(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8215e640
	ctx.lr = 0x8232DD08;
	sub_8215E640(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// stw r25,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r25.u32);
	// lwz r28,4(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
loc_8232DD18:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8232dccc
	if (!ctx.cr6.eq) goto loc_8232DCCC;
loc_8232DD20:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// rlwinm r5,r11,15,27,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1C;
	// bl 0x8215ec60
	ctx.lr = 0x8232DD34;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bne cr6,0x8232ddb8
	if (!ctx.cr6.eq) goto loc_8232DDB8;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,112
	ctx.r4.s64 = 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226d728
	ctx.lr = 0x8232DD58;
	sub_8226D728(ctx, base);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lwz r7,104(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// add r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 + ctx.r29.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// addi r8,r10,-8
	ctx.r8.s64 = ctx.r10.s64 + -8;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r31,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r31.u32);
	// stw r9,104(r30)
	REX_STORE_U32(ctx.r30.u32 + 104, ctx.r9.u32);
	// stw r27,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r27.u32);
	// lwz r8,-8(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// lwz r9,-8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// rlwimi r9,r8,0,17,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFF) | (ctx.r9.u64 & 0xFFFFFFFFFFFF8000);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r9,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r9.u32);
	// lwz r9,-8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r8,r9,0,3,16
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFF8000) | (ctx.r8.u64 & 0xFFFFFFFFE0007FFF);
	// stw r8,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r8.u32);
	// lwz r10,-8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -8);
	// rlwimi r10,r8,0,3,1
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF) | (ctx.r10.u64 & 0x20000000);
	// stw r10,-8(r11)
	REX_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// b 0x8232dee8
	goto loc_8232DEE8;
loc_8232DDAC:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8232DDB8;
	sub_8225B1A0(ctx, base);
loc_8232DDB8:
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bne cr6,0x8232ddf8
	if (!ctx.cr6.eq) goto loc_8232DDF8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226d728
	ctx.lr = 0x8232DDD4;
	sub_8226D728(ctx, base);
	// addi r11,r31,-12
	ctx.r11.s64 = ctx.r31.s64 + -12;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r29,r3,r11
	ctx.r29.u64 = ctx.r3.u64 + ctx.r11.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82295980
	ctx.lr = 0x8232DDF0;
	sub_82295980(ctx, base);
	// stw r3,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r3.u32);
	// b 0x8232dee8
	goto loc_8232DEE8;
loc_8232DDF8:
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x8232de10
	if (ctx.cr6.eq) goto loc_8232DE10;
	// cmplwi cr6,r11,99
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 99, ctx.xer);
	// beq cr6,0x8232de10
	if (ctx.cr6.eq) goto loc_8232DE10;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x8232de14
	if (!ctx.cr6.eq) goto loc_8232DE14;
loc_8232DE10:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8232DE14:
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8232de68
	if (ctx.cr0.eq) goto loc_8232DE68;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8232DE34;
	sub_8226D728(ctx, base);
	// addi r11,r29,-24
	ctx.r11.s64 = ctx.r29.s64 + -24;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232dee8
	if (ctx.cr6.eq) goto loc_8232DEE8;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82295980
	ctx.lr = 0x8232DE60;
	sub_82295980(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// b 0x8232deb8
	goto loc_8232DEB8;
loc_8232DE68:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bne cr6,0x8232dee8
	if (!ctx.cr6.eq) goto loc_8232DEE8;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8232DE88;
	sub_8226D728(ctx, base);
	// addi r11,r29,-20
	ctx.r11.s64 = ctx.r29.s64 + -20;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232dee8
	if (ctx.cr6.eq) goto loc_8232DEE8;
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r29,2
	ctx.r11.s64 = ctx.r29.s64 + 2;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82295980
	ctx.lr = 0x8232DEB4;
	sub_82295980(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
loc_8232DEB8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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
	ctx.lr = 0x8232DEE0;
	sub_8226D728(ctx, base);
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// stwx r28,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r28.u32);
loc_8232DEE8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82336350) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82336358;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r25,r4,4
	ctx.r25.s64 = ctx.r4.s64 + 4;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82336380:
	// lwz r31,0(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823365b4
	if (ctx.cr6.eq) goto loc_823365B4;
	// lwz r30,16(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336594
	if (ctx.cr6.eq) goto loc_82336594;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r10,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82336544
	if (!ctx.cr0.eq) goto loc_82336544;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,28(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82336594
	if (!ctx.cr6.eq) goto loc_82336594;
	// rlwinm r11,r10,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r9,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823364b8
	if (ctx.cr0.eq) goto loc_823364B8;
	// rlwinm r11,r10,19,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0xFFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82336464
	if (ctx.cr6.lt) goto loc_82336464;
	// beq cr6,0x8233644c
	if (ctx.cr6.eq) goto loc_8233644C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8233643c
	if (ctx.cr6.lt) goto loc_8233643C;
	// beq cr6,0x8233642c
	if (ctx.cr6.eq) goto loc_8233642C;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82336470
	if (ctx.cr6.lt) goto loc_82336470;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82336408
	if (ctx.cr6.eq) goto loc_82336408;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x823365a8
	if (!ctx.cr6.eq) goto loc_823365A8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x82336404;
	sub_8226D3A8(ctx, base);
	// b 0x823364a0
	goto loc_823364A0;
loc_82336408:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// blt cr6,0x82336424
	if (ctx.cr6.lt) goto loc_82336424;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8233649c
	if (!ctx.cr6.gt) goto loc_8233649C;
loc_82336424:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8233649c
	goto loc_8233649C;
loc_8233642C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-13056
	ctx.r11.s64 = ctx.r11.s64 + -13056;
	// b 0x82336458
	goto loc_82336458;
loc_8233643C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12928
	ctx.r11.s64 = ctx.r11.s64 + -12928;
	// b 0x82336458
	goto loc_82336458;
loc_8233644C:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// addi r11,r11,-12544
	ctx.r11.s64 = ctx.r11.s64 + -12544;
loc_82336458:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x823364a0
	goto loc_823364A0;
loc_82336464:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336478
	if (!ctx.cr0.eq) goto loc_82336478;
loc_82336470:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823364a0
	goto loc_823364A0;
loc_82336478:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82336498
	if (ctx.cr6.eq) goto loc_82336498;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82336498
	if (ctx.cr6.eq) goto loc_82336498;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8233649c
	if (!ctx.cr6.eq) goto loc_8233649C;
loc_82336498:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8233649C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_823364A0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336594
	if (ctx.cr0.eq) goto loc_82336594;
loc_823364A8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82336520
	goto loc_82336520;
loc_823364B8:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823364a8
	if (ctx.cr0.eq) goto loc_823364A8;
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x823364e0
	if (ctx.cr6.lt) goto loc_823364E0;
	// cmplwi cr6,r10,102
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 102, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823364e4
	if (!ctx.cr6.gt) goto loc_823364E4;
loc_823364E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823364E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823364a8
	if (!ctx.cr0.eq) goto loc_823364A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x82336504
	if (!ctx.cr6.eq) goto loc_82336504;
	// cmplwi cr6,r10,113
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 113, ctx.xer);
	// beq cr6,0x823364a8
	if (ctx.cr6.eq) goto loc_823364A8;
loc_82336504:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281b70
	ctx.lr = 0x82336514;
	sub_82281B70(ctx, base);
	// b 0x82336594
	goto loc_82336594;
loc_82336518:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_82336520:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82336518
	if (!ctx.cr6.eq) goto loc_82336518;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// b 0x82336568
	goto loc_82336568;
loc_82336544:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232cff0
	ctx.lr = 0x82336560;
	sub_8232CFF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336594
	if (ctx.cr0.eq) goto loc_82336594;
loc_82336568:
	// li r21,1
	ctx.r21.s64 = 1;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82336588
	if (ctx.cr6.eq) goto loc_82336588;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d49e0
	ctx.lr = 0x82336584;
	sub_822D49E0(ctx, base);
	// b 0x82336594
	goto loc_82336594;
loc_82336588:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82336594:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82336380
	if (!ctx.cr6.eq) goto loc_82336380;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// b 0x82336380
	goto loc_82336380;
loc_823365A8:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x823365B4;
	sub_8225B1A0(ctx, base);
loc_823365B4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823365e8
	if (ctx.cr6.eq) goto loc_823365E8;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823365e8
	if (ctx.cr0.eq) goto loc_823365E8;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226dc78
	ctx.lr = 0x823365CC;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823365f4
	if (ctx.cr0.eq) goto loc_823365F4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82334408
	ctx.lr = 0x823365E8;
	sub_82334408(ctx, base);
loc_823365E8:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_823365F4:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336608
	if (!ctx.cr0.eq) goto loc_82336608;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82336630
	goto loc_82336630;
loc_82336608:
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x82336628
	if (ctx.cr6.eq) goto loc_82336628;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// beq cr6,0x82336628
	if (ctx.cr6.eq) goto loc_82336628;
	// cmplwi cr6,r11,56
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 56, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8233662c
	if (!ctx.cr6.eq) goto loc_8233662C;
loc_82336628:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8233662C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82336630:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336718
	if (ctx.cr0.eq) goto loc_82336718;
	// lwz r30,4(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
loc_8233663C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823366a8
	if (ctx.cr6.eq) goto loc_823366A8;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823366a0
	if (ctx.cr6.eq) goto loc_823366A0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82336668
	if (ctx.cr0.eq) goto loc_82336668;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8233666c
	if (ctx.cr0.eq) goto loc_8233666C;
loc_82336668:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233666C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823366a0
	if (ctx.cr0.eq) goto loc_823366A0;
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_82336678:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823366a0
	if (ctx.cr6.eq) goto loc_823366A0;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82336698
	if (ctx.cr6.eq) goto loc_82336698;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d49e0
	ctx.lr = 0x82336698;
	sub_822D49E0(ctx, base);
loc_82336698:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82336678
	goto loc_82336678;
loc_823366A0:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x8233663c
	goto loc_8233663C;
loc_823366A8:
	// lwz r30,0(r25)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
loc_823366AC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82336718
	if (ctx.cr6.eq) goto loc_82336718;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82336710
	if (ctx.cr6.eq) goto loc_82336710;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r9,r11,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823366d8
	if (ctx.cr0.eq) goto loc_823366D8;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x823366dc
	if (ctx.cr0.eq) goto loc_823366DC;
loc_823366D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823366DC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336710
	if (ctx.cr0.eq) goto loc_82336710;
	// lwz r31,4(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_823366E8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82336710
	if (ctx.cr6.eq) goto loc_82336710;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82336708
	if (ctx.cr6.eq) goto loc_82336708;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d49e0
	ctx.lr = 0x82336708;
	sub_822D49E0(ctx, base);
loc_82336708:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x823366e8
	goto loc_823366E8;
loc_82336710:
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x823366ac
	goto loc_823366AC;
loc_82336718:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226d3a8
	ctx.lr = 0x82336720;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823367dc
	if (ctx.cr0.eq) goto loc_823367DC;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r29,28(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823367dc
	if (!ctx.cr0.eq) goto loc_823367DC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823367dc
	if (ctx.cr0.eq) goto loc_823367DC;
loc_82336744:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823367c0
	if (ctx.cr0.eq) goto loc_823367C0;
	// lwz r31,20(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823367c0
	if (!ctx.cr0.eq) goto loc_823367C0;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x823367c0
	if (ctx.cr0.eq) goto loc_823367C0;
loc_82336788:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x823367a8
	if (!ctx.cr6.eq) goto loc_823367A8;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d49e0
	ctx.lr = 0x823367A8;
	sub_822D49E0(ctx, base);
loc_823367A8:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823367c0
	if (!ctx.cr0.eq) goto loc_823367C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82336788
	if (!ctx.cr6.eq) goto loc_82336788;
loc_823367C0:
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x823367dc
	if (!ctx.cr0.eq) goto loc_823367DC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336744
	if (!ctx.cr6.eq) goto loc_82336744;
loc_823367DC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x822d49e0
	ctx.lr = 0x823367EC;
	sub_822D49E0(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226dc78
	ctx.lr = 0x823367F4;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823365e8
	if (ctx.cr0.eq) goto loc_823365E8;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r22,40
	ctx.r30.s64 = ctx.r22.s64 + 40;
loc_82336804:
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823365e8
	if (!ctx.cr6.lt) goto loc_823365E8;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x822d49e0
	ctx.lr = 0x82336828;
	sub_822D49E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x82336804
	goto loc_82336804;
}

DEFINE_REX_FUNC(sub_82342BE8) {
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
	// lwz r30,12(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342C18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,24568
	ctx.r6.s64 = ctx.r11.s64 + 24568;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823390b0
	ctx.lr = 0x82342C34;
	sub_823390B0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82342c6c
	if (ctx.cr6.eq) goto loc_82342C6C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82342cb8
	if (!ctx.cr6.eq) goto loc_82342CB8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,31816
	ctx.r6.s64 = ctx.r11.s64 + 31816;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1013
	ctx.r7.s64 = 1013;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82342C68;
	sub_82260F30(ctx, base);
	// b 0x82342cb8
	goto loc_82342CB8;
loc_82342C6C:
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r3,1488(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 1488);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342C84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r6,r11,24568
	ctx.r6.s64 = ctx.r11.s64 + 24568;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x823391e0
	ctx.lr = 0x82342CA0;
	sub_823391E0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82342cb4
	if (!ctx.cr6.eq) goto loc_82342CB4;
	// bl 0x8233faf8
	ctx.lr = 0x82342CB0;
	sub_8233FAF8(ctx, base);
	// b 0x82342cb8
	goto loc_82342CB8;
loc_82342CB4:
	// bl 0x8233fc48
	ctx.lr = 0x82342CB8;
	sub_8233FC48(ctx, base);
loc_82342CB8:
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

DEFINE_REX_FUNC(sub_82345B78) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82345bb8
	if (ctx.cr6.eq) goto loc_82345BB8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r10,r8
	ctx.r10.u64 = ctx.r8.u64 - ctx.r10.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x82345ba8
	goto loc_82345BA8;
loc_82345BA0:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82345BA8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82345ba0
	if (!ctx.cr6.eq) goto loc_82345BA0;
	// blr 
	return;
loc_82345BB8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82345EB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,100
	ctx.r11.s64 = 100;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r11.u64;
	// eqv r11,r11,r10
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r10.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x82345ef0
	if (ctx.cr6.eq) goto loc_82345EF0;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82345ef4
	if (!ctx.cr6.eq) goto loc_82345EF4;
loc_82345EF0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82345EF4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823478E0) {
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
	// beq cr6,0x82347978
	if (ctx.cr6.eq) goto loc_82347978;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82347970
	if (ctx.cr6.eq) goto loc_82347970;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82347968
	if (ctx.cr6.eq) goto loc_82347968;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82347948
	if (ctx.cr6.eq) goto loc_82347948;
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82347960
	if (ctx.cr6.eq) goto loc_82347960;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82347958
	if (ctx.cr6.eq) goto loc_82347958;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82347950
	if (ctx.cr6.eq) goto loc_82347950;
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
	// li r7,2874
	ctx.r7.s64 = 2874;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82347948;
	sub_82260F30(ctx, base);
loc_82347948:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347950:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347958:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347960:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347968:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347970:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8234797c
	goto loc_8234797C;
loc_82347978:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8234797C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82349638) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82349640;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,58
	ctx.r11.s64 = ctx.r4.s64 + 58;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwzx r31,r11,r3
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82349684
	if (!ctx.cr6.eq) goto loc_82349684;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-31584
	ctx.r5.s64 = ctx.r10.s64 + -31584;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82349684;
	sub_82260F30(ctx, base);
loc_82349684:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82349698;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823496f8
	if (ctx.cr0.eq) goto loc_823496F8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x823496f8
	if (!ctx.cr6.eq) goto loc_823496F8;
	// addi r11,r29,32
	ctx.r11.s64 = ctx.r29.s64 + 32;
	// lwz r8,944(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 944);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823496D0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// lbzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// stbx r10,r9,r7
	REX_STORE_U8(ctx.r9.u32 + ctx.r7.u32, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823496d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823496D0;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_823496F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234BE58) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8234BE60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,52(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// subf r10,r10,r5
	ctx.r10.u64 = ctx.r5.u64 - ctx.r10.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// divw r10,r10,r9
	ctx.r10.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8234bea0
	if (!ctx.cr6.eq) goto loc_8234BEA0;
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// b 0x8234bea4
	goto loc_8234BEA4;
loc_8234BEA0:
	// stw r31,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_8234BEA4:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r9,-32192
	ctx.r9.s64 = -2109734912;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r9,r9,-5640
	ctx.r9.s64 = ctx.r9.s64 + -5640;
	// mulli r10,r10,52
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(52));
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r27,r10,-31904
	ctx.r27.s64 = ctx.r10.s64 + -31904;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x8234bf84
	if (ctx.cr0.eq) goto loc_8234BF84;
	// bl 0x82349700
	ctx.lr = 0x8234BEE4;
	sub_82349700(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// lwz r11,240(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lbz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 132);
	// lbz r10,133(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 133);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234bf24
	if (!ctx.cr6.eq) goto loc_8234BF24;
	// lbz r10,134(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 134);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8234bf24
	if (!ctx.cr6.eq) goto loc_8234BF24;
	// lbz r10,135(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 135);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234bf40
	if (ctx.cr6.eq) goto loc_8234BF40;
loc_8234BF24:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30424
	ctx.r5.s64 = ctx.r11.s64 + -30424;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2755
	ctx.r7.s64 = 2755;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234BF40;
	sub_82260F30(ctx, base);
loc_8234BF40:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -131072;
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
	// stb r11,7(r30)
	REX_STORE_U8(ctx.r30.u32 + 7, ctx.r11.u8);
	// b 0x8234c010
	goto loc_8234C010;
loc_8234BF84:
	// bl 0x82349700
	ctx.lr = 0x8234BF88;
	sub_82349700(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349700
	ctx.lr = 0x8234BF9C;
	sub_82349700(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,-16320
	ctx.r11.s64 = ctx.r11.s64 + -16320;
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// rlwimi r10,r11,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// lwz r3,2736(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 2736);
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x8236d3b8
	ctx.lr = 0x8234BFC0;
	sub_8236D3B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8234c010
	if (ctx.cr0.lt) goto loc_8234C010;
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF00) | (ctx.r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000) | (ctx.r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = ctx.r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = ctx.r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -131072;
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
	// stb r11,5(r30)
	REX_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// stb r11,6(r30)
	REX_STORE_U8(ctx.r30.u32 + 6, ctx.r11.u8);
loc_8234C010:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349c78
	ctx.lr = 0x8234C01C;
	sub_82349C78(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234c0d4
	if (ctx.cr6.eq) goto loc_8234C0D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8234c094
	if (ctx.cr6.eq) goto loc_8234C094;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8234c058
	if (ctx.cr6.eq) goto loc_8234C058;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,4180
	ctx.r5.s64 = ctx.r11.s64 + 4180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2784
	ctx.r7.s64 = 2784;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234C054;
	sub_82260F30(ctx, base);
	// b 0x8234c108
	goto loc_8234C108;
loc_8234C058:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234c088
	if (ctx.cr0.eq) goto loc_8234C088;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x8234c088
	if (ctx.cr6.eq) goto loc_8234C088;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30168
	ctx.r5.s64 = ctx.r11.s64 + -30168;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2780
	ctx.r7.s64 = 2780;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234C088;
	sub_82260F30(ctx, base);
loc_8234C088:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// oris r11,r11,6144
	ctx.r11.u64 = ctx.r11.u64 | 402653184;
	// b 0x8234c104
	goto loc_8234C104;
loc_8234C094:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234c0c4
	if (ctx.cr0.eq) goto loc_8234C0C4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8234c0c4
	if (ctx.cr6.eq) goto loc_8234C0C4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30208
	ctx.r5.s64 = ctx.r11.s64 + -30208;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2776
	ctx.r7.s64 = 2776;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234C0C4;
	sub_82260F30(ctx, base);
loc_8234C0C4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,3,4
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x18000000) | (ctx.r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// b 0x8234c104
	goto loc_8234C104;
loc_8234C0D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,3,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234c0fc
	if (ctx.cr0.eq) goto loc_8234C0FC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30228
	ctx.r5.s64 = ctx.r11.s64 + -30228;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2772
	ctx.r7.s64 = 2772;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234C0FC;
	sub_82260F30(ctx, base);
loc_8234C0FC:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,5,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_8234C104:
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_8234C108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82353F10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,56(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82353f34
	if (!ctx.cr6.eq) goto loc_82353F34;
	// lwz r11,80(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,80(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82353F34:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823540D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c8
	ctx.lr = 0x823540D8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r18,136(r11)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823544d8
	if (ctx.cr6.eq) goto loc_823544D8;
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r17,r5,-27652
	ctx.r17.s64 = ctx.r5.s64 + -27652;
	// addi r20,r6,-27716
	ctx.r20.s64 = ctx.r6.s64 + -27716;
	// addi r19,r7,-27728
	ctx.r19.s64 = ctx.r7.s64 + -27728;
	// addi r25,r8,-14148
	ctx.r25.s64 = ctx.r8.s64 + -14148;
	// addi r16,r9,-27756
	ctx.r16.s64 = ctx.r9.s64 + -27756;
	// addi r24,r10,-28064
	ctx.r24.s64 = ctx.r10.s64 + -28064;
	// addi r22,r11,4136
	ctx.r22.s64 = ctx.r11.s64 + 4136;
loc_82354130:
	// lwz r31,28(r18)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r18.u32 + 28);
	// b 0x823544bc
	goto loc_823544BC;
loc_82354138:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823544b8
	if (ctx.cr0.eq) goto loc_823544B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f5f8
	ctx.lr = 0x82354150;
	sub_8236F5F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823544b8
	if (!ctx.cr6.eq) goto loc_823544B8;
	// lwz r11,140(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 140);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,140(r23)
	REX_STORE_U32(ctx.r23.u32 + 140, ctx.r11.u32);
	// bl 0x8235eed0
	ctx.lr = 0x82354174;
	sub_8235EED0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// stw r21,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r21.u32);
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235419C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8235428c
	if (ctx.cr6.lt) goto loc_8235428C;
	// addi r26,r31,132
	ctx.r26.s64 = ctx.r31.s64 + 132;
loc_823541A8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235428c
	if (!ctx.cr0.eq) goto loc_8235428C;
	// lwz r29,104(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 104);
	// addi r11,r22,6
	ctx.r11.s64 = ctx.r22.s64 + 6;
	// lwz r10,80(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// mulli r10,r10,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82354268
	if (ctx.cr0.eq) goto loc_82354268;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x823541DC;
	sub_8233F040(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f5f8
	ctx.lr = 0x823541E8;
	sub_8236F5F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// beq cr6,0x8235425c
	if (ctx.cr6.eq) goto loc_8235425C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354200;
	sub_8233F040(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354244
	if (!ctx.cr6.eq) goto loc_82354244;
	// lbz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82354244
	if (!ctx.cr6.eq) goto loc_82354244;
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354244
	if (!ctx.cr6.eq) goto loc_82354244;
	// stw r10,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fba8
	ctx.lr = 0x82354244;
	sub_8235FBA8(ctx, base);
loc_82354244:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82362008
	ctx.lr = 0x82354254;
	sub_82362008(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82354268
	goto loc_82354268;
loc_8235425C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354268;
	sub_8233F040(ctx, base);
loc_82354268:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354284;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x823541a8
	if (!ctx.cr6.gt) goto loc_823541A8;
loc_8235428C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,144(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 144);
	// beq 0x823542a4
	if (ctx.cr0.eq) goto loc_823542A4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,144(r23)
	REX_STORE_U32(ctx.r23.u32 + 144, ctx.r11.u32);
	// b 0x823544b8
	goto loc_823544B8;
loc_823542A4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,144(r23)
	REX_STORE_U32(ctx.r23.u32 + 144, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823542C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x823542e0
	if (ctx.cr6.gt) goto loc_823542E0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,614
	ctx.r7.s64 = 614;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823542E0;
	sub_82260F30(ctx, base);
loc_823542E0:
	// lwz r29,236(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82354304
	if (!ctx.cr6.eq) goto loc_82354304;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,617
	ctx.r7.s64 = 617;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354304;
	sub_82260F30(ctx, base);
loc_82354304:
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// addi r10,r22,6
	ctx.r10.s64 = ctx.r22.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82354334
	if (!ctx.cr0.eq) goto loc_82354334;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,618
	ctx.r7.s64 = 618;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354334;
	sub_82260F30(ctx, base);
loc_82354334:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354344;
	sub_8233F040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354354;
	sub_8233F040(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r11,85(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354398
	if (!ctx.cr6.eq) goto loc_82354398;
	// lbz r9,86(r1)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82354398
	if (!ctx.cr6.eq) goto loc_82354398;
	// lbz r11,87(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82354398
	if (!ctx.cr6.eq) goto loc_82354398;
	// stw r10,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fba8
	ctx.lr = 0x82354398;
	sub_8235FBA8(ctx, base);
loc_82354398:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82362008
	ctx.lr = 0x823543A8;
	sub_82362008(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x823543B4;
	sub_8235EED0(ctx, base);
	// lwz r11,224(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 224);
	// stw r21,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r21.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lwz r29,240(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x823543e8
	if (!ctx.cr6.eq) goto loc_823543E8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823543E8;
	sub_82260F30(ctx, base);
loc_823543E8:
	// lwz r11,80(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 80);
	// addi r10,r22,6
	ctx.r10.s64 = ctx.r22.s64 + 6;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82354418
	if (!ctx.cr0.eq) goto loc_82354418;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,635
	ctx.r7.s64 = 635;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82354418;
	sub_82260F30(ctx, base);
loc_82354418:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354428;
	sub_8233F040(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233f040
	ctx.lr = 0x82354438;
	sub_8233F040(ctx, base);
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lbz r10,85(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 85);
	// lbz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235447c
	if (!ctx.cr6.eq) goto loc_8235447C;
	// lbz r10,86(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 86);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235447c
	if (!ctx.cr6.eq) goto loc_8235447C;
	// lbz r10,87(r1)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r1.u32 + 87);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8235447c
	if (!ctx.cr6.eq) goto loc_8235447C;
	// stw r11,132(r30)
	REX_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235fba8
	ctx.lr = 0x8235447C;
	sub_8235FBA8(ctx, base);
loc_8235447C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82362008
	ctx.lr = 0x8235448C;
	sub_82362008(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236f5f8
	ctx.lr = 0x82354498;
	sub_8236F5F8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823544b8
	if (!ctx.cr6.eq) goto loc_823544B8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,645
	ctx.r7.s64 = 645;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823544B8;
	sub_82260F30(ctx, base);
loc_823544B8:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_823544BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354138
	if (!ctx.cr6.eq) goto loc_82354138;
	// lwz r18,8(r18)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,8(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354130
	if (!ctx.cr6.eq) goto loc_82354130;
loc_823544D8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r6,144(r23)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r23.u32 + 144);
	// lwz r5,140(r23)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r23.u32 + 140);
	// addi r4,r11,-27816
	ctx.r4.s64 = ctx.r11.s64 + -27816;
	// lwz r3,0(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82113c30
	ctx.lr = 0x823544F0;
	sub_82113C30(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e418
	__restgprlr_16(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235C850) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8235c864
	if (ctx.cr6.eq) goto loc_8235C864;
	// stw r3,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
loc_8235C864:
	// stw r4,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r3,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235CA68) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// b 0x8215e640
	sub_8215E640(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235D188) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mulli r10,r4,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// addi r11,r11,4136
	ctx.r11.s64 = ctx.r11.s64 + 4136;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_8235D340) {
	REX_FUNC_PROLOGUE();
	// lwz r3,44(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d354
	if (!ctx.cr6.eq) goto loc_8235D354;
	// b 0x8235d2b0
	sub_8235D2B0(ctx, base);
	return;
loc_8235D354:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235d36c
	if (!ctx.cr6.eq) goto loc_8235D36C;
	// stw r5,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_8235D36C:
	// b 0x8235d2b0
	sub_8235D2B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235D878) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8235D880;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235d914
	if (!ctx.cr6.gt) goto loc_8235D914;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8235D8A8:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235d8c0
	if (!ctx.cr6.lt) goto loc_8235D8C0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8235d8c8
	goto loc_8235D8C8;
loc_8235D8C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8235D8C8;
	sub_8235CB28(ctx, base);
loc_8235D8C8:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x8235d8f0
	if (ctx.cr6.eq) goto loc_8235D8F0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235d8a8
	if (ctx.cr6.lt) goto loc_8235D8A8;
	// b 0x8235d914
	goto loc_8235D914;
loc_8235D8F0:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235d908
	if (!ctx.cr6.lt) goto loc_8235D908;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8235d910
	goto loc_8235D910;
loc_8235D908:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8235D910;
	sub_8235CB28(ctx, base);
loc_8235D910:
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
loc_8235D914:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235EE90) {
	REX_FUNC_PROLOGUE();
	// lbz r11,128(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235eec4
	if (ctx.cr6.eq) goto loc_8235EEC4;
	// lbz r11,129(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 129);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235eec4
	if (ctx.cr6.eq) goto loc_8235EEC4;
	// lbz r11,130(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8235eec4
	if (ctx.cr6.eq) goto loc_8235EEC4;
	// lbz r11,131(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 131);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8235EEC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235F868) {
	REX_FUNC_PROLOGUE();
	// lwz r11,956(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 956);
	// lwz r10,2152(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 2152);
	// subf r10,r10,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r10.u64;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235FD90) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// stw r4,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-26328
	ctx.r10.s64 = ctx.r10.s64 + -26328;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 1376);
	// stw r10,224(r3)
	REX_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lwz r10,1376(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 1376);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1376(r5)
	REX_STORE_U32(ctx.r5.u32 + 1376, ctx.r10.u32);
	// stw r11,892(r3)
	REX_STORE_U32(ctx.r3.u32 + 892, ctx.r11.u32);
	// stw r11,948(r3)
	REX_STORE_U32(ctx.r3.u32 + 948, ctx.r11.u32);
	// stw r5,952(r3)
	REX_STORE_U32(ctx.r3.u32 + 952, ctx.r5.u32);
	// stw r11,956(r3)
	REX_STORE_U32(ctx.r3.u32 + 956, ctx.r11.u32);
	// stw r9,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// bl 0x8235f1e0
	ctx.lr = 0x8235FDF0;
	sub_8235F1E0(ctx, base);
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

DEFINE_REX_FUNC(sub_82360598) {
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
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235fd90
	ctx.lr = 0x823605BC;
	sub_8235FD90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-11520
	ctx.r11.s64 = ctx.r11.s64 + -11520;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x8233f0e8
	ctx.lr = 0x823605E8;
	sub_8233F0E8(ctx, base);
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

DEFINE_REX_FUNC(sub_82361198) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x823611A0;
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
	ctx.lr = 0x823611BC;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x823611dc
	if (ctx.cr0.eq) goto loc_823611DC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82360598
	ctx.lr = 0x823611D8;
	sub_82360598(ctx, base);
	// b 0x823611e0
	goto loc_823611E0;
loc_823611DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823611E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82362138) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82362140;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-9116
	ctx.r11.s64 = ctx.r11.s64 + -9116;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// bl 0x8235c890
	ctx.lr = 0x82362174;
	sub_8235C890(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r9,1024
	ctx.r9.s64 = 1024;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,1388(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1388);
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,1388(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1388);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,1388(r11)
	REX_STORE_U32(ctx.r11.u32 + 1388, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r9,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r9,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r9.u32);
	// stw r30,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r30,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	REX_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// stb r30,124(r31)
	REX_STORE_U8(ctx.r31.u32 + 124, ctx.r30.u8);
	// stw r8,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r8.u32);
	// stw r30,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// lwz r27,1452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x823621DC;
	sub_82325520(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x823621fc
	if (ctx.cr0.eq) goto loc_823621FC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x823621F8;
	sub_8233EE50(ctx, base);
	// b 0x82362200
	goto loc_82362200;
loc_823621FC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82362200:
	// stw r29,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x82362218;
	sub_82325520(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x82362238
	if (ctx.cr0.eq) goto loc_82362238;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x82362234;
	sub_8233EE50(ctx, base);
	// b 0x8236223c
	goto loc_8236223C;
loc_82362238:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8236223C:
	// stw r29,92(r31)
	REX_STORE_U32(ctx.r31.u32 + 92, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x82362254;
	sub_82325520(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x82362274
	if (ctx.cr0.eq) goto loc_82362274;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x82362270;
	sub_8233EE50(ctx, base);
	// b 0x82362278
	goto loc_82362278;
loc_82362274:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82362278:
	// stw r29,88(r31)
	REX_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x82362290;
	sub_82325520(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x823622b0
	if (ctx.cr0.eq) goto loc_823622B0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x823622AC;
	sub_8233EE50(ctx, base);
	// b 0x823622b4
	goto loc_823622B4;
loc_823622B0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823622B4:
	// stw r29,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r27,1452(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x823622CC;
	sub_82325520(ctx, base);
	// addic. r29,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r29.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x823622ec
	if (ctx.cr0.eq) goto loc_823622EC;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,1452(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x8233ee50
	ctx.lr = 0x823622E8;
	sub_8233EE50(ctx, base);
	// b 0x823622f0
	goto loc_823622F0;
loc_823622EC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823622F0:
	// stw r29,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,1452(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325520
	ctx.lr = 0x82362308;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x82362324
	if (ctx.cr0.eq) goto loc_82362324;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82360210
	ctx.lr = 0x82362320;
	sub_82360210(ctx, base);
	// b 0x82362328
	goto loc_82362328;
loc_82362324:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82362328:
	// stw r3,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r29,1452(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82325520
	ctx.lr = 0x82362340;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// beq 0x8236235c
	if (ctx.cr0.eq) goto loc_8236235C;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82360268
	ctx.lr = 0x82362358;
	sub_82360268(ctx, base);
	// b 0x82362360
	goto loc_82362360;
loc_8236235C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82362360:
	// stw r3,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// bl 0x8235c918
	ctx.lr = 0x82362370;
	sub_8235C918(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,116(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// bl 0x8235c8f0
	ctx.lr = 0x8236237C;
	sub_8235C8F0(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r31,948(r11)
	REX_STORE_U32(ctx.r11.u32 + 948, ctx.r31.u32);
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// stw r31,948(r11)
	REX_STORE_U32(ctx.r11.u32 + 948, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236F968) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8236F970;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236F990;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8236fae8
	if (!ctx.cr0.eq) goto loc_8236FAE8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236f5f8
	ctx.lr = 0x8236F9A4;
	sub_8236F5F8(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r27,r10,5432
	ctx.r27.s64 = ctx.r10.s64 + 5432;
	// bne cr6,0x8236f9dc
	if (!ctx.cr6.eq) goto loc_8236F9DC;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5568
	ctx.r5.s64 = ctx.r11.s64 + 5568;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236F9DC;
	sub_82260F30(ctx, base);
loc_8236F9DC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236f9f4
	if (!ctx.cr6.eq) goto loc_8236F9F4;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	REX_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
	// b 0x8236fa28
	goto loc_8236FA28;
loc_8236F9F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8236fa28
	if (ctx.cr6.eq) goto loc_8236FA28;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8236fa28
	if (ctx.cr6.eq) goto loc_8236FA28;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5588
	ctx.r5.s64 = ctx.r11.s64 + 5588;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236FA28;
	sub_82260F30(ctx, base);
loc_8236FA28:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-32192
	ctx.r10.s64 = -2109734912;
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// addi r10,r10,-5640
	ctx.r10.s64 = ctx.r10.s64 + -5640;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236fa78
	if (ctx.cr0.eq) goto loc_8236FA78;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x8236fa68
	if (!ctx.cr6.gt) goto loc_8236FA68;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5548
	ctx.r5.s64 = ctx.r11.s64 + 5548;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236FA68;
	sub_82260F30(ctx, base);
loc_8236FA68:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,5
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(5));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x8236faac
	goto loc_8236FAAC;
loc_8236FA78:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x8236faa0
	if (!ctx.cr6.gt) goto loc_8236FAA0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5528
	ctx.r5.s64 = ctx.r11.s64 + 5528;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236FAA0;
	sub_82260F30(ctx, base);
loc_8236FAA0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(5));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8236FAAC:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,5176
	ctx.r10.s64 = ctx.r10.s64 + 5176;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8236fae8
	if (!ctx.cr6.eq) goto loc_8236FAE8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,5416
	ctx.r5.s64 = ctx.r11.s64 + 5416;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8236FAE8;
	sub_82260F30(ctx, base);
loc_8236FAE8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82372820) {
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
	// addi r4,r11,-13284
	ctx.r4.s64 = ctx.r11.s64 + -13284;
	// bl 0x823715e0
	ctx.lr = 0x82372840;
	sub_823715E0(ctx, base);
	// lbz r11,8232(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 8232);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82372854
	if (!ctx.cr0.eq) goto loc_82372854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82372758
	ctx.lr = 0x82372854;
	sub_82372758(ctx, base);
loc_82372854:
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

DEFINE_REX_FUNC(sub_823747B8) {
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
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// li r5,504
	ctx.r5.s64 = 504;
	// addi r31,r11,32664
	ctx.r31.s64 = ctx.r11.s64 + 32664;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x8215ec60
	ctx.lr = 0x823747E0;
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
	ctx.lr = 0x823747F4;
	sub_8215E640(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8215ec60
	ctx.lr = 0x82374804;
	sub_8215EC60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
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

