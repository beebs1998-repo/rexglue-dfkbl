#include "dfkbl_funcs.30.h"

DEFINE_REX_FUNC(sub_82091548) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094088
	sub_82094088(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820917F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820949e0
	sub_820949E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091938) {
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
	ctx.lr = 0x82091950;
	sub_8209B8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x820959a0
	ctx.lr = 0x82091958;
	sub_820959A0(ctx, base);
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

DEFINE_REX_FUNC(sub_820920A8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096568
	sub_82096568(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092500) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096988
	sub_82096988(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820927E8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096a90
	sub_82096A90(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820929B0) {
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
	ctx.lr = 0x820929C8;
	sub_8209B8B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82097200
	ctx.lr = 0x820929D0;
	sub_82097200(ctx, base);
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

DEFINE_REX_FUNC(sub_82093FE8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,6056(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 6056);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094120) {
	REX_FUNC_PROLOGUE();
	// lwz r11,6512(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 6512);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r4,6180(r10)
	REX_STORE_U32(ctx.r10.u32 + 6180, ctx.r4.u32);
	// lwz r9,6512(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 6512);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r11,r3
	ctx.r8.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r5,6184(r8)
	REX_STORE_U32(ctx.r8.u32 + 6184, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094BC8) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209c950
	sub_8209C950(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82094FC8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,6536
	ctx.r3.s64 = ctx.r3.s64 + 6536;
	// b 0x820ab168
	sub_820AB168(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095518) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82095520;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,23704
	ctx.r3.s64 = ctx.r3.s64 + 23704;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x820a6db0
	ctx.lr = 0x8209554C;
	sub_820A6DB0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82095580
	if (ctx.cr6.eq) goto loc_82095580;
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// bl 0x820b31e8
	ctx.lr = 0x82095574;
	sub_820B31E8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_82095580:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820968A8) {
	REX_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r3,r3,23704
	ctx.r3.s64 = ctx.r3.s64 + 23704;
	// b 0x820a71a0
	sub_820A71A0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096978) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-18356
	ctx.r3.s64 = ctx.r3.s64 + -18356;
	// b 0x820afb38
	sub_820AFB38(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096F50) {
	REX_FUNC_PROLOGUE();
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r11,r11,5176
	ctx.r11.u64 = ctx.r11.u64 | 5176;
	// stwx r4,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82097210) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82097218;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// bl 0x8209c128
	ctx.lr = 0x82097230;
	sub_8209C128(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820974f8
	if (ctx.cr6.eq) goto loc_820974F8;
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// ori r9,r11,5512
	ctx.r9.u64 = ctx.r11.u64 | 5512;
	// ori r8,r10,5288
	ctx.r8.u64 = ctx.r10.u64 | 5288;
	// lis r7,238
	ctx.r7.s64 = 15597568;
	// lis r6,238
	ctx.r6.s64 = 15597568;
	// ori r5,r7,5224
	ctx.r5.u64 = ctx.r7.u64 | 5224;
	// lwzx r4,r31,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// ori r11,r6,5248
	ctx.r11.u64 = ctx.r6.u64 | 5248;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// lis r9,238
	ctx.r9.s64 = 15597568;
	// ori r7,r10,5252
	ctx.r7.u64 = ctx.r10.u64 | 5252;
	// ori r6,r9,5236
	ctx.r6.u64 = ctx.r9.u64 | 5236;
	// stw r4,2404(r3)
	REX_STORE_U32(ctx.r3.u32 + 2404, ctx.r4.u32);
	// lis r4,238
	ctx.r4.s64 = 15597568;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// ori r9,r4,5240
	ctx.r9.u64 = ctx.r4.u64 | 5240;
	// ori r4,r10,5244
	ctx.r4.u64 = ctx.r10.u64 | 5244;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// lis r30,238
	ctx.r30.s64 = 15597568;
	// ori r10,r10,5360
	ctx.r10.u64 = ctx.r10.u64 | 5360;
	// ori r30,r30,5296
	ctx.r30.u64 = ctx.r30.u64 | 5296;
	// lis r29,238
	ctx.r29.s64 = 15597568;
	// lis r28,238
	ctx.r28.s64 = 15597568;
	// ori r29,r29,5320
	ctx.r29.u64 = ctx.r29.u64 | 5320;
	// ori r28,r28,5324
	ctx.r28.u64 = ctx.r28.u64 | 5324;
	// lis r27,238
	ctx.r27.s64 = 15597568;
	// lis r26,238
	ctx.r26.s64 = 15597568;
	// ori r27,r27,5308
	ctx.r27.u64 = ctx.r27.u64 | 5308;
	// ori r26,r26,5312
	ctx.r26.u64 = ctx.r26.u64 | 5312;
	// lis r25,238
	ctx.r25.s64 = 15597568;
	// lis r24,238
	ctx.r24.s64 = 15597568;
	// lis r23,238
	ctx.r23.s64 = 15597568;
	// ori r25,r25,5316
	ctx.r25.u64 = ctx.r25.u64 | 5316;
	// lwzx r8,r31,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// ori r24,r24,5432
	ctx.r24.u64 = ctx.r24.u64 | 5432;
	// ori r23,r23,5368
	ctx.r23.u64 = ctx.r23.u64 | 5368;
	// stw r8,2408(r3)
	REX_STORE_U32(ctx.r3.u32 + 2408, ctx.r8.u32);
	// lwzx r5,r31,r5
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// stw r5,2376(r3)
	REX_STORE_U32(ctx.r3.u32 + 2376, ctx.r5.u32);
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2456(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2456, temp.u32);
	// lfsx f13,r31,r7
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,2472(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2472, temp.u32);
	// lwzx r11,r31,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,2520(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 2520, temp.u32);
	// lwzx r7,r31,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,2488(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 2488, temp.u32);
	// lwzx r5,r31,r4
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f6,80(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// stfs f4,2504(r3)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r3.u32 + 2504, temp.u32);
	// lwzx r11,r31,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r11,2412(r3)
	REX_STORE_U32(ctx.r3.u32 + 2412, ctx.r11.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// stw r10,2380(r3)
	REX_STORE_U32(ctx.r3.u32 + 2380, ctx.r10.u32);
	// lfsx f3,r31,r29
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,2460(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 2460, temp.u32);
	// lfsx f2,r31,r28
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,2476(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 2476, temp.u32);
	// lwzx r9,r31,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,2524(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2524, temp.u32);
	// lwzx r7,r31,r26
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r26.u32);
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// lis r6,238
	ctx.r6.s64 = 15597568;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lis r5,238
	ctx.r5.s64 = 15597568;
	// ori r11,r6,5392
	ctx.r11.u64 = ctx.r6.u64 | 5392;
	// ori r9,r5,5396
	ctx.r9.u64 = ctx.r5.u64 | 5396;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// lis r7,238
	ctx.r7.s64 = 15597568;
	// ori r8,r10,5380
	ctx.r8.u64 = ctx.r10.u64 | 5380;
	// ori r5,r7,5384
	ctx.r5.u64 = ctx.r7.u64 | 5384;
	// lis r6,238
	ctx.r6.s64 = 15597568;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// ori r4,r6,5388
	ctx.r4.u64 = ctx.r6.u64 | 5388;
	// ori r6,r10,5504
	ctx.r6.u64 = ctx.r10.u64 | 5504;
	// lis r7,238
	ctx.r7.s64 = 15597568;
	// lis r30,238
	ctx.r30.s64 = 15597568;
	// ori r10,r7,5440
	ctx.r10.u64 = ctx.r7.u64 | 5440;
	// lis r7,238
	ctx.r7.s64 = 15597568;
	// ori r30,r30,5468
	ctx.r30.u64 = ctx.r30.u64 | 5468;
	// ori r7,r7,5464
	ctx.r7.u64 = ctx.r7.u64 | 5464;
	// lis r29,238
	ctx.r29.s64 = 15597568;
	// lis r28,238
	ctx.r28.s64 = 15597568;
	// ori r29,r29,5452
	ctx.r29.u64 = ctx.r29.u64 | 5452;
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r27,238
	ctx.r27.s64 = 15597568;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// ori r28,r28,5456
	ctx.r28.u64 = ctx.r28.u64 | 5456;
	// ori r27,r27,5460
	ctx.r27.u64 = ctx.r27.u64 | 5460;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,2492(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 2492, temp.u32);
	// lwzx r26,r31,r25
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// extsw r26,r26
	ctx.r26.s64 = ctx.r26.s32;
	// std r26,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r26.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,2508(r3)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r3.u32 + 2508, temp.u32);
	// lwzx r26,r31,r24
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// stw r26,2416(r3)
	REX_STORE_U32(ctx.r3.u32 + 2416, ctx.r26.u32);
	// lwzx r26,r31,r23
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// stw r26,2384(r3)
	REX_STORE_U32(ctx.r3.u32 + 2384, ctx.r26.u32);
	// lfsx f6,r31,r11
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,2464(r3)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r3.u32 + 2464, temp.u32);
	// lfsx f5,r31,r9
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,2480(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 2480, temp.u32);
	// lwzx r11,r31,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,2528(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 2528, temp.u32);
	// lwzx r8,r31,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,2496(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2496, temp.u32);
	// lwzx r4,r31,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,2512(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 2512, temp.u32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// stw r9,2420(r3)
	REX_STORE_U32(ctx.r3.u32 + 2420, ctx.r9.u32);
	// lwzx r8,r31,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// stw r8,2388(r3)
	REX_STORE_U32(ctx.r3.u32 + 2388, ctx.r8.u32);
	// lfsx f9,r31,r7
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,2468(r3)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r3.u32 + 2468, temp.u32);
	// lfsx f8,r31,r30
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,2484(r3)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r3.u32 + 2484, temp.u32);
	// lwzx r7,r31,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,2532(r3)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r3.u32 + 2532, temp.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r4,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,2500(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 2500, temp.u32);
	// lwzx r11,r31,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,2516(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2516, temp.u32);
loc_820974F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A2378) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x820a1cb8
	ctx.lr = 0x820A2394;
	sub_820A1CB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A2F68) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lbz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lfs f12,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// lfs f11,4640(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4640);
	ctx.f11.f64 = double(temp.f32);
	// fmr f9,f12
	ctx.f9.f64 = ctx.f12.f64;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// beq cr6,0x820a304c
	if (ctx.cr6.eq) goto loc_820A304C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lfs f8,2108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2108);
	ctx.f8.f64 = double(temp.f32);
loc_820A2FA8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,10
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 10, ctx.xer);
	// bne cr6,0x820a2fe4
	if (!ctx.cr6.eq) goto loc_820A2FE4;
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fadds f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x820a2fd4
	if (!ctx.cr6.lt) goto loc_820A2FD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820a2fd4
	if (ctx.cr6.eq) goto loc_820A2FD4;
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_820A2FD4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// b 0x820a3040
	goto loc_820A3040;
loc_820A2FE4:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 32, ctx.xer);
	// bne cr6,0x820a3000
	if (!ctx.cr6.eq) goto loc_820A3000;
	// fadds f0,f0,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f8.f64));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820a3040
	goto loc_820A3040;
loc_820A3000:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x820a3010
	if (ctx.cr6.lt) goto loc_820A3010;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x820a3020
	if (!ctx.cr6.gt) goto loc_820A3020;
loc_820A3010:
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// beq cr6,0x820a3020
	if (ctx.cr6.eq) goto loc_820A3020;
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// bne cr6,0x820a3024
	if (!ctx.cr6.eq) goto loc_820A3024;
loc_820A3020:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_820A3024:
	// fadds f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x820a3034
	if (!ctx.cr6.lt) goto loc_820A3034;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_820A3034:
	// fcmpu cr6,f9,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f9.f64, ctx.f13.f64);
	// bge cr6,0x820a3040
	if (!ctx.cr6.lt) goto loc_820A3040;
	// fmr f9,f13
	ctx.f9.f64 = ctx.f13.f64;
loc_820A3040:
	// lbzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820a2fa8
	if (!ctx.cr6.eq) goto loc_820A2FA8;
loc_820A304C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820a305c
	if (ctx.cr6.eq) goto loc_820A305C;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f13,r11,r5
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
loc_820A305C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// fadds f1,f10,f11
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// stfs f9,0(r7)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A3960) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4536(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4536);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A3D34) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4656(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4656);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A472C) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// fmr f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f5.f64;
	// b 0x820a4740
	goto loc_820A4740;
loc_820A4740:
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
	// bne cr6,0x820a4554
	// ERROR: conditional branch to unknown address 0x820A4554
	if (!ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820A4750 to 0x820A4554");
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A6F00) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x820A6F08;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820a70cc
	if (!ctx.cr6.eq) goto loc_820A70CC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bl 0x820a6e40
	ctx.lr = 0x820A6F28;
	sub_820A6E40(ctx, base);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r10,-12816
	ctx.r8.s64 = ctx.r10.s64 + -12816;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// lis r9,-32200
	ctx.r9.s64 = -2110259200;
	// lis r8,-32198
	ctx.r8.s64 = -2110128128;
	// lis r7,-32200
	ctx.r7.s64 = -2110259200;
	// lis r6,-32198
	ctx.r6.s64 = -2110128128;
	// lis r5,-32200
	ctx.r5.s64 = -2110259200;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r31,706
	ctx.r31.s64 = 706;
	// addi r21,r28,23400
	ctx.r21.s64 = ctx.r28.s64 + 23400;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r20,r11,-14544
	ctx.r20.s64 = ctx.r11.s64 + -14544;
	// addi r27,r10,-14616
	ctx.r27.s64 = ctx.r10.s64 + -14616;
	// addi r26,r9,23280
	ctx.r26.s64 = ctx.r9.s64 + 23280;
	// addi r25,r8,-14688
	ctx.r25.s64 = ctx.r8.s64 + -14688;
	// addi r24,r7,23208
	ctx.r24.s64 = ctx.r7.s64 + 23208;
	// addi r23,r6,-14760
	ctx.r23.s64 = ctx.r6.s64 + -14760;
	// addi r22,r5,23136
	ctx.r22.s64 = ctx.r5.s64 + 23136;
loc_820A6F84:
	// addi r4,r31,-706
	ctx.r4.s64 = ctx.r31.s64 + -706;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x820918b8
	ctx.lr = 0x820A6F90;
	sub_820918B8(ctx, base);
	// extsb r29,r3
	ctx.r29.s64 = ctx.r3.s8;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820a7018
	if (ctx.cr6.gt) goto loc_820A7018;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820a7018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A7018;
	// bdzf 4*cr6+eq,0x820a6fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A6FD0;
	// bdzf 4*cr6+eq,0x820a6fe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A6FE8;
	// bne cr6,0x820a7000
	if (!ctx.cr6.eq) goto loc_820A7000;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82092048
	ctx.lr = 0x820A6FC0;
	sub_82092048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a7018
	if (!ctx.cr6.eq) goto loc_820A7018;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820a7018
	goto loc_820A7018;
loc_820A6FD0:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82092048
	ctx.lr = 0x820A6FD8;
	sub_82092048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a7018
	if (!ctx.cr6.eq) goto loc_820A7018;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820a7018
	goto loc_820A7018;
loc_820A6FE8:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82092048
	ctx.lr = 0x820A6FF0;
	sub_82092048(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820a7018
	if (!ctx.cr6.eq) goto loc_820A7018;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x820a7018
	goto loc_820A7018;
loc_820A7000:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82092048
	ctx.lr = 0x820A7008;
	sub_82092048(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r8,r29
	ctx.r29.u64 = ctx.r8.u64 & ctx.r29.u64;
loc_820A7018:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// stw r29,-64(r21)
	REX_STORE_U32(ctx.r21.u32 + -64, ctx.r29.u32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820a7064
	if (ctx.cr6.gt) goto loc_820A7064;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820a704c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A704C;
	// bdzf 4*cr6+eq,0x820a7058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A7058;
	// bdzf 4*cr6+eq,0x820a7058
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820A7058;
	// bne cr6,0x820a7058
	if (!ctx.cr6.eq) goto loc_820A7058;
	// lwzx r11,r30,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// lwzx r29,r30,r24
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r24.u32);
	// b 0x820a706c
	goto loc_820A706C;
loc_820A704C:
	// lwzx r11,r30,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// lwzx r29,r30,r26
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// b 0x820a706c
	goto loc_820A706C;
loc_820A7058:
	// lwzx r11,r30,r20
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r20.u32);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x820a70b0
	goto loc_820A70B0;
loc_820A7064:
	// lwzx r11,r30,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r29,r30,r22
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
loc_820A706C:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,384(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 384);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x820A708C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,392(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 392);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820A70B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820A70B0:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r10,r31,-706
	ctx.r10.s64 = ctx.r31.s64 + -706;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// stwu r11,4(r21)
	ea = 4 + ctx.r21.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r21.u32 = ea;
	// blt cr6,0x820a6f84
	if (ctx.cr6.lt) goto loc_820A6F84;
loc_820A70CC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AE490) {
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
	// addi r3,r3,112
	ctx.r3.s64 = ctx.r3.s64 + 112;
	// bl 0x820acd50
	ctx.lr = 0x820AE4A4;
	sub_820ACD50(ctx, base);
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

DEFINE_REX_FUNC(sub_820AE970) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// beq cr6,0x820ae98c
	if (ctx.cr6.eq) goto loc_820AE98C;
	// cmpwi cr6,r4,39
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 39, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_820AE98C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEAE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,12,18,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEF08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x820AEF10;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8215eb8c
	ctx.lr = 0x820AEF18;
	__savefpr_21(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,36(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r22,0
	ctx.r22.s64 = 0;
	// lfs f0,40(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,44(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f11,48(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// mr r19,r22
	ctx.r19.u64 = ctx.r22.u64;
	// lfs f10,52(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f29,f12,f13
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f23,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f23.f64 = double(temp.f32);
	// fmuls f28,f11,f0
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,56(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f25,f10,f13
	ctx.f25.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fcmpu cr6,f13,f23
	ctx.cr6.compare(ctx.f13.f64, ctx.f23.f64);
	// fmuls f24,f9,f0
	ctx.f24.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// bge cr6,0x820aef6c
	if (!ctx.cr6.lt) goto loc_820AEF6C;
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x820aef6c
	if (!ctx.cr6.lt) goto loc_820AEF6C;
	// li r19,1
	ctx.r19.s64 = 1;
loc_820AEF6C:
	// li r3,9
	ctx.r3.s64 = 9;
	// bl 0x820924d8
	ctx.lr = 0x820AEF74;
	sub_820924D8(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lfs f21,-30484(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -30484);
	ctx.f21.f64 = double(temp.f32);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// lfs f26,2096(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2096);
	ctx.f26.f64 = double(temp.f32);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// lfs f22,2104(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2104);
	ctx.f22.f64 = double(temp.f32);
	// ori r24,r8,4112
	ctx.r24.u64 = ctx.r8.u64 | 4112;
	// ori r21,r7,24592
	ctx.r21.u64 = ctx.r7.u64 | 24592;
	// lis r23,-32189
	ctx.r23.s64 = -2109538304;
loc_820AEFA8:
	// add r11,r27,r24
	ctx.r11.u64 = ctx.r27.u64 + ctx.r24.u64;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r26,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x820af6ec
	if (!ctx.cr6.gt) goto loc_820AF6EC;
	// rlwinm r11,r27,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// rlwinm r10,r11,10,0,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// add r25,r10,r21
	ctx.r25.u64 = ctx.r10.u64 + ctx.r21.u64;
loc_820AEFD0:
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r29
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820af6dc
	if (!ctx.cr6.eq) goto loc_820AF6DC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af018
	if (ctx.cr6.eq) goto loc_820AF018;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x820af024
	if (!ctx.cr6.eq) goto loc_820AF024;
loc_820AF018:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
loc_820AF024:
	// lhz r4,22(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 22);
	// cmplwi cr6,r4,36
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 36, ctx.xer);
	// bge cr6,0x820af6dc
	if (!ctx.cr6.lt) goto loc_820AF6DC;
	// lwz r3,-30476(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + -30476);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF044;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
	// fmr f27,f22
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f22.f64;
	// cmpwi cr6,r19,1
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 1, ctx.xer);
	// bne cr6,0x820af070
	if (!ctx.cr6.eq) goto loc_820AF070;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x820af074
	if (!ctx.cr6.eq) goto loc_820AF074;
loc_820AF070:
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
loc_820AF074:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF088;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af0b0
	if (ctx.cr6.eq) goto loc_820AF0B0;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x820af0b0
	if (ctx.cr6.eq) goto loc_820AF0B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x820af0bc
	goto loc_820AF0BC;
loc_820AF0B0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_820AF0BC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x820AF0CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af0f4
	if (ctx.cr6.eq) goto loc_820AF0F4;
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
	ctx.lr = 0x820AF0F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF0F4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af11c
	if (ctx.cr6.eq) goto loc_820AF11C;
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
	ctx.lr = 0x820AF11C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF11C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x820af254
	if (ctx.cr6.eq) goto loc_820AF254;
	// lhz r4,66(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 66);
	// bctrl 
	ctx.lr = 0x820AF144;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820af164
	if (ctx.cr6.eq) goto loc_820AF164;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x820af168
	goto loc_820AF168;
loc_820AF164:
	// lfs f27,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
loc_820AF168:
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af230
	if (ctx.cr6.eq) goto loc_820AF230;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x820af1cc
	if (ctx.cr6.gt) goto loc_820AF1CC;
	// beq cr6,0x820af1a8
	if (ctx.cr6.eq) goto loc_820AF1A8;
	// cmpwi cr6,r11,-180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -180, ctx.xer);
	// beq cr6,0x820af20c
	if (ctx.cr6.eq) goto loc_820AF20C;
	// cmpwi cr6,r11,-90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -90, ctx.xer);
	// b 0x820af1d8
	goto loc_820AF1D8;
loc_820AF1A8:
	// lfs f12,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f0,f29,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, -ctx.f12.f64)));
	// lfs f10,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f13,f28,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, -ctx.f9.f64)));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f31,f10,f8
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f30,f7,f9
	ctx.f30.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// b 0x820af238
	goto loc_820AF238;
loc_820AF1CC:
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// beq cr6,0x820af20c
	if (ctx.cr6.eq) goto loc_820AF20C;
	// cmpwi cr6,r11,270
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 270, ctx.xer);
loc_820AF1D8:
	// lfs f12,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// beq cr6,0x820af1ec
	if (ctx.cr6.eq) goto loc_820AF1EC;
	// fmuls f30,f13,f28
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmsubs f31,f0,f29,f12
	ctx.f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, -ctx.f12.f64)));
	// b 0x820af238
	goto loc_820AF238;
loc_820AF1EC:
	// fmsubs f11,f0,f29,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, -ctx.f12.f64)));
	// lfs f10,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f13,f28,f10
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, -ctx.f10.f64)));
	// fsubs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f9.f64));
	// fadds f31,f8,f9
	ctx.f31.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f30,f10,f7
	ctx.f30.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// b 0x820af238
	goto loc_820AF238;
loc_820AF20C:
	// lfs f12,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f0,f29,f12
	ctx.f11.f64 = double(float(std::fma(ctx.f0.f64, ctx.f29.f64, -ctx.f12.f64)));
	// lfs f10,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// fmsubs f8,f13,f28,f9
	ctx.f8.f64 = double(float(std::fma(ctx.f13.f64, ctx.f28.f64, -ctx.f9.f64)));
	// fsubs f7,f11,f10
	ctx.f7.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f30,f9,f8
	ctx.f30.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f31,f10,f7
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// b 0x820af238
	goto loc_820AF238;
loc_820AF230:
	// lfs f31,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f30.f64 = double(temp.f32);
loc_820AF238:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x820af388
	goto loc_820AF388;
loc_820AF254:
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x820AF25C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r9,r10,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x820af298
	if (ctx.cr6.eq) goto loc_820AF298;
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,76(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,44(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f8,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f31,f11,f26,f8
	ctx.f31.f64 = double(float(std::fma(ctx.f11.f64, ctx.f26.f64, ctx.f8.f64)));
	// fmadds f30,f9,f26,f7
	ctx.f30.f64 = double(float(std::fma(ctx.f9.f64, ctx.f26.f64, ctx.f7.f64)));
	// b 0x820af2b0
	goto loc_820AF2B0;
loc_820AF298:
	// lfs f0,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,48(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,44(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f31,f0,f26,f13
	ctx.f31.f64 = double(float(std::fma(ctx.f0.f64, ctx.f26.f64, ctx.f13.f64)));
	// lfs f11,52(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f30,f12,f26,f11
	ctx.f30.f64 = double(float(std::fma(ctx.f12.f64, ctx.f26.f64, ctx.f11.f64)));
loc_820AF2B0:
	// rlwinm r11,r10,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af408
	if (ctx.cr6.eq) goto loc_820AF408;
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// bgt cr6,0x820af2e8
	if (ctx.cr6.gt) goto loc_820AF2E8;
	// beq cr6,0x820af328
	if (ctx.cr6.eq) goto loc_820AF328;
	// cmpwi cr6,r11,-180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -180, ctx.xer);
	// beq cr6,0x820af328
	if (ctx.cr6.eq) goto loc_820AF328;
	// cmpwi cr6,r11,-90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -90, ctx.xer);
	// b 0x820af2ec
	goto loc_820AF2EC;
loc_820AF2E8:
	// cmpwi cr6,r11,270
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 270, ctx.xer);
loc_820AF2EC:
	// beq cr6,0x820af328
	if (ctx.cr6.eq) goto loc_820AF328;
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af43c
	if (ctx.cr6.eq) goto loc_820AF43C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f27,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF318;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f31,f31,f29,f0
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// b 0x820af388
	goto loc_820AF388;
loc_820AF328:
	// fmr f1,f21
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x820f1468
	ctx.lr = 0x820AF330;
	sub_820F1468(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820af34c
	if (ctx.cr6.eq) goto loc_820AF34C;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// fadds f27,f0,f1
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// b 0x820af350
	goto loc_820AF350;
loc_820AF34C:
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
loc_820AF350:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF368:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f31,f29,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// lfs f12,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f30,f28,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f30.f64, ctx.f28.f64, -ctx.f11.f64)));
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f30,f11,f10
	ctx.f30.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f31,f12,f9
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
loc_820AF388:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f3,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF3A8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,20,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820af564
	if (ctx.cr6.eq) goto loc_820AF564;
	// fcmpu cr6,f27,f22
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f22.f64);
	// beq cr6,0x820af564
	if (ctx.cr6.eq) goto loc_820AF564;
	// lfs f13,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x820af510
	if (ctx.cr6.eq) goto loc_820AF510;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x820af510
	if (!ctx.cr6.gt) goto loc_820AF510;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fsubs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820af514
	goto loc_820AF514;
loc_820AF408:
	// rlwinm r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// beq cr6,0x820af44c
	if (ctx.cr6.eq) goto loc_820AF44C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af43c
	if (ctx.cr6.eq) goto loc_820AF43C;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f27,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f27.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF43C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF43C:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f31,f31,f29,f0
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// b 0x820af388
	goto loc_820AF388;
loc_820AF44C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af464
	if (ctx.cr6.eq) goto loc_820AF464;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fadds f27,f0,f13
	ctx.f27.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// b 0x820af468
	goto loc_820AF468;
loc_820AF464:
	// lfs f27,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f27.f64 = double(temp.f32);
loc_820AF468:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF480;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// bgt cr6,0x820af4d0
	if (ctx.cr6.gt) goto loc_820AF4D0;
	// beq cr6,0x820af4ac
	if (ctx.cr6.eq) goto loc_820AF4AC;
	// cmpwi cr6,r11,-180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -180, ctx.xer);
	// beq cr6,0x820af368
	if (ctx.cr6.eq) goto loc_820AF368;
	// cmpwi cr6,r11,-90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -90, ctx.xer);
	// b 0x820af4dc
	goto loc_820AF4DC;
loc_820AF4AC:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f31,f29,f0
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// lfs f12,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f30,f28,f11
	ctx.f10.f64 = double(float(std::fma(ctx.f30.f64, ctx.f28.f64, -ctx.f11.f64)));
	// fsubs f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f31,f12,f10
	ctx.f31.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fadds f30,f9,f11
	ctx.f30.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// b 0x820af388
	goto loc_820AF388;
loc_820AF4D0:
	// cmpwi cr6,r11,180
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 180, ctx.xer);
	// beq cr6,0x820af368
	if (ctx.cr6.eq) goto loc_820AF368;
	// cmpwi cr6,r11,270
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 270, ctx.xer);
loc_820AF4DC:
	// lfs f0,28(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// beq cr6,0x820af4f0
	if (ctx.cr6.eq) goto loc_820AF4F0;
	// fmuls f30,f30,f28
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// fmsubs f31,f31,f29,f0
	ctx.f31.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// b 0x820af388
	goto loc_820AF388;
loc_820AF4F0:
	// fmsubs f13,f31,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(std::fma(ctx.f31.f64, ctx.f29.f64, -ctx.f0.f64)));
	// lfs f12,16(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f10,f30,f28,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f30.f64, ctx.f28.f64, -ctx.f12.f64)));
	// fsubs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fadds f31,f10,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 + ctx.f11.f64));
	// fsubs f30,f12,f9
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f9.f64));
	// b 0x820af388
	goto loc_820AF388;
loc_820AF510:
	// fsubs f1,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
loc_820AF514:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f30
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x820af55c
	if (ctx.cr6.eq) goto loc_820AF55C;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x820af55c
	if (!ctx.cr6.gt) goto loc_820AF55C;
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fsubs f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x820af56c
	goto loc_820AF56C;
loc_820AF55C:
	// fsubs f2,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// b 0x820af56c
	goto loc_820AF56C;
loc_820AF564:
	// lfs f2,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,24(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
loc_820AF56C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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
	// bctrl 
	ctx.lr = 0x820AF58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r10,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af690
	if (ctx.cr6.eq) goto loc_820AF690;
	// fcmpu cr6,f25,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f25.f64, ctx.f23.f64);
	// bne cr6,0x820af5ac
	if (!ctx.cr6.eq) goto loc_820AF5AC;
	// fcmpu cr6,f24,f23
	ctx.cr6.compare(ctx.f24.f64, ctx.f23.f64);
	// beq cr6,0x820af630
	if (ctx.cr6.eq) goto loc_820AF630;
loc_820AF5AC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820AF5C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmr f1,f22
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f22.f64;
	// bl 0x820f1468
	ctx.lr = 0x820AF5D0;
	sub_820F1468(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x820af5f4
	if (ctx.cr6.eq) goto loc_820AF5F4;
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x820f1468
	ctx.lr = 0x820AF5E0;
	sub_820F1468(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x820af5f4
	if (ctx.cr6.eq) goto loc_820AF5F4;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// b 0x820af5fc
	goto loc_820AF5FC;
loc_820AF5F4:
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
loc_820AF5FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x820af6d8
	if (ctx.cr6.eq) goto loc_820AF6D8;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f2
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// b 0x820af6d8
	goto loc_820AF6D8;
loc_820AF630:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af690
	if (ctx.cr6.eq) goto loc_820AF690;
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
	ctx.lr = 0x820AF650;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq cr6,0x820af684
	if (ctx.cr6.eq) goto loc_820AF684;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f25
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f1,f13,f24
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f24.f64));
	// b 0x820af6d8
	goto loc_820AF6D8;
loc_820AF684:
	// fmr f2,f25
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f25.f64;
	// fmr f1,f24
	ctx.f1.f64 = ctx.f24.f64;
	// b 0x820af6d8
	goto loc_820AF6D8;
loc_820AF690:
	// rlwinm r11,r10,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820af6b0
	if (ctx.cr6.eq) goto loc_820AF6B0;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,72(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f2,f0,f28
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f1,f13,f29
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f29.f64));
	// b 0x820af6c8
	goto loc_820AF6C8;
loc_820AF6B0:
	// fcmpu cr6,f29,f23
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f23.f64);
	// bne cr6,0x820af6c0
	if (!ctx.cr6.eq) goto loc_820AF6C0;
	// fcmpu cr6,f28,f23
	ctx.cr6.compare(ctx.f28.f64, ctx.f23.f64);
	// beq cr6,0x820af6dc
	if (ctx.cr6.eq) goto loc_820AF6DC;
loc_820AF6C0:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
loc_820AF6C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820AF6D8:
	// bctrl 
	ctx.lr = 0x820AF6DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820AF6DC:
	// lwzx r11,r26,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r29.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x820aefd0
	if (ctx.cr6.lt) goto loc_820AEFD0;
loc_820AF6EC:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r22,r26,r29
	REX_STORE_U32(ctx.r26.u32 + ctx.r29.u32, ctx.r22.u32);
	// cmpwi cr6,r27,36
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 36, ctx.xer);
	// blt cr6,0x820aefa8
	if (ctx.cr6.lt) goto loc_820AEFA8;
	// lis r11,5
	ctx.r11.s64 = 327680;
	// ori r10,r11,32828
	ctx.r10.u64 = ctx.r11.u64 | 32828;
	// stwx r22,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r22.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x8215ebd8
	ctx.lr = 0x820AF714;
	__restfpr_21(ctx, base);
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820AFBD4) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-21432
	ctx.r3.s64 = ctx.r11.s64 + -21432;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AFC34) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-21624
	ctx.r3.s64 = ctx.r11.s64 + -21624;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D36B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820D36B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r28,2
	ctx.r28.s64 = 2;
	// bl 0x82091938
	ctx.lr = 0x820D36CC;
	sub_82091938(ctx, base);
	// lbz r11,2372(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2372);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x820d3884
	if (ctx.cr6.gt) goto loc_820D3884;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14068
	ctx.r12.s64 = ctx.r12.s64 + 14068;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D372C;
	case 1:
		goto loc_820D3798;
	case 2:
		goto loc_820D37B8;
	case 3:
		goto loc_820D37C4;
	case 4:
		goto loc_820D37D4;
	case 5:
		goto loc_820D37E4;
	case 6:
		goto loc_820D37F4;
	case 7:
		goto loc_820D3804;
	case 8:
		goto loc_820D3814;
	case 9:
		goto loc_820D3884;
	case 10:
		goto loc_820D3884;
	case 11:
		goto loc_820D3884;
	case 12:
		goto loc_820D3884;
	case 13:
		goto loc_820D3824;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D372C:
	// addi r29,r31,112
	ctx.r29.s64 = ctx.r31.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a5d78
	ctx.lr = 0x820D3738;
	sub_820A5D78(ctx, base);
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820d374c
	if (ctx.cr6.lt) goto loc_820D374C;
	// beq cr6,0x820d376c
	if (ctx.cr6.eq) goto loc_820D376C;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D374C:
	// li r3,725
	ctx.r3.s64 = 725;
	// bl 0x820923d8
	ctx.lr = 0x820D3754;
	sub_820923D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820d3884
	if (ctx.cr6.eq) goto loc_820D3884;
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x820ca7b8
	ctx.lr = 0x820D3764;
	sub_820CA7B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d3884
	if (ctx.cr6.eq) goto loc_820D3884;
loc_820D376C:
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a5c70
	ctx.lr = 0x820D3778;
	sub_820A5C70(ctx, base);
	// lbz r11,2372(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2372);
	// stw r30,2380(r31)
	REX_STORE_U32(ctx.r31.u32 + 2380, ctx.r30.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r30.u8);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r11.u8);
	// b 0x820d3884
	goto loc_820D3884;
loc_820D3798:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x820a5d78
	ctx.lr = 0x820D37A0;
	sub_820A5D78(ctx, base);
	// lbz r11,2372(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2372);
	// stb r30,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r30.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// stb r11,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r11.u8);
loc_820D37B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d0370
	ctx.lr = 0x820D37C0;
	sub_820D0370(ctx, base);
	// b 0x820d3884
	goto loc_820D3884;
loc_820D37C4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cece8
	ctx.lr = 0x820D37CC;
	sub_820CECE8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D37D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d2b60
	ctx.lr = 0x820D37DC;
	sub_820D2B60(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D37E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d3310
	ctx.lr = 0x820D37EC;
	sub_820D3310(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D37F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d18a8
	ctx.lr = 0x820D37FC;
	sub_820D18A8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D3804:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d1d18
	ctx.lr = 0x820D380C;
	sub_820D1D18(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D3814:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d2368
	ctx.lr = 0x820D381C;
	sub_820D2368(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x820d3884
	goto loc_820D3884;
loc_820D3824:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2360
	ctx.r3.s64 = ctx.r31.s64 + 2360;
	// bl 0x820cab00
	ctx.lr = 0x820D3830;
	sub_820CAB00(ctx, base);
	// lbz r11,2373(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2373);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820d3854
	if (ctx.cr6.eq) goto loc_820D3854;
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x820bda30
	ctx.lr = 0x820D3844;
	sub_820BDA30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r11,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r11.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
loc_820D3854:
	// addi r3,r31,3256
	ctx.r3.s64 = ctx.r31.s64 + 3256;
	// bl 0x820ca598
	ctx.lr = 0x820D385C;
	sub_820CA598(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820d387c
	if (!ctx.cr6.eq) goto loc_820D387C;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r30,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r30.u8);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r11,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r11.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
	// b 0x820d3884
	goto loc_820D3884;
loc_820D387C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cec78
	ctx.lr = 0x820D3884;
	sub_820CEC78(ctx, base);
loc_820D3884:
	// bl 0x82091390
	ctx.lr = 0x820D3888;
	sub_82091390(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820d38a8
	if (ctx.cr6.eq) goto loc_820D38A8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x820913b8
	ctx.lr = 0x820D3898;
	sub_820913B8(ctx, base);
	// stb r30,2372(r31)
	REX_STORE_U8(ctx.r31.u32 + 2372, ctx.r30.u8);
	// stb r30,2373(r31)
	REX_STORE_U8(ctx.r31.u32 + 2373, ctx.r30.u8);
	// stb r30,2374(r31)
	REX_STORE_U8(ctx.r31.u32 + 2374, ctx.r30.u8);
	// stb r30,2375(r31)
	REX_STORE_U8(ctx.r31.u32 + 2375, ctx.r30.u8);
loc_820D38A8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D98A0) {
	REX_FUNC_PROLOGUE();
	// lwz r16,-26424(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26424);
	// lwz r16,-26424(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26424);
	// lwz r16,-26192(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26192);
	// lwz r16,-26424(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26424);
	// lwz r16,-26380(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26380);
	// lwz r16,-26424(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26424);
	// lwz r16,-26380(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26380);
	// lwz r16,-26380(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26380);
	// lwz r16,-26380(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26380);
	// lwz r16,-26512(r13)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r13.u32 + -26512);
	// lwz r10,4284(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x820d9870
	// ERROR: conditional branch to unknown address 0x820D9870
	if (ctx.cr6.gt) REX_FATAL("Unresolved branch from 0x820D98D4 to 0x820D9870");
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d99b0
	if (!ctx.cr6.eq) goto loc_820D99B0;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9870
	// ERROR: conditional branch to unknown address 0x820D9870
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D98E8 to 0x820D9870");
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820D99B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D9EBC) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d9870
	// ERROR: conditional branch to unknown address 0x820D9870
	if (!ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9EC8 to 0x820D9870");
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d99b0
	// ERROR: conditional branch to unknown address 0x820D99B0
	if (!ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9ED4 to 0x820D99B0");
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820d9870
	// ERROR: conditional branch to unknown address 0x820D9870
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9EE0 to 0x820D9870");
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820DA308) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x820DA310;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5016(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 5016);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lfs f0,2276(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2276);
	ctx.f0.f64 = double(temp.f32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x820f1468
	ctx.lr = 0x820DA344;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820DA348;
	sub_820F21E8(ctx, base);
	// extsw r10,r28
	ctx.r10.s64 = ctx.r28.s32;
	// addi r9,r29,1140
	ctx.r9.s64 = ctx.r29.s64 + 1140;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f12,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f1,f10
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f10.f64));
	// lfsx f1,r8,r31
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// fctiwz f8,f9
	ctx.f8.s64 = std::isnan(ctx.f9.f64) ? int64_t(0x80000000U) : (ctx.f9.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f9.f64));
	// stfd f8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f8.u64);
	// lwz r29,84(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x820f1468
	ctx.lr = 0x820DA37C;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820DA380;
	sub_820F21E8(ctx, base);
	// addi r7,r30,2
	ctx.r7.s64 = ctx.r30.s64 + 2;
	// addi r4,r29,2
	ctx.r4.s64 = ctx.r29.s64 + 2;
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// std r5,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f7,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r3,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r3.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fcfid f3,f7
	ctx.f3.f64 = double(ctx.f7.s64);
	// lfs f0,4560(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4560);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// fmuls f6,f1,f0
	ctx.f6.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// extsw r28,r27
	ctx.r28.s64 = ctx.r27.s32;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// frsp f1,f3
	ctx.f1.f64 = double(float(ctx.f3.f64));
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r7,1
	ctx.r7.s64 = 1;
	// fctiwz f2,f6
	ctx.f2.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f2,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.f2.u64);
	// lwz r27,84(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// frsp f2,f4
	ctx.f2.f64 = double(float(ctx.f4.f64));
	// bl 0x820a02c8
	ctx.lr = 0x820DA3E8;
	sub_820A02C8(ctx, base);
	// subf r30,r27,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r27.u64;
	// subf r29,r27,r29
	ctx.r29.u64 = ctx.r29.u64 - ctx.r27.u64;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f1,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f1
	ctx.f12.f64 = double(ctx.f1.s64);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// lis r8,-24576
	ctx.r8.s64 = -1610612736;
	// li r7,1
	ctx.r7.s64 = 1;
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// bl 0x820a02c8
	ctx.lr = 0x820DA438;
	sub_820A02C8(ctx, base);
	// extsw r7,r30
	ctx.r7.s64 = ctx.r30.s32;
	// extsw r6,r29
	ctx.r6.s64 = ctx.r29.s32;
	// std r7,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// frsp f2,f9
	ctx.f2.f64 = double(float(ctx.f9.f64));
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f8
	ctx.f1.f64 = double(float(ctx.f8.f64));
	// bl 0x820a02c8
	ctx.lr = 0x820DA478;
	sub_820A02C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820DF4E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x820DF4F0;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215eb70
	ctx.lr = 0x820DF4F8;
	__savefpr_14(ctx, base);
	// stwu r1,-1504(r1)
	ea = -1504 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r11,-5104
	ctx.r8.s64 = ctx.r11.s64 + -5104;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r7,r11,1792
	ctx.r7.s64 = ctx.r11.s64 + 1792;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r6,r11,1784
	ctx.r6.s64 = ctx.r11.s64 + 1784;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r6,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r5,r11,1772
	ctx.r5.s64 = ctx.r11.s64 + 1772;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r5,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r4,r11,1748
	ctx.r4.s64 = ctx.r11.s64 + 1748;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r4,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r4.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r11,-5872
	ctx.r3.s64 = ctx.r11.s64 + -5872;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r3,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r3.u32);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r30,r11,1744
	ctx.r30.s64 = ctx.r11.s64 + 1744;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r30,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r29,r11,1736
	ctx.r29.s64 = ctx.r11.s64 + 1736;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,244(r1)
	REX_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// addi r17,r11,1720
	ctx.r17.s64 = ctx.r11.s64 + 1720;
	// addi r11,r10,-6008
	ctx.r11.s64 = ctx.r10.s64 + -6008;
	// addi r10,r9,-6000
	ctx.r10.s64 = ctx.r9.s64 + -6000;
	// addi r9,r8,-5996
	ctx.r9.s64 = ctx.r8.s64 + -5996;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r8,r7,1760
	ctx.r8.s64 = ctx.r7.s64 + 1760;
	// stw r10,248(r1)
	REX_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// addi r7,r6,-5992
	ctx.r7.s64 = ctx.r6.s64 + -5992;
	// stw r9,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// addi r6,r5,-5988
	ctx.r6.s64 = ctx.r5.s64 + -5988;
	// stw r8,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r8.u32);
	// addi r11,r29,1708
	ctx.r11.s64 = ctx.r29.s64 + 1708;
	// stw r7,224(r1)
	REX_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// stw r6,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// stw r11,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// addi r5,r4,-5984
	ctx.r5.s64 = ctx.r4.s64 + -5984;
	// addi r4,r3,1724
	ctx.r4.s64 = ctx.r3.s64 + 1724;
	// addi r3,r30,1696
	ctx.r3.s64 = ctx.r30.s64 + 1696;
	// stw r5,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r5.u32);
	// addi r10,r28,1688
	ctx.r10.s64 = ctx.r28.s64 + 1688;
	// stw r4,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r4.u32);
	// addi r9,r27,1676
	ctx.r9.s64 = ctx.r27.s64 + 1676;
	// stw r3,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// stw r9,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// lis r25,-32256
	ctx.r25.s64 = -2113929216;
	// lis r26,-32256
	ctx.r26.s64 = -2113929216;
	// addi r24,r11,1668
	ctx.r24.s64 = ctx.r11.s64 + 1668;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f27,1664(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 1664);
	ctx.f27.f64 = double(temp.f32);
	// lfs f28,4548(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4548);
	ctx.f28.f64 = double(temp.f32);
	// stw r24,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// addi r23,r11,1660
	ctx.r23.s64 = ctx.r11.s64 + 1660;
	// lfs f20,2096(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2096);
	ctx.f20.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f18,2112(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2112);
	ctx.f18.f64 = double(temp.f32);
	// lfs f19,2108(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 2108);
	ctx.f19.f64 = double(temp.f32);
	// stw r23,260(r1)
	REX_STORE_U32(ctx.r1.u32 + 260, ctx.r23.u32);
	// addi r28,r11,1652
	ctx.r28.s64 = ctx.r11.s64 + 1652;
	// lfs f0,4420(r26)
	temp.u32 = REX_LOAD_U32(ctx.r26.u32 + 4420);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f15,4552(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4552);
	ctx.f15.f64 = double(temp.f32);
	// lis r26,-32255
	ctx.r26.s64 = -2113863680;
	// lfs f16,4524(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4524);
	ctx.f16.f64 = double(temp.f32);
	// addi r9,r11,1648
	ctx.r9.s64 = ctx.r11.s64 + 1648;
	// lfs f29,1384(r27)
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 1384);
	ctx.f29.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f25,4436(r30)
	temp.u32 = REX_LOAD_U32(ctx.r30.u32 + 4436);
	ctx.f25.f64 = double(temp.f32);
	// lfs f21,1388(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 1388);
	ctx.f21.f64 = double(temp.f32);
	// addi r10,r26,-5840
	ctx.r10.s64 = ctx.r26.s64 + -5840;
	// addi r4,r11,1640
	ctx.r4.s64 = ctx.r11.s64 + 1640;
	// lfs f17,2236(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2236);
	ctx.f17.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stw r4,236(r1)
	REX_STORE_U32(ctx.r1.u32 + 236, ctx.r4.u32);
	// lis r27,-32255
	ctx.r27.s64 = -2113863680;
	// addi r7,r11,-5860
	ctx.r7.s64 = ctx.r11.s64 + -5860;
	// stw r10,252(r1)
	REX_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f22,4556(r25)
	temp.u32 = REX_LOAD_U32(ctx.r25.u32 + 4556);
	ctx.f22.f64 = double(temp.f32);
	// lis r30,-32255
	ctx.r30.s64 = -2113863680;
	// lfs f26,2288(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 2288);
	ctx.f26.f64 = double(temp.f32);
	// addi r6,r11,1620
	ctx.r6.s64 = ctx.r11.s64 + 1620;
	// stw r28,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r7,188(r1)
	REX_STORE_U32(ctx.r1.u32 + 188, ctx.r7.u32);
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// stw r6,268(r1)
	REX_STORE_U32(ctx.r1.u32 + 268, ctx.r6.u32);
	// addi r5,r11,-5932
	ctx.r5.s64 = ctx.r11.s64 + -5932;
	// lwz r16,136(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stfs f0,196(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// addi r10,r27,1632
	ctx.r10.s64 = ctx.r27.s64 + 1632;
	// stw r5,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// addi r4,r11,1572
	ctx.r4.s64 = ctx.r11.s64 + 1572;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r10,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r10.u32);
	// stw r4,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r4.u32);
	// addi r9,r30,1604
	ctx.r9.s64 = ctx.r30.s64 + 1604;
	// addi r8,r3,1580
	ctx.r8.s64 = ctx.r3.s64 + 1580;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lis r28,-32255
	ctx.r28.s64 = -2113863680;
	// stw r8,220(r1)
	REX_STORE_U32(ctx.r1.u32 + 220, ctx.r8.u32);
	// lis r25,-32255
	ctx.r25.s64 = -2113863680;
	// lis r24,-32255
	ctx.r24.s64 = -2113863680;
	// lis r23,-32255
	ctx.r23.s64 = -2113863680;
	// lis r22,-32255
	ctx.r22.s64 = -2113863680;
	// lis r21,-32255
	ctx.r21.s64 = -2113863680;
	// lis r20,-32255
	ctx.r20.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// addi r15,r11,1564
	ctx.r15.s64 = ctx.r11.s64 + 1564;
	// li r19,-1
	ctx.r19.s64 = -1;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r14,r29,1556
	ctx.r14.s64 = ctx.r29.s64 + 1556;
	// addi r18,r28,1400
	ctx.r18.s64 = ctx.r28.s64 + 1400;
	// addi r26,r25,1548
	ctx.r26.s64 = ctx.r25.s64 + 1548;
	// addi r24,r24,1540
	ctx.r24.s64 = ctx.r24.s64 + 1540;
	// addi r23,r23,-23912
	ctx.r23.s64 = ctx.r23.s64 + -23912;
	// addi r22,r22,1532
	ctx.r22.s64 = ctx.r22.s64 + 1532;
	// addi r21,r21,1524
	ctx.r21.s64 = ctx.r21.s64 + 1524;
	// addi r20,r20,-5832
	ctx.r20.s64 = ctx.r20.s64 + -5832;
	// addi r4,r4,1500
	ctx.r4.s64 = ctx.r4.s64 + 1500;
	// addi r3,r5,1484
	ctx.r3.s64 = ctx.r5.s64 + 1484;
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r6,r6,1460
	ctx.r6.s64 = ctx.r6.s64 + 1460;
	// lwz r27,128(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// stw r3,276(r1)
	REX_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// addi r3,r9,1416
	ctx.r3.s64 = ctx.r9.s64 + 1416;
	// addi r5,r7,1444
	ctx.r5.s64 = ctx.r7.s64 + 1444;
	// stw r6,280(r1)
	REX_STORE_U32(ctx.r1.u32 + 280, ctx.r6.u32);
	// addi r4,r8,1432
	ctx.r4.s64 = ctx.r8.s64 + 1432;
	// stw r3,256(r1)
	REX_STORE_U32(ctx.r1.u32 + 256, ctx.r3.u32);
	// addi r10,r10,1404
	ctx.r10.s64 = ctx.r10.s64 + 1404;
	// stw r5,272(r1)
	REX_STORE_U32(ctx.r1.u32 + 272, ctx.r5.u32);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// stw r4,264(r1)
	REX_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// stw r10,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r30,r11,-5672
	ctx.r30.s64 = ctx.r11.s64 + -5672;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r25,r9,32896
	ctx.r25.u64 = ctx.r9.u64 | 32896;
loc_820DF7CC:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r11,1196
	ctx.r10.s64 = ctx.r11.s64 + 1196;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r29,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f1468
	ctx.lr = 0x820DF7E0;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820DF7E4;
	sub_820F21E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// lfsx f1,r29,r31
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x820f1468
	ctx.lr = 0x820DF7F0;
	sub_820F1468(ctx, base);
	// bl 0x820f21e8
	ctx.lr = 0x820DF7F4;
	sub_820F21E8(ctx, base);
	// lwz r9,4296(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4296);
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820df834
	if (!ctx.cr6.eq) goto loc_820DF834;
	// lfs f0,196(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// li r11,4
	ctx.r11.s64 = 4;
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctiwz f12,f13
	ctx.f12.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r9,r10,-128
	ctx.xer.ca = ctx.r10.u32 <= 4294967168;
	ctx.r9.u64 = static_cast<uint64_t>(-128) - ctx.r10.u64;
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// oris r29,r8,65408
	ctx.r29.u64 = ctx.r8.u64 | 4286578688;
	// ori r29,r29,32768
	ctx.r29.u64 = ctx.r29.u64 | 32768;
	// b 0x820df890
	goto loc_820DF890;
loc_820DF834:
	// lwz r11,4308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4308);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820df888
	if (!ctx.cr6.eq) goto loc_820DF888;
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f13,f31,f22
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r9,96
	ctx.xer.ca = ctx.r9.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r9.u64;
	// subfic r8,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r8.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r7,r11,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r6,r8,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r29,r11,r3
	ctx.r29.u64 = ctx.r11.u64 | ctx.r3.u64;
	// b 0x820df88c
	goto loc_820DF88C;
loc_820DF888:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820DF88C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820DF890:
	// lwz r10,120(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r10,55
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 55, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1868
	ctx.r12.s64 = ctx.r12.s64 + -1868;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_820DF994;
	case 1:
		goto loc_820DFB44;
	case 2:
		goto loc_820DFBB4;
	case 3:
		goto loc_820DFC88;
	case 4:
		goto loc_820E01E8;
	case 5:
		goto loc_820E033C;
	case 6:
		goto loc_820E03AC;
	case 7:
		goto loc_820E0508;
	case 8:
		goto loc_820E06BC;
	case 9:
		goto loc_820E08F0;
	case 10:
		goto loc_820E0960;
	case 11:
		goto loc_820E0A38;
	case 12:
		goto loc_820E0B1C;
	case 13:
		goto loc_820E0D90;
	case 14:
		goto loc_820E11F4;
	case 15:
		goto loc_820E1264;
	case 16:
		goto loc_820E1348;
	case 17:
		goto loc_820E144C;
	case 18:
		goto loc_820E1530;
	case 19:
		goto loc_820E15A0;
	case 20:
		goto loc_820E177C;
	case 21:
		goto loc_820E1970;
	case 22:
		goto loc_820E1A54;
	case 23:
		goto loc_820E1AC4;
	case 24:
		goto loc_820E1BC8;
	case 25:
		goto loc_820E1CD4;
	case 26:
		goto loc_820E1DE0;
	case 27:
		goto loc_820E1E50;
	case 28:
		goto loc_820E1F50;
	case 29:
		goto loc_820E2070;
	case 30:
		goto loc_820E2608;
	case 31:
		goto loc_820E2678;
	case 32:
		goto loc_820E2750;
	case 33:
		goto loc_820E2834;
	case 34:
		goto loc_820E28C8;
	case 35:
		goto loc_820E29EC;
	case 36:
		goto loc_820E2AF8;
	case 37:
		goto loc_820E2BEC;
	case 38:
		goto loc_820E2D6C;
	case 39:
		goto loc_820E2C68;
	case 40:
		goto loc_820E2E7C;
	case 41:
		goto loc_820E2F60;
	case 42:
		goto loc_820E2FDC;
	case 43:
		goto loc_820E30EC;
	case 44:
		goto loc_820E3200;
	case 45:
		goto loc_820E327C;
	case 46:
		goto loc_820E3378;
	case 47:
		goto loc_820E3468;
	case 48:
		goto loc_820E3558;
	case 49:
		goto loc_820E3648;
	case 50:
		goto loc_820E36C4;
	case 51:
		goto loc_820E37D4;
	case 52:
		goto loc_820E38C4;
	case 53:
		goto loc_820E39B4;
	case 54:
		goto loc_820E3AA4;
	case 55:
		goto loc_820E3B14;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820DF994:
	// li r8,9
	ctx.r8.s64 = 9;
	// lwz r6,-120(r27)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r27.u32 + -120);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x820d9f00
	ctx.lr = 0x820DF9B0;
	sub_820D9F00(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-1576
	ctx.r12.s64 = ctx.r12.s64 + -1576;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820DFA24;
	case 1:
		goto loc_820DFA00;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820DFA6C;
	case 4:
		goto loc_820DFAB4;
	case 5:
		goto loc_820DFA48;
	case 6:
		goto loc_820DFA90;
	case 7:
		goto loc_820DFAD8;
	case 8:
		goto loc_820DFAFC;
	case 9:
		goto loc_820DFB20;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820DFA00:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,128(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFA20;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFA24:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,256(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFA44;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFA48:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,264(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 264);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFA68;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFA6C:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,272(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFA8C;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFA90:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,280(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 280);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFAB0;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFAB4:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,276(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFAD4;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFAD8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,156(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFAF8;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFAFC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,220(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 220);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFB1C;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFB20:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r8,9
	ctx.r8.s64 = 9;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,288
	ctx.r4.s64 = ctx.r11.s64 + 288;
	// lwz r6,164(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820d9f00
	ctx.lr = 0x820DFB40;
	sub_820D9F00(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFB44:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820dfba0
	if (!ctx.cr6.eq) goto loc_820DFBA0;
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f13,f31,f22
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stfd f11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f11.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r9,96
	ctx.xer.ca = ctx.r9.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r9.u64;
	// subfic r8,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r8.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r7,r11,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r6,r8,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820dfba0
	if (!ctx.cr6.eq) goto loc_820DFBA0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820DFBA0:
	// lwz r7,-116(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -116);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r5,8(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820DFBB4:
	// lwz r10,20(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f27
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,512(r1)
	REX_STORE_U64(ctx.r1.u32 + 512, ctx.r10.u64);
	// lfd f11,512(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 512);
	// std r9,544(r1)
	REX_STORE_U64(ctx.r1.u32 + 544, ctx.r9.u64);
	// lfd f10,544(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 544);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r5,64
	ctx.xer.ca = ctx.r5.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r5.u64;
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// subfic r10,r8,126
	ctx.xer.ca = ctx.r8.u32 <= 126;
	ctx.r10.u64 = static_cast<uint64_t>(126) - ctx.r8.u64;
	// subfic r8,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// rlwinm r6,r10,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r11,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820DFC58;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,-56
	ctx.r6.s64 = ctx.r27.s64 + -56;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x820ddec0
	ctx.lr = 0x820DFC84;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820DFC88:
	// fmuls f0,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,24(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f27
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// fmuls f23,f30,f25
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f25.f64));
	// std r10,880(r1)
	REX_STORE_U64(ctx.r1.u32 + 880, ctx.r10.u64);
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// std r9,304(r1)
	REX_STORE_U64(ctx.r1.u32 + 304, ctx.r9.u64);
	// lfd f10,304(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 304);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// lwz r29,116(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f7,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f7.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// lfd f11,880(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 880);
	// subfic r5,r8,64
	ctx.xer.ca = ctx.r8.u32 <= 64;
	ctx.r5.u64 = static_cast<uint64_t>(64) - ctx.r8.u64;
	// fcfid f6,f11
	ctx.f6.f64 = double(ctx.f11.s64);
	// subfic r10,r29,126
	ctx.xer.ca = ctx.r29.u32 <= 126;
	ctx.r10.u64 = static_cast<uint64_t>(126) - ctx.r29.u64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// fcfid f5,f10
	ctx.f5.f64 = double(ctx.f10.s64);
	// rlwinm r6,r10,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// rlwinm r5,r11,16,8,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r6,r10,r5
	ctx.r6.u64 = ctx.r10.u64 | ctx.r5.u64;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f6
	ctx.f4.f64 = double(float(ctx.f6.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fsubs f3,f4,f23
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f23.f64));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820DFD30;
	sub_820DA5C0(ctx, base);
	// lwz r5,4296(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4296);
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x820e0104
	if (!ctx.cr6.eq) goto loc_820E0104;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r10,752(r1)
	REX_STORE_U64(ctx.r1.u32 + 752, ctx.r10.u64);
	// std r11,320(r1)
	REX_STORE_U64(ctx.r1.u32 + 320, ctx.r11.u64);
	// lfd f0,752(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 752);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfd f12,320(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 320);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// fnmsubs f2,f30,f16,f11
	ctx.f2.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f16.f64, -ctx.f11.f64)));
	// bl 0x820da7e0
	ctx.lr = 0x820DFD80;
	sub_820DA7E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,976(r1)
	REX_STORE_U64(ctx.r1.u32 + 976, ctx.r9.u64);
	// lfd f9,976(r1)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 976);
	// std r8,336(r1)
	REX_STORE_U64(ctx.r1.u32 + 336, ctx.r8.u64);
	// lfd f8,336(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 336);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// fcfid f5,f9
	ctx.f5.f64 = double(ctx.f9.s64);
	// fsubs f2,f6,f23
	ctx.f2.f64 = double(float(ctx.f6.f64 - ctx.f23.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFDC4;
	sub_820DA7E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// fmuls f24,f30,f15
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f30.f64 * ctx.f15.f64));
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// fmr f4,f20
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// std r7,768(r1)
	REX_STORE_U64(ctx.r1.u32 + 768, ctx.r7.u64);
	// lfd f2,768(r1)
	ctx.f2.u64 = REX_LOAD_U64(ctx.r1.u32 + 768);
	// std r6,352(r1)
	REX_STORE_U64(ctx.r1.u32 + 352, ctx.r6.u64);
	// lfd f1,352(r1)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fcfid f12,f2
	ctx.f12.f64 = double(ctx.f2.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// fsubs f2,f13,f24
	ctx.f2.f64 = double(float(ctx.f13.f64 - ctx.f24.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFE0C;
	sub_820DA7E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// fmuls f14,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.f14.f64 = double(float(ctx.f30.f64 * ctx.f28.f64));
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// fmr f4,f20
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// std r5,1088(r1)
	REX_STORE_U64(ctx.r1.u32 + 1088, ctx.r5.u64);
	// lfd f11,1088(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 1088);
	// std r4,368(r1)
	REX_STORE_U64(ctx.r1.u32 + 368, ctx.r4.u64);
	// lfd f10,368(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + 368);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fsubs f2,f8,f14
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f14.f64));
	// frsp f1,f7
	ctx.f1.f64 = double(float(ctx.f7.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFE54;
	sub_820DA7E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r11,784(r1)
	REX_STORE_U64(ctx.r1.u32 + 784, ctx.r11.u64);
	// lfd f6,784(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 784);
	// std r10,384(r1)
	REX_STORE_U64(ctx.r1.u32 + 384, ctx.r10.u64);
	// lfd f5,384(r1)
	ctx.f5.u64 = REX_LOAD_U64(ctx.r1.u32 + 384);
	// fcfid f2,f6
	ctx.f2.f64 = double(ctx.f6.s64);
	// fcfid f0,f5
	ctx.f0.f64 = double(ctx.f5.s64);
	// frsp f1,f2
	ctx.f1.f64 = double(float(ctx.f2.f64));
	// frsp f2,f0
	ctx.f2.f64 = double(float(ctx.f0.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFE94;
	sub_820DA7E0(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r8,992(r1)
	REX_STORE_U64(ctx.r1.u32 + 992, ctx.r8.u64);
	// std r9,400(r1)
	REX_STORE_U64(ctx.r1.u32 + 400, ctx.r9.u64);
	// lfd f11,400(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 400);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfd f13,992(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 992);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fadds f2,f9,f14
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f14.f64));
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFED8;
	sub_820DA7E0(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// std r7,800(r1)
	REX_STORE_U64(ctx.r1.u32 + 800, ctx.r7.u64);
	// lfd f8,800(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 800);
	// std r6,416(r1)
	REX_STORE_U64(ctx.r1.u32 + 416, ctx.r6.u64);
	// lfd f7,416(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 416);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// fcfid f1,f8
	ctx.f1.f64 = double(ctx.f8.s64);
	// fadds f2,f5,f24
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f24.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFF1C;
	sub_820DA7E0(ctx, base);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// fmr f4,f20
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f20.f64;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// fmr f3,f21
	ctx.f3.f64 = ctx.f21.f64;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r5,1168(r1)
	REX_STORE_U64(ctx.r1.u32 + 1168, ctx.r5.u64);
	// lfd f0,1168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 1168);
	// std r4,432(r1)
	REX_STORE_U64(ctx.r1.u32 + 432, ctx.r4.u64);
	// lfd f13,432(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 432);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// fadds f2,f10,f23
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f23.f64));
	// bl 0x820da7e0
	ctx.lr = 0x820DFF60;
	sub_820DA7E0(ctx, base);
	// lwz r3,4284(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt 0x820e0030
	if (ctx.cr0.lt) goto loc_820E0030;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lis r7,-17024
	ctx.r7.s64 = -1115684864;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r8,13
	ctx.r8.s64 = 13;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,816(r1)
	REX_STORE_U64(ctx.r1.u32 + 816, ctx.r10.u64);
	// ori r7,r7,16384
	ctx.r7.u64 = ctx.r7.u64 | 16384;
	// std r9,448(r1)
	REX_STORE_U64(ctx.r1.u32 + 448, ctx.r9.u64);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f0,816(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 816);
	// lfd f12,448(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 448);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f1,f13
	ctx.f1.f64 = double(float(ctx.f13.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fnmsubs f2,f30,f19,f10
	ctx.f2.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f19.f64, -ctx.f10.f64)));
	// bl 0x820daa48
	ctx.lr = 0x820DFFC0;
	sub_820DAA48(ctx, base);
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r7,r27,-48
	ctx.r7.s64 = ctx.r27.s64 + -48;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lis r8,-17024
	ctx.r8.s64 = -1115684864;
	// addi r6,r11,-10
	ctx.r6.s64 = ctx.r11.s64 + -10;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r5,1008(r1)
	REX_STORE_U64(ctx.r1.u32 + 1008, ctx.r5.u64);
	// lfd f9,1008(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 1008);
	// std r4,464(r1)
	REX_STORE_U64(ctx.r1.u32 + 464, ctx.r4.u64);
	// lfd f8,464(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 464);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// li r9,11
	ctx.r9.s64 = 11;
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// fcfid f5,f8
	ctx.f5.f64 = double(ctx.f8.s64);
	// ori r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 16384;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// fsubs f4,f6,f18
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f18.f64));
	// frsp f3,f5
	ctx.f3.f64 = double(float(ctx.f5.f64));
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// fsubs f1,f4,f17
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f17.f64));
	// fsubs f2,f3,f24
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f24.f64));
	// bl 0x820da6e0
	ctx.lr = 0x820E0030;
	sub_820DA6E0(ctx, base);
loc_820E0030:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bgt cr6,0x820e0104
	if (ctx.cr6.gt) goto loc_820E0104;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lis r7,-17024
	ctx.r7.s64 = -1115684864;
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r8,13
	ctx.r8.s64 = 13;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,832(r1)
	REX_STORE_U64(ctx.r1.u32 + 832, ctx.r10.u64);
	// lfd f0,832(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 832);
	// std r9,480(r1)
	REX_STORE_U64(ctx.r1.u32 + 480, ctx.r9.u64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lfd f13,480(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 480);
	// ori r7,r7,16384
	ctx.r7.u64 = ctx.r7.u64 | 16384;
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// frsp f1,f12
	ctx.f1.f64 = double(float(ctx.f12.f64));
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmadds f2,f30,f19,f10
	ctx.f2.f64 = double(float(std::fma(ctx.f30.f64, ctx.f19.f64, ctx.f10.f64)));
	// bl 0x820daca0
	ctx.lr = 0x820E0094;
	sub_820DACA0(ctx, base);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r11,r27,-48
	ctx.r11.s64 = ctx.r27.s64 + -48;
	// lis r8,-17024
	ctx.r8.s64 = -1115684864;
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// addi r6,r10,-10
	ctx.r6.s64 = ctx.r10.s64 + -10;
	// li r9,11
	ctx.r9.s64 = 11;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// ori r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 16384;
	// std r5,1104(r1)
	REX_STORE_U64(ctx.r1.u32 + 1104, ctx.r5.u64);
	// lfd f9,1104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 1104);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// std r6,496(r1)
	REX_STORE_U64(ctx.r1.u32 + 496, ctx.r6.u64);
	// lfd f6,496(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 496);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// lwz r5,4(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// fadds f2,f7,f24
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f24.f64));
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// fsubs f3,f4,f18
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f18.f64));
	// fsubs f1,f3,f17
	ctx.f1.f64 = double(float(ctx.f3.f64 - ctx.f17.f64));
	// bl 0x820da6e0
	ctx.lr = 0x820E0104;
	sub_820DA6E0(ctx, base);
loc_820E0104:
	// lwz r11,4296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4296);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x820e0118
	if (!ctx.cr6.eq) goto loc_820E0118;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// b 0x820e0164
	goto loc_820E0164;
loc_820E0118:
	// lwz r11,4308(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4308);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820e015c
	if (!ctx.cr6.eq) goto loc_820E015C;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r10,r29,127
	ctx.xer.ca = ctx.r29.u32 <= 127;
	ctx.r10.u64 = static_cast<uint64_t>(127) - ctx.r29.u64;
	// rlwinm r9,r11,16,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r8,r10,24,0,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// rlwinm r7,r11,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 | ctx.r5.u64;
	// b 0x820e0160
	goto loc_820E0160;
loc_820E015C:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_820E0160:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_820E0164:
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e0174
	if (!ctx.cr6.eq) goto loc_820E0174;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
loc_820E0174:
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// li r4,3
	ctx.r4.s64 = 3;
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// addi r5,r11,-34
	ctx.r5.s64 = ctx.r11.s64 + -34;
	// beq cr6,0x820e01d0
	if (ctx.cr6.eq) goto loc_820E01D0;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// addi r6,r10,-10
	ctx.r6.s64 = ctx.r10.s64 + -10;
	// beq cr6,0x820e01c0
	if (ctx.cr6.eq) goto loc_820E01C0;
	// lwz r7,4284(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// addi r29,r27,-48
	ctx.r29.s64 = ctx.r27.s64 + -48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r29
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// bl 0x820da480
	ctx.lr = 0x820E01BC;
	sub_820DA480(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E01C0:
	// li r7,273
	ctx.r7.s64 = 273;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da480
	ctx.lr = 0x820E01CC;
	sub_820DA480(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E01D0:
	// lwz r10,28(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// li r7,272
	ctx.r7.s64 = 272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r6,r10,-10
	ctx.r6.s64 = ctx.r10.s64 + -10;
	// bl 0x820da480
	ctx.lr = 0x820E01E4;
	sub_820DA480(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E01E8:
	// lwz r10,36(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 36);
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// fmuls f12,f31,f27
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,848(r1)
	REX_STORE_U64(ctx.r1.u32 + 848, ctx.r10.u64);
	// lfd f11,848(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 848);
	// std r9,1024(r1)
	REX_STORE_U64(ctx.r1.u32 + 1024, ctx.r9.u64);
	// lfd f6,1024(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1024);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r8,116(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// lwz r6,116(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r10,r8,126
	ctx.xer.ca = ctx.r8.u32 <= 126;
	ctx.r10.u64 = static_cast<uint64_t>(126) - ctx.r8.u64;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// subfic r8,r5,64
	ctx.xer.ca = ctx.r5.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r5.u64;
	// rlwinm r6,r10,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// rlwinm r10,r11,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E028C;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,692
	ctx.r12.s64 = ctx.r12.s64 + 692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E02DC;
	case 1:
		goto loc_820E02DC;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E02DC;
	case 4:
		goto loc_820E030C;
	case 5:
		goto loc_820E02DC;
	case 6:
		goto loc_820E030C;
	case 7:
		goto loc_820E030C;
	case 8:
		goto loc_820E030C;
	case 9:
		goto loc_820E02DC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E02DC:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,-36
	ctx.r6.s64 = ctx.r27.s64 + -36;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820ddec0
	ctx.lr = 0x820E0308;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E030C:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,-24
	ctx.r6.s64 = ctx.r27.s64 + -24;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x820ddec0
	ctx.lr = 0x820E0338;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E033C:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x820e0398
	if (!ctx.cr6.eq) goto loc_820E0398;
	// fmuls f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f0,f31,f22
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f12.u64);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r9,96
	ctx.xer.ca = ctx.r9.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r9.u64;
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r7,r11,16,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// subfic r8,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r8.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r6,r8,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// or r4,r6,r7
	ctx.r4.u64 = ctx.r6.u64 | ctx.r7.u64;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// or r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 | ctx.r3.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x820e0398
	if (!ctx.cr6.eq) goto loc_820E0398;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E0398:
	// lwz r7,-112(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -112);
	// li r4,5
	ctx.r4.s64 = 5;
	// lwz r6,44(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r5,40(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E03AC:
	// lwz r10,52(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,48(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,864(r1)
	REX_STORE_U64(ctx.r1.u32 + 864, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,528(r1)
	REX_STORE_U64(ctx.r1.u32 + 528, ctx.r8.u64);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f9,f0
	ctx.f9.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// fctiwz f8,f13
	ctx.f8.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f8,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f8.u64);
	// fctiwz f7,f12
	ctx.f7.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f7,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f7.u64);
	// lfd f6,864(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 864);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lfd f11,528(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 528);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r6,100(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f10
	ctx.f1.f64 = double(float(ctx.f10.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0450;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1144
	ctx.r12.s64 = ctx.r12.s64 + 1144;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E04A0;
	case 1:
		goto loc_820E04A0;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E04A0;
	case 4:
		goto loc_820E04D4;
	case 5:
		goto loc_820E04A0;
	case 6:
		goto loc_820E04D4;
	case 7:
		goto loc_820E04D4;
	case 8:
		goto loc_820E04D4;
	case 9:
		goto loc_820E04D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E04A0:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,24
	ctx.r6.s64 = ctx.r27.s64 + 24;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r7,17
	ctx.r7.s64 = 17;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E04D0;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E04D4:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,92
	ctx.r6.s64 = ctx.r27.s64 + 92;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r7,6
	ctx.r7.s64 = 6;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,6
	ctx.r4.s64 = 6;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E0504;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0508:
	// lwz r10,60(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 60);
	// fmuls f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r9,56(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,1152(r1)
	REX_STORE_U64(ctx.r1.u32 + 1152, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,560(r1)
	REX_STORE_U64(ctx.r1.u32 + 560, ctx.r8.u64);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// lfd f8,1152(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1152);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// lfd f6,560(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 560);
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E05AC;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1492
	ctx.r12.s64 = ctx.r12.s64 + 1492;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E05FC;
	case 1:
		goto loc_820E05FC;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E05FC;
	case 4:
		goto loc_820E0630;
	case 5:
		goto loc_820E05FC;
	case 6:
		goto loc_820E0630;
	case 7:
		goto loc_820E0630;
	case 8:
		goto loc_820E05FC;
	case 9:
		goto loc_820E05FC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E05FC:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,116
	ctx.r6.s64 = ctx.r27.s64 + 116;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E062C;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0630:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820e0678
	if (ctx.cr6.eq) goto loc_820E0678;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820e0678
	if (ctx.cr6.eq) goto loc_820E0678;
loc_820E0648:
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,116
	ctx.r6.s64 = ctx.r27.s64 + 116;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E0674;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0678:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e0648
	if (ctx.cr6.eq) goto loc_820E0648;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820e0648
	if (ctx.cr6.eq) goto loc_820E0648;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,124
	ctx.r6.s64 = ctx.r27.s64 + 124;
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// li r7,4
	ctx.r7.s64 = 4;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,7
	ctx.r4.s64 = 7;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E06B8;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E06BC:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r29,r27,140
	ctx.r29.s64 = ctx.r27.s64 + 140;
	// addi r10,r10,-17
	ctx.r10.s64 = ctx.r10.s64 + -17;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x820e0818
	if (ctx.cr6.gt) goto loc_820E0818;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1768
	ctx.r12.s64 = ctx.r12.s64 + 1768;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_820E0710;
	case 1:
		goto loc_820E0710;
	case 2:
		goto loc_820E0818;
	case 3:
		goto loc_820E0754;
	case 4:
		goto loc_820E07A4;
	case 5:
		goto loc_820E0710;
	case 6:
		goto loc_820E07A4;
	case 7:
		goto loc_820E07A4;
	case 8:
		goto loc_820E07A4;
	case 9:
		goto loc_820E07D0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E0710:
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r16,3
	ctx.r16.s64 = 3;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820e0734
	if (ctx.cr6.eq) goto loc_820E0734;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x820e0734
	if (ctx.cr6.eq) goto loc_820E0734;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x820e073c
	if (!ctx.cr6.eq) goto loc_820E073C;
loc_820E0734:
	// addi r29,r27,152
	ctx.r29.s64 = ctx.r27.s64 + 152;
	// li r16,4
	ctx.r16.s64 = 4;
loc_820E073C:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x820e074c
	if (!ctx.cr6.eq) goto loc_820E074C;
	// addi r29,r27,168
	ctx.r29.s64 = ctx.r27.s64 + 168;
	// li r16,1
	ctx.r16.s64 = 1;
loc_820E074C:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// b 0x820e080c
	goto loc_820E080C;
loc_820E0754:
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r16,3
	ctx.r16.s64 = 3;
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x820e0778
	if (ctx.cr6.eq) goto loc_820E0778;
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// beq cr6,0x820e0778
	if (ctx.cr6.eq) goto loc_820E0778;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x820e0780
	if (!ctx.cr6.eq) goto loc_820E0780;
loc_820E0778:
	// addi r29,r27,152
	ctx.r29.s64 = ctx.r27.s64 + 152;
	// li r16,4
	ctx.r16.s64 = 4;
loc_820E0780:
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bne cr6,0x820e0790
	if (!ctx.cr6.eq) goto loc_820E0790;
	// addi r29,r27,168
	ctx.r29.s64 = ctx.r27.s64 + 168;
	// li r16,1
	ctx.r16.s64 = 1;
loc_820E0790:
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bne cr6,0x820e0818
	if (!ctx.cr6.eq) goto loc_820E0818;
	// addi r29,r27,168
	ctx.r29.s64 = ctx.r27.s64 + 168;
	// li r16,1
	ctx.r16.s64 = 1;
	// b 0x820e0818
	goto loc_820E0818;
loc_820E07A4:
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r16,3
	ctx.r16.s64 = 3;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x820e07c0
	if (!ctx.cr6.eq) goto loc_820E07C0;
	// addi r29,r27,152
	ctx.r29.s64 = ctx.r27.s64 + 152;
	// li r16,4
	ctx.r16.s64 = 4;
loc_820E07C0:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x820e0818
	if (!ctx.cr6.eq) goto loc_820E0818;
	// lwz r10,104(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 104);
	// b 0x820e07f8
	goto loc_820E07F8;
loc_820E07D0:
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r16,3
	ctx.r16.s64 = 3;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 4, ctx.xer);
	// bne cr6,0x820e07ec
	if (!ctx.cr6.eq) goto loc_820E07EC;
	// addi r29,r27,152
	ctx.r29.s64 = ctx.r27.s64 + 152;
	// li r16,4
	ctx.r16.s64 = 4;
loc_820E07EC:
	// cmpwi cr6,r9,5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 5, ctx.xer);
	// bne cr6,0x820e0818
	if (!ctx.cr6.eq) goto loc_820E0818;
	// lwz r10,116(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
loc_820E07F8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e0808
	if (!ctx.cr6.eq) goto loc_820E0808;
	// addi r29,r27,168
	ctx.r29.s64 = ctx.r27.s64 + 168;
	// li r16,1
	ctx.r16.s64 = 1;
loc_820E0808:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
loc_820E080C:
	// bne cr6,0x820e0818
	if (!ctx.cr6.eq) goto loc_820E0818;
	// addi r29,r27,172
	ctx.r29.s64 = ctx.r27.s64 + 172;
	// li r16,2
	ctx.r16.s64 = 2;
loc_820E0818:
	// lwz r10,68(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 68);
	// fmuls f12,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r9,64(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f0,f31,f27
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,288(r1)
	REX_STORE_U64(ctx.r1.u32 + 288, ctx.r10.u64);
	// lfd f8,288(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 288);
	// std r8,576(r1)
	REX_STORE_U64(ctx.r1.u32 + 576, ctx.r8.u64);
	// lfd f6,576(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 576);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E08BC;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,20(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// bl 0x820ddec0
	ctx.lr = 0x820E08EC;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E08F0:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x820e094c
	if (!ctx.cr6.eq) goto loc_820E094C;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e094c
	if (!ctx.cr6.eq) goto loc_820E094C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E094C:
	// lwz r7,-108(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -108);
	// li r4,9
	ctx.r4.s64 = 9;
	// lwz r6,76(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// lwz r5,72(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E0960:
	// fmuls f0,f31,f26
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r10,84(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 84);
	// fmuls f13,f31,f27
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lwz r9,80(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,252(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 252);
	// std r10,592(r1)
	REX_STORE_U64(ctx.r1.u32 + 592, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1040(r1)
	REX_STORE_U64(ctx.r1.u32 + 1040, ctx.r8.u64);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f10,f0
	ctx.f10.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f10,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f10.u64);
	// fctiwz f9,f13
	ctx.f9.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f9.u64);
	// fctiwz f8,f12
	ctx.f8.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// lfd f7,592(r1)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r1.u32 + 592);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// lfd f11,1040(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 1040);
	// fcfid f4,f11
	ctx.f4.f64 = double(ctx.f11.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// stfd f8,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f8.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r11.u64;
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// frsp f1,f4
	ctx.f1.f64 = double(float(ctx.f4.f64));
	// fnmsubs f3,f30,f25,f5
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f5.f64)));
	// lwz r5,108(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r10,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r10.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r8,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r8.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// rlwinm r6,r10,24,0,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF000000;
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// rlwinm r10,r11,16,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r8,r6,r5
	ctx.r8.u64 = ctx.r6.u64 | ctx.r5.u64;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// or r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 | ctx.r6.u64;
	// bl 0x820da5c0
	ctx.lr = 0x820E0A04;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// addi r6,r27,180
	ctx.r6.s64 = ctx.r27.s64 + 180;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x820ddec0
	ctx.lr = 0x820E0A34;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0A38:
	// lwz r10,92(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,88(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 88);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,172(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// std r10,896(r1)
	REX_STORE_U64(ctx.r1.u32 + 896, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,608(r1)
	REX_STORE_U64(ctx.r1.u32 + 608, ctx.r8.u64);
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,896(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 896);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,608(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 608);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0ADC;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,512
	ctx.r7.s64 = 512;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,11
	ctx.r4.s64 = 11;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,28(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// bl 0x820de4f0
	ctx.lr = 0x820E0B18;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0B1C:
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// li r4,12
	ctx.r4.s64 = 12;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// bne cr6,0x820e0ccc
	if (!ctx.cr6.eq) goto loc_820E0CCC;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// beq cr6,0x820e0c20
	if (ctx.cr6.eq) goto loc_820E0C20;
	// std r10,1120(r1)
	REX_STORE_U64(ctx.r1.u32 + 1120, ctx.r10.u64);
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// std r8,624(r1)
	REX_STORE_U64(ctx.r1.u32 + 624, ctx.r8.u64);
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1120(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1120);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// lfd f6,624(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 624);
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0BDC;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r10,512
	ctx.r10.s64 = 512;
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r7,2560
	ctx.r7.s64 = 2560;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x820de4f0
	ctx.lr = 0x820E0C1C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0C20:
	// std r10,912(r1)
	REX_STORE_U64(ctx.r1.u32 + 912, ctx.r10.u64);
	// stfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// std r8,640(r1)
	REX_STORE_U64(ctx.r1.u32 + 640, ctx.r8.u64);
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,912(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 912);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// lfd f6,640(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 640);
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0C8C;
	sub_820DA5C0(ctx, base);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r7,512
	ctx.r7.s64 = 512;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x820de4f0
	ctx.lr = 0x820E0CC8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0CCC:
	// lwz r10,100(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// stfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// lwz r9,96(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,1056(r1)
	REX_STORE_U64(ctx.r1.u32 + 1056, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,656(r1)
	REX_STORE_U64(ctx.r1.u32 + 656, ctx.r8.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// lfd f8,1056(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1056);
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,656(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 656);
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0D50;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,512
	ctx.r7.s64 = 512;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x820de4f0
	ctx.lr = 0x820E0D8C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0D90:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r10,r10,-17
	ctx.r10.s64 = ctx.r10.s64 + -17;
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r10,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3512
	ctx.r12.s64 = ctx.r12.s64 + 3512;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_820E0DE0;
	case 1:
		goto loc_820E0DE0;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E0DE0;
	case 4:
		goto loc_820E0F64;
	case 5:
		goto loc_820E0DE0;
	case 6:
		goto loc_820E0F64;
	case 7:
		goto loc_820E0F64;
	case 8:
		goto loc_820E0F64;
	case 9:
		goto loc_820E10EC;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E0DE0:
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lwz r9,104(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,928(r1)
	REX_STORE_U64(ctx.r1.u32 + 928, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,672(r1)
	REX_STORE_U64(ctx.r1.u32 + 672, ctx.r8.u64);
	// lfd f6,672(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 672);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfd f8,928(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 928);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E0E84;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820e0ed0
	if (!ctx.cr6.eq) goto loc_820E0ED0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E0ECC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0ED0:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820e0ef4
	if (ctx.cr6.lt) goto loc_820E0EF4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x820e0ef4
	if (ctx.cr6.gt) goto loc_820E0EF4;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
loc_820E0EF4:
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x820e0f14
	if (ctx.cr6.lt) goto loc_820E0F14;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x820e0f14
	if (ctx.cr6.gt) goto loc_820E0F14;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820e0f14
	if (!ctx.cr6.eq) goto loc_820E0F14;
	// li r7,2
	ctx.r7.s64 = 2;
loc_820E0F14:
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// blt cr6,0x820e0f2c
	if (ctx.cr6.lt) goto loc_820E0F2C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e0f2c
	if (!ctx.cr6.eq) goto loc_820E0F2C;
	// li r7,4
	ctx.r7.s64 = 4;
loc_820E0F2C:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E0F60;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E0F64:
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f12,f31,f29
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,104(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,1184(r1)
	REX_STORE_U64(ctx.r1.u32 + 1184, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,688(r1)
	REX_STORE_U64(ctx.r1.u32 + 688, ctx.r8.u64);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lfd f8,1184(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1184);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,688(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 688);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// subfic r11,r5,64
	ctx.xer.ca = ctx.r5.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r5.u64;
	// subfic r8,r6,126
	ctx.xer.ca = ctx.r6.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r6.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1008;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820e1054
	if (!ctx.cr6.eq) goto loc_820E1054;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E1050;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1054:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820e107c
	if (ctx.cr6.eq) goto loc_820E107C;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820e107c
	if (ctx.cr6.eq) goto loc_820E107C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e10b4
	if (!ctx.cr6.eq) goto loc_820E10B4;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// b 0x820e10b4
	goto loc_820E10B4;
loc_820E107C:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e10a4
	if (ctx.cr6.eq) goto loc_820E10A4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820e10a4
	if (ctx.cr6.eq) goto loc_820E10A4;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e10b4
	if (!ctx.cr6.eq) goto loc_820E10B4;
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x820e10b4
	goto loc_820E10B4;
loc_820E10A4:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820e10b4
	if (!ctx.cr6.eq) goto loc_820E10B4;
	// li r7,2
	ctx.r7.s64 = 2;
loc_820E10B4:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E10E8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E10EC:
	// lwz r10,108(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 108);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,104(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 104);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,944(r1)
	REX_STORE_U64(ctx.r1.u32 + 944, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,704(r1)
	REX_STORE_U64(ctx.r1.u32 + 704, ctx.r8.u64);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,944(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 944);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,704(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 704);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1190;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,36(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x820e11dc
	if (!ctx.cr6.eq) goto loc_820E11DC;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x820de4f0
	ctx.lr = 0x820E11D8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E11DC:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820de4f0
	ctx.lr = 0x820E11F0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E11F4:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x820e1250
	if (!ctx.cr6.eq) goto loc_820E1250;
	// fmuls f13,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f0,f31,f29
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f12.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r7,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r7.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r9,r11,16,8,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r5,r7,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFF000000;
	// rlwinm r8,r11,8,16,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 | ctx.r9.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 | ctx.r8.u64;
	// or r11,r3,r6
	ctx.r11.u64 = ctx.r3.u64 | ctx.r6.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e1250
	if (!ctx.cr6.eq) goto loc_820E1250;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E1250:
	// lwz r7,-104(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -104);
	// li r4,14
	ctx.r4.s64 = 14;
	// lwz r6,116(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r5,112(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 112);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E1264:
	// lwz r10,124(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 124);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,120(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,228(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// std r10,1072(r1)
	REX_STORE_U64(ctx.r1.u32 + 1072, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,720(r1)
	REX_STORE_U64(ctx.r1.u32 + 720, ctx.r8.u64);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1072(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1072);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,720(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 720);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1308;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,7
	ctx.r7.s64 = 7;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,60(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x820de4f0
	ctx.lr = 0x820E1344;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1348:
	// lwz r10,132(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 132);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,128(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 128);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,180(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
	// std r10,960(r1)
	REX_STORE_U64(ctx.r1.u32 + 960, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,736(r1)
	REX_STORE_U64(ctx.r1.u32 + 736, ctx.r8.u64);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,960(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 960);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,736(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 736);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E13EC;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-3
	ctx.r3.s64 = ctx.r11.s64 + -3;
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// li r4,16
	ctx.r4.s64 = 16;
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r5,40(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// bne cr6,0x820e1438
	if (!ctx.cr6.eq) goto loc_820E1438;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E1434;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1438:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E1448;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E144C:
	// lwz r9,136(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 136);
	// fmuls f12,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f0,f31,f29
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r10,140(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// fmuls f13,f31,f26
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lwz r7,268(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// std r8,296(r1)
	REX_STORE_U64(ctx.r1.u32 + 296, ctx.r8.u64);
	// lfd f6,296(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 296);
	// std r10,1136(r1)
	REX_STORE_U64(ctx.r1.u32 + 1136, ctx.r10.u64);
	// lfd f8,1136(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1136);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f9.u64);
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f10.u64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// li r4,17
	ctx.r4.s64 = 17;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// bl 0x820da5c0
	ctx.lr = 0x820E14F0;
	sub_820DA5C0(ctx, base);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-3
	ctx.r8.s64 = ctx.r11.s64 + -3;
	// li r7,6
	ctx.r7.s64 = 6;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,44(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// bl 0x820de4f0
	ctx.lr = 0x820E152C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1530:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// bne cr6,0x820e158c
	if (!ctx.cr6.eq) goto loc_820E158C;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e158c
	if (!ctx.cr6.eq) goto loc_820E158C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E158C:
	// lwz r7,-100(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -100);
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r6,148(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r5,144(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 144);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E15A0:
	// lwz r10,156(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 156);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,152(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 152);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,188(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 188);
	// std r10,312(r1)
	REX_STORE_U64(ctx.r1.u32 + 312, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,328(r1)
	REX_STORE_U64(ctx.r1.u32 + 328, ctx.r8.u64);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,312(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 312);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,328(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 328);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1644;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,5740
	ctx.r12.s64 = ctx.r12.s64 + 5740;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E1694;
	case 1:
		goto loc_820E1694;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E1694;
	case 4:
		goto loc_820E16C8;
	case 5:
		goto loc_820E1694;
	case 6:
		goto loc_820E16C8;
	case 7:
		goto loc_820E16C8;
	case 8:
		goto loc_820E1728;
	case 9:
		goto loc_820E1694;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E1694:
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,180
	ctx.r6.s64 = ctx.r27.s64 + 180;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r5,48(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E16C4;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E16C8:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820e1694
	if (!ctx.cr6.eq) goto loc_820E1694;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bne cr6,0x820e1694
	if (!ctx.cr6.eq) goto loc_820E1694;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820e1694
	if (!ctx.cr6.gt) goto loc_820E1694;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,188
	ctx.r6.s64 = ctx.r27.s64 + 188;
	// lwz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E1724;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1728:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820e1694
	if (!ctx.cr6.eq) goto loc_820E1694;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bne cr6,0x820e1694
	if (!ctx.cr6.eq) goto loc_820E1694;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,188
	ctx.r6.s64 = ctx.r27.s64 + 188;
	// lwz r5,48(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820ddec0
	ctx.lr = 0x820E1778;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E177C:
	// lwz r10,164(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,160(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 160);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,236(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 236);
	// std r10,344(r1)
	REX_STORE_U64(ctx.r1.u32 + 344, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,360(r1)
	REX_STORE_U64(ctx.r1.u32 + 360, ctx.r8.u64);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,344(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,360(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 360);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1820;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6216
	ctx.r12.s64 = ctx.r12.s64 + 6216;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E1870;
	case 1:
		goto loc_820E1870;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E18B0;
	case 4:
		goto loc_820E18F0;
	case 5:
		goto loc_820E1870;
	case 6:
		goto loc_820E18F0;
	case 7:
		goto loc_820E18F0;
	case 8:
		goto loc_820E18F0;
	case 9:
		goto loc_820E1930;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E1870:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,11
	ctx.r7.s64 = 11;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,52(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// bl 0x820de4f0
	ctx.lr = 0x820E18AC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E18B0:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,21
	ctx.r7.s64 = 21;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,52(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// bl 0x820de4f0
	ctx.lr = 0x820E18EC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E18F0:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,6
	ctx.r7.s64 = 6;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,52(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// bl 0x820de4f0
	ctx.lr = 0x820E192C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1930:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,51
	ctx.r7.s64 = 51;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,124(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,52(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 52);
	// bl 0x820de4f0
	ctx.lr = 0x820E196C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1970:
	// lwz r10,172(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 172);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,168(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,144(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// std r10,376(r1)
	REX_STORE_U64(ctx.r1.u32 + 376, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,392(r1)
	REX_STORE_U64(ctx.r1.u32 + 392, ctx.r8.u64);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,376(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 376);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,392(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 392);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1A14;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// lwz r9,260(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,56(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x820de4f0
	ctx.lr = 0x820E1A50;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1A54:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bne cr6,0x820e1ab0
	if (!ctx.cr6.eq) goto loc_820E1AB0;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e1ab0
	if (!ctx.cr6.eq) goto loc_820E1AB0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E1AB0:
	// lwz r7,-96(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -96);
	// li r4,22
	ctx.r4.s64 = 22;
	// lwz r6,180(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 180);
	// lwz r5,176(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E1AC4:
	// lwz r10,188(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 188);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,184(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 184);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,204(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// std r10,408(r1)
	REX_STORE_U64(ctx.r1.u32 + 408, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,424(r1)
	REX_STORE_U64(ctx.r1.u32 + 424, ctx.r8.u64);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,408(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 408);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,424(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 424);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1B68;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r5,68(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// blt cr6,0x820e1bb4
	if (ctx.cr6.lt) goto loc_820E1BB4;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,90
	ctx.r7.s64 = 90;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E1BB0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1BB4:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,56
	ctx.r7.s64 = 56;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E1BC4;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1BC8:
	// lwz r10,196(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 196);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,192(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,440(r1)
	REX_STORE_U64(ctx.r1.u32 + 440, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,456(r1)
	REX_STORE_U64(ctx.r1.u32 + 456, ctx.r8.u64);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,440(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 440);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,456(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 456);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1C6C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-5
	ctx.r4.s64 = ctx.r11.s64 + -5;
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cntlzw r3,r4
	ctx.r3.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,72(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 72);
	// bne cr6,0x820e1cbc
	if (!ctx.cr6.eq) goto loc_820E1CBC;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r7,15
	ctx.r7.s64 = 983040;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// ori r7,r7,16959
	ctx.r7.u64 = ctx.r7.u64 | 16959;
	// bl 0x820de4f0
	ctx.lr = 0x820E1CB8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1CBC:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// ori r7,r7,34463
	ctx.r7.u64 = ctx.r7.u64 | 34463;
	// bl 0x820de4f0
	ctx.lr = 0x820E1CD0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1CD4:
	// lwz r10,204(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 204);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,200(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 200);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,244(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 244);
	// std r10,472(r1)
	REX_STORE_U64(ctx.r1.u32 + 472, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,488(r1)
	REX_STORE_U64(ctx.r1.u32 + 488, ctx.r8.u64);
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,472(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 472);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,488(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 488);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1D78;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,25
	ctx.r4.s64 = 25;
	// addi r3,r11,-5
	ctx.r3.s64 = ctx.r11.s64 + -5;
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r5,76(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 76);
	// bne cr6,0x820e1dc8
	if (!ctx.cr6.eq) goto loc_820E1DC8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r7,15258
	ctx.r7.s64 = 999948288;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// ori r7,r7,51711
	ctx.r7.u64 = ctx.r7.u64 | 51711;
	// bl 0x820de4f0
	ctx.lr = 0x820E1DC4;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1DC8:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r7,1525
	ctx.r7.s64 = 99942400;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// ori r7,r7,57599
	ctx.r7.u64 = ctx.r7.u64 | 57599;
	// bl 0x820de4f0
	ctx.lr = 0x820E1DDC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1DE0:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x820e1e3c
	if (!ctx.cr6.eq) goto loc_820E1E3C;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e1e3c
	if (!ctx.cr6.eq) goto loc_820E1E3C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E1E3C:
	// lwz r7,-92(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -92);
	// li r4,26
	ctx.r4.s64 = 26;
	// lwz r6,212(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r5,208(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 208);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E1E50:
	// lwz r10,220(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 220);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,216(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 216);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,212(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// std r10,504(r1)
	REX_STORE_U64(ctx.r1.u32 + 504, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,520(r1)
	REX_STORE_U64(ctx.r1.u32 + 520, ctx.r8.u64);
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,504(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 504);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,520(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 520);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E1EF4;
	sub_820DA5C0(ctx, base);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r3,5252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r5,16(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r4,12(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r29,4312(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// bl 0x820daef8
	ctx.lr = 0x820E1F14;
	sub_820DAEF8(ctx, base);
	// lwz r8,4284(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// addi r9,r29,-6
	ctx.r9.s64 = ctx.r29.s64 + -6;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,27
	ctx.r4.s64 = 27;
	// lwz r5,80(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// bl 0x820de4f0
	ctx.lr = 0x820E1F4C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E1F50:
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,224(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// lwz r10,228(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// bne cr6,0x820e1fc0
	if (!ctx.cr6.eq) goto loc_820E1FC0;
	// std r10,536(r1)
	REX_STORE_U64(ctx.r1.u32 + 536, ctx.r10.u64);
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// std r8,552(r1)
	REX_STORE_U64(ctx.r1.u32 + 552, ctx.r8.u64);
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lfd f8,536(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 536);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfd f6,552(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 552);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x820e1fec
	goto loc_820E1FEC;
loc_820E1FC0:
	// std r10,568(r1)
	REX_STORE_U64(ctx.r1.u32 + 568, ctx.r10.u64);
	// stfd f11,104(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// std r8,584(r1)
	REX_STORE_U64(ctx.r1.u32 + 584, ctx.r8.u64);
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lwz r7,152(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lfd f8,568(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 568);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lfd f6,584(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 584);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_820E1FEC:
	// fcfid f7,f8
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(ctx.f8.s64);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2030;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r7,80(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 80);
	// lwz r5,84(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 84);
	// bl 0x820de4f0
	ctx.lr = 0x820E206C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2070:
	// lwz r10,236(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 236);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,232(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 232);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,160(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// std r10,600(r1)
	REX_STORE_U64(ctx.r1.u32 + 600, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,616(r1)
	REX_STORE_U64(ctx.r1.u32 + 616, ctx.r8.u64);
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,600(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 600);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,616(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 616);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2114;
	sub_820DA5C0(ctx, base);
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820e3b90
	if (ctx.cr6.gt) goto loc_820E3B90;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8508
	ctx.r12.s64 = ctx.r12.s64 + 8508;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820E2164;
	case 1:
		goto loc_820E2164;
	case 2:
		goto loc_820E3B90;
	case 3:
		goto loc_820E2164;
	case 4:
		goto loc_820E23C4;
	case 5:
		goto loc_820E2164;
	case 6:
		goto loc_820E23C4;
	case 7:
		goto loc_820E23C4;
	case 8:
		goto loc_820E23C4;
	case 9:
		goto loc_820E255C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820E2164:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x820e221c
	if (ctx.cr6.lt) goto loc_820E221C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x820e221c
	if (ctx.cr6.gt) goto loc_820E221C;
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// bne cr6,0x820e21e8
	if (!ctx.cr6.eq) goto loc_820E21E8;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r6,r8,-7
	ctx.r6.s64 = ctx.r8.s64 + -7;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E21E4;
	sub_820DE4F0(ctx, base);
	// b 0x820e221c
	goto loc_820E221C;
loc_820E21E8:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r6,r8,-9
	ctx.r6.s64 = ctx.r8.s64 + -9;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E221C;
	sub_820DE4F0(ctx, base);
loc_820E221C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x820e22f0
	if (ctx.cr6.lt) goto loc_820E22F0;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x820e22f0
	if (ctx.cr6.gt) goto loc_820E22F0;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// li r4,29
	ctx.r4.s64 = 29;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x820e22a4
	if (!ctx.cr6.eq) goto loc_820E22A4;
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r8,4312(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r9,-7
	ctx.r6.s64 = ctx.r9.s64 + -7;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r8,r8,-6
	ctx.r8.s64 = ctx.r8.s64 + -6;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r7,r11,-5
	ctx.r7.s64 = ctx.r11.s64 + -5;
	// bl 0x820de4f0
	ctx.lr = 0x820E22A0;
	sub_820DE4F0(ctx, base);
	// b 0x820e22f0
	goto loc_820E22F0;
loc_820E22A4:
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// addi r6,r8,-9
	ctx.r6.s64 = ctx.r8.s64 + -9;
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cntlzw r29,r9
	ctx.r29.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r29,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r7,r11,-5
	ctx.r7.s64 = ctx.r11.s64 + -5;
	// bl 0x820de4f0
	ctx.lr = 0x820E22F0;
	sub_820DE4F0(ctx, base);
loc_820E22F0:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// blt cr6,0x820e3b90
	if (ctx.cr6.lt) goto loc_820E3B90;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r7,r11,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// li r4,29
	ctx.r4.s64 = 29;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x820e2370
	if (!ctx.cr6.eq) goto loc_820E2370;
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r8,4312(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r9,-7
	ctx.r6.s64 = ctx.r9.s64 + -7;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r8,r8,-6
	ctx.r8.s64 = ctx.r8.s64 + -6;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r7,r11,-11
	ctx.r7.s64 = ctx.r11.s64 + -11;
	// bl 0x820de4f0
	ctx.lr = 0x820E236C;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2370:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// lwz r8,80(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// lwz r6,80(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r29,r8
	ctx.r29.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r6,r6,-9
	ctx.r6.s64 = ctx.r6.s64 + -9;
	// rlwinm r11,r29,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// addi r7,r11,-11
	ctx.r7.s64 = ctx.r11.s64 + -11;
	// bl 0x820de4f0
	ctx.lr = 0x820E23C0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E23C4:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820e2488
	if (ctx.cr6.eq) goto loc_820E2488;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820e2488
	if (ctx.cr6.eq) goto loc_820E2488;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r4,29
	ctx.r4.s64 = 29;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 80);
	// bne cr6,0x820e2448
	if (!ctx.cr6.eq) goto loc_820E2448;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r8,-7
	ctx.r9.s64 = ctx.r8.s64 + -7;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r29,r7,-7
	ctx.r29.s64 = ctx.r7.s64 + -7;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r29
	ctx.r6.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E2444;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2448:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// addi r29,r7,-9
	ctx.r29.s64 = ctx.r7.s64 + -9;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r29,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E2484;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2488:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e24fc
	if (ctx.cr6.eq) goto loc_820E24FC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820e24fc
	if (ctx.cr6.eq) goto loc_820E24FC;
	// lwz r7,4284(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r8,-9
	ctx.r6.s64 = ctx.r8.s64 + -9;
	// lwz r11,80(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 80);
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// lwz r7,12(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 12);
	// addi r11,r11,-9
	ctx.r11.s64 = ctx.r11.s64 + -9;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cntlzw r29,r9
	ctx.r29.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r11,r8,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r29,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E24F8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E24FC:
	// lwz r6,4284(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r4,29
	ctx.r4.s64 = 29;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// lwz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,80(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 80);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// addi r11,r9,-6
	ctx.r11.s64 = ctx.r9.s64 + -6;
	// addi r9,r8,-7
	ctx.r9.s64 = ctx.r8.s64 + -7;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r29,r7,-7
	ctx.r29.s64 = ctx.r7.s64 + -7;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cntlzw r11,r9
	ctx.r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r6,r29
	ctx.r6.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r6,r6,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E2558;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E255C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r4,29
	ctx.r4.s64 = 29;
	// lwz r9,4312(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// addi r9,r9,-6
	ctx.r9.s64 = ctx.r9.s64 + -6;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r7,80(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r5,88(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwz r8,80(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x820e25cc
	if (!ctx.cr6.eq) goto loc_820E25CC;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r8,-7
	ctx.r8.s64 = ctx.r8.s64 + -7;
	// addi r29,r7,-7
	ctx.r29.s64 = ctx.r7.s64 + -7;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r6,r29,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E25C8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E25CC:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r8,r8,-9
	ctx.r8.s64 = ctx.r8.s64 + -9;
	// addi r29,r7,-9
	ctx.r29.s64 = ctx.r7.s64 + -9;
	// lwz r7,12(r6)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r6.u32 + 12);
	// cntlzw r11,r8
	ctx.r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cntlzw r29,r29
	ctx.r29.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r8,r6,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r6,r29,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 27) & 0x1;
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bl 0x820de4f0
	ctx.lr = 0x820E2604;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2608:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bne cr6,0x820e2664
	if (!ctx.cr6.eq) goto loc_820E2664;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e2664
	if (!ctx.cr6.eq) goto loc_820E2664;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E2664:
	// lwz r7,-88(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -88);
	// li r4,30
	ctx.r4.s64 = 30;
	// lwz r6,244(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 244);
	// lwz r5,240(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 240);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E2678:
	// lwz r10,252(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 252);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// lwz r9,248(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 248);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,632(r1)
	REX_STORE_U64(ctx.r1.u32 + 632, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,648(r1)
	REX_STORE_U64(ctx.r1.u32 + 648, ctx.r8.u64);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lfd f8,632(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 632);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,648(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 648);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E271C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,204
	ctx.r6.s64 = ctx.r27.s64 + 204;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,64(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 64);
	// bl 0x820ddec0
	ctx.lr = 0x820E274C;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2750:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// beq cr6,0x820e3b90
	if (ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,256(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 256);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,168(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// std r10,664(r1)
	REX_STORE_U64(ctx.r1.u32 + 664, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,680(r1)
	REX_STORE_U64(ctx.r1.u32 + 680, ctx.r8.u64);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,664(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 664);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,680(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 680);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2800;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,196
	ctx.r6.s64 = ctx.r27.s64 + 196;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-7
	ctx.r10.s64 = ctx.r11.s64 + -7;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,92(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 92);
	// bl 0x820ddec0
	ctx.lr = 0x820E2830;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2834:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x820e2858
	if (ctx.cr6.eq) goto loc_820E2858;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// beq cr6,0x820e2858
	if (ctx.cr6.eq) goto loc_820E2858;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// beq cr6,0x820e2858
	if (ctx.cr6.eq) goto loc_820E2858;
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
loc_820E2858:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bne cr6,0x820e28b4
	if (!ctx.cr6.eq) goto loc_820E28B4;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e28b4
	if (!ctx.cr6.eq) goto loc_820E28B4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E28B4:
	// lwz r7,-84(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -84);
	// li r4,33
	ctx.r4.s64 = 33;
	// lwz r6,268(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 268);
	// lwz r5,264(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 264);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E28C8:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x820e28ec
	if (ctx.cr6.eq) goto loc_820E28EC;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// beq cr6,0x820e28ec
	if (ctx.cr6.eq) goto loc_820E28EC;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// beq cr6,0x820e28ec
	if (ctx.cr6.eq) goto loc_820E28EC;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
loc_820E28EC:
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820e2904
	if (ctx.cr6.eq) goto loc_820E2904;
	// lwz r29,72(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
loc_820E2904:
	// lwz r10,276(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 276);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,272(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 272);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,696(r1)
	REX_STORE_U64(ctx.r1.u32 + 696, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,712(r1)
	REX_STORE_U64(ctx.r1.u32 + 712, ctx.r8.u64);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,696(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 696);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,712(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 712);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E29A8;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// ori r7,r7,34463
	ctx.r7.u64 = ctx.r7.u64 | 34463;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,96(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// bl 0x820de4f0
	ctx.lr = 0x820E29E8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E29EC:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x820e2a10
	if (ctx.cr6.eq) goto loc_820E2A10;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// beq cr6,0x820e2a10
	if (ctx.cr6.eq) goto loc_820E2A10;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// beq cr6,0x820e2a10
	if (ctx.cr6.eq) goto loc_820E2A10;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
loc_820E2A10:
	// lwz r10,284(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 284);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,280(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 280);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,176(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// std r10,728(r1)
	REX_STORE_U64(ctx.r1.u32 + 728, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,744(r1)
	REX_STORE_U64(ctx.r1.u32 + 744, ctx.r8.u64);
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,728(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 728);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,744(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 744);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2AB4;
	sub_820DA5C0(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r10,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,100(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x820de4f0
	ctx.lr = 0x820E2AF4;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2AF8:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 21, ctx.xer);
	// beq cr6,0x820e2b14
	if (ctx.cr6.eq) goto loc_820E2B14;
	// cmpwi cr6,r10,23
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 23, ctx.xer);
	// beq cr6,0x820e2b14
	if (ctx.cr6.eq) goto loc_820E2B14;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
loc_820E2B14:
	// lwz r10,292(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 292);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,288(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 288);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// std r10,760(r1)
	REX_STORE_U64(ctx.r1.u32 + 760, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,776(r1)
	REX_STORE_U64(ctx.r1.u32 + 776, ctx.r8.u64);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,760(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 760);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,776(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 776);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2BB8;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,180
	ctx.r6.s64 = ctx.r27.s64 + 180;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-8
	ctx.r10.s64 = ctx.r11.s64 + -8;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,104(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 104);
	// bl 0x820ddec0
	ctx.lr = 0x820E2BE8;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2BEC:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,37
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 37, ctx.xer);
	// bne cr6,0x820e2c54
	if (!ctx.cr6.eq) goto loc_820E2C54;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e2c54
	if (!ctx.cr6.eq) goto loc_820E2C54;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E2C54:
	// lwz r7,-80(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -80);
	// li r4,37
	ctx.r4.s64 = 37;
	// lwz r6,300(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 300);
	// lwz r5,296(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 296);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E2C68:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,316(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 316);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,312(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 312);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,792(r1)
	REX_STORE_U64(ctx.r1.u32 + 792, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,808(r1)
	REX_STORE_U64(ctx.r1.u32 + 808, ctx.r8.u64);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// li r4,39
	ctx.r4.s64 = 39;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,792(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 792);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,808(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 808);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2D18;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820e2d30
	if (ctx.cr6.eq) goto loc_820E2D30;
	// lwz r6,72(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
loc_820E2D30:
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// ori r7,r7,34463
	ctx.r7.u64 = ctx.r7.u64 | 34463;
	// lwz r5,112(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// li r4,39
	ctx.r4.s64 = 39;
	// addi r11,r10,-9
	ctx.r11.s64 = ctx.r10.s64 + -9;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bl 0x820de4f0
	ctx.lr = 0x820E2D68;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2D6C:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,308(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 308);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,304(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 304);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r10,824(r1)
	REX_STORE_U64(ctx.r1.u32 + 824, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,840(r1)
	REX_STORE_U64(ctx.r1.u32 + 840, ctx.r8.u64);
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,824(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 824);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,840(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 840);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2E1C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r4,38
	ctx.r4.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,108(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-9
	ctx.r11.s64 = ctx.r10.s64 + -9;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x820e2e68
	if (!ctx.cr6.eq) goto loc_820E2E68;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E2E64;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2E68:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E2E78;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2E7C:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,324(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 324);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,320(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 320);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// std r10,856(r1)
	REX_STORE_U64(ctx.r1.u32 + 856, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,872(r1)
	REX_STORE_U64(ctx.r1.u32 + 872, ctx.r8.u64);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,856(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 856);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,872(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 872);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E2F2C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r6,r27,180
	ctx.r6.s64 = ctx.r27.s64 + 180;
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,-9
	ctx.r10.s64 = ctx.r11.s64 + -9;
	// li r7,2
	ctx.r7.s64 = 2;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// lwz r5,116(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// bl 0x820ddec0
	ctx.lr = 0x820E2F5C;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E2F60:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,41
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 41, ctx.xer);
	// bne cr6,0x820e2fc8
	if (!ctx.cr6.eq) goto loc_820E2FC8;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e2fc8
	if (!ctx.cr6.eq) goto loc_820E2FC8;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E2FC8:
	// lwz r7,-76(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -76);
	// li r4,41
	ctx.r4.s64 = 41;
	// lwz r6,332(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 332);
	// lwz r5,328(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 328);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E2FDC:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,340(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 340);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,336(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 336);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,184(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// std r10,888(r1)
	REX_STORE_U64(ctx.r1.u32 + 888, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,904(r1)
	REX_STORE_U64(ctx.r1.u32 + 904, ctx.r8.u64);
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,888(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 888);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,904(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 904);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E308C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,120(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-10
	ctx.r11.s64 = ctx.r10.s64 + -10;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x820e30d8
	if (!ctx.cr6.eq) goto loc_820E30D8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E30D4;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E30D8:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E30E8;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E30EC:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,348(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 348);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,344(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 344);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,192(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 192);
	// std r10,920(r1)
	REX_STORE_U64(ctx.r1.u32 + 920, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,936(r1)
	REX_STORE_U64(ctx.r1.u32 + 936, ctx.r8.u64);
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,920(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 920);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,936(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 936);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E319C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r5,124(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-10
	ctx.r11.s64 = ctx.r10.s64 + -10;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// bne cr6,0x820e31e8
	if (!ctx.cr6.eq) goto loc_820E31E8;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x820de4f0
	ctx.lr = 0x820E31E4;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E31E8:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x820de4f0
	ctx.lr = 0x820E31FC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3200:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,44
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 44, ctx.xer);
	// bne cr6,0x820e3268
	if (!ctx.cr6.eq) goto loc_820E3268;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e3268
	if (!ctx.cr6.eq) goto loc_820E3268;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E3268:
	// lwz r7,-72(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -72);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r6,356(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 356);
	// lwz r5,352(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 352);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E327C:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,364(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 364);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,360(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 360);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,200(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// std r10,952(r1)
	REX_STORE_U64(ctx.r1.u32 + 952, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,968(r1)
	REX_STORE_U64(ctx.r1.u32 + 968, ctx.r8.u64);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,952(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 952);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,968(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 968);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E332C;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,148(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-11
	ctx.r11.s64 = ctx.r10.s64 + -11;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x820e336c
	if (!ctx.cr6.eq) goto loc_820E336C;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x820ddec0
	ctx.lr = 0x820E3368;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E336C:
	// li r7,6
	ctx.r7.s64 = 6;
	// bl 0x820ddec0
	ctx.lr = 0x820E3374;
	sub_820DDEC0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3378:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,372(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 372);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,368(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 368);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,208(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// std r10,984(r1)
	REX_STORE_U64(ctx.r1.u32 + 984, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1000(r1)
	REX_STORE_U64(ctx.r1.u32 + 1000, ctx.r8.u64);
	// li r4,46
	ctx.r4.s64 = 46;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,984(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 984);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1000(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1000);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3428;
	sub_820DA5C0(ctx, base);
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,9999
	ctx.r7.s64 = 9999;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r4,46
	ctx.r4.s64 = 46;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,156(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 156);
	// bl 0x820de4f0
	ctx.lr = 0x820E3464;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3468:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,380(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 380);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,376(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 376);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,216(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// std r10,1016(r1)
	REX_STORE_U64(ctx.r1.u32 + 1016, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1032(r1)
	REX_STORE_U64(ctx.r1.u32 + 1032, ctx.r8.u64);
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1016(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1016);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1032(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1032);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3518;
	sub_820DA5C0(ctx, base);
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r7,9999
	ctx.r7.s64 = 9999;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// li r4,47
	ctx.r4.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,160(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 160);
	// bl 0x820de4f0
	ctx.lr = 0x820E3554;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3558:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,388(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 388);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,384(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 384);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,224(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 224);
	// std r10,1048(r1)
	REX_STORE_U64(ctx.r1.u32 + 1048, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1064(r1)
	REX_STORE_U64(ctx.r1.u32 + 1064, ctx.r8.u64);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1048(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1048);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1064(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1064);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3608;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r7,9999
	ctx.r7.s64 = 9999;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,-11
	ctx.r8.s64 = ctx.r11.s64 + -11;
	// li r4,48
	ctx.r4.s64 = 48;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,164(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// bl 0x820de4f0
	ctx.lr = 0x820E3644;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3648:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// bne cr6,0x820e36b0
	if (!ctx.cr6.eq) goto loc_820E36B0;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e36b0
	if (!ctx.cr6.eq) goto loc_820E36B0;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E36B0:
	// lwz r7,-68(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -68);
	// li r4,49
	ctx.r4.s64 = 49;
	// lwz r6,396(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 396);
	// lwz r5,392(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 392);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E36C4:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,404(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 404);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,400(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 400);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,232(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// std r10,1080(r1)
	REX_STORE_U64(ctx.r1.u32 + 1080, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1096(r1)
	REX_STORE_U64(ctx.r1.u32 + 1096, ctx.r8.u64);
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1080(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1080);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1096(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1096);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3774;
	sub_820DA5C0(ctx, base);
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,55
	ctx.r7.s64 = 55;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// lwz r5,152(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,4312(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// addi r11,r10,-12
	ctx.r11.s64 = ctx.r10.s64 + -12;
	// li r10,0
	ctx.r10.s64 = 0;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// beq cr6,0x820e37c0
	if (ctx.cr6.eq) goto loc_820E37C0;
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E37BC;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E37C0:
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// bl 0x820de4f0
	ctx.lr = 0x820E37D0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E37D4:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,412(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 412);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,408(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 408);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,240(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// std r10,1112(r1)
	REX_STORE_U64(ctx.r1.u32 + 1112, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1128(r1)
	REX_STORE_U64(ctx.r1.u32 + 1128, ctx.r8.u64);
	// li r4,51
	ctx.r4.s64 = 51;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1112(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1112);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1128(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1128);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3884;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r7,9999
	ctx.r7.s64 = 9999;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// li r4,51
	ctx.r4.s64 = 51;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,168(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 168);
	// bl 0x820de4f0
	ctx.lr = 0x820E38C0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E38C4:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,420(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 420);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,416(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 416);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,248(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 248);
	// std r10,1144(r1)
	REX_STORE_U64(ctx.r1.u32 + 1144, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1160(r1)
	REX_STORE_U64(ctx.r1.u32 + 1160, ctx.r8.u64);
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1144(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1144);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1160(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1160);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3974;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r7,9999
	ctx.r7.s64 = 9999;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// li r4,52
	ctx.r4.s64 = 52;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,172(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 172);
	// bl 0x820de4f0
	ctx.lr = 0x820E39B0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E39B4:
	// lwz r10,5252(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// bne cr6,0x820e3b90
	if (!ctx.cr6.eq) goto loc_820E3B90;
	// lwz r10,428(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 428);
	// fmuls f0,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f27.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// lwz r9,424(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 424);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// fmuls f12,f31,f26
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f26.f64));
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lwz r7,136(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// std r10,1176(r1)
	REX_STORE_U64(ctx.r1.u32 + 1176, ctx.r10.u64);
	// addi r9,r11,9
	ctx.r9.s64 = ctx.r11.s64 + 9;
	// std r8,1192(r1)
	REX_STORE_U64(ctx.r1.u32 + 1192, ctx.r8.u64);
	// li r4,53
	ctx.r4.s64 = 53;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f11,f0
	ctx.f11.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f11,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f11.u64);
	// fctiwz f10,f13
	ctx.f10.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f10.u64);
	// fctiwz f9,f12
	ctx.f9.s64 = std::isnan(ctx.f12.f64) ? int64_t(0x80000000U) : (ctx.f12.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f12.f64));
	// stfd f9,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f9.u64);
	// lfd f8,1176(r1)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r1.u32 + 1176);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f6,1192(r1)
	ctx.f6.u64 = REX_LOAD_U64(ctx.r1.u32 + 1192);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// lwz r6,108(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// subfic r11,r6,64
	ctx.xer.ca = ctx.r6.u32 <= 64;
	ctx.r11.u64 = static_cast<uint64_t>(64) - ctx.r6.u64;
	// subfic r8,r5,126
	ctx.xer.ca = ctx.r5.u32 <= 126;
	ctx.r8.u64 = static_cast<uint64_t>(126) - ctx.r5.u64;
	// subfic r6,r10,64
	ctx.xer.ca = ctx.r10.u32 <= 64;
	ctx.r6.u64 = static_cast<uint64_t>(64) - ctx.r10.u64;
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// rlwinm r5,r8,24,0,7
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF000000;
	// clrlwi r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// or r6,r5,r10
	ctx.r6.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r5,r11,8,16,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r11,r6,r8
	ctx.r11.u64 = ctx.r6.u64 | ctx.r8.u64;
	// or r8,r11,r5
	ctx.r8.u64 = ctx.r11.u64 | ctx.r5.u64;
	// fnmsubs f3,f30,f25,f4
	ctx.f3.f64 = double(float(-std::fma(ctx.f30.f64, ctx.f25.f64, -ctx.f4.f64)));
	// fsubs f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f28.f64));
	// bl 0x820da5c0
	ctx.lr = 0x820E3A64;
	sub_820DA5C0(ctx, base);
	// stw r28,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r19,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,4312(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4312);
	// li r7,9999
	ctx.r7.s64 = 9999;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// li r4,53
	ctx.r4.s64 = 53;
	// cntlzw r5,r8
	ctx.r5.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r8,r5,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r5,176(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 176);
	// bl 0x820de4f0
	ctx.lr = 0x820E3AA0;
	sub_820DE4F0(ctx, base);
	// b 0x820e3b90
	goto loc_820E3B90;
loc_820E3AA4:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x820e3b00
	if (!ctx.cr6.eq) goto loc_820E3B00;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e3b00
	if (!ctx.cr6.eq) goto loc_820E3B00;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E3B00:
	// lwz r7,-64(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -64);
	// li r4,54
	ctx.r4.s64 = 54;
	// lwz r6,436(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 436);
	// lwz r5,432(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 432);
	// b 0x820e3b80
	goto loc_820E3B80;
loc_820E3B14:
	// lwz r11,4300(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4300);
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bne cr6,0x820e3b70
	if (!ctx.cr6.eq) goto loc_820E3B70;
	// fmuls f0,f31,f22
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f22.f64));
	// fmuls f13,f31,f29
	ctx.f13.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fctiwz f12,f0
	ctx.f12.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f12,104(r1)
	REX_STORE_U64(ctx.r1.u32 + 104, ctx.f12.u64);
	// fctiwz f11,f13
	ctx.f11.s64 = std::isnan(ctx.f13.f64) ? int64_t(0x80000000U) : (ctx.f13.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f11.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,100(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,96
	ctx.xer.ca = ctx.r11.u32 <= 96;
	ctx.r11.u64 = static_cast<uint64_t>(96) - ctx.r11.u64;
	// subfic r9,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r9.u64 = static_cast<uint64_t>(127) - ctx.r10.u64;
	// rlwinm r8,r11,16,8,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r7,r9,24,0,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF000000;
	// rlwinm r6,r11,8,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF00;
	// or r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 | ctx.r8.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// or r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820e3b70
	if (!ctx.cr6.eq) goto loc_820E3B70;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_820E3B70:
	// lwz r7,-60(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + -60);
	// li r4,55
	ctx.r4.s64 = 55;
	// lwz r6,444(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 444);
	// lwz r5,440(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 440);
loc_820E3B80:
	// li r9,9
	ctx.r9.s64 = 9;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820da018
	ctx.lr = 0x820E3B90;
	sub_820DA018(ctx, base);
loc_820E3B90:
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// blt cr6,0x820df7cc
	if (ctx.cr6.lt) goto loc_820DF7CC;
	// addi r1,r1,1504
	ctx.r1.s64 = ctx.r1.s64 + 1504;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215ebbc
	ctx.lr = 0x820E3BB0;
	__restfpr_14(ctx, base);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120DA0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82120d78
	sub_82120D78(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A7588) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x821A7590;
	__savegprlr_14(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// stw r29,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// stw r29,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// stw r29,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// mr r14,r29
	ctx.r14.u64 = ctx.r29.u64;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// bl 0x8216b018
	ctx.lr = 0x821A75D8;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7608
	if (ctx.cr0.eq) goto loc_821A7608;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x821a760c
	goto loc_821A760C;
loc_821A7608:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_821A760C:
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A7624;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7654
	if (ctx.cr0.eq) goto loc_821A7654;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x821a7658
	goto loc_821A7658;
loc_821A7654:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_821A7658:
	// stw r30,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A7670;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a76a0
	if (ctx.cr0.eq) goto loc_821A76A0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x821a76a4
	goto loc_821A76A4;
loc_821A76A0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A76A4:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x821A76BC;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a76ec
	if (ctx.cr0.eq) goto loc_821A76EC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x821a76f0
	goto loc_821A76F0;
loc_821A76EC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A76F0:
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x8216b018
	ctx.lr = 0x821A7708;
	sub_8216B018(ctx, base);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7744
	if (ctx.cr0.eq) goto loc_821A7744;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// stw r24,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r29,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// b 0x821a7748
	goto loc_821A7748;
loc_821A7744:
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
loc_821A7748:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// lwz r23,24(r15)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r15.u32 + 24);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,44(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821a7e3c
	if (!ctx.cr0.eq) goto loc_821A7E3C;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r19,r11,16
	ctx.r19.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r16,24(r11)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r11,60(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 60);
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// rlwimi r9,r10,29,27,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x10) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFEF);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rlwinm r17,r9,29,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3;
	// beq cr6,0x821a77e0
	if (ctx.cr6.eq) goto loc_821A77E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r21,24(r11)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_821A77E0:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// addi r8,r1,124
	ctx.r8.s64 = ctx.r1.s64 + 124;
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8219e778
	ctx.lr = 0x821A7804;
	sub_8219E778(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821a7828
	if (!ctx.cr0.lt) goto loc_821A7828;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,1840
	ctx.r6.s64 = ctx.r11.s64 + 1840;
loc_821A7814:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x821afae0
	ctx.lr = 0x821A7824;
	sub_821AFAE0(ctx, base);
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A7828:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x821a7e3c
	if (ctx.cr6.eq) goto loc_821A7E3C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x821a7e3c
	if (ctx.cr6.eq) goto loc_821A7E3C;
	// lis r10,243
	ctx.r10.s64 = 15925248;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821a78d4
	if (!ctx.cr6.eq) goto loc_821A78D4;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7e3c
	if (ctx.cr6.eq) goto loc_821A7E3C;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r30,8(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x8216b018
	ctx.lr = 0x821A789C;
	sub_8216B018(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821a78ac
	if (ctx.cr0.eq) goto loc_821A78AC;
	// stw r29,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
	// b 0x821a78b0
	goto loc_821A78B0;
loc_821A78AC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A78B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7e34
	if (ctx.cr6.eq) goto loc_821A7E34;
	// stw r16,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// lwz r10,24(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,904(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 904);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,904(r26)
	REX_STORE_U32(ctx.r26.u32 + 904, ctx.r11.u32);
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A78D4:
	// addi r10,r1,140
	ctx.r10.s64 = ctx.r1.s64 + 140;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r29,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a3130
	ctx.lr = 0x821A78FC;
	sub_821A3130(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x821a7910
	if (!ctx.cr0.lt) goto loc_821A7910;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,2028
	ctx.r6.s64 = ctx.r11.s64 + 2028;
	// b 0x821a7814
	goto loc_821A7814;
loc_821A7910:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821a7c30
	if (ctx.cr6.lt) goto loc_821A7C30;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bgt cr6,0x821a7c30
	if (ctx.cr6.gt) goto loc_821A7C30;
	// lwz r11,56(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7bd0
	if (ctx.cr6.eq) goto loc_821A7BD0;
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821A7974:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x821a7984
	if (!ctx.cr6.lt) goto loc_821A7984;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A7984:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821a7b5c
	if (!ctx.cr6.lt) goto loc_821A7B5C;
	// li r5,268
	ctx.r5.s64 = 268;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8215ec60
	ctx.lr = 0x821A799C;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r16,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r16.u32);
	// stw r28,212(r1)
	REX_STORE_U32(ctx.r1.u32 + 212, ctx.r28.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r29,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r30,24(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7a20
	if (ctx.cr6.eq) goto loc_821A7A20;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
loc_821A79C8:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r1,220
	ctx.r11.s64 = ctx.r1.s64 + 220;
	// li r6,16
	ctx.r6.s64 = 16;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a52e0
	ctx.lr = 0x821A79E8;
	sub_821A52E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7bc0
	if (ctx.cr0.lt) goto loc_821A7BC0;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a7a10
	if (ctx.cr6.eq) goto loc_821A7A10;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,216(r1)
	REX_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_821A7A10:
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821a79c8
	if (!ctx.cr6.eq) goto loc_821A79C8;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
loc_821A7A20:
	// stw r29,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// b 0x821a7a60
	goto loc_821A7A60;
loc_821A7A28:
	// li r11,16
	ctx.r11.s64 = 16;
	// lwz r6,848(r26)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r26.u32 + 848);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a3668
	ctx.lr = 0x821A7A50;
	sub_821A3668(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7bc0
	if (ctx.cr0.lt) goto loc_821A7BC0;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,40(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_821A7A60:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// bne cr6,0x821a7a28
	if (!ctx.cr6.eq) goto loc_821A7A28;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r4,116(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A7A90;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7bc0
	if (ctx.cr0.lt) goto loc_821A7BC0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// bl 0x8216b018
	ctx.lr = 0x821A7AC0;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a7af0
	if (ctx.cr0.eq) goto loc_821A7AF0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r29.u32);
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// stw r29,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r29.u32);
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// b 0x821a7af4
	goto loc_821A7AF4;
loc_821A7AF0:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821A7AF4:
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7bb8
	if (ctx.cr6.eq) goto loc_821A7BB8;
	// lwz r11,216(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a7b44
	if (ctx.cr6.eq) goto loc_821A7B44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,272
	ctx.r3.s64 = 272;
	// bl 0x8216b018
	ctx.lr = 0x821A7B18;
	sub_8216B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x821a7bb8
	if (ctx.cr0.eq) goto loc_821A7BB8;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// li r5,268
	ctx.r5.s64 = 268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x821A7B30;
	sub_8215E640(ctx, base);
	// stw r29,268(r31)
	REX_STORE_U32(ctx.r31.u32 + 268, ctx.r29.u32);
	// addi r11,r31,268
	ctx.r11.s64 = ctx.r31.s64 + 268;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// stw r31,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_821A7B44:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8219e568
	ctx.lr = 0x821A7B4C;
	sub_8219E568(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r27,12(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x821a7974
	if (!ctx.cr6.eq) goto loc_821A7974;
loc_821A7B5C:
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r29,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r10.u32);
	// beq cr6,0x821a7c1c
	if (ctx.cr6.eq) goto loc_821A7C1C;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821a7c1c
	if (!ctx.cr6.lt) goto loc_821A7C1C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1968
	ctx.r6.s64 = ctx.r11.s64 + 1968;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x821afae0
	ctx.lr = 0x821A7BA8;
	sub_821AFAE0(ctx, base);
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x821a7e5c
	goto loc_821A7E5C;
loc_821A7BB8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_821A7BC0:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8219e568
	ctx.lr = 0x821A7BC8;
	sub_8219E568(ctx, base);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A7BD0:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_821A7BD4:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x821a7be4
	if (!ctx.cr6.lt) goto loc_821A7BE4;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821A7BE4:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821a7b5c
	if (!ctx.cr6.lt) goto loc_821A7B5C;
	// addi r11,r28,0
	ctx.r11.s64 = ctx.r28.s64 + 0;
	// lwz r3,100(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A7C0C;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// b 0x821a7bd4
	goto loc_821A7BD4;
loc_821A7C1C:
	// lwz r11,860(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 860);
	// lwz r27,96(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// stw r11,860(r26)
	REX_STORE_U32(ctx.r26.u32 + 860, ctx.r11.u32);
	// b 0x821a7c90
	goto loc_821A7C90;
loc_821A7C30:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,128(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8216b018
	ctx.lr = 0x821A7C3C;
	sub_8216B018(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// beq 0x821a7e34
	if (ctx.cr0.eq) goto loc_821A7E34;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215ec60
	ctx.lr = 0x821A7C58;
	sub_8215EC60(ctx, base);
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8219eee0
	ctx.lr = 0x821A7C6C;
	sub_8219EEE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lwz r5,128(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x821a2bd0
	ctx.lr = 0x821A7C88;
	sub_821A2BD0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
loc_821A7C90:
	// stw r29,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r29.u32);
	// lwz r31,28(r15)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821a7d44
	if (ctx.cr6.eq) goto loc_821A7D44;
loc_821A7CA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a7d38
	if (ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821a7d38
	if (!ctx.cr6.eq) goto loc_821A7D38;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a7d20
	if (!ctx.cr6.eq) goto loc_821A7D20;
	// addi r7,r25,48
	ctx.r7.s64 = ctx.r25.s64 + 48;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821a71f8
	ctx.lr = 0x821A7CE4;
	sub_821A71F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821a7cf8
	if (!ctx.cr0.lt) goto loc_821A7CF8;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x821a7cf8
	if (ctx.cr6.lt) goto loc_821A7CF8;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
loc_821A7CF8:
	// lwz r11,40(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,40(r25)
	REX_STORE_U32(ctx.r25.u32 + 40, ctx.r11.u32);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a7ca0
	if (!ctx.cr6.eq) goto loc_821A7CA0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bge cr6,0x821a7d44
	if (!ctx.cr6.lt) goto loc_821A7D44;
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A7D20:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,1904
	ctx.r6.s64 = ctx.r11.s64 + 1904;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// addi r3,r26,40
	ctx.r3.s64 = ctx.r26.s64 + 40;
	// bl 0x821afae0
	ctx.lr = 0x821A7D38;
	sub_821AFAE0(ctx, base);
loc_821A7D38:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A7D44:
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// stw r29,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r10,16(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// stw r11,8(r10)
	REX_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r4,140(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r11,16(r22)
	REX_STORE_U32(ctx.r22.u32 + 16, ctx.r11.u32);
	// bl 0x821a2d00
	ctx.lr = 0x821A7D74;
	sub_821A2D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A7D90;
	sub_821A2D00(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A7DA8;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,40(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 40);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A7DC0;
	sub_821A2B70(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821a7e3c
	if (ctx.cr0.lt) goto loc_821A7E3C;
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,12(r27)
	REX_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// stw r11,16(r18)
	REX_STORE_U32(ctx.r18.u32 + 16, ctx.r11.u32);
	// stw r16,32(r25)
	REX_STORE_U32(ctx.r25.u32 + 32, ctx.r16.u32);
	// stw r21,36(r25)
	REX_STORE_U32(ctx.r25.u32 + 36, ctx.r21.u32);
	// lwz r11,140(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// stw r11,64(r25)
	REX_STORE_U32(ctx.r25.u32 + 64, ctx.r11.u32);
	// stw r30,60(r25)
	REX_STORE_U32(ctx.r25.u32 + 60, ctx.r30.u32);
	// stw r10,68(r25)
	REX_STORE_U32(ctx.r25.u32 + 68, ctx.r10.u32);
	// stw r23,44(r25)
	REX_STORE_U32(ctx.r25.u32 + 44, ctx.r23.u32);
	// lwz r11,892(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 892);
	// stw r11,52(r25)
	REX_STORE_U32(ctx.r25.u32 + 52, ctx.r11.u32);
	// lwz r11,20(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 20);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,56(r25)
	REX_STORE_U32(ctx.r25.u32 + 56, ctx.r11.u32);
	// lwz r11,848(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 848);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r25,892(r26)
	REX_STORE_U32(ctx.r26.u32 + 892, ctx.r25.u32);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// stw r11,848(r26)
	REX_STORE_U32(ctx.r26.u32 + 848, ctx.r11.u32);
	// b 0x821a7e3c
	goto loc_821A7E3C;
loc_821A7E34:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_821A7E3C:
	// lwz r30,100(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7e5c
	if (ctx.cr6.eq) goto loc_821A7E5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A7E50;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A7E5C;
	sub_8216B138(ctx, base);
loc_821A7E5C:
	// lwz r30,104(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7e7c
	if (ctx.cr6.eq) goto loc_821A7E7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A7E70;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A7E7C;
	sub_8216B138(ctx, base);
loc_821A7E7C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a7e98
	if (ctx.cr6.eq) goto loc_821A7E98;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A7E8C;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A7E98;
	sub_8216B138(ctx, base);
loc_821A7E98:
	// lwz r30,108(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821a7eb8
	if (ctx.cr6.eq) goto loc_821A7EB8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821a2980
	ctx.lr = 0x821A7EAC;
	sub_821A2980(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A7EB8;
	sub_8216B138(ctx, base);
loc_821A7EB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a7ed4
	if (ctx.cr6.eq) goto loc_821A7ED4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821a5148
	ctx.lr = 0x821A7EC8;
	sub_821A5148(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A7ED4;
	sub_8216B138(ctx, base);
loc_821A7ED4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,136(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// bl 0x8216b138
	ctx.lr = 0x821A7EE0;
	sub_8216B138(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CB138) {
	REX_FUNC_PROLOGUE();
	// lwz r8,28(r5)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821cb198
	if (ctx.cr6.eq) goto loc_821CB198;
	// lwz r7,8(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_821CB148:
	// lwz r10,16(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_821CB150:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r6,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r6.u64;
	// beq 0x821cb174
	if (ctx.cr0.eq) goto loc_821CB174;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cb150
	if (ctx.cr6.eq) goto loc_821CB150;
loc_821CB174:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cb1a0
	if (ctx.cr0.eq) goto loc_821CB1A0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821cb18c
	if (!ctx.cr6.lt) goto loc_821CB18C;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// b 0x821cb190
	goto loc_821CB190;
loc_821CB18C:
	// lwz r8,12(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
loc_821CB190:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821cb148
	if (!ctx.cr6.eq) goto loc_821CB148;
loc_821CB198:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821CB1A0:
	// lwz r3,20(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CB8D0) {
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
loc_821CB8EC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821cb994
	if (ctx.cr6.eq) goto loc_821CB994;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821cb91c
	if (!ctx.cr6.eq) goto loc_821CB91C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x821cb8d0
	ctx.lr = 0x821CB90C;
	sub_821CB8D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x821cb98c
	if (!ctx.cr0.eq) goto loc_821CB98C;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x821cb8ec
	goto loc_821CB8EC;
loc_821CB91C:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x821cb958
	if (ctx.cr6.eq) goto loc_821CB958;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821cb994
	if (!ctx.cr6.eq) goto loc_821CB994;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bgt cr6,0x821cb97c
	if (ctx.cr6.gt) goto loc_821CB97C;
	// cmpwi cr6,r11,28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 28, ctx.xer);
	// bge cr6,0x821cb950
	if (!ctx.cr6.lt) goto loc_821CB950;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821cb98c
	if (ctx.cr6.lt) goto loc_821CB98C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x821cb96c
	if (ctx.cr6.gt) goto loc_821CB96C;
loc_821CB950:
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// b 0x821cb8ec
	goto loc_821CB8EC;
loc_821CB958:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-6
	ctx.r11.s64 = ctx.r11.s64 + -6;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x821cb998
	goto loc_821CB998;
loc_821CB96C:
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x821cb98c
	if (!ctx.cr6.gt) goto loc_821CB98C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// b 0x821cb988
	goto loc_821CB988;
loc_821CB97C:
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// blt cr6,0x821cb98c
	if (ctx.cr6.lt) goto loc_821CB98C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
loc_821CB988:
	// ble cr6,0x821cb994
	if (!ctx.cr6.gt) goto loc_821CB994;
loc_821CB98C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821cb998
	goto loc_821CB998;
loc_821CB994:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CB998:
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

DEFINE_REX_FUNC(sub_821CCFC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821CCFC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821c7078
	ctx.lr = 0x821CCFE4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd008
	if (ctx.cr0.eq) goto loc_821CD008;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-30124
	ctx.r6.s64 = ctx.r11.s64 + -30124;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c7240
	ctx.lr = 0x821CD000;
	sub_821C7240(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821cd00c
	goto loc_821CD00C;
loc_821CD008:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821CD00C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821cd068
	if (ctx.cr6.eq) goto loc_821CD068;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821c7078
	ctx.lr = 0x821CD01C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cd044
	if (ctx.cr0.eq) goto loc_821CD044;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x821c7d20
	ctx.lr = 0x821CD03C;
	sub_821C7D20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821cd048
	goto loc_821CD048;
loc_821CD044:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821CD048:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821cd068
	if (ctx.cr6.eq) goto loc_821CD068;
	// stw r4,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821cccb0
	ctx.lr = 0x821CD060;
	sub_821CCCB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821cd070
	if (!ctx.cr0.lt) goto loc_821CD070;
loc_821CD068:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cd074
	goto loc_821CD074;
loc_821CD070:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821CD074:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D0D30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821D0D38;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r29,2
	ctx.r29.s64 = 2;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bgt cr6,0x821d0dbc
	if (ctx.cr6.gt) goto loc_821D0DBC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x821d0db4
	if (!ctx.cr6.lt) goto loc_821D0DB4;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x821d0dac
	if (ctx.cr6.lt) goto loc_821D0DAC;
	// bne cr6,0x821d0d78
	if (!ctx.cr6.eq) goto loc_821D0D78;
loc_821D0D74:
	// li r29,2
	ctx.r29.s64 = 2;
loc_821D0D78:
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x821c7078
	ctx.lr = 0x821D0D80;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0ddc
	if (ctx.cr0.eq) goto loc_821D0DDC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
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
	ctx.lr = 0x821D0DA4;
	sub_821C9DE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821d0de0
	goto loc_821D0DE0;
loc_821D0DAC:
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x821d0d78
	goto loc_821D0D78;
loc_821D0DB4:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x821d0d78
	goto loc_821D0D78;
loc_821D0DBC:
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x821d0d78
	if (ctx.cr6.lt) goto loc_821D0D78;
	// cmpwi cr6,r31,9
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 9, ctx.xer);
	// ble cr6,0x821d0d74
	if (!ctx.cr6.gt) goto loc_821D0D74;
	// cmpwi cr6,r31,13
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 13, ctx.xer);
	// bgt cr6,0x821d0d78
	if (ctx.cr6.gt) goto loc_821D0D78;
	// li r29,3
	ctx.r29.s64 = 3;
	// b 0x821d0d78
	goto loc_821D0D78;
loc_821D0DDC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D0DE0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x821d0df0
	if (!ctx.cr6.eq) goto loc_821D0DF0;
loc_821D0DE8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d0ed8
	goto loc_821D0ED8;
loc_821D0DF0:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D0DF8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0e20
	if (ctx.cr0.eq) goto loc_821D0E20;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c8ae8
	ctx.lr = 0x821D0E1C;
	sub_821C8AE8(ctx, base);
	// b 0x821d0e24
	goto loc_821D0E24;
loc_821D0E20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D0E24:
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d0de8
	if (ctx.cr6.eq) goto loc_821D0DE8;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// li r3,64
	ctx.r3.s64 = 64;
	// bne cr6,0x821d0e5c
	if (!ctx.cr6.eq) goto loc_821D0E5C;
	// bl 0x821c7078
	ctx.lr = 0x821D0E40;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0e7c
	if (ctx.cr0.eq) goto loc_821D0E7C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821ca238
	ctx.lr = 0x821D0E58;
	sub_821CA238(ctx, base);
	// b 0x821d0e80
	goto loc_821D0E80;
loc_821D0E5C:
	// bl 0x821c7078
	ctx.lr = 0x821D0E60;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0e7c
	if (ctx.cr0.eq) goto loc_821D0E7C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821ca288
	ctx.lr = 0x821D0E78;
	sub_821CA288(ctx, base);
	// b 0x821d0e80
	goto loc_821D0E80;
loc_821D0E7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D0E80:
	// rotlwi r11,r3,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d0de8
	if (ctx.cr6.eq) goto loc_821D0DE8;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D0E98;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d0eb8
	if (ctx.cr0.eq) goto loc_821D0EB8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,32(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-29408
	ctx.r6.s64 = ctx.r11.s64 + -29408;
	// bl 0x821c7240
	ctx.lr = 0x821D0EB4;
	sub_821C7240(ctx, base);
	// b 0x821d0ebc
	goto loc_821D0EBC;
loc_821D0EB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D0EBC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d0de8
	if (ctx.cr6.eq) goto loc_821D0DE8;
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D0ED4;
	sub_821CEFE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821D0ED8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821DA970) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821DA978;
	__savegprlr_28(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// b 0x821da9b8
	goto loc_821DA9B8;
loc_821DA998:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x821da9c4
	if (ctx.cr6.eq) goto loc_821DA9C4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x821da9c4
	if (ctx.cr6.eq) goto loc_821DA9C4;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x821da9c4
	if (ctx.cr6.eq) goto loc_821DA9C4;
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
loc_821DA9B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821da998
	if (!ctx.cr6.eq) goto loc_821DA998;
	// b 0x821da9c8
	goto loc_821DA9C8;
loc_821DA9C4:
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_821DA9C8:
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821daa30
	if (!ctx.cr0.eq) goto loc_821DAA30;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x821da9f4
	if (ctx.cr6.eq) goto loc_821DA9F4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3064
	ctx.r5.s64 = 3064;
	// addi r6,r11,-24176
	ctx.r6.s64 = ctx.r11.s64 + -24176;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cc878
	ctx.lr = 0x821DA9F0;
	sub_821CC878(ctx, base);
	// b 0x821dab40
	goto loc_821DAB40;
loc_821DA9F4:
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// lis r12,26
	ctx.r12.s64 = 1703936;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r11,-32226
	ctx.r11.s64 = -2111963136;
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// lwz r3,4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r7,r11,-22232
	ctx.r7.s64 = ctx.r11.s64 + -22232;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// and r4,r10,r12
	ctx.r4.u64 = ctx.r10.u64 & ctx.r12.u64;
	// bl 0x8224c3a8
	ctx.lr = 0x821DAA20;
	sub_8224C3A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821dab40
	if (ctx.cr0.lt) goto loc_821DAB40;
	// lwz r3,116(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x821dab78
	goto loc_821DAB78;
loc_821DAA30:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821df030
	ctx.lr = 0x821DAA3C;
	sub_821DF030(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x821daae4
	if (!ctx.cr6.eq) goto loc_821DAAE4;
	// lis r12,26
	ctx.r12.s64 = 1703936;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,4(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// ori r12,r12,3
	ctx.r12.u64 = ctx.r12.u64 | 3;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,0
	ctx.r6.s64 = 0;
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e4090
	ctx.lr = 0x821DAA6C;
	sub_821E4090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821dab38
	if (ctx.cr0.lt) goto loc_821DAB38;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DAA88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821c7030
	ctx.lr = 0x821DAA94;
	sub_821C7030(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x821dab38
	if (ctx.cr0.eq) goto loc_821DAB38;
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DAAB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x821DAAC0;
	sub_8215E640(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821dab04
	if (ctx.cr6.eq) goto loc_821DAB04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DAADC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// b 0x821dab04
	goto loc_821DAB04;
loc_821DAAE4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3201
	ctx.r5.s64 = 3201;
	// addi r6,r11,-24224
	ctx.r6.s64 = ctx.r11.s64 + -24224;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cc8f0
	ctx.lr = 0x821DAAFC;
	sub_821CC8F0(ctx, base);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821DAB04:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x821c7078
	ctx.lr = 0x821DAB0C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821dab2c
	if (ctx.cr0.eq) goto loc_821DAB2C;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r29,40
	ctx.r4.s64 = ctx.r29.s64 + 40;
	// bl 0x821ca770
	ctx.lr = 0x821DAB24;
	sub_821CA770(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821dab30
	goto loc_821DAB30;
loc_821DAB2C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_821DAB30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821dab6c
	if (!ctx.cr6.eq) goto loc_821DAB6C;
loc_821DAB38:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e1d60
	ctx.lr = 0x821DAB40;
	sub_821E1D60(ctx, base);
loc_821DAB40:
	// lwz r3,112(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r11.u32);
	// beq cr6,0x821dab64
	if (ctx.cr6.eq) goto loc_821DAB64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821DAB64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821DAB64:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821dab78
	goto loc_821DAB78;
loc_821DAB6C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821e1d60
	ctx.lr = 0x821DAB74;
	sub_821E1D60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821DAB78:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E2548) {
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
	// bl 0x821e2430
	ctx.lr = 0x821E2584;
	sub_821E2430(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E49F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821E4A00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E4A28:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x821e4a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E4A28;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
	// stw r8,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// addi r7,r31,44
	ctx.r7.s64 = ctx.r31.s64 + 44;
	// stw r29,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// addi r8,r31,52
	ctx.r8.s64 = ctx.r31.s64 + 52;
	// stw r30,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// bl 0x821e48e8
	ctx.lr = 0x821E4A64;
	sub_821E48E8(ctx, base);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lhz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r29.u32 + 8);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// stw r30,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E5040) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821e506c
	if (!ctx.cr6.eq) goto loc_821E506C;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821e505c
	if (ctx.cr6.lt) goto loc_821E505C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821E505C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821e50a0
	goto loc_821E50A0;
loc_821E506C:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lhz r10,10(r10)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e5088
	if (ctx.cr6.lt) goto loc_821E5088;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e5094
	goto loc_821E5094;
loc_821E5088:
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821E5094:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_821E50A0:
	// not r3,r11
	ctx.r3.u64 = ~ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E5530) {
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
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// rlwinm. r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e5564
	if (ctx.cr0.eq) goto loc_821E5564;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r11,r6,r5
	ctx.r11.u64 = ctx.r5.u64 - ctx.r6.u64;
loc_821E5550:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821e5550
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E5550;
loc_821E5564:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x821739f0
	ctx.lr = 0x821E556C;
	sub_821739F0(ctx, base);
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

DEFINE_REX_FUNC(sub_821E6610) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821E6618;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,24(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lwz r6,32(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// lhz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821e68d8
	if (ctx.cr6.lt) goto loc_821E68D8;
	// beq cr6,0x821e6858
	if (ctx.cr6.eq) goto loc_821E6858;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821e67a8
	if (ctx.cr6.lt) goto loc_821E67A8;
	// beq cr6,0x821e6704
	if (ctx.cr6.eq) goto loc_821E6704;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// beq cr6,0x821e6668
	if (ctx.cr6.eq) goto loc_821E6668;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x821e6aac
	goto loc_821E6AAC;
loc_821E6668:
	// lwz r10,52(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 52);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 8);
	// divwu r28,r9,r10
	ctx.r28.u64 = uint32_t(ctx.r10.u32 ? ctx.r9.u32 / ctx.r10.u32 : 0);
	// twllei r10,0
	if (ctx.r10.s32 == 0 || ctx.r10.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821e6688
	if (!ctx.cr6.gt) goto loc_821E6688;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_821E6688:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821e66fc
	if (ctx.cr6.eq) goto loc_821E66FC;
loc_821E6694:
	// lhz r11,10(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 10);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821e66f0
	if (ctx.cr0.eq) goto loc_821E66F0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_821E66A8:
	// lwz r11,56(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 56);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwzx r31,r30,r11
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x821e6278
	ctx.lr = 0x821E66C8;
	sub_821E6278(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821e6aac
	if (ctx.cr0.lt) goto loc_821E6AAC;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhz r10,10(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 10);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// blt cr6,0x821e66a8
	if (ctx.cr6.lt) goto loc_821E66A8;
loc_821E66F0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x821e6694
	if (ctx.cr6.lt) goto loc_821E6694;
loc_821E66FC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821e6aac
	goto loc_821E6AAC;
loc_821E6704:
	// lhz r9,6(r26)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 8);
	// divwu r3,r11,r9
	ctx.r3.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821e6720
	if (!ctx.cr6.gt) goto loc_821E6720;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821E6720:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e68d0
	if (ctx.cr6.eq) goto loc_821E68D0;
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
loc_821E6730:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821e6798
	if (ctx.cr6.eq) goto loc_821E6798;
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
loc_821E6740:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6788
	if (ctx.cr6.eq) goto loc_821E6788;
loc_821E674C:
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// ble cr6,0x821e675c
	if (!ctx.cr6.gt) goto loc_821E675C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821e6774
	goto loc_821E6774;
loc_821E675C:
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_821E6774:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e674c
	if (ctx.cr6.lt) goto loc_821E674C;
loc_821E6788:
	// lhz r9,6(r26)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821e6740
	if (ctx.cr6.lt) goto loc_821E6740;
loc_821E6798:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821e6730
	if (ctx.cr6.lt) goto loc_821E6730;
	// b 0x821e68d0
	goto loc_821E68D0;
loc_821E67A8:
	// lhz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 8);
	// divwu r3,r11,r8
	ctx.r3.u64 = uint32_t(ctx.r8.u32 ? ctx.r11.u32 / ctx.r8.u32 : 0);
	// twllei r8,0
	if (ctx.r8.s32 == 0 || ctx.r8.u32 < 0u) ppc_trap(ctx, base, 0);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821e67c4
	if (!ctx.cr6.gt) goto loc_821E67C4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821E67C4:
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x821e68ec
	if (ctx.cr6.eq) goto loc_821E68EC;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e68d0
	if (ctx.cr6.eq) goto loc_821E68D0;
	// addi r4,r6,-4
	ctx.r4.s64 = ctx.r6.s64 + -4;
loc_821E67E0:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e6848
	if (ctx.cr6.eq) goto loc_821E6848;
loc_821E67EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e6838
	if (ctx.cr6.eq) goto loc_821E6838;
loc_821E67F8:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x821e6808
	if (!ctx.cr6.gt) goto loc_821E6808;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821e6824
	goto loc_821E6824;
loc_821E6808:
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_821E6824:
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e67f8
	if (ctx.cr6.lt) goto loc_821E67F8;
loc_821E6838:
	// lhz r8,4(r26)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x821e67ec
	if (ctx.cr6.lt) goto loc_821E67EC;
loc_821E6848:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x821e67e0
	if (ctx.cr6.lt) goto loc_821E67E0;
	// b 0x821e68d0
	goto loc_821E68D0;
loc_821E6858:
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 8);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821e686c
	if (!ctx.cr6.gt) goto loc_821E686C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821E686C:
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x821e68ec
	if (ctx.cr6.eq) goto loc_821E68EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e68d0
	if (ctx.cr6.eq) goto loc_821E68D0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r9,r6,-4
	ctx.r9.s64 = ctx.r6.s64 + -4;
loc_821E688C:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e68c8
	if (ctx.cr6.eq) goto loc_821E68C8;
loc_821E6898:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x821e68a8
	if (!ctx.cr6.gt) goto loc_821E68A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x821e68b4
	goto loc_821E68B4;
loc_821E68A8:
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r5
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
loc_821E68B4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821e6898
	if (ctx.cr6.lt) goto loc_821E6898;
loc_821E68C8:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x821e688c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E688C;
loc_821E68D0:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// b 0x821e68ec
	goto loc_821E68EC;
loc_821E68D8:
	// lhz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 8);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x821e68ec
	if (!ctx.cr6.gt) goto loc_821E68EC;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_821E68EC:
	// lhz r10,2(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 2);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x821e697c
	if (ctx.cr6.eq) goto loc_821E697C;
	// lwz r11,52(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x821e693c
	if (ctx.cr6.eq) goto loc_821E693C;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x821e6978
	if (!ctx.cr6.eq) goto loc_821E6978;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6978
	if (ctx.cr6.eq) goto loc_821E6978;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r11,r6,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r6.u64;
loc_821E6924:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r10
	REX_STORE_U32(ctx.r10.u32, ctx.f0.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821e6924
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6924;
	// b 0x821e6978
	goto loc_821E6978;
loc_821E693C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6978
	if (ctx.cr6.eq) goto loc_821E6978;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r9,r6,r25
	ctx.r9.u64 = ctx.r25.u64 - ctx.r6.u64;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_821E6958:
	// lfsx f13,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x821e696c
	if (!ctx.cr6.eq) goto loc_821E696C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821E696C:
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821e6958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6958;
loc_821E6978:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
loc_821E697C:
	// lhz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r24.u32 + 8);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x821e6a5c
	if (ctx.cr0.eq) goto loc_821E6A5C;
	// lhz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x821e69a0
	if (ctx.cr6.eq) goto loc_821E69A0;
	// lhz r11,6(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
	// lhz r10,4(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// b 0x821e69a8
	goto loc_821E69A8;
loc_821E69A0:
	// lhz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// lhz r10,6(r26)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r26.u32 + 6);
loc_821E69A8:
	// clrlwi. r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x821e6a5c
	if (ctx.cr0.eq) goto loc_821E6A5C;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821e69c4
	if (!ctx.cr6.eq) goto loc_821E69C4;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r4,r9,-8444
	ctx.r4.s64 = ctx.r9.s64 + -8444;
	// b 0x821e69cc
	goto loc_821E69CC;
loc_821E69C4:
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r4,r9,-8428
	ctx.r4.s64 = ctx.r9.s64 + -8428;
loc_821E69CC:
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// mullw. r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r7,r9,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// beq 0x821e6a58
	if (ctx.cr0.eq) goto loc_821E6A58;
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
loc_821E69E4:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r5,r11,r5
	ctx.r5.u64 = ctx.r5.u64 - ctx.r11.u64;
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821e6a20
	if (!ctx.cr6.gt) goto loc_821E6A20;
	// subf r31,r11,r7
	ctx.r31.u64 = ctx.r7.u64 - ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_821E6A04:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r31,r10,2,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r4
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
	// bdnz 0x821e6a04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6A04;
loc_821E6A20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e6a50
	if (ctx.cr6.eq) goto loc_821E6A50;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821E6A30:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r31,r5,r10
	ctx.r31.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r25
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// stwx r31,r30,r6
	REX_STORE_U32(ctx.r30.u32 + ctx.r6.u32, ctx.r31.u32);
	// bdnz 0x821e6a30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821E6A30;
loc_821E6A50:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x821e69e4
	if (!ctx.cr6.eq) goto loc_821E69E4;
loc_821E6A58:
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
loc_821E6A5C:
	// lwz r10,44(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// lhz r11,12(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 12);
	// mullw r7,r10,r3
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821e6a74
	if (!ctx.cr6.gt) goto loc_821E6A74;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_821E6A74:
	// lwz r10,28(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e6a8c
	if (!ctx.cr6.eq) goto loc_821E6A8C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821e6aac
	goto loc_821E6AAC;
loc_821E6A8C:
	// lhz r11,10(r24)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r24.u32 + 10);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r4,r11,r22
	ctx.r4.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bctrl 
	ctx.lr = 0x821E6AA4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_821E6AAC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EAFA8) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,620(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 620);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EFE90) {
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
	// addi r4,r11,-4516
	ctx.r4.s64 = ctx.r11.s64 + -4516;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFEA8;
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

DEFINE_REX_FUNC(sub_821F00D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821F00E0;
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
	ctx.lr = 0x821F00F4;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f0114
	if (ctx.cr0.lt) goto loc_821F0114;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-4264
	ctx.r4.s64 = ctx.r11.s64 + -4264;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0114;
	sub_821EB2A0(ctx, base);
loc_821F0114:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F0508) {
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
	// addi r4,r11,-3856
	ctx.r4.s64 = ctx.r11.s64 + -3856;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0520;
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

DEFINE_REX_FUNC(sub_821F2250) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x821F2258;
	__savegprlr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F2270;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-6552
	ctx.r4.s64 = ctx.r11.s64 + -6552;
	// bl 0x821eb2a0
	ctx.lr = 0x821F2288;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-6560
	ctx.r4.s64 = ctx.r10.s64 + -6560;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,388(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 388);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F22BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r24,r11,-12512
	ctx.r24.s64 = ctx.r11.s64 + -12512;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F22D8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// clrlwi r30,r11,12
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x821F231C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F234C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,180
	ctx.r6.s64 = ctx.r1.s64 + 180;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x821F238C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821F23C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r6,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r26,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r26,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r26,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821f17c8
	ctx.lr = 0x821F240C;
	sub_821F17C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r25,r11,-6512
	ctx.r25.s64 = ctx.r11.s64 + -6512;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x821eb028
	ctx.lr = 0x821F242C;
	sub_821EB028(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,484(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 484);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r10,0,0,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// bctrl 
	ctx.lr = 0x821F2458;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r28,r8,-6488
	ctx.r28.s64 = ctx.r8.s64 + -6488;
	// addi r27,r9,4852
	ctx.r27.s64 = ctx.r9.s64 + 4852;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r29,r10,-6500
	ctx.r29.s64 = ctx.r10.s64 + -6500;
	// beq cr6,0x821f250c
	if (ctx.cr6.eq) goto loc_821F250C;
loc_821F2488:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F2490;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821a4f40
	ctx.lr = 0x821F24AC;
	sub_821A4F40(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F24BC;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,480(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 480);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F24E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F24F4;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f2488
	if (ctx.cr6.lt) goto loc_821F2488;
loc_821F250C:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f25c0
	if (ctx.cr6.eq) goto loc_821F25C0;
loc_821F2518:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821F252C;
	sub_821A4F40(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x821a4f40
	ctx.lr = 0x821F2540;
	sub_821A4F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F2548;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F2560;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821f2588
	if (ctx.cr6.eq) goto loc_821F2588;
	// lwz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
	// b 0x821f258c
	goto loc_821F258C;
loc_821F2588:
	// lwz r11,460(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 460);
loc_821F258C:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F2594;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F25A8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f2518
	if (ctx.cr6.lt) goto loc_821F2518;
loc_821F25C0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821f25e8
	if (ctx.cr6.eq) goto loc_821F25E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,564(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 564);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F25E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
loc_821F25E8:
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821f268c
	if (!ctx.cr6.gt) goto loc_821F268C;
loc_821F25F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821F260C;
	sub_821A4F40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F2614;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F262C;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x821f2654
	if (ctx.cr6.eq) goto loc_821F2654;
	// lwz r11,456(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// b 0x821f2658
	goto loc_821F2658;
loc_821F2654:
	// lwz r11,464(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 464);
loc_821F2658:
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821F2660;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F2674;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f2690
	if (ctx.cr0.lt) goto loc_821F2690;
	// lwz r11,1816(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 1816);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f25f8
	if (ctx.cr6.lt) goto loc_821F25F8;
loc_821F268C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F2690:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FC348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821FC350;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r25,r11,0,0,11
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r28,r11,12
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFF;
	// lis r24,4336
	ctx.r24.s64 = 284164096;
	// beq cr6,0x821fc4b8
	if (ctx.cr6.eq) goto loc_821FC4B8;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821fc3f0
	if (ctx.cr6.eq) goto loc_821FC3F0;
	// lis r11,29520
	ctx.r11.s64 = 1934622720;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc3e4
	if (ctx.cr6.eq) goto loc_821FC3E4;
	// lis r11,29536
	ctx.r11.s64 = 1935671296;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc3d8
	if (ctx.cr6.eq) goto loc_821FC3D8;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc3cc
	if (ctx.cr6.eq) goto loc_821FC3CC;
	// lis r11,29568
	ctx.r11.s64 = 1937768448;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc3c0
	if (ctx.cr6.eq) goto loc_821FC3C0;
loc_821FC3B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821fc7d0
	goto loc_821FC7D0;
loc_821FC3C0:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29632
	ctx.r30.u64 = ctx.r11.u64 | 1941962752;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC3CC:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29616
	ctx.r30.u64 = ctx.r11.u64 | 1940914176;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC3D8:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29600
	ctx.r30.u64 = ctx.r11.u64 | 1939865600;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC3E4:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29584
	ctx.r30.u64 = ctx.r11.u64 | 1938817024;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC3F0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi r29,r28,12
	ctx.r29.u64 = ctx.r28.u32 & 0xFFFFF;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// oris r30,r29,29440
	ctx.r30.u64 = ctx.r29.u64 | 1929379840;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// andi. r11,r11,520
	ctx.r11.u64 = ctx.r11.u64 & 520;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821fc4b0
	if (ctx.cr0.eq) goto loc_821FC4B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc490
	if (ctx.cr6.eq) goto loc_821FC490;
	// li r4,105
	ctx.r4.s64 = 105;
	// bl 0x82370180
	ctx.lr = 0x821FC440;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc490
	if (!ctx.cr0.eq) goto loc_821FC490;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC454;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc490
	if (!ctx.cr0.eq) goto loc_821FC490;
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC468;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc490
	if (!ctx.cr0.eq) goto loc_821FC490;
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC47C;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc490
	if (!ctx.cr0.eq) goto loc_821FC490;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fc4b0
	if (!ctx.cr0.eq) goto loc_821FC4B0;
loc_821FC490:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc5e8
	if (ctx.cr6.eq) goto loc_821FC5E8;
loc_821FC4B0:
	// oris r30,r29,29616
	ctx.r30.u64 = ctx.r29.u64 | 1940914176;
	// b 0x821fc5e4
	goto loc_821FC5E4;
loc_821FC4B8:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x821fc520
	if (ctx.cr6.eq) goto loc_821FC520;
	// lis r11,29520
	ctx.r11.s64 = 1934622720;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc514
	if (ctx.cr6.eq) goto loc_821FC514;
	// lis r11,29536
	ctx.r11.s64 = 1935671296;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc508
	if (ctx.cr6.eq) goto loc_821FC508;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc4fc
	if (ctx.cr6.eq) goto loc_821FC4FC;
	// lis r11,29568
	ctx.r11.s64 = 1937768448;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fc3b8
	if (!ctx.cr6.eq) goto loc_821FC3B8;
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29696
	ctx.r30.u64 = ctx.r11.u64 | 1946157056;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC4FC:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29680
	ctx.r30.u64 = ctx.r11.u64 | 1945108480;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC508:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29664
	ctx.r30.u64 = ctx.r11.u64 | 1944059904;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC514:
	// clrlwi r11,r28,12
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFFF;
	// oris r30,r11,29648
	ctx.r30.u64 = ctx.r11.u64 | 1943011328;
	// b 0x821fc5e8
	goto loc_821FC5E8;
loc_821FC520:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// clrlwi r29,r28,12
	ctx.r29.u64 = ctx.r28.u32 & 0xFFFFF;
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,16(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// oris r30,r29,29456
	ctx.r30.u64 = ctx.r29.u64 | 1930428416;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// andi. r11,r11,520
	ctx.r11.u64 = ctx.r11.u64 & 520;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x821fc5e0
	if (ctx.cr0.eq) goto loc_821FC5E0;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821fc5c0
	if (ctx.cr6.eq) goto loc_821FC5C0;
	// li r4,105
	ctx.r4.s64 = 105;
	// bl 0x82370180
	ctx.lr = 0x821FC570;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc5c0
	if (!ctx.cr0.eq) goto loc_821FC5C0;
	// li r4,73
	ctx.r4.s64 = 73;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC584;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc5c0
	if (!ctx.cr0.eq) goto loc_821FC5C0;
	// li r4,98
	ctx.r4.s64 = 98;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC598;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc5c0
	if (!ctx.cr0.eq) goto loc_821FC5C0;
	// li r4,66
	ctx.r4.s64 = 66;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82370180
	ctx.lr = 0x821FC5AC;
	sub_82370180(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821fc5c0
	if (!ctx.cr0.eq) goto loc_821FC5C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821fc5e0
	if (!ctx.cr0.eq) goto loc_821FC5E0;
loc_821FC5C0:
	// lwz r11,8(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc5e8
	if (ctx.cr6.eq) goto loc_821FC5E8;
loc_821FC5E0:
	// oris r30,r29,29680
	ctx.r30.u64 = ctx.r29.u64 | 1945108480;
loc_821FC5E4:
	// li r23,1
	ctx.r23.s64 = 1;
loc_821FC5E8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821FC5F0;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fc604
	if (ctx.cr0.eq) goto loc_821FC604;
	// bl 0x8220d6a0
	ctx.lr = 0x821FC5FC;
	sub_8220D6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821fc608
	goto loc_821FC608;
loc_821FC604:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FC608:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821fc3b8
	if (ctx.cr6.eq) goto loc_821FC3B8;
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x821fc62c
	if (!ctx.cr6.eq) goto loc_821FC62C;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x821fc62c
	if (!ctx.cr6.eq) goto loc_821FC62C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x821fc634
	goto loc_821FC634;
loc_821FC62C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// rlwinm r5,r28,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
loc_821FC634:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220de30
	ctx.lr = 0x821FC644;
	sub_8220DE30(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x821fc660
	if (!ctx.cr6.lt) goto loc_821FC660;
loc_821FC650:
	// bl 0x82113c30
	ctx.lr = 0x821FC654;
	sub_82113C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821FC65C;
	sub_8220DDF0(ctx, base);
	// b 0x821fc3b8
	goto loc_821FC3B8;
loc_821FC660:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x821FC668;
	sub_8220D6F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821fc678
	if (!ctx.cr0.lt) goto loc_821FC678;
loc_821FC670:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x821fc650
	goto loc_821FC650;
loc_821FC678:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// beq cr6,0x821fc6a0
	if (ctx.cr6.eq) goto loc_821FC6A0;
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r4,16(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x821FC69C;
	sub_8215E640(ctx, base);
	// b 0x821fc704
	goto loc_821FC704;
loc_821FC6A0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,168(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8220ea28
	ctx.lr = 0x821FC6B8;
	sub_8220EA28(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc3b8
	if (ctx.cr6.eq) goto loc_821FC3B8;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,20(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// stw r9,24(r10)
	REX_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
loc_821FC704:
	// lwz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8215e640
	ctx.lr = 0x821FC718;
	sub_8215E640(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x821fc7cc
	if (ctx.cr6.eq) goto loc_821FC7CC;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821fc794
	if (!ctx.cr6.gt) goto loc_821FC794;
	// lwz r8,20(r27)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,16(r27)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
loc_821FC740:
	// lwzx r11,r10,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x821fc778
	if (ctx.cr0.eq) goto loc_821FC778;
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x821fc790
	if (ctx.cr6.eq) goto loc_821FC790;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x821fc778
	if (ctx.cr6.lt) goto loc_821FC778;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
loc_821FC778:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821fc740
	if (ctx.cr6.lt) goto loc_821FC740;
	// b 0x821fc794
	goto loc_821FC794;
loc_821FC790:
	// stw r9,396(r27)
	REX_STORE_U32(ctx.r27.u32 + 396, ctx.r9.u32);
loc_821FC794:
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 396);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821fc7b8
	if (!ctx.cr6.eq) goto loc_821FC7B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 120);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ea28
	ctx.lr = 0x821FC7B4;
	sub_8220EA28(ctx, base);
	// stw r3,396(r27)
	REX_STORE_U32(ctx.r27.u32 + 396, ctx.r3.u32);
loc_821FC7B8:
	// lwz r11,396(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 396);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fc670
	if (ctx.cr6.eq) goto loc_821FC670;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_821FC7CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821FC7D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220A0C8) {
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
	// li r4,27
	ctx.r4.s64 = 27;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82207320
	ctx.lr = 0x8220A0E4;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,-4096
	ctx.r4.s64 = -268435456;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// ori r4,r4,2048
	ctx.r4.u64 = ctx.r4.u64 | 2048;
	// lwz r11,316(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 316);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A118;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
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
	ctx.lr = 0x8220A154;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A17C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220A198;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x8220A1A8;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8220a1b4
	if (ctx.cr0.lt) goto loc_8220A1B4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220A1B4:
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

DEFINE_REX_FUNC(sub_8220B640) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// clrlwi r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mullw r9,r9,r5
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r5.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,108(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 108);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// beq cr6,0x8220b67c
	if (ctx.cr6.eq) goto loc_8220B67C;
loc_8220B674:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8220B67C:
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8220b690
	if (!ctx.cr6.eq) goto loc_8220B690;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// b 0x8220b6f8
	goto loc_8220B6F8;
loc_8220B690:
	// lis r10,29568
	ctx.r10.s64 = 1937768448;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8220b6cc
	if (ctx.cr6.gt) goto loc_8220B6CC;
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,4336
	ctx.r10.s64 = 284164096;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29520
	ctx.r10.s64 = 1934622720;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29536
	ctx.r10.s64 = 1935671296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29552
	ctx.r10.s64 = 1936719872;
	// b 0x8220b6f4
	goto loc_8220B6F4;
loc_8220B6CC:
	// lis r10,29760
	ctx.r10.s64 = 1950351360;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29776
	ctx.r10.s64 = 1951399936;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29792
	ctx.r10.s64 = 1952448512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220b6fc
	if (ctx.cr6.eq) goto loc_8220B6FC;
	// lis r10,29808
	ctx.r10.s64 = 1953497088;
loc_8220B6F4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_8220B6F8:
	// bne cr6,0x8220b674
	if (!ctx.cr6.eq) goto loc_8220B674;
loc_8220B6FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220DC60) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,24704
	ctx.r10.s64 = 1619001344;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8220dcc8
	if (ctx.cr6.gt) goto loc_8220DCC8;
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,4304
	ctx.r10.s64 = 282066944;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,4320
	ctx.r10.s64 = 283115520;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24608
	ctx.r10.s64 = 1612709888;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24624
	ctx.r10.s64 = 1613758464;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24688
	ctx.r10.s64 = 1617952768;
	// b 0x8220dd08
	goto loc_8220DD08;
loc_8220DCC8:
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24768
	ctx.r10.s64 = 1623195648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24784
	ctx.r10.s64 = 1624244224;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24848
	ctx.r10.s64 = 1628438528;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8220dd14
	if (ctx.cr6.eq) goto loc_8220DD14;
	// lis r10,24864
	ctx.r10.s64 = 1629487104;
loc_8220DD08:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_8220DD14:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8220F5C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,188(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 188);
	// mulli r10,r3,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(12));
	// lwz r11,88(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// mulli r9,r4,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(12));
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r7,4(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r6,4(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8220f5f8
	if (!ctx.cr6.lt) goto loc_8220F5F8;
loc_8220F5F0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8220F5F8:
	// bgt cr6,0x8220f610
	if (ctx.cr6.gt) goto loc_8220F610;
	// lwz r8,8(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8220f5f0
	if (ctx.cr6.lt) goto loc_8220F5F0;
	// ble cr6,0x8220f618
	if (!ctx.cr6.gt) goto loc_8220F618;
loc_8220F610:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8220F618:
	// lwz r11,188(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 188);
	// lwz r8,88(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// lwzx r11,r8,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8220f5f0
	if (ctx.cr6.lt) goto loc_8220F5F0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822113E0) {
	REX_FUNC_PROLOGUE();
	// std r31,-8(r1)
	REX_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwzx r5,r10,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwz r9,44(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// clrlwi. r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82211408
	if (!ctx.cr0.eq) goto loc_82211408;
loc_82211400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82211580
	goto loc_82211580;
loc_82211408:
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82211438
	if (ctx.cr6.eq) goto loc_82211438;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82211418:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// lwz r7,44(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 44);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82211438
	if (!ctx.cr6.lt) goto loc_82211438;
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x82211418
	if (!ctx.cr0.eq) goto loc_82211418;
loc_82211438:
	// subf r11,r8,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r8.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8221147c
	if (ctx.cr0.eq) goto loc_8221147C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82211450:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r7,-4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + -4);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r3,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r3.u32);
	// bdnz 0x82211450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82211450;
loc_8221147C:
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822114d0
	if (ctx.cr6.eq) goto loc_822114D0;
	// lwz r10,24(r6)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,44(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x822114b0
	if (!ctx.cr6.gt) goto loc_822114B0;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
	// b 0x82211514
	goto loc_82211514;
loc_822114B0:
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// lwz r5,44(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 44);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822114d0
	if (!ctx.cr6.eq) goto loc_822114D0;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bne 0x822114b0
	if (!ctx.cr0.eq) goto loc_822114B0;
loc_822114D0:
	// subf r11,r7,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r7.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82211514
	if (ctx.cr0.eq) goto loc_82211514;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_822114E8:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r5,-4(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + -4);
	// stwx r5,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r3,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r3.u32);
	// bdnz 0x822114e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822114E8;
loc_82211514:
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82211400
	if (ctx.cr6.eq) goto loc_82211400;
	// subf r11,r7,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r7.u64;
	// rlwinm. r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82211560
	if (ctx.cr0.eq) goto loc_82211560;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82211534:
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,-4(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + -4);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,24(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stw r7,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r7.u32);
	// bdnz 0x82211534
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82211534;
loc_82211560:
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// stw r10,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// lwz r11,24(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 24);
	// stwx r9,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82211580:
	// ld r31,-8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82217E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82217E30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82217e4c
	if (!ctx.cr6.eq) goto loc_82217E4C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8221811c
	goto loc_8221811C;
loc_82217E4C:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r4.u32);
	// stw r5,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r6,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r6.u32);
	// li r30,-1
	ctx.r30.s64 = -1;
	// stw r7,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r7.u32);
	// addi r4,r11,1648
	ctx.r4.s64 = ctx.r11.s64 + 1648;
	// stw r29,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r29.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r29,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r29.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r29,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217E8C;
	sub_8220E988(ctx, base);
	// stw r3,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,11560
	ctx.r4.s64 = ctx.r11.s64 + 11560;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,785
	ctx.r5.s64 = 785;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217EAC;
	sub_8220E988(ctx, base);
	// stw r3,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r28,r11,13832
	ctx.r28.s64 = ctx.r11.s64 + 13832;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r5,593
	ctx.r5.s64 = 593;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217ED0;
	sub_8220E988(ctx, base);
	// stw r3,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-23196
	ctx.r4.s64 = ctx.r11.s64 + -23196;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,81
	ctx.r5.s64 = 81;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217EF0;
	sub_8220E988(ctx, base);
	// stw r3,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,13500
	ctx.r4.s64 = ctx.r11.s64 + 13500;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,98
	ctx.r5.s64 = 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217F10;
	sub_8220E988(ctx, base);
	// stw r3,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-23200
	ctx.r4.s64 = ctx.r11.s64 + -23200;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217F30;
	sub_8220E988(ctx, base);
	// stw r3,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,14096
	ctx.r4.s64 = ctx.r11.s64 + 14096;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217F50;
	sub_8220E988(ctx, base);
	// stw r3,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r27,r11,-23220
	ctx.r27.s64 = ctx.r11.s64 + -23220;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217F74;
	sub_8220E988(ctx, base);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// stw r3,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,4204
	ctx.r4.s64 = ctx.r11.s64 + 4204;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,721
	ctx.r5.s64 = 721;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217F94;
	sub_8220E988(ctx, base);
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r26,r11,13888
	ctx.r26.s64 = ctx.r11.s64 + 13888;
	// li r7,4
	ctx.r7.s64 = 4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r5,4099
	ctx.r5.s64 = 4099;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217FB8;
	sub_8220E988(ctx, base);
	// stw r3,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,8785
	ctx.r5.s64 = 8785;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217FD4;
	sub_8220E988(ctx, base);
	// stw r3,156(r31)
	REX_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,16394
	ctx.r5.s64 = 16394;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82217FF0;
	sub_8220E988(ctx, base);
	// stw r3,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,9940
	ctx.r4.s64 = ctx.r11.s64 + 9940;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,49162
	ctx.r5.u64 = ctx.r5.u64 | 49162;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82218014;
	sub_8220E988(ctx, base);
	// stw r3,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,9936
	ctx.r4.s64 = ctx.r11.s64 + 9936;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,66
	ctx.r5.u64 = ctx.r5.u64 | 66;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x82218038;
	sub_8220E988(ctx, base);
	// stw r3,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r3.u32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,3912
	ctx.r4.s64 = ctx.r11.s64 + 3912;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x8221805C;
	sub_8220E988(ctx, base);
	// stw r3,172(r31)
	REX_STORE_U32(ctx.r31.u32 + 172, ctx.r3.u32);
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// ori r5,r5,529
	ctx.r5.u64 = ctx.r5.u64 | 529;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x8221807C;
	sub_8220E988(ctx, base);
	// stw r3,176(r31)
	REX_STORE_U32(ctx.r31.u32 + 176, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,9932
	ctx.r4.s64 = ctx.r11.s64 + 9932;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,8290
	ctx.r5.s64 = 8290;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x8221809C;
	sub_8220E988(ctx, base);
	// stw r3,180(r31)
	REX_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r4,r11,9928
	ctx.r4.s64 = ctx.r11.s64 + 9928;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// ori r5,r5,98
	ctx.r5.u64 = ctx.r5.u64 | 98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220e988
	ctx.lr = 0x822180C0;
	sub_8220E988(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r3.u32);
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// beq cr6,0x822180dc
	if (ctx.cr6.eq) goto loc_822180DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8221811c
	goto loc_8221811C;
loc_822180DC:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8215ec60
	ctx.lr = 0x822180EC;
	sub_8215EC60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82218100;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8221811c
	if (ctx.cr0.lt) goto loc_8221811C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,208(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// bl 0x8216b138
	ctx.lr = 0x82218114;
	sub_8216B138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r29.u32);
loc_8221811C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82222BA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82222BA8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	REX_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223034
	if (!ctx.cr6.gt) goto loc_82223034;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfd f30,4696(r11)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + 4696);
	// lfd f31,1792(r10)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
loc_82222BE8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,116(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lwzx r30,r11,r25
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82223018
	if (ctx.cr6.eq) goto loc_82223018;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82223018
	if (ctx.cr6.eq) goto loc_82223018;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82222c24
	if (!ctx.cr6.eq) goto loc_82222C24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822173b0
	ctx.lr = 0x82222C20;
	sub_822173B0(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
loc_82222C24:
	// lwz r28,0(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82222ca4
	if (ctx.cr6.eq) goto loc_82222CA4;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82222ca4
	if (!ctx.cr6.eq) goto loc_82222CA4;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82222c94
	if (ctx.cr6.eq) goto loc_82222C94;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82222C78:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82222c94
	if (ctx.cr6.eq) goto loc_82222C94;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82222c78
	if (ctx.cr6.lt) goto loc_82222C78;
loc_82222C94:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82222ca8
	goto loc_82222CA8;
loc_82222CA4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82222CA8:
	// lwz r4,0(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 108);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// beq 0x82222cc8
	if (ctx.cr0.eq) goto loc_82222CC8;
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82222ccc
	goto loc_82222CCC;
loc_82222CC8:
	// fmr f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f30.f64;
loc_82222CCC:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82222e2c
	if (ctx.cr0.eq) goto loc_82222E2C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82222e2c
	if (!ctx.cr6.eq) goto loc_82222E2C;
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82222dd4
	if (ctx.cr6.eq) goto loc_82222DD4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82222D24:
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82222d88
	if (ctx.cr6.eq) goto loc_82222D88;
	// lwzx r11,r10,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82222d88
	if (!ctx.cr6.eq) goto loc_82222D88;
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// bne cr6,0x82222d88
	if (!ctx.cr6.eq) goto loc_82222D88;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82222d88
	if (!ctx.cr6.eq) goto loc_82222D88;
	// lwz r6,16(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82222d88
	if (!ctx.cr6.eq) goto loc_82222D88;
	// lwz r6,20(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,20(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplw cr6,r6,r4
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82222d88
	if (!ctx.cr6.eq) goto loc_82222D88;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,24(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// beq cr6,0x82222d9c
	if (ctx.cr6.eq) goto loc_82222D9C;
loc_82222D88:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82222d24
	if (ctx.cr6.lt) goto loc_82222D24;
	// b 0x82222dd4
	goto loc_82222DD4;
loc_82222D9C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82222dd0
	if (!ctx.cr6.eq) goto loc_82222DD0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82222DAC:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,48(r9)
	REX_STORE_U32(ctx.r9.u32 + 48, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82222dac
	if (ctx.cr6.lt) goto loc_82222DAC;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82222DD0:
	// stw r8,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r8.u32);
loc_82222DD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82223014
	if (!ctx.cr6.eq) goto loc_82223014;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r7,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r7.u32);
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82223014
	if (ctx.cr6.lt) goto loc_82223014;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lwz r4,96(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 96);
	// li r5,4007
	ctx.r5.s64 = 4007;
	// addi r6,r11,11688
	ctx.r6.s64 = ctx.r11.s64 + 11688;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff00
	ctx.lr = 0x82222E20;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82223050
	goto loc_82223050;
loc_82222E2C:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82223018
	if (ctx.cr0.eq) goto loc_82223018;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82223018
	if (ctx.cr6.eq) goto loc_82223018;
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,8256
	ctx.r9.s64 = 541065216;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82223018
	if (!ctx.cr6.eq) goto loc_82223018;
	// lwz r8,12(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82222e94
	if (ctx.cr6.eq) goto loc_82222E94;
	// lwz r7,16(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
loc_82222E78:
	// lwzx r5,r9,r7
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82222e94
	if (ctx.cr6.eq) goto loc_82222E94;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82222e78
	if (ctx.cr6.lt) goto loc_82222E78;
loc_82222E94:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r9,r5,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// lwz r7,4(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r7,r7,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82222f1c
	if (ctx.cr0.eq) goto loc_82222F1C;
	// lwz r7,8(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// bne cr6,0x82222f1c
	if (!ctx.cr6.eq) goto loc_82222F1C;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r5,r7,0,29,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82222f1c
	if (ctx.cr0.eq) goto loc_82222F1C;
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82222f04
	if (!ctx.cr0.eq) goto loc_82222F04;
	// lwz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r7,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82222f1c
	if (ctx.cr0.eq) goto loc_82222F1C;
loc_82222F04:
	// lfd f13,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82222f78
	goto loc_82222F78;
loc_82222F1C:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82223018
	if (ctx.cr0.eq) goto loc_82223018;
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82223018
	if (!ctx.cr6.eq) goto loc_82223018;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r7,r10,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82223018
	if (ctx.cr0.eq) goto loc_82223018;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82222f60
	if (!ctx.cr0.eq) goto loc_82222F60;
	// rlwinm. r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223018
	if (ctx.cr0.eq) goto loc_82223018;
loc_82222F60:
	// lfd f13,32(r9)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r9.u32 + 32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// fadd f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 + ctx.f0.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lwz r5,116(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
loc_82222F78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r4,r28
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r28.u32, ctx.xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// bne cr6,0x82222fd0
	if (!ctx.cr6.eq) goto loc_82222FD0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223014
	if (!ctx.cr6.gt) goto loc_82223014;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82222F94:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82222fb8
	if (!ctx.cr6.eq) goto loc_82222FB8;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_82222FB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82222f94
	if (ctx.cr6.lt) goto loc_82222F94;
	// b 0x82223014
	goto loc_82223014;
loc_82222FD0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82223010
	if (!ctx.cr6.gt) goto loc_82223010;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82222FDC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r28,r8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82222ffc
	if (!ctx.cr6.eq) goto loc_82222FFC;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 + ctx.r5.u64;
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
loc_82222FFC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82222fdc
	if (ctx.cr6.lt) goto loc_82222FDC;
loc_82223010:
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82223014:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82223018:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82222be8
	if (ctx.cr6.lt) goto loc_82222BE8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x8222303c
	if (!ctx.cr6.eq) goto loc_8222303C;
loc_82223034:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82223050
	goto loc_82223050;
loc_8222303C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8222304c
	if (ctx.cr6.eq) goto loc_8222304C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82217c38
	ctx.lr = 0x8222304C;
	sub_82217C38(ctx, base);
loc_8222304C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82223050:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822310B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x822310B8;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8223123c
	if (ctx.cr6.eq) goto loc_8223123C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lfd f31,1792(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_822310F0:
	// lwz r28,0(r21)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8223122c
	if (ctx.cr6.eq) goto loc_8223122C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223122c
	if (ctx.cr6.eq) goto loc_8223122C;
	// rlwinm r10,r11,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x8222d610
	ctx.lr = 0x82231114;
	sub_8222D610(ctx, base);
	// lis r11,4352
	ctx.r11.s64 = 285212672;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82231128
	if (!ctx.cr6.eq) goto loc_82231128;
	// li r20,1
	ctx.r20.s64 = 1;
loc_82231128:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223122c
	if (!ctx.cr6.gt) goto loc_8223122C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8223113C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,20(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// lwz r9,128(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 128);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82231218
	if (!ctx.cr6.eq) goto loc_82231218;
	// lbz r11,111(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 111);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x82231218
	if (!ctx.cr6.eq) goto loc_82231218;
	// lbz r11,110(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 110);
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82231218
	if (!ctx.cr6.eq) goto loc_82231218;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x8223118c
	if (ctx.cr6.eq) goto loc_8223118C;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82231218
	if (ctx.cr6.eq) goto loc_82231218;
loc_8223118C:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82231210
	if (ctx.cr6.eq) goto loc_82231210;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_822311A0:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822311cc
	if (ctx.cr6.eq) goto loc_822311CC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x822311a0
	if (ctx.cr6.lt) goto loc_822311A0;
	// b 0x82231210
	goto loc_82231210;
loc_822311CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,136(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 136);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8220ea28
	ctx.lr = 0x822311E0;
	sub_8220EA28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8223124c
	if (ctx.cr6.eq) goto loc_8223124C;
	// lwz r11,20(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,60(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r9,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r9.u32);
	// lwzx r10,r8,r26
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stwx r3,r29,r11
	REX_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82231210:
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82231258
	if (ctx.cr6.eq) goto loc_82231258;
loc_82231218:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223113c
	if (ctx.cr6.lt) goto loc_8223113C;
loc_8223122C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x822310f0
	if (ctx.cr6.lt) goto loc_822310F0;
loc_8223123C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82231240:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_8223124C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82231240
	goto loc_82231240;
loc_82231258:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4801
	ctx.r5.s64 = 4801;
	// addi r6,r11,15632
	ctx.r6.s64 = ctx.r11.s64 + 15632;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8221ff00
	ctx.lr = 0x82231270;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82231240
	goto loc_82231240;
}

DEFINE_REX_FUNC(sub_822366F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x82236700;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r29,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// stw r29,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r29,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// clrlwi. r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82236744
	if (!ctx.cr0.eq) goto loc_82236744;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822368b0
	goto loc_822368B0;
loc_82236744:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// twllei r7,0
	if (ctx.r7.s32 == 0 || ctx.r7.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// divwu r23,r11,r7
	ctx.r23.u64 = uint32_t(ctx.r7.u32 ? ctx.r11.u32 / ctx.r7.u32 : 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x822367bc
	if (!ctx.cr6.eq) goto loc_822367BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822367bc
	if (ctx.cr6.eq) goto loc_822367BC;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
loc_8223676C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822367ac
	if (ctx.cr6.eq) goto loc_822367AC;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
loc_82236780:
	// add r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r31,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// lwz r31,16(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82236864
	if (!ctx.cr6.eq) goto loc_82236864;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82236780
	if (ctx.cr6.lt) goto loc_82236780;
loc_822367AC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x8223676c
	if (ctx.cr6.lt) goto loc_8223676C;
loc_822367BC:
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822368ac
	if (ctx.cr6.eq) goto loc_822368AC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// rlwinm r26,r7,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
loc_822367D8:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x822365b0
	ctx.lr = 0x822367E8;
	sub_822365B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82236898
	if (ctx.cr0.eq) goto loc_82236898;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// beq cr6,0x8223686c
	if (ctx.cr6.eq) goto loc_8223686C;
	// lis r10,24576
	ctx.r10.s64 = 1610612736;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82236830
	if (ctx.cr6.eq) goto loc_82236830;
	// lis r10,24656
	ctx.r10.s64 = 1615855616;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82236830
	if (ctx.cr6.eq) goto loc_82236830;
	// lis r10,24736
	ctx.r10.s64 = 1621098496;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82236830
	if (ctx.cr6.eq) goto loc_82236830;
	// lis r10,24816
	ctx.r10.s64 = 1626341376;
loc_82236828:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82236898
	if (!ctx.cr6.eq) goto loc_82236898;
loc_82236830:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x822368b8
	if (!ctx.cr6.eq) goto loc_822368B8;
	// stw r3,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// li r24,1
	ctx.r24.s64 = 1;
	// stw r30,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82236874
	if (!ctx.cr6.eq) goto loc_82236874;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,20(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82236890
	goto loc_82236890;
loc_82236864:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822368b0
	goto loc_822368B0;
loc_8223686C:
	// lis r10,29200
	ctx.r10.s64 = 1913651200;
	// b 0x82236828
	goto loc_82236828;
loc_82236874:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,10,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lwz r9,20(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82236890:
	// lbz r11,110(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 110);
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
loc_82236898:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x822367d8
	if (ctx.cr6.lt) goto loc_822367D8;
loc_822368AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822368B0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
loc_822368B8:
	// stw r29,0(r22)
	REX_STORE_U32(ctx.r22.u32 + 0, ctx.r29.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r29.u32);
	// stw r29,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r29.u32);
	// b 0x822368b0
	goto loc_822368B0;
}

DEFINE_REX_FUNC(sub_8223AE30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x8223AE38;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 76);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x8223ae60
	if (ctx.cr6.eq) goto loc_8223AE60;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8223b140
	goto loc_8223B140;
loc_8223AE60:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// std r25,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r25.u64);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// std r25,0(r8)
	REX_STORE_U64(ctx.r8.u32 + 0, ctx.r25.u64);
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// std r25,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r25.u64);
	// std r25,8(r8)
	REX_STORE_U64(ctx.r8.u32 + 8, ctx.r25.u64);
	// lis r4,29200
	ctx.r4.s64 = 1913651200;
loc_8223AE90:
	// lwz r10,564(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223af28
	if (ctx.cr6.eq) goto loc_8223AF28;
	// rotlwi r7,r9,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223af28
	if (ctx.cr6.eq) goto loc_8223AF28;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r3,r8,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8223af18
	if (ctx.cr6.eq) goto loc_8223AF18;
	// rlwinm r3,r9,0,0,11
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// lis r30,4352
	ctx.r30.s64 = 285212672;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8223aedc
	if (ctx.cr6.eq) goto loc_8223AEDC;
	// clrlwi r9,r8,12
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFFF;
loc_8223AEDC:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,136(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
	// bne cr6,0x8223af20
	if (!ctx.cr6.eq) goto loc_8223AF20;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// b 0x8223af28
	goto loc_8223AF28;
loc_8223AF18:
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
loc_8223AF20:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8223AF28:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223ae90
	if (ctx.cr6.lt) goto loc_8223AE90;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223afac
	if (!ctx.cr6.gt) goto loc_8223AFAC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8223AF50:
	// lwz r10,560(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// lwzx r9,r11,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223af98
	if (ctx.cr6.eq) goto loc_8223AF98;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8223af98
	if (ctx.cr6.eq) goto loc_8223AF98;
	// rlwinm r9,r9,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8223af98
	if (ctx.cr6.eq) goto loc_8223AF98;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x8223b148
	if (!ctx.cr6.eq) goto loc_8223B148;
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r25,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r25.u32);
	// stwx r7,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r7.u32);
loc_8223AF98:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223af50
	if (ctx.cr6.lt) goto loc_8223AF50;
loc_8223AFAC:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// cmplwi cr6,r11,257
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 257, ctx.xer);
	// ble cr6,0x8223afd8
	if (!ctx.cr6.gt) goto loc_8223AFD8;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236ec0
	ctx.lr = 0x8223AFD0;
	sub_82236EC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223b0f8
	if (ctx.cr0.lt) goto loc_8223B0F8;
loc_8223AFD8:
	// li r7,2
	ctx.r7.s64 = 2;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236ec0
	ctx.lr = 0x8223AFF0;
	sub_82236EC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223b0f8
	if (ctx.cr0.lt) goto loc_8223B0F8;
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82236ec0
	ctx.lr = 0x8223B010;
	sub_82236EC0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223b0f8
	if (ctx.cr0.lt) goto loc_8223B0F8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822368d0
	ctx.lr = 0x8223B02C;
	sub_822368D0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8223b0f8
	if (ctx.cr0.lt) goto loc_8223B0F8;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// ori r27,r10,16389
	ctx.r27.u64 = ctx.r10.u64 | 16389;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223b098
	if (!ctx.cr6.gt) goto loc_8223B098;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// addi r29,r11,18480
	ctx.r29.s64 = ctx.r11.s64 + 18480;
loc_8223B058:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8223b084
	if (ctx.cr6.eq) goto loc_8223B084;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lbz r7,203(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 203);
	// li r5,4523
	ctx.r5.s64 = 4523;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8223B080;
	sub_8221FF00(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_8223B084:
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8223b058
	if (ctx.cr6.lt) goto loc_8223B058;
loc_8223B098:
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8223b0f0
	if (ctx.cr6.eq) goto loc_8223B0F0;
	// lwz r11,76(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8223b0d8
	if (!ctx.cr6.gt) goto loc_8223B0D8;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_8223B0B4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,564(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r9,r11,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r9,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8223b0b4
	if (ctx.cr6.lt) goto loc_8223B0B4;
loc_8223B0D8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,560(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 560);
	// bl 0x8216b138
	ctx.lr = 0x8223B0E4;
	sub_8216B138(ctx, base);
	// stw r25,560(r31)
	REX_STORE_U32(ctx.r31.u32 + 560, ctx.r25.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,548(r31)
	REX_STORE_U32(ctx.r31.u32 + 548, ctx.r25.u32);
loc_8223B0F0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x8223b13c
	if (!ctx.cr6.lt) goto loc_8223B13C;
loc_8223B0F8:
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8223b118
	if (!ctx.cr6.gt) goto loc_8223B118;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8223B10C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8223b10c
	if (ctx.cr6.lt) goto loc_8223B10C;
loc_8223B118:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x8223b13c
	if (!ctx.cr6.eq) goto loc_8223B13C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lbz r7,203(r31)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r31.u32 + 203);
	// li r5,4523
	ctx.r5.s64 = 4523;
	// addi r6,r11,18352
	ctx.r6.s64 = ctx.r11.s64 + 18352;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8223B13C;
	sub_8221FF00(ctx, base);
loc_8223B13C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8223B140:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_8223B148:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x8223b0f8
	goto loc_8223B0F8;
}

DEFINE_REX_FUNC(sub_82242B80) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82242c74
	if (ctx.cr6.eq) goto loc_82242C74;
	// lbz r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82242c74
	if (ctx.cr0.eq) goto loc_82242C74;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82242BBC:
	// lbz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82242c00
	if (ctx.cr0.eq) goto loc_82242C00;
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,119
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 119, ctx.xer);
	// bgt cr6,0x82242c4c
	if (ctx.cr6.gt) goto loc_82242C4C;
	// beq cr6,0x82242c44
	if (ctx.cr6.eq) goto loc_82242C44;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// beq cr6,0x82242c44
	if (ctx.cr6.eq) goto loc_82242C44;
	// cmplwi cr6,r11,98
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 98, ctx.xer);
	// beq cr6,0x82242c64
	if (ctx.cr6.eq) goto loc_82242C64;
	// cmplwi cr6,r11,103
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 103, ctx.xer);
	// beq cr6,0x82242c6c
	if (ctx.cr6.eq) goto loc_82242C6C;
	// cmplwi cr6,r11,114
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 114, ctx.xer);
	// bne cr6,0x82242c20
	if (!ctx.cr6.eq) goto loc_82242C20;
loc_82242BF8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82242BFC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82242C00:
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x82242bbc
	if (ctx.cr6.lt) goto loc_82242BBC;
	// lbz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82242c78
	if (ctx.cr0.eq) goto loc_82242C78;
loc_82242C20:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r6,r11,-12604
	ctx.r6.s64 = ctx.r11.s64 + -12604;
	// bl 0x821afae0
	ctx.lr = 0x82242C34;
	sub_821AFAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// b 0x82242c78
	goto loc_82242C78;
loc_82242C44:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82242bfc
	goto loc_82242BFC;
loc_82242C4C:
	// cmplwi cr6,r11,120
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 120, ctx.xer);
	// beq cr6,0x82242bf8
	if (ctx.cr6.eq) goto loc_82242BF8;
	// cmplwi cr6,r11,121
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 121, ctx.xer);
	// beq cr6,0x82242c6c
	if (ctx.cr6.eq) goto loc_82242C6C;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bne cr6,0x82242c20
	if (!ctx.cr6.eq) goto loc_82242C20;
loc_82242C64:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82242bfc
	goto loc_82242BFC;
loc_82242C6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82242bfc
	goto loc_82242BFC;
loc_82242C74:
	// li r3,228
	ctx.r3.s64 = 228;
loc_82242C78:
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

DEFINE_REX_FUNC(sub_82246728) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82246730;
	__savegprlr_14(ctx, base);
	// stwu r1,-1552(r1)
	ea = -1552 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// lwz r10,92(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r14,284
	ctx.r14.s64 = 284;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// ld r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// ld r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 16);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 24);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// beq cr6,0x82246794
	if (ctx.cr6.eq) goto loc_82246794;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31520
	ctx.r5.s64 = ctx.r11.s64 + -31520;
loc_82246774:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r4,r10,32604
	ctx.r4.s64 = ctx.r10.s64 + 32604;
	// bl 0x822444a0
	ctx.lr = 0x82246784;
	sub_822444A0(ctx, base);
loc_82246784:
	// li r14,-1
	ctx.r14.s64 = -1;
loc_82246788:
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// addi r1,r1,1552
	ctx.r1.s64 = ctx.r1.s64 + 1552;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_82246794:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r11,92(r23)
	REX_STORE_U32(ctx.r23.u32 + 92, ctx.r11.u32);
	// lwz r3,128(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822467c0
	if (ctx.cr6.eq) goto loc_822467C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822467BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,128(r23)
	REX_STORE_U32(ctx.r23.u32 + 128, ctx.r24.u32);
loc_822467C0:
	// li r5,1084
	ctx.r5.s64 = 1084;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8215ec60
	ctx.lr = 0x822467D0;
	sub_8215EC60(ctx, base);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// b 0x82246800
	goto loc_82246800;
loc_822467D8:
	// cmpwi cr6,r3,280
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 280, ctx.xer);
	// beq cr6,0x82246820
	if (ctx.cr6.eq) goto loc_82246820;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82244040
	ctx.lr = 0x822467F4;
	sub_82244040(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82246784
	if (ctx.cr6.eq) goto loc_82246784;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82246800:
	// li r6,128
	ctx.r6.s64 = 128;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82245bb0
	ctx.lr = 0x82246814;
	sub_82245BB0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822467d8
	if (!ctx.cr6.eq) goto loc_822467D8;
	// b 0x82246784
	goto loc_82246784;
loc_82246820:
	// lwz r30,360(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 360);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82246858
	if (ctx.cr6.eq) goto loc_82246858;
	// addi r28,r1,364
	ctx.r28.s64 = ctx.r1.s64 + 364;
loc_82246834:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82245498
	ctx.lr = 0x82246840;
	sub_82245498(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82246784
	if (ctx.cr6.eq) goto loc_82246784;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82246834
	if (ctx.cr6.lt) goto loc_82246834;
loc_82246858:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mulli r4,r30,20
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(20));
	// bl 0x821e99f8
	ctx.lr = 0x82246868;
	sub_821E99F8(ctx, base);
	// mulli r19,r31,66
	ctx.r19.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(66));
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r19,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x821e99f8
	ctx.lr = 0x82246884;
	sub_821E99F8(ctx, base);
	// stw r24,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// rlwinm r4,r31,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// bl 0x821e99f8
	ctx.lr = 0x8224689C;
	sub_821E99F8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822468d0
	if (ctx.cr6.eq) goto loc_822468D0;
	// addi r10,r1,360
	ctx.r10.s64 = ctx.r1.s64 + 360;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_822468B8:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,32(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r22,r11,r22
	ctx.r22.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bdnz 0x822468b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822468B8;
loc_822468D0:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821e99f8
	ctx.lr = 0x822468E0;
	sub_821E99F8(ctx, base);
	// rlwinm r27,r31,7,0,24
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// mr r20,r24
	ctx.r20.u64 = ctx.r24.u64;
	// bl 0x821e99f8
	ctx.lr = 0x822468FC;
	sub_821E99F8(ctx, base);
	// stw r24,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822469c4
	if (ctx.cr6.eq) goto loc_822469C4;
	// addi r28,r1,364
	ctx.r28.s64 = ctx.r1.s64 + 364;
	// addi r31,r21,-8
	ctx.r31.s64 = ctx.r21.s64 + -8;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8224691C:
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82243dd8
	ctx.lr = 0x82246934;
	sub_82243DD8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// sth r11,12(r31)
	REX_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// sth r11,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// sth r11,16(r31)
	REX_STORE_U16(ctx.r31.u32 + 16, ctx.r11.u16);
	// sth r24,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r24.u16);
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246988
	if (ctx.cr6.eq) goto loc_82246988;
	// stw r20,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r20.u32);
	// add r3,r20,r15
	ctx.r3.u64 = ctx.r20.u64 + ctx.r15.u64;
	// lwz r4,44(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// mullw r25,r10,r11
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// bl 0x8215e640
	ctx.lr = 0x82246980;
	sub_8215E640(ctx, base);
	// add r20,r25,r20
	ctx.r20.u64 = ctx.r25.u64 + ctx.r20.u64;
	// b 0x82246990
	goto loc_82246990;
loc_82246988:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82246990:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82244310
	ctx.lr = 0x822469B4;
	sub_82244310(ctx, base);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stwu r3,20(r31)
	ea = 20 + ctx.r31.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r31.u32 = ea;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8224691c
	if (!ctx.cr0.eq) goto loc_8224691C;
loc_822469C4:
	// cmplw cr6,r20,r22
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x822469d8
	if (ctx.cr6.eq) goto loc_822469D8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31552
	ctx.r5.s64 = ctx.r11.s64 + -31552;
	// b 0x82246774
	goto loc_82246774;
loc_822469D8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// ble cr6,0x822469f0
	if (!ctx.cr6.gt) goto loc_822469F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31604
	ctx.r5.s64 = ctx.r11.s64 + -31604;
	// b 0x82246774
	goto loc_82246774;
loc_822469F0:
	// mulli r30,r29,20
	ctx.r30.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(20));
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r3,4(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r28,r30,28
	ctx.r28.s64 = ctx.r30.s64 + 28;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// add r25,r10,r26
	ctx.r25.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r27,r25,r20
	ctx.r27.u64 = ctx.r25.u64 + ctx.r20.u64;
	// add r22,r27,r9
	ctx.r22.u64 = ctx.r27.u64 + ctx.r9.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x821e99f8
	ctx.lr = 0x82246A28;
	sub_821E99F8(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r24,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r24.u32);
	// stw r24,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// stw r24,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r24.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82246A60;
	sub_8215E640(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82246aa8
	if (ctx.cr6.eq) goto loc_82246AA8;
	// addi r11,r30,-20
	ctx.r11.s64 = ctx.r30.s64 + -20;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82246A70:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82246a88
	if (ctx.cr6.eq) goto loc_82246A88;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x82246a8c
	goto loc_82246A8C;
loc_82246A88:
	// stw r24,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r24.u32);
loc_82246A8C:
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stwu r9,20(r11)
	ea = 20 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82246a70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82246A70;
loc_82246AA8:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r30,r31,r28
	ctx.r30.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82246AC0;
	sub_8215E640(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246b00
	if (ctx.cr6.eq) goto loc_82246B00;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
loc_82246AD4:
	// lhz r10,-2(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + -2);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82246aec
	if (ctx.cr0.eq) goto loc_82246AEC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82246AEC:
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82246ad4
	if (ctx.cr6.lt) goto loc_82246AD4;
loc_82246B00:
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r31,r26
	ctx.r30.u64 = ctx.r31.u64 + ctx.r26.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82246B18;
	sub_8215E640(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82246b54
	if (ctx.cr6.eq) goto loc_82246B54;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_82246B2C:
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stwu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82246b2c
	if (ctx.cr6.lt) goto loc_82246B2C;
loc_82246B54:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// add r3,r31,r25
	ctx.r3.u64 = ctx.r31.u64 + ctx.r25.u64;
	// bl 0x8215e640
	ctx.lr = 0x82246B64;
	sub_8215E640(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r3,r31,r27
	ctx.r3.u64 = ctx.r31.u64 + ctx.r27.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// bl 0x8215e640
	ctx.lr = 0x82246B74;
	sub_8215E640(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x8216b018
	ctx.lr = 0x82246B80;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82246b94
	if (ctx.cr0.eq) goto loc_82246B94;
	// bl 0x821e8e90
	ctx.lr = 0x82246B8C;
	sub_821E8E90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82246b98
	goto loc_82246B98;
loc_82246B94:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_82246B98:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821e8ec0
	ctx.lr = 0x82246BAC;
	sub_821E8EC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246bc0
	if (!ctx.cr0.lt) goto loc_82246BC0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31644
	ctx.r5.s64 = ctx.r11.s64 + -31644;
	// b 0x82246774
	goto loc_82246774;
loc_82246BC0:
	// lwz r11,324(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 324);
	// stw r30,128(r23)
	REX_STORE_U32(ctx.r23.u32 + 128, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82246be0
	if (ctx.cr6.eq) goto loc_82246BE0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r3,316(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 316);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82251690
	ctx.lr = 0x82246BE0;
	sub_82251690(ctx, base);
loc_82246BE0:
	// stw r24,124(r23)
	REX_STORE_U32(ctx.r23.u32 + 124, ctx.r24.u32);
	// b 0x82246788
	goto loc_82246788;
}

DEFINE_REX_FUNC(sub_8224FB70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8224FB78;
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
	// ble cr6,0x8224fbf4
	if (!ctx.cr6.gt) goto loc_8224FBF4;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x8224fba0
	if (!ctx.cr6.lt) goto loc_8224FBA0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8224FBA0:
	// mulli r4,r30,476
	ctx.r4.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(476));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0b0
	ctx.lr = 0x8224FBAC;
	sub_8225C0B0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x8224fbc4
	if (!ctx.cr0.eq) goto loc_8224FBC4;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x8224fbf4
	goto loc_8224FBF4;
loc_8224FBC4:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8224fbf0
	if (ctx.cr6.eq) goto loc_8224FBF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mulli r5,r11,476
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(476));
	// bl 0x8215e640
	ctx.lr = 0x8224FBE4;
	sub_8215E640(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c0c0
	ctx.lr = 0x8224FBF0;
	sub_8225C0C0(ctx, base);
loc_8224FBF0:
	// stw r29,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_8224FBF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82251988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82251990;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8224f010
	ctx.lr = 0x822519A4;
	sub_8224F010(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r21,r10,-15128
	ctx.r21.s64 = ctx.r10.s64 + -15128;
	// addi r27,r11,-15768
	ctx.r27.s64 = ctx.r11.s64 + -15768;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x822519C4;
	sub_8224EFB8(ctx, base);
	// lwz r5,132(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r22,r11,-15204
	ctx.r22.s64 = ctx.r11.s64 + -15204;
	// beq cr6,0x822519e4
	if (ctx.cr6.eq) goto loc_822519E4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x822519E4;
	sub_8224F1D0(ctx, base);
loc_822519E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x822519EC;
	sub_8224FD68(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r23,r11,-25096
	ctx.r23.s64 = ctx.r11.s64 + -25096;
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82251af0
	if (ctx.cr6.eq) goto loc_82251AF0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251A08;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-15136
	ctx.r26.s64 = ctx.r11.s64 + -15136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251A20;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82251A28;
	sub_8224FD68(ctx, base);
	// lwz r10,36(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r28,r29,32
	ctx.r28.s64 = ctx.r29.s64 + 32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82251ae4
	if (!ctx.cr6.lt) goto loc_82251AE4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r24,r10,9925
	ctx.r24.s64 = ctx.r10.s64 + 9925;
	// addi r25,r11,7624
	ctx.r25.s64 = ctx.r11.s64 + 7624;
loc_82251A58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251A60;
	sub_8224F010(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251A70;
	sub_8224EFB8(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82251a84
	if (!ctx.cr6.eq) goto loc_82251A84;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82251a8c
	goto loc_82251A8C;
loc_82251A84:
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82251A8C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82251A98;
	sub_8224F1D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82251aac
	if (!ctx.cr6.eq) goto loc_82251AAC;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// b 0x82251ab4
	goto loc_82251AB4;
loc_82251AAC:
	// lwz r10,44(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82251AB4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82251AC0;
	sub_8224F1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82251AC8;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251a58
	if (ctx.cr6.lt) goto loc_82251A58;
loc_82251AE4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82251AF0;
	sub_8224F070(ctx, base);
loc_82251AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251AF8;
	sub_8224F010(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r26,r11,-15148
	ctx.r26.s64 = ctx.r11.s64 + -15148;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251B10;
	sub_8224EFB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd68
	ctx.lr = 0x82251B18;
	sub_8224FD68(ctx, base);
	// addi r29,r29,56
	ctx.r29.s64 = ctx.r29.s64 + 56;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwz r30,0(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82251b98
	if (!ctx.cr6.lt) goto loc_82251B98;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,-15276
	ctx.r28.s64 = ctx.r11.s64 + -15276;
loc_82251B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f010
	ctx.lr = 0x82251B44;
	sub_8224F010(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224efb8
	ctx.lr = 0x82251B54;
	sub_8224EFB8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82251B64;
	sub_8224F1D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f1d0
	ctx.lr = 0x82251B74;
	sub_8224F1D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224fd18
	ctx.lr = 0x82251B7C;
	sub_8224FD18(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,40
	ctx.r30.s64 = ctx.r30.s64 + 40;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82251b3c
	if (ctx.cr6.lt) goto loc_82251B3C;
loc_82251B98:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82251BA4;
	sub_8224F070(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224f070
	ctx.lr = 0x82251BB0;
	sub_8224F070(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254E80) {
	REX_FUNC_PROLOGUE();
	// b 0x822546e0
	sub_822546E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254E88) {
	REX_FUNC_PROLOGUE();
	// b 0x82254810
	sub_82254810(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254E90) {
	REX_FUNC_PROLOGUE();
	// b 0x82254a60
	sub_82254A60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EA0) {
	REX_FUNC_PROLOGUE();
	// b 0x82254b00
	sub_82254B00(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EB0) {
	REX_FUNC_PROLOGUE();
	// b 0x82254890
	sub_82254890(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82254EC8) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82254f44
	if (ctx.cr6.lt) goto loc_82254F44;
	// lwz r10,148(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82254f4c
	if (ctx.cr6.eq) goto loc_82254F4C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82254f4c
	if (!ctx.cr6.eq) goto loc_82254F4C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,-15800
	ctx.r10.s64 = ctx.r10.s64 + -15800;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82254da0
	ctx.lr = 0x82254F30;
	sub_82254DA0(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82254f40
	if (ctx.cr6.lt) goto loc_82254F40;
	// lwz r30,96(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_82254F40:
	// stw r11,144(r31)
	REX_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82254F44:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82254f50
	goto loc_82254F50;
loc_82254F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82254F50:
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

DEFINE_REX_FUNC(sub_82256450) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x82256458;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r20,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82256488;
	sub_8215EC60(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215ec60
	ctx.lr = 0x8225649C;
	sub_8215EC60(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x8215ec60
	ctx.lr = 0x822564AC;
	sub_8215EC60(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x8215ec60
	ctx.lr = 0x822564BC;
	sub_8215EC60(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x8215ec60
	ctx.lr = 0x822564CC;
	sub_8215EC60(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r20,0(r31)
	REX_STORE_U8(ctx.r31.u32 + 0, ctx.r20.u8);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4680(r31)
	REX_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
	// b 0x82256548
	goto loc_82256548;
loc_822564E4:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82256550
	if (ctx.cr6.eq) goto loc_82256550;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x8225650c
	if (!ctx.cr6.eq) goto loc_8225650C;
	// rlwinm r11,r9,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82256548
	goto loc_82256548;
loc_8225650C:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82256524
	if (!ctx.cr6.eq) goto loc_82256524;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x82255270
	ctx.lr = 0x82256520;
	sub_82255270(ctx, base);
	// b 0x8225652c
	goto loc_8225652C;
loc_82256524:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82256534
	if (!ctx.cr6.eq) goto loc_82256534;
loc_8225652C:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// b 0x82256548
	goto loc_82256548;
loc_82256534:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82256544
	if (ctx.cr6.eq) goto loc_82256544;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82256550
	if (!ctx.cr6.eq) goto loc_82256550;
loc_82256544:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_82256548:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822564e4
	if (ctx.cr6.lt) goto loc_822564E4;
loc_82256550:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822556a0
	ctx.lr = 0x8225655C;
	sub_822556A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82267548
	ctx.lr = 0x82256564;
	sub_82267548(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82267ed0
	ctx.lr = 0x8225656C;
	sub_82267ED0(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82256670
	if (ctx.cr0.eq) goto loc_82256670;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r23,r8,-13496
	ctx.r23.s64 = ctx.r8.s64 + -13496;
	// addi r26,r9,-14148
	ctx.r26.s64 = ctx.r9.s64 + -14148;
	// addi r22,r10,-13540
	ctx.r22.s64 = ctx.r10.s64 + -13540;
	// addi r25,r11,-14056
	ctx.r25.s64 = ctx.r11.s64 + -14056;
loc_82256598:
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r24,0(r7)
	ctx.r24.u64 = REX_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r28,r11,12,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x822565c8
	if (ctx.cr6.lt) goto loc_822565C8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,910
	ctx.r7.s64 = 910;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822565C4;
	sub_82260F30(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822565C8:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82256660
	if (ctx.cr6.eq) goto loc_82256660;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_822565DC:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225664c
	if (ctx.cr0.eq) goto loc_8225664C;
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,20,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82256630
	if (ctx.cr6.lt) goto loc_82256630;
	// beq cr6,0x8225664c
	if (ctx.cr6.eq) goto loc_8225664C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82256628
	if (ctx.cr6.lt) goto loc_82256628;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1006
	ctx.r7.s64 = 1006;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82256620;
	sub_82260F30(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8225664c
	goto loc_8225664C;
loc_82256628:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x8225664c
	goto loc_8225664C;
loc_82256630:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_8225664C:
	// rlwinm. r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x822565dc
	if (!ctx.cr0.eq) goto loc_822565DC;
loc_82256660:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r7,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bne 0x82256598
	if (!ctx.cr0.eq) goto loc_82256598;
loc_82256670:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8225CB68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8225CB70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r6)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x8225c220
	ctx.lr = 0x8225CB9C;
	sub_8225C220(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8225cc10
	if (ctx.cr6.eq) goto loc_8225CC10;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8225cbe4
	if (ctx.cr0.eq) goto loc_8225CBE4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8225CBE4:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225cbf0
	if (ctx.cr0.eq) goto loc_8225CBF0;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_8225CBF0:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8225cbfc
	if (ctx.cr0.eq) goto loc_8225CBFC;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_8225CBFC:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8225cc08
	if (ctx.cr0.eq) goto loc_8225CC08;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_8225CC08:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x8225cc20
	goto loc_8225CC20;
loc_8225CC10:
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225CC20:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82260428) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x82260430;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r24,16(r5)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82260458
	if (ctx.cr6.lt) goto loc_82260458;
	// bl 0x823712d0
	ctx.lr = 0x82260458;
	sub_823712D0(ctx, base);
loc_82260458:
	// lwz r11,432(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r22,0(r20)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822604b4
	if (ctx.cr6.eq) goto loc_822604B4;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822604b4
	if (ctx.cr0.eq) goto loc_822604B4;
	// lwz r11,424(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x82260484
	if (ctx.cr6.lt) goto loc_82260484;
	// bl 0x823712d0
	ctx.lr = 0x82260484;
	sub_823712D0(ctx, base);
loc_82260484:
	// lwz r11,424(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r22,204(r11)
	REX_STORE_U32(ctx.r11.u32 + 204, ctx.r22.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	REX_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_822604B4:
	// stw r22,432(r24)
	REX_STORE_U32(ctx.r24.u32 + 432, ctx.r22.u32);
	// lhz r27,2(r22)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r22.u32 + 2);
	// lwzu r11,4(r22)
	ea = 4 + ctx.r22.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r22.u32 = ea;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822606f8
	if (ctx.cr0.eq) goto loc_822606F8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822605f0
	if (!ctx.cr6.lt) goto loc_822605F0;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x82260548
	if (ctx.cr6.gt) goto loc_82260548;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,-2200
	ctx.r12.s64 = ctx.r12.s64 + -2200;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32218
	ctx.r12.s64 = -2111438848;
	// nop 
	// addi r12,r12,1328
	ctx.r12.s64 = ctx.r12.s64 + 1328;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_82260538;
	case 1:
		goto loc_82260538;
	case 2:
		goto loc_82260530;
	case 3:
		goto loc_82260530;
	case 4:
		goto loc_82260530;
	case 5:
		goto loc_82260540;
	case 6:
		goto loc_82260540;
	case 7:
		goto loc_82260538;
	case 8:
		goto loc_82260530;
	case 9:
		goto loc_82260538;
	case 10:
		goto loc_82260530;
	case 11:
		goto loc_82260548;
	case 12:
		goto loc_82260530;
	case 13:
		goto loc_82260530;
	case 14:
		goto loc_82260548;
	case 15:
		goto loc_82260548;
	case 16:
		goto loc_82260548;
	case 17:
		goto loc_82260548;
	case 18:
		goto loc_82260540;
	case 19:
		goto loc_82260530;
	case 20:
		goto loc_82260534;
	case 21:
		goto loc_82260534;
	case 22:
		goto loc_82260534;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82260530:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82260534:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82260538:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x82260554
	goto loc_82260554;
loc_82260540:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x82260550
	goto loc_82260550;
loc_82260548:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82260554
	if (!ctx.cr6.eq) goto loc_82260554;
loc_82260550:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82260554:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82260560
	if (ctx.cr6.lt) goto loc_82260560;
	// bl 0x823712d0
	ctx.lr = 0x82260560;
	sub_823712D0(ctx, base);
loc_82260560:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82260660
	if (!ctx.cr6.eq) goto loc_82260660;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x822605a4
	if (ctx.cr6.eq) goto loc_822605A4;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x8226058c
	if (ctx.cr6.lt) goto loc_8226058C;
	// bl 0x823712d0
	ctx.lr = 0x8226058C;
	sub_823712D0(ctx, base);
loc_8226058C:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822605a0
	if (!ctx.cr6.lt) goto loc_822605A0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822605A0:
	// stw r11,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_822605A4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x822605d4
	if (ctx.cr6.eq) goto loc_822605D4;
	// lwz r11,196(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r10,196(r24)
	REX_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822605d0
	if (!ctx.cr6.lt) goto loc_822605D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822605D0:
	// stw r11,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_822605D4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82260660
	if (ctx.cr6.eq) goto loc_82260660;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x82260660
	goto loc_82260660;
loc_822605F0:
	// beq cr6,0x822605f8
	if (ctx.cr6.eq) goto loc_822605F8;
	// bl 0x823712d0
	ctx.lr = 0x822605F8;
	sub_823712D0(ctx, base);
loc_822605F8:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x82260640
	if (ctx.cr6.eq) goto loc_82260640;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x82260660
	if (!ctx.cr6.eq) goto loc_82260660;
	// lwz r11,12(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	REX_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82260624
	if (ctx.cr6.lt) goto loc_82260624;
	// bl 0x823712d0
	ctx.lr = 0x82260624;
	sub_823712D0(ctx, base);
loc_82260624:
	// lwz r10,8(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82260638
	if (!ctx.cr6.lt) goto loc_82260638;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82260638:
	// stw r11,8(r23)
	REX_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x82260660
	goto loc_82260660;
loc_82260640:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82260660
	if (!ctx.cr6.eq) goto loc_82260660;
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8226065c
	if (!ctx.cr6.lt) goto loc_8226065C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8226065C:
	// stw r11,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_82260660:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x822606f0
	goto loc_822606F0;
loc_82260668:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x822606cc
	if (!ctx.cr6.eq) goto loc_822606CC;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822606ec
	if (!ctx.cr6.eq) goto loc_822606EC;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x822606a0
	if (ctx.cr6.lt) goto loc_822606A0;
	// bl 0x823712d0
	ctx.lr = 0x822606A0;
	sub_823712D0(ctx, base);
loc_822606A0:
	// lwz r10,4(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822606b4
	if (!ctx.cr6.lt) goto loc_822606B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_822606B4:
	// stw r11,4(r23)
	REX_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r21,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	REX_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x822606ec
	goto loc_822606EC;
loc_822606CC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822606ec
	if (!ctx.cr6.eq) goto loc_822606EC;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x822606e0
	if (ctx.cr6.lt) goto loc_822606E0;
	// bl 0x823712d0
	ctx.lr = 0x822606E0;
	sub_823712D0(ctx, base);
loc_822606E0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r21,r11,r24
	REX_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r21.u32);
loc_822606EC:
	// lwzu r11,4(r22)
	ea = 4 + ctx.r22.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r22.u32 = ea;
loc_822606F0:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82260668
	if (!ctx.cr0.eq) goto loc_82260668;
loc_822606F8:
	// stw r22,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82261200) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267EF8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,124(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 124);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267F08) {
	REX_FUNC_PROLOGUE();
	// lwz r3,84(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 84);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267F18) {
	REX_FUNC_PROLOGUE();
	// lwz r3,100(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 100);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82267F60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82267F68;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82267fc4
	if (ctx.cr6.eq) goto loc_82267FC4;
loc_82267F84:
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82267fa8
	if (ctx.cr6.gt) goto loc_82267FA8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82264a30
	ctx.lr = 0x82267FA0;
	sub_82264A30(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82267f84
	if (!ctx.cr6.eq) goto loc_82267F84;
loc_82267FA8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82267fc4
	if (ctx.cr6.eq) goto loc_82267FC4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82267fc4
	if (ctx.cr6.eq) goto loc_82267FC4;
	// lwz r11,76(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82267fe8
	if (!ctx.cr6.gt) goto loc_82267FE8;
loc_82267FC4:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,3528
	ctx.r6.s64 = ctx.r11.s64 + 3528;
	// addi r5,r10,3468
	ctx.r5.s64 = ctx.r10.s64 + 3468;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267FE8;
	sub_82260F30(ctx, base);
loc_82267FE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82264ae0
	ctx.lr = 0x82267FF4;
	sub_82264AE0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226B7F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8226B800;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,16(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r6,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r6.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmplwi cr6,r24,768
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 768, ctx.xer);
	// bge cr6,0x8226b834
	if (!ctx.cr6.lt) goto loc_8226B834;
	// bl 0x823712d0
	ctx.lr = 0x8226B834;
	sub_823712D0(ctx, base);
loc_8226B834:
	// lwz r28,0(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r15,r28
	ctx.r15.u64 = ctx.r28.u64;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b85c
	if (ctx.cr0.eq) goto loc_8226B85C;
	// bl 0x823712d0
	ctx.lr = 0x8226B85C;
	sub_823712D0(ctx, base);
loc_8226B85C:
	// rlwinm. r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b868
	if (ctx.cr0.eq) goto loc_8226B868;
	// bl 0x823712d0
	ctx.lr = 0x8226B868;
	sub_823712D0(ctx, base);
loc_8226B868:
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// li r16,33
	ctx.r16.s64 = 33;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8226b88c
	if (ctx.cr6.eq) goto loc_8226B88C;
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// lwz r18,0(r30)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwimi r28,r11,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r16,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8226B88C:
	// mr r29,r19
	ctx.r29.u64 = ctx.r19.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
loc_8226B898:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// beq 0x8226b900
	if (ctx.cr0.eq) goto loc_8226B900;
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rlwinm r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8226b8f8
	if (!ctx.cr6.eq) goto loc_8226B8F8;
	// rlwimi r11,r11,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x8226b8d8
	if (ctx.cr6.eq) goto loc_8226B8D8;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8226b8f8
	if (!ctx.cr6.eq) goto loc_8226B8F8;
loc_8226B8D8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8226b8e4
	if (ctx.cr6.eq) goto loc_8226B8E4;
	// bl 0x823712d0
	ctx.lr = 0x8226B8E4;
	sub_823712D0(ctx, base);
loc_8226B8E4:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stwx r11,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// b 0x8226b90c
	goto loc_8226B90C;
loc_8226B8F8:
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// b 0x8226b908
	goto loc_8226B908;
loc_8226B900:
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stwx r19,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r19.u32);
loc_8226B908:
	// stwx r19,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u32);
loc_8226B90C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8226b898
	if (ctx.cr6.lt) goto loc_8226B898;
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r17,r27,3
	ctx.r17.s64 = ctx.r27.s64 + 3;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// beq cr6,0x8226b93c
	if (ctx.cr6.eq) goto loc_8226B93C;
	// bl 0x823712d0
	ctx.lr = 0x8226B93C;
	sub_823712D0(ctx, base);
loc_8226B93C:
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// addi r10,r31,16
	ctx.r10.s64 = ctx.r31.s64 + 16;
	// ori r11,r11,94
	ctx.r11.u64 = ctx.r11.u64 | 94;
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// li r27,1
	ctx.r27.s64 = 1;
	// rlwinm r29,r31,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFF0000;
	// rlwimi r11,r10,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// addi r3,r23,4
	ctx.r3.s64 = ctx.r23.s64 + 4;
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8226b980
	if (ctx.cr6.eq) goto loc_8226B980;
	// oris r28,r28,15
	ctx.r28.u64 = ctx.r28.u64 | 983040;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x8226b980
	if (!ctx.cr6.eq) goto loc_8226B980;
	// rlwimi r28,r16,0,19,31
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x1FFF) | (ctx.r28.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r28,r16,0,1,3
	ctx.r28.u64 = (__builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x70000000) | (ctx.r28.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8226B980:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8226a108
	ctx.lr = 0x8226B994;
	sub_8226A108(ctx, base);
	// lwz r31,104(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,112(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226a680
	ctx.lr = 0x8226B9C4;
	sub_8226A680(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,94
	ctx.r8.s64 = 94;
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226a680
	ctx.lr = 0x8226B9EC;
	sub_8226A680(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8226ba24
	if (ctx.cr6.eq) goto loc_8226BA24;
	// stw r19,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r19.u32);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x8226aa88
	ctx.lr = 0x8226BA14;
	sub_8226AA88(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
loc_8226BA18:
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8226ba80
	goto loc_8226BA80;
loc_8226BA24:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x8226ba7c
	if (ctx.cr6.eq) goto loc_8226BA7C;
	// li r11,71
	ctx.r11.s64 = 71;
	// stw r27,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8226a108
	ctx.lr = 0x8226BA50;
	sub_8226A108(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 | 33;
	// stw r11,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// bl 0x8226a4f0
	ctx.lr = 0x8226BA68;
	sub_8226A4F0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r3,r7,4
	ctx.r3.s64 = ctx.r7.s64 + 4;
	// b 0x8226ba18
	goto loc_8226BA18;
loc_8226BA7C:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8226BA80:
	// lwz r10,316(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// stw r17,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r17.u32);
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822760D8) {
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
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82276108
	if (ctx.cr6.lt) goto loc_82276108;
	// cmplwi cr6,r11,102
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 102, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8227610c
	if (!ctx.cr6.gt) goto loc_8227610C;
loc_82276108:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8227610C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8227611c
	if (ctx.cr0.eq) goto loc_8227611C;
loc_82276114:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82276188
	goto loc_82276188;
loc_8227611C:
	// cmplwi cr6,r11,105
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 105, ctx.xer);
	// blt cr6,0x82276184
	if (ctx.cr6.lt) goto loc_82276184;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// ble cr6,0x82276114
	if (!ctx.cr6.gt) goto loc_82276114;
	// cmplwi cr6,r11,117
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 117, ctx.xer);
	// beq cr6,0x8227613c
	if (ctx.cr6.eq) goto loc_8227613C;
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// b 0x82276180
	goto loc_82276180;
loc_8227613C:
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8226d728
	ctx.lr = 0x82276158;
	sub_8226D728(ctx, base);
	// addi r11,r31,-16
	ctx.r11.s64 = ctx.r31.s64 + -16;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// bne cr6,0x82276184
	if (!ctx.cr6.eq) goto loc_82276184;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82276114
	if (ctx.cr6.eq) goto loc_82276114;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
loc_82276180:
	// beq cr6,0x82276114
	if (ctx.cr6.eq) goto loc_82276114;
loc_82276184:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82276188:
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

DEFINE_REX_FUNC(sub_82279880) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82279888;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82278978
	ctx.lr = 0x8227989C;
	sub_82278978(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279908
	if (!ctx.cr0.eq) goto loc_82279908;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82279908
	if (ctx.cr0.eq) goto loc_82279908;
loc_822798B4:
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822798cc
	if (ctx.cr0.eq) goto loc_822798CC;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x822798d0
	if (ctx.cr0.eq) goto loc_822798D0;
loc_822798CC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822798D0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82278cf8
	ctx.lr = 0x822798EC;
	sub_82278CF8(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279908
	if (!ctx.cr0.eq) goto loc_82279908;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822798b4
	if (!ctx.cr6.eq) goto loc_822798B4;
loc_82279908:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
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
	// lwz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279a00
	if (!ctx.cr0.eq) goto loc_82279A00;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82279a00
	if (ctx.cr0.eq) goto loc_82279A00;
loc_82279934:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x82279968
	if (!ctx.cr6.eq) goto loc_82279968;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226dc78
	ctx.lr = 0x8227994C;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82279968
	if (ctx.cr0.eq) goto loc_82279968;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82334408
	ctx.lr = 0x82279968;
	sub_82334408(ctx, base);
loc_82279968:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822799b0
	if (ctx.cr6.eq) goto loc_822799B0;
	// rlwinm r11,r30,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
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
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822799a0
	if (!ctx.cr6.eq) goto loc_822799A0;
loc_82279990:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x822799f0
	goto loc_822799F0;
loc_822799A0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82279a00
	if (!ctx.cr0.eq) goto loc_82279A00;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x822799f8
	goto loc_822799F8;
loc_822799B0:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
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
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// clrlwi r8,r9,31
	ctx.r8.u64 = ctx.r9.u32 & 0x1;
	// addic r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82279990
	if (ctx.cr6.eq) goto loc_82279990;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// lwz r31,20(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_822799F0:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82279a00
	if (!ctx.cr0.eq) goto loc_82279A00;
loc_822799F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82279934
	if (!ctx.cr6.eq) goto loc_82279934;
loc_82279A00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82280CD8) {
	REX_FUNC_PROLOGUE();
	// rlwinm. r11,r3,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280cec
	if (ctx.cr0.eq) goto loc_82280CEC;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280cec
	if (ctx.cr0.eq) goto loc_82280CEC;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
loc_82280CEC:
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280d00
	if (ctx.cr0.eq) goto loc_82280D00;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_82280D00:
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280d14
	if (ctx.cr0.eq) goto loc_82280D14;
	// rlwinm. r11,r4,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82280d14
	if (ctx.cr0.eq) goto loc_82280D14;
	// addi r4,r4,-2
	ctx.r4.s64 = ctx.r4.s64 + -2;
loc_82280D14:
	// or r3,r3,r4
	ctx.r3.u64 = ctx.r3.u64 | ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82281370) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82281260
	ctx.lr = 0x82281388;
	sub_82281260(ctx, base);
	// rlwinm r11,r31,5,22,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0x3E0;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r12,-3073
	ctx.r12.s64 = -201392128;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// ori r12,r12,64671
	ctx.r12.u64 = ctx.r12.u64 | 64671;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// ori r11,r11,7296
	ctx.r11.u64 = ctx.r11.u64 | 7296;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82282558) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82282560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,28(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822825dc
	if (!ctx.cr0.eq) goto loc_822825DC;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822825dc
	if (ctx.cr0.eq) goto loc_822825DC;
loc_82282580:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x822825c4
	if (!ctx.cr6.eq) goto loc_822825C4;
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822825c4
	if (ctx.cr0.eq) goto loc_822825C4;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r3,12(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8228cb48
	ctx.lr = 0x822825A4;
	sub_8228CB48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228cbc0
	ctx.lr = 0x822825B0;
	sub_8228CBC0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228d028
	ctx.lr = 0x822825BC;
	sub_8228D028(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822825e8
	if (ctx.cr6.eq) goto loc_822825E8;
loc_822825C4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822825dc
	if (!ctx.cr0.eq) goto loc_822825DC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82282580
	if (!ctx.cr6.eq) goto loc_82282580;
loc_822825DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822825E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_822825E8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822825e0
	goto loc_822825E0;
}

DEFINE_REX_FUNC(sub_82285908) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82285910;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82285a10
	if (!ctx.cr0.eq) goto loc_82285A10;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82285a10
	if (ctx.cr0.eq) goto loc_82285A10;
loc_82285930:
	// lwz r31,28(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822859f4
	if (!ctx.cr0.eq) goto loc_822859F4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x822859f4
	if (ctx.cr0.eq) goto loc_822859F4;
loc_82285944:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,109
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 109, ctx.xer);
	// beq cr6,0x8228595c
	if (ctx.cr6.eq) goto loc_8228595C;
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x822859dc
	if (!ctx.cr6.eq) goto loc_822859DC;
loc_8228595C:
	// addi r11,r11,-109
	ctx.r11.s64 = ctx.r11.s64 + -109;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r11,12
	ctx.xer.ca = ctx.r11.u32 <= 12;
	ctx.r9.u64 = static_cast<uint64_t>(12) - ctx.r11.u64;
	// subfic r10,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r10.u64 = static_cast<uint64_t>(1) - ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,11
	ctx.r10.s64 = ctx.r10.s64 + 11;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r30,r10,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r4,r30,r31
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwzx r26,r11,r31
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r29,12(r10)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// bl 0x82281b70
	ctx.lr = 0x822859A0;
	sub_82281B70(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822859AC;
	sub_82281428(ctx, base);
	// stwx r3,r30,r31
	REX_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8226dc78
	ctx.lr = 0x822859B8;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822859cc
	if (ctx.cr0.eq) goto loc_822859CC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82334690
	ctx.lr = 0x822859CC;
	sub_82334690(ctx, base);
loc_822859CC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,7,18,24
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x3F80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFC07F);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822859DC:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822859f4
	if (!ctx.cr0.eq) goto loc_822859F4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82285944
	if (!ctx.cr6.eq) goto loc_82285944;
loc_822859F4:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82285a10
	if (!ctx.cr0.eq) goto loc_82285A10;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82285930
	if (!ctx.cr6.eq) goto loc_82285930;
loc_82285A10:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8228CF08) {
	REX_FUNC_PROLOGUE();
	// rlwinm r11,r5,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// subf r10,r3,r4
	ctx.r10.u64 = ctx.r4.u64 - ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8228CF30:
	// ldx r11,r10,r3
	ctx.r11.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r3.u32);
	// ld r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// bdnz 0x8228cf30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228CF30;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228D420) {
	REX_FUNC_PROLOGUE();
	// lwz r10,672(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// rlwinm r9,r5,29,3,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFF8;
	// lwz r11,684(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r10,r4,r10
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrldi r7,r5,58
	ctx.r7.u64 = ctx.r5.u64 & 0x3F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sld r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// ldx r6,r9,r11
	ctx.r6.u64 = REX_LOAD_U64(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r4,29,3,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFF8;
	// clrldi r4,r4,58
	ctx.r4.u64 = ctx.r4.u64 & 0x3F;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stdx r7,r9,r11
	REX_STORE_U64(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u64);
	// sld r8,r8,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r4.u8 & 0x7F));
	// lwz r11,672(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 672);
	// lwz r9,684(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 684);
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// ldx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stdx r9,r10,r11
	REX_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8228ECB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8228ECB8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,192(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 192);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r24,0
	ctx.r24.s64 = 0;
	// bne 0x8228ecfc
	if (!ctx.cr0.eq) goto loc_8228ECFC;
	// std r24,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r24.u64);
	// std r24,16(r10)
	REX_STORE_U64(ctx.r10.u32 + 16, ctx.r24.u64);
	// std r24,24(r10)
	REX_STORE_U64(ctx.r10.u32 + 24, ctx.r24.u64);
	// std r24,32(r10)
	REX_STORE_U64(ctx.r10.u32 + 32, ctx.r24.u64);
	// b 0x8228ede8
	goto loc_8228EDE8;
loc_8228ECFC:
	// ld r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 40);
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// addi r9,r30,40
	ctx.r9.s64 = ctx.r30.s64 + 40;
	// li r7,1
	ctx.r7.s64 = 1;
	// std r10,8(r27)
	REX_STORE_U64(ctx.r27.u32 + 8, ctx.r10.u64);
	// ld r10,48(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 48);
	// std r10,16(r27)
	REX_STORE_U64(ctx.r27.u32 + 16, ctx.r10.u64);
	// ld r10,56(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 56);
	// std r10,24(r27)
	REX_STORE_U64(ctx.r27.u32 + 24, ctx.r10.u64);
	// ld r10,64(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 64);
	// std r10,32(r27)
	REX_STORE_U64(ctx.r27.u32 + 32, ctx.r10.u64);
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x8228ed84
	if (!ctx.cr6.gt) goto loc_8228ED84;
	// li r6,10
	ctx.r6.s64 = 10;
loc_8228ED3C:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8228ED4C:
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r30
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r30.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8228ed4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228ED4C;
	// lwz r10,192(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r6,r6,5
	ctx.r6.s64 = ctx.r6.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8228ed3c
	if (ctx.cr6.lt) goto loc_8228ED3C;
loc_8228ED84:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8228ede8
	if (ctx.cr6.eq) goto loc_8228EDE8;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228ede8
	if (ctx.cr0.eq) goto loc_8228EDE8;
	// li r7,5
	ctx.r7.s64 = 5;
loc_8228EDA0:
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = ctx.r11.s64 + -8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8228EDB0:
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// ld r5,8(r9)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r9.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U64(ctx.r8.u32 + ctx.r25.u32);
	// and r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 & ctx.r5.u64;
	// stdu r8,8(r9)
	ea = 8 + ctx.r9.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x8228edb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228EDB0;
	// lwz r10,192(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 192);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,5
	ctx.r7.s64 = ctx.r7.s64 + 5;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8228eda0
	if (ctx.cr6.lt) goto loc_8228EDA0;
loc_8228EDE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x8228ee64
	goto loc_8228EE64;
loc_8228EDF8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8228e900
	ctx.lr = 0x8228EE1C;
	sub_8228E900(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r10,r11,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x300;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228ee84
	if (!ctx.cr0.eq) goto loc_8228EE84;
	// lwz r11,192(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 192);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228ee5c
	if (ctx.cr0.eq) goto loc_8228EE5C;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// slw r4,r11,r29
	ctx.r4.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r29.u8 & 0x3F));
	// rlwimi r4,r28,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// bl 0x822789f8
	ctx.lr = 0x8228EE48;
	sub_822789F8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r11,r29,r26
	ctx.r11.u64 = ctx.r29.u64 + ctx.r26.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8228ee60
	if (!ctx.cr6.gt) goto loc_8228EE60;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
loc_8228EE5C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_8228EE60:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_8228EE64:
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8227fb90
	ctx.lr = 0x8228EE74;
	sub_8227FB90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8228edf8
	if (!ctx.cr6.eq) goto loc_8228EDF8;
	// b 0x8228ee94
	goto loc_8228EE94;
loc_8228EE84:
	// lwz r10,276(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r3,r11,22,28,31
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0xF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8228EE94:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82295748) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82295750;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82295028
	ctx.lr = 0x82295774;
	sub_82295028(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229578c
	if (ctx.cr0.eq) goto loc_8229578C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,3526
	ctx.r4.s64 = 3526;
	// bl 0x8225b1a0
	ctx.lr = 0x8229578C;
	sub_8225B1A0(ctx, base);
loc_8229578C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82278628
	ctx.lr = 0x8229579C;
	sub_82278628(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822964A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822964B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82295918
	ctx.lr = 0x822964C8;
	sub_82295918(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x822964e0
	if (!ctx.cr6.eq) goto loc_822964E0;
	// li r4,3569
	ctx.r4.s64 = 3569;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8225b1a0
	ctx.lr = 0x822964E0;
	sub_8225B1A0(ctx, base);
loc_822964E0:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82278628
	ctx.lr = 0x822964F4;
	sub_82278628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82298A80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82298a9c
	if (ctx.cr6.lt) goto loc_82298A9C;
	// cmplwi cr6,r11,82
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 82, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82298aa0
	if (!ctx.cr6.gt) goto loc_82298AA0;
loc_82298A9C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82298AA0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
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

DEFINE_REX_FUNC(sub_822997B0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// addi r8,r11,-32472
	ctx.r8.s64 = ctx.r11.s64 + -32472;
loc_822997D0:
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// b 0x822997ec
	goto loc_822997EC;
loc_822997DC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822997f4
	if (ctx.cr6.eq) goto loc_822997F4;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_822997EC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822997dc
	if (!ctx.cr6.eq) goto loc_822997DC;
loc_822997F4:
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822997d0
	if (!ctx.cr6.eq) goto loc_822997D0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8229AC40) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8229AC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,30
	ctx.r6.s64 = 30;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x8229AC70;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// beq cr6,0x8229ac94
	if (ctx.cr6.eq) goto loc_8229AC94;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x8229AC90;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8229AC94:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x8229AC9C;
	sub_82281428(ctx, base);
	// stw r3,44(r29)
	REX_STORE_U32(ctx.r29.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x8229acc0
	if (ctx.cr6.eq) goto loc_8229ACC0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,12(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x8229ACBC;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8229ACC0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x8229ACC8;
	sub_82281428(ctx, base);
	// stw r3,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229ad08
	if (ctx.cr6.eq) goto loc_8229AD08;
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r30,-36
	ctx.r10.s64 = ctx.r30.s64 + -36;
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
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_8229AD08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229CE50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x8229CE58;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// rlwinm r9,r11,25,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r11,27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 27, ctx.xer);
	// bgt cr6,0x8229d468
	if (ctx.cr6.gt) goto loc_8229D468;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,6600
	ctx.r12.s64 = ctx.r12.s64 + 6600;
	// lhzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32214
	ctx.r12.s64 = -2111176704;
	// addi r12,r12,-12632
	ctx.r12.s64 = ctx.r12.s64 + -12632;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_8229CEA8;
	case 1:
		goto loc_8229CEA8;
	case 2:
		goto loc_8229D2C4;
	case 3:
		goto loc_8229D2C4;
	case 4:
		goto loc_8229D30C;
	case 5:
		goto loc_8229D314;
	case 6:
		goto loc_8229D31C;
	case 7:
		goto loc_8229D324;
	case 8:
		goto loc_8229D3BC;
	case 9:
		goto loc_8229D3C4;
	case 10:
		goto loc_8229D3CC;
	case 11:
		goto loc_8229D468;
	case 12:
		goto loc_8229D468;
	case 13:
		goto loc_8229D468;
	case 14:
		goto loc_8229D468;
	case 15:
		goto loc_8229D468;
	case 16:
		goto loc_8229D468;
	case 17:
		goto loc_8229D468;
	case 18:
		goto loc_8229D468;
	case 19:
		goto loc_8229D468;
	case 20:
		goto loc_8229D468;
	case 21:
		goto loc_8229D468;
	case 22:
		goto loc_8229D468;
	case 23:
		goto loc_8229D468;
	case 24:
		goto loc_8229D32C;
	case 25:
		goto loc_8229D3A4;
	case 26:
		goto loc_8229D3AC;
	case 27:
		goto loc_8229D3B4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8229CEA8:
	// lwz r20,48(r24)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r26,44(r24)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r22,28(r24)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// stb r18,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r18.u8);
	// lwz r16,12(r20)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// lwz r19,12(r26)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r11,8(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8229cee0
	if (ctx.cr6.eq) goto loc_8229CEE0;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8229cee4
	if (!ctx.cr6.eq) goto loc_8229CEE4;
loc_8229CEE0:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229CEE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d20c
	if (ctx.cr0.eq) goto loc_8229D20C;
	// lwz r11,8(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8229cf08
	if (ctx.cr6.eq) goto loc_8229CF08;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8229cf0c
	if (!ctx.cr6.eq) goto loc_8229CF0C;
loc_8229CF08:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_8229CF0C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d20c
	if (!ctx.cr0.eq) goto loc_8229D20C;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// rlwinm. r8,r8,0,27,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8229cf40
	if (ctx.cr0.eq) goto loc_8229CF40;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8229d20c
	if (!ctx.cr6.eq) goto loc_8229D20C;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// andi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u64 & 26;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8229d20c
	if (!ctx.cr0.eq) goto loc_8229D20C;
loc_8229CF40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82299410
	ctx.lr = 0x8229CF4C;
	sub_82299410(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d20c
	if (ctx.cr0.eq) goto loc_8229D20C;
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229cf74
	if (ctx.cr0.eq) goto loc_8229CF74;
	// rlwinm r11,r10,18,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7;
	// slw r11,r18,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r11.u8 & 0x3F));
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// b 0x8229cf78
	goto loc_8229CF78;
loc_8229CF74:
	// rlwinm r30,r10,31,28,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0xF;
loc_8229CF78:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229cf98
	if (ctx.cr6.eq) goto loc_8229CF98;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// subf. r11,r11,r30
	ctx.r11.u64 = ctx.r30.u64 - ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// beq 0x8229cf9c
	if (ctx.cr0.eq) goto loc_8229CF9C;
loc_8229CF98:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8229CF9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229cfe8
	if (!ctx.cr0.eq) goto loc_8229CFE8;
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229cfe8
	if (!ctx.cr0.eq) goto loc_8229CFE8;
	// lis r11,-28311
	ctx.r11.s64 = -1855389696;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,5192
	ctx.r11.u64 = ctx.r11.u64 | 5192;
	// ori r10,r10,36262
	ctx.r10.u64 = ctx.r10.u64 | 36262;
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
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
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// clrlwi r6,r11,29
	ctx.r6.u64 = ctx.r11.u32 & 0x7;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8232db48
	ctx.lr = 0x8229CFE4;
	sub_8232DB48(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_8229CFE8:
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8229d1cc
	if (ctx.cr6.eq) goto loc_8229D1CC;
	// lbz r27,80(r1)
	ctx.r27.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
loc_8229CFF8:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// andc r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 & ~ctx.r11.u64;
	// rlwinm r9,r10,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subf r30,r11,r30
	ctx.r30.u64 = ctx.r30.u64 - ctx.r11.u64;
	// subfic r28,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r28.u64 = static_cast<uint64_t>(31) - ctx.r8.u64;
	// clrlwi r6,r10,27
	ctx.r6.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r31,r28,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// srw r11,r9,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r5,r11,30
	ctx.r5.u64 = ctx.r11.u32 & 0x3;
	// bl 0x822813c8
	ctx.lr = 0x8229D030;
	sub_822813C8(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// srw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r31,r9,30
	ctx.r31.u64 = ctx.r9.u32 & 0x3;
	// beq 0x8229d0e4
	if (ctx.cr0.eq) goto loc_8229D0E4;
	// lwz r10,8(r19)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r19.u32 + 8);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// rlwinm r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8229d0e4
	if (!ctx.cr6.eq) goto loc_8229D0E4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82281260
	ctx.lr = 0x8229D070;
	sub_82281260(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwimi r11,r18,26,4,6
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 26) & 0xE000000) | (ctx.r11.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82280d20
	ctx.lr = 0x8229D088;
	sub_82280D20(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// rlwimi r11,r31,2,27,29
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x1C) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE3);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r10,0(r15)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// rlwinm r10,r10,0,27,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFC1F;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// bl 0x8229ad18
	ctx.lr = 0x8229D0C0;
	sub_8229AD18(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r6,r11,0,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822813c8
	ctx.lr = 0x8229D0D8;
	sub_822813C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// b 0x8229d108
	goto loc_8229D108;
loc_8229D0E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281370
	ctx.lr = 0x8229D0F4;
	sub_82281370(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwimi r11,r10,0,0,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8229D108:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bne cr6,0x8229d18c
	if (!ctx.cr6.eq) goto loc_8229D18C;
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r10,r10,0,27,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1E;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229d170
	if (ctx.cr0.eq) goto loc_8229D170;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d144
	if (ctx.cr0.eq) goto loc_8229D144;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82280d20
	ctx.lr = 0x8229D140;
	sub_82280D20(ctx, base);
	// b 0x8229d154
	goto loc_8229D154;
loc_8229D144:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// rlwimi r10,r11,0,0,26
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8229D154:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229b0c0
	ctx.lr = 0x8229D16C;
	sub_8229B0C0(ctx, base);
	// b 0x8229d1a4
	goto loc_8229D1A4;
loc_8229D170:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229afe8
	ctx.lr = 0x8229D188;
	sub_8229AFE8(ctx, base);
	// b 0x8229d1a4
	goto loc_8229D1A4;
loc_8229D18C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229af10
	ctx.lr = 0x8229D1A4;
	sub_8229AF10(ctx, base);
loc_8229D1A4:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229a398
	ctx.lr = 0x8229D1C0;
	sub_8229A398(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8229cff8
	if (!ctx.cr6.eq) goto loc_8229CFF8;
loc_8229D1CC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8229d3e0
	if (ctx.cr6.eq) goto loc_8229D3E0;
	// rlwinm r11,r21,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// addi r10,r17,-36
	ctx.r10.s64 = ctx.r17.s64 + -36;
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
	// lwz r9,0(r17)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r17.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r7,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r10,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r10.u32);
	// b 0x8229d3e0
	goto loc_8229D3E0;
loc_8229D20C:
	// cmplw cr6,r19,r16
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x8229d294
	if (!ctx.cr6.eq) goto loc_8229D294;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8229d244
	if (!ctx.cr0.eq) goto loc_8229D244;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8229d280
	if (ctx.cr6.eq) goto loc_8229D280;
	// li r5,34
	ctx.r5.s64 = 34;
	// b 0x8229d280
	goto loc_8229D280;
loc_8229D244:
	// lwz r9,8(r24)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,128
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 128, ctx.xer);
	// bne cr6,0x8229d294
	if (!ctx.cr6.eq) goto loc_8229D294;
	// xor r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// andi. r10,r10,27
	ctx.r10.u64 = ctx.r10.u64 & 27;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8229d294
	if (!ctx.cr0.eq) goto loc_8229D294;
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d27c
	if (ctx.cr0.eq) goto loc_8229D27C;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// stw r11,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// stw r10,44(r24)
	REX_STORE_U32(ctx.r24.u32 + 44, ctx.r10.u32);
loc_8229D27C:
	// li r5,57
	ctx.r5.s64 = 57;
loc_8229D280:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229c308
	ctx.lr = 0x8229D290;
	sub_8229C308(ctx, base);
	// b 0x8229d3e0
	goto loc_8229D3E0;
loc_8229D294:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r5,33
	ctx.r5.s64 = 33;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// beq cr6,0x8229d2ac
	if (ctx.cr6.eq) goto loc_8229D2AC;
	// li r5,35
	ctx.r5.s64 = 35;
loc_8229D2AC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8229D2B0:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229c4e8
	ctx.lr = 0x8229D2C0;
	sub_8229C4E8(ctx, base);
	// b 0x8229d3e0
	goto loc_8229D3E0;
loc_8229D2C4:
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// lwz r11,44(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r10,48(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r5,r9,37
	ctx.r5.s64 = ctx.r9.s64 + 37;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8229d304
	if (!ctx.cr6.eq) goto loc_8229D304;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229d280
	if (ctx.cr0.eq) goto loc_8229D280;
loc_8229D304:
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8229d2b0
	goto loc_8229D2B0;
loc_8229D30C:
	// li r5,39
	ctx.r5.s64 = 39;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D314:
	// li r5,40
	ctx.r5.s64 = 40;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D31C:
	// li r5,41
	ctx.r5.s64 = 41;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D324:
	// li r5,42
	ctx.r5.s64 = 42;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D32C:
	// lwz r29,48(r24)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r28,r11,7,29,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8229d38c
	if (ctx.cr0.eq) goto loc_8229D38C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f31,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
loc_8229D34C:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// rlwinm r9,r11,27,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// srw r11,r9,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232a460
	ctx.lr = 0x8229D374;
	sub_8232A460(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8229d38c
	if (!ctx.cr6.eq) goto loc_8229D38C;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8229d34c
	if (ctx.cr6.lt) goto loc_8229D34C;
loc_8229D38C:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8229d39c
	if (!ctx.cr6.eq) goto loc_8229D39C;
	// li r5,71
	ctx.r5.s64 = 71;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D39C:
	// li r5,67
	ctx.r5.s64 = 67;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3A4:
	// li r5,68
	ctx.r5.s64 = 68;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3AC:
	// li r5,69
	ctx.r5.s64 = 69;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3B4:
	// li r5,70
	ctx.r5.s64 = 70;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3BC:
	// li r5,43
	ctx.r5.s64 = 43;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3C4:
	// li r5,44
	ctx.r5.s64 = 44;
	// b 0x8229d3d0
	goto loc_8229D3D0;
loc_8229D3CC:
	// li r5,45
	ctx.r5.s64 = 45;
loc_8229D3D0:
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8229c0f8
	ctx.lr = 0x8229D3E0;
	sub_8229C0F8(ctx, base);
loc_8229D3E0:
	// lwz r31,4(r17)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r17.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d45c
	if (!ctx.cr0.eq) goto loc_8229D45C;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8229d45c
	if (ctx.cr0.eq) goto loc_8229D45C;
loc_8229D3F4:
	// rlwinm r30,r31,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229d45c
	if (!ctx.cr0.eq) goto loc_8229D45C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8229d45c
	if (ctx.cr6.eq) goto loc_8229D45C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82298c48
	ctx.lr = 0x8229D414;
	sub_82298C48(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8229d434
	if (!ctx.cr6.eq) goto loc_8229D434;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822bf4d0
	ctx.lr = 0x8229D430;
	sub_822BF4D0(ctx, base);
	// b 0x8229d43c
	goto loc_8229D43C;
loc_8229D434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822815d8
	ctx.lr = 0x8229D43C;
	sub_822815D8(ctx, base);
loc_8229D43C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r31,40(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8229d45c
	if (!ctx.cr0.eq) goto loc_8229D45C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8229d3f4
	if (!ctx.cr6.eq) goto loc_8229D3F4;
loc_8229D45C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
loc_8229D468:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,6656
	ctx.r5.s64 = ctx.r11.s64 + 6656;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229D47C;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822B9B50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x822B9B58;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r26,r4,0,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 6;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,20(r4)
	REX_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// li r23,0
	ctx.r23.s64 = 0;
	// rlwinm r21,r10,25,25,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x822b9ccc
	goto loc_822B9CCC;
loc_822B9B94:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_822B9B98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822b9bdc
	if (ctx.cr6.eq) goto loc_822B9BDC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9bc4
	if (ctx.cr6.eq) goto loc_822B9BC4;
	// lwz r9,28(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822b9bc4
	if (!ctx.cr6.eq) goto loc_822B9BC4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9bcc
	if (!ctx.cr0.eq) goto loc_822B9BCC;
loc_822B9BC4:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x822b9b98
	goto loc_822B9B98;
loc_822B9BCC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822b9cc4
	goto loc_822B9CC4;
loc_822B9BDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x822b9cc4
	if (!ctx.cr6.eq) goto loc_822B9CC4;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b9c04
	if (ctx.cr0.eq) goto loc_822B9C04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,660(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 660);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x822B9C04;
	sub_822C5EF0(ctx, base);
loc_822B9C04:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a5b00
	ctx.lr = 0x822B9C10;
	sub_822A5B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9cc4
	if (!ctx.cr0.eq) goto loc_822B9CC4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a8620
	ctx.lr = 0x822B9C2C;
	sub_822A8620(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x822b9cc4
	if (ctx.cr6.gt) goto loc_822B9CC4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a4d78
	ctx.lr = 0x822B9C48;
	sub_822A4D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822b9cc4
	if (ctx.cr6.lt) goto loc_822B9CC4;
	// bne cr6,0x822b9c60
	if (!ctx.cr6.eq) goto loc_822B9C60;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x822b9cc4
	if (!ctx.cr6.gt) goto loc_822B9CC4;
loc_822B9C60:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b9438
	ctx.lr = 0x822B9C78;
	sub_822B9438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822b9cc4
	if (!ctx.cr0.eq) goto loc_822B9CC4;
	// lwz r11,664(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 664);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822b9cb8
	if (ctx.cr6.gt) goto loc_822B9CB8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x822b9cc4
	goto loc_822B9CC4;
loc_822B9CB8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a9cd0
	ctx.lr = 0x822B9CC4;
	sub_822A9CD0(ctx, base);
loc_822B9CC4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
loc_822B9CCC:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b9ce0
	if (!ctx.cr0.eq) goto loc_822B9CE0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822b9b94
	if (!ctx.cr0.eq) goto loc_822B9B94;
loc_822B9CE0:
	// lwz r31,40(r26)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r26.u32 + 40);
	// b 0x822b9e18
	goto loc_822B9E18;
loc_822B9CE8:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_822B9CEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822b9d28
	if (ctx.cr6.eq) goto loc_822B9D28;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,28(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822b9d10
	if (!ctx.cr6.eq) goto loc_822B9D10;
	// lwz r10,20(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b9d18
	if (!ctx.cr0.eq) goto loc_822B9D18;
loc_822B9D10:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x822b9cec
	goto loc_822B9CEC;
loc_822B9D18:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x822b9e10
	goto loc_822B9E10;
loc_822B9D28:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmpw cr6,r10,r21
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x822b9e10
	if (!ctx.cr6.eq) goto loc_822B9E10;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822b9d50
	if (ctx.cr0.eq) goto loc_822B9D50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,660(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 660);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x822B9D50;
	sub_822C5EF0(ctx, base);
loc_822B9D50:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a5b00
	ctx.lr = 0x822B9D5C;
	sub_822A5B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9e10
	if (!ctx.cr0.eq) goto loc_822B9E10;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a8620
	ctx.lr = 0x822B9D78;
	sub_822A8620(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bgt cr6,0x822b9e10
	if (ctx.cr6.gt) goto loc_822B9E10;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a4d78
	ctx.lr = 0x822B9D94;
	sub_822A4D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822b9e10
	if (ctx.cr6.lt) goto loc_822B9E10;
	// bne cr6,0x822b9dac
	if (!ctx.cr6.eq) goto loc_822B9DAC;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x822b9e10
	if (!ctx.cr6.gt) goto loc_822B9E10;
loc_822B9DAC:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822b9438
	ctx.lr = 0x822B9DC4;
	sub_822B9438(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822b9e10
	if (!ctx.cr0.eq) goto loc_822B9E10;
	// lwz r11,664(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 664);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x822b9e04
	if (ctx.cr6.gt) goto loc_822B9E04;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// ld r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// b 0x822b9e10
	goto loc_822B9E10;
loc_822B9E04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822a9cd0
	ctx.lr = 0x822B9E10;
	sub_822A9CD0(ctx, base);
loc_822B9E10:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
loc_822B9E18:
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822b9e28
	if (!ctx.cr0.eq) goto loc_822B9E28;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822b9ce8
	if (!ctx.cr6.eq) goto loc_822B9CE8;
loc_822B9E28:
	// lwz r11,28(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b9e60
	if (!ctx.cr0.eq) goto loc_822B9E60;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822b9e60
	if (ctx.cr0.eq) goto loc_822B9E60;
loc_822B9E3C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822b9e60
	if (!ctx.cr0.eq) goto loc_822B9E60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822b9e3c
	if (!ctx.cr6.eq) goto loc_822B9E3C;
loc_822B9E60:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822b9e7c
	if (ctx.cr6.eq) goto loc_822B9E7C;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822aff08
	ctx.lr = 0x822B9E7C;
	sub_822AFF08(ctx, base);
loc_822B9E7C:
	// addi r11,r23,0
	ctx.r11.s64 = ctx.r23.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C6D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822C6D28;
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
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82275ef8
	ctx.lr = 0x822C6D48;
	sub_82275EF8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwimi r30,r29,14,4,17
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0xFFFC000) | (ctx.r30.u64 & 0xFFFFFFFFF0003FFF);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwimi r30,r10,0,0,3
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000) | (ctx.r30.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r30,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C7A70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822C7A78;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c7bac
	if (!ctx.cr0.eq) goto loc_822C7BAC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c7bac
	if (ctx.cr0.eq) goto loc_822C7BAC;
	// li r27,0
	ctx.r27.s64 = 0;
loc_822C7AA4:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x822c7b90
	if (!ctx.cr6.eq) goto loc_822C7B90;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822c7ad0
	if (ctx.cr6.eq) goto loc_822C7AD0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x822c7ad4
	if (!ctx.cr6.eq) goto loc_822C7AD4;
loc_822C7AD0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_822C7AD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c7b90
	if (ctx.cr0.eq) goto loc_822C7B90;
	// lbz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c7af4
	if (ctx.cr0.eq) goto loc_822C7AF4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f4320
	ctx.lr = 0x822C7AF0;
	sub_822F4320(ctx, base);
	// stb r27,0(r24)
	REX_STORE_U8(ctx.r24.u32 + 0, ctx.r27.u8);
loc_822C7AF4:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_822C7AF8:
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822c7b90
	if (ctx.cr6.eq) goto loc_822C7B90;
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// stw r27,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// stw r27,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stb r27,104(r1)
	REX_STORE_U8(ctx.r1.u32 + 104, ctx.r27.u8);
	// lwz r4,8(r25)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// bl 0x82338a00
	ctx.lr = 0x822C7B24;
	sub_82338A00(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275e50
	ctx.lr = 0x822C7B2C;
	sub_82275E50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822c7b6c
	if (ctx.cr0.eq) goto loc_822C7B6C;
loc_822C7B34:
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822f1500
	ctx.lr = 0x822C7B4C;
	sub_822F1500(ctx, base);
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822c7b64
	if (ctx.cr6.eq) goto loc_822C7B64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82275e50
	ctx.lr = 0x822C7B5C;
	sub_82275E50(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822c7b34
	if (!ctx.cr0.eq) goto loc_822C7B34;
loc_822C7B64:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822c7b7c
	if (!ctx.cr6.eq) goto loc_822C7B7C;
loc_822C7B6C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281b70
	ctx.lr = 0x822C7B7C;
	sub_82281B70(ctx, base);
loc_822C7B7C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822c7af8
	if (!ctx.cr6.eq) goto loc_822C7AF8;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// b 0x822c7af8
	goto loc_822C7AF8;
loc_822C7B90:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c7bac
	if (!ctx.cr0.eq) goto loc_822C7BAC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c7aa4
	if (!ctx.cr6.eq) goto loc_822C7AA4;
loc_822C7BAC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CA3A0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CA3A8;
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
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,11
	ctx.r6.s64 = 11;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CA3D4;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822ca3f8
	if (ctx.cr6.eq) goto loc_822CA3F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CA3F4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CA3F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CA400;
	sub_82281428(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
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
	ctx.lr = 0x822CA430;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CAB18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CAB20;
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
	// li r6,61
	ctx.r6.s64 = 61;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CAB4C;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822cab70
	if (ctx.cr6.eq) goto loc_822CAB70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CAB6C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CAB70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CAB78;
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
	ctx.lr = 0x822CAB90;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CB440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822CB448;
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
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CB47C;
	sub_8232D9E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB48C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB498;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB4A8;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB4B4;
	sub_82281428(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x822cb4d8
	if (ctx.cr6.eq) goto loc_822CB4D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CB4D4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822CB4D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB4E0;
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
	ctx.lr = 0x822CB510;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CED60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822CED68;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,396(r1)
	REX_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r11,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r16,0
	ctx.r16.s64 = 0;
	// lfs f31,2104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
loc_822CED8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stb r16,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r16.u8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cf9f4
	if (!ctx.cr0.eq) goto loc_822CF9F4;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf9f4
	if (ctx.cr0.eq) goto loc_822CF9F4;
loc_822CEDAC:
	// lwz r11,28(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 28);
loc_822CEDB0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r22,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822cf9d4
	if (ctx.cr6.eq) goto loc_822CF9D4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822c6930
	ctx.lr = 0x822CEDD4;
	sub_822C6930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// beq 0x822ceeb0
	if (ctx.cr0.eq) goto loc_822CEEB0;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x822cee00
	if (!ctx.cr6.eq) goto loc_822CEE00;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822cee04
	if (ctx.cr6.gt) goto loc_822CEE04;
loc_822CEE00:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822CEE04:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,152
	ctx.r6.s64 = ctx.r1.s64 + 152;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r22
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r29,12(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8232c520
	ctx.lr = 0x822CEE44;
	sub_8232C520(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x822cf99c
	if (ctx.cr6.eq) goto loc_822CF99C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822cee68
	goto loc_822CEE68;
loc_822CEE60:
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_822CEE68:
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822cee60
	if (!ctx.cr6.eq) goto loc_822CEE60;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stb r8,82(r1)
	REX_STORE_U8(ctx.r1.u32 + 82, ctx.r8.u8);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r30,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// lwz r11,120(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// rlwimi r9,r11,0,27,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r9,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x822cf99c
	goto loc_822CF99C;
loc_822CEEB0:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15232
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15232, ctx.xer);
	// bne cr6,0x822cf99c
	if (!ctx.cr6.eq) goto loc_822CF99C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,119
	ctx.r4.s64 = 119;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822CEED0;
	sub_8226D728(ctx, base);
	// addi r11,r22,-12
	ctx.r11.s64 = ctx.r22.s64 + -12;
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r16,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// add r20,r3,r11
	ctx.r20.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r16,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r16.u32);
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// stb r21,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// mr r26,r16
	ctx.r26.u64 = ctx.r16.u64;
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
	// lwz r19,4(r20)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x822cf040
	if (ctx.cr6.eq) goto loc_822CF040;
loc_822CEF10:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwzx r29,r10,r11
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82337f70
	ctx.lr = 0x822CEF34;
	sub_82337F70(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,28,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r9,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x822cf024
	if (!ctx.cr6.eq) goto loc_822CF024;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cf024
	if (!ctx.cr6.eq) goto loc_822CF024;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// addi r29,r30,-8
	ctx.r29.s64 = ctx.r30.s64 + -8;
	// bl 0x8226d728
	ctx.lr = 0x822CEF84;
	sub_8226D728(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r3,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// rlwinm r28,r10,17,18,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x3FFF;
	// bl 0x8226d728
	ctx.lr = 0x822CEFA4;
	sub_8226D728(ctx, base);
	// lwzx r10,r3,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// clrlwi r9,r10,17
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r9,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// or r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 | ctx.r25.u64;
	// bne cr6,0x822cefec
	if (!ctx.cr6.eq) goto loc_822CEFEC;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// mr r18,r24
	ctx.r18.u64 = ctx.r24.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// b 0x822cf00c
	goto loc_822CF00C;
loc_822CEFEC:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// bne cr6,0x822cf004
	if (!ctx.cr6.eq) goto loc_822CF004;
	// subfc r11,r28,r26
	ctx.xer.ca = ctx.r26.u32 >= ctx.r28.u32;
	ctx.r11.u64 = ctx.r26.u64 - ctx.r28.u64;
	// subf r17,r26,r28
	ctx.r17.u64 = ctx.r28.u64 - ctx.r26.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 & ctx.r21.u64;
loc_822CF004:
	// cmpw cr6,r18,r24
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x822cf024
	if (!ctx.cr6.eq) goto loc_822CF024;
loc_822CF00C:
	// mullw r11,r27,r17
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r17.s32);
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822cf024
	if (!ctx.cr6.eq) goto loc_822CF024;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822cf028
	if (ctx.cr6.eq) goto loc_822CF028;
loc_822CF024:
	// mr r21,r16
	ctx.r21.u64 = ctx.r16.u64;
loc_822CF028:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x822cef10
	if (ctx.cr6.lt) goto loc_822CEF10;
	// stb r21,81(r1)
	REX_STORE_U8(ctx.r1.u32 + 81, ctx.r21.u8);
	// stw r18,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r18.u32);
	// stw r14,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
loc_822CF040:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// beq 0x822cf064
	if (ctx.cr0.eq) goto loc_822CF064;
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x822cf064
	if (ctx.cr6.gt) goto loc_822CF064;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cf998
	if (!ctx.cr0.eq) goto loc_822CF998;
loc_822CF064:
	// addi r15,r22,4
	ctx.r15.s64 = ctx.r22.s64 + 4;
loc_822CF068:
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
loc_822CF06C:
	// lwz r18,0(r15)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x822cf984
	if (ctx.cr6.eq) goto loc_822CF984;
	// lwz r21,16(r18)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r18.u32 + 16);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x822cf970
	if (ctx.cr6.eq) goto loc_822CF970;
	// lwz r11,8(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15104
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15104, ctx.xer);
	// bne cr6,0x822cfa24
	if (!ctx.cr6.eq) goto loc_822CFA24;
	// lwz r25,16(r21)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r21.u32 + 16);
	// b 0x822cf0ac
	goto loc_822CF0AC;
loc_822CF09C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822cf0b4
	if (ctx.cr6.eq) goto loc_822CF0B4;
	// lwz r25,4(r25)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r25.u32 + 4);
loc_822CF0AC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x822cf09c
	if (!ctx.cr6.eq) goto loc_822CF09C;
loc_822CF0B4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x822cfa58
	if (ctx.cr6.eq) goto loc_822CFA58;
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r11,r11,18
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFF;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cfa58
	if (!ctx.cr6.eq) goto loc_822CFA58;
	// lwz r29,48(r21)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,7040
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7040, ctx.xer);
	// bne cr6,0x822cfa30
	if (!ctx.cr6.eq) goto loc_822CFA30;
	// lwz r26,44(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8232c520
	ctx.lr = 0x822CF10C;
	sub_8232C520(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// beq cr6,0x822cf570
	if (ctx.cr6.eq) goto loc_822CF570;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822cf23c
	if (!ctx.cr6.eq) goto loc_822CF23C;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8232a6f0
	ctx.lr = 0x822CF138;
	sub_8232A6F0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,160(r1)
	REX_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f0,160(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822cf23c
	if (!ctx.cr6.eq) goto loc_822CF23C;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x822cf23c
	if (!ctx.cr6.lt) goto loc_822CF23C;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r30,12(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cf23c
	if (ctx.cr6.eq) goto loc_822CF23C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,15872
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15872, ctx.xer);
	// bne cr6,0x822cfa3c
	if (!ctx.cr6.eq) goto loc_822CFA3C;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// li r4,124
	ctx.r4.s64 = 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d728
	ctx.lr = 0x822CF1A0;
	sub_8226D728(ctx, base);
	// addi r10,r30,-8
	ctx.r10.s64 = ctx.r30.s64 + -8;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x822cfa3c
	if (!ctx.cr6.eq) goto loc_822CFA3C;
	// addi r8,r21,4
	ctx.r8.s64 = ctx.r21.s64 + 4;
loc_822CF1CC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf948
	if (ctx.cr6.eq) goto loc_822CF948;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cf228
	if (ctx.cr6.eq) goto loc_822CF228;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822cf1fc
	goto loc_822CF1FC;
loc_822CF1F4:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_822CF1FC:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf1f4
	if (!ctx.cr6.eq) goto loc_822CF1F4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822CF228:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf1cc
	if (!ctx.cr6.eq) goto loc_822CF1CC;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x822cf1cc
	goto loc_822CF1CC;
loc_822CF23C:
	// addi r22,r21,4
	ctx.r22.s64 = ctx.r21.s64 + 4;
loc_822CF240:
	// lwz r23,0(r22)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x822cf948
	if (ctx.cr6.eq) goto loc_822CF948;
	// lwz r30,16(r23)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r23.u32 + 16);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822cf55c
	if (ctx.cr6.eq) goto loc_822CF55C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822c6930
	ctx.lr = 0x822CF260;
	sub_822C6930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf55c
	if (ctx.cr0.eq) goto loc_822CF55C;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// bne cr6,0x822cf2d8
	if (!ctx.cr6.eq) goto loc_822CF2D8;
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,12288
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 12288, ctx.xer);
	// bne cr6,0x822cf294
	if (!ctx.cr6.eq) goto loc_822CF294;
	// rlwinm r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bgt cr6,0x822cf298
	if (ctx.cr6.gt) goto loc_822CF298;
loc_822CF294:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822CF298:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r28,0(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,11
	ctx.r11.s64 = ctx.r11.s64 + 11;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r29,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// bl 0x82281b70
	ctx.lr = 0x822CF2C4;
	sub_82281B70(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822CF2D0;
	sub_82281428(ctx, base);
	// stwx r3,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x822cf55c
	goto loc_822CF55C;
loc_822CF2D8:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,12288
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12288, ctx.xer);
	// beq cr6,0x822cfa48
	if (ctx.cr6.eq) goto loc_822CFA48;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CF2F4;
	sub_8227A448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwimi r10,r11,11,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// rlwinm r11,r10,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r10,27,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,26,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3C;
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8232def8
	ctx.lr = 0x822CF34C;
	sub_8232DEF8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232def8
	ctx.lr = 0x822CF364;
	sub_8232DEF8(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cba50
	ctx.lr = 0x822CF380;
	sub_822CBA50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275ef8
	ctx.lr = 0x822CF394;
	sub_82275EF8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r24,r19,18
	ctx.r24.u64 = ctx.r19.u32 & 0x3FFF;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r10,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// li r11,1
	ctx.r11.s64 = 1;
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | ctx.r24.u64;
	// li r27,2
	ctx.r27.s64 = 2;
	// rlwimi r10,r11,14,4,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFC000) | (ctx.r10.u64 & 0xFFFFFFFFF0003FFF);
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// ble cr6,0x822cf4e0
	if (!ctx.cr6.gt) goto loc_822CF4E0;
	// li r25,8
	ctx.r25.s64 = 8;
loc_822CF3D0:
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r25,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// bl 0x8232def8
	ctx.lr = 0x822CF3E4;
	sub_8232DEF8(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,168(r1)
	REX_STORE_U64(ctx.r1.u32 + 168, ctx.r11.u64);
	// lfd f0,168(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82333b98
	ctx.lr = 0x822CF418;
	sub_82333B98(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r14,r11,7,29,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// bl 0x82281260
	ctx.lr = 0x822CF42C;
	sub_82281260(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// rlwimi r10,r14,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82280d20
	ctx.lr = 0x822CF448;
	sub_82280D20(ctx, base);
	// lwz r14,144(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// bl 0x822a6fa8
	ctx.lr = 0x822CF470;
	sub_822A6FA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r15
	ctx.r7.u64 = ctx.r15.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cbb30
	ctx.lr = 0x822CF48C;
	sub_822CBB30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82275ef8
	ctx.lr = 0x822CF4A0;
	sub_82275EF8(ctx, base);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r10,r10,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFC000;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// or r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 | ctx.r24.u64;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// rlwimi r10,r11,14,4,17
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0xFFFC000) | (ctx.r10.u64 & 0xFFFFFFFFF0003FFF);
	// cmplw cr6,r27,r19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r19.u32, ctx.xer);
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r3.u32);
	// blt cr6,0x822cf3d0
	if (ctx.cr6.lt) goto loc_822CF3D0;
	// lwz r15,112(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r14,92(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822CF4E0:
	// addi r8,r30,4
	ctx.r8.s64 = ctx.r30.s64 + 4;
loc_822CF4E4:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf548
	if (ctx.cr6.eq) goto loc_822CF548;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cf534
	if (ctx.cr6.eq) goto loc_822CF534;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822cf514
	goto loc_822CF514;
loc_822CF50C:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_822CF514:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf50c
	if (!ctx.cr6.eq) goto loc_822CF50C;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r28.u32);
loc_822CF534:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf4e4
	if (!ctx.cr6.eq) goto loc_822CF4E4;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x822cf4e4
	goto loc_822CF4E4;
loc_822CF548:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334408
	ctx.lr = 0x822CF55C;
	sub_82334408(ctx, base);
loc_822CF55C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x822cf240
	if (!ctx.cr6.eq) goto loc_822CF240;
	// addi r22,r23,8
	ctx.r22.s64 = ctx.r23.s64 + 8;
	// b 0x822cf240
	goto loc_822CF240;
loc_822CF570:
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822cf5d8
	if (!ctx.cr6.eq) goto loc_822CF5D8;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x8232a6f0
	ctx.lr = 0x822CF584;
	sub_8232A6F0(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// stfd f0,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.f0.u64);
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822cf5d8
	if (!ctx.cr6.eq) goto loc_822CF5D8;
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x822cf5d8
	if (!ctx.cr6.lt) goto loc_822CF5D8;
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r10
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x822a7078
	ctx.lr = 0x822CF5D0;
	sub_822A7078(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822cf8d4
	if (!ctx.cr0.eq) goto loc_822CF8D4;
loc_822CF5D8:
	// lbz r11,81(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 81);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cf740
	if (ctx.cr0.eq) goto loc_822CF740;
	// lwz r11,12(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822cf5fc
	goto loc_822CF5FC;
loc_822CF5F4:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822CF5FC:
	// cmplw cr6,r10,r18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822cf5f4
	if (!ctx.cr6.eq) goto loc_822CF5F4;
	// lwz r10,8(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 8);
	// cmplwi cr6,r17,1
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 1, ctx.xer);
	// lwz r9,108(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// ori r9,r9,228
	ctx.r9.u64 = ctx.r9.u64 | 228;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 4);
	// stw r11,8(r18)
	REX_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// stw r18,4(r14)
	REX_STORE_U32(ctx.r14.u32 + 4, ctx.r18.u32);
	// stw r14,12(r18)
	REX_STORE_U32(ctx.r18.u32 + 12, ctx.r14.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// rlwinm r10,r11,22,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r10,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r10,r11,26,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r11,r11,0,27,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822cf970
	if (ctx.cr6.eq) goto loc_822CF970;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r30,12(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CF684;
	sub_8227A448(ctx, base);
	// clrldi r10,r17,32
	ctx.r10.u64 = ctx.r17.u64 & 0xFFFFFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// std r10,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfd f0,184(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// li r4,1
	ctx.r4.s64 = 1;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82333b98
	ctx.lr = 0x822CF6C4;
	sub_82333B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822CF6D4;
	sub_82281370(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822ca0a0
	ctx.lr = 0x822CF6EC;
	sub_822CA0A0(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822cf704
	goto loc_822CF704;
loc_822CF6FC:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822CF704:
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822cf6fc
	if (!ctx.cr6.eq) goto loc_822CF6FC;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// stw r26,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r3,12(r26)
	REX_STORE_U32(ctx.r26.u32 + 12, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// rlwimi r11,r17,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r11.u32);
	// b 0x822cf970
	goto loc_822CF970;
loc_822CF740:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x822cf970
	if (!ctx.cr6.gt) goto loc_822CF970;
	// cmplwi cr6,r19,1
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 1, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x822cf778
	if (!ctx.cr6.eq) goto loc_822CF778;
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// bl 0x822a7078
	ctx.lr = 0x822CF770;
	sub_822A7078(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822cf8d4
	goto loc_822CF8D4;
loc_822CF778:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,12(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822CF784;
	sub_8227A448(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822a73b8
	ctx.lr = 0x822CF7B8;
	sub_822A73B8(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r27,r11,18,18,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x82275ef8
	ctx.lr = 0x822CF7D4;
	sub_82275EF8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r26,r19,18
	ctx.r26.u64 = ctx.r19.u32 & 0x3FFF;
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// rlwinm r11,r11,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// li r28,2
	ctx.r28.s64 = 2;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplwi cr6,r19,2
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 2, ctx.xer);
	// rlwimi r11,r27,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// ble cr6,0x822cf8d4
	if (!ctx.cr6.gt) goto loc_822CF8D4;
	// li r27,8
	ctx.r27.s64 = 8;
loc_822CF80C:
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// std r11,192(r1)
	REX_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f0,192(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82333b98
	ctx.lr = 0x822CF83C;
	sub_82333B98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281370
	ctx.lr = 0x822CF84C;
	sub_82281370(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a6fa8
	ctx.lr = 0x822CF864;
	sub_822A6FA8(ctx, base);
	// lwz r11,8(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r7,r27,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// bl 0x822cb970
	ctx.lr = 0x822CF884;
	sub_822CB970(ctx, base);
	// lwz r11,8(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r24,r11,18,18,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFF;
	// bl 0x82275ef8
	ctx.lr = 0x822CF8A0;
	sub_82275EF8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// stw r16,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r16.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,0,0,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFC000;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// cmplw cr6,r28,r19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r19.u32, ctx.xer);
	// rlwimi r11,r24,14,4,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 14) & 0xFFFC000) | (ctx.r11.u64 & 0xFFFFFFFFF0003FFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// blt cr6,0x822cf80c
	if (ctx.cr6.lt) goto loc_822CF80C;
loc_822CF8D4:
	// addi r8,r21,4
	ctx.r8.s64 = ctx.r21.s64 + 4;
loc_822CF8D8:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822cf948
	if (ctx.cr6.eq) goto loc_822CF948;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822cf934
	if (ctx.cr6.eq) goto loc_822CF934;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x822cf908
	goto loc_822CF908;
loc_822CF900:
	// addi r10,r9,8
	ctx.r10.s64 = ctx.r9.s64 + 8;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
loc_822CF908:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf900
	if (!ctx.cr6.eq) goto loc_822CF900;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_822CF934:
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822cf8d8
	if (!ctx.cr6.eq) goto loc_822CF8D8;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// b 0x822cf8d8
	goto loc_822CF8D8;
loc_822CF948:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8226dc78
	ctx.lr = 0x822CF950;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822cf96c
	if (ctx.cr0.eq) goto loc_822CF96C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334408
	ctx.lr = 0x822CF96C;
	sub_82334408(ctx, base);
loc_822CF96C:
	// lwz r22,84(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_822CF970:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x822cf06c
	if (!ctx.cr6.eq) goto loc_822CF06C;
	// addi r15,r18,8
	ctx.r15.s64 = ctx.r18.s64 + 8;
	// b 0x822cf068
	goto loc_822CF068;
loc_822CF984:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226dc78
	ctx.lr = 0x822CF98C;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822cf9a8
	if (!ctx.cr0.eq) goto loc_822CF9A8;
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_822CF998:
	// stb r16,80(r1)
	REX_STORE_U8(ctx.r1.u32 + 80, ctx.r16.u8);
loc_822CF99C:
	// rlwinm r11,r22,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// b 0x822cedb0
	goto loc_822CEDB0;
loc_822CF9A8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,8(r20)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226df90
	ctx.lr = 0x822CF9BC;
	sub_8226DF90(ctx, base);
	// stw r16,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r16.u32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82334690
	ctx.lr = 0x822CF9CC;
	sub_82334690(ctx, base);
	// lwz r15,88(r1)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x822cedac
	goto loc_822CEDAC;
loc_822CF9D4:
	// rlwinm r11,r15,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822cf9f4
	if (!ctx.cr0.eq) goto loc_822CF9F4;
	// mr r15,r11
	ctx.r15.u64 = ctx.r11.u64;
	// stw r11,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822cedac
	if (!ctx.cr6.eq) goto loc_822CEDAC;
loc_822CF9F4:
	// lbz r11,82(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 82);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822ced8c
	if (!ctx.cr0.eq) goto loc_822CED8C;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822cfa64
	if (ctx.cr0.eq) goto loc_822CFA64;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,-8192
	ctx.r11.s64 = ctx.r11.s64 + -8192;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822CFA18:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_822CFA24:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA30;
	sub_8225B1A0(ctx, base);
loc_822CFA30:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA3C;
	sub_8225B1A0(ctx, base);
loc_822CFA3C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA48;
	sub_8225B1A0(ctx, base);
loc_822CFA48:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,7160
	ctx.r5.s64 = ctx.r11.s64 + 7160;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA58;
	sub_8225B1A0(ctx, base);
loc_822CFA58:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA64;
	sub_8225B1A0(ctx, base);
loc_822CFA64:
	// lwz r11,396(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 396);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x822cfa18
	if (!ctx.cr6.eq) goto loc_822CFA18;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,7132
	ctx.r5.s64 = ctx.r11.s64 + 7132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822CFA84;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822F99D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F99E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x822f6e68
	ctx.lr = 0x822F99FC;
	sub_822F6E68(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,-13344
	ctx.r5.s64 = ctx.r11.s64 + -13344;
	// extsb r6,r30
	ctx.r6.s64 = ctx.r30.s8;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82370890
	ctx.lr = 0x822F9A18;
	sub_82370890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82275ef8
	ctx.lr = 0x822F9A28;
	sub_82275EF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821ca8f8
	ctx.lr = 0x822F9A34;
	sub_821CA8F8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,18
	ctx.r11.s64 = 18;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// bl 0x822f5e90
	ctx.lr = 0x822F9A50;
	sub_822F5E90(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FAA98) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822faadc
	if (!ctx.cr6.eq) goto loc_822FAADC;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822faac0
	if (ctx.cr0.eq) goto loc_822FAAC0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822faac8
	goto loc_822FAAC8;
loc_822FAAC0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822FAAC8:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_822FAADC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822FB0C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822FB0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
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
	// bl 0x822f5018
	ctx.lr = 0x822FB0EC;
	sub_822F5018(ctx, base);
	// lwz r6,24(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f9b10
	ctx.lr = 0x822FB10C;
	sub_822F9B10(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x822fb13c
	if (!ctx.cr0.eq) goto loc_822FB13C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329f80
	ctx.lr = 0x822FB12C;
	sub_82329F80(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3523
	ctx.r4.s64 = 3523;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB13C;
	sub_8225B1A0(ctx, base);
loc_822FB13C:
	// clrlwi. r11,r28,28
	ctx.r11.u64 = ctx.r28.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fb170
	if (!ctx.cr0.eq) goto loc_822FB170;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329f80
	ctx.lr = 0x822FB15C;
	sub_82329F80(ctx, base);
	// rlwinm r6,r28,28,4,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,3634
	ctx.r4.s64 = 3634;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FB170;
	sub_8225B1A0(ctx, base);
loc_822FB170:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FC868) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x822FC870;
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
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FC898;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fc8bc
	if (ctx.cr6.eq) goto loc_822FC8BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822FC8B8;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822FC8BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FC8C4;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FC8D4;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822FC8E0;
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

DEFINE_REX_FUNC(sub_822FDAE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x822FDAE8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822fdb40
	if (ctx.cr0.eq) goto loc_822FDB40;
	// lwz r11,584(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 584);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fdb20
	if (ctx.cr0.eq) goto loc_822FDB20;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fdb2c
	goto loc_822FDB2C;
loc_822FDB20:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822FDB2C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,-4(r11)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x822fdb4c
	goto loc_822FDB4C;
loc_822FDB40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f6f18
	ctx.lr = 0x822FDB48;
	sub_822F6F18(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_822FDB4C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82338b20
	ctx.lr = 0x822FDB5C;
	sub_82338B20(ctx, base);
	// lwz r10,556(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r10,556(r31)
	REX_STORE_U32(ctx.r31.u32 + 556, ctx.r10.u32);
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDBA0;
	sub_8232D9E0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,117
	ctx.r4.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// bl 0x8226d728
	ctx.lr = 0x822FDBC4;
	sub_8226D728(ctx, base);
	// addi r11,r28,-16
	ctx.r11.s64 = ctx.r28.s64 + -16;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// ori r10,r9,7
	ctx.r10.u64 = ctx.r9.u64 | 7;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,556(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 556);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r5,r4,24
	ctx.r5.s64 = ctx.r4.s64 + 24;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDC08;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x822814f0
	ctx.lr = 0x822FDC20;
	sub_822814F0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r24,1
	ctx.r24.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fde6c
	if (ctx.cr6.eq) goto loc_822FDE6C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// andi. r10,r11,1280
	ctx.r10.u64 = ctx.r11.u64 & 1280;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822fde6c
	if (ctx.cr0.eq) goto loc_822FDE6C;
	// lwz r25,32(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm. r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822fdc54
	if (!ctx.cr0.eq) goto loc_822FDC54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fae70
	ctx.lr = 0x822FDC54;
	sub_822FAE70(ctx, base);
loc_822FDC54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f6f18
	ctx.lr = 0x822FDC5C;
	sub_822F6F18(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,48(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r11,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,564(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// bl 0x82338b20
	ctx.lr = 0x822FDC88;
	sub_82338B20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f6f18
	ctx.lr = 0x822FDC90;
	sub_822F6F18(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// bl 0x82338b20
	ctx.lr = 0x822FDCB0;
	sub_82338B20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82338b20
	ctx.lr = 0x822FDCC0;
	sub_82338B20(ctx, base);
	// addi r27,r30,32
	ctx.r27.s64 = ctx.r30.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDCE0;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// stw r11,8(r22)
	REX_STORE_U32(ctx.r22.u32 + 8, ctx.r11.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDD0C;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x822814f0
	ctx.lr = 0x822FDD24;
	sub_822814F0(ctx, base);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDD44;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822FDD70;
	sub_8232D9E0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x822814f0
	ctx.lr = 0x822FDD88;
	sub_822814F0(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fc4a8
	ctx.lr = 0x822FDD9C;
	sub_822FC4A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822FDDB0;
	sub_82279AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x822FDDBC;
	sub_82281428(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwimi r11,r24,17,13,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 17) & 0x60000) | (ctx.r11.u64 & 0xFFFFFFFFFFF9FFFF);
	// li r5,7
	ctx.r5.s64 = 7;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,564(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// addi r30,r11,32
	ctx.r30.s64 = ctx.r11.s64 + 32;
	// bl 0x82279aa8
	ctx.lr = 0x822FDDE0;
	sub_82279AA8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,564(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 564);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822cacb0
	ctx.lr = 0x822FDDF4;
	sub_822CACB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r30,-16
	ctx.r29.s64 = ctx.r30.s64 + -16;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,6
	ctx.r11.u64 = ctx.r11.u64 | 393216;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822FDE1C;
	sub_8226D728(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r26,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822FDE48;
	sub_8226D728(ctx, base);
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r24,5,23,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0x1FF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r25,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r25.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x822fdee4
	goto loc_822FDEE4;
loc_822FDE6C:
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
	ctx.lr = 0x822FDE88;
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
	ctx.lr = 0x822FDEA4;
	sub_8226D728(ctx, base);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stwx r10,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fb480
	ctx.lr = 0x822FDEBC;
	sub_822FB480(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82281428
	ctx.lr = 0x822FDEC8;
	sub_82281428(ctx, base);
	// stw r3,44(r30)
	REX_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_822FDEE4:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822fdef8
	if (!ctx.cr0.eq) goto loc_822FDEF8;
	// stw r26,564(r31)
	REX_STORE_U32(ctx.r31.u32 + 564, ctx.r26.u32);
loc_822FDEF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fdf04
	if (ctx.cr6.eq) goto loc_822FDF04;
	// stw r24,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r24.u32);
loc_822FDF04:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314B38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82314B40;
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
	// addi r29,r10,13032
	ctx.r29.s64 = ctx.r10.s64 + 13032;
	// bne cr6,0x82314b7c
	if (!ctx.cr6.eq) goto loc_82314B7C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,12772
	ctx.r5.s64 = ctx.r11.s64 + 12772;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,186
	ctx.r7.s64 = 186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314B7C;
	sub_82260F30(ctx, base);
loc_82314B7C:
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82314920
	ctx.lr = 0x82314B84;
	sub_82314920(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82314bac
	if (!ctx.cr0.eq) goto loc_82314BAC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1784
	ctx.r5.s64 = ctx.r11.s64 + 1784;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,192
	ctx.r7.s64 = 192;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314BA8;
	sub_82260F30(ctx, base);
	// b 0x82314bd0
	goto loc_82314BD0;
loc_82314BAC:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82264bd8
	ctx.lr = 0x82314BD0;
	sub_82264BD8(ctx, base);
loc_82314BD0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823152F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82315300;
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
	// bne cr6,0x8231534c
	if (!ctx.cr6.eq) goto loc_8231534C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,1808
	ctx.r5.s64 = ctx.r11.s64 + 1808;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,312
	ctx.r7.s64 = 312;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231534C;
	sub_82260F30(ctx, base);
loc_8231534C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82315370
	if (!ctx.cr6.eq) goto loc_82315370;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,1796
	ctx.r5.s64 = ctx.r11.s64 + 1796;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315370;
	sub_82260F30(ctx, base);
loc_82315370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82315394
	if (!ctx.cr6.eq) goto loc_82315394;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13408
	ctx.r5.s64 = ctx.r11.s64 + 13408;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,314
	ctx.r7.s64 = 314;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315394;
	sub_82260F30(ctx, base);
loc_82315394:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x823153b8
	if (!ctx.cr6.eq) goto loc_823153B8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13388
	ctx.r5.s64 = ctx.r11.s64 + 13388;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,315
	ctx.r7.s64 = 315;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823153B8;
	sub_82260F30(ctx, base);
loc_823153B8:
	// li r4,24
	ctx.r4.s64 = 24;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x823153C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823153f0
	if (!ctx.cr0.eq) goto loc_823153F0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13376
	ctx.r5.s64 = ctx.r11.s64 + 13376;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,322
	ctx.r7.s64 = 322;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823153EC;
	sub_82260F30(ctx, base);
	// b 0x82315484
	goto loc_82315484;
loc_823153F0:
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
	// bl 0x82265748
	ctx.lr = 0x82315418;
	sub_82265748(ctx, base);
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
	// bl 0x822657b8
	ctx.lr = 0x82315430;
	sub_822657B8(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82315448
	if (ctx.cr0.eq) goto loc_82315448;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82315484
	if (!ctx.cr6.eq) goto loc_82315484;
loc_82315448:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8231545c
	if (ctx.cr6.eq) goto loc_8231545C;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82315478
	if (!ctx.cr6.eq) goto loc_82315478;
loc_8231545C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,13320
	ctx.r5.s64 = ctx.r11.s64 + 13320;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,349
	ctx.r7.s64 = 349;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82315478;
	sub_82260F30(ctx, base);
loc_82315478:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82314ce0
	ctx.lr = 0x82315480;
	sub_82314CE0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82315484:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82317D18) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82317D20;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,15856
	ctx.r28.s64 = ctx.r10.s64 + 15856;
	// bne cr6,0x82317d60
	if (!ctx.cr6.eq) goto loc_82317D60;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,15844
	ctx.r5.s64 = ctx.r11.s64 + 15844;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,311
	ctx.r7.s64 = 311;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317D60;
	sub_82260F30(ctx, base);
loc_82317D60:
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
	// bne cr6,0x82317da4
	if (!ctx.cr6.eq) goto loc_82317DA4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,1956
	ctx.r5.s64 = ctx.r11.s64 + 1956;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,318
	ctx.r7.s64 = 318;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82317DA4;
	sub_82260F30(ctx, base);
loc_82317DA4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82265178
	ctx.lr = 0x82317DB0;
	sub_82265178(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823189A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x823189B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r30,28(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,16040
	ctx.r28.s64 = ctx.r10.s64 + 16040;
	// ble cr6,0x823189f4
	if (!ctx.cr6.gt) goto loc_823189F4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,16260
	ctx.r5.s64 = ctx.r11.s64 + 16260;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1461
	ctx.r7.s64 = 1461;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823189F4;
	sub_82260F30(ctx, base);
loc_823189F4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82318a18
	if (!ctx.cr6.eq) goto loc_82318A18;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,16220
	ctx.r5.s64 = ctx.r11.s64 + 16220;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1462
	ctx.r7.s64 = 1462;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82318A18;
	sub_82260F30(ctx, base);
loc_82318A18:
	// addi r11,r31,4196
	ctx.r11.s64 = ctx.r31.s64 + 4196;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82318a68
	if (!ctx.cr6.eq) goto loc_82318A68;
	// stw r31,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82318a70
	if (!ctx.cr6.eq) goto loc_82318A70;
loc_82318A38:
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82318A3C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r10,r30
	REX_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82318A44:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r30,13152
	ctx.r4.s64 = ctx.r30.s64 + 13152;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82318390
	ctx.lr = 0x82318A5C;
	sub_82318390(ctx, base);
	// lwz r11,13164(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 13164);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,13164(r30)
	REX_STORE_U32(ctx.r30.u32 + 13164, ctx.r11.u32);
loc_82318A68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_82318A70:
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82318a84
	if (!ctx.cr6.eq) goto loc_82318A84;
	// lwz r11,23204(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 23204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82318a38
	goto loc_82318A38;
loc_82318A84:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x82318a3c
	if (!ctx.cr6.eq) goto loc_82318A3C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82318a44
	goto loc_82318A44;
}

DEFINE_REX_FUNC(sub_8231DF30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8231DF38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82318258
	ctx.lr = 0x8231DF4C;
	sub_82318258(ctx, base);
	// li r11,107
	ctx.r11.s64 = 107;
	// li r9,1
	ctx.r9.s64 = 1;
	// sth r11,2(r29)
	REX_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r10,0,16,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,76(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r10,6(r29)
	REX_STORE_U16(ctx.r29.u32 + 6, ctx.r10.u16);
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwimi r10,r9,18,8,15
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r10,4(r29)
	REX_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
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
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,24,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,28,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,8,21,23
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,8,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231e008
	if (ctx.cr0.eq) goto loc_8231E008;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231E008:
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r8,r10,0,16,9
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFC0FFFF) | (ctx.r8.u64 & 0x3F0000);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwimi r8,r10,0,9,7
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r8.u64 & 0x800000);
	// oris r10,r8,64
	ctx.r10.u64 = ctx.r8.u64 | 4194304;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwimi r10,r8,28,29,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,4,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r8,r10,0,24,20
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF) | (ctx.r8.u64 & 0x700);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r8,28(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// rlwimi r10,r8,4,17,19
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x7000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8FFF);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r10,r10,0,8,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8231e090
	if (ctx.cr0.eq) goto loc_8231E090;
	// lwz r10,12(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231E090:
	// li r10,81
	ctx.r10.s64 = 81;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// sth r10,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r10.u16);
	// li r10,17
	ctx.r10.s64 = 17;
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,17,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r12,-21846
	ctx.r12.s64 = -21846;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,5
	ctx.r4.s64 = 5;
	// sth r7,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r7.u16);
	// li r3,3
	ctx.r3.s64 = 3;
	// li r8,65
	ctx.r8.s64 = 65;
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r30,r10,18,8,15
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r30.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r10,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r6,r6,r12
	ctx.r6.u64 = ctx.r6.u64 & ctx.r12.u64;
	// oris r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 1048576;
	// ori r6,r6,8738
	ctx.r6.u64 = ctx.r6.u64 | 8738;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r5,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r5.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r6,r10,18,8,15
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// lwz r6,76(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r6,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
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
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// ori r7,r7,8738
	ctx.r7.u64 = ctx.r7.u64 | 8738;
	// li r12,-17477
	ctx.r12.s64 = -17477;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r9,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lwzu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r7,r7,r12
	ctx.r7.u64 = ctx.r7.u64 & ctx.r12.u64;
	// ori r7,r7,13107
	ctx.r7.u64 = ctx.r7.u64 | 13107;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
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
	// lwz r8,76(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r9,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// li r12,-17527
	ctx.r12.s64 = -17527;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// ori r9,r9,13057
	ctx.r9.u64 = ctx.r9.u64 | 13057;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,76(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & ctx.r12.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,13057
	ctx.r10.u64 = ctx.r10.u64 | 13057;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82325520) {
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
	// addi r10,r4,3
	ctx.r10.s64 = ctx.r4.s64 + 3;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r30,r10,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8232555c
	if (!ctx.cr6.gt) goto loc_8232555C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82345bc0
	ctx.lr = 0x8232555C;
	sub_82345BC0(ctx, base);
loc_8232555C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x823255ac
	if (ctx.cr0.eq) goto loc_823255AC;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823255ac
	if (!ctx.cr6.lt) goto loc_823255AC;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// add r8,r11,r30
	ctx.r8.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bge cr6,0x8232559c
	if (!ctx.cr6.lt) goto loc_8232559C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x823255a0
	goto loc_823255A0;
loc_8232559C:
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
loc_823255A0:
	// lwz r9,36(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
loc_823255AC:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823255c4
	if (ctx.cr6.lt) goto loc_823255C4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_823255C4:
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
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

DEFINE_REX_FUNC(sub_82325F58) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,1536(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1536);
	// bl 0x822672b0
	ctx.lr = 0x82325F74;
	sub_822672B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82325fa0
	if (ctx.cr0.eq) goto loc_82325FA0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,20232
	ctx.r6.s64 = ctx.r11.s64 + 20232;
	// addi r5,r10,17348
	ctx.r5.s64 = ctx.r10.s64 + 17348;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,739
	ctx.r7.s64 = 739;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82325FA0;
	sub_82260F30(ctx, base);
loc_82325FA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823263F8) {
	REX_FUNC_PROLOGUE();
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r9,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82327928) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82327930;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,10920
	ctx.r26.s64 = ctx.r10.s64 + 10920;
	// bne cr6,0x82327978
	if (!ctx.cr6.eq) goto loc_82327978;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,21660
	ctx.r5.s64 = ctx.r11.s64 + 21660;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82327978;
	sub_82260F30(ctx, base);
loc_82327978:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823279a0
	if (ctx.cr6.lt) goto loc_823279A0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-13640
	ctx.r5.s64 = ctx.r11.s64 + -13640;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823279A0;
	sub_82260F30(ctx, base);
loc_823279A0:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823279d4
	if (ctx.cr6.lt) goto loc_823279D4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-13712
	ctx.r5.s64 = ctx.r11.s64 + -13712;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,165
	ctx.r7.s64 = 165;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823279D4;
	sub_82260F30(ctx, base);
loc_823279D4:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82329B98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f0,1792(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82329bc4
	if (!ctx.cr6.eq) goto loc_82329BC4;
	// lis r11,-128
	ctx.r11.s64 = -8388608;
	// b 0x82329c10
	goto loc_82329C10;
loc_82329BC4:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82329c0c
	if (ctx.cr6.lt) goto loc_82329C0C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821649c8
	ctx.lr = 0x82329BD4;
	sub_821649C8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82329c0c
	if (ctx.cr6.eq) goto loc_82329C0C;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82329c04
	if (ctx.cr6.eq) goto loc_82329C04;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82160c10
	ctx.lr = 0x82329BEC;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,26280(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x82329BFC;
	sub_82160C10(ctx, base);
	// fdiv f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f1.f64;
	// b 0x82329c18
	goto loc_82329C18;
loc_82329C04:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// b 0x82329c10
	goto loc_82329C10;
loc_82329C0C:
	// lis r11,-64
	ctx.r11.s64 = -4194304;
loc_82329C10:
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_82329C18:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232AB30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8232AB38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x823299f8
	ctx.lr = 0x8232AB4C;
	sub_823299F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ab68
	if (ctx.cr0.eq) goto loc_8232AB68;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwimi r11,r31,14,15,17
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x1C000) | (ctx.r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
loc_8232AB60:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_8232AB68:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232ab98
	if (ctx.cr6.eq) goto loc_8232AB98;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_8232AB7C:
	// srw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bdnz 0x8232ab7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8232AB7C;
loc_8232AB98:
	// lis r10,-28311
	ctx.r10.s64 = -1855389696;
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
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
	// rlwinm r6,r9,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7;
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// srd r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r7.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r8,r9,31,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0xF;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r11,r11,r8
	ctx.r11.u64 = ctx.r8.u64 - ctx.r11.u64;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// li r4,3
	ctx.r4.s64 = 3;
loc_8232ABE4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ac20
	if (ctx.cr6.eq) goto loc_8232AC20;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// slw r3,r4,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// andc r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 & ~ctx.r5.u64;
	// addi r31,r11,-1
	ctx.r31.s64 = ctx.r11.s64 + -1;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// andc r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r3.u64;
	// subfic r5,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r5.u64;
	// andc r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// slw r5,r5,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// subf r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	// b 0x8232abe4
	goto loc_8232ABE4;
loc_8232AC20:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232AC24:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8232ac94
	if (ctx.cr6.eq) goto loc_8232AC94;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r5,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r5.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// beq cr6,0x8232ac84
	if (ctx.cr6.eq) goto loc_8232AC84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8232AC4C:
	// srw r31,r7,r10
	ctx.r31.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r31,r31,30
	ctx.r31.u64 = ctx.r31.u32 & 0x3;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x8232ac70
	if (ctx.cr6.eq) goto loc_8232AC70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x8232ac4c
	if (ctx.cr6.lt) goto loc_8232AC4C;
	// b 0x8232ac84
	goto loc_8232AC84;
loc_8232AC70:
	// rlwinm r10,r5,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r4,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 & ~ctx.r5.u64;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_8232AC84:
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// subf r8,r11,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r11.u64;
	// b 0x8232ac24
	goto loc_8232AC24;
loc_8232AC94:
	// rlwimi r9,r6,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// stw r9,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r9.u32);
	// addi r10,r29,40
	ctx.r10.s64 = ctx.r29.s64 + 40;
loc_8232ACA4:
	// lwz r9,8(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r9,r9,13,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x7;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8232ad14
	if (!ctx.cr6.lt) goto loc_8232AD14;
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r6,r8,25,0,6
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0xFE000000;
	// rlwinm r5,r7,27,29,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x6;
	// rlwinm r4,r7,29,29,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x6;
	// rlwinm r31,r7,31,29,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x6;
	// rlwinm r30,r7,1,29,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x6;
	// lwz r28,0(r9)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r28,r28,0,7,3
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFFF1FFFFFF;
	// or r6,r28,r6
	ctx.r6.u64 = ctx.r28.u64 | ctx.r6.u64;
	// rlwinm r28,r6,27,24,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0xFF;
	// rlwinm r6,r6,0,27,18
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFE01F;
	// srw r5,r28,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r5.u8 & 0x3F));
	// srw r4,r28,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r4.u8 & 0x3F));
	// rlwimi r4,r5,2,28,29
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFF3);
	// srw r5,r28,r31
	ctx.r5.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// srw r31,r28,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r30.u8 & 0x3F));
	// rlwimi r5,r4,2,0,29
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r5.u64 & 0xFFFFFFFF00000003);
	// rlwimi r31,r5,2,0,29
	ctx.r31.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r31.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r31,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r6,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// b 0x8232aca4
	goto loc_8232ACA4;
loc_8232AD14:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_8232AD18:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8232ab60
	if (ctx.cr6.eq) goto loc_8232AB60;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232ad78
	if (ctx.cr6.eq) goto loc_8232AD78;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8232ad78
	if (ctx.cr0.eq) goto loc_8232AD78;
	// rlwinm r9,r11,22,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x6;
	// rlwinm r8,r11,24,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x6;
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// srw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r8.u8 & 0x3F));
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r9,r11,26,29,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x6;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// srw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,28,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x6;
	// rlwimi r9,r8,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// srw r8,r3,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r7.u8 & 0x3F));
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
loc_8232AD78:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8232ad18
	goto loc_8232AD18;
}

DEFINE_REX_FUNC(sub_82333008) {
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
	// bl 0x82332cc0
	ctx.lr = 0x82333018;
	sub_82332CC0(ctx, base);
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

DEFINE_REX_FUNC(sub_82333780) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82333788;
	__savegprlr_27(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// beq cr6,0x82333804
	if (ctx.cr6.eq) goto loc_82333804;
	// lwz r7,536(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 536);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82333804
	if (ctx.cr6.eq) goto loc_82333804;
	// addi r10,r31,348
	ctx.r10.s64 = ctx.r31.s64 + 348;
loc_823337C0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r5,r9,27
	ctx.r5.u64 = ctx.r9.u32 & 0x1F;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x823337dc
	if (!ctx.cr6.eq) goto loc_823337DC;
	// rlwinm r9,r9,27,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xF;
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x823337f0
	if (ctx.cr6.eq) goto loc_823337F0;
loc_823337DC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823337c0
	if (ctx.cr6.lt) goto loc_823337C0;
	// b 0x82333804
	goto loc_82333804;
loc_823337F0:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,352(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823339b0
	if (!ctx.cr6.eq) goto loc_823339B0;
loc_82333804:
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823339b0
	if (ctx.cr0.eq) goto loc_823339B0;
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r28,-1
	ctx.r28.s64 = -65536;
	// stw r6,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// rlwinm r10,r10,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF0000;
	// stb r6,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r6,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// beq cr6,0x82333844
	if (ctx.cr6.eq) goto loc_82333844;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r7,21
	ctx.r7.s64 = 21;
	// addi r6,r11,-13064
	ctx.r6.s64 = ctx.r11.s64 + -13064;
	// b 0x82333850
	goto loc_82333850;
loc_82333844:
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r11,-12808
	ctx.r6.s64 = ctx.r11.s64 + -12808;
loc_82333850:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82333898
	if (ctx.cr6.eq) goto loc_82333898;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b338
	ctx.lr = 0x82333884;
	sub_8232B338(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82333988
	if (!ctx.cr0.eq) goto loc_82333988;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82333898;
	sub_8225B1A0(ctx, base);
loc_82333898:
	// mulli r11,r7,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823338c8
	if (!ctx.cr6.lt) goto loc_823338C8;
loc_823338AC:
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r10,r10,9,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1F;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x823338c8
	if (ctx.cr6.eq) goto loc_823338C8;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823338ac
	if (ctx.cr6.lt) goto loc_823338AC;
loc_823338C8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823338dc
	if (ctx.cr6.lt) goto loc_823338DC;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x823338DC;
	sub_8225B1A0(ctx, base);
loc_823338DC:
	// lwz r6,0(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233395c
	if (ctx.cr6.eq) goto loc_8233395C;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r11,3992
	ctx.r5.s64 = ctx.r11.s64 + 3992;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82370890
	ctx.lr = 0x82333900;
	sub_82370890(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82333908:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82333908
	if (!ctx.cr6.eq) goto loc_82333908;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x82295980
	ctx.lr = 0x82333938;
	sub_82295980(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_82333948:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82333948
	if (!ctx.cr0.eq) goto loc_82333948;
loc_8233395C:
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329ed0
	ctx.lr = 0x82333974;
	sub_82329ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82333988
	if (!ctx.cr0.eq) goto loc_82333988;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82333988;
	sub_8225B1A0(ctx, base);
loc_82333988:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// ld r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r1.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rldicr r5,r11,32,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// beq cr6,0x823339b8
	if (ctx.cr6.eq) goto loc_823339B8;
	// bl 0x8232e018
	ctx.lr = 0x823339B0;
	sub_8232E018(ctx, base);
loc_823339B0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_823339B8:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82333030
	ctx.lr = 0x823339C8;
	sub_82333030(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823339b0
	if (!ctx.cr0.eq) goto loc_823339B0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x823339DC;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_82338B90) {
	REX_FUNC_PROLOGUE();
	// lwz r10,40(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
loc_82338B94:
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r3,52(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82338b94
	if (!ctx.cr6.eq) goto loc_82338B94;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823391E0) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82339218
	if (ctx.cr6.eq) goto loc_82339218;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82266ec0
	ctx.lr = 0x82339218;
	sub_82266EC0(ctx, base);
loc_82339218:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82339250
	if (ctx.cr6.eq) goto loc_82339250;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339250
	if (ctx.cr6.eq) goto loc_82339250;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27632
	ctx.r4.s64 = ctx.r10.s64 + 27632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bctrl 
	ctx.lr = 0x82339250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339250:
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

DEFINE_REX_FUNC(sub_82339B20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82339B28;
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
	// bne cr6,0x82339b64
	if (!ctx.cr6.eq) goto loc_82339B64;
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
	// li r7,1421
	ctx.r7.s64 = 1421;
	// bl 0x82260f30
	ctx.lr = 0x82339B64;
	sub_82260F30(ctx, base);
loc_82339B64:
	// li r4,171
	ctx.r4.s64 = 171;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x82339B70;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82339bd4
	if (!ctx.cr6.eq) goto loc_82339BD4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339b94
	if (ctx.cr6.eq) goto loc_82339B94;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339B94;
	sub_82266EC0(ctx, base);
loc_82339B94:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339bcc
	if (ctx.cr6.eq) goto loc_82339BCC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339bcc
	if (ctx.cr6.eq) goto loc_82339BCC;
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
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 368);
	// bctrl 
	ctx.lr = 0x82339BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339BCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339c2c
	goto loc_82339C2C;
loc_82339BD4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339bf0
	if (ctx.cr6.eq) goto loc_82339BF0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339BF0;
	sub_82266EC0(ctx, base);
loc_82339BF0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339c28
	if (ctx.cr6.eq) goto loc_82339C28;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339c28
	if (ctx.cr6.eq) goto loc_82339C28;
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
	// li r6,92
	ctx.r6.s64 = 92;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,368(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 368);
	// bctrl 
	ctx.lr = 0x82339C28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339C28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339C2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233B260) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8233B268;
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
	// bne cr6,0x8233b2a4
	if (!ctx.cr6.eq) goto loc_8233B2A4;
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
	// li r7,2527
	ctx.r7.s64 = 2527;
	// bl 0x82260f30
	ctx.lr = 0x8233B2A4;
	sub_82260F30(ctx, base);
loc_8233B2A4:
	// li r4,926
	ctx.r4.s64 = 926;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x8233B2B0;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233b314
	if (!ctx.cr6.eq) goto loc_8233B314;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b2d4
	if (ctx.cr6.eq) goto loc_8233B2D4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233B2D4;
	sub_82266EC0(ctx, base);
loc_8233B2D4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233b30c
	if (ctx.cr6.eq) goto loc_8233B30C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233b30c
	if (ctx.cr6.eq) goto loc_8233B30C;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x8233B30C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B30C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233b36c
	goto loc_8233B36C;
loc_8233B314:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b330
	if (ctx.cr6.eq) goto loc_8233B330;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233B330;
	sub_82266EC0(ctx, base);
loc_8233B330:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233b368
	if (ctx.cr6.eq) goto loc_8233B368;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8233b368
	if (ctx.cr6.eq) goto loc_8233B368;
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
	// li r6,36
	ctx.r6.s64 = 36;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,144(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// bctrl 
	ctx.lr = 0x8233B368;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B368:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B36C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233CD18) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,17824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 17824);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233D150) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233D158;
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
	// bne cr6,0x8233d198
	if (!ctx.cr6.eq) goto loc_8233D198;
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
	// li r7,4293
	ctx.r7.s64 = 4293;
	// bl 0x82260f30
	ctx.lr = 0x8233D198;
	sub_82260F30(ctx, base);
loc_8233D198:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823188f8
	ctx.lr = 0x8233D1A8;
	sub_823188F8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233d1f0
	if (ctx.cr6.eq) goto loc_8233D1F0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233d1f0
	if (ctx.cr6.eq) goto loc_8233D1F0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82338ea0
	ctx.lr = 0x8233D1C4;
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
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,260(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 260);
	// bctrl 
	ctx.lr = 0x8233D1F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233D1F0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233EDA8) {
	REX_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233EE40) {
	REX_FUNC_PROLOGUE();
	// lwz r3,2076(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2076);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8233EF98) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8233efe0
	if (!ctx.cr6.eq) goto loc_8233EFE0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,31992
	ctx.r6.s64 = ctx.r11.s64 + 31992;
	// addi r5,r10,32084
	ctx.r5.s64 = ctx.r10.s64 + 32084;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1919
	ctx.r7.s64 = 1919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233EFE0;
	sub_82260F30(ctx, base);
loc_8233EFE0:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm. r10,r10,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq 0x8233f01c
	if (ctx.cr0.eq) goto loc_8233F01C;
	// addi r10,r11,57
	ctx.r10.s64 = ctx.r11.s64 + 57;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,57
	ctx.r11.s64 = ctx.r11.s64 + 57;
	// b 0x8233f020
	goto loc_8233F020;
loc_8233F01C:
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
loc_8233F020:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_823421B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x823421C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,2144(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2144);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r11,r11,-5640
	ctx.r11.s64 = ctx.r11.s64 + -5640;
	// beq 0x823421e4
	if (ctx.cr0.eq) goto loc_823421E4;
	// lwz r11,7588(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7588);
	// b 0x823421e8
	goto loc_823421E8;
loc_823421E4:
	// lwz r11,7536(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 7536);
loc_823421E8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r4,12(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,-13600
	ctx.r10.s64 = ctx.r10.s64 + -13600;
	// li r3,144
	ctx.r3.s64 = 144;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342208;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r3,100(r27)
	REX_STORE_U32(ctx.r27.u32 + 100, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,96(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 96);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82342230
	if (ctx.cr6.eq) goto loc_82342230;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82342230:
	// lwz r10,100(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 100);
	// stw r11,168(r10)
	REX_STORE_U32(ctx.r10.u32 + 168, ctx.r11.u32);
	// lwz r25,168(r27)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r27.u32 + 168);
	// lwz r11,132(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r29,84(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82342488
	if (ctx.cr6.eq) goto loc_82342488;
loc_82342254:
	// lwz r11,132(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8234228c
	if (!ctx.cr0.eq) goto loc_8234228C;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8234228c
	if (!ctx.cr0.eq) goto loc_8234228C;
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234228c
	if (!ctx.cr0.eq) goto loc_8234228C;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// lwz r29,84(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82342254
	if (!ctx.cr6.eq) goto loc_82342254;
loc_8234228C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82342488
	if (ctx.cr6.eq) goto loc_82342488;
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82342488
	if (!ctx.cr6.eq) goto loc_82342488;
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r29)
	REX_STORE_U32(ctx.r29.u32 + 132, ctx.r11.u32);
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// lwz r3,1376(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1376);
	// bl 0x8233fa30
	ctx.lr = 0x823422C4;
	sub_8233FA30(ctx, base);
	// lwz r31,36(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x82342338
	goto loc_82342338;
loc_823422CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823422E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823422f4
	if (!ctx.cr0.eq) goto loc_823422F4;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342334
	if (ctx.cr0.eq) goto loc_82342334;
loc_823422F4:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
	// blt cr6,0x82342334
	if (ctx.cr6.lt) goto loc_82342334;
	// addi r9,r31,232
	ctx.r9.s64 = ctx.r31.s64 + 232;
loc_82342314:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r8,228(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// stw r8,228(r11)
	REX_STORE_U32(ctx.r11.u32 + 228, ctx.r8.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82342314
	if (!ctx.cr6.gt) goto loc_82342314;
loc_82342334:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_82342338:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823422cc
	if (!ctx.cr6.eq) goto loc_823422CC;
	// lwz r31,28(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r26,112(r29)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r29.u32 + 112);
	// b 0x8234239c
	goto loc_8234239C;
loc_82342350:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82342398
	if (ctx.cr0.eq) goto loc_82342398;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82342370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82342394
	if (!ctx.cr0.eq) goto loc_82342394;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234238C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823423a8
	if (ctx.cr0.eq) goto loc_823423A8;
loc_82342394:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82342398:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8234239C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342350
	if (!ctx.cr6.eq) goto loc_82342350;
loc_823423A8:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,1456(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82325520
	ctx.lr = 0x823423BC;
	sub_82325520(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// beq 0x823423dc
	if (ctx.cr0.eq) goto loc_823423DC;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x823423D8;
	sub_8233EE50(ctx, base);
	// b 0x823423e0
	goto loc_823423E0;
loc_823423DC:
	// li r30,0
	ctx.r30.s64 = 0;
loc_823423E0:
	// lwz r31,36(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// b 0x823423fc
	goto loc_823423FC;
loc_823423E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x823423F4;
	sub_8235CB28(ctx, base);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_823423FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823423e8
	if (!ctx.cr6.eq) goto loc_823423E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82342474
	if (ctx.cr6.eq) goto loc_82342474;
loc_82342418:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235ca68
	ctx.lr = 0x8234242C;
	sub_8235CA68(ctx, base);
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234245c
	if (ctx.cr0.eq) goto loc_8234245C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82342444
	if (!ctx.cr6.eq) goto loc_82342444;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82342444:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235c870
	ctx.lr = 0x8234244C;
	sub_8235C870(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82361fa8
	ctx.lr = 0x8234245C;
	sub_82361FA8(ctx, base);
loc_8234245C:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82342418
	if (!ctx.cr6.eq) goto loc_82342418;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82342478
	if (!ctx.cr6.eq) goto loc_82342478;
loc_82342474:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
loc_82342478:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x82361fa8
	ctx.lr = 0x82342484;
	sub_82361FA8(ctx, base);
	// b 0x823424f8
	goto loc_823424F8;
loc_82342488:
	// lwz r31,28(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 28);
	// b 0x823424d8
	goto loc_823424D8;
loc_82342490:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823424d4
	if (ctx.cr0.eq) goto loc_823424D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823424B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823424d4
	if (!ctx.cr0.eq) goto loc_823424D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823424CC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823424e8
	if (ctx.cr0.eq) goto loc_823424E8;
loc_823424D4:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_823424D8:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82342490
	if (!ctx.cr6.eq) goto loc_82342490;
	// b 0x823424f8
	goto loc_823424F8;
loc_823424E8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82362008
	ctx.lr = 0x823424F8;
	sub_82362008(ctx, base);
loc_823424F8:
	// lwz r11,132(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 132);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r4,104(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 104);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82342518
	if (ctx.cr6.eq) goto loc_82342518;
	// lwz r3,100(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 100);
	// bl 0x8233ef98
	ctx.lr = 0x82342518;
	sub_8233EF98(ctx, base);
loc_82342518:
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x8234252C;
	sub_82325520(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82342550
	if (ctx.cr0.eq) goto loc_82342550;
	// lwz r11,12(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x82342548;
	sub_8233EE50(ctx, base);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// b 0x82342554
	goto loc_82342554;
loc_82342550:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82342554:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82342560:
	// lwz r11,88(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82342578
	if (!ctx.cr6.gt) goto loc_82342578;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82342584
	goto loc_82342584;
loc_82342578:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r29,r10,r31
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
loc_82342584:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234261c
	if (ctx.cr0.eq) goto loc_8234261C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x82342598;
	sub_8235CB28(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r29,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r29.u32);
	// b 0x82342560
	goto loc_82342560;
loc_823425A8:
	// lwz r3,8(r27)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8235ca68
	ctx.lr = 0x823425BC;
	sub_8235CA68(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_823425D4:
	// lwz r11,88(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x823425ec
	if (!ctx.cr6.gt) goto loc_823425EC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823425f8
	goto loc_823425F8;
loc_823425EC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r30
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_823425F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234261c
	if (ctx.cr0.eq) goto loc_8234261C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8234260C;
	sub_8235CB28(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// b 0x823425d4
	goto loc_823425D4;
loc_8234261C:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823425a8
	if (!ctx.cr6.eq) goto loc_823425A8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234E010) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8235d188
	ctx.lr = 0x8234E034;
	sub_8235D188(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8235cea0
	ctx.lr = 0x8234E044;
	sub_8235CEA0(ctx, base);
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

DEFINE_REX_FUNC(sub_8234EC00) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// ld r8,-14720(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + -14720);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x8234e0d8
	sub_8234E0D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234EC40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r8,-14720(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + -14720);
	// b 0x8234e0d8
	sub_8234E0D8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82350570) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// ld r8,-14720(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + -14720);
	// b 0x8234e9b0
	sub_8234E9B0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82350698) {
	REX_FUNC_PROLOGUE();
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82350850) {
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
	// lwz r3,2136(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// bl 0x823505e8
	ctx.lr = 0x82350870;
	sub_823505E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x823508a0
	if (!ctx.cr6.eq) goto loc_823508A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-29408
	ctx.r6.s64 = ctx.r11.s64 + -29408;
	// addi r5,r10,-29420
	ctx.r5.s64 = ctx.r10.s64 + -29420;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,550
	ctx.r7.s64 = 550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823508A0;
	sub_82260F30(ctx, base);
loc_823508A0:
	// rlwinm r10,r31,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r11,2136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 2136);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r9,r31,27
	ctx.r9.u64 = ctx.r31.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_82353A60) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x82353A68;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r25,r11,-14148
	ctx.r25.s64 = ctx.r11.s64 + -14148;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r18,1
	ctx.r18.s64 = 1;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// addi r24,r10,-28064
	ctx.r24.s64 = ctx.r10.s64 + -28064;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82353aa4
	if (ctx.cr6.eq) goto loc_82353AA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82353b7c
	if (!ctx.cr6.eq) goto loc_82353B7C;
loc_82353AA4:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82353ad0
	if (!ctx.cr6.eq) goto loc_82353AD0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r11,-28080
	ctx.r5.s64 = ctx.r11.s64 + -28080;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,385
	ctx.r7.s64 = 385;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353AD0;
	sub_82260F30(ctx, base);
loc_82353AD0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r31,0(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// addi r30,r11,-28216
	ctx.r30.s64 = ctx.r11.s64 + -28216;
loc_82353ADC:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82353af8
	if (!ctx.cr6.eq) goto loc_82353AF8;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8236fc88
	ctx.lr = 0x82353AF0;
	sub_8236FC88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353b2c
	if (!ctx.cr0.eq) goto loc_82353B2C;
loc_82353AF8:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82353b14
	if (!ctx.cr6.eq) goto loc_82353B14;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8236fcc0
	ctx.lr = 0x82353B0C;
	sub_8236FCC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353b2c
	if (!ctx.cr0.eq) goto loc_82353B2C;
loc_82353B14:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,391
	ctx.r7.s64 = 391;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353B2C;
	sub_82260F30(ctx, base);
loc_82353B2C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// lwz r31,64(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 64);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// subfze r11,r11
	temp.u8 = ~ctx.r11.u32 + ctx.xer.ca < ~ctx.r11.u32;
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bne cr6,0x82353adc
	if (!ctx.cr6.eq) goto loc_82353ADC;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353b7c
	if (ctx.cr0.eq) goto loc_82353B7C;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// stw r19,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r19.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82353b70
	if (!ctx.cr6.eq) goto loc_82353B70;
	// stw r18,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r18.u32);
	// b 0x82353b7c
	goto loc_82353B7C;
loc_82353B70:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82353b7c
	if (!ctx.cr6.eq) goto loc_82353B7C;
	// stw r19,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r19.u32);
loc_82353B7C:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r20,2
	ctx.r20.s64 = 2;
	// addi r22,r9,-28240
	ctx.r22.s64 = ctx.r9.s64 + -28240;
	// addi r30,r8,-28268
	ctx.r30.s64 = ctx.r8.s64 + -28268;
	// addi r29,r7,-28300
	ctx.r29.s64 = ctx.r7.s64 + -28300;
	// addi r23,r10,-28316
	ctx.r23.s64 = ctx.r10.s64 + -28316;
	// addi r21,r11,-28340
	ctx.r21.s64 = ctx.r11.s64 + -28340;
loc_82353BA8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353da4
	if (ctx.cr6.eq) goto loc_82353DA4;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353BCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353cb0
	if (ctx.cr0.eq) goto loc_82353CB0;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82353bf8
	if (!ctx.cr6.eq) goto loc_82353BF8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,414
	ctx.r7.s64 = 414;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353BF8;
	sub_82260F30(ctx, base);
loc_82353BF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fcc0
	ctx.lr = 0x82353C00;
	sub_8236FCC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353ca4
	if (ctx.cr0.eq) goto loc_82353CA4;
	// beq cr6,0x82353c1c
	if (ctx.cr6.eq) goto loc_82353C1C;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82353c24
	if (!ctx.cr6.eq) goto loc_82353C24;
loc_82353C1C:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82353C24:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353c88
	if (ctx.cr6.eq) goto loc_82353C88;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82353c50
	if (!ctx.cr6.eq) goto loc_82353C50;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,421
	ctx.r7.s64 = 421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353C50;
	sub_82260F30(ctx, base);
loc_82353C50:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353c80
	if (ctx.cr6.eq) goto loc_82353C80;
	// li r7,423
	ctx.r7.s64 = 423;
loc_82353C6C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353C80;
	sub_82260F30(ctx, base);
loc_82353C80:
	// lwz r26,64(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// b 0x82353da4
	goto loc_82353DA4;
loc_82353C88:
	// lwz r26,0(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353da4
	if (ctx.cr6.eq) goto loc_82353DA4;
	// li r7,428
	ctx.r7.s64 = 428;
	// b 0x82353d80
	goto loc_82353D80;
loc_82353CA4:
	// bne cr6,0x82353da4
	if (!ctx.cr6.eq) goto loc_82353DA4;
	// stw r18,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r18.u32);
	// b 0x82353da4
	goto loc_82353DA4;
loc_82353CB0:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353CC4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353da4
	if (ctx.cr0.eq) goto loc_82353DA4;
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82353cf0
	if (!ctx.cr6.eq) goto loc_82353CF0;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,436
	ctx.r7.s64 = 436;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353CF0;
	sub_82260F30(ctx, base);
loc_82353CF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236fc88
	ctx.lr = 0x82353CF8;
	sub_8236FC88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// beq 0x82353d98
	if (ctx.cr0.eq) goto loc_82353D98;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82353d14
	if (ctx.cr6.eq) goto loc_82353D14;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82353d1c
	if (!ctx.cr6.eq) goto loc_82353D1C;
loc_82353D14:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82353D1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353d68
	if (ctx.cr6.eq) goto loc_82353D68;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82353d48
	if (!ctx.cr6.eq) goto loc_82353D48;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353D48;
	sub_82260F30(ctx, base);
loc_82353D48:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r11,64(r26)
	REX_STORE_U32(ctx.r26.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353c80
	if (ctx.cr6.eq) goto loc_82353C80;
	// li r7,445
	ctx.r7.s64 = 445;
	// b 0x82353c6c
	goto loc_82353C6C;
loc_82353D68:
	// lwz r26,0(r27)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// stw r26,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353da4
	if (ctx.cr6.eq) goto loc_82353DA4;
	// li r7,450
	ctx.r7.s64 = 450;
loc_82353D80:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353D94;
	sub_82260F30(ctx, base);
	// b 0x82353da4
	goto loc_82353DA4;
loc_82353D98:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82353da4
	if (!ctx.cr6.eq) goto loc_82353DA4;
	// stw r19,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r19.u32);
loc_82353DA4:
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82353ba8
	if (!ctx.cr0.eq) goto loc_82353BA8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235AF90) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8235AF98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subfic r28,r3,-700
	ctx.xer.ca = ctx.r3.u32 <= 4294966596;
	ctx.r28.u64 = static_cast<uint64_t>(-700) - ctx.r3.u64;
	// subfic r30,r3,-636
	ctx.xer.ca = ctx.r3.u32 <= 4294966660;
	ctx.r30.u64 = static_cast<uint64_t>(-636) - ctx.r3.u64;
	// addi r9,r11,976
	ctx.r9.s64 = ctx.r11.s64 + 976;
	// lwzx r27,r10,r3
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// subfic r29,r11,-572
	ctx.xer.ca = ctx.r11.u32 <= 4294966724;
	ctx.r29.u64 = static_cast<uint64_t>(-572) - ctx.r11.u64;
loc_8235AFBC:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x8235b0a8
	if (!ctx.cr6.eq) goto loc_8235B0A8;
	// cmpwi cr6,r10,33
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 33, ctx.xer);
	// beq cr6,0x8235afec
	if (ctx.cr6.eq) goto loc_8235AFEC;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// lwz r8,64(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x8235b0bc
	if (ctx.cr6.eq) goto loc_8235B0BC;
	// b 0x8235b0a8
	goto loc_8235B0A8;
loc_8235AFEC:
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r4,8
	ctx.r7.s64 = ctx.r4.s64 + 8;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8235B008:
	// add r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8235b098
	if (ctx.cr6.eq) goto loc_8235B098;
	// add r8,r28,r9
	ctx.r8.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8235b098
	if (ctx.cr6.eq) goto loc_8235B098;
	// addi r8,r4,24
	ctx.r8.s64 = ctx.r4.s64 + 24;
	// add r7,r30,r9
	ctx.r7.u64 = ctx.r30.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8235b094
	if (!ctx.cr6.eq) goto loc_8235B094;
	// addi r8,r4,40
	ctx.r8.s64 = ctx.r4.s64 + 40;
	// add r7,r29,r9
	ctx.r7.u64 = ctx.r29.u64 + ctx.r9.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8235b094
	if (!ctx.cr6.eq) goto loc_8235B094;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// b 0x8235b098
	goto loc_8235B098;
loc_8235B094:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8235B098:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8235b008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8235B008;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bgt cr6,0x8235b0c4
	if (ctx.cr6.gt) goto loc_8235B0C4;
loc_8235B0A8:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r3,16
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16, ctx.xer);
	// blt cr6,0x8235afbc
	if (ctx.cr6.lt) goto loc_8235AFBC;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8235B0BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8235B0C4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x8235b0bc
	if (!ctx.cr6.gt) goto loc_8235B0BC;
	// lwz r11,1876(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1876);
	// li r10,24
	ctx.r10.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,1364(r11)
	REX_STORE_U32(ctx.r11.u32 + 1364, ctx.r10.u32);
	// bl 0x82370990
	ctx.lr = 0x8235B0E4;
	sub_82370990(ctx, base);
}

DEFINE_REX_FUNC(sub_8235BDBC) {
	REX_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x8235bd28
	// FATAL: unresolved function 0x8235BD28 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BDC0 to 0x8235BD28");
	return;
}

DEFINE_REX_FUNC(sub_8235BFC0) {
	REX_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x8235bf64
	// FATAL: unresolved function 0x8235BF64 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BFC4 to 0x8235BF64");
	return;
}

DEFINE_REX_FUNC(sub_8235D5A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8235D5A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8235d5d4
	if (ctx.cr6.eq) goto loc_8235D5D4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,0(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8235d870
	goto loc_8235D870;
loc_8235D5D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D5E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,3
	ctx.r27.s64 = 3;
	// beq 0x8235d704
	if (ctx.cr0.eq) goto loc_8235D704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82360db8
	ctx.lr = 0x8235D604;
	sub_82360DB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r4,2736(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 2736);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f4.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x8235feb8
	ctx.lr = 0x8235D62C;
	sub_8235FEB8(ctx, base);
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235d650
	if (!ctx.cr6.gt) goto loc_8235D650;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x8235d658
	goto loc_8235D658;
loc_8235D650:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8235cb28
	ctx.lr = 0x8235D658;
	sub_8235CB28(ctx, base);
loc_8235D658:
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233f040
	ctx.lr = 0x8235D66C;
	sub_8233F040(ctx, base);
	// lwz r29,28(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r11,44(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8235d77c
	if (!ctx.cr6.eq) goto loc_8235D77C;
	// lwz r23,1456(r28)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r28.u32 + 1456);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82325520
	ctx.lr = 0x8235D690;
	sub_82325520(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r23,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r23.u32);
	// beq 0x8235d6c0
	if (ctx.cr0.eq) goto loc_8235D6C0;
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r28,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r28.u32);
	// stb r25,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r25.u8);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// b 0x8235d6c4
	goto loc_8235D6C4;
loc_8235D6C0:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_8235D6C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82351c50
	ctx.lr = 0x8235D6CC;
	sub_82351C50(ctx, base);
	// lwz r3,44(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r4,48(r24)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8235d6f8
	if (ctx.cr6.eq) goto loc_8235D6F8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8235d6f8
	if (!ctx.cr6.eq) goto loc_8235D6F8;
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// b 0x8235d77c
	goto loc_8235D77C;
loc_8235D6F8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8235d2b0
	ctx.lr = 0x8235D700;
	sub_8235D2B0(ctx, base);
	// b 0x8235d77c
	goto loc_8235D77C;
loc_8235D704:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D718;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235d744
	if (!ctx.cr0.eq) goto loc_8235D744;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-15312
	ctx.r6.s64 = ctx.r11.s64 + -15312;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,236
	ctx.r7.s64 = 236;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235D744;
	sub_82260F30(ctx, base);
loc_8235D744:
	// lwz r31,1452(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 1452);
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82325520
	ctx.lr = 0x8235D754;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8235d778
	if (ctx.cr0.eq) goto loc_8235D778;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82360408
	ctx.lr = 0x8235D770;
	sub_82360408(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8235d77c
	goto loc_8235D77C;
loc_8235D778:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8235D77C:
	// stw r26,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r26.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8235d4d0
	ctx.lr = 0x8235D78C;
	sub_8235D4D0(ctx, base);
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D7A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r11,5(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235d7d0
	if (ctx.cr0.eq) goto loc_8235D7D0;
	// lwz r11,32(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// lwz r10,16(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// stw r9,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// b 0x8235d7f8
	goto loc_8235D7F8;
loc_8235D7D0:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235D7E4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235d7f8
	if (ctx.cr0.eq) goto loc_8235D7F8;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r25,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r25.u32);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_8235D7F8:
	// lbz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235d810
	if (ctx.cr0.eq) goto loc_8235D810;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
loc_8235D810:
	// lwz r30,1456(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 1456);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x8235D820;
	sub_82325520(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x8235d850
	if (ctx.cr0.eq) goto loc_8235D850;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r28,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r28.u32);
	// stb r25,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r25.u8);
	// stw r27,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r27,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// stw r27,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r27,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r27.u32);
	// b 0x8235d854
	goto loc_8235D854;
loc_8235D850:
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_8235D854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82351c50
	ctx.lr = 0x8235D85C;
	sub_82351C50(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82362ba0
	ctx.lr = 0x8235D86C;
	sub_82362BA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8235D870:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82362E48) {
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
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x82362a58
	ctx.lr = 0x82362E68;
	sub_82362A58(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82362918
	ctx.lr = 0x82362E74;
	sub_82362918(ctx, base);
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

DEFINE_REX_FUNC(sub_823636C0) {
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
	// blt cr6,0x82363708
	if (ctx.cr6.lt) goto loc_82363708;
	// beq cr6,0x82363724
	if (ctx.cr6.eq) goto loc_82363724;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8236371c
	if (ctx.cr6.lt) goto loc_8236371C;
	// beq cr6,0x82363708
	if (ctx.cr6.eq) goto loc_82363708;
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
	// li r7,5448
	ctx.r7.s64 = 5448;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82363708;
	sub_82260F30(ctx, base);
loc_82363708:
	// li r3,3
	ctx.r3.s64 = 3;
loc_8236370C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8236371C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8236370c
	goto loc_8236370C;
loc_82363724:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8236370c
	goto loc_8236370C;
}

DEFINE_REX_FUNC(sub_8236C600) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236C608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1024
	ctx.r3.s64 = 1024;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233fa30
	ctx.lr = 0x8236C620;
	sub_8233FA30(ctx, base);
	// lwz r28,136(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8236c690
	goto loc_8236C690;
loc_8236C62C:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8236c658
	if (!ctx.cr6.gt) goto loc_8236C658;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
loc_8236C640:
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r9,0(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8236c640
	if (ctx.cr6.lt) goto loc_8236C640;
loc_8236C658:
	// lwz r31,28(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// b 0x8236c680
	goto loc_8236C680;
loc_8236C660:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8236c67c
	if (ctx.cr0.eq) goto loc_8236C67C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8236c420
	ctx.lr = 0x8236C67C;
	sub_8236C420(ctx, base);
loc_8236C67C:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8236C680:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236c660
	if (!ctx.cr6.eq) goto loc_8236C660;
	// lwz r28,8(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_8236C690:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236c62c
	if (!ctx.cr6.eq) goto loc_8236C62C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8236D780) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8236D788;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,16(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r4,1456(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233fa30
	ctx.lr = 0x8236D7C0;
	sub_8233FA30(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r11.u64;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8236d828
	if (!ctx.cr0.gt) goto loc_8236D828;
loc_8236D7D8:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r29
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// srw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x8236d810
	if (ctx.cr0.eq) goto loc_8236D810;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r10,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
loc_8236D810:
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// subf r10,r10,r30
	ctx.r10.u64 = ctx.r30.u64 - ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8236d7d8
	if (ctx.cr6.lt) goto loc_8236D7D8;
loc_8236D828:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236d83c
	if (ctx.cr6.eq) goto loc_8236D83C;
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// lwz r3,-4(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x8236D83C;
	sub_823256A8(ctx, base);
loc_8236D83C:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lis r30,-32188
	ctx.r30.s64 = -2109472768;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,-31936(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + -31936);
	// lwz r3,1456(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 1456);
	// bl 0x82325520
	ctx.lr = 0x8236D858;
	sub_82325520(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r3,-31936(r30)
	REX_STORE_U32(ctx.r30.u32 + -31936, ctx.r3.u32);
	// ble cr6,0x8236d884
	if (!ctx.cr6.gt) goto loc_8236D884;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// b 0x8236d874
	goto loc_8236D874;
loc_8236D870:
	// lwz r3,-31936(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + -31936);
loc_8236D874:
	// lwzx r10,r11,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stwx r10,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8236d870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236D870;
loc_8236D884:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,1456(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x823256a8
	ctx.lr = 0x8236D894;
	sub_823256A8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x8236D8A8;
	sub_82325520(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addic. r3,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r3.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// beq 0x8236d8d0
	if (ctx.cr0.eq) goto loc_8236D8D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,8(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8236d3e0
	ctx.lr = 0x8236D8C8;
	sub_8236D3E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8236d8d4
	goto loc_8236D8D4;
loc_8236D8D0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8236D8D4:
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8236D8E0;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82371530) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82371538;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,8(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// rlwinm. r9,r9,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r29,r11,4180
	ctx.r29.s64 = ctx.r11.s64 + 4180;
	// addi r28,r10,4172
	ctx.r28.s64 = ctx.r10.s64 + 4172;
	// bne 0x8237156c
	if (!ctx.cr0.eq) goto loc_8237156C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x823715a4
	if (ctx.cr6.eq) goto loc_823715A4;
loc_8237156C:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82371584
	if (ctx.cr0.eq) goto loc_82371584;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,18504
	ctx.r4.s64 = ctx.r11.s64 + 18504;
	// bl 0x823714e0
	ctx.lr = 0x82371584;
	sub_823714E0(ctx, base);
loc_82371584:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x82371594
	if (!ctx.cr6.eq) goto loc_82371594;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82371594:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6664
	ctx.r4.s64 = ctx.r11.s64 + 6664;
	// bl 0x823714e0
	ctx.lr = 0x823715A4;
	sub_823714E0(ctx, base);
loc_823715A4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823715b8
	if (!ctx.cr0.eq) goto loc_823715B8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x823715d8
	if (!ctx.cr6.eq) goto loc_823715D8;
loc_823715B8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bne cr6,0x823715c8
	if (!ctx.cr6.eq) goto loc_823715C8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823715C8:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,6636
	ctx.r4.s64 = ctx.r11.s64 + 6636;
	// bl 0x823714e0
	ctx.lr = 0x823715D8;
	sub_823714E0(ctx, base);
loc_823715D8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82374498) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r10,17536
	ctx.r10.s64 = ctx.r10.s64 + 17536;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82173168
	ctx.lr = 0x823744D4;
	sub_82173168(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82374A88) {
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
	// li r5,488
	ctx.r5.s64 = 488;
	// addi r31,r11,-27512
	ctx.r31.s64 = ctx.r11.s64 + -27512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x8215ec60
	ctx.lr = 0x82374AB0;
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
	ctx.lr = 0x82374AC4;
	sub_8215E640(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8215ec60
	ctx.lr = 0x82374AD4;
	sub_8215EC60(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,63
	ctx.r9.s64 = 63;
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

