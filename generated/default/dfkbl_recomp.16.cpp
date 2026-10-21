#include "dfkbl_funcs.16.h"

DEFINE_REX_FUNC(sub_82091318) {
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
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,3328
	ctx.r3.s64 = ctx.r11.s64 + 3328;
	// bl 0x82113c30
	ctx.lr = 0x82091338;
	sub_82113C30(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,1864
	ctx.r4.s64 = ctx.r10.s64 + 1864;
	// lwz r8,120(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 120);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82091354;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

DEFINE_REX_FUNC(sub_82091FD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094d58
	sub_82094D58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092258) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820953c8
	sub_820953C8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092638) {
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
	ctx.lr = 0x82092648;
	sub_8209B8B8(ctx, base);
	// bl 0x82095968
	ctx.lr = 0x8209264C;
	sub_82095968(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820935B0) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82093D68) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r11,r11,21788
	ctx.r11.s64 = ctx.r11.s64 + 21788;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82093dc4
	if (ctx.cr6.lt) goto loc_82093DC4;
	// beq cr6,0x82093db4
	if (ctx.cr6.eq) goto loc_82093DB4;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096998
	sub_82096998(ctx, base);
	return;
loc_82093DB4:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096998
	sub_82096998(ctx, base);
	return;
loc_82093DC4:
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096998
	sub_82096998(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82094FE0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,6536
	ctx.r3.s64 = ctx.r3.s64 + 6536;
	// b 0x820ab0d0
	sub_820AB0D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820955B0) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,2624
	ctx.r3.s64 = ctx.r3.s64 + 2624;
	// b 0x820b3298
	sub_820B3298(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095990) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209c3a8
	sub_8209C3A8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095B20) {
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
	// addis r3,r3,238
	ctx.r3.s64 = ctx.r3.s64 + 15597568;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// bl 0x820b7298
	ctx.lr = 0x82095B48;
	sub_820B7298(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82095b6c
	if (ctx.cr6.lt) goto loc_82095B6C;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82095b6c
	if (!ctx.cr6.lt) goto loc_82095B6C;
	// addis r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 1572864;
	// addi r3,r3,-7528
	ctx.r3.s64 = ctx.r3.s64 + -7528;
	// bl 0x820a8d58
	ctx.lr = 0x82095B68;
	sub_820A8D58(ctx, base);
	// b 0x82095b70
	goto loc_82095B70;
loc_82095B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82095B70:
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

DEFINE_REX_FUNC(sub_82096BF0) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 65536;
	// addi r3,r3,-7532
	ctx.r3.s64 = ctx.r3.s64 + -7532;
	// b 0x820b3f88
	sub_820B3F88(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82097108) {
	REX_FUNC_PROLOGUE();
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r11,r11,5208
	ctx.r11.u64 = ctx.r11.u64 | 5208;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82097530) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,238
	ctx.r10.s64 = 15597568;
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// lis r8,238
	ctx.r8.s64 = 15597568;
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r7,r10,5236
	ctx.r7.u64 = ctx.r10.u64 | 5236;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// ori r6,r8,5244
	ctx.r6.u64 = ctx.r8.u64 | 5244;
	// lis r5,238
	ctx.r5.s64 = 15597568;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r3,r5,5240
	ctx.r3.u64 = ctx.r5.u64 | 5240;
	// lwzx r10,r11,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r8,r11,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lis r7,238
	ctx.r7.s64 = 15597568;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// lfs f0,2224(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// std r6,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// lwzx r4,r11,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// lfs f13,2220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2220);
	ctx.f13.f64 = double(temp.f32);
	// std r10,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// ori r3,r7,5256
	ctx.r3.u64 = ctx.r7.u64 | 5256;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lis r9,238
	ctx.r9.s64 = 15597568;
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lis r8,238
	ctx.r8.s64 = 15597568;
	// ori r7,r9,5228
	ctx.r7.u64 = ctx.r9.u64 | 5228;
	// lfsx f5,r11,r3
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f5.f64 = double(temp.f32);
	// ori r6,r8,5232
	ctx.r6.u64 = ctx.r8.u64 | 5232;
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fadds f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 + ctx.f0.f64));
	// fmuls f12,f2,f13
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f11,f1,f13
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f7,f9,f5
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f5.f64));
	// stfsx f7,r11,r7
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// fmuls f6,f8,f5
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// stfsx f6,r11,r6
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209CCE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,13
	ctx.r11.s64 = 851968;
	// ori r11,r11,34348
	ctx.r11.u64 = ctx.r11.u64 | 34348;
	// lwzx r10,r3,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm r3,r10,28,4,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209D450) {
	REX_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addis r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 65536;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r9,r9,26692
	ctx.r9.s64 = ctx.r9.s64 + 26692;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r7,r9,12
	ctx.r7.s64 = ctx.r9.s64 + 12;
loc_8209D474:
	// lbz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r5,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8209d494
	if (!ctx.cr0.eq) goto loc_8209D494;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x8209d474
	if (!ctx.cr6.eq) goto loc_8209D474;
loc_8209D494:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r8,r11,26408
	ctx.r8.u64 = ctx.r11.u64 | 26408;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r5,r6,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// stw r7,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r7.u32);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r4,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,201
	ctx.r11.s64 = 13172736;
	// ori r10,r11,42044
	ctx.r10.u64 = ctx.r11.u64 | 42044;
	// stwx r3,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209F130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8209F138;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8209f5a0
	ctx.lr = 0x8209F144;
	sub_8209F5A0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,7204
	ctx.r10.s64 = ctx.r11.s64 + 7204;
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r10,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// addi r11,r31,112
	ctx.r11.s64 = ctx.r31.s64 + 112;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r3,r3,21192
	ctx.r3.s64 = ctx.r3.s64 + 21192;
	// stw r30,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// bl 0x820b5138
	ctx.lr = 0x8209F170;
	sub_820B5138(ctx, base);
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r29,r29,26464
	ctx.r29.s64 = ctx.r29.s64 + 26464;
	// lis r28,-32256
	ctx.r28.s64 = -2113929216;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r27,r11,26420
	ctx.r27.u64 = ctx.r11.u64 | 26420;
	// lis r5,201
	ctx.r5.s64 = 13172736;
	// lis r4,201
	ctx.r4.s64 = 13172736;
	// lis r10,201
	ctx.r10.s64 = 13172736;
	// addi r11,r28,4176
	ctx.r11.s64 = ctx.r28.s64 + 4176;
	// ori r9,r9,21188
	ctx.r9.u64 = ctx.r9.u64 | 21188;
	// ori r8,r8,26408
	ctx.r8.u64 = ctx.r8.u64 | 26408;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// ori r7,r7,26412
	ctx.r7.u64 = ctx.r7.u64 | 26412;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// ori r6,r6,26424
	ctx.r6.u64 = ctx.r6.u64 | 26424;
	// stw r11,96(r29)
	REX_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// addis r26,r31,1
	ctx.r26.s64 = ctx.r31.s64 + 65536;
	// stw r30,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// ori r3,r3,26416
	ctx.r3.u64 = ctx.r3.u64 | 26416;
	// stwx r30,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// ori r5,r5,47840
	ctx.r5.u64 = ctx.r5.u64 | 47840;
	// stwx r30,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// ori r4,r4,47788
	ctx.r4.u64 = ctx.r4.u64 | 47788;
	// stwx r30,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// ori r10,r10,47828
	ctx.r10.u64 = ctx.r10.u64 | 47828;
	// stwx r30,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// addi r26,r26,26452
	ctx.r26.s64 = ctx.r26.s64 + 26452;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r28,201
	ctx.r28.s64 = 13172736;
	// lis r25,201
	ctx.r25.s64 = 13172736;
	// stwx r11,r31,r3
	REX_STORE_U32(ctx.r31.u32 + ctx.r3.u32, ctx.r11.u32);
	// lis r24,1
	ctx.r24.s64 = 65536;
	// stwx r11,r31,r5
	REX_STORE_U32(ctx.r31.u32 + ctx.r5.u32, ctx.r11.u32);
	// lis r23,1
	ctx.r23.s64 = 65536;
	// stwx r30,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r30.u32);
	// ori r9,r28,47832
	ctx.r9.u64 = ctx.r28.u64 | 47832;
	// stwx r11,r31,r27
	REX_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r11.u32);
	// ori r8,r25,47836
	ctx.r8.u64 = ctx.r25.u64 | 47836;
	// stwx r30,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// ori r7,r24,26440
	ctx.r7.u64 = ctx.r24.u64 | 26440;
	// stw r30,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r30.u32);
	// ori r6,r23,26444
	ctx.r6.u64 = ctx.r23.u64 | 26444;
	// stw r30,4(r26)
	REX_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r30,8(r26)
	REX_STORE_U32(ctx.r26.u32 + 8, ctx.r30.u32);
	// li r29,3000
	ctx.r29.s64 = 3000;
	// li r5,13848
	ctx.r5.s64 = 13848;
	// stwx r30,r31,r9
	REX_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r8
	REX_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// addi r3,r3,7336
	ctx.r3.s64 = ctx.r3.s64 + 7336;
	// stwx r30,r31,r7
	REX_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r29,r31,r6
	REX_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r29.u32);
	// bl 0x8215ec60
	ctx.lr = 0x8209F25C;
	sub_8215EC60(ctx, base);
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addis r3,r31,190
	ctx.r3.s64 = ctx.r31.s64 + 12451840;
	// ori r11,r4,21184
	ctx.r11.u64 = ctx.r4.u64 | 21184;
	// li r5,2556
	ctx.r5.s64 = 2556;
	// addi r3,r3,-31152
	ctx.r3.s64 = ctx.r3.s64 + -31152;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x820e8878
	ctx.lr = 0x8209F27C;
	sub_820E8878(ctx, base);
	// lis r5,12
	ctx.r5.s64 = 786432;
	// addis r3,r31,190
	ctx.r3.s64 = ctx.r31.s64 + 12451840;
	// ori r5,r5,5096
	ctx.r5.u64 = ctx.r5.u64 | 5096;
	// addi r3,r3,-28592
	ctx.r3.s64 = ctx.r3.s64 + -28592;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820e8878
	ctx.lr = 0x8209F294;
	sub_820E8878(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A1FB0) {
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
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,26268(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 26268);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820a2014
	if (!ctx.cr6.eq) goto loc_820A2014;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x8209f978
	ctx.lr = 0x820A1FE4;
	sub_8209F978(ctx, base);
	// rlwinm r11,r31,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a1ffc
	if (ctx.cr6.eq) goto loc_820A1FFC;
	// bl 0x82092748
	ctx.lr = 0x820A1FF4;
	sub_82092748(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x820a2018
	goto loc_820A2018;
loc_820A1FFC:
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a2014
	if (ctx.cr6.eq) goto loc_820A2014;
	// bl 0x82092770
	ctx.lr = 0x820A200C;
	sub_82092770(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x820a2018
	goto loc_820A2018;
loc_820A2014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_820A2018:
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

DEFINE_REX_FUNC(sub_820A3EC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// addi r11,r11,-33
	ctx.r11.s64 = ctx.r11.s64 + -33;
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// bgt cr6,0x820a40a4
	if (ctx.cr6.gt) {
		sub_820A40A4(ctx, base);
		return;
	}
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,16112
	ctx.r12.s64 = ctx.r12.s64 + 16112;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		sub_820A4074(ctx, base);
		return;
	case 1:
		sub_820A4098(ctx, base);
		return;
	case 2:
		sub_820A40A4(ctx, base);
		return;
	case 3:
		sub_820A40A4(ctx, base);
		return;
	case 4:
		sub_820A40A4(ctx, base);
		return;
	case 5:
		sub_820A40A4(ctx, base);
		return;
	case 6:
		sub_820A4074(ctx, base);
		return;
	case 7:
		sub_820A40A4(ctx, base);
		return;
	case 8:
		sub_820A4098(ctx, base);
		return;
	case 9:
		sub_820A40A4(ctx, base);
		return;
	case 10:
		sub_820A40A4(ctx, base);
		return;
	case 11:
		sub_820A4074(ctx, base);
		return;
	case 12:
		sub_820A40A4(ctx, base);
		return;
	case 13:
		sub_820A4080(ctx, base);
		return;
	case 14:
		sub_820A40A4(ctx, base);
		return;
	case 15:
		sub_820A40A4(ctx, base);
		return;
	case 16:
		sub_820A408C(ctx, base);
		return;
	case 17:
		sub_820A40A4(ctx, base);
		return;
	case 18:
		sub_820A40A4(ctx, base);
		return;
	case 19:
		sub_820A40A4(ctx, base);
		return;
	case 20:
		sub_820A40A4(ctx, base);
		return;
	case 21:
		sub_820A40A4(ctx, base);
		return;
	case 22:
		sub_820A40A4(ctx, base);
		return;
	case 23:
		sub_820A40A4(ctx, base);
		return;
	case 24:
		sub_820A40A4(ctx, base);
		return;
	case 25:
		sub_820A4080(ctx, base);
		return;
	case 26:
		sub_820A4080(ctx, base);
		return;
	case 27:
		sub_820A40A4(ctx, base);
		return;
	case 28:
		sub_820A40A4(ctx, base);
		return;
	case 29:
		sub_820A40A4(ctx, base);
		return;
	case 30:
		sub_820A40A4(ctx, base);
		return;
	case 31:
		sub_820A40A4(ctx, base);
		return;
	case 32:
		sub_820A40A4(ctx, base);
		return;
	case 33:
		sub_820A40A4(ctx, base);
		return;
	case 34:
		sub_820A40A4(ctx, base);
		return;
	case 35:
		sub_820A40A4(ctx, base);
		return;
	case 36:
		sub_820A40A4(ctx, base);
		return;
	case 37:
		sub_820A40A4(ctx, base);
		return;
	case 38:
		sub_820A40A4(ctx, base);
		return;
	case 39:
		sub_820A40A4(ctx, base);
		return;
	case 40:
		sub_820A408C(ctx, base);
		return;
	case 41:
		sub_820A40A4(ctx, base);
		return;
	case 42:
		sub_820A40A4(ctx, base);
		return;
	case 43:
		sub_820A40A4(ctx, base);
		return;
	case 44:
		sub_820A40A4(ctx, base);
		return;
	case 45:
		sub_820A40A4(ctx, base);
		return;
	case 46:
		sub_820A40A4(ctx, base);
		return;
	case 47:
		sub_820A40A4(ctx, base);
		return;
	case 48:
		sub_820A40A4(ctx, base);
		return;
	case 49:
		sub_820A40A4(ctx, base);
		return;
	case 50:
		sub_820A40A4(ctx, base);
		return;
	case 51:
		sub_820A40A4(ctx, base);
		return;
	case 52:
		sub_820A40A4(ctx, base);
		return;
	case 53:
		sub_820A40A4(ctx, base);
		return;
	case 54:
		sub_820A40A4(ctx, base);
		return;
	case 55:
		sub_820A40A4(ctx, base);
		return;
	case 56:
		sub_820A40A4(ctx, base);
		return;
	case 57:
		sub_820A40A4(ctx, base);
		return;
	case 58:
		sub_820A408C(ctx, base);
		return;
	case 59:
		sub_820A40A4(ctx, base);
		return;
	case 60:
		sub_820A408C(ctx, base);
		return;
	case 61:
		sub_820A4098(ctx, base);
		return;
	case 62:
		sub_820A4098(ctx, base);
		return;
	case 63:
		sub_820A40A4(ctx, base);
		return;
	case 64:
		sub_820A4098(ctx, base);
		return;
	case 65:
		sub_820A40A4(ctx, base);
		return;
	case 66:
		sub_820A40A4(ctx, base);
		return;
	case 67:
		sub_820A40A4(ctx, base);
		return;
	case 68:
		sub_820A40A4(ctx, base);
		return;
	case 69:
		sub_820A4098(ctx, base);
		return;
	case 70:
		sub_820A4098(ctx, base);
		return;
	case 71:
		sub_820A40A4(ctx, base);
		return;
	case 72:
		sub_820A4098(ctx, base);
		return;
	case 73:
		sub_820A4098(ctx, base);
		return;
	case 74:
		sub_820A40A4(ctx, base);
		return;
	case 75:
		sub_820A408C(ctx, base);
		return;
	case 76:
		sub_820A40A4(ctx, base);
		return;
	case 77:
		sub_820A40A4(ctx, base);
		return;
	case 78:
		sub_820A40A4(ctx, base);
		return;
	case 79:
		sub_820A40A4(ctx, base);
		return;
	case 80:
		sub_820A40A4(ctx, base);
		return;
	case 81:
		sub_820A4098(ctx, base);
		return;
	case 82:
		sub_820A40A4(ctx, base);
		return;
	case 83:
		sub_820A4098(ctx, base);
		return;
	case 84:
		sub_820A40A4(ctx, base);
		return;
	case 85:
		sub_820A40A4(ctx, base);
		return;
	case 86:
		sub_820A40A4(ctx, base);
		return;
	case 87:
		sub_820A40A4(ctx, base);
		return;
	case 88:
		sub_820A40A4(ctx, base);
		return;
	case 89:
		sub_820A40A4(ctx, base);
		return;
	case 90:
		sub_820A408C(ctx, base);
		return;
	case 91:
		goto loc_820A4068;
	case 92:
		sub_820A408C(ctx, base);
		return;
	case 93:
		sub_820A4098(ctx, base);
		return;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820A4068:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4560);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A7B28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820A7B30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7c14
	if (ctx.cr6.eq) goto loc_820A7C14;
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// addi r10,r11,30408
	ctx.r10.s64 = ctx.r11.s64 + 30408;
	// lbzx r5,r4,r10
	ctx.r5.u64 = REX_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// beq cr6,0x820a7c14
	if (ctx.cr6.eq) goto loc_820A7C14;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820a7b7c
	if (ctx.cr6.lt) goto loc_820A7B7C;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_820A7B6C:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x820a7b6c
	if (!ctx.cr6.lt) goto loc_820A7B6C;
loc_820A7B7C:
	// addic. r5,r3,28
	ctx.xer.ca = ctx.r3.u32 > 4294967267;
	ctx.r5.s64 = ctx.r3.s64 + 28;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x820a7c14
	if (ctx.cr0.eq) goto loc_820A7C14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x820a7c00
	if (!ctx.cr6.gt) goto loc_820A7C00;
	// lis r11,-32198
	ctx.r11.s64 = -2110128128;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// addi r29,r11,-13136
	ctx.r29.s64 = ctx.r11.s64 + -13136;
loc_820A7BA0:
	// lwzx r11,r9,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r28,20(r3)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x820a7bd8
	if (!ctx.cr6.lt) goto loc_820A7BD8;
	// cmpwi cr6,r11,2560
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2560, ctx.xer);
	// bge cr6,0x820a7bf4
	if (!ctx.cr6.lt) goto loc_820A7BF4;
	// addi r11,r11,1224
	ctx.r11.s64 = ctx.r11.s64 + 1224;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820a7bf4
	if (ctx.cr6.eq) goto loc_820A7BF4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x820a7bf4
	goto loc_820A7BF4;
loc_820A7BD8:
	// cmpwi cr6,r11,10000
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10000, ctx.xer);
	// ble cr6,0x820a7bf4
	if (!ctx.cr6.gt) goto loc_820A7BF4;
	// cmpwi cr6,r11,10058
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10058, ctx.xer);
	// bge cr6,0x820a7bf4
	if (!ctx.cr6.lt) goto loc_820A7BF4;
	// addi r11,r11,-10001
	ctx.r11.s64 = ctx.r11.s64 + -10001;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r29
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
loc_820A7BF4:
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x820a7ba0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820A7BA0;
loc_820A7C00:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32198
	ctx.r10.s64 = -2110128128;
	// addi r9,r10,-12816
	ctx.r9.s64 = ctx.r10.s64 + -12816;
	// stwx r9,r11,r5
	REX_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r9.u32);
	// bl 0x820a71a0
	ctx.lr = 0x820A7C14;
	sub_820A71A0(ctx, base);
loc_820A7C14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820ABFB0) {
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
	// lwz r11,7260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 7260);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ac040
	if (ctx.cr6.eq) goto loc_820AC040;
	// lwz r10,10968(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 10968);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820ac040
	if (ctx.cr6.eq) goto loc_820AC040;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x820ac014
	if (!ctx.cr6.gt) goto loc_820AC014;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ld r9,12840(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 12840);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// ld r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bne cr6,0x820ac014
	if (!ctx.cr6.eq) goto loc_820AC014;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x820ac018
	goto loc_820AC018;
loc_820AC014:
	// stw r30,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_820AC018:
	// lwz r11,7260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 7260);
	// lwz r10,10968(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 10968);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,4(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// stw r8,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r3,7260(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 7260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820ac03c
	if (ctx.cr6.eq) goto loc_820AC03C;
	// bl 0x8210f568
	ctx.lr = 0x820AC03C;
	sub_8210F568(ctx, base);
loc_820AC03C:
	// stw r30,7260(r31)
	REX_STORE_U32(ctx.r31.u32 + 7260, ctx.r30.u32);
loc_820AC040:
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

DEFINE_REX_FUNC(sub_820AE998) {
	REX_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEB38) {
	REX_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEDE0) {
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
	// stfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820f1468
	ctx.lr = 0x820AEDFC;
	sub_820F1468(ctx, base);
	// stfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 24, temp.u32);
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

DEFINE_REX_FUNC(sub_820AFB00) {
	REX_FUNC_PROLOGUE();
	// lwz r11,10808(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 10808);
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lbz r9,10708(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 10708);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x820afb24
	if (!ctx.cr6.eq) goto loc_820AFB24;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,10708(r10)
	REX_STORE_U8(ctx.r10.u32 + 10708, ctx.r9.u8);
loc_820AFB24:
	// addi r11,r11,2577
	ctx.r11.s64 = ctx.r11.s64 + 2577;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B0AB8) {
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
	// beq cr6,0x820b0bb4
	if (ctx.cr6.eq) goto loc_820B0BB4;
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
	ctx.lr = 0x820B0AF0;
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
	ctx.lr = 0x820B0B0C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,88(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 88);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x820B0B28;
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
	ctx.lr = 0x820B0B44;
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
	ctx.lr = 0x820B0B60;
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
	ctx.lr = 0x820B0B7C;
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
	ctx.lr = 0x820B0B98;
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
	ctx.lr = 0x820B0BB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0BB4:
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

DEFINE_REX_FUNC(sub_820B3298) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// addi r10,r4,34
	ctx.r10.s64 = ctx.r4.s64 + 34;
	// addi r9,r4,67
	ctx.r9.s64 = ctx.r4.s64 + 67;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,2104(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
	// stwx r11,r7,r3
	REX_STORE_U32(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u32);
	// stwx r11,r6,r3
	REX_STORE_U32(ctx.r6.u32 + ctx.r3.u32, ctx.r11.u32);
	// stfsx f0,r5,r3
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + ctx.r3.u32, temp.u32);
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,364(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 364);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_820B3DB8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f2,52(r3)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f3,56(r3)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B3F88) {
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
	// addis r3,r3,22
	ctx.r3.s64 = ctx.r3.s64 + 1441792;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x8215ec60
	ctx.lr = 0x820B3FB0;
	sub_8215EC60(ctx, base);
	// lis r10,22
	ctx.r10.s64 = 1441792;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r31,r10
	REX_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r9.u32);
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

DEFINE_REX_FUNC(sub_820B4F48) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820B4F50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x820b4ff8
	if (ctx.cr6.eq) goto loc_820B4FF8;
	// lwz r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820b4ff8
	if (ctx.cr6.eq) goto loc_820B4FF8;
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820b4ff8
	if (!ctx.cr6.gt) goto loc_820B4FF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x820e8040
	ctx.lr = 0x820B4F8C;
	sub_820E8040(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x820b4ff8
	if (ctx.cr6.eq) goto loc_820B4FF8;
	// lwz r6,16(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
loc_820B4FA4:
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,264
	ctx.r10.s64 = ctx.r11.s64 + 264;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b4fe0
	if (ctx.cr6.eq) goto loc_820B4FE0;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
loc_820B4FC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r31,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x820b4fe0
	if (!ctx.cr0.eq) goto loc_820B4FE0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x820b4fc0
	if (!ctx.cr6.eq) goto loc_820B4FC0;
loc_820B4FE0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x820b5004
	if (ctx.cr6.eq) goto loc_820B5004;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,308
	ctx.r7.s64 = ctx.r7.s64 + 308;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x820b4fa4
	if (ctx.cr6.lt) goto loc_820B4FA4;
loc_820B4FF8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_820B5004:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B6DF0) {
	REX_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,132(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 132);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,116(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 116);
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lwz r8,128(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 128);
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_820B6E10:
	// lwzx r9,r10,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwinm r6,r9,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820b6e2c
	if (ctx.cr6.eq) goto loc_820B6E2C;
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x820b6e40
	if (ctx.cr6.eq) goto loc_820B6E40;
loc_820B6E2C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x820b6e10
	if (ctx.cr6.lt) goto loc_820B6E10;
	// blr 
	return;
loc_820B6E40:
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r3,8(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B7CE8) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,2531(r3)
	REX_STORE_U8(ctx.r3.u32 + 2531, ctx.r11.u8);
	// stb r11,2530(r3)
	REX_STORE_U8(ctx.r3.u32 + 2530, ctx.r11.u8);
	// stb r11,2529(r3)
	REX_STORE_U8(ctx.r3.u32 + 2529, ctx.r11.u8);
	// stb r11,2528(r3)
	REX_STORE_U8(ctx.r3.u32 + 2528, ctx.r11.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B7D68) {
	REX_FUNC_PROLOGUE();
	// stb r4,3909(r3)
	REX_STORE_U8(ctx.r3.u32 + 3909, ctx.r4.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B8310) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820B8318;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x820917a8
	ctx.lr = 0x820B8328;
	sub_820917A8(ctx, base);
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820b837c
	if (ctx.cr6.gt) goto loc_820B837C;
	// lis r12,-32244
	ctx.r12.s64 = -2113142784;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31924
	ctx.r12.s64 = ctx.r12.s64 + -31924;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820B8374;
	case 1:
		goto loc_820B8374;
	case 2:
		goto loc_820B8374;
	case 3:
		goto loc_820B837C;
	case 4:
		goto loc_820B8374;
	case 5:
		goto loc_820B8374;
	case 6:
		goto loc_820B8374;
	case 7:
		goto loc_820B8374;
	case 8:
		goto loc_820B8374;
	case 9:
		goto loc_820B8374;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820B8374:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x820b83ec
	goto loc_820B83EC;
loc_820B837C:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r10,2548(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,-24092
	ctx.r30.s64 = ctx.r11.s64 + -24092;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r5,r10,r30
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lwz r8,608(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 608);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B83A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// addi r7,r30,7
	ctx.r7.s64 = ctx.r30.s64 + 7;
	// lwz r6,2552(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r5,r6,r7
	ctx.r5.u64 = REX_LOAD_U8(ctx.r6.u32 + ctx.r7.u32);
	// lwz r10,608(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 608);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B83C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// addi r9,r30,14
	ctx.r9.s64 = ctx.r30.s64 + 14;
	// lwz r8,2556(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r7,0(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r5,r8,r9
	ctx.r5.u64 = REX_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lwz r6,608(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 608);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x820B83EC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B83EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x820b843c
	if (!ctx.cr6.eq) goto loc_820B843C;
	// lwz r11,2404(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2404);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820b843c
	if (ctx.cr6.eq) goto loc_820B843C;
	// lwz r11,2548(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2548);
	// lwz r10,2552(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2552);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// lwz r9,2556(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2556);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r3,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r3.s64 = ctx.r8.s64 + -1;
	// and r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 & ctx.r4.u64;
	// subfe r8,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// and r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 & ctx.r5.u64;
loc_820B843C:
	// lwz r3,2388(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2388);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,620(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 620);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B8450;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820BF770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x820BF778;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,2932(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 2932);
	// bl 0x82091ab8
	ctx.lr = 0x820BF788;
	sub_82091AB8(ctx, base);
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ac8
	ctx.lr = 0x820BF790;
	sub_82091AC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,2932(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// bl 0x82091ad8
	ctx.lr = 0x820BF79C;
	sub_82091AD8(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820bf7e0
	if (ctx.cr6.eq) goto loc_820BF7E0;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820bf818
	if (ctx.cr6.eq) goto loc_820BF818;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x820bf864
	if (ctx.cr6.eq) goto loc_820BF864;
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// lwz r4,2948(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// addi r5,r11,-18288
	ctx.r5.s64 = ctx.r11.s64 + -18288;
	// bl 0x820a2e68
	ctx.lr = 0x820BF7D8;
	sub_820A2E68(ctx, base);
	// stb r29,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r29.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
loc_820BF7E0:
	// rlwinm r11,r28,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfa30
	if (ctx.cr6.eq) goto loc_820BFA30;
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820bfad0
	if (ctx.cr6.gt) goto loc_820BFAD0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820bf88c
	if (ctx.cr6.eq) goto loc_820BF88C;
	// bdz 0x820bf8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF8D0;
	// bdz 0x820bf914
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF914;
	// bdz 0x820bf958
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF958;
	// bdz 0x820bf99c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_820BF99C;
	// b 0x820bfa00
	goto loc_820BFA00;
loc_820BF818:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF824;
	sub_820A0700(ctx, base);
	// addi r4,r31,2544
	ctx.r4.s64 = ctx.r31.s64 + 2544;
	// lwz r3,2540(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2540);
	// bl 0x82091e20
	ctx.lr = 0x820BF830;
	sub_82091E20(ctx, base);
	// bl 0x82091e48
	ctx.lr = 0x820BF834;
	sub_82091E48(ctx, base);
	// bl 0x82091e58
	ctx.lr = 0x820BF838;
	sub_82091E58(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
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
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
loc_820BF864:
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF870;
	sub_820A0700(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r4,3901(r31)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r31.u32 + 3901);
	// bl 0x820bbd40
	ctx.lr = 0x820BF87C;
	sub_820BBD40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb350
	ctx.lr = 0x820BF884;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF88C:
	// bl 0x82092748
	ctx.lr = 0x820BF890;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF89C;
	sub_820A0700(ctx, base);
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3900(r31)
	REX_STORE_U8(ctx.r31.u32 + 3900, ctx.r11.u8);
	// bl 0x82091b18
	ctx.lr = 0x820BF8AC;
	sub_82091B18(ctx, base);
	// lbz r10,3903(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3903);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BF8C8;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF8D0:
	// bl 0x82092748
	ctx.lr = 0x820BF8D4;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF8E0;
	sub_820A0700(ctx, base);
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3900(r31)
	REX_STORE_U8(ctx.r31.u32 + 3900, ctx.r11.u8);
	// bl 0x82091b18
	ctx.lr = 0x820BF8F0;
	sub_82091B18(ctx, base);
	// lbz r10,3904(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3904);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BF90C;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF914:
	// bl 0x82092748
	ctx.lr = 0x820BF918;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF924;
	sub_820A0700(ctx, base);
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3900(r31)
	REX_STORE_U8(ctx.r31.u32 + 3900, ctx.r11.u8);
	// bl 0x82091b18
	ctx.lr = 0x820BF934;
	sub_82091B18(ctx, base);
	// lbz r10,3905(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3905);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BF950;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF958:
	// bl 0x82092748
	ctx.lr = 0x820BF95C;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF968;
	sub_820A0700(ctx, base);
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3900(r31)
	REX_STORE_U8(ctx.r31.u32 + 3900, ctx.r11.u8);
	// bl 0x82091b18
	ctx.lr = 0x820BF978;
	sub_82091B18(ctx, base);
	// lbz r10,3906(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3906);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BF994;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF99C:
	// lwz r11,2932(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820bf9ec
	if (!ctx.cr6.eq) goto loc_820BF9EC;
	// bl 0x82092748
	ctx.lr = 0x820BF9AC;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BF9B8;
	sub_820A0700(ctx, base);
	// lbz r11,3897(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3897);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,3900(r31)
	REX_STORE_U8(ctx.r31.u32 + 3900, ctx.r11.u8);
	// bl 0x82091b18
	ctx.lr = 0x820BF9C8;
	sub_82091B18(ctx, base);
	// lbz r10,3907(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 3907);
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r10,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r10.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BF9E4;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BF9EC:
	// bl 0x82092798
	ctx.lr = 0x820BF9F0;
	sub_82092798(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb350
	ctx.lr = 0x820BF9F8;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BFA00:
	// bl 0x82092748
	ctx.lr = 0x820BFA04;
	sub_82092748(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BFA10;
	sub_820A0700(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BFA28;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BFA30:
	// rlwinm r11,r28,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfa6c
	if (ctx.cr6.eq) goto loc_820BFA6C;
	// bl 0x82092770
	ctx.lr = 0x820BFA40;
	sub_82092770(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820BFA4C;
	sub_820A0700(ctx, base);
	// lbz r11,2530(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 2530);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r11.u8);
	// bl 0x820bb350
	ctx.lr = 0x820BFA64;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_820BFA6C:
	// clrlwi r11,r27,27
	ctx.r11.u64 = ctx.r27.u32 & 0x1F;
	// rlwinm r11,r11,0,31,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfa88
	if (ctx.cr6.eq) goto loc_820BFA88;
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x820bfaa0
	goto loc_820BFAA0;
loc_820BFA88:
	// rlwinm r11,r27,0,26,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x3E;
	// rlwinm r11,r11,0,30,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820bfab0
	if (ctx.cr6.eq) goto loc_820BFAB0;
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_820BFAA0:
	// stw r30,2532(r31)
	REX_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
	// stw r29,2536(r31)
	REX_STORE_U32(ctx.r31.u32 + 2536, ctx.r29.u32);
	// stw r11,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r11.u32);
	// bl 0x82092720
	ctx.lr = 0x820BFAB0;
	sub_82092720(ctx, base);
loc_820BFAB0:
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x820bfac4
	if (!ctx.cr6.lt) goto loc_820BFAC4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r11.u32);
loc_820BFAC4:
	// lwz r11,2948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2948);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x820bfad4
	if (ctx.cr6.lt) goto loc_820BFAD4;
loc_820BFAD0:
	// stw r30,2948(r31)
	REX_STORE_U32(ctx.r31.u32 + 2948, ctx.r30.u32);
loc_820BFAD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bb350
	ctx.lr = 0x820BFADC;
	sub_820BB350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820CC408) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x820CC410;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215eba4
	ctx.lr = 0x820CC418;
	__savefpr_27(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r14,0
	ctx.r14.s64 = 0;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r14,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r14.u32);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820CC438:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x820cc438
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CC438;
	// li r10,12
	ctx.r10.s64 = 12;
	// addi r11,r1,163
	ctx.r11.s64 = ctx.r1.s64 + 163;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_820CC450:
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x820cc450
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_820CC450;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// bl 0x820cb4b8
	ctx.lr = 0x820CC464;
	sub_820CB4B8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lfs f27,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f27.f64 = double(temp.f32);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// addi r11,r11,-27568
	ctx.r11.s64 = ctx.r11.s64 + -27568;
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bne cr6,0x820cc4cc
	if (!ctx.cr6.eq) goto loc_820CC4CC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addis r27,r31,1
	ctx.r27.s64 = ctx.r31.s64 + 65536;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r27,r27,-27560
	ctx.r27.s64 = ctx.r27.s64 + -27560;
	// lfs f31,4516(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4516);
	ctx.f31.f64 = double(temp.f32);
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r27,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,-14300(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -14300);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,-27564
	ctx.r10.s64 = ctx.r10.s64 + -27564;
	// lfs f12,-14304(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -14304);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lfs f29,-20516(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -20516);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,-14308(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14308);
	ctx.f0.f64 = double(temp.f32);
	// stfs f12,0(r10)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x820cc50c
	goto loc_820CC50C;
loc_820CC4CC:
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// fmr f29,f27
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f27.f64;
	// addis r9,r31,1
	ctx.r9.s64 = ctx.r31.s64 + 65536;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r9,r9,-27560
	ctx.r9.s64 = ctx.r9.s64 + -27560;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r10,-27564
	ctx.r10.s64 = ctx.r10.s64 + -27564;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lfs f13,-15012(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -15012);
	ctx.f13.f64 = double(temp.f32);
	// rotlwi r27,r9,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lfs f12,-14312(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -14312);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r9)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f0,-15016(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -15016);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r10)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_820CC50C:
	// stfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stw r10,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f4,f27
	ctx.f4.f64 = ctx.f27.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f3,f27
	ctx.f3.f64 = ctx.f27.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r15,r31,108
	ctx.r15.s64 = ctx.r31.s64 + 108;
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f0,4376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4376);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r8,-14332
	ctx.r6.s64 = ctx.r8.s64 + -14332;
	// lfs f13,-14316(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -14316);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x820a2318
	ctx.lr = 0x820CC54C;
	sub_820A2318(ctx, base);
	// lwz r6,2468(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// lis r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ori r28,r7,37980
	ctx.r28.u64 = ctx.r7.u64 | 37980;
	// beq cr6,0x820cc65c
	if (ctx.cr6.eq) goto loc_820CC65C;
	// lwz r11,2464(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// lwz r10,2460(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820cc5c8
	if (ctx.cr6.eq) goto loc_820CC5C8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820cc598
	if (ctx.cr6.lt) goto loc_820CC598;
	// addi r11,r11,3165
	ctx.r11.s64 = ctx.r11.s64 + 3165;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x820a1f08
	ctx.lr = 0x820CC598;
	sub_820A1F08(ctx, base);
loc_820CC598:
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820cc5c8
	if (ctx.cr6.lt) goto loc_820CC5C8;
	// addi r11,r11,3165
	ctx.r11.s64 = ctx.r11.s64 + 3165;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,4600(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4600);
	ctx.f1.f64 = double(temp.f32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x820a1f08
	ctx.lr = 0x820CC5C8;
	sub_820A1F08(ctx, base);
loc_820CC5C8:
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r7,9
	ctx.r7.s64 = 9;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r9,-15336
	ctx.r30.s64 = ctx.r9.s64 + -15336;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r30,4
	ctx.r5.s64 = ctx.r30.s64 + 4;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfsx f0,r4,r5
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r4,r30
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fadds f1,f13,f31
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// bl 0x820a0658
	ctx.lr = 0x820CC604;
	sub_820A0658(ctx, base);
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4560(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 4560);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f13,2112(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f3,4404(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + 4404);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f12,r4,r9
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r4,r30
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f12,f29
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f29.f64));
	// fadds f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f31.f64));
	// fadds f2,f10,f0
	ctx.f2.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fadds f1,f9,f13
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// bl 0x820a1030
	ctx.lr = 0x820CC650;
	sub_820A1030(ctx, base);
	// lwz r3,2460(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// stw r3,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r3.u32);
	// b 0x820cc6ec
	goto loc_820CC6EC;
loc_820CC65C:
	// lwz r11,2476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cc6ec
	if (ctx.cr6.eq) goto loc_820CC6EC;
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lwz r10,2464(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2464);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x820cc69c
	if (!ctx.cr6.eq) goto loc_820CC69C;
	// li r30,4
	ctx.r30.s64 = 4;
	// add r29,r31,r28
	ctx.r29.u64 = ctx.r31.u64 + ctx.r28.u64;
loc_820CC680:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x820a1f08
	ctx.lr = 0x820CC690;
	sub_820A1F08(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x820cc680
	if (!ctx.cr0.eq) goto loc_820CC680;
loc_820CC69C:
	// lwz r11,2472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// lfs f12,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// std r9,184(r1)
	REX_STORE_U64(ctx.r1.u32 + 184, ctx.r9.u64);
	// lfd f11,184(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// li r7,9
	ctx.r7.s64 = 9;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f0,-14336(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -14336);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14340(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14340);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmadds f8,f9,f12,f29
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f29.f64)));
	// fadds f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// bl 0x820a0658
	ctx.lr = 0x820CC6E4;
	sub_820A0658(ctx, base);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r7,2464(r31)
	REX_STORE_U32(ctx.r31.u32 + 2464, ctx.r7.u32);
loc_820CC6EC:
	// add r27,r31,r28
	ctx.r27.u64 = ctx.r31.u64 + ctx.r28.u64;
	// li r30,4
	ctx.r30.s64 = 4;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_820CC6F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x820a1f40
	ctx.lr = 0x820CC704;
	sub_820A1F40(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x820cc6f8
	if (!ctx.cr0.eq) goto loc_820CC6F8;
	// lwz r11,6812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x820cc7b0
	if (!ctx.cr6.eq) goto loc_820CC7B0;
	// lwz r11,2484(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r11.u32);
	// cmpwi cr6,r11,239
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 239, ctx.xer);
	// ble cr6,0x820cc734
	if (!ctx.cr6.gt) goto loc_820CC734;
	// stw r14,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r14.u32);
loc_820CC734:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r4,r11,-14352
	ctx.r4.s64 = ctx.r11.s64 + -14352;
	// bl 0x820e7fe8
	ctx.lr = 0x820CC744;
	sub_820E7FE8(ctx, base);
	// lwz r10,2484(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// li r28,60
	ctx.r28.s64 = 60;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// divw. r9,r10,r28
	ctx.r9.u64 = uint32_t((ctx.r28.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r10.s32 / ctx.r28.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x820cc780
	if (!ctx.cr0.gt) goto loc_820CC780;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r11,-14356
	ctx.r29.s64 = ctx.r11.s64 + -14356;
loc_820CC760:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e8008
	ctx.lr = 0x820CC76C;
	sub_820E8008(ctx, base);
	// lwz r11,2484(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2484);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// divw r10,r11,r28
	ctx.r10.u64 = uint32_t((ctx.r28.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r28.s32 == -1)) ? ctx.r11.s32 / ctx.r28.s32 : 0);
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x820cc760
	if (ctx.cr6.lt) goto loc_820CC760;
loc_820CC780:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,-15120(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -15120);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f2,-14360(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14360);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x820a0498
	ctx.lr = 0x820CC7AC;
	sub_820A0498(ctx, base);
	// b 0x820cc7b4
	goto loc_820CC7B4;
loc_820CC7B0:
	// stw r14,2484(r31)
	REX_STORE_U32(ctx.r31.u32 + 2484, ctx.r14.u32);
loc_820CC7B4:
	// li r5,256
	ctx.r5.s64 = 256;
	// lfs f30,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8215ec60
	ctx.lr = 0x820CC7C8;
	sub_8215EC60(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x8215ec60
	ctx.lr = 0x820CC7D8;
	sub_8215EC60(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,-18492
	ctx.r30.s64 = ctx.r11.s64 + -18492;
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820cc8a4
	if (ctx.cr6.gt) goto loc_820CC8A4;
	// lis r12,-32243
	ctx.r12.s64 = -2113077248;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-14328
	ctx.r12.s64 = ctx.r12.s64 + -14328;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820CC868;
	case 1:
		goto loc_820CC874;
	case 2:
		goto loc_820CC880;
	case 3:
		goto loc_820CC88C;
	case 4:
		goto loc_820CC85C;
	case 5:
		goto loc_820CC898;
	case 6:
		goto loc_820CC830;
	case 7:
		goto loc_820CC844;
	case 8:
		goto loc_820CC838;
	case 9:
		goto loc_820CC850;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820CC830:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC838:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18512
	ctx.r4.s64 = ctx.r11.s64 + -18512;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC844:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18532
	ctx.r4.s64 = ctx.r11.s64 + -18532;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC850:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18468
	ctx.r4.s64 = ctx.r11.s64 + -18468;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC85C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18560
	ctx.r4.s64 = ctx.r11.s64 + -18560;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC868:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18548
	ctx.r4.s64 = ctx.r11.s64 + -18548;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC874:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18448
	ctx.r4.s64 = ctx.r11.s64 + -18448;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC880:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18572
	ctx.r4.s64 = ctx.r11.s64 + -18572;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC88C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18480
	ctx.r4.s64 = ctx.r11.s64 + -18480;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC898:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18580
	ctx.r4.s64 = ctx.r11.s64 + -18580;
	// b 0x820cc8ac
	goto loc_820CC8AC;
loc_820CC8A4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-18592
	ctx.r4.s64 = ctx.r11.s64 + -18592;
loc_820CC8AC:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e7fe8
	ctx.lr = 0x820CC8B4;
	sub_820E7FE8(ctx, base);
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f0,-14368(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14368);
	ctx.f0.f64 = double(temp.f32);
	// fadds f28,f29,f0
	ctx.f28.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f0,-14364(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -14364);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bne cr6,0x820cc8f8
	if (!ctx.cr6.eq) goto loc_820CC8F8;
	// bl 0x820a22b8
	ctx.lr = 0x820CC8F4;
	sub_820A22B8(ctx, base);
	// b 0x820cc8fc
	goto loc_820CC8FC;
loc_820CC8F8:
	// bl 0x820a2348
	ctx.lr = 0x820CC8FC;
	sub_820A2348(ctx, base);
loc_820CC8FC:
	// lis r9,0
	ctx.r9.s64 = 0;
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// ori r8,r9,37992
	ctx.r8.u64 = ctx.r9.u64 | 37992;
	// addi r6,r10,-14372
	ctx.r6.s64 = ctx.r10.s64 + -14372;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// stw r6,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r6.u32);
	// lfsx f30,r31,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820ccae0
	if (ctx.cr6.eq) goto loc_820CCAE0;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820cca38
	if (ctx.cr6.eq) goto loc_820CCA38;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// fmr f4,f30
	ctx.f4.f64 = ctx.f30.f64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// beq cr6,0x820cc9f0
	if (ctx.cr6.eq) goto loc_820CC9F0;
	// lwz r11,6784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,2460(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// addi r8,r10,-15384
	ctx.r8.s64 = ctx.r10.s64 + -15384;
	// rlwinm r7,r11,2,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// li r9,9
	ctx.r9.s64 = 9;
	// lwzx r4,r7,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// bne cr6,0x820cc9a8
	if (!ctx.cr6.eq) goto loc_820CC9A8;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820cc980
	if (!ctx.cr6.eq) goto loc_820CC980;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f0,-14376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14376);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bl 0x820a2288
	ctx.lr = 0x820CC97C;
	sub_820A2288(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CC980:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14380(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x820a0f70
	ctx.lr = 0x820CC9A4;
	sub_820A0F70(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CC9A8:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x820cc9c8
	if (!ctx.cr6.eq) goto loc_820CC9C8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// lfs f0,-14376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14376);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
loc_820CC9C0:
	// bl 0x820a2318
	ctx.lr = 0x820CC9C4;
	sub_820A2318(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CC9C8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,2224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-14380(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// bl 0x820a0f70
	ctx.lr = 0x820CC9EC;
	sub_820A0F70(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CC9F0:
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f13,-14380(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14380);
	ctx.f13.f64 = double(temp.f32);
	// li r4,273
	ctx.r4.s64 = 273;
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// lfs f0,2224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bne cr6,0x820cca2c
	if (!ctx.cr6.eq) goto loc_820CCA2C;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x820a0f70
	ctx.lr = 0x820CCA28;
	sub_820A0F70(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CCA2C:
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x820a0f70
	ctx.lr = 0x820CCA34;
	sub_820A0F70(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CCA38:
	// lwz r11,6784(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6784);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820cca90
	if (ctx.cr6.gt) goto loc_820CCA90;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820cca6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CCA6C;
	// bdzf 4*cr6+eq,0x820cca78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CCA78;
	// bne cr6,0x820cca84
	if (!ctx.cr6.eq) goto loc_820CCA84;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-14388
	ctx.r4.s64 = ctx.r10.s64 + -14388;
	// b 0x820cca98
	goto loc_820CCA98;
loc_820CCA6C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-14396
	ctx.r4.s64 = ctx.r10.s64 + -14396;
	// b 0x820cca98
	goto loc_820CCA98;
loc_820CCA78:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-14404
	ctx.r4.s64 = ctx.r10.s64 + -14404;
	// b 0x820cca98
	goto loc_820CCA98;
loc_820CCA84:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-14412
	ctx.r4.s64 = ctx.r10.s64 + -14412;
	// b 0x820cca98
	goto loc_820CCA98;
loc_820CCA90:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r4,r10,-14420
	ctx.r4.s64 = ctx.r10.s64 + -14420;
loc_820CCA98:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// addi r5,r11,-15056
	ctx.r5.s64 = ctx.r11.s64 + -15056;
	// bl 0x820e8b98
	ctx.lr = 0x820CCAA8;
	sub_820E8B98(ctx, base);
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r9,9
	ctx.r9.s64 = 9;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f0,-14376(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14376);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bne cr6,0x820cc9c0
	if (!ctx.cr6.eq) goto loc_820CC9C0;
	// bl 0x820a2288
	ctx.lr = 0x820CCADC;
	sub_820A2288(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CCAE0:
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,9
	ctx.r9.s64 = 9;
	// lfs f13,-14380(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -14380);
	ctx.f13.f64 = double(temp.f32);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fadds f1,f31,f13
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f13.f64));
	// lfs f0,2224(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// fadds f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// bne cr6,0x820ccb28
	if (!ctx.cr6.eq) goto loc_820CCB28;
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x820a0f70
	ctx.lr = 0x820CCB24;
	sub_820A0F70(ctx, base);
	// b 0x820ccb30
	goto loc_820CCB30;
loc_820CCB28:
	// stw r14,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r14.u32);
	// bl 0x820a0f70
	ctx.lr = 0x820CCB30;
	sub_820A0F70(ctx, base);
loc_820CCB30:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,6792(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6792);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r9,r10,38004
	ctx.r9.u64 = ctx.r10.u64 | 38004;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lfsx f30,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820ccb6c
	if (ctx.cr6.eq) goto loc_820CCB6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820ccb60
	if (ctx.cr6.eq) goto loc_820CCB60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-14428
	ctx.r4.s64 = ctx.r11.s64 + -14428;
	// b 0x820ccb74
	goto loc_820CCB74;
loc_820CCB60:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-14436
	ctx.r4.s64 = ctx.r11.s64 + -14436;
	// b 0x820ccb74
	goto loc_820CCB74;
loc_820CCB6C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-14444
	ctx.r4.s64 = ctx.r11.s64 + -14444;
loc_820CCB74:
	// bl 0x820e7fe8
	ctx.lr = 0x820CCB78;
	sub_820E7FE8(ctx, base);
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r9,9
	ctx.r9.s64 = 9;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f0,-14448(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14448);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bne cr6,0x820ccbb0
	if (!ctx.cr6.eq) goto loc_820CCBB0;
	// bl 0x820a2288
	ctx.lr = 0x820CCBAC;
	sub_820A2288(ctx, base);
	// b 0x820ccbb4
	goto loc_820CCBB4;
loc_820CCBB0:
	// bl 0x820a2318
	ctx.lr = 0x820CCBB4;
	sub_820A2318(ctx, base);
loc_820CCBB4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,6776(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6776);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// ori r9,r11,38016
	ctx.r9.u64 = ctx.r11.u64 | 38016;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfsx f30,r31,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	ctx.f30.f64 = double(temp.f32);
	// beq cr6,0x820ccbd8
	if (ctx.cr6.eq) goto loc_820CCBD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x820ccbe0
	goto loc_820CCBE0;
loc_820CCBD8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-14456
	ctx.r4.s64 = ctx.r11.s64 + -14456;
loc_820CCBE0:
	// bl 0x820e7fe8
	ctx.lr = 0x820CCBE4;
	sub_820E7FE8(ctx, base);
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f30.f64;
	// li r9,9
	ctx.r9.s64 = 9;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f3,f30
	ctx.f3.f64 = ctx.f30.f64;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f0,-14460(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14460);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// bne cr6,0x820ccc1c
	if (!ctx.cr6.eq) goto loc_820CCC1C;
	// bl 0x820a2288
	ctx.lr = 0x820CCC18;
	sub_820A2288(ctx, base);
	// b 0x820ccc20
	goto loc_820CCC20;
loc_820CCC1C:
	// bl 0x820a2318
	ctx.lr = 0x820CCC20;
	sub_820A2318(ctx, base);
loc_820CCC20:
	// addis r18,r31,1
	ctx.r18.s64 = ctx.r31.s64 + 65536;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r18,r18,-27988
	ctx.r18.s64 = ctx.r18.s64 + -27988;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// ori r17,r10,37544
	ctx.r17.u64 = ctx.r10.u64 | 37544;
	// ori r30,r9,37556
	ctx.r30.u64 = ctx.r9.u64 | 37556;
	// lwz r6,0(r18)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// mr r21,r14
	ctx.r21.u64 = ctx.r14.u64;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
	// addi r16,r11,-14468
	ctx.r16.s64 = ctx.r11.s64 + -14468;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x820ccd28
	if (ctx.cr6.eq) goto loc_820CCD28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwzx r5,r31,r17
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfs f28,-14472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -14472);
	ctx.f28.f64 = double(temp.f32);
	// beq cr6,0x820ccc7c
	if (ctx.cr6.eq) goto loc_820CCC7C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-14480
	ctx.r4.s64 = ctx.r11.s64 + -14480;
	// bl 0x820e8b98
	ctx.lr = 0x820CCC78;
	sub_820E8B98(ctx, base);
	// b 0x820ccc8c
	goto loc_820CCC8C;
loc_820CCC7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,4620
	ctx.r4.s64 = ctx.r11.s64 + 4620;
	// bl 0x820e8b98
	ctx.lr = 0x820CCC8C;
	sub_820E8B98(ctx, base);
loc_820CCC8C:
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x820e8040
	ctx.lr = 0x820CCC94;
	sub_820E8040(ctx, base);
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// bge cr6,0x820cccc0
	if (!ctx.cr6.lt) goto loc_820CCCC0;
	// subfic r11,r3,11
	ctx.xer.ca = ctx.r3.u32 <= 11;
	ctx.r11.u64 = static_cast<uint64_t>(11) - ctx.r3.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fadds f28,f12,f28
	ctx.f28.f64 = double(float(ctx.f12.f64 + ctx.f28.f64));
loc_820CCCC0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f4,f27
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f27.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fsubs f1,f28,f31
	ctx.f1.f64 = double(float(ctx.f28.f64 - ctx.f31.f64));
	// li r9,9
	ctx.r9.s64 = 9;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// lfs f0,-20512(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -20512);
	ctx.f0.f64 = double(temp.f32);
	// fadds f30,f29,f0
	ctx.f30.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f3,2236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x820a23d8
	ctx.lr = 0x820CCCF0;
	sub_820A23D8(ctx, base);
	// lwzx r9,r31,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x820ccd28
	if (!ctx.cr6.eq) goto loc_820CCD28;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,2
	ctx.r7.s64 = 2;
	// lfs f0,-23676(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -23676);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// fsubs f0,f28,f0
	ctx.f0.f64 = double(float(ctx.f28.f64 - ctx.f0.f64));
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x820a0498
	ctx.lr = 0x820CCD28;
	sub_820A0498(ctx, base);
loc_820CCD28:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r20,r31,r30
	ctx.r20.u64 = ctx.r31.u64 + ctx.r30.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f30,4444(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4444);
	ctx.f30.f64 = double(temp.f32);
	// bne cr6,0x820ccf3c
	if (!ctx.cr6.eq) goto loc_820CCF3C;
	// lwz r11,6832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// mr r27,r14
	ctx.r27.u64 = ctx.r14.u64;
	// addi r10,r11,9
	ctx.r10.s64 = ctx.r11.s64 + 9;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cd0f4
	if (!ctx.cr6.lt) goto loc_820CD0F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r26,r31,6840
	ctx.r26.s64 = ctx.r31.s64 + 6840;
	// li r24,3
	ctx.r24.s64 = 3;
	// ori r25,r11,37552
	ctx.r25.u64 = ctx.r11.u64 | 37552;
loc_820CCD68:
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_820CCD70:
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x820ccda0
	if (ctx.cr6.eq) goto loc_820CCDA0;
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cd0ec
	if (!ctx.cr6.lt) goto loc_820CD0EC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r9,r9,304
	ctx.r9.s64 = ctx.r9.s64 + 304;
	// cmpwi cr6,r29,100
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 100, ctx.xer);
	// blt cr6,0x820ccd70
	if (ctx.cr6.lt) goto loc_820CCD70;
	// b 0x820cd0f4
	goto loc_820CD0F4;
loc_820CCDA0:
	// lwz r10,6832(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// lwz r11,2472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x820ccdfc
	if (!ctx.cr6.eq) goto loc_820CCDFC;
	// mulli r11,r29,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(304));
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,7136(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 7136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ccdfc
	if (ctx.cr6.eq) goto loc_820CCDFC;
	// lwz r11,6776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ccdd8
	if (!ctx.cr6.eq) goto loc_820CCDD8;
	// li r21,1
	ctx.r21.s64 = 1;
loc_820CCDD8:
	// lwz r22,7140(r30)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r30.u32 + 7140);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x820ccdfc
	if (!ctx.cr6.eq) goto loc_820CCDFC;
	// bl 0x82091ff8
	ctx.lr = 0x820CCDE8;
	sub_82091FF8(ctx, base);
	// ld r11,7120(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 7120);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmpld cr6,r11,r3
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r3.u64, ctx.xer);
	// beq cr6,0x820ccdfc
	if (ctx.cr6.eq) goto loc_820CCDFC;
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
loc_820CCDFC:
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r9,2472(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// cmplw cr6,r9,r27
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r27.u32, ctx.xer);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f11,0(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f12,f11,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f12.f64, ctx.f11.f64, ctx.f30.f64)));
	// bne cr6,0x820ccef4
	if (!ctx.cr6.eq) goto loc_820CCEF4;
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820cce70
	if (ctx.cr6.lt) goto loc_820CCE70;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x820cce70
	if (ctx.cr6.gt) goto loc_820CCE70;
	// mulli r11,r29,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(304));
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r11,6840
	ctx.r5.s64 = ctx.r11.s64 + 6840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cb530
	ctx.lr = 0x820CCE68;
	sub_820CB530(ctx, base);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// b 0x820ccf20
	goto loc_820CCF20;
loc_820CCE70:
	// mulli r11,r29,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(304));
	// fadds f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// li r8,11
	ctx.r8.s64 = 11;
	// addi r5,r30,6840
	ctx.r5.s64 = ctx.r30.s64 + 6840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cb530
	ctx.lr = 0x820CCE9C;
	sub_820CB530(ctx, base);
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820ccee0
	if (ctx.cr6.eq) goto loc_820CCEE0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x820cceb8
	if (!ctx.cr6.gt) goto loc_820CCEB8;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x820ccee0
	if (!ctx.cr6.gt) goto loc_820CCEE0;
loc_820CCEB8:
	// lwz r10,7076(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 7076);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x820ccecc
	if (!ctx.cr6.gt) goto loc_820CCECC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820CCECC:
	// lwz r10,7068(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 7068);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820cceec
	if (!ctx.cr6.lt) goto loc_820CCEEC;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// b 0x820ccf20
	goto loc_820CCF20;
loc_820CCEE0:
	// lwz r11,7068(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 7068);
	// subfc r10,r24,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r24.u32;
	ctx.r10.u64 = ctx.r11.u64 - ctx.r24.u64;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820CCEEC:
	// addi r23,r11,2
	ctx.r23.s64 = ctx.r11.s64 + 2;
	// b 0x820ccf20
	goto loc_820CCF20;
loc_820CCEF4:
	// mulli r11,r29,304
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(304));
	// fadds f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// li r8,9
	ctx.r8.s64 = 9;
	// addi r5,r11,6840
	ctx.r5.s64 = ctx.r11.s64 + 6840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820cb530
	ctx.lr = 0x820CCF20;
	sub_820CB530(ctx, base);
loc_820CCF20:
	// lwz r11,6832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x820ccd68
	if (ctx.cr6.lt) goto loc_820CCD68;
	// b 0x820cd0f4
	goto loc_820CD0F4;
loc_820CCF3C:
	// lwz r11,6812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cd0f4
	if (!ctx.cr6.eq) goto loc_820CD0F4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r28,108(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// li r24,3
	ctx.r24.s64 = 3;
	// ori r25,r11,37552
	ctx.r25.u64 = ctx.r11.u64 | 37552;
loc_820CCF5C:
	// lwz r11,6832(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6832);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r11,r11,9390
	ctx.r11.s64 = ctx.r11.s64 + 9390;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd0dc
	if (ctx.cr6.eq) goto loc_820CD0DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x820cd0f4
	if (ctx.cr6.eq) goto loc_820CD0F4;
	// lwz r10,2472(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x820ccfb4
	if (!ctx.cr6.eq) goto loc_820CCFB4;
	// lwz r11,296(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ccfb4
	if (ctx.cr6.eq) goto loc_820CCFB4;
	// lwz r11,6776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820ccfb0
	if (!ctx.cr6.eq) goto loc_820CCFB0;
	// li r21,1
	ctx.r21.s64 = 1;
loc_820CCFB0:
	// li r22,1
	ctx.r22.s64 = 1;
loc_820CCFB4:
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// std r11,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f11,f0,f30
	ctx.f0.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f30.f64)));
	// bne cr6,0x820cd0a4
	if (!ctx.cr6.eq) goto loc_820CD0A4;
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x820cd01c
	if (ctx.cr6.lt) goto loc_820CD01C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x820cd01c
	if (ctx.cr6.gt) goto loc_820CD01C;
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// fadds f2,f0,f29
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// li r8,11
	ctx.r8.s64 = 11;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820cb530
	ctx.lr = 0x820CD014;
	sub_820CB530(ctx, base);
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// b 0x820cd0cc
	goto loc_820CD0CC;
loc_820CD01C:
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// fadds f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// li r8,11
	ctx.r8.s64 = 11;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820cb530
	ctx.lr = 0x820CD044;
	sub_820CB530(ctx, base);
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820cd08c
	if (ctx.cr6.eq) goto loc_820CD08C;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x820cd060
	if (!ctx.cr6.gt) goto loc_820CD060;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// ble cr6,0x820cd08c
	if (!ctx.cr6.gt) goto loc_820CD08C;
loc_820CD060:
	// lwzx r10,r30,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// lwz r9,236(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x820cd078
	if (!ctx.cr6.gt) goto loc_820CD078;
	// li r11,2
	ctx.r11.s64 = 2;
loc_820CD078:
	// lwz r10,228(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 228);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x820cd09c
	if (!ctx.cr6.lt) goto loc_820CD09C;
	// addi r23,r11,1
	ctx.r23.s64 = ctx.r11.s64 + 1;
	// b 0x820cd0cc
	goto loc_820CD0CC;
loc_820CD08C:
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// subfc r9,r24,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r24.u32;
	ctx.r9.u64 = ctx.r10.u64 - ctx.r24.u64;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_820CD09C:
	// addi r23,r11,2
	ctx.r23.s64 = ctx.r11.s64 + 2;
	// b 0x820cd0cc
	goto loc_820CD0CC;
loc_820CD0A4:
	// lwzx r11,r30,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// fadds f2,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// li r8,9
	ctx.r8.s64 = 9;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x820cb530
	ctx.lr = 0x820CD0CC;
	sub_820CB530(ctx, base);
loc_820CD0CC:
	// lwzx r10,r31,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r25.u32);
	// add r11,r31,r25
	ctx.r11.u64 = ctx.r31.u64 + ctx.r25.u64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x820cd0ec
	if (!ctx.cr6.lt) goto loc_820CD0EC;
loc_820CD0DC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// blt cr6,0x820ccf5c
	if (ctx.cr6.lt) goto loc_820CCF5C;
	// b 0x820cd0f4
	goto loc_820CD0F4;
loc_820CD0EC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_820CD0F4:
	// lwz r11,2476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cd28c
	if (ctx.cr6.eq) goto loc_820CD28C;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,37964
	ctx.r10.u64 = ctx.r11.u64 | 37964;
	// lwzx r9,r31,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,60
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 60, ctx.xer);
	// bge cr6,0x820cd160
	if (!ctx.cr6.lt) goto loc_820CD160;
	// lwz r11,2472(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// extsw r5,r11
	ctx.r5.s64 = ctx.r11.s32;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// std r5,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfd f11,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f13,4584(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4584);
	ctx.f13.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,-19528(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -19528);
	ctx.f0.f64 = double(temp.f32);
	// lfs f4,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmadds f8,f9,f12,f30
	ctx.f8.f64 = double(float(std::fma(ctx.f9.f64, ctx.f12.f64, ctx.f30.f64)));
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fadds f2,f7,f29
	ctx.f2.f64 = double(float(ctx.f7.f64 + ctx.f29.f64));
	// b 0x820cd270
	goto loc_820CD270;
loc_820CD160:
	// cmplwi cr6,r23,4
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 4, ctx.xer);
	// bgt cr6,0x820cd204
	if (ctx.cr6.gt) goto loc_820CD204;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820cd198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CD198;
	// bdzf 4*cr6+eq,0x820cd1b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CD1B4;
	// bdzf 4*cr6+eq,0x820cd1d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CD1D0;
	// bne cr6,0x820cd1ec
	if (!ctx.cr6.eq) goto loc_820CD1EC;
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820cd21c
	goto loc_820CD21C;
loc_820CD198:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,17
	ctx.r11.s64 = ctx.r11.s64 + 17;
	// b 0x820cd21c
	goto loc_820CD21C;
loc_820CD1B4:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// b 0x820cd21c
	goto loc_820CD21C;
loc_820CD1D0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,54
	ctx.r11.s64 = ctx.r11.s64 + 54;
	// b 0x820cd21c
	goto loc_820CD21C;
loc_820CD1EC:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// b 0x820cd218
	goto loc_820CD218;
loc_820CD204:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f0
	ctx.f13.s64 = std::isnan(ctx.f0.f64) ? int64_t(0x80000000U) : (ctx.f0.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f0.f64));
	// stfd f13,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f13.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_820CD218:
	// addi r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 + 72;
loc_820CD21C:
	// lwz r10,2472(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 2472);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// lwz r11,176(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 176);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// std r9,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lwz r7,108(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// std r5,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r5.u64);
	// lfd f9,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = REX_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// lfs f12,0(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4584(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4584);
	ctx.f13.f64 = double(temp.f32);
	// lfd f11,96(r1)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-19528(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + -19528);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f6,f7,f12,f30
	ctx.f6.f64 = double(float(std::fma(ctx.f7.f64, ctx.f12.f64, ctx.f30.f64)));
	// frsp f4,f10
	ctx.f4.f64 = double(float(ctx.f10.f64));
	// fsubs f5,f6,f13
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fadds f2,f5,f29
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f29.f64));
loc_820CD270:
	// lis r8,-14312
	ctx.r8.s64 = -937951232;
	// lfs f3,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// li r9,10
	ctx.r9.s64 = 10;
	// fadds f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// ori r8,r8,10260
	ctx.r8.u64 = ctx.r8.u64 | 10260;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x820a1670
	ctx.lr = 0x820CD28C;
	sub_820A1670(ctx, base);
loc_820CD28C:
	// lwz r11,2468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cd4c4
	if (ctx.cr6.eq) goto loc_820CD4C4;
	// lwzx r11,r31,r17
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r17.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820cd2b0
	if (ctx.cr6.eq) goto loc_820CD2B0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14488
	ctx.r10.s64 = ctx.r11.s64 + -14488;
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
loc_820CD2B0:
	// lwz r11,6812(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6812);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cd2f8
	if (!ctx.cr6.eq) goto loc_820CD2F8;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820cd2d0
	if (!ctx.cr6.eq) goto loc_820CD2D0;
	// stw r16,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// b 0x820cd2d8
	goto loc_820CD2D8;
loc_820CD2D0:
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// stw r10,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
loc_820CD2D8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cd2f8
	if (!ctx.cr6.eq) goto loc_820CD2F8;
	// lwz r11,0(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x820cd2f8
	if (!ctx.cr6.gt) goto loc_820CD2F8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14496
	ctx.r10.s64 = ctx.r11.s64 + -14496;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_820CD2F8:
	// lwz r11,2460(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2460);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x820cd544
	if (ctx.cr6.gt) goto loc_820CD544;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820cd350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CD350;
	// bdzf 4*cr6+eq,0x820cd418
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820CD418;
	// bne cr6,0x820cd450
	if (!ctx.cr6.eq) goto loc_820CD450;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r10,-14524
	ctx.r7.s64 = ctx.r10.s64 + -14524;
	// addi r6,r9,-24164
	ctx.r6.s64 = ctx.r9.s64 + -24164;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r8,-26604
	ctx.r4.s64 = ctx.r8.s64 + -26604;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD350:
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x820cd3fc
	if (ctx.cr6.eq) goto loc_820CD3FC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820cd3d0
	if (ctx.cr6.eq) goto loc_820CD3D0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r9,r11,-24164
	ctx.r9.s64 = ctx.r11.s64 + -24164;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// beq cr6,0x820cd3c0
	if (ctx.cr6.eq) goto loc_820CD3C0;
	// lwz r10,6780(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 6780);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x820cd394
	if (!ctx.cr6.eq) goto loc_820CD394;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14572
	ctx.r10.s64 = ctx.r11.s64 + -14572;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD394:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,-26604
	ctx.r8.s64 = ctx.r10.s64 + -26604;
	// addi r7,r9,-14592
	ctx.r7.s64 = ctx.r9.s64 + -14592;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD3C0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r10,-14648
	ctx.r8.s64 = ctx.r10.s64 + -14648;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD3D0:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,-26604
	ctx.r8.s64 = ctx.r10.s64 + -26604;
	// addi r7,r9,-14672
	ctx.r7.s64 = ctx.r9.s64 + -14672;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD3FC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r9,r11,-24164
	ctx.r9.s64 = ctx.r11.s64 + -24164;
	// addi r8,r10,-14732
	ctx.r8.s64 = ctx.r10.s64 + -14732;
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD418:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r7,r10,-14760
	ctx.r7.s64 = ctx.r10.s64 + -14760;
	// addi r6,r9,-24164
	ctx.r6.s64 = ctx.r9.s64 + -24164;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r4,r8,-26604
	ctx.r4.s64 = ctx.r8.s64 + -26604;
	// stw r7,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// stw r6,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r6.u32);
	// stw r4,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD450:
	// lwz r11,6772(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6772);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x820cd4ac
	if (ctx.cr6.eq) goto loc_820CD4AC;
	// lwz r11,6776(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 6776);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820cd474
	if (!ctx.cr6.eq) goto loc_820CD474;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14820
	ctx.r10.s64 = ctx.r11.s64 + -14820;
	// b 0x820cd47c
	goto loc_820CD47C;
loc_820CD474:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14888
	ctx.r10.s64 = ctx.r11.s64 + -14888;
loc_820CD47C:
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r8,r10,-24164
	ctx.r8.s64 = ctx.r10.s64 + -24164;
	// addi r7,r9,-26604
	ctx.r7.s64 = ctx.r9.s64 + -26604;
	// stw r11,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r7,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x820cd534
	goto loc_820CD534;
loc_820CD4AC:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r10,-14956
	ctx.r8.s64 = ctx.r10.s64 + -14956;
	// addi r9,r11,-24164
	ctx.r9.s64 = ctx.r11.s64 + -24164;
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// b 0x820cd530
	goto loc_820CD530;
loc_820CD4C4:
	// lwz r11,2476(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2476);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cd544
	if (ctx.cr6.eq) goto loc_820CD544;
	// lwz r11,2480(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2480);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x820cd544
	if (ctx.cr6.eq) goto loc_820CD544;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r10,r11,-14984
	ctx.r10.s64 = ctx.r11.s64 + -14984;
	// stw r10,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// beq cr6,0x820cd51c
	if (ctx.cr6.eq) goto loc_820CD51C;
	// bl 0x82091fd8
	ctx.lr = 0x820CD4F4;
	sub_82091FD8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x820cd510
	if (!ctx.cr6.eq) goto loc_820CD510;
	// bl 0x82091fe8
	ctx.lr = 0x820CD500;
	sub_82091FE8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820cd51c
	if (ctx.cr6.eq) goto loc_820CD51C;
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// bne cr6,0x820cd51c
	if (!ctx.cr6.eq) goto loc_820CD51C;
loc_820CD510:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r11,-14996
	ctx.r10.s64 = ctx.r11.s64 + -14996;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_820CD51C:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r10,-15008
	ctx.r8.s64 = ctx.r10.s64 + -15008;
	// addi r9,r11,-18388
	ctx.r9.s64 = ctx.r11.s64 + -18388;
	// stw r8,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
loc_820CD530:
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_820CD534:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8209faf8
	ctx.lr = 0x820CD544;
	sub_8209FAF8(ctx, base);
loc_820CD544:
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8215ebf0
	ctx.lr = 0x820CD550;
	__restfpr_27(ctx, base);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82100230) {
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
	// lwz r4,12(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82100130
	ctx.lr = 0x82100258;
	sub_82100130(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x820e8f80
	ctx.lr = 0x82100260;
	sub_820E8F80(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82100278;
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

DEFINE_REX_FUNC(sub_82101390) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82101398;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x820aeb30
	ctx.lr = 0x821013C4;
	sub_820AEB30(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101404
	if (ctx.cr6.eq) goto loc_82101404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82111228
	ctx.lr = 0x821013DC;
	sub_82111228(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82101404
	if (ctx.cr6.eq) goto loc_82101404;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82111128
	ctx.lr = 0x821013F0;
	sub_82111128(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82101410
	if (!ctx.cr6.eq) goto loc_82101410;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x820f3158
	ctx.lr = 0x82101404;
	sub_820F3158(ctx, base);
loc_82101404:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_82101410:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x821111a0
	ctx.lr = 0x82101418;
	sub_821111A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821014c4
	if (ctx.cr6.eq) goto loc_821014C4;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821014c4
	if (ctx.cr6.eq) goto loc_821014C4;
	// li r3,108
	ctx.r3.s64 = 108;
	// bl 0x820ef558
	ctx.lr = 0x82101434;
	sub_820EF558(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821014c4
	if (ctx.cr6.eq) goto loc_821014C4;
	// bl 0x82107900
	ctx.lr = 0x82101440;
	sub_82107900(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821014c4
	if (ctx.cr6.eq) goto loc_821014C4;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x820ef2e0
	ctx.lr = 0x82101454;
	sub_820EF2E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq cr6,0x8210149c
	if (ctx.cr6.eq) goto loc_8210149C;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// stw r23,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82106e48
	ctx.lr = 0x82101488;
	sub_82106E48(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x821014dc
	if (!ctx.cr6.eq) goto loc_821014DC;
	// bl 0x8210f568
	ctx.lr = 0x82101498;
	sub_8210F568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8210149C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x821014AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x821014C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_821014C4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f3158
	ctx.lr = 0x821014D0;
	sub_820F3158(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_821014DC:
	// bl 0x8210f568
	ctx.lr = 0x821014E0;
	sub_8210F568(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82106808) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82106810;
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
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// mr r14,r6
	ctx.r14.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82106b50
	if (ctx.cr6.eq) goto loc_82106B50;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82106b50
	if (ctx.cr6.eq) goto loc_82106B50;
	// lwz r15,8(r5)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x82106b50
	if (ctx.cr6.eq) goto loc_82106B50;
	// lis r11,1023
	ctx.r11.s64 = 67043328;
	// stw r4,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8210687c
	if (ctx.cr6.gt) goto loc_8210687C;
	// rlwinm r11,r8,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82106880
	if (!ctx.cr6.gt) goto loc_82106880;
loc_8210687C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82106880:
	// bl 0x820ef2e0
	ctx.lr = 0x82106884;
	sub_820EF2E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq cr6,0x821068f4
	if (ctx.cr6.eq) goto loc_821068F4;
	// addic. r11,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r11.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r19.u32);
	// addi r7,r3,4
	ctx.r7.s64 = ctx.r3.s64 + 4;
	// blt 0x821068ec
	if (ctx.cr0.lt) goto loc_821068EC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r11,r7,-20
	ctx.r11.s64 = ctx.r7.s64 + -20;
	// addi r10,r7,-64
	ctx.r10.s64 = ctx.r7.s64 + -64;
	// addi r8,r8,6744
	ctx.r8.s64 = ctx.r8.s64 + 6744;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r9,r9,6536
	ctx.r9.s64 = ctx.r9.s64 + 6536;
loc_821068C0:
	// stwu r8,64(r10)
	ea = 64 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
	// stw r9,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r9.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
	// stw r28,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r28.u32);
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
	// stw r28,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
	// stw r28,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r28.u32);
	// stw r28,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
	// stwu r28,64(r11)
	ea = 64 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821068c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821068C0;
loc_821068EC:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x821068f8
	goto loc_821068F8;
loc_821068F4:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_821068F8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r11.u32);
	// beq cr6,0x82106b50
	if (ctx.cr6.eq) goto loc_82106B50;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8210696c
	if (ctx.cr6.lt) goto loc_8210696C;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82106950
	if (ctx.cr6.eq) goto loc_82106950;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82106938;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
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
loc_82106950:
	// bl 0x8210f568
	ctx.lr = 0x82106954;
	sub_8210F568(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
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
loc_8210696C:
	// lwz r11,348(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 348);
	// addi r20,r31,32
	ctx.r20.s64 = ctx.r31.s64 + 32;
	// stw r30,16(r27)
	REX_STORE_U32(ctx.r27.u32 + 16, ctx.r30.u32);
	// stw r19,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r19.u32);
	// stw r31,32(r27)
	REX_STORE_U32(ctx.r27.u32 + 32, ctx.r31.u32);
	// stw r17,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r17.u32);
	// stw r11,28(r27)
	REX_STORE_U32(ctx.r27.u32 + 28, ctx.r11.u32);
	// lhz r10,32(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x821069b0
	if (!ctx.cr6.eq) goto loc_821069B0;
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821069b0
	if (ctx.cr6.eq) goto loc_821069B0;
	// addi r11,r31,50
	ctx.r11.s64 = ctx.r31.s64 + 50;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821069b0
	if (ctx.cr6.eq) goto loc_821069B0;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_821069B0:
	// lhz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// bne cr6,0x821069c8
	if (!ctx.cr6.eq) goto loc_821069C8;
	// addic. r11,r31,120
	ctx.xer.ca = ctx.r31.u32 > 4294967175;
	ctx.r11.s64 = ctx.r31.s64 + 120;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821069c8
	if (ctx.cr0.eq) goto loc_821069C8;
	// mr r20,r11
	ctx.r20.u64 = ctx.r11.u64;
loc_821069C8:
	// lwz r21,340(r1)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r21,1
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 1, ctx.xer);
	// beq cr6,0x821069dc
	if (ctx.cr6.eq) goto loc_821069DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82110eb0
	ctx.lr = 0x821069DC;
	sub_82110EB0(ctx, base);
loc_821069DC:
	// lwz r23,4(r20)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// mr r18,r28
	ctx.r18.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82106ac4
	if (ctx.cr6.eq) goto loc_82106AC4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r22,364(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 364);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r24,356(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 356);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// lfs f30,2280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,2236(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2236);
	ctx.f31.f64 = double(temp.f32);
loc_82106A14:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// beq cr6,0x82106a2c
	if (ctx.cr6.eq) goto loc_82106A2C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82106A2C:
	// lwz r11,0(r15)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r15.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// lwz r7,32(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82106A5C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82106ac0
	if (ctx.cr6.lt) goto loc_82106AC0;
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stfs f30,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r17,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r17.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r28,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// stw r21,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r21.u32);
	// stw r24,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r24.u32);
	// stw r16,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r16.u32);
	// beq cr6,0x82106a98
	if (ctx.cr6.eq) goto loc_82106A98;
	// stw r30,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r30.u32);
loc_82106A98:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// stw r23,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r23.u32);
	// blt cr6,0x82106a14
	if (ctx.cr6.lt) goto loc_82106A14;
	// b 0x82106ac4
	goto loc_82106AC4;
loc_82106AC0:
	// li r18,1
	ctx.r18.s64 = 1;
loc_82106AC4:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// stw r28,40(r27)
	REX_STORE_U32(ctx.r27.u32 + 40, ctx.r28.u32);
	// beq cr6,0x82106b64
	if (ctx.cr6.eq) goto loc_82106B64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82106afc
	if (ctx.cr6.eq) goto loc_82106AFC;
	// addi r30,r14,-4
	ctx.r30.s64 = ctx.r14.s64 + -4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82106AE0:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82106AF4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82106ae0
	if (!ctx.cr0.eq) goto loc_82106AE0;
loc_82106AFC:
	// lwz r11,36(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106b50
	if (ctx.cr6.eq) goto loc_82106B50;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82106b48
	if (ctx.cr6.eq) goto loc_82106B48;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82106B30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82106B48:
	// bl 0x8210f568
	ctx.lr = 0x82106B4C;
	sub_8210F568(ctx, base);
	// stw r28,36(r27)
	REX_STORE_U32(ctx.r27.u32 + 36, ctx.r28.u32);
loc_82106B50:
	// li r3,0
	ctx.r3.s64 = 0;
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
loc_82106B64:
	// li r3,1
	ctx.r3.s64 = 1;
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

DEFINE_REX_FUNC(sub_8210F628) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8210F630;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-17988
	ctx.r11.s64 = ctx.r11.s64 + -17988;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,7352
	ctx.r8.s64 = ctx.r10.s64 + 7352;
	// addi r7,r9,7192
	ctx.r7.s64 = ctx.r9.s64 + 7192;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// bl 0x82100768
	ctx.lr = 0x8210F660;
	sub_82100768(ctx, base);
	// addis r28,r31,1
	ctx.r28.s64 = ctx.r31.s64 + 65536;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// addi r28,r28,-18272
	ctx.r28.s64 = ctx.r28.s64 + -18272;
	// addi r5,r6,7336
	ctx.r5.s64 = ctx.r6.s64 + 7336;
	// stw r5,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r5.u32);
	// lwz r3,12(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f684
	if (ctx.cr6.eq) goto loc_8210F684;
	// bl 0x8215e470
	ctx.lr = 0x8210F684;
	sub_8215E470(ctx, base);
loc_8210F684:
	// addis r29,r31,1
	ctx.r29.s64 = ctx.r31.s64 + 65536;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r29,-18476
	ctx.r29.s64 = ctx.r29.s64 + -18476;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,7340
	ctx.r10.s64 = ctx.r11.s64 + 7340;
	// stw r30,12(r28)
	REX_STORE_U32(ctx.r28.u32 + 12, ctx.r30.u32);
	// stw r30,16(r28)
	REX_STORE_U32(ctx.r28.u32 + 16, ctx.r30.u32);
	// stw r30,20(r28)
	REX_STORE_U32(ctx.r28.u32 + 20, ctx.r30.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r3,8(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f6b8
	if (ctx.cr6.eq) goto loc_8210F6B8;
	// bl 0x8215e470
	ctx.lr = 0x8210F6B8;
	sub_8215E470(ctx, base);
loc_8210F6B8:
	// stw r30,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r30.u32);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// stw r30,12(r29)
	REX_STORE_U32(ctx.r29.u32 + 12, ctx.r30.u32);
	// stw r30,16(r29)
	REX_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r3,r3,-25704
	ctx.r3.s64 = ctx.r3.s64 + -25704;
	// bl 0x8210eff8
	ctx.lr = 0x8210F6D0;
	sub_8210EFF8(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,-25924
	ctx.r11.s64 = ctx.r11.s64 + -25924;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// addi r3,r9,7204
	ctx.r3.s64 = ctx.r9.s64 + 7204;
	// addi r4,r10,7324
	ctx.r4.s64 = ctx.r10.s64 + 7324;
	// addi r10,r8,7180
	ctx.r10.s64 = ctx.r8.s64 + 7180;
	// addi r9,r7,7204
	ctx.r9.s64 = ctx.r7.s64 + 7204;
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r8,r6,7220
	ctx.r8.s64 = ctx.r6.s64 + 7220;
	// stw r3,184(r11)
	REX_STORE_U32(ctx.r11.u32 + 184, ctx.r3.u32);
	// addi r7,r5,7212
	ctx.r7.s64 = ctx.r5.s64 + 7212;
	// stw r10,176(r11)
	REX_STORE_U32(ctx.r11.u32 + 176, ctx.r10.u32);
	// stw r9,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r9.u32);
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r8,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r8.u32);
	// stw r7,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// bl 0x82105d78
	ctx.lr = 0x8210F728;
	sub_82105D78(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// addi r3,r3,-28368
	ctx.r3.s64 = ctx.r3.s64 + -28368;
	// bl 0x8210d220
	ctx.lr = 0x8210F734;
	sub_8210D220(ctx, base);
	// lis r6,0
	ctx.r6.s64 = 0;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// ori r4,r6,37072
	ctx.r4.u64 = ctx.r6.u64 | 37072;
	// addi r11,r5,7104
	ctx.r11.s64 = ctx.r5.s64 + 7104;
	// addi r3,r31,26704
	ctx.r3.s64 = ctx.r31.s64 + 26704;
	// stwx r11,r31,r4
	REX_STORE_U32(ctx.r31.u32 + ctx.r4.u32, ctx.r11.u32);
	// bl 0x8210f170
	ctx.lr = 0x8210F750;
	sub_8210F170(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r10,50
	ctx.r10.s64 = 50;
	// addi r8,r9,7288
	ctx.r8.s64 = ctx.r9.s64 + 7288;
	// addi r11,r11,7264
	ctx.r11.s64 = ctx.r11.s64 + 7264;
	// addi r9,r31,13428
	ctx.r9.s64 = ctx.r31.s64 + 13428;
	// stw r8,13428(r31)
	REX_STORE_U32(ctx.r31.u32 + 13428, ctx.r8.u32);
	// stw r11,26444(r31)
	REX_STORE_U32(ctx.r31.u32 + 26444, ctx.r11.u32);
	// addi r9,r9,13016
	ctx.r9.s64 = ctx.r9.s64 + 13016;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8210F778:
	// stwu r11,-260(r9)
	ea = -260 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8210f778
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210F778;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r9,50
	ctx.r9.s64 = 50;
	// addi r8,r10,7252
	ctx.r8.s64 = ctx.r10.s64 + 7252;
	// addi r11,r11,7228
	ctx.r11.s64 = ctx.r11.s64 + 7228;
	// addi r10,r31,152
	ctx.r10.s64 = ctx.r31.s64 + 152;
	// stw r8,152(r31)
	REX_STORE_U32(ctx.r31.u32 + 152, ctx.r8.u32);
	// stw r11,13168(r31)
	REX_STORE_U32(ctx.r31.u32 + 13168, ctx.r11.u32);
	// addi r10,r10,13016
	ctx.r10.s64 = ctx.r10.s64 + 13016;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8210F7A8:
	// stwu r11,-260(r10)
	ea = -260 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8210f7a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8210F7A8;
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f7c0
	if (ctx.cr6.eq) goto loc_8210F7C0;
	// bl 0x8215e470
	ctx.lr = 0x8210F7C0;
	sub_8215E470(ctx, base);
loc_8210F7C0:
	// stw r30,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,124(r31)
	REX_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r10,r11,6908
	ctx.r10.s64 = ctx.r11.s64 + 6908;
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8210f7ec
	if (ctx.cr6.eq) goto loc_8210F7EC;
	// bl 0x8215e470
	ctx.lr = 0x8210F7EC;
	sub_8215E470(ctx, base);
loc_8210F7EC:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,68(r29)
	REX_STORE_U32(ctx.r29.u32 + 68, ctx.r30.u32);
	// stw r30,72(r29)
	REX_STORE_U32(ctx.r29.u32 + 72, ctx.r30.u32);
	// addi r10,r11,7204
	ctx.r10.s64 = ctx.r11.s64 + 7204;
	// stw r30,76(r29)
	REX_STORE_U32(ctx.r29.u32 + 76, ctx.r30.u32);
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82116678) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82116680;
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
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821166A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821166C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,164(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82116710
	if (!ctx.cr6.eq) goto loc_82116710;
	// lwz r11,440(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116708
	if (ctx.cr6.eq) goto loc_82116708;
	// lwz r3,176(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// addi r5,r31,172
	ctx.r5.s64 = ctx.r31.s64 + 172;
	// lwz r4,532(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 532);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821166F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82116710
	if (ctx.cr0.lt) goto loc_82116710;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,168(r31)
	REX_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
loc_82116708:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,164(r31)
	REX_STORE_U32(ctx.r31.u32 + 164, ctx.r11.u32);
loc_82116710:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116724;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82116738;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821163e0
	ctx.lr = 0x82116740;
	sub_821163E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82117E80) {
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
	// b 0x82117ea8
	goto loc_82117EA8;
loc_82117E9C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117ea8
	if (ctx.cr6.eq) goto loc_82117EA8;
	// bl 0x82118bc8
	ctx.lr = 0x82117EA8;
	sub_82118BC8(ctx, base);
loc_82117EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82117038
	ctx.lr = 0x82117EB0;
	sub_82117038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82117e9c
	if (!ctx.cr0.eq) goto loc_82117E9C;
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// b 0x82117ecc
	goto loc_82117ECC;
loc_82117EC0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117ecc
	if (ctx.cr6.eq) goto loc_82117ECC;
	// bl 0x82118bc8
	ctx.lr = 0x82117ECC;
	sub_82118BC8(ctx, base);
loc_82117ECC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82117038
	ctx.lr = 0x82117ED4;
	sub_82117038(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82117ec0
	if (!ctx.cr0.eq) goto loc_82117EC0;
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82117ef0
	if (ctx.cr6.eq) goto loc_82117EF0;
	// lwz r4,248(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 248);
	// bl 0x8216b138
	ctx.lr = 0x82117EF0;
	sub_8216B138(ctx, base);
loc_82117EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821175e0
	ctx.lr = 0x82117EF8;
	sub_821175E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821175e0
	ctx.lr = 0x82117F00;
	sub_821175E0(ctx, base);
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

DEFINE_REX_FUNC(sub_82118608) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82116470
	sub_82116470(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821196A0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
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

DEFINE_REX_FUNC(sub_82119740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r3,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82119A20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82119A28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,44
	ctx.r3.s64 = ctx.r11.s64 + 44;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119A54;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82119a90
	if (ctx.cr0.eq) goto loc_82119A90;
	// add r8,r30,r28
	ctx.r8.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_82119A70:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82119a90
	if (!ctx.cr0.eq) goto loc_82119A90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82119a70
	if (!ctx.cr6.eq) goto loc_82119A70;
loc_82119A90:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82119ae4
	if (ctx.cr0.eq) goto loc_82119AE4;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82119ab0
	if (ctx.cr6.eq) goto loc_82119AB0;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82119ab4
	goto loc_82119AB4;
loc_82119AB0:
	// lwz r4,60(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
loc_82119AB4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119ACC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82119ae4
	if (ctx.cr0.lt) goto loc_82119AE4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82119AE4;
	sub_8215E640(ctx, base);
loc_82119AE4:
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
	ctx.lr = 0x82119AFC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211A890) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x8211a7c0
	sub_8211A7C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211BAE8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r9,0
	ctx.r9.s64 = 0;
loc_8211BAFC:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r7,r11,20,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8211bb24
	if (ctx.cr6.eq) goto loc_8211BB24;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r4,12,12,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFF000) | (ctx.r11.u64 & 0xFFFFFFFFFFF00FFF);
	// stw r7,48(r10)
	REX_STORE_U32(ctx.r10.u32 + 48, ctx.r7.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8211BB24:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211bafc
	if (ctx.cr6.lt) goto loc_8211BAFC;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8211C9D8) {
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
	// lwz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8211ca40
	if (ctx.cr6.eq) goto loc_8211CA40;
	// lwz r11,648(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 648);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211ca14
	if (ctx.cr6.eq) goto loc_8211CA14;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8211ca18
	goto loc_8211CA18;
loc_8211CA14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8211CA18:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8211ca2c
	if (ctx.cr6.eq) goto loc_8211CA2C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_8211CA2C:
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,24(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82119718
	ctx.lr = 0x8211CA3C;
	sub_82119718(ctx, base);
	// b 0x8211ca5c
	goto loc_8211CA5C;
loc_8211CA40:
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// bl 0x82116cd0
	ctx.lr = 0x8211CA48;
	sub_82116CD0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,664
	ctx.r3.s64 = ctx.r31.s64 + 664;
	// bl 0x8211e710
	ctx.lr = 0x8211CA54;
	sub_8211E710(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,608(r31)
	REX_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
loc_8211CA5C:
	// stw r30,452(r31)
	REX_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r30,456(r31)
	REX_STORE_U32(ctx.r31.u32 + 456, ctx.r30.u32);
	// stw r30,464(r31)
	REX_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_8211E1C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8211E1C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,524(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 524);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e1e8
	if (ctx.cr6.eq) goto loc_8211E1E8;
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8211e1ec
	goto loc_8211E1EC;
loc_8211E1E8:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_8211E1EC:
	// stw r29,456(r30)
	REX_STORE_U32(ctx.r30.u32 + 456, ctx.r29.u32);
	// addi r28,r30,456
	ctx.r28.s64 = ctx.r30.s64 + 456;
	// stw r29,460(r30)
	REX_STORE_U32(ctx.r30.u32 + 460, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,464(r30)
	REX_STORE_U32(ctx.r30.u32 + 464, ctx.r29.u32);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e27c
	if (ctx.cr6.eq) goto loc_8211E27C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm. r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r26,r11,23,9,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,465(r30)
	REX_STORE_U8(ctx.r30.u32 + 465, ctx.r10.u8);
	// bne 0x8211e238
	if (!ctx.cr0.eq) goto loc_8211E238;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8211e238
	if (ctx.cr6.eq) goto loc_8211E238;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// stb r11,465(r30)
	REX_STORE_U8(ctx.r30.u32 + 465, ctx.r11.u8);
loc_8211E238:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8211e260
	if (ctx.cr6.eq) goto loc_8211E260;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// rlwinm r10,r11,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x3;
	// rlwinm r27,r11,23,9,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7FFFFF;
	// stb r10,464(r30)
	REX_STORE_U8(ctx.r30.u32 + 464, ctx.r10.u8);
	// b 0x8211e268
	goto loc_8211E268;
loc_8211E260:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,464(r30)
	REX_STORE_U8(ctx.r30.u32 + 464, ctx.r11.u8);
loc_8211E268:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8211e278
	if (!ctx.cr6.eq) goto loc_8211E278;
	// li r11,254
	ctx.r11.s64 = 254;
loc_8211E278:
	// stb r11,466(r30)
	REX_STORE_U8(ctx.r30.u32 + 466, ctx.r11.u8);
loc_8211E27C:
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 448);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8211e2f8
	if (!ctx.cr6.gt) goto loc_8211E2F8;
loc_8211E288:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e2d8
	if (ctx.cr6.eq) goto loc_8211E2D8;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8211d818
	ctx.lr = 0x8211E2A8;
	sub_8211D818(ctx, base);
	// stw r3,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,4(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// beq cr6,0x8211e2d0
	if (ctx.cr6.eq) goto loc_8211E2D0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x8211d818
	ctx.lr = 0x8211E2CC;
	sub_8211D818(ctx, base);
	// b 0x8211e2d4
	goto loc_8211E2D4;
loc_8211E2D0:
	// bl 0x8211d8f8
	ctx.lr = 0x8211E2D4;
	sub_8211D8F8(ctx, base);
loc_8211E2D4:
	// stw r3,460(r30)
	REX_STORE_U32(ctx.r30.u32 + 460, ctx.r3.u32);
loc_8211E2D8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8211b9f0
	ctx.lr = 0x8211E2E8;
	sub_8211B9F0(ctx, base);
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 448);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211e288
	if (ctx.cr6.lt) goto loc_8211E288;
loc_8211E2F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120AF8) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82120a98
	sub_82120A98(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82120FA0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82120FA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120FD0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x821315f0
	ctx.lr = 0x82120FE0;
	sub_821315F0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82120FF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82121F50) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82121f84
	if (ctx.cr6.eq) goto loc_82121F84;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82121fe0
	goto loc_82121FE0;
loc_82121F84:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8215ec60
	ctx.lr = 0x82121F9C;
	sub_8215EC60(ctx, base);
	// lis r11,-32238
	ctx.r11.s64 = -2112749568;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// stw r30,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// li r9,52
	ctx.r9.s64 = 52;
	// stw r31,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// addi r11,r11,4432
	ctx.r11.s64 = ctx.r11.s64 + 4432;
	// addi r10,r10,-6408
	ctx.r10.s64 = ctx.r10.s64 + -6408;
	// stw r9,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8215de10
	ctx.lr = 0x82121FD0;
	sub_8215DE10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82121fe0
	if (ctx.cr0.lt) goto loc_82121FE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82121FE0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

DEFINE_REX_FUNC(sub_821236B0) {
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
	// addi r11,r11,10088
	ctx.r11.s64 = ctx.r11.s64 + 10088;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82135650
	ctx.lr = 0x821236DC;
	sub_82135650(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821236ec
	if (ctx.cr0.eq) goto loc_821236EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x821236EC;
	sub_82118BC8(ctx, base);
loc_821236EC:
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

DEFINE_REX_FUNC(sub_82125130) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-29656
	ctx.r4.s64 = ctx.r11.s64 + -29656;
	// bl 0x82136d08
	ctx.lr = 0x82125150;
	sub_82136D08(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10288
	ctx.r10.s64 = ctx.r10.s64 + 10288;
	// addi r9,r9,10268
	ctx.r9.s64 = ctx.r9.s64 + 10268;
	// stw r11,184(r31)
	REX_STORE_U32(ctx.r31.u32 + 184, ctx.r11.u32);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r11,188(r31)
	REX_STORE_U32(ctx.r31.u32 + 188, ctx.r11.u32);
	// addi r3,r10,-17520
	ctx.r3.s64 = ctx.r10.s64 + -17520;
	// stw r11,192(r31)
	REX_STORE_U32(ctx.r31.u32 + 192, ctx.r11.u32);
	// stw r11,196(r31)
	REX_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// stw r11,200(r31)
	REX_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// stw r11,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r11.u32);
	// stw r11,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	REX_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	REX_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	REX_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// stw r11,224(r31)
	REX_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// stw r11,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r11.u32);
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
	// bl 0x82115fc8
	ctx.lr = 0x821251C8;
	sub_82115FC8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821251D8;
	sub_8215EC60(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821251E8;
	sub_8215EC60(ctx, base);
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8215ec60
	ctx.lr = 0x821251F8;
	sub_8215EC60(ctx, base);
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

DEFINE_REX_FUNC(sub_82127478) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82127480;
	__savegprlr_26(ctx, base);
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
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821274B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82126900
	ctx.lr = 0x821274CC;
	sub_82126900(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82126f58
	ctx.lr = 0x821274D8;
	sub_82126F58(ctx, base);
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
	ctx.lr = 0x821274F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212A140) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,316(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212a164
	if (ctx.cr6.eq) goto loc_8212A164;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x8212a164
	if (!ctx.cr6.gt) goto loc_8212A164;
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// blr 
	return;
loc_8212A164:
	// lwz r10,324(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r10,332(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r9,340(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 340);
	// mullw r8,r10,r3
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r3.s32);
	// lwz r7,328(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 328);
	// subf r6,r9,r8
	ctx.r6.u64 = ctx.r8.u64 - ctx.r9.u64;
	// divw r11,r6,r7
	ctx.r11.u64 = uint32_t((ctx.r7.s32 && !(ctx.r6.s32 == INT32_MIN && ctx.r7.s32 == -1)) ? ctx.r6.s32 / ctx.r7.s32 : 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8212D130) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212d158
	if (ctx.cr6.eq) goto loc_8212D158;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8212d158
	if (!ctx.cr6.eq) goto loc_8212D158;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r10,-14584
	ctx.r9.s64 = ctx.r10.s64 + -14584;
	// b 0x8212d160
	goto loc_8212D160;
loc_8212D158:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r10,-18952
	ctx.r9.s64 = ctx.r10.s64 + -18952;
loc_8212D160:
	// stw r9,504(r3)
	REX_STORE_U32(ctx.r3.u32 + 504, ctx.r9.u32);
	// lhz r10,34(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8212d224
	if (ctx.cr6.eq) goto loc_8212D224;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8212D174:
	// lwz r9,320(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// mulli r10,r7,1776
	ctx.r10.s64 = static_cast<int64_t>(ctx.r7.u64 * static_cast<uint64_t>(1776));
	// lwz r8,280(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x8212d1f0
	if (!ctx.cr6.eq) goto loc_8212D1F0;
	// lwz r10,448(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8212d1a8
	if (ctx.cr6.eq) goto loc_8212D1A8;
	// lwz r10,456(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// lwz r8,256(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// b 0x8212d1ac
	goto loc_8212D1AC;
loc_8212D1A8:
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
loc_8212D1AC:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r8.u32);
	// lwz r6,448(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 448);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r10,256(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 256);
	// beq cr6,0x8212d1d8
	if (ctx.cr6.eq) goto loc_8212D1D8;
	// lwz r8,456(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 456);
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
loc_8212D1D8:
	// mullw r10,r7,r10
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// lwz r8,436(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 436);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r8,148(r9)
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r8.u32);
	// b 0x8212d210
	goto loc_8212D210;
loc_8212D1F0:
	// lwz r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r6,4(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,52(r9)
	REX_STORE_U32(ctx.r9.u32 + 52, ctx.r6.u32);
	// lwz r8,320(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 320);
	// add r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r4,4(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// stw r4,148(r9)
	REX_STORE_U32(ctx.r9.u32 + 148, ctx.r4.u32);
loc_8212D210:
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// lhz r9,34(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 34);
	// extsh r7,r10
	ctx.r7.s64 = ctx.r10.s16;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8212d174
	if (ctx.cr6.lt) goto loc_8212D174;
loc_8212D224:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82130380) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82130388;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,32000
	ctx.r11.s64 = 32000;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// subfc r10,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r10.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,5
	ctx.r29.s64 = ctx.r11.s64 + 5;
	// bl 0x8214f720
	ctx.lr = 0x821303BC;
	sub_8214F720(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821303cc
	if (!ctx.cr6.eq) goto loc_821303CC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_821303CC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x821303f8
	if (!ctx.cr6.eq) goto loc_821303F8;
	// lbz r11,7(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// mullw r10,r11,r3
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// divwu r9,r31,r10
	ctx.r9.u64 = uint32_t(ctx.r10.u32 ? ctx.r31.u32 / ctx.r10.u32 : 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x821303f8
	if (!ctx.cr6.lt) goto loc_821303F8;
	// mullw r11,r3,r29
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r29.s32);
	// divwu r3,r31,r11
	ctx.r3.u64 = uint32_t(ctx.r11.u32 ? ctx.r31.u32 / ctx.r11.u32 : 0);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_821303F8:
	// lbz r3,7(r30)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r30.u32 + 7);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82131698) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x821316a8
	if (ctx.cr6.eq) goto loc_821316A8;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821316b8
	goto loc_821316B8;
loc_821316A8:
	// lwz r11,572(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
loc_821316B8:
	// stw r11,572(r3)
	REX_STORE_U32(ctx.r3.u32 + 572, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82131BA0) {
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
	// lwz r10,128(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 128);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x82131be0
	if (!ctx.cr6.eq) goto loc_82131BE0;
	// std r9,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.r9.u64);
	// std r9,8(r4)
	REX_STORE_U64(ctx.r4.u32 + 8, ctx.r9.u64);
	// std r9,16(r4)
	REX_STORE_U64(ctx.r4.u32 + 16, ctx.r9.u64);
	// std r9,24(r4)
	REX_STORE_U64(ctx.r4.u32 + 24, ctx.r9.u64);
	// std r9,32(r4)
	REX_STORE_U64(ctx.r4.u32 + 32, ctx.r9.u64);
	// b 0x82131cb8
	goto loc_82131CB8;
loc_82131BE0:
	// lwz r10,664(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 664);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82131c88
	if (!ctx.cr6.eq) goto loc_82131C88;
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// addi r6,r11,656
	ctx.r6.s64 = ctx.r11.s64 + 656;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r10,576
	ctx.r8.s64 = ctx.r10.s64 + 576;
	// std r9,576(r10)
	REX_STORE_U64(ctx.r10.u32 + 576, ctx.r9.u64);
	// std r9,584(r10)
	REX_STORE_U64(ctx.r10.u32 + 584, ctx.r9.u64);
	// std r9,592(r10)
	REX_STORE_U64(ctx.r10.u32 + 592, ctx.r9.u64);
	// std r9,600(r10)
	REX_STORE_U64(ctx.r10.u32 + 600, ctx.r9.u64);
	// std r9,608(r10)
	REX_STORE_U64(ctx.r10.u32 + 608, ctx.r9.u64);
loc_82131C18:
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// xori r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 ^ 1;
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// mulli r7,r8,40
	ctx.r7.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(40));
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r8,r8,576
	ctx.r8.s64 = ctx.r8.s64 + 576;
	// addi r10,r10,576
	ctx.r10.s64 = ctx.r10.s64 + 576;
loc_82131C38:
	// mfmsr r4
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r4.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r5.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r5,r8
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82131c5c
	if (!ctx.cr6.eq) goto loc_82131C5C;
	// stwcx. r10,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82131c38
	if (!ctx.cr0.eq) goto loc_82131C38;
	// b 0x82131c64
	goto loc_82131C64;
loc_82131C5C:
	// stwcx. r5,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r5.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_82131C64:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwsync 
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82131c7c
	if (!ctx.cr6.eq) goto loc_82131C7C;
	// db16cyc 
	// b 0x82131c18
	goto loc_82131C18;
loc_82131C7C:
	// lwz r10,660(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,660(r11)
	REX_STORE_U32(ctx.r11.u32 + 660, ctx.r10.u32);
loc_82131C88:
	// lwz r8,660(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 660);
	// li r10,5
	ctx.r10.s64 = 5;
	// addi r7,r31,-8
	ctx.r7.s64 = ctx.r31.s64 + -8;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// mulli r8,r8,40
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(40));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r10,r10,568
	ctx.r10.s64 = ctx.r10.s64 + 568;
loc_82131CA8:
	// ldu r8,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r8.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r8,8(r7)
	ea = 8 + ctx.r7.u32;
	REX_STORE_U64(ea, ctx.r8.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x82131ca8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82131CA8;
	// stw r9,664(r11)
	REX_STORE_U32(ctx.r11.u32 + 664, ctx.r9.u32);
loc_82131CB8:
	// mftb r10
	ctx.r10.u64 = REX_QUERY_TIMEBASE();
	// ld r8,672(r11)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r11.u32 + 672);
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r7,-32189
	ctx.r7.s64 = -2109538304;
	// subf r9,r8,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r8.u64;
	// addi r3,r7,-17520
	ctx.r3.s64 = ctx.r7.s64 + -17520;
	// std r9,8(r31)
	REX_STORE_U64(ctx.r31.u32 + 8, ctx.r9.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r10,672(r11)
	REX_STORE_U64(ctx.r11.u32 + 672, ctx.r10.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x821316c0
	ctx.lr = 0x82131CE8;
	sub_821316C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82134488) {
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
	// lwz r3,12(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821344B4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x821344cc
	if (ctx.cr6.eq) goto loc_821344CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x821344CC;
	sub_82118BC8(ctx, base);
loc_821344CC:
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

DEFINE_REX_FUNC(sub_82134CC8) {
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
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82134cf4
	if (!ctx.cr6.eq) goto loc_82134CF4;
	// lwz r5,16(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,24(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x8211fdf8
	ctx.lr = 0x82134CF4;
	sub_8211FDF8(ctx, base);
loc_82134CF4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823752b4
	ctx.lr = 0x82134D0C;
	__imp__KeSetEvent(ctx, base);
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

DEFINE_REX_FUNC(sub_82136670) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82136678;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821366c8
	if (ctx.cr6.eq) goto loc_821366C8;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// subf r27,r7,r5
	ctx.r27.u64 = ctx.r5.u64 - ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
loc_8213669C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821366bc
	if (ctx.cr0.eq) goto loc_821366BC;
	// lwzx r3,r27,r30
	ctx.r3.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r30.u32);
	// bl 0x82135410
	ctx.lr = 0x821366B4;
	sub_82135410(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82135410
	ctx.lr = 0x821366BC;
	sub_82135410(ctx, base);
loc_821366BC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x8213669c
	if (!ctx.cr0.eq) goto loc_8213669C;
loc_821366C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r21,1
	ctx.r21.s64 = 1;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// lwz r11,1048(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1048);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8213674c
	if (!ctx.cr6.eq) goto loc_8213674C;
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lhz r29,2(r11)
	ctx.r29.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r27,2(r10)
	ctx.r27.u64 = REX_LOAD_U16(ctx.r10.u32 + 2);
	// mullw r11,r27,r29
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8216b018
	ctx.lr = 0x82136708;
	sub_8216B018(ctx, base);
	// mr. r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r7,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// bne 0x8213675c
	if (!ctx.cr0.eq) goto loc_8213675C;
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// ori r22,r22,14
	ctx.r22.u64 = ctx.r22.u64 | 14;
loc_8213671C:
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82136734
	if (ctx.cr6.eq) goto loc_82136734;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// bl 0x8216b138
	ctx.lr = 0x82136730;
	sub_8216B138(ctx, base);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
loc_82136734:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r26,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r26,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x82136750
	if (ctx.cr6.lt) goto loc_82136750;
loc_8213674C:
	// stw r21,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r21.u32);
loc_82136750:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
loc_8213675C:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lhz r24,14(r11)
	ctx.r24.u64 = REX_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82136780
	if (!ctx.cr6.eq) goto loc_82136780;
	// lwz r9,20(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lhz r23,18(r11)
	ctx.r23.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
loc_82136780:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lhz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,65534
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 65534, ctx.xer);
	// bne cr6,0x82136798
	if (!ctx.cr6.eq) goto loc_82136798;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_82136798:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r8,r11,-25312
	ctx.r8.s64 = ctx.r11.s64 + -25312;
	// bne cr6,0x821367cc
	if (!ctx.cr6.eq) goto loc_821367CC;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821367cc
	if (ctx.cr6.lt) goto loc_821367CC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821367cc
	if (ctx.cr6.gt) goto loc_821367CC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_821367CC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821367f8
	if (!ctx.cr6.eq) goto loc_821367F8;
	// clrlwi r11,r27,16
	ctx.r11.u64 = ctx.r27.u32 & 0xFFFF;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821367f8
	if (ctx.cr6.lt) goto loc_821367F8;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x821367f8
	if (ctx.cr6.gt) goto loc_821367F8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
loc_821367F8:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821361a0
	ctx.lr = 0x8213680C;
	sub_821361A0(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// blt 0x8213671c
	if (ctx.cr0.lt) goto loc_8213671C;
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r26,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x821368a4
	if (!ctx.cr6.eq) goto loc_821368A4;
	// li r30,7
	ctx.r30.s64 = 7;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821368a4
	if (ctx.cr6.eq) goto loc_821368A4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lfs f0,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f0.f64 = double(temp.f32);
loc_82136840:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82136894
	if (ctx.cr6.eq) goto loc_82136894;
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82136854:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82136878
	if (ctx.cr6.eq) goto loc_82136878;
	// lfsx f13,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x8213688c
	if (ctx.cr6.eq) goto loc_8213688C;
	// rlwinm r30,r30,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x8213688c
	goto loc_8213688C;
loc_82136878:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r10
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x8213688c
	if (ctx.cr6.eq) goto loc_8213688C;
	// rlwinm r30,r30,0,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFE;
loc_8213688C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82136854
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82136854;
loc_82136894:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmplw cr6,r8,r27
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82136840
	if (ctx.cr6.lt) goto loc_82136840;
loc_821368A4:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821368c0
	if (ctx.cr0.eq) goto loc_821368C0;
	// lis r4,8343
	ctx.r4.s64 = 546766848;
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8216b138
	ctx.lr = 0x821368B8;
	sub_8216B138(ctx, base);
	// stw r26,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// stw r21,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
loc_821368C0:
	// lwz r3,0(r25)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82135410
	ctx.lr = 0x821368C8;
	sub_82135410(ctx, base);
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82136994
	if (!ctx.cr6.eq) goto loc_82136994;
	// clrlwi r11,r24,16
	ctx.r11.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82136930
	if (!ctx.cr6.eq) goto loc_82136930;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82136908
	if (!ctx.cr6.eq) goto loc_82136908;
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x8213b9b8
	ctx.lr = 0x82136900;
	sub_8213B9B8(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x821369a0
	goto loc_821369A0;
loc_82136908:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82136920
	if (!ctx.cr6.eq) goto loc_82136920;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x8213b9b8
	ctx.lr = 0x82136918;
	sub_8213B9B8(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x821369a0
	goto loc_821369A0;
loc_82136920:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8213b9b8
	ctx.lr = 0x82136928;
	sub_8213B9B8(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x821369a0
	goto loc_821369A0;
loc_82136930:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82136964
	if (!ctx.cr6.eq) goto loc_82136964;
	// clrlwi r11,r23,16
	ctx.r11.u64 = ctx.r23.u32 & 0xFFFF;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x82136954
	if (!ctx.cr6.eq) goto loc_82136954;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8213b9b8
	ctx.lr = 0x8213694C;
	sub_8213B9B8(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x821369a0
	goto loc_821369A0;
loc_82136954:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x8213b9b8
	ctx.lr = 0x8213695C;
	sub_8213B9B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x821369a0
	goto loc_821369A0;
loc_82136964:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82136980
	if (!ctx.cr6.eq) goto loc_82136980;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8213b9b8
	ctx.lr = 0x82136974;
	sub_8213B9B8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r21,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r21.u32);
	// b 0x8213674c
	goto loc_8213674C;
loc_82136980:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8213b9b8
	ctx.lr = 0x82136988;
	sub_8213B9B8(ctx, base);
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r26,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// b 0x8213674c
	goto loc_8213674C;
loc_82136994:
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x8213b9b8
	ctx.lr = 0x8213699C;
	sub_8213B9B8(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
loc_821369A0:
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x8213674c
	goto loc_8213674C;
}

DEFINE_REX_FUNC(sub_82140370) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,28(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,32(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r6,8(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r5,12(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// stw r10,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stw r9,-16(r1)
	REX_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lfs f7,-16(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f7.f64 = double(temp.f32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f11,0(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,4(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f13,0(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,4(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,24(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f12,4(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8214044c
	if (ctx.cr6.eq) goto loc_8214044C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subf r9,r9,r10
	ctx.r9.u64 = ctx.r10.u64 - ctx.r9.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r8,12
	ctx.r8.s64 = 12;
loc_821403D4:
	// lfs f9,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r9,r11
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fsubs f5,f8,f10
	ctx.f5.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fnmsubs f9,f7,f13,f6
	ctx.f9.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f13.f64, -ctx.f6.f64)));
	// fnmsubs f8,f7,f12,f5
	ctx.f8.f64 = double(float(-std::fma(ctx.f7.f64, ctx.f12.f64, -ctx.f5.f64)));
	// fmadds f13,f9,f0,f13
	ctx.f13.f64 = double(float(std::fma(ctx.f9.f64, ctx.f0.f64, ctx.f13.f64)));
	// fmadds f12,f8,f0,f12
	ctx.f12.f64 = double(float(std::fma(ctx.f8.f64, ctx.f0.f64, ctx.f12.f64)));
	// fmadds f11,f13,f0,f11
	ctx.f11.f64 = double(float(std::fma(ctx.f13.f64, ctx.f0.f64, ctx.f11.f64)));
	// fmadds f10,f12,f0,f10
	ctx.f10.f64 = double(float(std::fma(ctx.f12.f64, ctx.f0.f64, ctx.f10.f64)));
	// dcbt r11,r8
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82140414
	if (!ctx.cr6.eq) goto loc_82140414;
	// stfs f11,-4(r11)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82140440
	goto loc_82140440;
loc_82140414:
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82140438
	if (ctx.cr6.eq) goto loc_82140438;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82140430
	if (!ctx.cr6.eq) goto loc_82140430;
	// stfs f13,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// b 0x82140440
	goto loc_82140440;
loc_82140430:
	// fadds f9,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fadds f8,f10,f8
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
loc_82140438:
	// stfs f8,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f9,-4(r11)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r11.u32 + -4, temp.u32);
loc_82140440:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x821403d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821403D4;
loc_8214044C:
	// stfs f11,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// stfs f10,4(r6)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// stfs f12,4(r5)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82141808) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82141810;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,468(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,388(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x821418e0
	if (ctx.cr6.lt) goto loc_821418E0;
	// lwz r11,460(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 460);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82141844
	if (ctx.cr6.eq) goto loc_82141844;
	// lwz r11,256(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 256);
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// sraw r11,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r11.s64 = ctx.r11.s32 >> temp.u32;
	// b 0x8214185c
	goto loc_8214185C;
loc_82141844:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// beq cr6,0x8214185c
	if (ctx.cr6.eq) goto loc_8214185C;
	// lwz r9,456(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_8214185C:
	// lhz r9,34(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// srawi r29,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r10.s32 >> 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821418c4
	if (ctx.cr6.eq) goto loc_821418C4;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r28,r29,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r26,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 1;
loc_82141888:
	// mullw r11,r27,r30
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r30.s32);
	// lwz r9,324(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r8,468(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// subf r10,r29,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r29.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r26
	ctx.r7.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x8215e640
	ctx.lr = 0x821418B4;
	sub_8215E640(ctx, base);
	// lhz r6,34(r31)
	ctx.r6.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82141888
	if (ctx.cr6.lt) goto loc_82141888;
loc_821418C4:
	// lwz r11,468(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 468);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// lwz r9,392(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// subf r8,r11,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subf r7,r11,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r11.u64;
	// stw r8,388(r31)
	REX_STORE_U32(ctx.r31.u32 + 388, ctx.r8.u32);
	// stw r7,392(r31)
	REX_STORE_U32(ctx.r31.u32 + 392, ctx.r7.u32);
loc_821418E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82143B50) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,2104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82143b68
	if (!ctx.cr6.gt) goto loc_82143B68;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// b 0x82143b6c
	goto loc_82143B6C;
loc_82143B68:
	// fneg f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82143B6C:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// ble cr6,0x82143b7c
	if (!ctx.cr6.gt) goto loc_82143B7C;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
	// b 0x82143b80
	goto loc_82143B80;
loc_82143B7C:
	// fneg f0,f2
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_82143B80:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82143ba0
	if (!ctx.cr6.gt) goto loc_82143BA0;
	// fcmpu cr6,f1,f12
	ctx.cr6.compare(ctx.f1.f64, ctx.f12.f64);
	// ble cr6,0x82143b98
	if (!ctx.cr6.gt) goto loc_82143B98;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x82143bac
	goto loc_82143BAC;
loc_82143B98:
	// fneg f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// b 0x82143bac
	goto loc_82143BAC;
loc_82143BA0:
	// fcmpu cr6,f2,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// bgt cr6,0x82143bac
	if (ctx.cr6.gt) goto loc_82143BAC;
	// fneg f2,f2
	ctx.f2.u64 = ctx.f2.u64 ^ 0x8000000000000000;
loc_82143BAC:
	// lfs f0,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82143bd8
	if (ctx.cr6.lt) goto loc_82143BD8;
	// lfs f0,140(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f2,f0
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// lfs f12,144(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fmadds f9,f10,f13,f11
	ctx.f9.f64 = double(float(std::fma(ctx.f10.f64, ctx.f13.f64, ctx.f11.f64)));
	// fdivs f1,f9,f2
	ctx.f1.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// b 0x82143c08
	goto loc_82143C08;
loc_82143BD8:
	// lfs f1,108(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,112(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82143bf8
	if (ctx.cr6.gt) goto loc_82143BF8;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82143BF8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,2220(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2220);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82143C08:
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82143c20
	if (ctx.cr6.gt) goto loc_82143C20;
	// lfs f13,116(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,120(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82143c28
	goto loc_82143C28;
loc_82143C20:
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,128(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
loc_82143C28:
	// fmuls f12,f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fmadds f10,f11,f0,f12
	ctx.f10.f64 = double(float(std::fma(ctx.f11.f64, ctx.f0.f64, ctx.f12.f64)));
	// stfs f10,112(r3)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
	// fmuls f13,f10,f2
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// lfs f0,104(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82143c50
	if (!ctx.cr6.gt) goto loc_82143C50;
	// fdivs f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f2.f64));
	// stfs f0,112(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 112, temp.u32);
loc_82143C50:
	// lfs f1,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82145BD0) {
	REX_FUNC_PROLOGUE();
	// xoris r10,r10,43894
	ctx.r10.u64 = ctx.r10.u64 ^ 2876637184;
	// xori r10,r10,14558
	ctx.r10.u64 = ctx.r10.u64 ^ 14558;
	// b 0x82145948
	sub_82145948(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82146058) {
	REX_FUNC_PROLOGUE();
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r11,34(r8)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mulli r6,r4,28
	ctx.r6.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(28));
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82146078:
	// lwz r9,320(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 320);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1776
	ctx.r11.s64 = ctx.r11.s64 + 1776;
	// lwz r9,424(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 424);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lwz r5,12(r9)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r7,0(r9)
	REX_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// sth r7,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r7.u16);
	// lhz r4,34(r8)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r8.u32 + 34);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82146078
	if (ctx.cr6.lt) goto loc_82146078;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82148348) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x82148350;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148390
	if (ctx.cr6.eq) goto loc_82148390;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82148390
	if (ctx.cr6.gt) goto loc_82148390;
	// lis r26,-32764
	ctx.r26.s64 = -2147221504;
	// ori r26,r26,2
	ctx.r26.u64 = ctx.r26.u64 | 2;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_82148390:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821483a0
	if (!ctx.cr6.eq) goto loc_821483A0;
	// stw r25,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r25.u32);
loc_821483A0:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821488fc
	if (ctx.cr6.eq) goto loc_821488FC;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,11
	ctx.r23.s64 = 11;
	// li r17,3
	ctx.r17.s64 = 3;
	// li r21,4
	ctx.r21.s64 = 4;
	// li r18,5
	ctx.r18.s64 = 5;
	// li r19,6
	ctx.r19.s64 = 6;
	// li r20,7
	ctx.r20.s64 = 7;
	// li r22,9
	ctx.r22.s64 = 9;
loc_821483CC:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x821488f0
	if (ctx.cr6.gt) goto loc_821488F0;
	// lis r12,-32235
	ctx.r12.s64 = -2112552960;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-31756
	ctx.r12.s64 = ctx.r12.s64 + -31756;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821485B8;
	case 1:
		goto loc_82148420;
	case 2:
		goto loc_8214860C;
	case 3:
		goto loc_82148638;
	case 4:
		goto loc_82148650;
	case 5:
		goto loc_82148688;
	case 6:
		goto loc_821486D4;
	case 7:
		goto loc_82148710;
	case 8:
		goto loc_82148760;
	case 9:
		goto loc_82148794;
	case 10:
		goto loc_821487E4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_82148420:
	// lwz r11,216(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148598
	if (ctx.cr6.eq) goto loc_82148598;
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82148598
	if (ctx.cr6.gt) goto loc_82148598;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8214845c
	if (!ctx.cr6.gt) goto loc_8214845C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8214844C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r9,r11,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8214844c
	if (ctx.cr6.gt) goto loc_8214844C;
loc_8214845C:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82148478
	if (!ctx.cr6.gt) goto loc_82148478;
loc_82148468:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x82148468
	if (ctx.cr6.gt) goto loc_82148468;
loc_82148478:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// addi r29,r27,224
	ctx.r29.s64 = ctx.r27.s64 + 224;
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8214fab0
	ctx.lr = 0x8214848C;
	sub_8214FAB0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82145d70
	ctx.lr = 0x821484A8;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// slw r9,r24,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// divw r8,r10,r9
	ctx.r8.u64 = uint32_t((ctx.r9.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r9.s32 == -1)) ? ctx.r10.s32 / ctx.r9.s32 : 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// bl 0x82145d70
	ctx.lr = 0x821484D8;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// lwz r10,256(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// slw r8,r24,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r9,236(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// divw r7,r10,r8
	ctx.r7.u64 = uint32_t((ctx.r8.s32 && !(ctx.r10.s32 == INT32_MIN && ctx.r8.s32 == -1)) ? ctx.r10.s32 / ctx.r8.s32 : 0);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// blt cr6,0x82148930
	if (ctx.cr6.lt) goto loc_82148930;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82148930
	if (ctx.cr6.gt) goto loc_82148930;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82148930
	if (ctx.cr6.lt) goto loc_82148930;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82148930
	if (ctx.cr6.gt) goto loc_82148930;
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82148590
	if (ctx.cr6.eq) goto loc_82148590;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82148534:
	// lwz r11,320(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 320);
	// mulli r9,r10,1776
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(1776));
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// lwz r7,424(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r6,8(r7)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// sth r30,-2(r6)
	REX_STORE_U16(ctx.r6.u32 + -2, ctx.r30.u16);
	// lwz r5,424(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// sth r25,0(r5)
	REX_STORE_U16(ctx.r5.u32 + 0, ctx.r25.u16);
	// lwz r4,424(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r3,8(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// sth r8,0(r3)
	REX_STORE_U16(ctx.r3.u32 + 0, ctx.r8.u16);
	// lwz r9,424(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lwz r7,12(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// sth r25,0(r7)
	REX_STORE_U16(ctx.r7.u32 + 0, ctx.r25.u16);
	// lwz r6,424(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 424);
	// lhz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r6.u32 + 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// sth r4,0(r6)
	REX_STORE_U16(ctx.r6.u32 + 0, ctx.r4.u16);
	// lhz r11,34(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 34);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82148534
	if (ctx.cr6.lt) goto loc_82148534;
loc_82148590:
	// stw r23,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r23.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_82148598:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82148590
	if (!ctx.cr6.gt) goto loc_82148590;
	// stw r24,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r24.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82146058
	ctx.lr = 0x821485B4;
	sub_82146058(ctx, base);
	// b 0x821488f0
	goto loc_821488F0;
loc_821485B8:
	// lwz r11,600(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148608
	if (ctx.cr6.eq) goto loc_82148608;
	// addi r30,r31,608
	ctx.r30.s64 = ctx.r31.s64 + 608;
	// lwz r4,616(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// addi r29,r27,224
	ctx.r29.s64 = ctx.r27.s64 + 224;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82145d70
	ctx.lr = 0x821485DC;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,704(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 704);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148608
	if (ctx.cr6.eq) goto loc_82148608;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,616(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 616);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x821457a8
	ctx.lr = 0x82148608;
	sub_821457A8(ctx, base);
loc_82148608:
	// stw r17,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r17.u32);
loc_8214860C:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82148630
	if (!ctx.cr6.gt) goto loc_82148630;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821460b0
	ctx.lr = 0x82148624;
	sub_821460B0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
loc_82148630:
	// stw r25,436(r27)
	REX_STORE_U32(ctx.r27.u32 + 436, ctx.r25.u32);
	// stw r21,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r21.u32);
loc_82148638:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8214e498
	ctx.lr = 0x82148640;
	sub_8214E498(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// stw r18,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r18.u32);
loc_82148650:
	// lwz r11,624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148680
	if (ctx.cr6.eq) goto loc_82148680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x8214866C;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stb r11,201(r31)
	REX_STORE_U8(ctx.r31.u32 + 201, ctx.r11.u8);
loc_82148680:
	// stw r19,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r19.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_82148688:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821486c4
	if (!ctx.cr6.gt) goto loc_821486C4;
	// stw r25,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x821486AC;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821486cc
	if (!ctx.cr6.eq) goto loc_821486CC;
loc_821486C4:
	// stw r23,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r23.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_821486CC:
	// stw r20,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r20.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_821486D4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x821486E4;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,372(r31)
	REX_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r8.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_82148710:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82148734
	if (!ctx.cr6.gt) goto loc_82148734;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82148724:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82148724
	if (ctx.cr6.gt) goto loc_82148724;
loc_82148734:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x82148744;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,376(r31)
	REX_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r22,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r22.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_82148760:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x82148770;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
	// stw r9,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r9.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_82148794:
	// lwz r11,252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x821487b8
	if (!ctx.cr6.gt) goto loc_821487B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_821487A8:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// srw r10,r11,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x821487a8
	if (ctx.cr6.gt) goto loc_821487A8;
loc_821487B8:
	// stw r25,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r27,224
	ctx.r3.s64 = ctx.r27.s64 + 224;
	// bl 0x82145d70
	ctx.lr = 0x821487C8;
	sub_82145D70(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82148918
	if (ctx.cr6.lt) goto loc_82148918;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,380(r31)
	REX_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// stw r23,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r23.u32);
	// b 0x821488f0
	goto loc_821488F0;
loc_821487E4:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x821488ec
	if (!ctx.cr6.gt) goto loc_821488EC;
	// lwz r11,160(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821488ec
	if (ctx.cr6.eq) goto loc_821488EC;
	// lwz r11,164(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821488ec
	if (!ctx.cr6.eq) goto loc_821488EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82144440
	ctx.lr = 0x82148810;
	sub_82144440(ctx, base);
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 184);
	// extsw r28,r3
	ctx.r28.s64 = ctx.r3.s32;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpd cr6,r28,r11
	ctx.cr6.compare<int64_t>(ctx.r28.s64, ctx.r11.s64, ctx.xer);
	// bgt cr6,0x821488e4
	if (ctx.cr6.gt) goto loc_821488E4;
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82148924
	if (ctx.cr6.eq) goto loc_82148924;
	// lwz r9,176(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82148924
	if (ctx.cr6.eq) goto loc_82148924;
	// lwz r11,444(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82148854
	if (ctx.cr6.eq) goto loc_82148854;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// srw r30,r10,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
	// b 0x82148870
	goto loc_82148870;
loc_82148854:
	// lwz r11,448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8214886c
	if (ctx.cr6.eq) goto loc_8214886C;
	// lwz r11,456(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 456);
	// slw r30,r10,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82148870
	goto loc_82148870;
loc_8214886C:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82148870:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821416a8
	ctx.lr = 0x8214887C;
	sub_821416A8(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 392);
	// lwz r10,388(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 388);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x821488a0
	if (!ctx.cr6.gt) goto loc_821488A0;
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x821488a4
	goto loc_821488A4;
loc_821488A0:
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821488A4:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x821488d8
	if (ctx.cr6.lt) goto loc_821488D8;
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x821488cc
	if (!ctx.cr6.lt) goto loc_821488CC;
	// ld r10,184(r27)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r27.u32 + 184);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// subf r8,r9,r10
	ctx.r8.u64 = ctx.r10.u64 - ctx.r9.u64;
	// std r8,184(r27)
	REX_STORE_U64(ctx.r27.u32 + 184, ctx.r8.u64);
	// b 0x821488d8
	goto loc_821488D8;
loc_821488CC:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 184);
	// subf r10,r28,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r28.u64;
	// std r10,184(r27)
	REX_STORE_U64(ctx.r27.u32 + 184, ctx.r10.u64);
loc_821488D8:
	// ld r11,184(r27)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r27.u32 + 184);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x821488e8
	if (!ctx.cr6.lt) goto loc_821488E8;
loc_821488E4:
	// std r25,184(r27)
	REX_STORE_U64(ctx.r27.u32 + 184, ctx.r25.u64);
loc_821488E8:
	// stw r25,160(r27)
	REX_STORE_U32(ctx.r27.u32 + 160, ctx.r25.u32);
loc_821488EC:
	// stw r25,52(r27)
	REX_STORE_U32(ctx.r27.u32 + 52, ctx.r25.u32);
loc_821488F0:
	// lwz r11,52(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821483cc
	if (!ctx.cr6.eq) goto loc_821483CC;
loc_821488FC:
	// lwz r11,176(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82148918
	if (!ctx.cr6.eq) goto loc_82148918;
	// lwz r11,256(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 256);
	// lwz r10,380(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 380);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// stw r9,384(r31)
	REX_STORE_U32(ctx.r31.u32 + 384, ctx.r9.u32);
loc_82148918:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_82148924:
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// std r11,184(r27)
	REX_STORE_U64(ctx.r27.u32 + 184, ctx.r11.u64);
	// b 0x821488e8
	goto loc_821488E8;
loc_82148930:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8215C150) {
	REX_FUNC_PROLOGUE();
	// lwz r3,96(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215C3B8) {
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
	// bl 0x8215c2f8
	ctx.lr = 0x8215C3D8;
	sub_8215C2F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8215c3e8
	if (ctx.cr0.eq) goto loc_8215C3E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x8215C3E8;
	sub_82118BC8(ctx, base);
loc_8215C3E8:
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

DEFINE_REX_FUNC(sub_8215D508) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x8215D510;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8215d650
	if (!ctx.cr6.eq) goto loc_8215D650;
loc_8215D53C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215d628
	if (ctx.cr6.eq) goto loc_8215D628;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8215D56C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d590
	if (!ctx.cr6.eq) goto loc_8215D590;
	// stdcx. r5,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d56c
	if (!ctx.cr0.eq) goto loc_8215D56C;
	// b 0x8215d598
	goto loc_8215D598;
loc_8215D590:
	// stdcx. r7,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D598:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d53c
	if (!ctx.cr6.eq) goto loc_8215D53C;
loc_8215D5A4:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r23,8(r3)
	REX_STORE_U64(ctx.r3.u32 + 8, ctx.r23.u64);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_8215D5C4:
	// ld r10,0(r7)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x8215d5c4
	if (!ctx.cr6.eq) goto loc_8215D5C4;
	// lwz r9,80(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x8215d90c
	if (!ctx.cr6.eq) goto loc_8215D90C;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_8215D604:
	// mfmsr r4
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r4.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r5,0,r6
	ea = ctx.r6.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d8c4
	if (!ctx.cr6.eq) goto loc_8215D8C4;
	// stdcx. r8,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d604
	if (!ctx.cr0.eq) goto loc_8215D604;
	// b 0x8215d8cc
	goto loc_8215D8CC;
loc_8215D628:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d644
	if (ctx.cr6.eq) goto loc_8215D644;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215c818
	ctx.lr = 0x8215D63C;
	sub_8215C818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d5a4
	if (!ctx.cr6.eq) goto loc_8215D5A4;
loc_8215D644:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_8215D650:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
loc_8215D65C:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = ctx.r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ea = ctx.r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d65c
	if (!ctx.cr0.eq) goto loc_8215D65C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8215d6ec
	if (ctx.cr6.lt) goto loc_8215D6EC;
loc_8215D680:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215d6ec
	if (ctx.cr6.eq) goto loc_8215D6EC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8215D6B0:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d6d4
	if (!ctx.cr6.eq) goto loc_8215D6D4;
	// stdcx. r5,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d6b0
	if (!ctx.cr0.eq) goto loc_8215D6B0;
	// b 0x8215d6dc
	goto loc_8215D6DC;
loc_8215D6D4:
	// stdcx. r7,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D6DC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d680
	if (!ctx.cr6.eq) goto loc_8215D680;
	// b 0x8215d5a4
	goto loc_8215D5A4;
loc_8215D6EC:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8215d708
	if (ctx.cr6.eq) goto loc_8215D708;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215c818
	ctx.lr = 0x8215D700;
	sub_8215C818(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d5a4
	if (!ctx.cr6.eq) goto loc_8215D5A4;
loc_8215D708:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8215d7b0
	if (ctx.cr6.eq) goto loc_8215D7B0;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_8215D714:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215D71C:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8215d71c
	if (!ctx.cr0.lt) goto loc_8215D71C;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x8215d738
	if (ctx.cr6.gt) goto loc_8215D738;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8215D738:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8215D73C:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215d7a8
	if (ctx.cr6.eq) goto loc_8215D7A8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8215D76C:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r7,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d790
	if (!ctx.cr6.eq) goto loc_8215D790;
	// stdcx. r5,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d76c
	if (!ctx.cr0.eq) goto loc_8215D76C;
	// b 0x8215d798
	goto loc_8215D798;
loc_8215D790:
	// stdcx. r7,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D798:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d73c
	if (!ctx.cr6.eq) goto loc_8215D73C;
	// b 0x8215d5a4
	goto loc_8215D5A4;
loc_8215D7A8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8215d714
	if (!ctx.cr0.eq) goto loc_8215D714;
loc_8215D7B0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d5a4
	if (!ctx.cr6.eq) goto loc_8215D5A4;
loc_8215D7B8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x8215d7e8
	if (ctx.cr6.eq) goto loc_8215D7E8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8215D7C8:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8215d7c8
	if (!ctx.cr0.lt) goto loc_8215D7C8;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x8215d7e4
	if (ctx.cr6.gt) goto loc_8215D7E4;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_8215D7E4:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8215D7E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8215d814
	if (!ctx.cr6.eq) goto loc_8215D814;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8215d804
	if (!ctx.cr6.eq) goto loc_8215D804;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x8215d82c
	goto loc_8215D82C;
loc_8215D804:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8215e1b8
	ctx.lr = 0x8215D810;
	sub_8215E1B8(ctx, base);
	// b 0x8215d82c
	goto loc_8215D82C;
loc_8215D814:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x8215D82C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215D82C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215d8a0
	if (!ctx.cr6.eq) goto loc_8215D8A0;
loc_8215D834:
	// ld r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8215d7b8
	if (ctx.cr6.eq) goto loc_8215D7B8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_8215D864:
	// mfmsr r7
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r7.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r31
	ea = ctx.r31.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d888
	if (!ctx.cr6.eq) goto loc_8215D888;
	// stdcx. r6,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d864
	if (!ctx.cr0.eq) goto loc_8215D864;
	// b 0x8215d890
	goto loc_8215D890;
loc_8215D888:
	// stdcx. r8,0,r31
	ea = ctx.r31.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D890:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d834
	if (!ctx.cr6.eq) goto loc_8215D834;
	// b 0x8215d5a4
	goto loc_8215D5A4;
loc_8215D8A0:
	// mfmsr r10
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r10.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r25
	ea = ctx.r25.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ea = ctx.r25.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d8a0
	if (!ctx.cr0.eq) goto loc_8215D8A0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
loc_8215D8C4:
	// stdcx. r5,0,r6
	ea = ctx.r6.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D8CC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x8215d5c4
	if (!ctx.cr6.eq) goto loc_8215D5C4;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8215D8E8:
	// mfmsr r6
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r6.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r8,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x8215d94c
	if (!ctx.cr6.eq) goto loc_8215D94C;
	// stdcx. r5,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d8e8
	if (!ctx.cr0.eq) goto loc_8215D8E8;
	// b 0x8215d954
	goto loc_8215D954;
loc_8215D90C:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8215D91C:
	// mfmsr r5
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r5.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// ldarx r6,0,r7
	ea = ctx.r7.u32;
	ctx.reserved.u64 = *(uint64_t*)REX_RAW_ADDR(ea);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x8215d940
	if (!ctx.cr6.eq) goto loc_8215D940;
	// stdcx. r4,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x8215d91c
	if (!ctx.cr0.eq) goto loc_8215D91C;
	// b 0x8215d5c4
	goto loc_8215D5C4;
loc_8215D940:
	// stdcx. r6,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// b 0x8215d5c4
	goto loc_8215D5C4;
loc_8215D94C:
	// stdcx. r8,0,r7
	ea = ctx.r7.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
loc_8215D954:
	// lwz r3,36(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215d974
	if (ctx.cr6.eq) goto loc_8215D974;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215d974
	if (!ctx.cr6.gt) goto loc_8215D974;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8215e160
	ctx.lr = 0x8215D974;
	sub_8215E160(ctx, base);
loc_8215D974:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savevmx_101) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_79) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(sub_821642D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x823753a4
	ctx.lr = 0x821642F4;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x8216432c
	goto loc_8216432C;
loc_8216432C:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82164AE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r3,r11,-23456
	ctx.r3.s64 = ctx.r11.s64 + -23456;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82164D60) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r3,20
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 20, ctx.xer);
	// bge cr6,0x82164d7c
	if (!ctx.cr6.lt) goto loc_82164D7C;
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,12(r4)
	REX_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// b 0x821642b0
	sub_821642B0(ctx, base);
	return;
loc_82164D7C:
	// addi r3,r4,32
	ctx.r3.s64 = ctx.r4.s64 + 32;
	// b 0x82375194
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82165380) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82165388;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	REX_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x821652a0
	ctx.lr = 0x821653A8;
	sub_821652A0(ctx, base);
	// lhz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// ld r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82168d88
	ctx.lr = 0x821653C4;
	sub_82168D88(ctx, base);
	// lbz r11,98(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// lha r10,96(r1)
	ctx.r10.s64 = int16_t(REX_LOAD_U16(ctx.r1.u32 + 96));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8215ef40
	ctx.lr = 0x821653EC;
	sub_8215EF40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82165404
	if (!ctx.cr0.eq) goto loc_82165404;
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82165404:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82160020
	ctx.lr = 0x8216541C;
	sub_82160020(ctx, base);
}

DEFINE_REX_FUNC(sub_821675F8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82167600;
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
	// addi r20,r10,-21260
	ctx.r20.s64 = ctx.r10.s64 + -21260;
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
	// bne cr6,0x82167688
	if (!ctx.cr6.eq) goto loc_82167688;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82167650:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82167670
	if (!ctx.cr6.eq) goto loc_82167670;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82167650
	if (ctx.cr6.lt) goto loc_82167650;
	// b 0x82167cbc
	goto loc_82167CBC;
loc_82167670:
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
	// b 0x82167cc0
	goto loc_82167CC0;
loc_82167688:
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
	// beq 0x821677d4
	if (ctx.cr0.eq) goto loc_821677D4;
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
	// bne 0x82167740
	if (!ctx.cr0.eq) goto loc_82167740;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x821677d4
	if (!ctx.cr6.lt) goto loc_821677D4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82167720:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82167740
	if (!ctx.cr6.eq) goto loc_82167740;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x82167720
	if (ctx.cr6.lt) goto loc_82167720;
	// b 0x821677d4
	goto loc_821677D4;
loc_82167740:
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
	// blt cr6,0x82167784
	if (ctx.cr6.lt) goto loc_82167784;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82167788
	if (!ctx.cr6.lt) goto loc_82167788;
loc_82167784:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82167788:
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt 0x821677d4
	if (ctx.cr0.lt) goto loc_821677D4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_821677A0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x821677d4
	if (ctx.cr6.eq) goto loc_821677D4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821677c4
	if (ctx.cr6.lt) goto loc_821677C4;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x821677c8
	if (!ctx.cr6.lt) goto loc_821677C8;
loc_821677C4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_821677C8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x821677a0
	if (!ctx.cr0.lt) goto loc_821677A0;
loc_821677D4:
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
	// bge cr6,0x8216781c
	if (!ctx.cr6.lt) goto loc_8216781C;
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
	// beq cr6,0x8216781c
	if (ctx.cr6.eq) goto loc_8216781C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82167814:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167814
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167814;
loc_8216781C:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82167828
	if (ctx.cr6.eq) goto loc_82167828;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82167828:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// subf r10,r25,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r25.u64;
	// cmpw cr6,r30,r10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82167854
	if (!ctx.cr6.lt) goto loc_82167854;
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
	// b 0x82167cc0
	goto loc_82167CC0;
loc_82167854:
	// li r10,3
	ctx.r10.s64 = 3;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bgt cr6,0x82167b3c
	if (ctx.cr6.gt) goto loc_82167B3C;
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
loc_821678BC:
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
	// bdnz 0x821678bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821678BC;
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
loc_821678FC:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82167910
	if (ctx.cr6.lt) goto loc_82167910;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82167914
	goto loc_82167914;
loc_82167910:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82167914:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x821678fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821678FC;
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
	// beq 0x82167a44
	if (ctx.cr0.eq) goto loc_82167A44;
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
	// bne 0x821679ac
	if (!ctx.cr0.eq) goto loc_821679AC;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x82167a44
	if (!ctx.cr6.lt) goto loc_82167A44;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-152
	ctx.r10.s64 = ctx.r1.s64 + -152;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_8216798C:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821679ac
	if (!ctx.cr6.eq) goto loc_821679AC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// blt cr6,0x8216798c
	if (ctx.cr6.lt) goto loc_8216798C;
	// b 0x82167a44
	goto loc_82167A44;
loc_821679AC:
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
	// blt cr6,0x821679f0
	if (ctx.cr6.lt) goto loc_821679F0;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x821679f4
	if (!ctx.cr6.lt) goto loc_821679F4;
loc_821679F0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_821679F4:
	// stwx r10,r7,r8
	REX_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt 0x82167a44
	if (ctx.cr0.lt) goto loc_82167A44;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-148
	ctx.r10.s64 = ctx.r1.s64 + -148;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82167A10:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82167a44
	if (ctx.cr6.eq) goto loc_82167A44;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82167a34
	if (ctx.cr6.lt) goto loc_82167A34;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bge cr6,0x82167a38
	if (!ctx.cr6.lt) goto loc_82167A38;
loc_82167A34:
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
loc_82167A38:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r8,-4(r10)
	ea = -4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bge 0x82167a10
	if (!ctx.cr0.lt) goto loc_82167A10;
loc_82167A44:
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
	// bge cr6,0x82167a8c
	if (!ctx.cr6.lt) goto loc_82167A8C;
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
	// beq cr6,0x82167a8c
	if (ctx.cr6.eq) goto loc_82167A8C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82167A84:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82167a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167A84;
loc_82167A8C:
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
loc_82167AC8:
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
	// bdnz 0x82167ac8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167AC8;
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
loc_82167B08:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82167b1c
	if (ctx.cr6.lt) goto loc_82167B1C;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82167b20
	goto loc_82167B20;
loc_82167B1C:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82167B20:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82167b08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167B08;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82167cc0
	goto loc_82167CC0;
loc_82167B3C:
	// lwz r5,0(r20)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmpw cr6,r30,r5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82167c0c
	if (ctx.cr6.lt) goto loc_82167C0C;
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
loc_82167B98:
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
	// bdnz 0x82167b98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167B98;
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
loc_82167BD8:
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82167bec
	if (ctx.cr6.lt) goto loc_82167BEC;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82167bf0
	goto loc_82167BF0;
loc_82167BEC:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82167BF0:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82167bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167BD8;
	// lwz r11,20(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 20);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// b 0x82167cc0
	goto loc_82167CC0;
loc_82167C0C:
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
loc_82167C54:
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
	// bdnz 0x82167c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167C54;
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
loc_82167C94:
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82167ca8
	if (ctx.cr6.lt) goto loc_82167CA8;
	// lwz r10,0(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82167cac
	goto loc_82167CAC;
loc_82167CA8:
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
loc_82167CAC:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82167c94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82167C94;
loc_82167CBC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
loc_82167CC0:
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
	// bne cr6,0x82167cfc
	if (!ctx.cr6.eq) goto loc_82167CFC;
	// lwz r11,-148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + -148);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// b 0x82167d04
	goto loc_82167D04;
loc_82167CFC:
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x82167d08
	if (!ctx.cr6.eq) goto loc_82167D08;
loc_82167D04:
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_82167D08:
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82180E90) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// stw r5,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82180060
	sub_82180060(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821812E8) {
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
	// lwz r10,56(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82181314
	if (!ctx.cr6.gt) goto loc_82181314;
	// bl 0x82181038
	ctx.lr = 0x82181310;
	sub_82181038(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82181314:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r4,10908(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 10908);
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x8217fee8
	ctx.lr = 0x82181340;
	sub_8217FEE8(ctx, base);
loc_82181340:
	// lwz r11,11012(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 11012);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82181340
	if (!ctx.cr6.eq) goto loc_82181340;
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

DEFINE_REX_FUNC(sub_82181E18) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82181c98
	ctx.lr = 0x82181E3C;
	sub_82181C98(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r10,r31,1022
	ctx.r10.s64 = ctx.r31.s64 + 1022;
	// addi r11,r30,512
	ctx.r11.s64 = ctx.r30.s64 + 512;
	// subf r8,r30,r31
	ctx.r8.u64 = ctx.r31.u64 - ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82181E50:
	// lhz r9,-1022(r10)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r10.u32 + -1022);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,-512(r11)
	REX_STORE_U16(ctx.r11.u32 + -512, ctx.r9.u16);
	// lhzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,0(r11)
	REX_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// lhzu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r9.u64 = REX_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// rlwinm r9,r9,27,5,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r9,r9,r3
	ctx.r9.u64 = REX_LOAD_U16(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r9,r9,6,16,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFC0;
	// sth r9,512(r11)
	REX_STORE_U16(ctx.r11.u32 + 512, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82181e50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82181E50;
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

DEFINE_REX_FUNC(sub_82183C70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82183C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mulli r11,r6,416
	ctx.r11.s64 = static_cast<int64_t>(ctx.r6.u64 * static_cast<uint64_t>(416));
	// add r28,r11,r4
	ctx.r28.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,48(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 40);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82183cd8
	if (!ctx.cr6.eq) goto loc_82183CD8;
	// ld r9,12712(r3)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r3.u32 + 12712);
	// addi r29,r3,12704
	ctx.r29.s64 = ctx.r3.s64 + 12704;
	// ld r10,56(r28)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r28.u32 + 56);
	// ld r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r28.u32 + 48);
	// ld r8,12704(r3)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r3.u32 + 12704);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// ld r6,32(r5)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// ld r9,40(r5)
	ctx.r9.u64 = REX_LOAD_U64(ctx.r5.u32 + 40);
	// xor r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r8.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82183d94
	if (ctx.cr6.eq) goto loc_82183D94;
loc_82183CD8:
	// lwz r11,64(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82183d08
	if (ctx.cr6.eq) goto loc_82183D08;
	// lwz r10,10896(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 10896);
	// lwz r9,10908(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 10908);
	// subf r11,r11,r9
	ctx.r11.u64 = ctx.r9.u64 - ctx.r11.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82183d08
	if (!ctx.cr6.lt) goto loc_82183D08;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82183da8
	goto loc_82183DA8;
loc_82183D08:
	// addi r11,r7,112
	ctx.r11.s64 = ctx.r7.s64 + 112;
	// lwz r10,32(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// addi r29,r30,12704
	ctx.r29.s64 = ctx.r30.s64 + 12704;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,872(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x821830d8
	ctx.lr = 0x82183D38;
	sub_821830D8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82183d7c
	if (!ctx.cr6.eq) goto loc_82183D7C;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r10,r11,25916
	ctx.r10.s64 = ctx.r11.s64 + 25916;
loc_82183D4C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_82183D50:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r11,0,r8
	ea = ctx.r8.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r8
	ea = ctx.r8.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82183d50
	if (!ctx.cr0.eq) goto loc_82183D50;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82183d4c
	if (ctx.cr6.lt) goto loc_82183D4C;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82183D7C:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// stw r11,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// std r11,48(r28)
	REX_STORE_U64(ctx.r28.u32 + 48, ctx.r11.u64);
	// ld r11,12712(r30)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r30.u32 + 12712);
	// std r11,56(r28)
	REX_STORE_U64(ctx.r28.u32 + 56, ctx.r11.u64);
loc_82183D94:
	// ld r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,12712(r30)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r30.u32 + 12712);
	// std r11,12008(r30)
	REX_STORE_U64(ctx.r30.u32 + 12008, ctx.r11.u64);
	// std r10,12016(r30)
	REX_STORE_U64(ctx.r30.u32 + 12016, ctx.r10.u64);
loc_82183DA8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82187898) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x821878A0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,244
	ctx.r9.s64 = ctx.r1.s64 + 244;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r30,240(r1)
	REX_STORE_U32(ctx.r1.u32 + 240, ctx.r30.u32);
	// addi r10,r1,720
	ctx.r10.s64 = ctx.r1.s64 + 720;
	// addi r8,r7,7
	ctx.r8.s64 = ctx.r7.s64 + 7;
	// stw r30,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// stw r30,4(r9)
	REX_STORE_U32(ctx.r9.u32 + 4, ctx.r30.u32);
	// addi r7,r26,7
	ctx.r7.s64 = ctx.r26.s64 + 7;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// addi r11,r10,-8
	ctx.r11.s64 = ctx.r10.s64 + -8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// rlwinm r22,r8,0,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r21,r7,0,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_821878FC:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x821878fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821878FC;
	// lis r5,10280
	ctx.r5.s64 = 673710080;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,262
	ctx.r5.u64 = ctx.r5.u64 | 262;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8216ff20
	ctx.lr = 0x8218792C;
	sub_8216FF20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e020
	ctx.lr = 0x82187934;
	sub_8216E020(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ea20
	ctx.lr = 0x82187944;
	sub_8216EA20(ctx, base);
	// addi r11,r1,640
	ctx.r11.s64 = ctx.r1.s64 + 640;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82187950:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216dfd8
	ctx.lr = 0x8218795C;
	sub_8216DFD8(ctx, base);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r5,r1,720
	ctx.r5.s64 = ctx.r1.s64 + 720;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216e6d0
	ctx.lr = 0x82187970;
	sub_8216E6D0(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82187950
	if (ctx.cr6.lt) goto loc_82187950;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216d018
	ctx.lr = 0x82187984;
	sub_8216D018(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216cff0
	ctx.lr = 0x82187994;
	sub_8216CFF0(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82187ab4
	if (ctx.cr6.eq) goto loc_82187AB4;
	// ld r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x821879c0
	if (ctx.cr6.eq) goto loc_821879C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82182858
	ctx.lr = 0x821879BC;
	sub_82182858(ctx, base);
	// std r3,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_821879C0:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x821879f0
	if (ctx.cr6.eq) goto loc_821879F0;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x821879E4;
	sub_82182BF0(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_821879F0:
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82187a28
	if (ctx.cr6.eq) goto loc_82187A28;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82187A14;
	sub_82182BF0(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82187A28:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82187a70
	if (ctx.cr6.eq) goto loc_82187A70;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82187A58;
	sub_82182BF0(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82187A70:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82187ab4
	if (ctx.cr6.eq) goto loc_82187AB4;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82187A9C;
	sub_82182BF0(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	REX_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82187AB4:
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82187b04
	if (ctx.cr6.eq) goto loc_82187B04;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82187b04
	if (ctx.cr6.eq) goto loc_82187B04;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82187AEC;
	sub_82182BF0(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	REX_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82187B04:
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82187b3c
	if (ctx.cr6.eq) goto loc_82187B3C;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82187b3c
	if (ctx.cr6.eq) goto loc_82187B3C;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82182bf0
	ctx.lr = 0x82187B30;
	sub_82182BF0(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	REX_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82187B3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821864a8
	ctx.lr = 0x82187B44;
	sub_821864A8(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r29,r11,29296
	ctx.r29.s64 = ctx.r11.s64 + 29296;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r29,64
	ctx.r4.s64 = ctx.r29.s64 + 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186500
	ctx.lr = 0x82187B60;
	sub_82186500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82187b7c
	if (ctx.cr0.eq) goto loc_82187B7C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,252
	ctx.r4.s64 = 252;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186578
	ctx.lr = 0x82187B7C;
	sub_82186578(ctx, base);
loc_82187B7C:
	// addi r4,r29,352
	ctx.r4.s64 = ctx.r29.s64 + 352;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,429
	ctx.r5.s64 = 429;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186500
	ctx.lr = 0x82187B90;
	sub_82186500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82187bac
	if (ctx.cr0.eq) goto loc_82187BAC;
	// addi r5,r29,160
	ctx.r5.s64 = ctx.r29.s64 + 160;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,500
	ctx.r4.s64 = 500;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186578
	ctx.lr = 0x82187BAC;
	sub_82186578(ctx, base);
loc_82187BAC:
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82187bc8
	if (!ctx.cr6.gt) goto loc_82187BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82181038
	ctx.lr = 0x82187BC4;
	sub_82181038(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82187BC8:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82186820
	ctx.lr = 0x82187BF4;
	sub_82186820(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// rlwinm r11,r25,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 31) & 0x7FFFFFFF;
	// std r10,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f13,128(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// addi r11,r1,324
	ctx.r11.s64 = ctx.r1.s64 + 324;
	// fcfid f9,f0
	ctx.f9.f64 = double(ctx.f0.s64);
	// lfs f31,2104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// stfs f31,320(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 320, temp.u32);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r30,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r30,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// lfs f13,4560(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 4560);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f13,384(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// stfs f13,388(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// lfs f0,2280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// frsp f4,f8
	ctx.f4.f64 = double(float(ctx.f8.f64));
	// lfs f11,-32568(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -32568);
	ctx.f11.f64 = double(temp.f32);
	// frsp f7,f12
	ctx.f7.f64 = double(float(ctx.f12.f64));
	// lfs f10,-32572(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -32572);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,2108(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2108);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,4384(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4384);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4392(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + 4392);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,-12960(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -12960);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f31,164(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// stfs f31,168(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// stfs f0,172(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// stfs f31,184(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 184, temp.u32);
	// stfs f0,188(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stfs f31,192(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f31,196(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stfs f31,200(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stfs f0,204(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// stfs f31,216(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// stfs f0,220(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// stfs f31,336(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 336, temp.u32);
	// stfs f11,344(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// stfs f10,348(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 348, temp.u32);
	// stfs f31,352(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 352, temp.u32);
	// stfs f31,356(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 356, temp.u32);
	// stfs f9,360(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 360, temp.u32);
	// stfs f8,364(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 364, temp.u32);
	// stfs f31,368(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// stfs f31,372(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// stfs f12,392(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 392, temp.u32);
	// stfs f7,340(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 340, temp.u32);
	// stfs f12,396(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 396, temp.u32);
	// stfs f31,400(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 400, temp.u32);
	// stfs f31,404(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 404, temp.u32);
	// stfs f31,416(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 416, temp.u32);
	// stfs f31,420(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 420, temp.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f13,2096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2096);
	ctx.f13.f64 = double(temp.f32);
	// lis r8,-32252
	ctx.r8.s64 = -2113667072;
	// fmsubs f2,f6,f13,f0
	ctx.f2.f64 = double(float(std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f0.f64)));
	// lis r7,-32252
	ctx.r7.s64 = -2113667072;
	// stfs f6,176(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// lis r6,-32252
	ctx.r6.s64 = -2113667072;
	// stfs f6,208(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f12,-32576(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32576);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lfs f11,-32580(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32580);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// lfs f10,-32584(r8)
	temp.u32 = REX_LOAD_U32(ctx.r8.u32 + -32584);
	ctx.f10.f64 = double(temp.f32);
	// lis r29,-32252
	ctx.r29.s64 = -2113667072;
	// lfs f9,-32588(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + -32588);
	ctx.f9.f64 = double(temp.f32);
	// li r5,160
	ctx.r5.s64 = 160;
	// lfs f8,-32592(r6)
	temp.u32 = REX_LOAD_U32(ctx.r6.u32 + -32592);
	ctx.f8.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,-32596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + -32596);
	ctx.f7.f64 = double(temp.f32);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// lfs f13,-32600(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -32600);
	ctx.f13.f64 = double(temp.f32);
	// lfs f5,-32604(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + -32604);
	ctx.f5.f64 = double(temp.f32);
	// fdivs f1,f0,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f3.f64));
	// lfs f6,-32608(r29)
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + -32608);
	ctx.f6.f64 = double(temp.f32);
	// stfs f4,180(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stfs f4,212(r1)
	temp.f32 = float(ctx.f4.f64);
	REX_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f3,408(r1)
	temp.f32 = float(ctx.f3.f64);
	REX_STORE_U32(ctx.r1.u32 + 408, temp.u32);
	// stfs f1,412(r1)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 412, temp.u32);
	// stfs f2,376(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// stfs f2,380(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 380, temp.u32);
	// stfs f31,424(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 424, temp.u32);
	// stfs f31,428(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 428, temp.u32);
	// stfs f0,432(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// stfs f12,436(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 436, temp.u32);
	// stfs f11,440(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 440, temp.u32);
	// stfs f10,444(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 444, temp.u32);
	// stfs f0,448(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// stfs f9,452(r1)
	temp.f32 = float(ctx.f9.f64);
	REX_STORE_U32(ctx.r1.u32 + 452, temp.u32);
	// stfs f8,456(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 456, temp.u32);
	// stfs f7,460(r1)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r1.u32 + 460, temp.u32);
	// stfs f0,464(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 464, temp.u32);
	// stfs f6,468(r1)
	temp.f32 = float(ctx.f6.f64);
	REX_STORE_U32(ctx.r1.u32 + 468, temp.u32);
	// stfs f13,472(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 472, temp.u32);
	// stfs f5,476(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 476, temp.u32);
	// bl 0x8215ec60
	ctx.lr = 0x82187DC8;
	sub_8215EC60(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82187ea8
	if (ctx.cr6.eq) goto loc_82187EA8;
	// addi r27,r23,-4
	ctx.r27.s64 = ctx.r23.s64 + -4;
	// addi r28,r1,468
	ctx.r28.s64 = ctx.r1.s64 + 468;
loc_82187DDC:
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// stfs f31,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stfsu f0,16(r28)
	ea = 16 + ctx.r28.u32;
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82187E08:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82187e08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82187E08;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,136
	ctx.r11.s64 = ctx.r1.s64 + 136;
	// addi r9,r1,140
	ctx.r9.s64 = ctx.r1.s64 + 140;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r9,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,74
	ctx.r9.u64 = ctx.r9.u64 | 74;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,2048
	ctx.r4.s64 = 2048;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8216fc28
	ctx.lr = 0x82187E60;
	sub_8216FC28(ctx, base);
	// lwz r9,284(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 284);
	// li r10,73
	ctx.r10.s64 = 73;
	// lwz r8,296(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r7,288(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 288);
	// addi r5,r1,284
	ctx.r5.s64 = ctx.r1.s64 + 284;
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// rlwimi r9,r10,11,13,21
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0x7FC00) | (ctx.r9.u64 & 0xFFFFFFFFFFF803FF);
	// rlwinm r10,r8,0,13,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFF87FFFF;
	// stw r9,284(r1)
	REX_STORE_U32(ctx.r1.u32 + 284, ctx.r9.u32);
	// rlwimi r11,r7,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,296(r1)
	REX_STORE_U32(ctx.r1.u32 + 296, ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,288(r1)
	REX_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186650
	ctx.lr = 0x82187E9C;
	sub_82186650(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82187ddc
	if (ctx.cr6.lt) goto loc_82187DDC;
loc_82187EA8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186718
	ctx.lr = 0x82187EB0;
	sub_82186718(ctx, base);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186578
	ctx.lr = 0x82187EC4;
	sub_82186578(ctx, base);
	// li r6,20
	ctx.r6.s64 = 20;
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186578
	ctx.lr = 0x82187ED8;
	sub_82186578(ctx, base);
	// lbz r11,10944(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 10944);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82187eec
	if (!ctx.cr0.eq) goto loc_82187EEC;
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82187ef4
	if (ctx.cr0.eq) goto loc_82187EF4;
loc_82187EEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217a858
	ctx.lr = 0x82187EF4;
	sub_8217A858(ctx, base);
loc_82187EF4:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82186780
	ctx.lr = 0x82187F04;
	sub_82186780(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r11,r1,648
	ctx.r11.s64 = ctx.r1.s64 + 648;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82187F14:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	REX_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82187f14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82187F14;
	// addi r8,r1,136
	ctx.r8.s64 = ctx.r1.s64 + 136;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// stw r8,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// lis r9,10280
	ctx.r9.s64 = 673710080;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// addi r11,r1,140
	ctx.r11.s64 = ctx.r1.s64 + 140;
	// stw r7,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// ori r9,r9,262
	ctx.r9.u64 = ctx.r9.u64 | 262;
	// lwz r5,21904(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 21904);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r4,21900(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 21900);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8216fc28
	ctx.lr = 0x82187F6C;
	sub_8216FC28(ctx, base);
	// lwz r11,21908(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 21908);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82187f84
	if (!ctx.cr6.lt) goto loc_82187F84;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// b 0x82187f88
	goto loc_82187F88;
loc_82187F84:
	// addis r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -1090519040;
loc_82187F88:
	// lwz r8,688(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 688);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r11,r8,0,20,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF000);
	// stw r30,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r21,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r21.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r30,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,688(r1)
	REX_STORE_U32(ctx.r1.u32 + 688, ctx.r11.u32);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r22,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8217a4b8
	ctx.lr = 0x82187FD4;
	sub_8217A4B8(ctx, base);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216ea20
	ctx.lr = 0x82187FE0;
	sub_8216EA20(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82187ff0
	if (ctx.cr6.eq) goto loc_82187FF0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8217c480
	ctx.lr = 0x82187FF0;
	sub_8217C480(ctx, base);
loc_82187FF0:
	// addi r28,r1,640
	ctx.r28.s64 = ctx.r1.s64 + 640;
loc_82187FF4:
	// lwz r29,0(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8216e6d0
	ctx.lr = 0x82188008;
	sub_8216E6D0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82188018
	if (ctx.cr6.eq) goto loc_82188018;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8217c480
	ctx.lr = 0x82188018;
	sub_8217C480(ctx, base);
loc_82188018:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// blt cr6,0x82187ff4
	if (ctx.cr6.lt) goto loc_82187FF4;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216cff0
	ctx.lr = 0x82188034;
	sub_8216CFF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821812e8
	ctx.lr = 0x8218803C;
	sub_821812E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A1958) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x821A1960;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a19b8
	if (ctx.cr6.eq) goto loc_821A19B8;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a19b8
	if (!ctx.cr6.eq) goto loc_821A19B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,876(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 876);
	// lwz r9,24(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r10,64(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821a19ac
	if (ctx.cr6.eq) goto loc_821A19AC;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821a19b8
	if (ctx.cr6.eq) goto loc_821A19B8;
loc_821A19AC:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x821a19c4
	if (ctx.cr6.eq) goto loc_821A19C4;
loc_821A19B8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x821a1a58
	goto loc_821A1A58;
loc_821A19C4:
	// lwz r28,20(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r29,28(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// li r27,4
	ctx.r27.s64 = 4;
	// bgt cr6,0x821a19ec
	if (ctx.cr6.gt) goto loc_821A19EC;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_821A19EC:
	// stw r24,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r24.u32);
	// stw r24,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r24.u32);
	// stw r24,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r24.u32);
	// stw r24,12(r5)
	REX_STORE_U32(ctx.r5.u32 + 12, ctx.r24.u32);
loc_821A19FC:
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a1a34
	if (ctx.cr6.eq) goto loc_821A1A34;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_821A1A0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8219ff10
	ctx.lr = 0x821A1A18;
	sub_8219FF10(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a1a58
	if (ctx.cr0.lt) goto loc_821A1A58;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821a1a0c
	if (ctx.cr6.lt) goto loc_821A1A0C;
loc_821A1A34:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x821a1a4c
	if (!ctx.cr6.lt) goto loc_821A1A4C;
	// subf r11,r31,r28
	ctx.r11.u64 = ctx.r28.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A1A44:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bdnz 0x821a1a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A1A44;
loc_821A1A4C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bne 0x821a19fc
	if (!ctx.cr0.eq) goto loc_821A19FC;
loc_821A1A58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A3130) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x821A3138;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821a3450
	if (ctx.cr6.eq) goto loc_821A3450;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821a3410
	if (ctx.cr6.eq) goto loc_821A3410;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821a3200
	if (ctx.cr6.lt) goto loc_821A3200;
	// beq cr6,0x821a31f0
	if (ctx.cr6.eq) goto loc_821A31F0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821a31d4
	if (ctx.cr6.lt) goto loc_821A31D4;
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,276(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 276);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821a31c4
	if (ctx.cr6.eq) goto loc_821A31C4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-432
	ctx.r6.s64 = ctx.r11.s64 + -432;
loc_821A31A4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r24,40
	ctx.r3.s64 = ctx.r24.s64 + 40;
	// bl 0x821afae0
	ctx.lr = 0x821A31B4;
	sub_821AFAE0(ctx, base);
loc_821A31B4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821A31BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_821A31C4:
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x821a320c
	goto loc_821A320C;
loc_821A31D4:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,28(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lwz r28,32(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,22,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 22) & 0x1;
	// ori r30,r11,2
	ctx.r30.u64 = ctx.r11.u64 | 2;
	// b 0x821a320c
	goto loc_821A320C;
loc_821A31F0:
	// lwz r29,32(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r28,28(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// b 0x821a320c
	goto loc_821A320C;
loc_821A3200:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,1
	ctx.r28.s64 = 1;
loc_821A320C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// bgt cr6,0x821a31b4
	if (ctx.cr6.gt) goto loc_821A31B4;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,-1696
	ctx.r12.s64 = ctx.r12.s64 + -1696;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32230
	ctx.r12.s64 = -2112225280;
	// nop 
	// addi r12,r12,12724
	ctx.r12.s64 = ctx.r12.s64 + 12724;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821A3240;
	case 1:
		goto loc_821A3348;
	case 2:
		goto loc_821A3348;
	case 3:
		goto loc_821A3348;
	case 4:
		goto loc_821A3348;
	case 5:
		goto loc_821A3348;
	case 6:
		goto loc_821A3348;
	case 7:
		goto loc_821A3348;
	case 8:
		goto loc_821A3348;
	case 9:
		goto loc_821A3348;
	case 10:
		goto loc_821A3350;
	case 11:
		goto loc_821A3350;
	case 12:
		goto loc_821A3350;
	case 13:
		goto loc_821A3350;
	case 14:
		goto loc_821A31B4;
	case 15:
		goto loc_821A31B4;
	case 16:
		goto loc_821A31B4;
	case 17:
		goto loc_821A31B4;
	case 18:
		goto loc_821A31B4;
	case 19:
		goto loc_821A31B4;
	case 20:
		goto loc_821A31B4;
	case 21:
		goto loc_821A31B4;
	case 22:
		goto loc_821A3348;
	case 23:
		goto loc_821A3358;
	case 24:
		goto loc_821A3360;
	case 25:
		goto loc_821A3368;
	case 26:
		goto loc_821A31B4;
	case 27:
		goto loc_821A3370;
	case 28:
		goto loc_821A31B4;
	case 29:
		goto loc_821A3378;
	case 30:
		goto loc_821A3380;
	case 31:
		goto loc_821A31B4;
	case 32:
		goto loc_821A31B4;
	case 33:
		goto loc_821A3388;
	case 34:
		goto loc_821A3390;
	case 35:
		goto loc_821A3398;
	case 36:
		goto loc_821A33A0;
	case 37:
		goto loc_821A33A8;
	case 38:
		goto loc_821A31B4;
	case 39:
		goto loc_821A31B4;
	case 40:
		goto loc_821A31B4;
	case 41:
		goto loc_821A31B4;
	case 42:
		goto loc_821A33B8;
	case 43:
		goto loc_821A33C0;
	case 44:
		goto loc_821A31B4;
	case 45:
		goto loc_821A33C8;
	case 46:
		goto loc_821A33D0;
	case 47:
		goto loc_821A33B0;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821A3240:
	// li r31,1
	ctx.r31.s64 = 1;
loc_821A3244:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3254;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A326C;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a33e8
	if (ctx.cr6.eq) goto loc_821A33E8;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a33e8
	if (ctx.cr6.eq) goto loc_821A33E8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2c80
	ctx.lr = 0x821A3294;
	sub_821A2C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A32AC;
	sub_821A2D00(ctx, base);
loc_821A32AC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a33fc
	if (ctx.cr6.eq) goto loc_821A33FC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a33fc
	if (ctx.cr6.eq) goto loc_821A33FC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2c80
	ctx.lr = 0x821A32D4;
	sub_821A2C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A32EC;
	sub_821A2D00(ctx, base);
loc_821A32EC:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3304;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x821a31bc
	if (!ctx.cr6.gt) goto loc_821A31BC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bgt cr6,0x821a31bc
	if (ctx.cr6.gt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A332C;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3344;
	sub_821A2B70(ctx, base);
	// b 0x821a31bc
	goto loc_821A31BC;
loc_821A3348:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A3350:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A3358:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A3360:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A3368:
	// li r31,6
	ctx.r31.s64 = 6;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A3370:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A3378:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A3380:
	// li r31,9
	ctx.r31.s64 = 9;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A3388:
	// li r31,10
	ctx.r31.s64 = 10;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A3390:
	// li r31,11
	ctx.r31.s64 = 11;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A3398:
	// li r31,12
	ctx.r31.s64 = 12;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A33A0:
	// li r31,13
	ctx.r31.s64 = 13;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A33A8:
	// li r31,14
	ctx.r31.s64 = 14;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A33B0:
	// lis r31,243
	ctx.r31.s64 = 15925248;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A33B8:
	// li r31,15
	ctx.r31.s64 = 15;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A33C0:
	// li r31,16
	ctx.r31.s64 = 16;
	// b 0x821a3244
	goto loc_821A3244;
loc_821A33C8:
	// li r31,17
	ctx.r31.s64 = 17;
	// b 0x821a33d4
	goto loc_821A33D4;
loc_821A33D0:
	// li r31,18
	ctx.r31.s64 = 18;
loc_821A33D4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821a3244
	if (ctx.cr6.eq) goto loc_821A3244;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r6,r11,-512
	ctx.r6.s64 = ctx.r11.s64 + -512;
	// b 0x821a31a4
	goto loc_821A31A4;
loc_821A33E8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A33F8;
	sub_821A2B70(ctx, base);
	// b 0x821a32ac
	goto loc_821A32AC;
loc_821A33FC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A340C;
	sub_821A2B70(ctx, base);
	// b 0x821a32ec
	goto loc_821A32EC;
loc_821A3410:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x821a3420
	if (ctx.cr6.eq) goto loc_821A3420;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_821A3420:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r8,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a3130
	ctx.lr = 0x821A344C;
	sub_821A3130(ctx, base);
	// b 0x821a31bc
	goto loc_821A31BC;
loc_821A3450:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3460;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3478;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
loc_821A3488:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a3488
	if (!ctx.cr6.eq) goto loc_821A3488;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821a3640
	if (ctx.cr6.eq) goto loc_821A3640;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a3640
	if (ctx.cr6.eq) goto loc_821A3640;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,8(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2c80
	ctx.lr = 0x821A34B8;
	sub_821A2C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A34D0;
	sub_821A2D00(ctx, base);
loc_821A34D0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a3654
	if (ctx.cr6.eq) goto loc_821A3654;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x821a3654
	if (ctx.cr6.eq) goto loc_821A3654;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x821a2c80
	ctx.lr = 0x821A34F8;
	sub_821A2C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,96(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2d00
	ctx.lr = 0x821A3510;
	sub_821A2D00(ctx, base);
loc_821A3510:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3528;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3540;
	sub_821A2B70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821a31bc
	if (ctx.cr6.eq) goto loc_821A31BC;
loc_821A3554:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a31b4
	if (ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a31b4
	if (ctx.cr6.eq) goto loc_821A31B4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a31b4
	if (ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a31b4
	if (ctx.cr6.eq) goto loc_821A31B4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r4,48(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821a31b4
	if (ctx.cr6.eq) goto loc_821A31B4;
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a3608
	if (ctx.cr6.eq) goto loc_821A3608;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821a31b4
	if (!ctx.cr6.eq) goto loc_821A31B4;
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
loc_821A3608:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x821a3130
	ctx.lr = 0x821A3628;
	sub_821A3130(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821a31bc
	if (ctx.cr0.lt) goto loc_821A31BC;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a3554
	if (!ctx.cr6.eq) goto loc_821A3554;
	// b 0x821a31bc
	goto loc_821A31BC;
loc_821A3640:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3650;
	sub_821A2B70(ctx, base);
	// b 0x821a34d0
	goto loc_821A34D0;
loc_821A3654:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x821a2b70
	ctx.lr = 0x821A3664;
	sub_821A2B70(ctx, base);
	// b 0x821a3510
	goto loc_821A3510;
}

DEFINE_REX_FUNC(sub_821B3148) {
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
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r5,r6,1100
	ctx.r5.s64 = ctx.r6.s64 + 1100;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r6,r11,10616
	ctx.r6.s64 = ctx.r11.s64 + 10616;
	// beq cr6,0x821b3194
	if (ctx.cr6.eq) goto loc_821B3194;
	// bl 0x821b2df0
	ctx.lr = 0x821B3178;
	sub_821B2DF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821afae0
	ctx.lr = 0x821B3188;
	sub_821AFAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// b 0x821b31a8
	goto loc_821B31A8;
loc_821B3194:
	// bl 0x821b2df0
	ctx.lr = 0x821B3198;
	sub_821B2DF0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821afd08
	ctx.lr = 0x821B31A8;
	sub_821AFD08(ctx, base);
loc_821B31A8:
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

DEFINE_REX_FUNC(sub_821B4170) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821B4178;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821b4198
	if (!ctx.cr6.eq) goto loc_821B4198;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821b4350
	goto loc_821B4350;
loc_821B4198:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x821b42fc
	if (ctx.cr6.eq) goto loc_821B42FC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x821b42e4
	if (ctx.cr6.eq) goto loc_821B42E4;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x821b42a8
	if (ctx.cr6.eq) goto loc_821B42A8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x821b41ec
	if (ctx.cr6.eq) goto loc_821B41EC;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// beq cr6,0x821b41e4
	if (ctx.cr6.eq) goto loc_821B41E4;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11092
	ctx.r6.s64 = ctx.r11.s64 + 11092;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b34c0
	ctx.lr = 0x821B41E0;
	sub_821B34C0(ctx, base);
	// b 0x821b434c
	goto loc_821B434C;
loc_821B41E4:
	// lwz r4,48(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x821b42ec
	goto loc_821B42EC;
loc_821B41EC:
	// lwz r9,32(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,28(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mullw r30,r9,r8
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821b4270
	if (ctx.cr6.gt) goto loc_821B4270;
	// lis r12,-32252
	ctx.r12.s64 = -2113667072;
	// addi r12,r12,10728
	ctx.r12.s64 = ctx.r12.s64 + 10728;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32229
	ctx.r12.s64 = -2112159744;
	// nop 
	// addi r12,r12,16944
	ctx.r12.s64 = ctx.r12.s64 + 16944;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821B4230;
	case 1:
		goto loc_821B4270;
	case 2:
		goto loc_821B4238;
	case 3:
		goto loc_821B4240;
	case 4:
		goto loc_821B424C;
	case 5:
		goto loc_821B4254;
	case 6:
		goto loc_821B4238;
	case 7:
		goto loc_821B4240;
	case 8:
		goto loc_821B424C;
	case 9:
		goto loc_821B4254;
	case 10:
		goto loc_821B4270;
	case 11:
		goto loc_821B425C;
	case 12:
		goto loc_821B4264;
	case 13:
		goto loc_821B426C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821B4230:
	// li r10,23
	ctx.r10.s64 = 23;
	// b 0x821b4270
	goto loc_821B4270;
loc_821B4238:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x821b4270
	goto loc_821B4270;
loc_821B4240:
	// lis r10,512
	ctx.r10.s64 = 33554432;
loc_821B4244:
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x821b4270
	goto loc_821B4270;
loc_821B424C:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x821b4244
	goto loc_821B4244;
loc_821B4254:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// b 0x821b4244
	goto loc_821B4244;
loc_821B425C:
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// b 0x821b4270
	goto loc_821B4270;
loc_821B4264:
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// b 0x821b4270
	goto loc_821B4270;
loc_821B426C:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_821B4270:
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821b4284
	if (ctx.cr0.eq) goto loc_821B4284;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
loc_821B4284:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b434c
	if (ctx.cr6.eq) goto loc_821B434C;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x821b434c
	if (ctx.cr0.eq) goto loc_821B434C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_821B429C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x821b429c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B429C;
	// b 0x821b434c
	goto loc_821B434C;
loc_821B42A8:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x821b434c
	if (!ctx.cr6.gt) goto loc_821B434C;
loc_821B42B8:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821b4170
	ctx.lr = 0x821B42CC;
	sub_821B4170(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821b42b8
	if (ctx.cr6.lt) goto loc_821B42B8;
	// b 0x821b434c
	goto loc_821B434C;
loc_821B42E4:
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_821B42EC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x821b4170
	ctx.lr = 0x821B42F4;
	sub_821B4170(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821b434c
	goto loc_821B434C;
loc_821B42FC:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821b432c
	if (!ctx.cr6.eq) goto loc_821B432C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x821b4170
	ctx.lr = 0x821B431C;
	sub_821B4170(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821b42fc
	if (!ctx.cr6.eq) goto loc_821B42FC;
loc_821B432C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821b434c
	if (ctx.cr6.eq) goto loc_821B434C;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r5,r11,r27
	ctx.r5.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b4170
	ctx.lr = 0x821B4348;
	sub_821B4170(ctx, base);
	// add r30,r3,r30
	ctx.r30.u64 = ctx.r3.u64 + ctx.r30.u64;
loc_821B434C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_821B4350:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C7350) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821C7358;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c7444
	if (ctx.cr6.eq) goto loc_821C7444;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r28,r11,13112
	ctx.r28.s64 = ctx.r11.s64 + 13112;
loc_821C737C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821c742c
	if (!ctx.cr6.eq) goto loc_821C742C;
	// bl 0x821e9ac0
	ctx.lr = 0x821C738C;
	sub_821E9AC0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821e99f8
	ctx.lr = 0x821C739C;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821c73c4
	if (ctx.cr0.eq) goto loc_821C73C4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r29,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// b 0x821c73c8
	goto loc_821C73C8;
loc_821C73C4:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_821C73C8:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c7444
	if (ctx.cr6.eq) goto loc_821C7444;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c740c
	if (ctx.cr6.eq) goto loc_821C740C;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C73FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r3.u32);
	// beq 0x821c7424
	if (ctx.cr0.eq) goto loc_821C7424;
loc_821C740C:
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// bne cr6,0x821c737c
	if (!ctx.cr6.eq) goto loc_821C737C;
	// b 0x821c7444
	goto loc_821C7444;
loc_821C7424:
	// stw r29,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x821c7444
	goto loc_821C7444;
loc_821C742C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C7440;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_821C7444:
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C86B8) {
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
	// beq cr6,0x821c87a8
	if (ctx.cr6.eq) goto loc_821C87A8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x821c87a8
	if (!ctx.cr6.eq) goto loc_821C87A8;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821c87a8
	if (!ctx.cr6.eq) goto loc_821C87A8;
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,20(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c8720
	if (ctx.cr6.eq) goto loc_821C8720;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C871C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c872c
	goto loc_821C872C;
loc_821C8720:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C872C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c87a8
	if (ctx.cr6.eq) goto loc_821C87A8;
	// lwz r3,24(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c8758
	if (ctx.cr6.eq) goto loc_821C8758;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C8754;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c8764
	goto loc_821C8764;
loc_821C8758:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C8764:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x821c87a8
	if (ctx.cr6.eq) goto loc_821C87A8;
	// lwz r3,28(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r4,28(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821c8790
	if (ctx.cr6.eq) goto loc_821C8790;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821C878C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x821c879c
	goto loc_821C879C;
loc_821C8790:
	// addi r11,r4,0
	ctx.r11.s64 = ctx.r4.s64 + 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_821C879C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x821c87ac
	if (!ctx.cr6.eq) goto loc_821C87AC;
loc_821C87A8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821C87AC:
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

DEFINE_REX_FUNC(sub_821CA2D8) {
	REX_FUNC_PROLOGUE();
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// stw r4,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// li r8,15
	ctx.r8.s64 = 15;
	// stw r6,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r6.u32);
	// addi r9,r9,13328
	ctx.r9.s64 = ctx.r9.s64 + 13328;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// ld r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// ld r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 8);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 16);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,24(r7)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r7.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CABD8) {
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
	ctx.lr = 0x821CABF4;
	sub_821E9AC0(ctx, base);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,28
	ctx.r4.s64 = 28;
	// bl 0x821e99f8
	ctx.lr = 0x821CAC04;
	sub_821E99F8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cac40
	if (ctx.cr0.eq) goto loc_821CAC40;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,26
	ctx.r9.s64 = 26;
	// addi r10,r10,13376
	ctx.r10.s64 = ctx.r10.s64 + 13376;
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
	// b 0x821cac44
	goto loc_821CAC44;
loc_821CAC40:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821CAC44:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821cac54
	if (!ctx.cr6.eq) goto loc_821CAC54;
loc_821CAC4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821cacdc
	goto loc_821CACDC;
loc_821CAC54:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cac80
	if (ctx.cr6.eq) goto loc_821CAC80;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CAC74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cac4c
	if (ctx.cr0.eq) goto loc_821CAC4C;
loc_821CAC80:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cacac
	if (ctx.cr6.eq) goto loc_821CACAC;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CACA0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cac4c
	if (ctx.cr0.eq) goto loc_821CAC4C;
loc_821CACAC:
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cacd8
	if (ctx.cr6.eq) goto loc_821CACD8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CACCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cac4c
	if (ctx.cr0.eq) goto loc_821CAC4C;
loc_821CACD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821CACDC:
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

DEFINE_REX_FUNC(sub_821CB2A8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r5,10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 10, ctx.xer);
	// beq cr6,0x821cb1b0
	// ERROR: conditional branch to unknown address 0x821CB1B0
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x821CB2AC to 0x821CB1B0");
	// cmpwi cr6,r5,13
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 13, ctx.xer);
	// b 0x821cb248
	// FATAL: unresolved function 0x821CB248 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x821CB2B4 to 0x821CB248");
	return;
}

DEFINE_REX_FUNC(sub_821CC478) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821cc554
	if (ctx.cr6.eq) goto loc_821CC554;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x821c7078
	ctx.lr = 0x821CC4A4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc4b8
	if (ctx.cr0.eq) goto loc_821CC4B8;
	// bl 0x821c9898
	ctx.lr = 0x821CC4B0;
	sub_821C9898(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821cc4bc
	goto loc_821CC4BC;
loc_821CC4B8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821CC4BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821cc554
	if (ctx.cr6.eq) goto loc_821CC554;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r3,80
	ctx.r3.s64 = 80;
	// stw r11,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,48(r30)
	REX_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,112(r31)
	REX_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// bl 0x821c7078
	ctx.lr = 0x821CC4E8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc510
	if (ctx.cr0.eq) goto loc_821CC510;
	// addi r9,r31,40
	ctx.r9.s64 = ctx.r31.s64 + 40;
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
	ctx.lr = 0x821CC50C;
	sub_821C9DE8(ctx, base);
	// b 0x821cc514
	goto loc_821CC514;
loc_821CC510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CC514:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cc554
	if (ctx.cr6.eq) goto loc_821CC554;
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821CC528;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cc548
	if (ctx.cr0.eq) goto loc_821CC548;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,11756
	ctx.r6.s64 = ctx.r11.s64 + 11756;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821c7240
	ctx.lr = 0x821CC544;
	sub_821C7240(ctx, base);
	// b 0x821cc54c
	goto loc_821CC54C;
loc_821CC548:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CC54C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821cc558
	if (!ctx.cr6.eq) goto loc_821CC558;
loc_821CC554:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CC558:
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

DEFINE_REX_FUNC(sub_821CF330) {
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
	// bl 0x821cc668
	ctx.lr = 0x821CF368;
	sub_821CC668(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821D1100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821D1108;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x821c7078
	ctx.lr = 0x821D111C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d1148
	if (ctx.cr0.eq) goto loc_821D1148;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
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
	ctx.lr = 0x821D1140;
	sub_821C9DE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d114c
	goto loc_821D114C;
loc_821D1148:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D114C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821d115c
	if (!ctx.cr6.eq) goto loc_821D115C;
loc_821D1154:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d121c
	goto loc_821D121C;
loc_821D115C:
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D1164;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d118c
	if (ctx.cr0.eq) goto loc_821D118C;
	// li r9,512
	ctx.r9.s64 = 512;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x821c8ae8
	ctx.lr = 0x821D1188;
	sub_821C8AE8(ctx, base);
	// b 0x821d1190
	goto loc_821D1190;
loc_821D118C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1190:
	// stw r3,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1154
	if (ctx.cr6.eq) goto loc_821D1154;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x821c7078
	ctx.lr = 0x821D11A4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d11c4
	if (ctx.cr0.eq) goto loc_821D11C4;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// bl 0x821ca2d8
	ctx.lr = 0x821D11C0;
	sub_821CA2D8(ctx, base);
	// b 0x821d11c8
	goto loc_821D11C8;
loc_821D11C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D11C8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// beq cr6,0x821d1154
	if (ctx.cr6.eq) goto loc_821D1154;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x821c7078
	ctx.lr = 0x821D11DC;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d11fc
	if (ctx.cr0.eq) goto loc_821D11FC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,32(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-29408
	ctx.r6.s64 = ctx.r11.s64 + -29408;
	// bl 0x821c7240
	ctx.lr = 0x821D11F8;
	sub_821C7240(ctx, base);
	// b 0x821d1200
	goto loc_821D1200;
loc_821D11FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D1200:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d1154
	if (ctx.cr6.eq) goto loc_821D1154;
	// stw r3,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D1218;
	sub_821CEFE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_821D121C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821D4B50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x821D4B58;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821d4e08
	if (ctx.cr6.eq) goto loc_821D4E08;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d4e08
	if (!ctx.cr6.eq) goto loc_821D4E08;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821d4e08
	if (ctx.cr6.eq) goto loc_821D4E08;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821d4e08
	if (!ctx.cr6.eq) goto loc_821D4E08;
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r27,r5,48
	ctx.r27.s64 = ctx.r5.s64 + 48;
	// bl 0x821c7078
	ctx.lr = 0x821D4B9C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4bc8
	if (ctx.cr0.eq) goto loc_821D4BC8;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c9de8
	ctx.lr = 0x821D4BC0;
	sub_821C9DE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x821d4bcc
	goto loc_821D4BCC;
loc_821D4BC8:
	// li r30,0
	ctx.r30.s64 = 0;
loc_821D4BCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d4e08
	if (ctx.cr6.eq) goto loc_821D4E08;
	// lwz r31,16(r28)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r29,16(r26)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d4df0
	if (ctx.cr6.eq) goto loc_821D4DF0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x821d4c20
	if (!ctx.cr6.eq) goto loc_821D4C20;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821d4ce4
	if (ctx.cr6.eq) goto loc_821D4CE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4C10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4e08
	if (ctx.cr0.eq) goto loc_821D4E08;
	// b 0x821d4ce4
	goto loc_821D4CE4;
loc_821D4C20:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4df0
	if (!ctx.cr6.eq) goto loc_821D4DF0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821d4c50
	if (!ctx.cr6.eq) goto loc_821D4C50;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D4C3C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4cd4
	if (ctx.cr0.eq) goto loc_821D4CD4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// b 0x821d4cb8
	goto loc_821D4CB8;
loc_821D4C50:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4df0
	if (!ctx.cr6.eq) goto loc_821D4DF0;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x821d4c88
	if (!ctx.cr6.eq) goto loc_821D4C88;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D4C6C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4cd4
	if (ctx.cr0.eq) goto loc_821D4CD4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r8,32(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,0,22,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// b 0x821d4cc0
	goto loc_821D4CC0;
loc_821D4C88:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4df0
	if (!ctx.cr6.eq) goto loc_821D4DF0;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm. r11,r11,0,10,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821d4df0
	if (ctx.cr0.eq) goto loc_821D4DF0;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D4CA4;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4cd4
	if (ctx.cr0.eq) goto loc_821D4CD4;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r9,r11,0,10,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3FFE00;
	// rlwinm r9,r9,0,22,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE003FF;
loc_821D4CB8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
loc_821D4CC0:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,20(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x821c8ae8
	ctx.lr = 0x821D4CD0;
	sub_821C8AE8(ctx, base);
	// b 0x821d4cd8
	goto loc_821D4CD8;
loc_821D4CD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4CD8:
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d4e08
	if (ctx.cr6.eq) goto loc_821D4E08;
loc_821D4CE4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821d4d04
	if (ctx.cr6.eq) goto loc_821D4D04;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821d4d04
	if (!ctx.cr6.eq) goto loc_821D4D04;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821d4d14
	if (ctx.cr6.eq) goto loc_821D4D14;
loc_821D4D04:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3051
	ctx.r5.s64 = 3051;
	// addi r6,r11,-28084
	ctx.r6.s64 = ctx.r11.s64 + -28084;
	// b 0x821d4dfc
	goto loc_821D4DFC;
loc_821D4D14:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821D4D28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4e08
	if (ctx.cr0.eq) goto loc_821D4E08;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x821c7078
	ctx.lr = 0x821D4D3C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4d68
	if (ctx.cr0.eq) goto loc_821D4D68;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821c8ae8
	ctx.lr = 0x821D4D60;
	sub_821C8AE8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821d4d6c
	goto loc_821D4D6C;
loc_821D4D68:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821D4D6C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821d4e08
	if (ctx.cr6.eq) goto loc_821D4E08;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821d0310
	ctx.lr = 0x821D4D88;
	sub_821D0310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bne 0x821d4db0
	if (!ctx.cr0.eq) goto loc_821D4DB0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r5,8(r27)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x821d0760
	ctx.lr = 0x821D4DAC;
	sub_821D0760(ctx, base);
	// b 0x821d4e08
	goto loc_821D4E08;
loc_821D4DB0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821d4220
	ctx.lr = 0x821D4DD0;
	sub_821D4220(ctx, base);
	// stw r3,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d4e08
	if (ctx.cr0.eq) goto loc_821D4E08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821cefe0
	ctx.lr = 0x821D4DE8;
	sub_821CEFE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x821d4e0c
	goto loc_821D4E0C;
loc_821D4DF0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3021
	ctx.r5.s64 = 3021;
	// addi r6,r11,-28100
	ctx.r6.s64 = ctx.r11.s64 + -28100;
loc_821D4DFC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D4E08;
	sub_821CC878(ctx, base);
loc_821D4E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D4E0C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E3898) {
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
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
loc_821E38B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821adf78
	ctx.lr = 0x821E38C0;
	sub_821ADF78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e38dc
	if (!ctx.cr0.lt) goto loc_821E38DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r11,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_821E38D4:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E38DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821e3a1c
	if (ctx.cr6.gt) goto loc_821E3A1C;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-12872
	ctx.r12.s64 = ctx.r12.s64 + -12872;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32226
	ctx.r12.s64 = -2111963136;
	// nop 
	// addi r12,r12,14516
	ctx.r12.s64 = ctx.r12.s64 + 14516;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821E3A1C;
	case 1:
		goto loc_821E3910;
	case 2:
		goto loc_821E3924;
	case 3:
		goto loc_821E3924;
	case 4:
		goto loc_821E3924;
	case 5:
		goto loc_821E392C;
	case 6:
		goto loc_821E392C;
	case 7:
		goto loc_821E392C;
	case 8:
		goto loc_821E392C;
	case 9:
		goto loc_821E3934;
	case 10:
		goto loc_821E3A1C;
	case 11:
		goto loc_821E3A1C;
	case 12:
		goto loc_821E38B4;
	case 13:
		goto loc_821E38D4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821E3910:
	// lbz r11,25(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 25);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x821e3a1c
	if (!ctx.cr0.eq) goto loc_821E3A1C;
	// lbz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r31.u32 + 24);
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E3924:
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E392C:
	// li r3,271
	ctx.r3.s64 = 271;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E3934:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// addi r10,r11,-9896
	ctx.r10.s64 = ctx.r11.s64 + -9896;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821E3944:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821e3968
	if (ctx.cr0.eq) goto loc_821E3968;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e3944
	if (ctx.cr6.eq) goto loc_821E3944;
loc_821E3968:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821e3978
	if (!ctx.cr0.eq) goto loc_821E3978;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E3978:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,4172
	ctx.r10.s64 = ctx.r10.s64 + 4172;
loc_821E3984:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x821e39a8
	if (ctx.cr0.eq) goto loc_821E39A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e3984
	if (ctx.cr6.eq) goto loc_821E3984;
loc_821E39A8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821e39b8
	if (!ctx.cr0.eq) goto loc_821E39B8;
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E39B8:
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,4180
	ctx.r10.s64 = ctx.r10.s64 + 4180;
loc_821E39C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821e39e8
	if (ctx.cr0.eq) goto loc_821E39E8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821e39c4
	if (ctx.cr6.eq) goto loc_821E39C4;
loc_821E39E8:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821e39f8
	if (!ctx.cr0.eq) goto loc_821E39F8;
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E39F8:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821e3a14
	if (ctx.cr6.eq) goto loc_821E3A14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e25e0
	ctx.lr = 0x821E3A10;
	sub_821E25E0(ctx, base);
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E3A14:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x821e3a20
	goto loc_821E3A20;
loc_821E3A1C:
	// li r3,272
	ctx.r3.s64 = 272;
loc_821E3A20:
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

DEFINE_REX_FUNC(sub_821E8020) {
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
	// bl 0x821e4e68
	ctx.lr = 0x821E8040;
	sub_821E4E68(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821e8054
	if (ctx.cr0.eq) goto loc_821E8054;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821E8054;
	sub_8216B138(ctx, base);
loc_821E8054:
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

DEFINE_REX_FUNC(sub_821E8240) {
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
	// stw r6,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x821e8270
	goto loc_821E8270;
loc_821E8264:
	// lwz r31,36(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e8294
	if (ctx.cr6.eq) goto loc_821E8294;
loc_821E8270:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e5ee8
	ctx.lr = 0x821E8288;
	sub_821E5EE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e8264
	if (!ctx.cr0.lt) goto loc_821E8264;
	// b 0x821e8298
	goto loc_821E8298;
loc_821E8294:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E8298:
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

DEFINE_REX_FUNC(sub_821E85B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821E85B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// not r31,r5
	ctx.r31.u64 = ~ctx.r5.u64;
	// b 0x821e85d8
	goto loc_821E85D8;
loc_821E85CC:
	// lwz r31,36(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821e85fc
	if (ctx.cr6.eq) goto loc_821E85FC;
loc_821E85D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e7530
	ctx.lr = 0x821E85F0;
	sub_821E7530(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e85cc
	if (!ctx.cr0.lt) goto loc_821E85CC;
	// b 0x821e8600
	goto loc_821E8600;
loc_821E85FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E8600:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821E90F0) {
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
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bne cr6,0x821e912c
	if (!ctx.cr6.eq) goto loc_821E912C;
	// bl 0x821e8070
	ctx.lr = 0x821E9120;
	sub_821E8070(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821E912C;
	sub_8216B138(ctx, base);
loc_821E912C:
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

DEFINE_REX_FUNC(sub_821E97D0) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E98E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821e9914
	if (ctx.cr6.eq) goto loc_821E9914;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x8216b138
	ctx.lr = 0x821E9908;
	sub_8216B138(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_821E9914:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x821e992c
	if (ctx.cr6.eq) goto loc_821E992C;
	// bl 0x820e8f80
	ctx.lr = 0x821E9924;
	sub_820E8F80(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_821E992C:
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

DEFINE_REX_FUNC(sub_821E99F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821E9A00;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x821e9a80
	if (!ctx.cr6.gt) goto loc_821E9A80;
	// addi r10,r5,3
	ctx.r10.s64 = ctx.r5.s64 + 3;
	// lwz r29,20(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// b 0x821e9a4c
	goto loc_821E9A4C;
loc_821E9A48:
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_821E9A4C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x821e9a48
	if (ctx.cr6.gt) goto loc_821E9A48;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8216b018
	ctx.lr = 0x821E9A60;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821e9ab4
	if (ctx.cr0.eq) goto loc_821E9AB4;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r9,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x821e9a90
	goto loc_821E9A90;
loc_821E9A80:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x821e9aa4
	if (!ctx.cr6.gt) goto loc_821E9AA4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
loc_821E9A90:
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_821E9AA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_821E9AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EAB70) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821EAB78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821eab98
	if (!ctx.cr6.eq) goto loc_821EAB98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x821eace8
	goto loc_821EACE8;
loc_821EAB98:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821eabb0
	if (!ctx.cr6.eq) goto loc_821EABB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821eace8
	goto loc_821EACE8;
loc_821EABB0:
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_821EABC8:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r9,4(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821eac2c
	if (!ctx.cr6.eq) goto loc_821EAC2C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,8(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821eac2c
	if (!ctx.cr6.eq) goto loc_821EAC2C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821eac2c
	if (!ctx.cr6.eq) goto loc_821EAC2C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821eacd4
	if (ctx.cr6.eq) goto loc_821EACD4;
loc_821EAC2C:
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// oris r9,r10,45056
	ctx.r9.u64 = ctx.r10.u64 | 2952790016;
	// ori r9,r9,4096
	ctx.r9.u64 = ctx.r9.u64 | 4096;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,16(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821eac90
	if (ctx.cr6.lt) goto loc_821EAC90;
	// beq cr6,0x821eac88
	if (ctx.cr6.eq) goto loc_821EAC88;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821eac80
	if (ctx.cr6.lt) goto loc_821EAC80;
	// bne cr6,0x821eac90
	if (!ctx.cr6.eq) goto loc_821EAC90;
	// oris r9,r9,255
	ctx.r9.u64 = ctx.r9.u64 | 16711680;
	// b 0x821eac8c
	goto loc_821EAC8C;
loc_821EAC80:
	// oris r9,r9,170
	ctx.r9.u64 = ctx.r9.u64 | 11141120;
	// b 0x821eac8c
	goto loc_821EAC8C;
loc_821EAC88:
	// oris r9,r9,85
	ctx.r9.u64 = ctx.r9.u64 | 5570560;
loc_821EAC8C:
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_821EAC90:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821eaca4
	if (!ctx.cr6.eq) goto loc_821EACA4;
	// oris r11,r9,3328
	ctx.r11.u64 = ctx.r9.u64 | 218103808;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_821EACA4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,572(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 572);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mullw r4,r10,r29
	ctx.r4.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821EACCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821eace8
	if (ctx.cr0.lt) goto loc_821EACE8;
loc_821EACD4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x821eabc8
	if (ctx.cr6.lt) goto loc_821EABC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82208b90
	ctx.lr = 0x821EACE8;
	sub_82208B90(ctx, base);
loc_821EACE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EB008) {
	REX_FUNC_PROLOGUE();
	// lwz r12,0(r3)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,628(r12)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r12.u32 + 628);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821EDFF8) {
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
	// addi r4,r10,-6124
	ctx.r4.s64 = ctx.r10.s64 + -6124;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE01C;
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

DEFINE_REX_FUNC(sub_821EE158) {
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
	// addi r4,r10,-6012
	ctx.r4.s64 = ctx.r10.s64 + -6012;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE17C;
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

DEFINE_REX_FUNC(sub_821EE4C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821EE4C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,-5448
	ctx.r4.s64 = ctx.r11.s64 + -5448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE4E8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee520
	if (ctx.cr0.lt) goto loc_821EE520;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb370
	ctx.lr = 0x821EE4F8;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ee520
	if (ctx.cr0.lt) goto loc_821EE520;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r4,r11,-5468
	ctx.r4.s64 = ctx.r11.s64 + -5468;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821EE518;
	sub_821EB2A0(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
loc_821EE520:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EFEF0) {
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
	// addi r4,r11,-4468
	ctx.r4.s64 = ctx.r11.s64 + -4468;
	// bl 0x821eb2a0
	ctx.lr = 0x821EFF0C;
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

DEFINE_REX_FUNC(sub_821F0168) {
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
	// addi r4,r10,-4192
	ctx.r4.s64 = ctx.r10.s64 + -4192;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F018C;
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

DEFINE_REX_FUNC(sub_821F0530) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821F0538;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,-6500
	ctx.r27.s64 = ctx.r11.s64 + -6500;
	// lwz r11,1816(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 1816);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f05d0
	if (ctx.cr6.eq) goto loc_821F05D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-3784
	ctx.r29.s64 = ctx.r11.s64 + -3784;
loc_821F0568:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F0570;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f066c
	if (ctx.cr0.lt) goto loc_821F066C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821F0590;
	sub_821A4F40(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821F05A4;
	sub_821A4F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F05B8;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f066c
	if (ctx.cr0.lt) goto loc_821F066C;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f0568
	if (ctx.cr6.lt) goto loc_821F0568;
loc_821F05D0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821f0668
	if (ctx.cr6.eq) goto loc_821F0668;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-3820
	ctx.r29.s64 = ctx.r11.s64 + -3820;
loc_821F05E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eb370
	ctx.lr = 0x821F05EC;
	sub_821EB370(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f066c
	if (ctx.cr0.lt) goto loc_821F066C;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x821a4f40
	ctx.lr = 0x821F060C;
	sub_821A4F40(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x821a4f40
	ctx.lr = 0x821F0624;
	sub_821A4F40(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x821a4f40
	ctx.lr = 0x821F0638;
	sub_821A4F40(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821eb2a0
	ctx.lr = 0x821F0650;
	sub_821EB2A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821f066c
	if (ctx.cr0.lt) goto loc_821F066C;
	// lwz r11,1816(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1816);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821f05e4
	if (ctx.cr6.lt) goto loc_821F05E4;
loc_821F0668:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821F066C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821F4610) {
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
	// addi r5,r11,-2088
	ctx.r5.s64 = ctx.r11.s64 + -2088;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821f3d10
	ctx.lr = 0x821F463C;
	sub_821F3D10(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220a400
	ctx.lr = 0x821F4644;
	sub_8220A400(ctx, base);
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

DEFINE_REX_FUNC(sub_821F4B08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r9,20(r5)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r11,9925
	ctx.r10.s64 = ctx.r11.s64 + 9925;
	// lwzx r6,r8,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r5,r7,r9
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r8,96(r6)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r6.u32 + 96);
	// lwz r7,96(r5)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + 96);
	// lwz r11,36(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821f4b3c
	if (!ctx.cr6.eq) goto loc_821F4B3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_821F4B3C:
	// lwz r9,36(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 36);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821f4b4c
	if (ctx.cr6.eq) goto loc_821F4B4C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_821F4B4C:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// beq 0x821f4b70
	if (ctx.cr0.eq) goto loc_821F4B70;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f4b4c
	if (ctx.cr6.eq) goto loc_821F4B4C;
loc_821F4B70:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x821f4b80
	if (!ctx.cr0.gt) goto loc_821F4B80;
loc_821F4B78:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821F4B80:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x821f4b90
	if (!ctx.cr6.lt) goto loc_821F4B90;
loc_821F4B88:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_821F4B90:
	// lwz r11,20(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r9,20(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 20);
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
loc_821F4BA0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r4,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r4.u64;
	// beq 0x821f4bc4
	if (ctx.cr0.eq) goto loc_821F4BC4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821f4ba0
	if (ctx.cr6.eq) goto loc_821F4BA0;
loc_821F4BC4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bgt 0x821f4b78
	if (ctx.cr0.gt) goto loc_821F4B78;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x821f4b88
	if (ctx.cr6.lt) goto loc_821F4B88;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x821f4b78
	if (ctx.cr6.gt) goto loc_821F4B78;
	// blt cr6,0x821f4b88
	if (ctx.cr6.lt) goto loc_821F4B88;
	// lwz r11,116(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 116);
	// lwz r10,116(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 116);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f4b88
	if (ctx.cr6.lt) goto loc_821F4B88;
	// bgt cr6,0x821f4b78
	if (ctx.cr6.gt) goto loc_821F4B78;
	// lwz r11,16(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 16);
	// lwz r10,16(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x821f4b88
	if (ctx.cr6.lt) goto loc_821F4B88;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821F9E88) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821F9E90;
	__savegprlr_26(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,260(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r29,r11,2472
	ctx.r29.s64 = ctx.r11.s64 + 2472;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r8,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r5,r29,-128
	ctx.r5.s64 = ctx.r29.s64 + -128;
	// stw r26,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// clrlwi r30,r10,12
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r26,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r28,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// stw r11,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9EF4;
	sub_821F4EA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x821f9f28
	if (!ctx.cr6.eq) goto loc_821F9F28;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,260(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
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
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// bl 0x821f4ea8
	ctx.lr = 0x821F9F28;
	sub_821F4EA8(ctx, base);
loc_821F9F28:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x821fa01c
	if (!ctx.cr6.eq) goto loc_821FA01C;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821f9f78
	if (ctx.cr6.eq) goto loc_821F9F78;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
loc_821F9F40:
	// lwz r9,-16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f9f94
	if (!ctx.cr6.eq) goto loc_821F9F94;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x821f9f94
	if (!ctx.cr6.eq) goto loc_821F9F94;
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x821f9f94
	if (!ctx.cr6.eq) goto loc_821F9F94;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x821f9f40
	if (ctx.cr6.lt) goto loc_821F9F40;
loc_821F9F78:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x821f9f9c
	if (ctx.cr6.eq) goto loc_821F9F9C;
	// li r9,465
	ctx.r9.s64 = 465;
	// rlwimi r10,r9,22,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
	// b 0x821f9fa4
	goto loc_821F9FA4;
loc_821F9F94:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821fa01c
	goto loc_821FA01C;
loc_821F9F9C:
	// li r9,1861
	ctx.r9.s64 = 1861;
	// rlwimi r10,r9,20,0,11
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFF00000) | (ctx.r10.u64 & 0xFFFFFFFF000FFFFF);
loc_821F9FA4:
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// bl 0x8220ea28
	ctx.lr = 0x821F9FC4;
	sub_8220EA28(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821f9fd8
	if (!ctx.cr6.eq) goto loc_821F9FD8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821fa01c
	goto loc_821FA01C;
loc_821F9FD8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fa018
	if (ctx.cr6.eq) goto loc_821FA018;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
loc_821F9FEC:
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r8,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,260(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// stwx r3,r9,r10
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x821f9fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821F9FEC;
loc_821FA018:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821FA01C:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FC2B8) {
	REX_FUNC_PROLOGUE();
	// lis r11,29520
	ctx.r11.s64 = 1934622720;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc2f8
	if (ctx.cr6.eq) goto loc_821FC2F8;
	// lis r11,29536
	ctx.r11.s64 = 1935671296;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc2f8
	if (ctx.cr6.eq) goto loc_821FC2F8;
	// lis r11,29552
	ctx.r11.s64 = 1936719872;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc2f8
	if (ctx.cr6.eq) goto loc_821FC2F8;
	// lis r11,29568
	ctx.r11.s64 = 1937768448;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821fc2f8
	if (ctx.cr6.eq) goto loc_821FC2F8;
	// lis r11,4336
	ctx.r11.s64 = 284164096;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_821FC2F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FDBB0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x821FDBB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8220dd98
	ctx.lr = 0x821FDBD4;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821fdbe8
	if (ctx.cr0.eq) goto loc_821FDBE8;
	// bl 0x8220d6a0
	ctx.lr = 0x821FDBE0;
	sub_8220D6A0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x821fdbec
	goto loc_821FDBEC;
loc_821FDBE8:
	// li r28,0
	ctx.r28.s64 = 0;
loc_821FDBEC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x821fdc00
	if (!ctx.cr6.eq) goto loc_821FDC00;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x821fdd78
	goto loc_821FDD78;
loc_821FDC00:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fdc4c
	if (ctx.cr6.eq) goto loc_821FDC4C;
	// lwz r9,260(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
loc_821FDC20:
	// lwzx r8,r11,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,16(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r25
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x821fdc44
	if (ctx.cr6.eq) goto loc_821FDC44;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_821FDC44:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821fdc20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FDC20;
loc_821FDC4C:
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mullw r5,r27,r26
	ctx.r5.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r26.s32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// or r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 | ctx.r27.u64;
	// bl 0x8220de30
	ctx.lr = 0x821FDC70;
	sub_8220DE30(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821fdd60
	if (ctx.cr0.lt) goto loc_821FDD60;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,260(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821FDC84;
	sub_8220D6F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821fdd60
	if (ctx.cr0.lt) goto loc_821FDD60;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x821fdd44
	if (ctx.cr6.eq) goto loc_821FDD44;
loc_821FDC98:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821fdd38
	if (ctx.cr6.eq) goto loc_821FDD38;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
loc_821FDCB4:
	// lwz r10,260(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r11,20(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lwzx r4,r4,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r4,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821fdd2c
	if (ctx.cr6.eq) goto loc_821FDD2C;
	// mullw r11,r9,r30
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r30.s32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// add r3,r11,r7
	ctx.r3.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mullw r11,r9,r27
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r27.s32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// stwx r10,r11,r4
	REX_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u32);
	// bne cr6,0x821fdd24
	if (!ctx.cr6.eq) goto loc_821FDD24;
	// lwz r11,260(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 260);
	// lwz r10,16(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r8
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
loc_821FDD24:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_821FDD2C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x821fdcb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FDCB4;
loc_821FDD38:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x821fdc98
	if (ctx.cr6.lt) goto loc_821FDC98;
loc_821FDD44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220e8b8
	ctx.lr = 0x821FDD50;
	sub_8220E8B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x821fdd60
	if (ctx.cr0.lt) goto loc_821FDD60;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FDD60:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x821fdd78
	if (ctx.cr6.eq) goto loc_821FDD78;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82113c30
	ctx.lr = 0x821FDD70;
	sub_82113C30(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821FDD78;
	sub_8220DDF0(ctx, base);
loc_821FDD78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82203080) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82203088;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r27,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r27.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,104(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 104);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r8,0(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r8,0,2,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r8,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// lwz r30,24(r9)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// li r10,63
	ctx.r10.s64 = 63;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_822030CC:
	// lbz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x822030ec
	if (ctx.cr0.eq) goto loc_822030EC;
	// stb r8,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x822030cc
	if (!ctx.cr0.eq) goto loc_822030CC;
loc_822030EC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822030f8
	if (!ctx.cr6.eq) goto loc_822030F8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822030F8:
	// stb r27,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// b 0x82203118
	goto loc_82203118;
loc_82203108:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// beq cr6,0x82203120
	if (ctx.cr6.eq) goto loc_82203120;
	// lbzu r11,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r10.u32 = ea;
loc_82203118:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82203108
	if (!ctx.cr0.eq) goto loc_82203108;
loc_82203120:
	// lbz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// bne cr6,0x8220314c
	if (!ctx.cr6.eq) goto loc_8220314C;
	// stb r27,0(r10)
	REX_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,-26172
	ctx.r4.s64 = ctx.r11.s64 + -26172;
	// bl 0x8215f2c0
	ctx.lr = 0x82203140;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82203158
	if (!ctx.cr0.eq) goto loc_82203158;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8220314C:
	// lbz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 80);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// b 0x8220319c
	goto loc_8220319C;
loc_82203158:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r27,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// addi r6,r10,7956
	ctx.r6.s64 = ctx.r10.s64 + 7956;
	// li r5,4502
	ctx.r5.s64 = 4502;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221ff00
	ctx.lr = 0x82203180;
	sub_8221FF00(ctx, base);
	// b 0x82203398
	goto loc_82203398;
loc_82203184:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164f38
	ctx.lr = 0x82203190;
	sub_82164F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822031a4
	if (ctx.cr0.eq) goto loc_822031A4;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
loc_8220319C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82203184
	if (!ctx.cr0.eq) goto loc_82203184;
loc_822031A4:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822031c0
	if (ctx.cr0.eq) goto loc_822031C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82169c08
	ctx.lr = 0x822031B8;
	sub_82169C08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x822031c4
	goto loc_822031C4;
loc_822031C0:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_822031C4:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822031d8
	if (ctx.cr0.eq) goto loc_822031D8;
	// stb r27,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822031D8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// b 0x822031f0
	goto loc_822031F0;
loc_822031E0:
	// bl 0x82164f58
	ctx.lr = 0x822031E4;
	sub_82164F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822031f8
	if (ctx.cr0.eq) goto loc_822031F8;
	// lbzu r11,1(r30)
	ea = 1 + ctx.r30.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r30.u32 = ea;
loc_822031F0:
	// extsb. r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822031e0
	if (!ctx.cr0.eq) goto loc_822031E0;
loc_822031F8:
	// lbz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8220320c
	if (ctx.cr0.eq) goto loc_8220320C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// b 0x82203218
	goto loc_82203218;
loc_8220320C:
	// lwz r11,112(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 112);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82203218:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8220e5f8
	ctx.lr = 0x82203224;
	sub_8220E5F8(ctx, base);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82203388
	if (ctx.cr6.eq) goto loc_82203388;
loc_82203238:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x8215f2c0
	ctx.lr = 0x82203244;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82203260
	if (!ctx.cr0.eq) goto loc_82203260;
	// lhz r11,4(r26)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r26.u32 + 4);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82203270
	if (!ctx.cr0.eq) goto loc_82203270;
loc_82203260:
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82203238
	if (!ctx.cr6.eq) goto loc_82203238;
loc_82203270:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82203388
	if (ctx.cr6.eq) goto loc_82203388;
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82203388
	if (ctx.cr6.eq) goto loc_82203388;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x822032a4
	if (ctx.cr6.eq) goto loc_822032A4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822032a4
	if (!ctx.cr0.eq) goto loc_822032A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822032A4:
	// lwz r9,12(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822032d4
	if (ctx.cr6.eq) goto loc_822032D4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r6,r11,7896
	ctx.r6.s64 = ctx.r11.s64 + 7896;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r5,4705
	ctx.r5.s64 = 4705;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221ffb8
	ctx.lr = 0x822032D4;
	sub_8221FFB8(ctx, base);
loc_822032D4:
	// lwz r11,20(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 20);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822032ec
	if (ctx.cr6.lt) goto loc_822032EC;
	// lwz r11,24(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822032f8
	if (ctx.cr6.lt) goto loc_822032F8;
loc_822032EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_822032F8:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,32(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82203340
	if (ctx.cr6.lt) goto loc_82203340;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// addi r6,r9,7856
	ctx.r6.s64 = ctx.r9.s64 + 7856;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r10,0(r23)
	REX_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,4555
	ctx.r5.s64 = 4555;
	// lwz r4,104(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8221ff00
	ctx.lr = 0x8220333C;
	sub_8221FF00(ctx, base);
	// b 0x82203398
	goto loc_82203398;
loc_82203340:
	// lhz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r10,r22,16
	ctx.r10.u64 = ctx.r22.u32 & 0xFFFF;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8220335c
	if (!ctx.cr0.eq) goto loc_8220335C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8220335C:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lhz r10,18(r30)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r30.u32 + 18);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82203398
	if (ctx.cr6.eq) goto loc_82203398;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// b 0x82203394
	goto loc_82203394;
loc_82203388:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,108(r31)
	REX_STORE_U32(ctx.r31.u32 + 108, ctx.r27.u32);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
loc_82203394:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82203398:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220AEB8) {
	REX_FUNC_PROLOGUE();
	// b 0x82205e58
	sub_82205E58(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220AEC0) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8220AEC8;
	__savegprlr_29(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,-1
	ctx.r30.s64 = -1;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220b048
	if (!ctx.cr6.gt) goto loc_8220B048;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8220AEE4:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8220b034
	if (ctx.cr0.eq) goto loc_8220B034;
	// lwz r11,108(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x8220af1c
	if (ctx.cr6.eq) goto loc_8220AF1C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bne cr6,0x8220b034
	if (!ctx.cr6.eq) goto loc_8220B034;
loc_8220AF1C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bne 0x8220b034
	if (!ctx.cr0.eq) goto loc_8220B034;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmplwi cr6,r10,17
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17, ctx.xer);
	// bne cr6,0x8220af54
	if (!ctx.cr6.eq) goto loc_8220AF54;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x8220b034
	if (!ctx.cr6.eq) goto loc_8220B034;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
loc_8220AF54:
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// bne cr6,0x8220af84
	if (!ctx.cr6.eq) goto loc_8220AF84;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x8220af80
	if (ctx.cr6.eq) goto loc_8220AF80;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x8220b034
	goto loc_8220B034;
loc_8220AF80:
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_8220AF84:
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8220b034
	if (!ctx.cr6.gt) goto loc_8220B034;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8220AFA0:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r9,r5,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8220b00c
	if (!ctx.cr6.eq) goto loc_8220B00C;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r29,4(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r9,r9,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8220b00c
	if (ctx.cr0.eq) goto loc_8220B00C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x8220b00c
	if (!ctx.cr6.gt) goto loc_8220B00C;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8220aff8
	if (ctx.cr6.gt) goto loc_8220AFF8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
loc_8220AFF8:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8220B00C:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220afa0
	if (ctx.cr6.lt) goto loc_8220AFA0;
	// cmpwi cr6,r7,-1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -1, ctx.xer);
	// beq cr6,0x8220b034
	if (ctx.cr6.eq) goto loc_8220B034;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
loc_8220B034:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220aee4
	if (ctx.cr6.lt) goto loc_8220AEE4;
loc_8220B048:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8220EE30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8220EE38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r11,65535
	ctx.r26.u64 = ctx.r11.u64 | 65535;
	// stw r29,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8220ee70
	if (!ctx.cr6.gt) goto loc_8220EE70;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8220EE70:
	// bl 0x820ef558
	ctx.lr = 0x8220EE74;
	sub_820EF558(ctx, base);
	// stw r3,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8220ee8c
	if (!ctx.cr0.eq) goto loc_8220EE8C;
loc_8220EE80:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8220efa4
	goto loc_8220EFA4;
loc_8220EE8C:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220eecc
	if (!ctx.cr6.gt) goto loc_8220EECC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8220EEA0:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x8220eb60
	ctx.lr = 0x8220EEB0;
	sub_8220EB60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8220ee80
	if (ctx.cr6.eq) goto loc_8220EE80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220eea0
	if (ctx.cr6.lt) goto loc_8220EEA0;
loc_8220EECC:
	// stw r29,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// stw r11,32(r30)
	REX_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x8220eee8
	if (!ctx.cr6.gt) goto loc_8220EEE8;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8220EEE8:
	// bl 0x820ef558
	ctx.lr = 0x8220EEEC;
	sub_820EF558(ctx, base);
	// stw r3,20(r30)
	REX_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220ee80
	if (ctx.cr0.eq) goto loc_8220EE80;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220ef38
	if (!ctx.cr6.gt) goto loc_8220EF38;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_8220EF0C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r28
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x8220ebe8
	ctx.lr = 0x8220EF1C;
	sub_8220EBE8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8220ee80
	if (ctx.cr6.eq) goto loc_8220EE80;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220ef0c
	if (ctx.cr6.lt) goto loc_8220EF0C;
loc_8220EF38:
	// stw r29,12(r30)
	REX_STORE_U32(ctx.r30.u32 + 12, ctx.r29.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,36(r30)
	REX_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// ble cr6,0x8220ef54
	if (!ctx.cr6.gt) goto loc_8220EF54;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_8220EF54:
	// bl 0x820ef558
	ctx.lr = 0x8220EF58;
	sub_820EF558(ctx, base);
	// stw r3,24(r30)
	REX_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8220ee80
	if (ctx.cr0.eq) goto loc_8220EE80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8220efa0
	if (!ctx.cr6.gt) goto loc_8220EFA0;
loc_8220EF74:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r4,r11,r29
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// bl 0x8220ec68
	ctx.lr = 0x8220EF84;
	sub_8220EC68(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8220ee80
	if (ctx.cr6.eq) goto loc_8220EE80;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8220ef74
	if (ctx.cr6.lt) goto loc_8220EF74;
loc_8220EFA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8220EFA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82212DA0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,9908
	ctx.r11.s64 = ctx.r11.s64 + 9908;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82212dcc
	if (ctx.cr0.eq) goto loc_82212DCC;
	// bl 0x8215e470
	ctx.lr = 0x82212DCC;
	sub_8215E470(ctx, base);
loc_82212DCC:
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

DEFINE_REX_FUNC(sub_82213530) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82213538;
	__savegprlr_28(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x822135a8
	if (!ctx.cr6.gt) goto loc_822135A8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8221354C:
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r6,r10,0,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x30;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82213580
	if (ctx.cr0.eq) goto loc_82213580;
	// rlwinm. r10,r10,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82213580
	if (!ctx.cr0.eq) goto loc_82213580;
	// lwz r10,116(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 116);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82213580:
	// lwz r10,4(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82213594
	if (ctx.cr0.eq) goto loc_82213594;
	// lwz r10,136(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82213594:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8221354c
	if (ctx.cr6.lt) goto loc_8221354C;
loc_822135A8:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82213800
	if (!ctx.cr6.gt) goto loc_82213800;
	// li r30,0
	ctx.r30.s64 = 0;
loc_822135BC:
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r31,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822137ec
	if (ctx.cr0.eq) goto loc_822137EC;
	// lwz r5,12(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82213620
	if (ctx.cr6.eq) goto loc_82213620;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rotlwi r7,r5,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_822135F4:
	// lwzx r28,r10,r9
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r28,r8
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// lwz r28,0(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r28,r28,0,26,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82213610
	if (ctx.cr0.eq) goto loc_82213610;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82213610:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x822135f4
	if (ctx.cr6.lt) goto loc_822135F4;
loc_82213620:
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82213634
	if (!ctx.cr6.eq) goto loc_82213634;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x822137ec
	goto loc_822137EC;
loc_82213634:
	// bge cr6,0x82213770
	if (!ctx.cr6.lt) goto loc_82213770;
	// rlwinm r10,r31,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000000;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82213770
	if (ctx.cr6.lt) goto loc_82213770;
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82213770
	if (ctx.cr6.gt) goto loc_82213770;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r31,12
	ctx.r9.u64 = ctx.r31.u32 & 0xFFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// divwu r4,r10,r9
	ctx.r4.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// twllei r9,0
	if (ctx.r9.s32 == 0 || ctx.r9.u32 < 0u) ppc_trap(ctx, base, 0);
	// beq cr6,0x822136fc
	if (ctx.cr6.eq) goto loc_822136FC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_8221367C:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r31,r7,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822136e8
	if (!ctx.cr0.eq) goto loc_822136E8;
	// lwzx r31,r7,r9
	ctx.r31.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stwx r31,r5,r9
	REX_STORE_U32(ctx.r5.u32 + ctx.r9.u32, ctx.r31.u32);
	// beq cr6,0x822136e0
	if (ctx.cr6.eq) goto loc_822136E0;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_822136B4:
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r28,r9,r6
	ctx.r28.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r28,r28,r31
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// stwx r28,r9,r31
	REX_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r28.u32);
	// bdnz 0x822136b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822136B4;
loc_822136E0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
loc_822136E8:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8221367c
	if (ctx.cr6.lt) goto loc_8221367C;
loc_822136FC:
	// li r9,1
	ctx.r9.s64 = 1;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x82213758
	if (!ctx.cr6.gt) goto loc_82213758;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8221370C:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82213748
	if (ctx.cr6.eq) goto loc_82213748;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8221371C:
	// lwz r6,12(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// add r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mullw r6,r6,r9
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r6,r6,r31
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// stwx r6,r5,r31
	REX_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r6.u32);
	// bdnz 0x8221371c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221371C;
loc_82213748:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8221370c
	if (ctx.cr6.lt) goto loc_8221370C;
loc_82213758:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r8,r4
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r8,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// rlwimi r10,r8,0,12,31
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF00000);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82213770:
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x822137ec
	if (!ctx.cr6.gt) goto loc_822137EC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82213784:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r6,20(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r6
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r10,20(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwz r7,24(r9)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// b 0x822137c8
	goto loc_822137C8;
loc_822137A4:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r5,r6
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r31,0(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r31,r31,0,26,26
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822137d0
	if (ctx.cr0.eq) goto loc_822137D0;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwzx r7,r5,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r10,20(r7)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r7.u32 + 20);
	// lwz r7,24(r7)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + 24);
loc_822137C8:
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x822137a4
	if (!ctx.cr6.eq) goto loc_822137A4;
loc_822137D0:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r7,24(r9)
	REX_STORE_U32(ctx.r9.u32 + 24, ctx.r7.u32);
	// stw r10,20(r9)
	REX_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82213784
	if (ctx.cr6.lt) goto loc_82213784;
loc_822137EC:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822135bc
	if (ctx.cr6.lt) goto loc_822135BC;
loc_82213800:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82223060) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x82223068;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r3)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwzx r16,r9,r11
	ctx.r16.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r8,4(r16)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r16.u32 + 4);
	// lwz r17,48(r9)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r9.u32 + 48);
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r17,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r23,r8,r11
	ctx.r23.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822233d0
	if (ctx.cr0.eq) goto loc_822233D0;
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822233d0
	if (!ctx.cr0.eq) goto loc_822233D0;
	// rlwinm r26,r10,0,0,11
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r5,r10,0,25,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822230ec
	if (!ctx.cr6.eq) goto loc_822230EC;
	// or r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r17,48(r16)
	REX_STORE_U32(ctx.r16.u32 + 48, ctx.r17.u32);
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// b 0x822233d0
	goto loc_822233D0;
loc_822230EC:
	// lwz r10,0(r16)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// lis r8,4112
	ctx.r8.s64 = 269484032;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// lis r3,4144
	ctx.r3.s64 = 271581184;
	// rlwinm. r31,r11,0,4,6
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// lis r10,4160
	ctx.r10.s64 = 272629760;
	// lis r7,4304
	ctx.r7.s64 = 282066944;
	// lis r6,4320
	ctx.r6.s64 = 283115520;
	// bne 0x82223154
	if (!ctx.cr0.eq) goto loc_82223154;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82223140
	if (ctx.cr6.eq) goto loc_82223140;
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82223140
	if (ctx.cr6.eq) goto loc_82223140;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223140
	if (ctx.cr6.eq) goto loc_82223140;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82223140
	if (ctx.cr6.eq) goto loc_82223140;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82223154
	if (!ctx.cr6.eq) goto loc_82223154;
loc_82223140:
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r16)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
loc_82223154:
	// lis r21,4176
	ctx.r21.s64 = 273678336;
	// lis r20,4208
	ctx.r20.s64 = 275775488;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822231b0
	if (ctx.cr6.eq) goto loc_822231B0;
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82223190
	if (ctx.cr6.eq) goto loc_82223190;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223184
	if (ctx.cr6.eq) goto loc_82223184;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82223184
	if (ctx.cr6.eq) goto loc_82223184;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822231d0
	if (!ctx.cr6.eq) goto loc_822231D0;
loc_82223184:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x822231cc
	goto loc_822231CC;
loc_82223190:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822231a0
	if (ctx.cr0.eq) goto loc_822231A0;
	// rlwinm. r11,r9,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82223184
	if (!ctx.cr0.eq) goto loc_82223184;
loc_822231A0:
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r31,r9,0,28,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// b 0x822231cc
	goto loc_822231CC;
loc_822231B0:
	// rlwinm r11,r9,31,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x4;
	// lwz r31,0(r16)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// rlwinm r30,r9,1,28,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x8;
	// rlwinm r29,r9,0,30,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
loc_822231CC:
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
loc_822231D0:
	// lwz r11,4(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r18,16(r22)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r22.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r31,r11,0,23,23
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82223494
	if (ctx.cr0.eq) goto loc_82223494;
	// lwz r31,8(r23)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82223494
	if (!ctx.cr6.eq) goto loc_82223494;
	// lis r11,4224
	ctx.r11.s64 = 276824064;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82223370
	if (ctx.cr6.gt) goto loc_82223370;
	// beq cr6,0x82223364
	if (ctx.cr6.eq) goto loc_82223364;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82223358
	if (ctx.cr6.eq) goto loc_82223358;
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82223328
	if (ctx.cr6.eq) goto loc_82223328;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82223304
	if (ctx.cr6.eq) goto loc_82223304;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x822232f0
	if (ctx.cr6.eq) goto loc_822232F0;
	// lis r11,4192
	ctx.r11.s64 = 274726912;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8222329c
	if (ctx.cr6.eq) goto loc_8222329C;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82223290
	if (!ctx.cr6.eq) goto loc_82223290;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// lfd f31,1792(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82223268
	if (!ctx.cr6.lt) goto loc_82223268;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4003
	ctx.r5.s64 = 4003;
	// addi r6,r11,10456
	ctx.r6.s64 = ctx.r11.s64 + 10456;
	// b 0x8222327c
	goto loc_8222327C;
loc_82223268:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82223290
	if (!ctx.cr6.eq) goto loc_82223290;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4001
	ctx.r5.s64 = 4001;
	// addi r6,r11,10436
	ctx.r6.s64 = ctx.r11.s64 + 10436;
loc_8222327C:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x8221ff00
	ctx.lr = 0x82223288;
	sub_8221FF00(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x822233b8
	goto loc_822233B8;
loc_82223290:
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// fsqrt f13,f0
	ctx.f13.f64 = sqrt(ctx.f0.f64);
	// b 0x82223348
	goto loc_82223348;
loc_8222329C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// bne cr6,0x822232b8
	if (!ctx.cr6.eq) goto loc_822232B8;
	// lfd f0,32(r23)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x822233d0
	if (ctx.cr6.eq) goto loc_822233D0;
loc_822232B8:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bge cr6,0x822232d4
	if (!ctx.cr6.lt) goto loc_822232D4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4002
	ctx.r5.s64 = 4002;
	// addi r6,r11,10412
	ctx.r6.s64 = ctx.r11.s64 + 10412;
	// b 0x8222327c
	goto loc_8222327C;
loc_822232D4:
	// bl 0x82160c10
	ctx.lr = 0x822232D8;
	sub_82160C10(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f1,26280(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160c10
	ctx.lr = 0x822232E8;
	sub_82160C10(ctx, base);
	// fdiv f1,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64 / ctx.f1.f64;
	// b 0x822233b8
	goto loc_822233B8;
loc_822232F0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f2,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// lfd f1,26280(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160690
	ctx.lr = 0x82223300;
	sub_82160690(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_82223304:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x82164960
	ctx.lr = 0x8222330C;
	sub_82164960(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822233b0
	if (ctx.cr0.eq) goto loc_822233B0;
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x82160240
	ctx.lr = 0x8222331C;
	sub_82160240(ctx, base);
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// fsub f1,f0,f1
	ctx.f1.f64 = ctx.f0.f64 - ctx.f1.f64;
	// b 0x822233b8
	goto loc_822233B8;
loc_82223328:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82223344
	if (!ctx.cr6.eq) goto loc_82223344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// lfd f1,1792(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beq cr6,0x822233b8
	if (ctx.cr6.eq) goto loc_822233B8;
loc_82223344:
	// lfd f13,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
loc_82223348:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fdiv f1,f0,f13
	ctx.f1.f64 = ctx.f0.f64 / ctx.f13.f64;
	// b 0x822233b8
	goto loc_822233B8;
loc_82223358:
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x822233b8
	goto loc_822233B8;
loc_82223364:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x8215fd78
	ctx.lr = 0x8222336C;
	sub_8215FD78(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_82223370:
	// lis r11,4240
	ctx.r11.s64 = 277872640;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82223488
	if (ctx.cr6.eq) goto loc_82223488;
	// lis r11,4256
	ctx.r11.s64 = 278921216;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82223440
	if (ctx.cr6.eq) goto loc_82223440;
	// lis r11,4272
	ctx.r11.s64 = 279969792;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822233ec
	if (ctx.cr6.eq) goto loc_822233EC;
	// lis r11,4288
	ctx.r11.s64 = 281018368;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822233e0
	if (ctx.cr6.eq) goto loc_822233E0;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822233b0
	if (ctx.cr6.eq) goto loc_822233B0;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
loc_822233B0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_822233B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8220ea28
	ctx.lr = 0x822233CC;
	sub_8220EA28(ctx, base);
	// stw r3,48(r16)
	REX_STORE_U32(ctx.r16.u32 + 48, ctx.r3.u32);
loc_822233D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
loc_822233E0:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x82160280
	ctx.lr = 0x822233E8;
	sub_82160280(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_822233EC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82223434
	if (!ctx.cr6.eq) goto loc_82223434;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// lfd f13,6896(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 6896);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82223418
	if (ctx.cr6.lt) goto loc_82223418;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-9888(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82223434
	if (!ctx.cr6.gt) goto loc_82223434;
loc_82223418:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4006
	ctx.r5.s64 = 4006;
	// addi r6,r11,10388
	ctx.r6.s64 = ctx.r11.s64 + 10388;
loc_82223424:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// bl 0x8221ff00
	ctx.lr = 0x82223430;
	sub_8221FF00(ctx, base);
	// b 0x822233b0
	goto loc_822233B0;
loc_82223434:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x8219e070
	ctx.lr = 0x8222343C;
	sub_8219E070(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_82223440:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x8222347c
	if (!ctx.cr6.eq) goto loc_8222347C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// lfd f13,6896(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 6896);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x8222346c
	if (ctx.cr6.lt) goto loc_8222346C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f13,-9888(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8222347c
	if (!ctx.cr6.gt) goto loc_8222347C;
loc_8222346C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4005
	ctx.r5.s64 = 4005;
	// addi r6,r11,10368
	ctx.r6.s64 = ctx.r11.s64 + 10368;
	// b 0x82223424
	goto loc_82223424;
loc_8222347C:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x8219dfa8
	ctx.lr = 0x82223484;
	sub_8219DFA8(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_82223488:
	// lfd f1,32(r23)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r23.u32 + 32);
	// bl 0x8215fe58
	ctx.lr = 0x82223490;
	sub_8215FE58(ctx, base);
	// b 0x822233b8
	goto loc_822233B8;
loc_82223494:
	// clrlwi. r31,r9,31
	ctx.r31.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822234a4
	if (ctx.cr0.eq) goto loc_822234A4;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822233b0
	if (ctx.cr6.eq) goto loc_822233B0;
loc_822234A4:
	// rlwinm. r31,r9,0,30,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822234b4
	if (ctx.cr0.eq) goto loc_822234B4;
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822233b0
	if (ctx.cr6.eq) goto loc_822233B0;
loc_822234B4:
	// rlwinm. r10,r9,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r19,4192
	ctx.r19.s64 = 274726912;
	// beq 0x82223514
	if (ctx.cr0.eq) goto loc_82223514;
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822234e8
	if (ctx.cr6.eq) goto loc_822234E8;
	// cmplw cr6,r26,r20
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82223514
	if (!ctx.cr6.eq) goto loc_82223514;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,4003
	ctx.r5.s64 = 4003;
	// addi r6,r11,10456
	ctx.r6.s64 = ctx.r11.s64 + 10456;
	// b 0x82223424
	goto loc_82223424;
loc_822234E8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822233d0
	if (!ctx.cr0.eq) goto loc_822233D0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,60(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// li r5,4002
	ctx.r5.s64 = 4002;
	// addi r6,r11,10412
	ctx.r6.s64 = ctx.r11.s64 + 10412;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8221ff00
	ctx.lr = 0x82223510;
	sub_8221FF00(ctx, base);
	// b 0x822233d0
	goto loc_822233D0;
loc_82223514:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8222352c
	if (ctx.cr0.eq) goto loc_8222352C;
	// cmplw cr6,r26,r7
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x822233b0
	if (ctx.cr6.eq) goto loc_822233B0;
	// cmplw cr6,r26,r6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x822233b0
	if (ctx.cr6.eq) goto loc_822233B0;
loc_8222352C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822233d0
	if (ctx.cr0.eq) goto loc_822233D0;
	// cmplw cr6,r26,r8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82223564
	if (!ctx.cr6.eq) goto loc_82223564;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x822235dc
	if (ctx.cr6.eq) goto loc_822235DC;
loc_82223564:
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x8222358c
	if (!ctx.cr6.eq) goto loc_8222358C;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822235dc
	if (ctx.cr6.eq) goto loc_822235DC;
loc_8222358C:
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x822235b4
	if (!ctx.cr6.eq) goto loc_822235B4;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// beq cr6,0x822235dc
	if (ctx.cr6.eq) goto loc_822235DC;
loc_822235B4:
	// cmplw cr6,r26,r19
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8222363c
	if (!ctx.cr6.eq) goto loc_8222363C;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r10,24(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r21
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x8222363c
	if (!ctx.cr6.eq) goto loc_8222363C;
loc_822235DC:
	// lwz r8,12(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82223610
	if (ctx.cr6.eq) goto loc_82223610;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_822235F4:
	// lwzx r6,r10,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x82223610
	if (ctx.cr6.eq) goto loc_82223610;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822235f4
	if (ctx.cr6.lt) goto loc_822235F4;
loc_82223610:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x8222363c
	if (!ctx.cr6.lt) goto loc_8222363C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
loc_82223634:
	// stw r11,48(r16)
	REX_STORE_U32(ctx.r16.u32 + 48, ctx.r11.u32);
	// b 0x822233d0
	goto loc_822233D0;
loc_8222363C:
	// lis r24,8272
	ctx.r24.s64 = 542113792;
	// cmplw cr6,r26,r3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82223768
	if (!ctx.cr6.eq) goto loc_82223768;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r25,24(r22)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82223768
	if (!ctx.cr6.eq) goto loc_82223768;
	// lwz r7,12(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8222369c
	if (ctx.cr6.eq) goto loc_8222369C;
	// lwz r8,16(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223680:
	// lwzx r6,r11,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x8222369c
	if (ctx.cr6.eq) goto loc_8222369C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82223680
	if (ctx.cr6.lt) goto loc_82223680;
loc_8222369C:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r30,20(r22)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r27,r11,-4
	ctx.r27.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-4));
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_822236C8:
	// lwz r3,0(r8)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r29,0(r9)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r18
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82223754
	if (ctx.cr0.eq) goto loc_82223754;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r25
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82223754
	if (!ctx.cr6.eq) goto loc_82223754;
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82223740
	if (ctx.cr6.eq) goto loc_82223740;
	// lwz r6,16(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
loc_82223724:
	// lwzx r15,r11,r6
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// cmplw cr6,r15,r3
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82223740
	if (ctx.cr6.eq) goto loc_82223740;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82223724
	if (ctx.cr6.lt) goto loc_82223724;
loc_82223740:
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8222388c
	if (ctx.cr6.eq) goto loc_8222388C;
loc_82223754:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r9,r27,r9
	ctx.r9.u64 = ctx.r27.u64 + ctx.r9.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x822236c8
	if (ctx.cr6.lt) goto loc_822236C8;
loc_82223768:
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// lwz r11,72(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 72);
	// lwz r30,24(r22)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r22.u32 + 24);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r24
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822233d0
	if (!ctx.cr6.eq) goto loc_822233D0;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822237c4
	if (ctx.cr6.eq) goto loc_822237C4;
	// lwz r7,16(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r8,0
	ctx.r8.s64 = 0;
loc_822237A8:
	// lwzx r6,r8,r7
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplw cr6,r6,r17
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x822237c4
	if (ctx.cr6.eq) goto loc_822237C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822237a8
	if (ctx.cr6.lt) goto loc_822237A8;
loc_822237C4:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,20(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822237DC:
	// lwz r5,0(r6)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r18
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82223878
	if (ctx.cr0.eq) goto loc_82223878;
	// lwz r11,72(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r19
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x82223878
	if (!ctx.cr6.eq) goto loc_82223878;
	// lwz r7,12(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82223850
	if (ctx.cr6.eq) goto loc_82223850;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82223834:
	// lwzx r29,r10,r8
	ctx.r29.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplw cr6,r29,r5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82223850
	if (ctx.cr6.eq) goto loc_82223850;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82223834
	if (ctx.cr6.lt) goto loc_82223834;
loc_82223850:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82223878
	if (ctx.cr0.eq) goto loc_82223878;
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822233b0
	if (!ctx.cr0.eq) goto loc_822233B0;
loc_82223878:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x822237dc
	if (ctx.cr6.lt) goto loc_822237DC;
	// b 0x822233d0
	goto loc_822233D0;
loc_8222388C:
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// b 0x82223634
	goto loc_82223634;
}

DEFINE_REX_FUNC(sub_8223CFA0) {
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
	// lwz r9,200(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 200);
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// lwz r8,112(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 112);
	// li r7,256
	ctx.r7.s64 = 256;
	// ori r10,r10,257
	ctx.r10.u64 = ctx.r10.u64 | 257;
	// oris r8,r8,256
	ctx.r8.u64 = ctx.r8.u64 | 16777216;
	// stw r7,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// subf. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r8,112(r3)
	REX_STORE_U32(ctx.r3.u32 + 112, ctx.r8.u32);
	// stw r9,268(r3)
	REX_STORE_U32(ctx.r3.u32 + 268, ctx.r9.u32);
	// beq 0x8223d128
	if (ctx.cr0.eq) goto loc_8223D128;
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// beq cr6,0x8223d0dc
	if (ctx.cr6.eq) goto loc_8223D0DC;
	// cmplwi cr6,r10,257
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 257, ctx.xer);
	// beq cr6,0x8223d074
	if (ctx.cr6.eq) goto loc_8223D074;
	// cmplwi cr6,r10,510
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 510, ctx.xer);
	// beq cr6,0x8223d014
	if (ctx.cr6.eq) goto loc_8223D014;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r10,19488
	ctx.r6.s64 = ctx.r10.s64 + 19488;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8221ff00
	ctx.lr = 0x8223D008;
	sub_8221FF00(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8223d17c
	goto loc_8223D17C;
loc_8223D014:
	// lwz r6,108(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r7,2048
	ctx.r7.s64 = 2048;
	// li r5,32
	ctx.r5.s64 = 32;
	// oris r6,r6,64
	ctx.r6.u64 = ctx.r6.u64 | 4194304;
	// stw r7,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r7.u32);
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r7.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r6,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r6.u32);
	// oris r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 268435456;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
	// stw r7,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r7.u32);
	// stw r5,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r5.u32);
	// b 0x8223d14c
	goto loc_8223D14C;
loc_8223D074:
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,8192
	ctx.r4.s64 = 8192;
	// lis r6,-2
	ctx.r6.s64 = -131072;
	// stw r5,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r5.u32);
	// oris r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 4194304;
	// stw r4,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r3,255
	ctx.r3.s64 = 255;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// ori r7,r7,513
	ctx.r7.u64 = ctx.r7.u64 | 513;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// stw r3,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r3.u32);
	// ori r6,r6,513
	ctx.r6.u64 = ctx.r6.u64 | 513;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// oris r8,r8,4096
	ctx.r8.u64 = ctx.r8.u64 | 268435456;
	// stw r7,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// stw r5,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r5.u32);
	// stw r4,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r4.u32);
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r6,200(r11)
	REX_STORE_U32(ctx.r11.u32 + 200, ctx.r6.u32);
	// b 0x8223d14c
	goto loc_8223D14C;
loc_8223D0DC:
	// lwz r7,108(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r6,12
	ctx.r6.s64 = 12;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r7,r7,64
	ctx.r7.u64 = ctx.r7.u64 | 4194304;
	// stw r6,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// li r5,255
	ctx.r5.s64 = 255;
	// stw r9,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r9.u32);
	// ori r7,r7,512
	ctx.r7.u64 = ctx.r7.u64 | 512;
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// stw r10,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// oris r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 536870912;
	// stw r5,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r5.u32);
	// stw r7,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r7.u32);
	// stw r6,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r6.u32);
	// stw r9,92(r11)
	REX_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// b 0x8223d14c
	goto loc_8223D14C;
loc_8223D128:
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,10
	ctx.r6.s64 = 10;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r7,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r6,100(r11)
	REX_STORE_U32(ctx.r11.u32 + 100, ctx.r6.u32);
	// oris r8,r8,8194
	ctx.r8.u64 = ctx.r8.u64 | 537001984;
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
loc_8223D14C:
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r9,108(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r7,44(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// oris r8,r8,96
	ctx.r8.u64 = ctx.r8.u64 | 6291456;
	// oris r9,r9,256
	ctx.r9.u64 = ctx.r9.u64 | 16777216;
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stw r9,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r9.u32);
	// stw r8,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r8.u32);
	// stw r7,468(r11)
	REX_STORE_U32(ctx.r11.u32 + 468, ctx.r7.u32);
loc_8223D17C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82240A08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82240A10;
	__savegprlr_14(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r17,0
	ctx.r17.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// std r17,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
	// std r17,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r17.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r17,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
	// mr r15,r17
	ctx.r15.u64 = ctx.r17.u64;
	// stw r17,8(r9)
	REX_STORE_U32(ctx.r9.u32 + 8, ctx.r17.u32);
	// bne cr6,0x82240a50
	if (!ctx.cr6.eq) goto loc_82240A50;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82241968
	goto loc_82241968;
loc_82240A50:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822295e8
	ctx.lr = 0x82240A5C;
	sub_822295E8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lwz r5,56(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r8,99
	ctx.r8.s64 = 99;
	// lwz r4,124(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// ori r7,r7,8320
	ctx.r7.u64 = ctx.r7.u64 | 8320;
	// li r6,512
	ctx.r6.s64 = 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821ff008
	ctx.lr = 0x82240A84;
	sub_821FF008(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r30,8(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// std r11,0(r10)
	REX_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// std r17,0(r9)
	REX_STORE_U64(ctx.r9.u32 + 0, ctx.r17.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// std r11,8(r10)
	REX_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r17,8(r9)
	REX_STORE_U64(ctx.r9.u32 + 8, ctx.r17.u64);
	// beq cr6,0x82240bd8
	if (ctx.cr6.eq) goto loc_82240BD8;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// lwz r6,120(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r5,132(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r4,180(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,184(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
loc_82240AD8:
	// lwzx r10,r8,r7
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b00
	if (!ctx.cr6.eq) goto loc_82240B00;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// ble cr6,0x82240b00
	if (!ctx.cr6.gt) goto loc_82240B00;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// b 0x82240b20
	goto loc_82240B20;
loc_82240B00:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b20
	if (!ctx.cr6.eq) goto loc_82240B20;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82240b20
	if (!ctx.cr6.gt) goto loc_82240B20;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82240B20:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b58
	if (!ctx.cr6.eq) goto loc_82240B58;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,160(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82240b3c
	if (!ctx.cr6.gt) goto loc_82240B3C;
	// stw r11,160(r1)
	REX_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
loc_82240B3C:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b58
	if (!ctx.cr6.eq) goto loc_82240B58;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,144(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82240b58
	if (!ctx.cr6.lt) goto loc_82240B58;
	// stw r11,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_82240B58:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b90
	if (!ctx.cr6.eq) goto loc_82240B90;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,164(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82240b74
	if (!ctx.cr6.gt) goto loc_82240B74;
	// stw r11,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
loc_82240B74:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240b90
	if (!ctx.cr6.eq) goto loc_82240B90;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,148(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82240b90
	if (!ctx.cr6.lt) goto loc_82240B90;
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
loc_82240B90:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240bc8
	if (!ctx.cr6.eq) goto loc_82240BC8;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r27,168(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82240bac
	if (!ctx.cr6.gt) goto loc_82240BAC;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
loc_82240BAC:
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240bc8
	if (!ctx.cr6.eq) goto loc_82240BC8;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,152(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82240bc8
	if (!ctx.cr6.lt) goto loc_82240BC8;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
loc_82240BC8:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240ad8
	if (ctx.cr6.lt) goto loc_82240AD8;
loc_82240BD8:
	// lwz r11,180(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 180);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// lwz r10,184(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 184);
	// li r19,1
	ctx.r19.s64 = 1;
	// lwz r9,132(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r10,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r9,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
loc_82240BF8:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwzx r27,r25,r11
	ctx.r27.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82240d8c
	if (ctx.cr6.eq) goto loc_82240D8C;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwzx r11,r25,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r11.u32);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x82240C24;
	sub_8216B018(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82240e6c
	if (ctx.cr0.eq) goto loc_82240E6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82240C3C;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82240c8c
	if (!ctx.cr6.gt) goto loc_82240C8C;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
loc_82240C50:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r25,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r25.u32 + ctx.r8.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82240c78
	if (!ctx.cr6.eq) goto loc_82240C78;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// subf r11,r27,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r27.u64;
	// stbx r19,r11,r28
	REX_STORE_U8(ctx.r11.u32 + ctx.r28.u32, ctx.r19.u8);
loc_82240C78:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82240c50
	if (ctx.cr6.lt) goto loc_82240C50;
loc_82240C8C:
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82240ce4
	if (ctx.cr6.eq) goto loc_82240CE4;
	// b 0x82240cb0
	goto loc_82240CB0;
loc_82240CA0:
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82240cb8
	if (!ctx.cr0.eq) goto loc_82240CB8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82240CB0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240ca0
	if (ctx.cr6.lt) goto loc_82240CA0;
loc_82240CB8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// b 0x82240cd0
	goto loc_82240CD0;
loc_82240CC0:
	// lbzx r10,r11,r28
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82240cd8
	if (ctx.cr0.eq) goto loc_82240CD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82240CD0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240cc0
	if (ctx.cr6.lt) goto loc_82240CC0;
loc_82240CD8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240ca0
	if (ctx.cr6.lt) goto loc_82240CA0;
loc_82240CE4:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r26,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8216b018
	ctx.lr = 0x82240CF0;
	sub_8216B018(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stwx r3,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r3.u32);
	// beq 0x82240e60
	if (ctx.cr0.eq) goto loc_82240E60;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82240d78
	if (ctx.cr6.eq) goto loc_82240D78;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x82240d24
	goto loc_82240D24;
loc_82240D14:
	// lbzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82240d2c
	if (!ctx.cr0.eq) goto loc_82240D2C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82240D24:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240d14
	if (ctx.cr6.lt) goto loc_82240D14;
loc_82240D2C:
	// add r9,r27,r11
	ctx.r9.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stwx r9,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82240d4c
	goto loc_82240D4C;
loc_82240D3C:
	// lbzx r9,r11,r28
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82240d54
	if (ctx.cr0.eq) goto loc_82240D54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82240D4C:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240d3c
	if (ctx.cr6.lt) goto loc_82240D3C;
loc_82240D54:
	// add r9,r3,r10
	ctx.r9.u64 = ctx.r3.u64 + ctx.r10.u64;
	// lwz r9,-4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + -4);
	// subf r9,r9,r27
	ctx.r9.u64 = ctx.r27.u64 - ctx.r9.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r3,r10
	REX_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82240d14
	if (ctx.cr6.lt) goto loc_82240D14;
loc_82240D78:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8216b138
	ctx.lr = 0x82240D84;
	sub_8216B138(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// stwx r26,r25,r11
	REX_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r26.u32);
loc_82240D8C:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmplwi cr6,r25,12
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12, ctx.xer);
	// blt cr6,0x82240bf8
	if (ctx.cr6.lt) goto loc_82240BF8;
	// rlwinm r30,r18,5,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 5) & 0xFFFFFFE0;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x82240DA8;
	sub_8216B018(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x82240e6c
	if (ctx.cr0.eq) goto loc_82240E6C;
	// cmplwi cr6,r24,64
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 64, ctx.xer);
	// bgt cr6,0x82241934
	if (ctx.cr6.gt) goto loc_82241934;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82240DC8;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82240eb0
	if (!ctx.cr6.gt) goto loc_82240EB0;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
loc_82240DDC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,120(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// lwzx r11,r8,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240e1c
	if (!ctx.cr6.eq) goto loc_82240E1C;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82240e1c
	if (!ctx.cr6.eq) goto loc_82240E1C;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lfd f0,32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 32);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stfdx f0,r10,r15
	REX_STORE_U64(ctx.r10.u32 + ctx.r15.u32, ctx.f0.u64);
loc_82240E1C:
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// lwz r9,200(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82240e9c
	if (!ctx.cr6.eq) goto loc_82240E9C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,128(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240e84
	if (!ctx.cr6.eq) goto loc_82240E84;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bgt cr6,0x82240ef4
	if (ctx.cr6.gt) goto loc_82240EF4;
	// lbz r10,111(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 111);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82240e78
	if (!ctx.cr6.eq) goto loc_82240E78;
	// stw r17,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r17.u32);
	// b 0x82240e84
	goto loc_82240E84;
loc_82240E60:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8216b138
	ctx.lr = 0x82240E6C;
	sub_8216B138(ctx, base);
loc_82240E6C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82241934
	goto loc_82241934;
loc_82240E78:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x82240e84
	if (!ctx.cr6.eq) goto loc_82240E84;
	// stw r19,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r19.u32);
loc_82240E84:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82240e9c
	if (!ctx.cr6.eq) goto loc_82240E9C;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82240f00
	if (ctx.cr6.gt) goto loc_82240F00;
loc_82240E9C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82240ddc
	if (ctx.cr6.lt) goto loc_82240DDC;
loc_82240EB0:
	// lwz r20,12(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822413a4
	if (ctx.cr6.eq) goto loc_822413A4;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
loc_82240EC4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// lwzx r28,r22,r11
	ctx.r28.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// stw r17,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r17.u32);
	// clrlwi. r25,r11,12
	ctx.r25.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// rlwinm r23,r11,0,0,11
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// bne 0x82240f1c
	if (!ctx.cr0.eq) goto loc_82240F1C;
loc_82240EE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8220ec68
	ctx.lr = 0x82240EF0;
	sub_8220EC68(ctx, base);
	// b 0x82241390
	goto loc_82241390;
loc_82240EF4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,20080
	ctx.r6.s64 = ctx.r11.s64 + 20080;
	// b 0x82240f08
	goto loc_82240F08;
loc_82240F00:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r6,r11,20048
	ctx.r6.s64 = ctx.r11.s64 + 20048;
loc_82240F08:
	// li r5,4500
	ctx.r5.s64 = 4500;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff00
	ctx.lr = 0x82240F18;
	sub_8221FF00(ctx, base);
	// b 0x82241934
	goto loc_82241934;
loc_82240F1C:
	// lwz r7,16(r28)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// twllei r25,0
	if (ctx.r25.s32 == 0 || ctx.r25.u32 < 0u) ppc_trap(ctx, base, 0);
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// divwu. r24,r11,r25
	ctx.r24.u64 = uint32_t(ctx.r25.u32 ? ctx.r11.u32 / ctx.r25.u32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r11,0(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// beq 0x82240f7c
	if (ctx.cr0.eq) goto loc_82240F7C;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_82240F5C:
	// lwzx r5,r9,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r6
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82240f5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240F5C;
	// lwz r8,128(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
loc_82240F7C:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82240fd4
	if (!ctx.cr6.eq) goto loc_82240FD4;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x82240fd4
	if (!ctx.cr6.gt) goto loc_82240FD4;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82240FA0:
	// lwzx r11,r7,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82240fc0
	if (ctx.cr6.eq) goto loc_82240FC0;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x82240fc8
	goto loc_82240FC8;
loc_82240FC0:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82240FC8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82240fa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82240FA0;
	// stw r8,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
loc_82240FD4:
	// cmplwi cr6,r24,2
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 2, ctx.xer);
	// bne cr6,0x8224115c
	if (!ctx.cr6.eq) goto loc_8224115C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8224115c
	if (!ctx.cr6.eq) goto loc_8224115C;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x82241154
	if (!ctx.cr6.gt) goto loc_82241154;
	// addi r30,r25,-1
	ctx.r30.s64 = ctx.r25.s64 + -1;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r27,r25,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r29,r27,4
	ctx.r29.s64 = ctx.r27.s64 + 4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
loc_82241014:
	// lwzx r5,r11,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r14,r9,r11
	ctx.r14.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r14,r14,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r3,r14,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + ctx.r6.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addic r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	// beq cr6,0x82241068
	if (ctx.cr6.eq) goto loc_82241068;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// b 0x8224106c
	goto loc_8224106C;
loc_82241068:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_8224106C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82241014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241014;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82241154
	if (!ctx.cr6.eq) goto loc_82241154;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8220d800
	ctx.lr = 0x82241088;
	sub_8220D800(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224115c
	if (ctx.cr0.eq) goto loc_8224115C;
	// lwz r9,132(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_822410B0:
	// lwzx r5,r8,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r4,r27,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r3
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// lwzx r4,r4,r3
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r3,r30,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r6.u32);
	// lwz r5,16(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// subf r5,r5,r4
	ctx.r5.u64 = ctx.r4.u64 - ctx.r5.u64;
	// lwz r4,16(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// addic r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 & ctx.r10.u64;
	// beq cr6,0x82241104
	if (ctx.cr6.eq) goto loc_82241104;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// b 0x82241108
	goto loc_82241108;
loc_82241104:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82241108:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x822410b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822410B0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8224115c
	if (ctx.cr6.eq) goto loc_8224115C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82241154
	if (ctx.cr6.eq) goto loc_82241154;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82241130:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r7,r11,r9
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r8,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// stwx r7,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82241130
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241130;
loc_82241154:
	// stw r19,40(r28)
	REX_STORE_U32(ctx.r28.u32 + 40, ctx.r19.u32);
	// b 0x82240ee4
	goto loc_82240EE4;
loc_8224115C:
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// ble cr6,0x822411cc
	if (!ctx.cr6.gt) goto loc_822411CC;
loc_82241168:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822411c0
	if (ctx.cr6.eq) goto loc_822411C0;
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// lwz r7,20(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_82241188:
	// lwzx r4,r10,r8
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwzx r4,r4,r7
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwz r4,16(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822411b0
	if (ctx.cr6.eq) goto loc_822411B0;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// b 0x822411b4
	goto loc_822411B4;
loc_822411B0:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_822411B4:
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82241188
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241188;
loc_822411C0:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r6,r25
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82241168
	if (ctx.cr6.lt) goto loc_82241168;
loc_822411CC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82240ee4
	if (ctx.cr6.eq) goto loc_82240EE4;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822411f8
	if (!ctx.cr6.eq) goto loc_822411F8;
	// lis r11,28896
	ctx.r11.s64 = 1893728256;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// b 0x82240ee4
	goto loc_82240EE4;
loc_822411F8:
	// lis r10,20528
	ctx.r10.s64 = 1345323008;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822412b0
	if (!ctx.cr6.eq) goto loc_822412B0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82241390
	if (ctx.cr6.eq) goto loc_82241390;
loc_82241210:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r27,r26,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,92(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822412a0
	if (ctx.cr6.eq) goto loc_822412A0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lis r4,4240
	ctx.r4.s64 = 277872640;
	// beq cr6,0x82241250
	if (ctx.cr6.eq) goto loc_82241250;
	// lis r4,4224
	ctx.r4.s64 = 276824064;
loc_82241250:
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8220eac8
	ctx.lr = 0x82241258;
	sub_8220EAC8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82240e6c
	if (ctx.cr6.eq) goto loc_82240E6C;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82241278;
	sub_8220D6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_822412A0:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82241210
	if (ctx.cr6.lt) goto loc_82241210;
	// b 0x82241390
	goto loc_82241390;
loc_822412B0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82241390
	if (ctx.cr6.eq) goto loc_82241390;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
loc_822412BC:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x822412C4;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822412d8
	if (ctx.cr0.eq) goto loc_822412D8;
	// bl 0x8220d6a0
	ctx.lr = 0x822412D0;
	sub_8220D6A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x822412dc
	goto loc_822412DC;
loc_822412D8:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_822412DC:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stwx r30,r27,r11
	REX_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r30.u32);
	// beq cr6,0x82240e6c
	if (ctx.cr6.eq) goto loc_82240E6C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ori r4,r23,1
	ctx.r4.u64 = ctx.r23.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220de30
	ctx.lr = 0x82241304;
	sub_8220DE30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82241318;
	sub_8220D6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r27,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82241364
	if (ctx.cr6.eq) goto loc_82241364;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82241348:
	// lwz r8,8(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r7,8(r30)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r8,r11,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stwx r8,r10,r7
	REX_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82241348
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82241348;
loc_82241364:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ec68
	ctx.lr = 0x82241370;
	sub_8220EC68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82113c30
	ctx.lr = 0x82241378;
	sub_82113C30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x82241380;
	sub_8220DDF0(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x822412bc
	if (ctx.cr6.lt) goto loc_822412BC;
loc_82241390:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r17,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r20
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82240ec4
	if (ctx.cr6.lt) goto loc_82240EC4;
loc_822413A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x822413AC;
	sub_82213478(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,200(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// bl 0x822045a8
	ctx.lr = 0x822413B8;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lis r11,18008
	ctx.r11.s64 = 1180172288;
	// lwz r10,200(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 200);
	// ori r11,r11,513
	ctx.r11.u64 = ctx.r11.u64 | 513;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82241540
	if (!ctx.cr6.eq) goto loc_82241540;
	// lwz r26,112(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,108(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r28,104(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// add r11,r26,r27
	ctx.r11.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// rlwinm r11,r11,17,1,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x7FFE0000;
	// ori r4,r11,65534
	ctx.r4.u64 = ctx.r11.u64 | 65534;
	// bl 0x822045a8
	ctx.lr = 0x822413FC;
	sub_822045A8(ctx, base);
	// lis r4,18771
	ctx.r4.s64 = 1230176256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,21072
	ctx.r4.u64 = ctx.r4.u64 | 21072;
	// bl 0x822045a8
	ctx.lr = 0x8224140C;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8224141C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x82241430
	if (!ctx.cr6.eq) goto loc_82241430;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82241430:
	// bl 0x822045a8
	ctx.lr = 0x82241434;
	sub_822045A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8224141c
	if (!ctx.cr0.eq) goto loc_8224141C;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_82241444:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82241460
	if (!ctx.cr6.eq) goto loc_82241460;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82241470
	goto loc_82241470;
loc_82241460:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r30,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// subf r11,r11,r10
	ctx.r11.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_82241470:
	// bl 0x822045a8
	ctx.lr = 0x82241474;
	sub_822045A8(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// blt cr6,0x82241444
	if (ctx.cr6.lt) goto loc_82241444;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822045a8
	ctx.lr = 0x8224148C;
	sub_822045A8(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822414c0
	if (ctx.cr6.eq) goto loc_822414C0;
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_822414A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822045a8
	ctx.lr = 0x822414AC;
	sub_822045A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822045a8
	ctx.lr = 0x822414B8;
	sub_822045A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822414a0
	if (!ctx.cr0.eq) goto loc_822414A0;
loc_822414C0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822045a8
	ctx.lr = 0x822414CC;
	sub_822045A8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82241500
	if (ctx.cr6.eq) goto loc_82241500;
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_822414E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822045a8
	ctx.lr = 0x822414EC;
	sub_822045A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822045a8
	ctx.lr = 0x822414F8;
	sub_822045A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x822414e0
	if (!ctx.cr0.eq) goto loc_822414E0;
loc_82241500:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822045a8
	ctx.lr = 0x8224150C;
	sub_822045A8(ctx, base);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82241540
	if (ctx.cr6.eq) goto loc_82241540;
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82241520:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x822045a8
	ctx.lr = 0x8224152C;
	sub_822045A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,8(r30)
	ea = 8 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x822045a8
	ctx.lr = 0x82241538;
	sub_822045A8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82241520
	if (!ctx.cr0.eq) goto loc_82241520;
loc_82241540:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822047a0
	ctx.lr = 0x82241548;
	sub_822047A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// rlwinm r11,r18,19,0,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 19) & 0xFFF80000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addis r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 131072;
	// rlwinm r11,r11,0,1,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFF0000;
	// ori r4,r11,65534
	ctx.r4.u64 = ctx.r11.u64 | 65534;
	// bl 0x822045a8
	ctx.lr = 0x82241568;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lis r4,21577
	ctx.r4.s64 = 1414070272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,19523
	ctx.r4.u64 = ctx.r4.u64 | 19523;
	// bl 0x822045a8
	ctx.lr = 0x82241580;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// rlwinm r28,r18,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822045a8
	ctx.lr = 0x82241598;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x822415e4
	if (ctx.cr6.eq) goto loc_822415E4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82241614
	if (ctx.cr6.eq) goto loc_82241614;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_822415BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x82240898
	ctx.lr = 0x822415C8;
	sub_82240898(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822415bc
	if (ctx.cr6.lt) goto loc_822415BC;
	// b 0x82241614
	goto loc_82241614;
loc_822415E4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82241614
	if (ctx.cr6.eq) goto loc_82241614;
	// mr r30,r15
	ctx.r30.u64 = ctx.r15.u64;
loc_822415F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r30.u32 + 0);
	// bl 0x82240838
	ctx.lr = 0x822415FC;
	sub_82240838(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r27,r28
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822415f0
	if (ctx.cr6.lt) goto loc_822415F0;
loc_82241614:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r20,276(r31)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822045a8
	ctx.lr = 0x82241624;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lis r4,17228
	ctx.r4.s64 = 1129054208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,22598
	ctx.r4.u64 = ctx.r4.u64 | 22598;
	// bl 0x822045a8
	ctx.lr = 0x8224163C;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x822045a8
	ctx.lr = 0x82241650;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8224187c
	if (!ctx.cr6.gt) goto loc_8224187C;
	// mr r22,r17
	ctx.r22.u64 = ctx.r17.u64;
loc_8224166C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.u64 = static_cast<uint64_t>(0) - ctx.r9.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// or r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 | ctx.r10.u64;
	// bl 0x822045a8
	ctx.lr = 0x82241698;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r28,r10,12
	ctx.r28.u64 = ctx.r10.u32 & 0xFFFFF;
	// divwu r24,r11,r28
	ctx.r24.u64 = uint32_t(ctx.r28.u32 ? ctx.r11.u32 / ctx.r28.u32 : 0);
	// twllei r28,0
	if (ctx.r28.s32 == 0 || ctx.r28.u32 < 0u) ppc_trap(ctx, base, 0);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822045a8
	ctx.lr = 0x822416C8;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r30,r20,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// beq cr6,0x822417b0
	if (ctx.cr6.eq) goto loc_822417B0;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// rlwinm r23,r28,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_822416F8:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r25,276(r31)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// lwzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822045a8
	ctx.lr = 0x82241724;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x8224174c
	if (ctx.cr6.eq) goto loc_8224174C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240970
	ctx.lr = 0x82241744;
	sub_82240970(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
loc_8224174C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240710
	ctx.lr = 0x82241758;
	sub_82240710(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822045a8
	ctx.lr = 0x82241778;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r11,r25,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r27,r23,r27
	ctx.r27.u64 = ctx.r23.u64 + ctx.r27.u64;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// blt cr6,0x822416f8
	if (ctx.cr6.lt) goto loc_822416F8;
loc_822417B0:
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
loc_822417B4:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r26,276(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// lwzx r11,r22,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r10
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x822045a8
	ctx.lr = 0x822417E0;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r4,8(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82241808
	if (ctx.cr6.eq) goto loc_82241808;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240970
	ctx.lr = 0x82241800;
	sub_82240970(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
loc_82241808:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82240710
	ctx.lr = 0x82241814;
	sub_82240710(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r10,12(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822045a8
	ctx.lr = 0x82241834;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r9,272(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// lwzx r10,r11,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r9,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// blt cr6,0x822417b4
	if (ctx.cr6.lt) goto loc_822417B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8224166c
	if (ctx.cr6.lt) goto loc_8224166C;
loc_8224187C:
	// lis r4,-3856
	ctx.r4.s64 = -252706816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,61680
	ctx.r4.u64 = ctx.r4.u64 | 61680;
	// bl 0x822045a8
	ctx.lr = 0x8224188C;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lis r4,3855
	ctx.r4.s64 = 252641280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,3855
	ctx.r4.u64 = ctx.r4.u64 | 3855;
	// bl 0x822045a8
	ctx.lr = 0x822418A4;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r11,272(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,65535
	ctx.r4.u64 = ctx.r4.u64 | 65535;
	// lwzx r9,r10,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r9,r9,16,1,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x7FFF0000;
	// ori r9,r9,65534
	ctx.r9.u64 = ctx.r9.u64 | 65534;
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x822045a8
	ctx.lr = 0x822418D8;
	sub_822045A8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x82241930
	if (ctx.cr6.eq) goto loc_82241930;
	// lwz r11,276(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8219e428
	ctx.lr = 0x822418F8;
	sub_8219E428(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82241934
	if (ctx.cr0.lt) goto loc_82241934;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,276(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r31,272(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8224191C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215e640
	ctx.lr = 0x82241928;
	sub_8215E640(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
loc_82241930:
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
loc_82241934:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x8216b138
	ctx.lr = 0x82241940;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8216b138
	ctx.lr = 0x8224194C;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,92(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x8216b138
	ctx.lr = 0x82241958;
	sub_8216B138(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,96(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x8216b138
	ctx.lr = 0x82241964;
	sub_8216B138(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82241968:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822672B0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x822672B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,2336
	ctx.r28.s64 = ctx.r10.s64 + 2336;
	// bne cr6,0x82267308
	if (!ctx.cr6.eq) goto loc_82267308;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,1396
	ctx.r5.s64 = ctx.r11.s64 + 1396;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267308;
	sub_82260F30(ctx, base);
loc_82267308:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82267330
	if (!ctx.cr6.eq) goto loc_82267330;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,3256
	ctx.r5.s64 = ctx.r11.s64 + 3256;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267330;
	sub_82260F30(ctx, base);
loc_82267330:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82267354
	if (!ctx.cr6.eq) goto loc_82267354;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,1420
	ctx.r5.s64 = ctx.r11.s64 + 1420;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82267354;
	sub_82260F30(ctx, base);
loc_82267354:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82315e90
	ctx.lr = 0x82267370;
	sub_82315E90(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82267384
	if (ctx.cr6.eq) goto loc_82267384;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x822673bc
	if (!ctx.cr6.eq) goto loc_822673BC;
loc_82267384:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x822673bc
	if (!ctx.cr6.eq) goto loc_822673BC;
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822673bc
	if (!ctx.cr6.eq) goto loc_822673BC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82266b60
	ctx.lr = 0x822673A8;
	sub_82266B60(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266f78
	ctx.lr = 0x822673BC;
	sub_82266F78(ctx, base);
loc_822673BC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226B4E0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x8226B4E8;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r6)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r24,16(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r30,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// addi r11,r6,4
	ctx.r11.s64 = ctx.r6.s64 + 4;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// mr r18,r30
	ctx.r18.u64 = ctx.r30.u64;
	// cmplwi cr6,r10,8192
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8192, ctx.xer);
	// bne cr6,0x8226b544
	if (!ctx.cr6.eq) goto loc_8226B544;
	// cmplwi cr6,r24,768
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 768, ctx.xer);
	// blt cr6,0x8226b544
	if (ctx.cr6.lt) goto loc_8226B544;
	// lwz r23,0(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8226b548
	goto loc_8226B548;
loc_8226B544:
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_8226B548:
	// lwz r25,372(r1)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// mr r17,r21
	ctx.r17.u64 = ctx.r21.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8226b56c
	if (ctx.cr6.eq) goto loc_8226B56C;
	// li r10,33
	ctx.r10.s64 = 33;
	// lwz r17,0(r11)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,0,19,31
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFF) | (ctx.r30.u64 & 0xFFFFFFFFFFFFE000);
	// rlwimi r30,r10,0,1,3
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x70000000) | (ctx.r30.u64 & 0xFFFFFFFF8FFFFFFF);
loc_8226B56C:
	// li r26,3
	ctx.r26.s64 = 3;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_8226B580:
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r8,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// beq 0x8226b5dc
	if (ctx.cr0.eq) goto loc_8226B5DC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// cmplwi cr6,r24,512
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 512, ctx.xer);
	// blt cr6,0x8226b5d4
	if (ctx.cr6.lt) goto loc_8226B5D4;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r9,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r8,8192
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8192, ctx.xer);
	// bne cr6,0x8226b5d4
	if (!ctx.cr6.eq) goto loc_8226B5D4;
	// rlwimi r9,r9,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r9,r9,0,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r9,512
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 512, ctx.xer);
	// bne cr6,0x8226b5d4
	if (!ctx.cr6.eq) goto loc_8226B5D4;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r9,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// b 0x8226b5e8
	goto loc_8226B5E8;
loc_8226B5D4:
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// b 0x8226b5e4
	goto loc_8226B5E4;
loc_8226B5DC:
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// stwx r21,r10,r8
	REX_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r21.u32);
loc_8226B5E4:
	// stwx r21,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r21.u32);
loc_8226B5E8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8226b580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8226B580;
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplwi cr6,r11,34
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34, ctx.xer);
	// beq cr6,0x8226b720
	if (ctx.cr6.eq) goto loc_8226B720;
	// cmplwi cr6,r11,37
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 37, ctx.xer);
	// beq cr6,0x8226b60c
	if (ctx.cr6.eq) goto loc_8226B60C;
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// b 0x8226b7d8
	goto loc_8226B7D8;
loc_8226B60C:
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// rlwimi r11,r18,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b620
	if (ctx.cr0.eq) goto loc_8226B620;
	// bl 0x823712d0
	ctx.lr = 0x8226B620;
	sub_823712D0(ctx, base);
loc_8226B620:
	// cmplwi cr6,r24,768
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 768, ctx.xer);
	// bge cr6,0x8226b660
	if (!ctx.cr6.lt) goto loc_8226B660;
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r11,r11,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x8226b640
	if (ctx.cr6.eq) goto loc_8226B640;
	// bl 0x823712d0
	ctx.lr = 0x8226B640;
	sub_823712D0(ctx, base);
loc_8226B640:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r11,r11,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x8226b658
	if (ctx.cr6.eq) goto loc_8226B658;
	// bl 0x823712d0
	ctx.lr = 0x8226B658;
	sub_823712D0(ctx, base);
loc_8226B658:
	// addi r22,r28,4
	ctx.r22.s64 = ctx.r28.s64 + 4;
	// b 0x8226b678
	goto loc_8226B678;
loc_8226B660:
	// rlwinm r11,r29,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8226b674
	if (ctx.cr6.eq) goto loc_8226B674;
	// bl 0x823712d0
	ctx.lr = 0x8226B674;
	sub_823712D0(ctx, base);
loc_8226B674:
	// addi r22,r28,2
	ctx.r22.s64 = ctx.r28.s64 + 2;
loc_8226B678:
	// li r11,89
	ctx.r11.s64 = 89;
	// rlwimi r30,r26,16,12,15
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xF0000) | (ctx.r30.u64 & 0xFFFFFFFFFFF0FFFF);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8226b6ac
	if (!ctx.cr6.eq) goto loc_8226B6AC;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8226B6AC:
	// bl 0x8226a108
	ctx.lr = 0x8226B6B0;
	sub_8226A108(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,89
	ctx.r8.s64 = 89;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x8226a680
	ctx.lr = 0x8226B6D8;
	sub_8226A680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8226b7d4
	if (ctx.cr6.eq) goto loc_8226B7D4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// rlwimi r4,r26,16,12,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xF0000) | (ctx.r4.u64 & 0xFFFFFFFFFFF0FFFF);
loc_8226B6EC:
	// stw r21,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226aa88
	ctx.lr = 0x8226B70C;
	sub_8226AA88(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8226b7d8
	goto loc_8226B7D8;
loc_8226B720:
	// lwz r29,108(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// addi r22,r28,4
	ctx.r22.s64 = ctx.r28.s64 + 4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b73c
	if (ctx.cr0.eq) goto loc_8226B73C;
	// bl 0x823712d0
	ctx.lr = 0x8226B73C;
	sub_823712D0(ctx, base);
loc_8226B73C:
	// lwz r28,112(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226b754
	if (ctx.cr0.eq) goto loc_8226B754;
	// bl 0x823712d0
	ctx.lr = 0x8226B754;
	sub_823712D0(ctx, base);
loc_8226B754:
	// xor r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r29.u64;
	// clrlwi. r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226b764
	if (!ctx.cr0.eq) goto loc_8226B764;
	// bl 0x823712d0
	ctx.lr = 0x8226B764;
	sub_823712D0(ctx, base);
loc_8226B764:
	// li r11,87
	ctx.r11.s64 = 87;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bne cr6,0x8226b794
	if (!ctx.cr6.eq) goto loc_8226B794;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_8226B794:
	// bl 0x8226a108
	ctx.lr = 0x8226B798;
	sub_8226A108(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,104(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,87
	ctx.r8.s64 = 87;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// bl 0x8226a680
	ctx.lr = 0x8226B7C0;
	sub_8226A680(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x8226b7d4
	if (ctx.cr6.eq) goto loc_8226B7D4;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x8226b6ec
	goto loc_8226B6EC;
loc_8226B7D4:
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
loc_8226B7D8:
	// stw r22,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r22.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D790) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82278898) {
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
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822788c0
	if (ctx.cr0.eq) goto loc_822788C0;
loc_822788B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82278964
	goto loc_82278964;
loc_822788C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82298a80
	ctx.lr = 0x822788C8;
	sub_82298A80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822788b8
	if (ctx.cr0.eq) goto loc_822788B8;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822788ec
	if (ctx.cr6.lt) goto loc_822788EC;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x822788f0
	if (!ctx.cr6.gt) goto loc_822788F0;
loc_822788EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822788F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227890c
	if (ctx.cr0.eq) goto loc_8227890C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226e068
	ctx.lr = 0x82278900;
	sub_8226E068(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82278960
	if (ctx.cr0.eq) goto loc_82278960;
	// b 0x822788b8
	goto loc_822788B8;
loc_8227890C:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82278960
	if (!ctx.cr0.eq) goto loc_82278960;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r3.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82278960
	if (ctx.cr0.eq) goto loc_82278960;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82278944
	if (ctx.cr6.lt) goto loc_82278944;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82278948
	if (!ctx.cr6.gt) goto loc_82278948;
loc_82278944:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82278948:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82278960
	if (ctx.cr0.eq) goto loc_82278960;
	// bl 0x8226e068
	ctx.lr = 0x82278954;
	sub_8226E068(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82278964
	if (ctx.cr6.eq) goto loc_82278964;
loc_82278960:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82278964:
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

DEFINE_REX_FUNC(sub_8227AF80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8227AF88;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227b010
	if (!ctx.cr0.eq) goto loc_8227B010;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8227b010
	if (ctx.cr0.eq) goto loc_8227B010;
	// clrlwi r27,r5,24
	ctx.r27.u64 = ctx.r5.u32 & 0xFF;
loc_8227AFB4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227a2e8
	ctx.lr = 0x8227AFC0;
	sub_8227A2E8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8227aff4
	if (ctx.cr6.eq) goto loc_8227AFF4;
	// lwz r30,0(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
loc_8227AFCC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8227aff4
	if (ctx.cr6.eq) goto loc_8227AFF4;
	// lwz r4,12(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8227afec
	if (!ctx.cr6.eq) goto loc_8227AFEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8227a2e8
	ctx.lr = 0x8227AFEC;
	sub_8227A2E8(ctx, base);
loc_8227AFEC:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8227afcc
	goto loc_8227AFCC;
loc_8227AFF4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8227b010
	if (!ctx.cr0.eq) goto loc_8227B010;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r31,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r31.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8227afb4
	if (!ctx.cr0.eq) goto loc_8227AFB4;
loc_8227B010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227D0A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8227D0B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// stw r6,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r6.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,64(r3)
	REX_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d0e4
	if (ctx.cr0.eq) goto loc_8227D0E4;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x8227d0f0
	goto loc_8227D0F0;
loc_8227D0E4:
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,-40
	ctx.r10.s64 = ctx.r11.s64 + -40;
loc_8227D0F0:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stb r30,72(r31)
	REX_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r10,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r30,73(r31)
	REX_STORE_U8(ctx.r31.u32 + 73, ctx.r30.u8);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// stb r30,74(r31)
	REX_STORE_U8(ctx.r31.u32 + 74, ctx.r30.u8);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// bl 0x8215ec60
	ctx.lr = 0x8227D118;
	sub_8215EC60(ctx, base);
	// stw r29,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r30,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// b 0x8227d170
	goto loc_8227D170;
loc_8227D128:
	// lwz r3,60(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,83
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 83, ctx.xer);
	// blt cr6,0x8227d148
	if (ctx.cr6.lt) goto loc_8227D148;
	// cmplwi cr6,r11,95
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 95, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8227d14c
	if (!ctx.cr6.gt) goto loc_8227D14C;
loc_8227D148:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8227D14C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8227d160
	if (!ctx.cr0.eq) goto loc_8227D160;
	// bl 0x8226d3a8
	ctx.lr = 0x8227D158;
	sub_8226D3A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227d17c
	if (ctx.cr0.eq) goto loc_8227D17C;
loc_8227D160:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8227ce88
	ctx.lr = 0x8227D168;
	sub_8227CE88(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8227d188
	if (!ctx.cr0.eq) goto loc_8227D188;
loc_8227D170:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8227d128
	if (!ctx.cr6.eq) goto loc_8227D128;
loc_8227D17C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_8227D188:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8227D194;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_82281488) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,26
	ctx.r5.s64 = 26;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x82275ef8
	ctx.lr = 0x822814B4;
	sub_82275EF8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stw r30,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82281428
	ctx.lr = 0x822814D4;
	sub_82281428(ctx, base);
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

DEFINE_REX_FUNC(sub_82282F00) {
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
	// lwz r10,28(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,112(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82282f54
	if (ctx.cr0.eq) goto loc_82282F54;
	// b 0x82282f38
	goto loc_82282F38;
loc_82282F2C:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82282f44
	if (ctx.cr0.eq) goto loc_82282F44;
loc_82282F38:
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282f2c
	if (!ctx.cr6.eq) goto loc_82282F2C;
loc_82282F44:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm. r9,r9,10,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82282f38
	if (!ctx.cr0.eq) goto loc_82282F38;
	// stw r11,112(r10)
	REX_STORE_U32(ctx.r10.u32 + 112, ctx.r11.u32);
loc_82282F54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 112);
	// bl 0x82281ad0
	ctx.lr = 0x82282F60;
	sub_82281AD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82282f70
	if (!ctx.cr0.eq) goto loc_82282F70;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82282f84
	goto loc_82282F84;
loc_82282F70:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226da80
	ctx.lr = 0x82282F78;
	sub_8226DA80(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82282F84:
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

DEFINE_REX_FUNC(sub_82285AB8) {
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
	// bgt cr6,0x82285ae0
	if (ctx.cr6.gt) goto loc_82285AE0;
	// li r30,10
	ctx.r30.s64 = 10;
loc_82285AE0:
	// mulli r11,r30,36
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(36));
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226e2d8
	ctx.lr = 0x82285AF0;
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

DEFINE_REX_FUNC(sub_8228AF40) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x8228AF48;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r4,460(r1)
	REX_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stb r24,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r24.u8);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r24,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r24.u8);
	// bne 0x8228c9b0
	if (!ctx.cr0.eq) goto loc_8228C9B0;
	// lwz r11,32(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r26,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r26.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r26,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq 0x8228c9b0
	if (ctx.cr0.eq) goto loc_8228C9B0;
	// lwz r10,8(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x8228afc0
	if (ctx.cr6.eq) goto loc_8228AFC0;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x8228afc0
	if (ctx.cr6.eq) goto loc_8228AFC0;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x8228afc0
	if (ctx.cr6.eq) goto loc_8228AFC0;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x8228afc0
	if (ctx.cr6.eq) goto loc_8228AFC0;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x8228afc0
	if (ctx.cr6.eq) goto loc_8228AFC0;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne cr6,0x8228afc4
	if (!ctx.cr6.eq) goto loc_8228AFC4;
loc_8228AFC0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8228AFC4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c9b0
	if (ctx.cr0.eq) goto loc_8228C9B0;
	// rlwinm. r11,r10,15,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c9b0
	if (ctx.cr0.eq) goto loc_8228C9B0;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
	// bl 0x82275f88
	ctx.lr = 0x8228AFE4;
	sub_82275F88(ctx, base);
	// lwz r27,12(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// lwz r10,8(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// stw r27,140(r1)
	REX_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// rlwinm r11,r10,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8228b00c
	if (ctx.cr6.lt) goto loc_8228B00C;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228b010
	if (!ctx.cr6.gt) goto loc_8228B010;
loc_8228B00C:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8228B010:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b084
	if (ctx.cr0.eq) goto loc_8228B084;
	// lwz r31,48(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 48);
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
loc_8228B020:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8228b094
	if (ctx.cr6.eq) goto loc_8228B094;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b07c
	if (ctx.cr6.eq) goto loc_8228B07C;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228b07c
	if (ctx.cr0.eq) goto loc_8228B07C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8228B044:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b07c
	if (ctx.cr6.eq) goto loc_8228B07C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b074
	if (ctx.cr6.eq) goto loc_8228B074;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x8228b070
	if (ctx.cr6.eq) goto loc_8228B070;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x8228b074
	if (!ctx.cr6.eq) goto loc_8228B074;
loc_8228B070:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_8228B074:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8228b044
	goto loc_8228B044;
loc_8228B07C:
	// lwz r9,8(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// b 0x8228b020
	goto loc_8228B020;
loc_8228B084:
	// rlwinm. r11,r10,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b098
	if (ctx.cr0.eq) goto loc_8228B098;
	// lwz r31,44(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 44);
	// b 0x8228b098
	goto loc_8228B098;
loc_8228B094:
	// stw r30,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r30.u32);
loc_8228B098:
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// stw r24,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// stw r24,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r24,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// addi r7,r1,98
	ctx.r7.s64 = ctx.r1.s64 + 98;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822856a0
	ctx.lr = 0x8228B0D0;
	sub_822856A0(ctx, base);
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r28,160(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b1b0
	if (!ctx.cr0.eq) goto loc_8228B1B0;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// beq cr6,0x8228b108
	if (ctx.cr6.eq) goto loc_8228B108;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8228c994
	if (!ctx.cr6.eq) goto loc_8228C994;
loc_8228B0F0:
	// lwz r11,160(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r27,140(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r26,124(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8228c7d4
	if (!ctx.cr6.eq) goto loc_8228C7D4;
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8228B108:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822827a0
	ctx.lr = 0x8228B124;
	sub_822827A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c874
	if (ctx.cr0.eq) goto loc_8228C874;
	// lbz r31,98(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// lwz r30,124(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8228b14c
	if (ctx.cr0.eq) goto loc_8228B14C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82281c68
	ctx.lr = 0x8228B148;
	sub_82281C68(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_8228B14C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8228B164;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x8228b18c
	if (ctx.cr6.eq) goto loc_8228B18C;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// rlwimi r9,r10,0,31,29
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD) | (ctx.r9.u64 & 0x2);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
loc_8228B18C:
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r11,r10,18,13,13
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r11.u64 & 0xFFFFFFFFFFFBFFFF);
	// lwz r29,460(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// b 0x8228c858
	goto loc_8228C858;
loc_8228B1B0:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8226da80
	ctx.lr = 0x8228B1BC;
	sub_8226DA80(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8228b0f0
	if (ctx.cr6.eq) goto loc_8228B0F0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x8228b1e4
	if (!ctx.cr6.gt) goto loc_8228B1E4;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// ble cr6,0x8228b0f0
	if (!ctx.cr6.gt) goto loc_8228B0F0;
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// ble cr6,0x8228b1e4
	if (!ctx.cr6.gt) goto loc_8228B1E4;
	// cmpwi cr6,r3,9
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 9, ctx.xer);
	// ble cr6,0x8228b0f0
	if (!ctx.cr6.gt) goto loc_8228B0F0;
loc_8228B1E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8228b244
	if (ctx.cr6.eq) goto loc_8228B244;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8228b244
	if (ctx.cr6.eq) goto loc_8228B244;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,15872
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15872, ctx.xer);
	// bne cr6,0x8228b244
	if (!ctx.cr6.eq) goto loc_8228B244;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8228B220;
	sub_8226D728(ctx, base);
	// addi r10,r31,-8
	ctx.r10.s64 = ctx.r31.s64 + -8;
	// lwz r11,12(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 12);
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
	// rlwinm. r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b0f0
	if (ctx.cr0.eq) goto loc_8228B0F0;
loc_8228B244:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82282e18
	ctx.lr = 0x8228B250;
	sub_82282E18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b0f0
	if (ctx.cr0.eq) goto loc_8228B0F0;
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8228b278
	if (!ctx.cr6.eq) goto loc_8228B278;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82282e18
	ctx.lr = 0x8228B270;
	sub_82282E18(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c7d8
	if (ctx.cr0.eq) goto loc_8228C7D8;
loc_8228B278:
	// stw r24,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r24.u32);
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// lwz r30,120(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B298;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b0f0
	if (ctx.cr0.eq) goto loc_8228B0F0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B2B8;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b0f0
	if (ctx.cr0.eq) goto loc_8228B0F0;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B2D8;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b0f0
	if (ctx.cr0.eq) goto loc_8228B0F0;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8228b348
	if (!ctx.cr6.eq) goto loc_8228B348;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B300;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c7d8
	if (ctx.cr0.eq) goto loc_8228C7D8;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B320;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c7d8
	if (ctx.cr0.eq) goto loc_8228C7D8;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82286d58
	ctx.lr = 0x8228B340;
	sub_82286D58(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c7d8
	if (ctx.cr0.eq) goto loc_8228C7D8;
loc_8228B348:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// stw r24,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r24.u32);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r24,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// bne cr6,0x8228b394
	if (!ctx.cr6.eq) goto loc_8228B394;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8228b394
	if (!ctx.cr0.eq) goto loc_8228B394;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228b394
	if (ctx.cr0.eq) goto loc_8228B394;
loc_8228B374:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8228b394
	if (!ctx.cr0.eq) goto loc_8228B394;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b374
	if (!ctx.cr6.eq) goto loc_8228B374;
loc_8228B394:
	// lwz r11,28(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228b3c8
	if (!ctx.cr0.eq) goto loc_8228B3C8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228b3c8
	if (ctx.cr0.eq) goto loc_8228B3C8;
loc_8228B3A8:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228b3c8
	if (!ctx.cr0.eq) goto loc_8228B3C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b3a8
	if (!ctx.cr6.eq) goto loc_8228B3A8;
loc_8228B3C8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228b404
	if (!ctx.cr0.eq) goto loc_8228B404;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228b404
	if (ctx.cr0.eq) goto loc_8228B404;
loc_8228B3E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r10,0,6,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228b404
	if (!ctx.cr0.eq) goto loc_8228B404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b3e0
	if (!ctx.cr6.eq) goto loc_8228B3E0;
loc_8228B404:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x8228B414;
	sub_8226DBE8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// stw r24,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r3,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c168
	if (!ctx.cr0.eq) goto loc_8228C168;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228c168
	if (ctx.cr0.eq) goto loc_8228C168;
loc_8228B448:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r11,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x8228c148
	if (!ctx.cr6.eq) goto loc_8228C148;
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c148
	if (!ctx.cr0.eq) goto loc_8228C148;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,156(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f1500
	ctx.lr = 0x8228B47C;
	sub_822F1500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8228c148
	if (ctx.cr0.eq) goto loc_8228C148;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,128(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f1500
	ctx.lr = 0x8228B49C;
	sub_822F1500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8228c148
	if (ctx.cr0.eq) goto loc_8228C148;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,12(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r16,156(r1)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// lwz r9,100(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r7,28(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 28);
	// subf r10,r10,r16
	ctx.r10.u64 = ctx.r16.u64 - ctx.r10.u64;
	// subf r7,r7,r9
	ctx.r7.u64 = ctx.r9.u64 - ctx.r7.u64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r11,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// bne cr6,0x8228b4f4
	if (!ctx.cr6.eq) goto loc_8228B4F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c148
	if (ctx.cr6.eq) goto loc_8228C148;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rotlwi r16,r16,0
	ctx.r16.u64 = __builtin_rotateleft32(ctx.r16.u32, 0);
loc_8228B4F4:
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r11,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stb r22,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r22.u8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b530
	if (ctx.cr6.eq) goto loc_8228B530;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b548
	if (ctx.cr6.eq) goto loc_8228B548;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,8(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// rlwinm r7,r7,0,15,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1C000;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8228b548
	if (!ctx.cr6.gt) goto loc_8228B548;
loc_8228B530:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,152(r1)
	REX_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stb r11,97(r1)
	REX_STORE_U8(ctx.r1.u32 + 97, ctx.r11.u8);
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
loc_8228B548:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// mr r15,r22
	ctx.r15.u64 = ctx.r22.u64;
	// stw r22,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r22.u32);
	// stb r22,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r22.u8);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8228B55C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b59c
	if (ctx.cr6.eq) goto loc_8228B59C;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b58c
	if (ctx.cr6.eq) goto loc_8228B58C;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8228b58c
	if (!ctx.cr6.eq) goto loc_8228B58C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228b594
	if (!ctx.cr0.eq) goto loc_8228B594;
loc_8228B58C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8228b55c
	goto loc_8228B55C;
loc_8228B594:
	// mr r17,r10
	ctx.r17.u64 = ctx.r10.u64;
	// b 0x8228b5a0
	goto loc_8228B5A0;
loc_8228B59C:
	// mr r17,r22
	ctx.r17.u64 = ctx.r22.u64;
loc_8228B5A0:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r20,r8,4
	ctx.r20.s64 = ctx.r8.s64 + 4;
	// lwz r10,116(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// lwz r29,120(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,232(r1)
	REX_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// stw r10,228(r1)
	REX_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
loc_8228B5BC:
	// lwz r19,0(r20)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8228b9b0
	if (ctx.cr6.eq) goto loc_8228B9B0;
	// lwz r24,16(r19)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r19.u32 + 16);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x8228b99c
	if (ctx.cr6.eq) goto loc_8228B99C;
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8228b5ec
	if (ctx.cr6.eq) goto loc_8228B5EC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,96(r1)
	REX_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// b 0x8228b99c
	goto loc_8228B99C;
loc_8228B5EC:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm. r11,r11,6,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b99c
	if (!ctx.cr0.eq) goto loc_8228B99C;
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b614
	if (ctx.cr6.eq) goto loc_8228B614;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8228b618
	if (!ctx.cr6.eq) goto loc_8228B618;
loc_8228B614:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228B618:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b99c
	if (ctx.cr0.eq) goto loc_8228B99C;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8228b66c
	if (ctx.cr6.eq) goto loc_8228B66C;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
loc_8228B630:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lhz r4,18(r24)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r24.u32 + 18);
	// lhz r28,18(r11)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r11.u32 + 18);
	// bl 0x8228cbc0
	ctx.lr = 0x8228B644;
	sub_8228CBC0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8228cbc0
	ctx.lr = 0x8228B654;
	sub_8228CBC0(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8228b0f0
	if (ctx.cr6.eq) goto loc_8228B0F0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8228b630
	if (ctx.cr6.lt) goto loc_8228B630;
loc_8228B66C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f1500
	ctx.lr = 0x8228B684;
	sub_822F1500(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f1500
	ctx.lr = 0x8228B6A0;
	sub_822F1500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8228b99c
	if (ctx.cr0.eq) goto loc_8228B99C;
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
loc_8228B6AC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228b6ec
	if (ctx.cr6.eq) goto loc_8228B6EC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228b6dc
	if (ctx.cr6.eq) goto loc_8228B6DC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8228b6dc
	if (!ctx.cr6.eq) goto loc_8228B6DC;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228b6e4
	if (!ctx.cr0.eq) goto loc_8228B6E4;
loc_8228B6DC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8228b6ac
	goto loc_8228B6AC;
loc_8228B6E4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8228b6f0
	goto loc_8228B6F0;
loc_8228B6EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228B6F0:
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x8228b99c
	if (!ctx.cr6.eq) goto loc_8228B99C;
	// cmplwi cr6,r22,8
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 8, ctx.xer);
	// beq cr6,0x8228c198
	if (ctx.cr6.eq) goto loc_8228C198;
	// lwz r26,12(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r30,28(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 28);
	// cmplw cr6,r30,r16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x8228b950
	if (ctx.cr6.eq) goto loc_8228B950;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// rlwinm r25,r11,27,30,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// clrlwi r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822bf978
	ctx.lr = 0x8228B734;
	sub_822BF978(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r10,40(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
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
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b818
	if (ctx.cr0.eq) goto loc_8228B818;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281370
	ctx.lr = 0x8228B778;
	sub_82281370(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82281428
	ctx.lr = 0x8228B784;
	sub_82281428(ctx, base);
	// lwz r10,144(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228b7c0
	if (!ctx.cr6.eq) goto loc_8228B7C0;
	// li r5,27
	ctx.r5.s64 = 27;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x8228B7A4;
	sub_8226DBE8(ctx, base);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// ori r9,r3,1
	ctx.r9.u64 = ctx.r3.u64 | 1;
	// stw r3,144(r1)
	REX_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8228B7C0:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b7f0
	if (!ctx.cr0.eq) goto loc_8228B7F0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8228b7f0
	if (ctx.cr0.eq) goto loc_8228B7F0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228b7fc
	if (!ctx.cr6.gt) goto loc_8228B7FC;
loc_8228B7F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x822fade8
	ctx.lr = 0x8228B7FC;
	sub_822FADE8(ctx, base);
loc_8228B7FC:
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
	// b 0x8228b8d0
	goto loc_8228B8D0;
loc_8228B818:
	// lwz r28,8(r29)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
loc_8228B81C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8228b88c
	if (ctx.cr6.eq) goto loc_8228B88C;
	// lwz r29,4(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8228b850
	if (ctx.cr6.eq) goto loc_8228B850;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f1500
	ctx.lr = 0x8228B848;
	sub_822F1500(ctx, base);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8228b858
	if (ctx.cr6.eq) goto loc_8228B858;
loc_8228B850:
	// lwz r28,12(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// b 0x8228b81c
	goto loc_8228B81C;
loc_8228B858:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228b88c
	if (ctx.cr6.eq) goto loc_8228B88C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r6,r11,0,27,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1E;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822813c8
	ctx.lr = 0x8228B878;
	sub_822813C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82281428
	ctx.lr = 0x8228B884;
	sub_82281428(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8228b8d0
	goto loc_8228B8D0;
loc_8228B88C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8228b8a4
	goto loc_8228B8A4;
loc_8228B89C:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_8228B8A4:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8228b89c
	if (!ctx.cr6.eq) goto loc_8228B89C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r31,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r27,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8228B8D0:
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228b8e8
	if (ctx.cr0.eq) goto loc_8228B8E8;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// sth r11,18(r27)
	REX_STORE_U16(ctx.r27.u32 + 18, ctx.r11.u16);
	// b 0x8228b8f4
	goto loc_8228B8F4;
loc_8228B8E8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8228cb48
	ctx.lr = 0x8228B8F0;
	sub_8228CB48(ctx, base);
	// sth r3,18(r27)
	REX_STORE_U16(ctx.r27.u32 + 18, ctx.r3.u16);
loc_8228B8F4:
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228b928
	if (!ctx.cr0.eq) goto loc_8228B928;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228b928
	if (ctx.cr0.eq) goto loc_8228B928;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228b934
	if (!ctx.cr6.gt) goto loc_8228B934;
loc_8228B928:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x8228B930;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228B934:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,120(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r9,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stwx r27,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r27.u32);
loc_8228B950:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,148(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// lwz r7,8(r24)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// slw r10,r10,r22
	ctx.r10.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r22.u8 & 0x3F));
	// stwx r31,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r31.u32);
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stwx r24,r21,r8
	REX_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r24.u32);
	// oris r9,r7,1024
	ctx.r9.u64 = ctx.r7.u64 | 67108864;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stw r9,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// stw r11,148(r1)
	REX_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r22,r22,2
	ctx.r22.s64 = ctx.r22.s64 + 2;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_8228B99C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r11,r19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r19.u32, ctx.xer);
	// bne cr6,0x8228b5bc
	if (!ctx.cr6.eq) goto loc_8228B5BC;
	// addi r20,r19,8
	ctx.r20.s64 = ctx.r19.s64 + 8;
	// b 0x8228b5bc
	goto loc_8228B5BC;
loc_8228B9B0:
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8228be5c
	if (ctx.cr6.eq) goto loc_8228BE5C;
	// addi r21,r1,176
	ctx.r21.s64 = ctx.r1.s64 + 176;
loc_8228B9C0:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r22,12(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,8(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8228be4c
	if (!ctx.cr6.eq) goto loc_8228BE4C;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
loc_8228B9DC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228ba14
	if (ctx.cr6.eq) goto loc_8228BA14;
	// lwz r31,16(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8228ba0c
	if (ctx.cr6.eq) goto loc_8228BA0C;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14080
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14080, ctx.xer);
	// bne cr6,0x8228ba0c
	if (!ctx.cr6.eq) goto loc_8228BA0C;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r10,r10,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228ba18
	if (!ctx.cr0.eq) goto loc_8228BA18;
loc_8228BA0C:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8228b9dc
	goto loc_8228B9DC;
loc_8228BA14:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8228BA18:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228bdf0
	if (!ctx.cr6.eq) goto loc_8228BDF0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r5,460(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82285448
	ctx.lr = 0x8228BA40;
	sub_82285448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228ba4c
	if (ctx.cr0.eq) goto loc_8228BA4C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8228BA4C:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8228d238
	ctx.lr = 0x8228BA58;
	sub_8228D238(ctx, base);
	// lwz r11,20(r16)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r16.u32 + 20);
	// addi r24,r16,16
	ctx.r24.s64 = ctx.r16.s64 + 16;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r25,1
	ctx.r25.s64 = 1;
	// bne 0x8228baf4
	if (!ctx.cr0.eq) goto loc_8228BAF4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228baf4
	if (ctx.cr0.eq) goto loc_8228BAF4;
loc_8228BA7C:
	// cmplw cr6,r31,r22
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8228bad4
	if (ctx.cr6.eq) goto loc_8228BAD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x8228b0f0
	if (!ctx.cr6.eq) goto loc_8228B0F0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8228d238
	ctx.lr = 0x8228BAA0;
	sub_8228D238(ctx, base);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8228bad4
	if (!ctx.cr6.eq) goto loc_8228BAD4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r8,120(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,112(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r5,460(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// bl 0x82285448
	ctx.lr = 0x8228BAC4;
	sub_82285448(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228bad0
	if (ctx.cr0.eq) goto loc_8228BAD0;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8228BAD0:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8228BAD4:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228baec
	if (!ctx.cr0.eq) goto loc_8228BAEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228ba7c
	if (!ctx.cr6.eq) goto loc_8228BA7C;
loc_8228BAEC:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// bgt cr6,0x8228b0f0
	if (ctx.cr6.gt) goto loc_8228B0F0;
loc_8228BAF4:
	// lwz r31,4(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bb50
	if (!ctx.cr0.eq) goto loc_8228BB50;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8228bb50
	if (ctx.cr0.eq) goto loc_8228BB50;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8228BB10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8228d238
	ctx.lr = 0x8228BB1C;
	sub_8228D238(ctx, base);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8228bb38
	if (!ctx.cr6.eq) goto loc_8228BB38;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281370
	ctx.lr = 0x8228BB34;
	sub_82281370(ctx, base);
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
loc_8228BB38:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bb50
	if (!ctx.cr0.eq) goto loc_8228BB50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228bb10
	if (!ctx.cr6.eq) goto loc_8228BB10;
loc_8228BB50:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x8228bc88
	if (ctx.cr0.eq) goto loc_8228BC88;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8228bc7c
	if (ctx.cr6.eq) goto loc_8228BC7C;
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// addi r28,r10,-4
	ctx.r28.s64 = ctx.r10.s64 + -4;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_8228BB78:
	// lwz r30,4(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82283098
	ctx.lr = 0x8228BB94;
	sub_82283098(ctx, base);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// ori r8,r29,1
	ctx.r8.u64 = ctx.r29.u64 | 1;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// bne cr6,0x8228bbd4
	if (!ctx.cr6.eq) goto loc_8228BBD4;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_8228BBD4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,12(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8228cb48
	ctx.lr = 0x8228BBEC;
	sub_8228CB48(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bc24
	if (!ctx.cr0.eq) goto loc_8228BC24;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228bc24
	if (ctx.cr0.eq) goto loc_8228BC24;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228bc30
	if (!ctx.cr6.gt) goto loc_8228BC30;
loc_8228BC24:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x8228BC2C;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228BC30:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r30,r22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r22.u32, ctx.xer);
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
	// bne cr6,0x8228bc54
	if (!ctx.cr6.eq) goto loc_8228BC54;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_8228BC54:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281370
	ctx.lr = 0x8228BC64;
	sub_82281370(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bne 0x8228bb78
	if (!ctx.cr0.eq) goto loc_8228BB78;
loc_8228BC7C:
	// lwz r11,104(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_8228BC88:
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8232db48
	ctx.lr = 0x8228BC9C;
	sub_8232DB48(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// beq cr6,0x8228bce4
	if (ctx.cr6.eq) goto loc_8228BCE4;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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
	// b 0x8228bd10
	goto loc_8228BD10;
loc_8228BCE4:
	// addi r11,r16,24
	ctx.r11.s64 = ctx.r16.s64 + 24;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r6,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r6)
	REX_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r8,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_8228BD10:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228bd74
	if (!ctx.cr0.eq) goto loc_8228BD74;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228bd74
	if (ctx.cr0.eq) goto loc_8228BD74;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// addi r29,r31,40
	ctx.r29.s64 = ctx.r31.s64 + 40;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_8228BD34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8228d238
	ctx.lr = 0x8228BD40;
	sub_8228D238(ctx, base);
	// cmplw cr6,r3,r23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x8228bd58
	if (!ctx.cr6.eq) goto loc_8228BD58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82281428
	ctx.lr = 0x8228BD54;
	sub_82281428(ctx, base);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
loc_8228BD58:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228bd74
	if (!ctx.cr0.eq) goto loc_8228BD74;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228bd34
	if (!ctx.cr6.eq) goto loc_8228BD34;
loc_8228BD74:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x8228cb48
	ctx.lr = 0x8228BD88;
	sub_8228CB48(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228bdc0
	if (!ctx.cr0.eq) goto loc_8228BDC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228bdc0
	if (ctx.cr0.eq) goto loc_8228BDC0;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228bdcc
	if (!ctx.cr6.gt) goto loc_8228BDCC;
loc_8228BDC0:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x8228BDC8;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228BDCC:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,116(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stwx r31,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r31.u32);
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
loc_8228BDF0:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
loc_8228BE00:
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8228be34
	if (!ctx.cr6.lt) goto loc_8228BE34;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r22
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x8228be24
	if (ctx.cr6.eq) goto loc_8228BE24;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8228be00
	goto loc_8228BE00;
loc_8228BE24:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82281370
	ctx.lr = 0x8228BE30;
	sub_82281370(ctx, base);
	// stw r3,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
loc_8228BE34:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822bf4d0
	ctx.lr = 0x8228BE40;
	sub_822BF4D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8228BE4C:
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r20,r15
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8228b9c0
	if (ctx.cr6.lt) goto loc_8228B9C0;
loc_8228BE5C:
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r23,152(r1)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// beq cr6,0x8228c0bc
	if (ctx.cr6.eq) goto loc_8228C0BC;
	// lwz r22,132(r1)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r26,r1,176
	ctx.r26.s64 = ctx.r1.s64 + 176;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r25,1
	ctx.r25.s64 = 1;
loc_8228BE88:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r11,r21
	ctx.r11.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r30,12(r10)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// beq cr6,0x8228bec0
	if (ctx.cr6.eq) goto loc_8228BEC0;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
loc_8228BEA0:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8228bec0
	if (ctx.cr6.eq) goto loc_8228BEC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x8228bea0
	if (ctx.cr6.lt) goto loc_8228BEA0;
loc_8228BEC0:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8228c0ac
	if (!ctx.cr6.eq) goto loc_8228C0AC;
	// lbz r11,97(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// mtctr r15
	ctx.ctr.u64 = ctx.r15.u64;
	// lwz r10,208(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
	// stw r30,196(r1)
	REX_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// rlwimi r10,r11,3,28,28
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r23,192(r1)
	REX_STORE_U32(ctx.r1.u32 + 192, ctx.r23.u32);
	// stw r21,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r21.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r21,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r21.u32);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
loc_8228BF00:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r7,196(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 196);
	// lwzx r8,r10,r8
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r6,12(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x8228bf9c
	if (!ctx.cr6.eq) goto loc_8228BF9C;
	// lwz r7,148(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// rlwinm r6,r11,1,28,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xE;
	// lwz r4,200(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 200);
	// rlwinm r5,r11,1,28,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xE;
	// srw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// slw r20,r24,r6
	ctx.r20.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r6.u8 & 0x3F));
	// lwz r3,204(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 204);
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// andc r4,r4,r20
	ctx.r4.u64 = ctx.r4.u64 & ~ctx.r20.u64;
	// slw r6,r7,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// addi r18,r1,240
	ctx.r18.s64 = ctx.r1.s64 + 240;
	// rlwinm r8,r8,27,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x3;
	// slw r19,r24,r5
	ctx.r19.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r5.u8 & 0x3F));
	// or r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 | ctx.r6.u64;
	// lwzx r20,r10,r18
	ctx.r20.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r18.u32);
	// slw r5,r8,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// stw r6,200(r1)
	REX_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// andc r3,r3,r19
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r19.u64;
	// rlwinm r11,r11,2,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// addi r6,r1,212
	ctx.r6.s64 = ctx.r1.s64 + 212;
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// slw r8,r25,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r8.u8 & 0x3F));
	// stw r5,204(r1)
	REX_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// or r31,r8,r31
	ctx.r31.u64 = ctx.r8.u64 | ctx.r31.u64;
	// stwx r20,r11,r6
	REX_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r20.u32);
	// slw r7,r25,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r7.u8 & 0x3F));
	// or r29,r7,r29
	ctx.r29.u64 = ctx.r7.u64 | ctx.r29.u64;
	// lwz r11,208(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 208);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwimi r8,r11,0,0,28
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,208(r1)
	REX_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
loc_8228BF9C:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8228bf00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8228BF00;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8228bfd4
	if (!ctx.cr6.eq) goto loc_8228BFD4;
	// addi r5,r1,200
	ctx.r5.s64 = ctx.r1.s64 + 200;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82280dd8
	ctx.lr = 0x8228BFC4;
	sub_82280DD8(ctx, base);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// addi r4,r1,196
	ctx.r4.s64 = ctx.r1.s64 + 196;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82280dd8
	ctx.lr = 0x8228BFD4;
	sub_82280DD8(ctx, base);
loc_8228BFD4:
	// lwz r10,4(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// addi r11,r22,4
	ctx.r11.s64 = ctx.r22.s64 + 4;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c008
	if (!ctx.cr0.eq) goto loc_8228C008;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c008
	if (ctx.cr0.eq) goto loc_8228C008;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228c018
	if (!ctx.cr6.gt) goto loc_8228C018;
loc_8228C008:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82285ab8
	ctx.lr = 0x8228C014;
	sub_82285AB8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228C018:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// li r5,36
	ctx.r5.s64 = 36;
	// mulli r9,r10,36
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(36));
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// bl 0x8215e640
	ctx.lr = 0x8228C03C;
	sub_8215E640(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228c0ac
	if (!ctx.cr6.eq) goto loc_8228C0AC;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8228c0ac
	if (!ctx.cr6.eq) goto loc_8228C0AC;
	// lwz r4,48(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// bl 0x8226d580
	ctx.lr = 0x8228C068;
	sub_8226D580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c0ac
	if (ctx.cr0.eq) goto loc_8228C0AC;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8228C074:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c0a0
	if (ctx.cr6.eq) goto loc_8228C0A0;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c098
	if (ctx.cr6.eq) goto loc_8228C098;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,120(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8228c0ac
	if (!ctx.cr6.eq) goto loc_8228C0AC;
loc_8228C098:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8228c074
	goto loc_8228C074;
loc_8228C0A0:
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8228C0AC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplw cr6,r28,r15
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x8228be88
	if (ctx.cr6.lt) goto loc_8228BE88;
loc_8228C0BC:
	// lbz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8228c104
	if (!ctx.cr0.eq) goto loc_8228C104;
	// lwz r11,8(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// rlwinm r10,r11,31,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0xF;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8228c104
	if (!ctx.cr6.eq) goto loc_8228C104;
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 384, ctx.xer);
	// bne cr6,0x8228c104
	if (!ctx.cr6.eq) goto loc_8228C104;
	// lwz r4,48(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// lwz r3,44(r23)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r23.u32 + 44);
	// bl 0x8226d580
	ctx.lr = 0x8228C0F0;
	sub_8226D580(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c104
	if (ctx.cr0.eq) goto loc_8228C104;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,136(r1)
	REX_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
loc_8228C104:
	// cmplw cr6,r27,r15
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8228c148
	if (!ctx.cr6.eq) goto loc_8228C148;
	// lwz r11,232(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r30,228(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 228);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stw r11,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// beq cr6,0x8228c148
	if (ctx.cr6.eq) goto loc_8228C148;
loc_8228C124:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334408
	ctx.lr = 0x8228C13C;
	sub_82334408(ctx, base);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8228c124
	if (!ctx.cr6.eq) goto loc_8228C124;
	// stw r31,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
loc_8228C148:
	// lwz r11,128(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c168
	if (!ctx.cr0.eq) goto loc_8228C168;
	// stw r11,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228b448
	if (!ctx.cr6.eq) goto loc_8228B448;
loc_8228C168:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,184(r1)
	REX_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,176(r1)
	REX_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r11,180(r1)
	REX_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// b 0x8228c1a8
	goto loc_8228C1A8;
loc_8228C198:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C1A4;
	sub_8225B1A0(ctx, base);
loc_8228C1A4:
	// lwz r11,180(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 180);
loc_8228C1A8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c1c4
	if (ctx.cr6.eq) goto loc_8228C1C4;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,184(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 184);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8228c1c8
	if (!ctx.cr6.eq) goto loc_8228C1C8;
loc_8228C1C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8228C1C8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c288
	if (!ctx.cr0.eq) goto loc_8228C288;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82283000
	ctx.lr = 0x8228C1D8;
	sub_82283000(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// addi r9,r3,20
	ctx.r9.s64 = ctx.r3.s64 + 20;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8228C1E4:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c21c
	if (ctx.cr6.eq) goto loc_8228C21C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c214
	if (ctx.cr6.eq) goto loc_8228C214;
	// lwz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r8,r8,0,18,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r8,14080
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 14080, ctx.xer);
	// bne cr6,0x8228c214
	if (!ctx.cr6.eq) goto loc_8228C214;
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r8,r8,0,4,6
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8228c220
	if (!ctx.cr0.eq) goto loc_8228C220;
loc_8228C214:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8228c1e4
	goto loc_8228C1E4;
loc_8228C21C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228C220:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c1a4
	if (ctx.cr6.eq) goto loc_8228C1A4;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi. r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8228c1a4
	if (ctx.cr0.eq) goto loc_8228C1A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// addi r8,r11,44
	ctx.r8.s64 = ctx.r11.s64 + 44;
	// rlwinm r6,r10,13,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
loc_8228C244:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_8228C24C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8228b0f0
	if (!ctx.cr6.lt) goto loc_8228B0F0;
	// lwz r4,0(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r3,0(r9)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r4,12(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8228c274
	if (ctx.cr6.eq) goto loc_8228C274;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8228c24c
	goto loc_8228C24C;
loc_8228C274:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x8228c244
	if (ctx.cr6.lt) goto loc_8228C244;
	// b 0x8228c1a4
	goto loc_8228C1A4;
loc_8228C288:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,124(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// bl 0x8226da80
	ctx.lr = 0x8228C294;
	sub_8226DA80(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8228c31c
	if (ctx.cr6.eq) goto loc_8228C31C;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8228c2dc
	if (!ctx.cr0.eq) goto loc_8228C2DC;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8228c2dc
	if (ctx.cr0.eq) goto loc_8228C2DC;
loc_8228C2BC:
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
	// bne 0x8228c2dc
	if (!ctx.cr0.eq) goto loc_8228C2DC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8228c2bc
	if (!ctx.cr6.eq) goto loc_8228C2BC;
loc_8228C2DC:
	// lwz r9,136(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,460(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// lwz r8,172(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// lwz r9,104(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// subf r11,r8,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r8.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 48);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm. r10,r10,6,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c314
	if (!ctx.cr0.eq) goto loc_8228C314;
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_8228C314:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8228b0f0
	if (ctx.cr6.gt) goto loc_8228B0F0;
loc_8228C31C:
	// lwz r31,120(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 120);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r24,460(r1)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f2408
	ctx.lr = 0x8228C340;
	sub_822F2408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8228c360
	if (ctx.cr6.eq) goto loc_8228C360;
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8228b0f0
	if (!ctx.cr6.eq) goto loc_8228B0F0;
	// stw r3,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// b 0x8228b0f0
	goto loc_8228B0F0;
loc_8228C360:
	// lwz r3,144(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8228c378
	if (ctx.cr6.eq) goto loc_8228C378;
	// bl 0x822fa780
	ctx.lr = 0x8228C378;
	sub_822FA780(ctx, base);
loc_8228C378:
	// lwz r29,140(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lbz r6,98(r1)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r8,660(r14)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// bl 0x82287850
	ctx.lr = 0x8228C398;
	sub_82287850(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,124(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334408
	ctx.lr = 0x8228C3AC;
	sub_82334408(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// blt cr6,0x8228c3c8
	if (ctx.cr6.lt) goto loc_8228C3C8;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x8228c3cc
	if (!ctx.cr6.gt) goto loc_8228C3CC;
loc_8228C3C8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228C3CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c474
	if (ctx.cr0.eq) goto loc_8228C474;
loc_8228C3D4:
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
loc_8228C3D8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c480
	if (ctx.cr6.eq) goto loc_8228C480;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c41c
	if (ctx.cr6.eq) goto loc_8228C41C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,4,6
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8228c41c
	if (ctx.cr0.eq) goto loc_8228C41C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8228C3FC:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c41c
	if (ctx.cr6.eq) goto loc_8228C41C;
	// lwz r31,16(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228c424
	if (!ctx.cr6.eq) goto loc_8228C424;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8228c3fc
	goto loc_8228C3FC;
loc_8228C41C:
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x8228c3d8
	goto loc_8228C3D8;
loc_8228C424:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// beq cr6,0x8228c43c
	if (ctx.cr6.eq) goto loc_8228C43C;
	// cmplwi cr6,r11,63
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63, ctx.xer);
	// bne cr6,0x8228c460
	if (!ctx.cr6.eq) goto loc_8228C460;
loc_8228C43C:
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82338bd0
	ctx.lr = 0x8228C450;
	sub_82338BD0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334690
	ctx.lr = 0x8228C45C;
	sub_82334690(ctx, base);
	// b 0x8228c3d4
	goto loc_8228C3D4;
loc_8228C460:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,3500
	ctx.r4.s64 = 3500;
	// addi r5,r11,6388
	ctx.r5.s64 = ctx.r11.s64 + 6388;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C474;
	sub_8225B1A0(ctx, base);
loc_8228C474:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334690
	ctx.lr = 0x8228C480;
	sub_82334690(ctx, base);
loc_8228C480:
	// lwz r11,48(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r10,160(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// rlwinm r11,r11,0,6,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFBFFFFFF;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// stw r11,48(r24)
	REX_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// bne cr6,0x8228c4e4
	if (!ctx.cr6.eq) goto loc_8228C4E4;
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823389a8
	ctx.lr = 0x8228C4AC;
	sub_823389A8(ctx, base);
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823389a8
	ctx.lr = 0x8228C4C0;
	sub_823389A8(ctx, base);
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338b20
	ctx.lr = 0x8228C4D0;
	sub_82338B20(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8228c514
	if (!ctx.cr6.eq) goto loc_8228C514;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8228c51c
	goto loc_8228C51C;
loc_8228C4E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823389a8
	ctx.lr = 0x8228C4EC;
	sub_823389A8(ctx, base);
	// lwz r29,100(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
loc_8228C4F0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822854f8
	ctx.lr = 0x8228C500;
	sub_822854F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bne 0x8228c568
	if (!ctx.cr0.eq) goto loc_8228C568;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C514;
	sub_8225B1A0(ctx, base);
loc_8228C514:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
loc_8228C51C:
	// cmplw cr6,r24,r5
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x8228c544
	if (ctx.cr6.eq) goto loc_8228C544;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822854f8
	ctx.lr = 0x8228C530;
	sub_822854F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c544
	if (!ctx.cr0.eq) goto loc_8228C544;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C544;
	sub_8225B1A0(ctx, base);
loc_8228C544:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822854f8
	ctx.lr = 0x8228C554;
	sub_822854F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c4f0
	if (!ctx.cr0.eq) goto loc_8228C4F0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C568;
	sub_8225B1A0(ctx, base);
loc_8228C568:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x822854f8
	ctx.lr = 0x8228C574;
	sub_822854F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c588
	if (!ctx.cr0.eq) goto loc_8228C588;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8228C588;
	sub_8225B1A0(ctx, base);
loc_8228C588:
	// lwz r10,12(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c5a4
	if (ctx.cr6.eq) goto loc_8228C5A4;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8228c5a8
	if (!ctx.cr6.eq) goto loc_8228C5A8;
loc_8228C5A4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228C5A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c5f8
	if (!ctx.cr0.eq) goto loc_8228C5F8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c5f8
	if (ctx.cr6.eq) goto loc_8228C5F8;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8228c5f8
	if (ctx.cr6.eq) goto loc_8228C5F8;
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c5e0
	if (ctx.cr6.eq) goto loc_8228C5E0;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8228c5e4
	if (!ctx.cr6.eq) goto loc_8228C5E4;
loc_8228C5E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8228C5E4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c5f8
	if (!ctx.cr0.eq) goto loc_8228C5F8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822854f8
	ctx.lr = 0x8228C5F8;
	sub_822854F8(ctx, base);
loc_8228C5F8:
	// lwz r11,28(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 28);
	// li r23,1
	ctx.r23.s64 = 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r23,109(r1)
	REX_STORE_U8(ctx.r1.u32 + 109, ctx.r23.u8);
	// bne 0x8228c66c
	if (!ctx.cr0.eq) goto loc_8228C66C;
	// lwz r11,24(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r28,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r28.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8228c66c
	if (ctx.cr0.eq) goto loc_8228C66C;
loc_8228C61C:
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228c634
	if (ctx.cr0.eq) goto loc_8228C634;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x8228c63c
	goto loc_8228C63C;
loc_8228C634:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r25,r11,-40
	ctx.r25.s64 = ctx.r11.s64 + -40;
loc_8228C63C:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm. r10,r11,8,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c674
	if (!ctx.cr0.eq) goto loc_8228C674;
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r28)
	REX_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_8228C650:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,660(r14)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822c5ef0
	ctx.lr = 0x8228C660;
	sub_822C5EF0(ctx, base);
loc_8228C660:
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x8228c61c
	if (!ctx.cr6.eq) goto loc_8228C61C;
loc_8228C66C:
	// stb r23,108(r1)
	REX_STORE_U8(ctx.r1.u32 + 108, ctx.r23.u8);
	// b 0x8228c874
	goto loc_8228C874;
loc_8228C674:
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14080, ctx.xer);
	// bne cr6,0x8228c660
	if (!ctx.cr6.eq) goto loc_8228C660;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r28,44
	ctx.r27.s64 = ctx.r28.s64 + 44;
loc_8228C688:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8228c650
	if (!ctx.cr6.lt) goto loc_8228C650;
	// lwz r31,0(r27)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r30)
	REX_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r5,660(r14)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// bl 0x822c5ef0
	ctx.lr = 0x8228C6BC;
	sub_822C5EF0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_8228C6C0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228c6f4
	if (ctx.cr6.eq) goto loc_8228C6F4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8228c6ec
	if (ctx.cr6.eq) goto loc_8228C6EC;
	// lwz r9,8(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,14080
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14080, ctx.xer);
	// bne cr6,0x8228c6ec
	if (!ctx.cr6.eq) goto loc_8228C6EC;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8228c704
	if (!ctx.cr6.eq) goto loc_8228C704;
loc_8228C6EC:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8228c6c0
	goto loc_8228C6C0;
loc_8228C6F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,15,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C000;
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// ble cr6,0x8228c7c8
	if (!ctx.cr6.gt) goto loc_8228C7C8;
loc_8228C704:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r28,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// rlwinm r29,r11,27,30,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// bl 0x82332cc0
	ctx.lr = 0x8228C720;
	sub_82332CC0(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822815d8
	ctx.lr = 0x8228C72C;
	sub_822815D8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// oris r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 16777216;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r10,r10,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228c7c8
	if (ctx.cr0.eq) goto loc_8228C7C8;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r10,r11,0,13,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8228c764
	if (ctx.cr0.eq) goto loc_8228C764;
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// sth r11,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r11.u16);
	// b 0x8228c770
	goto loc_8228C770;
loc_8228C764:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8228cb48
	ctx.lr = 0x8228C76C;
	sub_8228CB48(ctx, base);
	// sth r3,18(r31)
	REX_STORE_U16(ctx.r31.u32 + 18, ctx.r3.u16);
loc_8228C770:
	// lwz r3,660(r14)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r14.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8228c7a4
	if (!ctx.cr0.eq) goto loc_8228C7A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c7a4
	if (ctx.cr0.eq) goto loc_8228C7A4;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x8228c7b0
	if (!ctx.cr6.gt) goto loc_8228C7B0;
loc_8228C7A4:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x8228C7AC;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8228C7B0:
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
loc_8228C7C8:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x8228c688
	goto loc_8228C688;
loc_8228C7D4:
	// lwz r31,112(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
loc_8228C7D8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822827a0
	ctx.lr = 0x8228C7F4;
	sub_822827A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c874
	if (ctx.cr0.eq) goto loc_8228C874;
	// addi r8,r1,97
	ctx.r8.s64 = ctx.r1.s64 + 97;
	// lwz r7,140(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,124(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// lwz r4,100(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x822827a0
	ctx.lr = 0x8228C818;
	sub_822827A0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c874
	if (ctx.cr0.eq) goto loc_8228C874;
	// lwz r29,460(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 460);
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r31,98(r1)
	ctx.r31.u64 = REX_LOAD_U8(ctx.r1.u32 + 98);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r8,96(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 96);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82282b38
	ctx.lr = 0x8228C844;
	sub_82282B38(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lbz r8,97(r1)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r1.u32 + 97);
	// li r6,0
	ctx.r6.s64 = 0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8228C858:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82282b38
	ctx.lr = 0x8228C868;
	sub_82282B38(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// oris r11,r11,3072
	ctx.r11.u64 = ctx.r11.u64 | 201326592;
	// stw r11,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_8228C874:
	// lwz r31,132(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8228c898
	if (ctx.cr6.eq) goto loc_8228C898;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82285a18
	ctx.lr = 0x8228C888;
	sub_82285A18(ctx, base);
	// lwz r10,976(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 976);
	// addi r11,r14,972
	ctx.r11.s64 = ctx.r14.s64 + 972;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r14)
	REX_STORE_U32(ctx.r14.u32 + 976, ctx.r31.u32);
loc_8228C898:
	// lwz r31,116(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x8228c8b8
	goto loc_8228C8B8;
loc_8228C8A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r31,32(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334408
	ctx.lr = 0x8228C8B8;
	sub_82334408(ctx, base);
loc_8228C8B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8228c8a0
	if (!ctx.cr6.eq) goto loc_8228C8A0;
	// lwz r29,144(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8228c994
	if (ctx.cr6.eq) goto loc_8228C994;
loc_8228C8CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8228c97c
	if (!ctx.cr0.eq) goto loc_8228C97C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228c97c
	if (ctx.cr0.eq) goto loc_8228C97C;
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
	// bne 0x8228c940
	if (!ctx.cr0.eq) goto loc_8228C940;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225b140
	ctx.lr = 0x8228C940;
	sub_8225B140(ctx, base);
loc_8228C940:
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// lwz r30,12(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82281b70
	ctx.lr = 0x8228C954;
	sub_82281B70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8226dc78
	ctx.lr = 0x8228C95C;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8228c8cc
	if (ctx.cr0.eq) goto loc_8228C8CC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82334408
	ctx.lr = 0x8228C978;
	sub_82334408(ctx, base);
	// b 0x8228c8cc
	goto loc_8228C8CC;
loc_8228C97C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822fa780
	ctx.lr = 0x8228C984;
	sub_822FA780(ctx, base);
	// lwz r10,976(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 976);
	// addi r11,r14,972
	ctx.r11.s64 = ctx.r14.s64 + 972;
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,976(r14)
	REX_STORE_U32(ctx.r14.u32 + 976, ctx.r29.u32);
loc_8228C994:
	// lbz r11,109(r1)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r1.u32 + 109);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228c9a8
	if (ctx.cr0.eq) goto loc_8228C9A8;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x822f4320
	ctx.lr = 0x8228C9A8;
	sub_822F4320(ctx, base);
loc_8228C9A8:
	// lbz r3,108(r1)
	ctx.r3.u64 = REX_LOAD_U8(ctx.r1.u32 + 108);
	// b 0x8228c9b4
	goto loc_8228C9B4;
loc_8228C9B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8228C9B4:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F4320) {
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
	// lwz r11,92(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8226e388
	ctx.lr = 0x822F4344;
	sub_8226E388(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f4398
	if (!ctx.cr0.eq) goto loc_822F4398;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f4398
	if (ctx.cr0.eq) goto loc_822F4398;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822F4360:
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// rlwinm r7,r11,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// rlwinm r9,r9,2,11,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FFFFC;
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,-4(r9)
	REX_STORE_U32(ctx.r9.u32 + -4, ctx.r11.u32);
	// lwz r11,4(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822f4398
	if (!ctx.cr0.eq) goto loc_822F4398;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f4360
	if (!ctx.cr6.eq) goto loc_822F4360;
loc_822F4398:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,92(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x822f3328
	ctx.lr = 0x822F43A4;
	sub_822F3328(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,96(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x822761a0
	ctx.lr = 0x822F43BC;
	sub_822761A0(ctx, base);
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

DEFINE_REX_FUNC(sub_822F4D90) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822f4dd8
	if (ctx.cr6.eq) goto loc_822F4DD8;
	// lwz r3,24(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821a9678
	ctx.lr = 0x822F4DC8;
	sub_821A9678(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822f4dd8
	if (!ctx.cr0.lt) goto loc_822F4DD8;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_822F4DD8:
	// rlwinm. r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f4df0
	if (ctx.cr0.eq) goto loc_822F4DF0;
	// lwz r9,48(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r9,r9,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822f4e04
	if (!ctx.cr6.eq) goto loc_822F4E04;
loc_822F4DF0:
	// clrlwi. r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f4e0c
	if (ctx.cr0.eq) goto loc_822F4E0C;
	// lhz r9,50(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 50);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f4e0c
	if (ctx.cr6.eq) goto loc_822F4E0C;
loc_822F4E04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822f4e14
	goto loc_822F4E14;
loc_822F4E0C:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_822F4E14:
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

DEFINE_REX_FUNC(sub_822F5A40) {
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
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5a9c
	if (ctx.cr6.eq) goto loc_822F5A9C;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x822f5a9c
	if (!ctx.cr6.eq) goto loc_822F5A9C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5a94
	if (ctx.cr6.eq) goto loc_822F5A94;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x822f5a94
	if (!ctx.cr6.eq) goto loc_822F5A94;
	// lwz r3,24(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x822f5b7c
	goto loc_822F5B7C;
loc_822F5A94:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x8225b1a0
	ctx.lr = 0x822F5A9C;
	sub_8225B1A0(ctx, base);
loc_822F5A9C:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f5ab8
	if (ctx.cr0.eq) goto loc_822F5AB8;
	// cmplwi cr6,r4,727
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 727, ctx.xer);
	// bge cr6,0x822f5ab8
	if (!ctx.cr6.lt) goto loc_822F5AB8;
	// bl 0x822f5580
	ctx.lr = 0x822F5AB4;
	sub_822F5580(ctx, base);
	// b 0x822f5b7c
	goto loc_822F5B7C;
loc_822F5AB8:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f5af0
	if (ctx.cr0.eq) goto loc_822F5AF0;
	// lwz r11,600(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 600);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f5af0
	if (ctx.cr6.lt) goto loc_822F5AF0;
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f5af0
	if (!ctx.cr6.lt) goto loc_822F5AF0;
	// subf r11,r11,r4
	ctx.r11.u64 = ctx.r4.u64 - ctx.r11.u64;
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1552
	ctx.r10.s64 = ctx.r10.s64 + -1552;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x822f5b7c
	goto loc_822F5B7C;
loc_822F5AF0:
	// lwz r11,604(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 604);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5b54
	if (ctx.cr6.eq) goto loc_822F5B54;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f5b54
	if (ctx.cr6.lt) goto loc_822F5B54;
	// lwz r10,20(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,600(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 600);
	// subf r10,r8,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r8.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x822f5b20
	if (!ctx.cr6.gt) goto loc_822F5B20;
	// subf r10,r11,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r11.u64;
loc_822F5B20:
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x822f5b54
	if (!ctx.cr6.lt) goto loc_822F5B54;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r31,r10,-32120
	ctx.r31.s64 = ctx.r10.s64 + -32120;
	// subf r6,r11,r4
	ctx.r6.u64 = ctx.r4.u64 - ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r9,9520
	ctx.r5.s64 = ctx.r9.s64 + 9520;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x82370890
	ctx.lr = 0x822F5B4C;
	sub_82370890(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822f5b7c
	goto loc_822F5B7C;
loc_822F5B54:
	// lwz r11,612(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f5b74
	if (ctx.cr6.eq) goto loc_822F5B74;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f5b74
	if (!ctx.cr6.eq) goto loc_822F5B74;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r3,r11,9504
	ctx.r3.s64 = ctx.r11.s64 + 9504;
	// b 0x822f5b7c
	goto loc_822F5B7C;
loc_822F5B74:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r11,19228
	ctx.r3.s64 = ctx.r11.s64 + 19228;
loc_822F5B7C:
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

DEFINE_REX_FUNC(sub_822F6CC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x822F6CD0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82281260
	ctx.lr = 0x822F6CF4;
	sub_82281260(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822F6D04;
	sub_82281260(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f6d24
	if (ctx.cr6.eq) goto loc_822F6D24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822F6D20;
	sub_82281260(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_822F6D24:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822f6d40
	if (ctx.cr6.eq) goto loc_822F6D40;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281260
	ctx.lr = 0x822F6D3C;
	sub_82281260(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_822F6D40:
	// lwz r11,260(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f6bb8
	ctx.lr = 0x822F6D68;
	sub_822F6BB8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F74A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F74B0;
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
	ctx.lr = 0x822F74D8;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f74fc
	if (ctx.cr6.eq) goto loc_822F74FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F74F8;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F74FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F7504;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822f7528
	if (ctx.cr6.eq) goto loc_822F7528;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F7524;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F7528:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F7530;
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

DEFINE_REX_FUNC(sub_822F8578) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822F8580;
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
	// li r6,100
	ctx.r6.s64 = 100;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r4,564(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822F85A8;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f85cc
	if (ctx.cr6.eq) goto loc_822F85CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F85C8;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F85CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F85D4;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822f85f8
	if (ctx.cr6.eq) goto loc_822F85F8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822F85F4;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822F85F8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822F8600;
	sub_82281428(ctx, base);
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
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
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F9B10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x822F9B18;
	__savegprlr_17(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lis r17,-1
	ctx.r17.s64 = -65536;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x822f9b5c
	if (ctx.cr6.eq) goto loc_822F9B5C;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r28,19
	ctx.r28.s64 = 19;
	// addi r20,r11,-1728
	ctx.r20.s64 = ctx.r11.s64 + -1728;
	// b 0x822f9b68
	goto loc_822F9B68;
loc_822F9B5C:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r28,3
	ctx.r28.s64 = 3;
	// addi r20,r11,-1576
	ctx.r20.s64 = ctx.r11.s64 + -1576;
loc_822F9B68:
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822f9c60
	if (ctx.cr6.eq) goto loc_822F9C60;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// addi r30,r20,4
	ctx.r30.s64 = ctx.r20.s64 + 4;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r27,r11,9828
	ctx.r27.s64 = ctx.r11.s64 + 9828;
	// addi r29,r10,4824
	ctx.r29.s64 = ctx.r10.s64 + 4824;
loc_822F9B8C:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x822f9bb0
	if (!ctx.cr6.eq) goto loc_822F9BB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82371118
	ctx.lr = 0x822F9BA8;
	sub_82371118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822f9bc0
	if (ctx.cr0.eq) goto loc_822F9BC0;
loc_822F9BB0:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f9c50
	if (!ctx.cr6.eq) goto loc_822F9C50;
loc_822F9BC0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822f9c38
	if (ctx.cr6.eq) goto loc_822F9C38;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r3,r11,r24
	ctx.r3.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bl 0x82166430
	ctx.lr = 0x822F9BE0;
	sub_82166430(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r22,r3,r26
	ctx.r22.u64 = ctx.r3.u64 + ctx.r26.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822f9c38
	if (ctx.cr0.eq) goto loc_822F9C38;
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r10,r10,0,10,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f9c60
	if (!ctx.cr0.eq) goto loc_822F9C60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8215f2c0
	ctx.lr = 0x822F9C0C;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822f9c38
	if (ctx.cr0.eq) goto loc_822F9C38;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8215f2c0
	ctx.lr = 0x822F9C20;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x822f9c60
	if (!ctx.cr0.eq) goto loc_822F9C60;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9c38
	if (ctx.cr6.eq) goto loc_822F9C38;
	// stw r19,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r19.u32);
loc_822F9C38:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r10,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r10,10,26,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3F;
	// beq 0x822f9ce8
	if (ctx.cr0.eq) goto loc_822F9CE8;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f9c6c
	if (ctx.cr6.lt) goto loc_822F9C6C;
loc_822F9C50:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r21,r28
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x822f9b8c
	if (ctx.cr6.lt) goto loc_822F9B8C;
loc_822F9C60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F9C64:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
loc_822F9C6C:
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r10,24,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9c94
	if (ctx.cr0.eq) goto loc_822F9C94;
	// rlwinm r9,r10,16,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// cmplw cr6,r23,r9
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822f9c9c
	if (ctx.cr6.eq) goto loc_822F9C9C;
	// rlwinm r3,r10,20,25,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x70;
	// b 0x822f9c64
	goto loc_822F9C64;
loc_822F9C94:
	// slw r11,r19,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r23.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_822F9C9C:
	// add r9,r6,r22
	ctx.r9.u64 = ctx.r6.u64 + ctx.r22.u64;
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwimi r11,r9,4,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq cr6,0x822f9d58
	if (ctx.cr6.eq) goto loc_822F9D58;
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
loc_822F9CBC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822f9ce0
	if (ctx.cr6.eq) goto loc_822F9CE0;
	// lwz r9,336(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822f9cbc
	if (ctx.cr6.lt) goto loc_822F9CBC;
	// b 0x822f9d58
	goto loc_822F9D58;
loc_822F9CE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x822f9c64
	goto loc_822F9C64;
loc_822F9CE8:
	// lwz r7,336(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x822f9d3c
	if (ctx.cr6.eq) goto loc_822F9D3C;
	// addi r8,r31,124
	ctx.r8.s64 = ctx.r31.s64 + 124;
loc_822F9CFC:
	// lwz r11,0(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r10,r11,27,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xF;
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x822f9d28
	if (!ctx.cr6.eq) goto loc_822F9D28;
	// rlwinm r10,r21,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r20
	ctx.r10.u64 = ctx.r10.u64 + ctx.r20.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9ee8
	if (ctx.cr0.eq) goto loc_822F9EE8;
loc_822F9D28:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x822f9cfc
	if (ctx.cr6.lt) goto loc_822F9CFC;
loc_822F9D3C:
	// lwz r11,340(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 340);
	// slw r10,r19,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r23.u8 & 0x3F));
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r30,r10,-1
	ctx.r30.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwimi r30,r9,4,0,27
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0) | (ctx.r30.u64 & 0xFFFFFFFF0000000F);
	// stw r11,340(r31)
	REX_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
loc_822F9D58:
	// cmplwi cr6,r7,18
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 18, ctx.xer);
	// beq cr6,0x822f9c60
	if (ctx.cr6.eq) goto loc_822F9C60;
	// rlwinm r11,r21,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r11,r20
	ctx.r29.u64 = ctx.r11.u64 + ctx.r20.u64;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9d84
	if (ctx.cr0.eq) goto loc_822F9D84;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f9d84
	if (ctx.cr6.eq) goto loc_822F9D84;
	// stw r19,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r19.u32);
loc_822F9D84:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x822f9e10
	if (!ctx.cr6.eq) goto loc_822F9E10;
	// lwz r24,0(r29)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x822f9e10
	if (ctx.cr6.eq) goto loc_822F9E10;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// addi r5,r11,3992
	ctx.r5.s64 = ctx.r11.s64 + 3992;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82370890
	ctx.lr = 0x822F9DB4;
	sub_82370890(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_822F9DBC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x822f9dbc
	if (!ctx.cr6.eq) goto loc_822F9DBC;
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
	ctx.lr = 0x822F9DEC;
	sub_82295980(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// subf r10,r10,r3
	ctx.r10.u64 = ctx.r3.u64 - ctx.r10.u64;
loc_822F9DFC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stbx r9,r10,r11
	REX_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x822f9dfc
	if (!ctx.cr0.eq) goto loc_822F9DFC;
loc_822F9E10:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// clrlwi r10,r18,24
	ctx.r10.u64 = ctx.r18.u32 & 0xFF;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stwx r24,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r30,128(r11)
	REX_STORE_U32(ctx.r11.u32 + 128, ctx.r30.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// lwz r8,124(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwimi r9,r22,5,23,26
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 5) & 0x1E0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r9,124(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// rlwimi r9,r10,18,13,13
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x40000) | (ctx.r9.u64 & 0xFFFFFFFFFFFBFFFF);
	// stw r9,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r9.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f9ed4
	if (ctx.cr0.eq) goto loc_822F9ED4;
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// beq cr6,0x822f9ed4
	if (ctx.cr6.eq) goto loc_822F9ED4;
	// rlwinm r11,r30,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF0;
	// cmplwi cr6,r11,992
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 992, ctx.xer);
	// bne cr6,0x822f9ed4
	if (!ctx.cr6.eq) goto loc_822F9ED4;
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// oris r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 262144;
	// stw r10,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_822F9ED4:
	// lwz r11,336(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 336);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,336(r31)
	REX_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// b 0x822f9c64
	goto loc_822F9C64;
loc_822F9EE8:
	// mulli r11,r9,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r9.u64 * static_cast<uint64_t>(12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x822f9c64
	goto loc_822F9C64;
}

DEFINE_REX_FUNC(sub_8230DB08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x8230DB10;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x8230DB28;
	sub_8226DBE8(ctx, base);
	// addi r22,r3,4
	ctx.r22.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r22,1
	ctx.r10.u64 = ctx.r22.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230dbf4
	if (ctx.cr0.eq) goto loc_8230DBF4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230dc08
	if (ctx.cr6.eq) goto loc_8230DC08;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8230dc08
	if (!ctx.cr6.eq) goto loc_8230DC08;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8230DB6C:
	// lwz r30,8(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8230dbd0
	if (!ctx.cr6.eq) goto loc_8230DBD0;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230dbac
	if (!ctx.cr0.eq) goto loc_8230DBAC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230dbac
	if (ctx.cr0.eq) goto loc_8230DBAC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230dbb8
	if (!ctx.cr6.gt) goto loc_8230DBB8;
loc_8230DBAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230DBB8;
	sub_822FADE8(ctx, base);
loc_8230DBB8:
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
loc_8230DBD0:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230dbe8
	if (ctx.cr6.eq) goto loc_8230DBE8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8230dbfc
	if (!ctx.cr6.eq) goto loc_8230DBFC;
loc_8230DBE8:
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8230db6c
	if (!ctx.cr6.eq) goto loc_8230DB6C;
loc_8230DBF4:
	// lwz r27,568(r31)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r31.u32 + 568);
	// b 0x8230dd90
	goto loc_8230DD90;
loc_8230DBFC:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DC08;
	sub_8225B1A0(ctx, base);
loc_8230DC08:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DC14;
	sub_8225B1A0(ctx, base);
loc_8230DC14:
	// lwz r28,4(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,44(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230dd20
	if (ctx.cr6.eq) goto loc_8230DD20;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8230dd20
	if (ctx.cr6.eq) goto loc_8230DD20;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DC3C;
	sub_8225B1A0(ctx, base);
loc_8230DC3C:
	// lwz r30,8(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x8230dcb4
	if (!ctx.cr6.eq) goto loc_8230DCB4;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8230de64
	if (!ctx.cr6.eq) goto loc_8230DE64;
	// lwz r11,24(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230de70
	if (ctx.cr6.eq) goto loc_8230DE70;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// bne cr6,0x8230de70
	if (!ctx.cr6.eq) goto loc_8230DE70;
	// cmplw cr6,r21,r27
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8230dc90
	if (!ctx.cr6.eq) goto loc_8230DC90;
	// lwz r10,40(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r10,r10,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230dd08
	if (ctx.cr0.eq) goto loc_8230DD08;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8230dd08
	if (ctx.cr0.eq) goto loc_8230DD08;
loc_8230DC90:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8230dd08
	goto loc_8230DD08;
loc_8230DCB4:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230dce4
	if (!ctx.cr0.eq) goto loc_8230DCE4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230dce4
	if (ctx.cr0.eq) goto loc_8230DCE4;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230dcf0
	if (!ctx.cr6.gt) goto loc_8230DCF0;
loc_8230DCE4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230DCF0;
	sub_822FADE8(ctx, base);
loc_8230DCF0:
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
loc_8230DD08:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230dd20
	if (ctx.cr6.eq) goto loc_8230DD20;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8230de7c
	if (!ctx.cr6.eq) goto loc_8230DE7C;
loc_8230DD20:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bne cr6,0x8230dc3c
	if (!ctx.cr6.eq) goto loc_8230DC3C;
	// lwz r30,48(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230dd8c
	if (ctx.cr6.eq) goto loc_8230DD8C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230dd68
	if (!ctx.cr0.eq) goto loc_8230DD68;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230dd68
	if (ctx.cr0.eq) goto loc_8230DD68;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230dd74
	if (!ctx.cr6.gt) goto loc_8230DD74;
loc_8230DD68:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230DD74;
	sub_822FADE8(ctx, base);
loc_8230DD74:
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
loc_8230DD8C:
	// lwz r27,8(r27)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
loc_8230DD90:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x8230dc14
	if (!ctx.cr6.eq) goto loc_8230DC14;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
loc_8230DDA8:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8230e1e4
	if (!ctx.cr0.eq) goto loc_8230E1E4;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8230e1e4
	if (ctx.cr0.eq) goto loc_8230E1E4;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
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
	// lwzx r28,r10,r4
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x8230de1c
	if (!ctx.cr0.eq) goto loc_8230DE1C;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
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
	ctx.lr = 0x8230DE1C;
	sub_8225B140(ctx, base);
loc_8230DE1C:
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8230e120
	if (ctx.cr6.eq) goto loc_8230E120;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x8230df8c
	if (ctx.cr6.eq) goto loc_8230DF8C;
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// beq cr6,0x8230dec4
	if (ctx.cr6.eq) goto loc_8230DEC4;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// beq cr6,0x8230de88
	if (ctx.cr6.eq) goto loc_8230DE88;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// bne cr6,0x8230dda8
	if (!ctx.cr6.eq) goto loc_8230DDA8;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230de5c
	if (!ctx.cr0.eq) goto loc_8230DE5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8230d968
	ctx.lr = 0x8230DE5C;
	sub_8230D968(ctx, base);
loc_8230DE5C:
	// lwz r30,16(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// b 0x8230e18c
	goto loc_8230E18C;
loc_8230DE64:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DE70;
	sub_8225B1A0(ctx, base);
loc_8230DE70:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DE7C;
	sub_8225B1A0(ctx, base);
loc_8230DE7C:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8230DE88;
	sub_8225B1A0(ctx, base);
loc_8230DE88:
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x8230e180
	if (ctx.cr6.eq) goto loc_8230E180;
	// addi r30,r28,84
	ctx.r30.s64 = ctx.r28.s64 + 84;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8230DE9C:
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8230deb4
	if (ctx.cr6.eq) goto loc_8230DEB4;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301210
	ctx.lr = 0x8230DEB4;
	sub_82301210(ctx, base);
loc_8230DEB4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x8230de9c
	if (!ctx.cr0.eq) goto loc_8230DE9C;
	// b 0x8230e180
	goto loc_8230E180;
loc_8230DEC4:
	// lwz r11,28(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x8230df10
	if (ctx.cr6.lt) goto loc_8230DF10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x8230df78
	if (!ctx.cr6.gt) goto loc_8230DF78;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// ble cr6,0x8230df10
	if (!ctx.cr6.gt) goto loc_8230DF10;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// ble cr6,0x8230df78
	if (!ctx.cr6.gt) goto loc_8230DF78;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// bne cr6,0x8230df10
	if (!ctx.cr6.eq) goto loc_8230DF10;
	// lwz r11,32(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x8230df0c
	if (ctx.cr6.eq) goto loc_8230DF0C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x8230df10
	if (!ctx.cr6.eq) goto loc_8230DF10;
loc_8230DF0C:
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
loc_8230DF10:
	// lwz r30,32(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230df70
	if (ctx.cr6.eq) goto loc_8230DF70;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230df4c
	if (!ctx.cr0.eq) goto loc_8230DF4C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230df4c
	if (ctx.cr0.eq) goto loc_8230DF4C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230df58
	if (!ctx.cr6.gt) goto loc_8230DF58;
loc_8230DF4C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230DF58;
	sub_822FADE8(ctx, base);
loc_8230DF58:
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
loc_8230DF70:
	// lwz r30,36(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// b 0x8230e184
	goto loc_8230E184;
loc_8230DF78:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,32(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82301210
	ctx.lr = 0x8230DF88;
	sub_82301210(ctx, base);
	// b 0x8230df70
	goto loc_8230DF70;
loc_8230DF8C:
	// lwz r30,20(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230dfec
	if (ctx.cr6.eq) goto loc_8230DFEC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230dfc8
	if (!ctx.cr0.eq) goto loc_8230DFC8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230dfc8
	if (ctx.cr0.eq) goto loc_8230DFC8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230dfd4
	if (!ctx.cr6.gt) goto loc_8230DFD4;
loc_8230DFC8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230DFD4;
	sub_822FADE8(ctx, base);
loc_8230DFD4:
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
loc_8230DFEC:
	// lwz r30,24(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e04c
	if (ctx.cr6.eq) goto loc_8230E04C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e028
	if (!ctx.cr0.eq) goto loc_8230E028;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e028
	if (ctx.cr0.eq) goto loc_8230E028;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230e034
	if (!ctx.cr6.gt) goto loc_8230E034;
loc_8230E028:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230E034;
	sub_822FADE8(ctx, base);
loc_8230E034:
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
loc_8230E04C:
	// lwz r30,28(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e0ac
	if (ctx.cr6.eq) goto loc_8230E0AC;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e088
	if (!ctx.cr0.eq) goto loc_8230E088;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e088
	if (ctx.cr0.eq) goto loc_8230E088;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230e094
	if (!ctx.cr6.gt) goto loc_8230E094;
loc_8230E088:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230E094;
	sub_822FADE8(ctx, base);
loc_8230E094:
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
loc_8230E0AC:
	// lwz r30,32(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e10c
	if (ctx.cr6.eq) goto loc_8230E10C;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e0e8
	if (!ctx.cr0.eq) goto loc_8230E0E8;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e0e8
	if (ctx.cr0.eq) goto loc_8230E0E8;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230e0f4
	if (!ctx.cr6.gt) goto loc_8230E0F4;
loc_8230E0E8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230E0F4;
	sub_822FADE8(ctx, base);
loc_8230E0F4:
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
loc_8230E10C:
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8230dda8
	if (!ctx.cr6.eq) goto loc_8230DDA8;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// b 0x8230dda8
	goto loc_8230DDA8;
loc_8230E120:
	// lwz r30,8(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230e180
	if (ctx.cr6.eq) goto loc_8230E180;
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e15c
	if (!ctx.cr0.eq) goto loc_8230E15C;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e15c
	if (ctx.cr0.eq) goto loc_8230E15C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230e168
	if (!ctx.cr6.gt) goto loc_8230E168;
loc_8230E15C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230E168;
	sub_822FADE8(ctx, base);
loc_8230E168:
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
loc_8230E180:
	// lwz r30,12(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
loc_8230E184:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8230dda8
	if (ctx.cr6.eq) goto loc_8230DDA8;
loc_8230E18C:
	// lwz r11,0(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8230e1bc
	if (!ctx.cr0.eq) goto loc_8230E1BC;
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8230e1bc
	if (ctx.cr0.eq) goto loc_8230E1BC;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8230e1c8
	if (!ctx.cr6.gt) goto loc_8230E1C8;
loc_8230E1BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822fade8
	ctx.lr = 0x8230E1C8;
	sub_822FADE8(ctx, base);
loc_8230E1C8:
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
	// b 0x8230dda8
	goto loc_8230DDA8;
loc_8230E1E4:
	// lwz r10,976(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 976);
	// addi r11,r31,972
	ctx.r11.s64 = ctx.r31.s64 + 972;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r26,976(r31)
	REX_STORE_U32(ctx.r31.u32 + 976, ctx.r26.u32);
	// beq cr6,0x8230e25c
	if (ctx.cr6.eq) goto loc_8230E25C;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r27,1
	ctx.r30.s64 = ctx.r27.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r4,r11,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x82295980
	ctx.lr = 0x8230E218;
	sub_82295980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8215e640
	ctx.lr = 0x8230E22C;
	sub_8215E640(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x8226df90
	ctx.lr = 0x8230E244;
	sub_8226DF90(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,604(r31)
	REX_STORE_U32(ctx.r31.u32 + 604, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_8230E25C:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e270
	if (ctx.cr0.eq) goto loc_8230E270;
	// lwz r10,44(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
loc_8230E270:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e3d0
	if (ctx.cr6.eq) goto loc_8230E3D0;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8230e294
	if (ctx.cr6.eq) goto loc_8230E294;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x8230e298
	if (!ctx.cr0.eq) goto loc_8230E298;
loc_8230E294:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8230E298:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230e3d0
	if (ctx.cr0.eq) goto loc_8230E3D0;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mulli r4,r11,40
	ctx.r4.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x82295980
	ctx.lr = 0x8230E2B8;
	sub_82295980(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8215e640
	ctx.lr = 0x8230E2CC;
	sub_8215E640(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r5,r11,40
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// bl 0x8226df90
	ctx.lr = 0x8230E2E4;
	sub_8226DF90(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,612(r31)
	REX_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r10,14080
	ctx.r8.s64 = ctx.r10.s64 + 14080;
	// lwz r4,612(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822f5cb0
	ctx.lr = 0x8230E31C;
	sub_822F5CB0(ctx, base);
	// lwz r10,612(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 612);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mulli r10,r10,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(40));
	// lwzx r8,r10,r9
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r11,r31,812
	ctx.r11.s64 = ctx.r31.s64 + 812;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r8,r24,1,29,31
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r8,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r10,r24,5,25,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 5) & 0x70) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r10,144(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 144);
	// lwz r9,140(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 140);
	// subf r9,r10,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r10.u64;
	// addi r9,r9,4096
	ctx.r9.s64 = ctx.r9.s64 + 4096;
	// cmplwi cr6,r9,8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 8, ctx.xer);
	// blt cr6,0x8230e36c
	if (ctx.cr6.lt) goto loc_8230E36C;
	// addi r9,r10,8
	ctx.r9.s64 = ctx.r10.s64 + 8;
	// stw r9,144(r11)
	REX_STORE_U32(ctx.r11.u32 + 144, ctx.r9.u32);
	// b 0x8230e39c
	goto loc_8230E39C;
loc_8230E36C:
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8230e38c
	if (ctx.cr6.eq) goto loc_8230E38C;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r23,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r23.u32);
	// stw r23,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r23.u32);
	// b 0x8230e39c
	goto loc_8230E39C;
loc_8230E38C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8226d8e8
	ctx.lr = 0x8230E398;
	sub_8226D8E8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8230E39C:
	// stw r10,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r24,0,28,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xF) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// oris r9,r9,12
	ctx.r9.u64 = ctx.r9.u64 | 786432;
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,28(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwimi r9,r11,21,6,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 21) & 0x3F00000) | (ctx.r9.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_8230E3D0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82326150) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823260c8
	ctx.lr = 0x82326190;
	sub_823260C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82325b98
	ctx.lr = 0x82326198;
	sub_82325B98(ctx, base);
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

DEFINE_REX_FUNC(sub_82327B98) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82327BA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,49
	ctx.r4.s64 = 49;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82266830
	ctx.lr = 0x82327BB0;
	sub_82266830(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,50
	ctx.r4.s64 = 50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266830
	ctx.lr = 0x82327BC0;
	sub_82266830(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// addi r30,r11,-14148
	ctx.r30.s64 = ctx.r11.s64 + -14148;
	// addi r29,r10,21560
	ctx.r29.s64 = ctx.r10.s64 + 21560;
	// beq cr6,0x82327c00
	if (ctx.cr6.eq) goto loc_82327C00;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// beq cr6,0x82327c00
	if (ctx.cr6.eq) goto loc_82327C00;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21776
	ctx.r5.s64 = ctx.r11.s64 + 21776;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82327C00;
	sub_82260F30(ctx, base);
loc_82327C00:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82327c2c
	if (ctx.cr6.eq) goto loc_82327C2C;
	// cmplwi cr6,r28,64
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 64, ctx.xer);
	// beq cr6,0x82327c2c
	if (ctx.cr6.eq) goto loc_82327C2C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,21688
	ctx.r5.s64 = ctx.r11.s64 + 21688;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,388
	ctx.r7.s64 = 388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82327C2C;
	sub_82260F30(ctx, base);
loc_82327C2C:
	// cmplwi cr6,r31,31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 31, ctx.xer);
	// blt cr6,0x82327c4c
	if (ctx.cr6.lt) goto loc_82327C4C;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// bgt cr6,0x82327c4c
	if (ctx.cr6.gt) goto loc_82327C4C;
	// addi r11,r28,-64
	ctx.r11.s64 = ctx.r28.s64 + -64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82327c50
	goto loc_82327C50;
loc_82327C4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82327C50:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82329B10) {
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
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfd f0,7592(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 7592);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82329b44
	if (ctx.cr6.lt) goto loc_82329B44;
loc_82329B34:
	// lis r11,32640
	ctx.r11.s64 = 2139095040;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82329b84
	goto loc_82329B84;
loc_82329B44:
	// fabs f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82329b7c
	if (!ctx.cr6.lt) goto loc_82329B7C;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x821649c8
	ctx.lr = 0x82329B58;
	sub_821649C8(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82329b7c
	if (ctx.cr6.eq) goto loc_82329B7C;
	// cmpwi cr6,r3,512
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 512, ctx.xer);
	// beq cr6,0x82329b34
	if (ctx.cr6.eq) goto loc_82329B34;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,26280(r11)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// bl 0x82160690
	ctx.lr = 0x82329B78;
	sub_82160690(ctx, base);
	// b 0x82329b84
	goto loc_82329B84;
loc_82329B7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_82329B84:
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

DEFINE_REX_FUNC(sub_8232A7D8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r5,31
	ctx.r10.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfd f13,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// beq 0x8232a830
	if (ctx.cr0.eq) goto loc_8232A830;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,0(r3)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f12,-9888(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// bge cr6,0x8232a804
	if (!ctx.cr6.lt) goto loc_8232A804;
	// stfd f13,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// b 0x8232a810
	goto loc_8232A810;
loc_8232A804:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8232a810
	if (!ctx.cr6.gt) goto loc_8232A810;
	// stfd f12,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f12.u64);
loc_8232A810:
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8232a824
	if (!ctx.cr6.lt) goto loc_8232A824;
	// stfd f13,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f13.u64);
	// b 0x8232a830
	goto loc_8232A830;
loc_8232A824:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x8232a830
	if (!ctx.cr6.gt) goto loc_8232A830;
	// stfd f12,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f12.u64);
loc_8232A830:
	// rlwinm. r11,r5,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a878
	if (ctx.cr0.eq) goto loc_8232A878;
	// lfd f12,0(r3)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x8232a878
	if (!ctx.cr6.lt) goto loc_8232A878;
	// lfd f0,0(r4)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8232a864
	if (!ctx.cr6.lt) goto loc_8232A864;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// fneg f0,f12
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfd f0,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// b 0x8232a878
	goto loc_8232A878;
loc_8232A864:
	// fneg f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfd f13,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f13.u64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x8232a878
	if (!ctx.cr6.gt) goto loc_8232A878;
	// stfd f12,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f12.u64);
loc_8232A878:
	// rlwinm. r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// lfd f13,0(r3)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r3)
	REX_STORE_U64(ctx.r3.u32 + 0, ctx.f0.u64);
	// fneg f0,f13
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfd f0,0(r4)
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8232D360) {
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
	// rlwimi r8,r7,5,24,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 5) & 0xE0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF1F);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// andi. r10,r8,231
	ctx.r10.u64 = ctx.r8.u64 & 231;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwimi r9,r10,7,0,24
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80) | (ctx.r9.u64 & 0xFFFFFFFF0000007F);
	// addi r10,r6,-5
	ctx.r10.s64 = ctx.r6.s64 + -5;
	// stw r5,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r5.u32);
	// rlwinm r11,r11,0,25,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFE007F;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r11,0,13,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFC7FFFF;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt cr6,0x8232d500
	if (ctx.cr6.gt) goto loc_8232D500;
	// lis r12,-32249
	ctx.r12.s64 = -2113470464;
	// addi r12,r12,22680
	ctx.r12.s64 = ctx.r12.s64 + 22680;
	// lbzx r0,r12,r10
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32205
	ctx.r12.s64 = -2110586880;
	// nop 
	// addi r12,r12,-11304
	ctx.r12.s64 = ctx.r12.s64 + -11304;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u32) {
	case 0:
		goto loc_8232D3D8;
	case 1:
		goto loc_8232D3D8;
	case 2:
		goto loc_8232D3D8;
	case 3:
		goto loc_8232D3D8;
	case 4:
		goto loc_8232D500;
	case 5:
		goto loc_8232D3F4;
	case 6:
		goto loc_8232D3F4;
	case 7:
		goto loc_8232D500;
	case 8:
		goto loc_8232D500;
	case 9:
		goto loc_8232D500;
	case 10:
		goto loc_8232D500;
	case 11:
		goto loc_8232D500;
	case 12:
		goto loc_8232D500;
	case 13:
		goto loc_8232D500;
	case 14:
		goto loc_8232D500;
	case 15:
		goto loc_8232D500;
	case 16:
		goto loc_8232D40C;
	case 17:
		goto loc_8232D40C;
	case 18:
		goto loc_8232D40C;
	case 19:
		goto loc_8232D40C;
	case 20:
		goto loc_8232D3D8;
	case 21:
		goto loc_8232D3D8;
	case 22:
		goto loc_8232D3D8;
	case 23:
		goto loc_8232D3D8;
	case 24:
		goto loc_8232D42C;
	case 25:
		goto loc_8232D444;
	case 26:
		goto loc_8232D500;
	case 27:
		goto loc_8232D500;
	case 28:
		goto loc_8232D500;
	case 29:
		goto loc_8232D500;
	case 30:
		goto loc_8232D500;
	case 31:
		goto loc_8232D500;
	case 32:
		goto loc_8232D500;
	case 33:
		goto loc_8232D500;
	case 34:
		goto loc_8232D3D8;
	case 35:
		goto loc_8232D3D8;
	case 36:
		goto loc_8232D3D8;
	case 37:
		goto loc_8232D3D8;
	case 38:
		goto loc_8232D500;
	case 39:
		goto loc_8232D3F4;
	case 40:
		goto loc_8232D3F4;
	case 41:
		goto loc_8232D500;
	case 42:
		goto loc_8232D500;
	case 43:
		goto loc_8232D500;
	case 44:
		goto loc_8232D500;
	case 45:
		goto loc_8232D500;
	case 46:
		goto loc_8232D500;
	case 47:
		goto loc_8232D464;
	case 48:
		goto loc_8232D464;
	case 49:
		goto loc_8232D464;
	case 50:
		goto loc_8232D444;
	case 51:
		goto loc_8232D444;
	case 52:
		goto loc_8232D500;
	case 53:
		goto loc_8232D500;
	case 54:
		goto loc_8232D40C;
	case 55:
		goto loc_8232D40C;
	case 56:
		goto loc_8232D40C;
	case 57:
		goto loc_8232D40C;
	case 58:
		goto loc_8232D40C;
	case 59:
		goto loc_8232D40C;
	case 60:
		goto loc_8232D40C;
	case 61:
		goto loc_8232D40C;
	case 62:
		goto loc_8232D3D8;
	case 63:
		goto loc_8232D3D8;
	case 64:
		goto loc_8232D3D8;
	case 65:
		goto loc_8232D3D8;
	case 66:
		goto loc_8232D3D8;
	case 67:
		goto loc_8232D464;
	case 68:
		goto loc_8232D500;
	case 69:
		goto loc_8232D500;
	case 70:
		goto loc_8232D500;
	case 71:
		goto loc_8232D500;
	case 72:
		goto loc_8232D500;
	case 73:
		goto loc_8232D500;
	case 74:
		goto loc_8232D500;
	case 75:
		goto loc_8232D500;
	case 76:
		goto loc_8232D500;
	case 77:
		goto loc_8232D500;
	case 78:
		goto loc_8232D500;
	case 79:
		goto loc_8232D500;
	case 80:
		goto loc_8232D500;
	case 81:
		goto loc_8232D47C;
	case 82:
		goto loc_8232D47C;
	case 83:
		goto loc_8232D500;
	case 84:
		goto loc_8232D500;
	case 85:
		goto loc_8232D500;
	case 86:
		goto loc_8232D4F8;
	case 87:
		goto loc_8232D4F8;
	case 88:
		goto loc_8232D4F8;
	case 89:
		goto loc_8232D4F8;
	case 90:
		goto loc_8232D500;
	case 91:
		goto loc_8232D48C;
	case 92:
		goto loc_8232D4B8;
	case 93:
		goto loc_8232D4F8;
	case 94:
		goto loc_8232D4B8;
	case 95:
		goto loc_8232D4B8;
	case 96:
		goto loc_8232D4F8;
	case 97:
		goto loc_8232D4F8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_8232D3D8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,61166
	ctx.r10.u64 = ctx.r11.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,61166
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 61166, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r11,61166
	ctx.r11.u64 = ctx.r11.u64 | 61166;
loc_8232D3EC:
	// sth r11,14(r31)
	REX_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// b 0x8232d500
	goto loc_8232D500;
loc_8232D3F4:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,17476
	ctx.r10.u64 = ctx.r11.u64 & 17476;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,17476
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 17476, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r11,17476
	ctx.r11.u64 = ctx.r11.u64 | 17476;
	// b 0x8232d3ec
	goto loc_8232D3EC;
loc_8232D40C:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// andi. r9,r10,61166
	ctx.r9.u64 = ctx.r10.u64 & 61166;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,61166
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 61166, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r10,61166
	ctx.r11.u64 = ctx.r10.u64 | 61166;
	// b 0x8232d3ec
	goto loc_8232D3EC;
loc_8232D42C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r11,0,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// b 0x8232d3ec
	goto loc_8232D3EC;
loc_8232D444:
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rlwinm r9,r10,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r9,12
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 12, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r10,12
	ctx.r11.u64 = ctx.r10.u64 | 12;
	// b 0x8232d3ec
	goto loc_8232D3EC;
loc_8232D464:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r10,r11,8738
	ctx.r10.u64 = ctx.r11.u64 & 8738;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,8738
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8738, ctx.xer);
	// beq cr6,0x8232d500
	if (ctx.cr6.eq) goto loc_8232D500;
	// ori r11,r11,8738
	ctx.r11.u64 = ctx.r11.u64 | 8738;
	// b 0x8232d3ec
	goto loc_8232D3EC;
loc_8232D47C:
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,1024
	ctx.r11.u64 = ctx.r11.u64 | 1024;
	// stw r11,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// b 0x8232d500
	goto loc_8232D500;
loc_8232D48C:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8232D49C;
	sub_8226D728(ctx, base);
	// addi r11,r31,-20
	ctx.r11.s64 = ctx.r31.s64 + -20;
	// li r10,57
	ctx.r10.s64 = 57;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// rlwimi r9,r10,19,7,14
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FE0000) | (ctx.r9.u64 & 0xFFFFFFFFFE01FFFF);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// b 0x8232d500
	goto loc_8232D500;
loc_8232D4B8:
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x8232D4C8;
	sub_8226D728(ctx, base);
	// addi r11,r31,-24
	ctx.r11.s64 = ctx.r31.s64 + -24;
	// li r10,228
	ctx.r10.s64 = 228;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stb r10,14(r11)
	REX_STORE_U8(ctx.r11.u32 + 14, ctx.r10.u8);
	// oris r10,r8,3871
	ctx.r10.u64 = ctx.r8.u64 | 253689856;
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// ori r10,r10,61440
	ctx.r10.u64 = ctx.r10.u64 | 61440;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x8232d500
	goto loc_8232D500;
loc_8232D4F8:
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8232D500:
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

DEFINE_REX_FUNC(sub_82333B48) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bl 0x82333ad8
	ctx.lr = 0x82333B6C;
	sub_82333AD8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r11,r10,0,16,14
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF) | (ctx.r11.u64 & 0x10000);
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

DEFINE_REX_FUNC(sub_82334358) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r9,r5,40
	ctx.r9.s64 = static_cast<int64_t>(ctx.r5.u64 * static_cast<uint64_t>(40));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x823343dc
	if (ctx.cr6.eq) goto loc_823343DC;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x823343c0
	if (ctx.cr6.eq) goto loc_823343C0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// beq cr6,0x823343ac
	if (ctx.cr6.eq) goto loc_823343AC;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// beq cr6,0x823343c0
	if (ctx.cr6.eq) goto loc_823343C0;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x823343AC;
	sub_8225B1A0(ctx, base);
loc_823343AC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333498
	ctx.lr = 0x823343BC;
	sub_82333498(ctx, base);
	// b 0x823343ec
	goto loc_823343EC;
loc_823343C0:
	// lwz r5,564(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 564);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232ea90
	ctx.lr = 0x823343D8;
	sub_8232EA90(ctx, base);
	// b 0x823343ec
	goto loc_823343EC;
loc_823343DC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333f98
	ctx.lr = 0x823343EC;
	sub_82333F98(ctx, base);
loc_823343EC:
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

DEFINE_REX_FUNC(sub_82336BC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82336BD0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// clrlwi r26,r7,24
	ctx.r26.u64 = ctx.r7.u32 & 0xFF;
loc_82336BEC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82336c04
	if (ctx.cr6.eq) goto loc_82336C04;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822a4200
	ctx.lr = 0x82336C00;
	sub_822A4200(ctx, base);
	// b 0x82336c30
	goto loc_82336C30;
loc_82336C04:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82336C08:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82336c54
	if (!ctx.cr0.eq) goto loc_82336C54;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336c54
	if (ctx.cr0.eq) goto loc_82336C54;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82336c08
	if (!ctx.cr6.eq) goto loc_82336C08;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82336C30:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336c5c
	if (ctx.cr0.eq) goto loc_82336C5C;
	// clrlwi r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r10,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82336bec
	goto loc_82336BEC;
loc_82336C54:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82336c30
	goto loc_82336C30;
loc_82336C5C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82335098
	ctx.lr = 0x82336C74;
	sub_82335098(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823389A8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// b 0x823389bc
	goto loc_823389BC;
loc_823389B4:
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_823389BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x823389b4
	if (!ctx.cr6.eq) goto loc_823389B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// lwz r9,8(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// b 0x823389e8
	goto loc_823389E8;
loc_823389DC:
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_823389E8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823389dc
	if (!ctx.cr6.eq) goto loc_823389DC;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82338E10) {
	REX_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	// addi r10,r10,31
	ctx.r10.s64 = ctx.r10.s64 + 31;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82338E30:
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// clrlwi r7,r11,13
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,30,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1E;
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r9,r6,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// srw. r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82338e90
	if (ctx.cr0.eq) goto loc_82338E90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82338e90
	if (ctx.cr6.eq) goto loc_82338E90;
	// lwz r4,64(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 64);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82338e30
	if (!ctx.cr6.eq) goto loc_82338E30;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82338E90:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82339A08) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82339A10;
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
	// bne cr6,0x82339a4c
	if (!ctx.cr6.eq) goto loc_82339A4C;
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
	// li r7,1367
	ctx.r7.s64 = 1367;
	// bl 0x82260f30
	ctx.lr = 0x82339A4C;
	sub_82260F30(ctx, base);
loc_82339A4C:
	// li r4,170
	ctx.r4.s64 = 170;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266830
	ctx.lr = 0x82339A58;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82339abc
	if (!ctx.cr6.eq) goto loc_82339ABC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339a7c
	if (ctx.cr6.eq) goto loc_82339A7C;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339A7C;
	sub_82266EC0(ctx, base);
loc_82339A7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339ab4
	if (ctx.cr6.eq) goto loc_82339AB4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339ab4
	if (ctx.cr6.eq) goto loc_82339AB4;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x82339AB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339AB4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82339b14
	goto loc_82339B14;
loc_82339ABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339ad8
	if (ctx.cr6.eq) goto loc_82339AD8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266ec0
	ctx.lr = 0x82339AD8;
	sub_82266EC0(ctx, base);
loc_82339AD8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339b10
	if (ctx.cr6.eq) goto loc_82339B10;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82339b10
	if (ctx.cr6.eq) goto loc_82339B10;
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
	// li r6,20
	ctx.r6.s64 = 20;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,80(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bctrl 
	ctx.lr = 0x82339B10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82339B10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82339B14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233B178) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8233B180;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,971
	ctx.r4.s64 = 971;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82266830
	ctx.lr = 0x8233B198;
	sub_82266830(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x8233b1fc
	if (!ctx.cr6.eq) goto loc_8233B1FC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233b1bc
	if (ctx.cr6.eq) goto loc_8233B1BC;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233B1BC;
	sub_82266EC0(ctx, base);
loc_8233B1BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b1f4
	if (ctx.cr6.eq) goto loc_8233B1F4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233b1f4
	if (ctx.cr6.eq) goto loc_8233B1F4;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27632
	ctx.r4.s64 = ctx.r10.s64 + 27632;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// bctrl 
	ctx.lr = 0x8233B1F4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B1F4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233b254
	goto loc_8233B254;
loc_8233B1FC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233b218
	if (ctx.cr6.eq) goto loc_8233B218;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82266ec0
	ctx.lr = 0x8233B218;
	sub_82266EC0(ctx, base);
loc_8233B218:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233b250
	if (ctx.cr6.eq) goto loc_8233B250;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233b250
	if (ctx.cr6.eq) goto loc_8233B250;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-12472
	ctx.r11.s64 = ctx.r11.s64 + -12472;
	// addi r4,r10,27632
	ctx.r4.s64 = ctx.r10.s64 + 27632;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,60
	ctx.r6.s64 = 60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,240(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 240);
	// bctrl 
	ctx.lr = 0x8233B250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B250:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233B254:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233C830) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8233C838;
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
	// bne cr6,0x8233c878
	if (!ctx.cr6.eq) goto loc_8233C878;
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
	// li r7,3721
	ctx.r7.s64 = 3721;
	// bl 0x82260f30
	ctx.lr = 0x8233C878;
	sub_82260F30(ctx, base);
loc_8233C878:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823188f8
	ctx.lr = 0x8233C888;
	sub_823188F8(ctx, base);
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233c8d0
	if (ctx.cr6.eq) goto loc_8233C8D0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8233c8d0
	if (ctx.cr6.eq) goto loc_8233C8D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82338ea0
	ctx.lr = 0x8233C8A4;
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
	// li r6,74
	ctx.r6.s64 = 74;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,296(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 296);
	// bctrl 
	ctx.lr = 0x8233C8D0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233C8D0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233DE00) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82314920
	ctx.lr = 0x8233DE24;
	sub_82314920(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r30,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r11,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8233EDF0) {
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
	// addi r31,r3,184
	ctx.r31.s64 = ctx.r3.s64 + 184;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ad90
	ctx.lr = 0x8233EE14;
	sub_8235AD90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235ae10
	ctx.lr = 0x8233EE20;
	sub_8235AE10(ctx, base);
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

DEFINE_REX_FUNC(sub_8233F3C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8233F3C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8233f444
	if (ctx.cr6.lt) goto loc_8233F444;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_8233F3F0:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r27,1456(r11)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82325520
	ctx.lr = 0x8233F404;
	sub_82325520(ctx, base);
	// addic. r30,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r30.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r27,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// beq 0x8233f424
	if (ctx.cr0.eq) goto loc_8233F424;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x8233F420;
	sub_8233EE50(ctx, base);
	// b 0x8233f428
	goto loc_8233F428;
loc_8233F424:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233F428:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233f3f0
	if (!ctx.cr6.gt) goto loc_8233F3F0;
loc_8233F444:
	// lwz r30,136(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x8233f46c
	goto loc_8233F46C;
loc_8233F44C:
	// lwz r11,52(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8233F464;
	sub_8235CB28(ctx, base);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r30,8(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_8233F46C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233f44c
	if (!ctx.cr6.eq) goto loc_8233F44C;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x8235c8c8
	ctx.lr = 0x8233F480;
	sub_8235C8C8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1452(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1452);
	// bl 0x82325520
	ctx.lr = 0x8233F498;
	sub_82325520(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r28,r30,-1
	ctx.r28.s64 = ctx.r30.s64 + -1;
	// stw r3,160(r31)
	REX_STORE_U32(ctx.r31.u32 + 160, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8233f514
	if (ctx.cr6.lt) goto loc_8233F514;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_8233F4BC:
	// lwz r27,0(r29)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233f4f8
	if (ctx.cr6.eq) goto loc_8233F4F8;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_8233F4D0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823628b8
	ctx.lr = 0x8233F4D8;
	sub_823628B8(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stwx r3,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	ctx.r30.s64 = ctx.r30.s64 + -4;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233f4d0
	if (!ctx.cr6.eq) goto loc_8233F4D0;
loc_8233F4F8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r11,1360(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1360);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233f4bc
	if (!ctx.cr6.gt) goto loc_8233F4BC;
loc_8233F514:
	// lwz r3,160(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82345B00) {
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
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82345b48
	if (ctx.cr6.eq) goto loc_82345B48;
loc_82345B24:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,0(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,1436(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 1436);
	// lwz r3,1444(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 1444);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82345B3C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82345b24
	if (!ctx.cr6.eq) goto loc_82345B24;
loc_82345B48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82346258) {
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
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x823462b0
	if (ctx.cr6.eq) goto loc_823462B0;
	// cmpwi cr6,r11,52
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 52, ctx.xer);
	// beq cr6,0x823462b0
	if (ctx.cr6.eq) goto loc_823462B0;
	// cmpwi cr6,r11,39
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 39, ctx.xer);
	// beq cr6,0x823462b0
	if (ctx.cr6.eq) goto loc_823462B0;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x823462b0
	if (ctx.cr6.eq) goto loc_823462B0;
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823462b4
	if (!ctx.cr6.eq) goto loc_823462B4;
loc_823462B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823462B4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82347FE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82347FF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,92(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 92);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82348070
	if (ctx.cr6.eq) goto loc_82348070;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82348070
	if (!ctx.cr6.gt) goto loc_82348070;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8234801C:
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82348034
	if (!ctx.cr6.lt) goto loc_82348034;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8234803c
	goto loc_8234803C;
loc_82348034:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8234803C;
	sub_8235CB28(ctx, base);
loc_8234803C:
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82348058;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 92);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8234801c
	if (ctx.cr6.lt) goto loc_8234801C;
loc_82348070:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234A690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8234A698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2736(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2736);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,16(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r9,60(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r29,8(r11)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,28(r4)
	REX_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// stw r9,40(r4)
	REX_STORE_U32(ctx.r4.u32 + 40, ctx.r9.u32);
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// stw r11,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r11,172(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 172);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x8234a72c
	if (ctx.cr6.lt) goto loc_8234A72C;
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// subf r4,r10,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r10.u64;
	// bl 0x82347a78
	ctx.lr = 0x8234A6F8;
	sub_82347A78(ctx, base);
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,48(r31)
	REX_STORE_U8(ctx.r31.u32 + 48, ctx.r11.u8);
	// stw r10,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// stw r9,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,168(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8234A72C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234C1C8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,168(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8234c1f8
	if (ctx.cr6.eq) goto loc_8234C1F8;
	// lwz r10,228(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 228);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8234c1f8
	if (ctx.cr0.eq) goto loc_8234C1F8;
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,128(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 128);
	// b 0x8234c20c
	goto loc_8234C20C;
loc_8234C1F8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// lwz r11,-32328(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -32328);
loc_8234C20C:
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// b 0x8234b4e0
	sub_8234B4E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234CB38) {
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
	// lwz r4,56(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 56);
	// bl 0x8234b050
	ctx.lr = 0x8234CB60;
	sub_8234B050(ctx, base);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r5,124(r31)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r31.u32 + 124);
	// bl 0x8234a9a0
	ctx.lr = 0x8234CB70;
	sub_8234A9A0(ctx, base);
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

DEFINE_REX_FUNC(sub_8234D2C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8234D2C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,148(r4)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r4.u32 + 148);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r28,r11,-14148
	ctx.r28.s64 = ctx.r11.s64 + -14148;
	// addi r27,r10,-31904
	ctx.r27.s64 = ctx.r10.s64 + -31904;
	// bne cr6,0x8234d30c
	if (!ctx.cr6.eq) goto loc_8234D30C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-29840
	ctx.r5.s64 = ctx.r11.s64 + -29840;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1628
	ctx.r7.s64 = 1628;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D30C;
	sub_82260F30(ctx, base);
loc_8234D30C:
	// addi r3,r29,20
	ctx.r3.s64 = ctx.r29.s64 + 20;
	// bl 0x8235c8c8
	ctx.lr = 0x8234D314;
	sub_8235C8C8(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bgt cr6,0x8234d35c
	if (ctx.cr6.gt) goto loc_8234D35C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823624b0
	ctx.lr = 0x8234D328;
	sub_823624B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234d35c
	if (ctx.cr0.eq) goto loc_8234D35C;
	// lwz r11,56(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x8234d348
	if (!ctx.cr6.gt) goto loc_8234D348;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8234d34c
	goto loc_8234D34C;
loc_8234D348:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8234D34C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,152(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 152);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8234d4dc
	if (ctx.cr6.eq) goto loc_8234D4DC;
loc_8234D35C:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234D370;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234d3a0
	if (ctx.cr0.eq) goto loc_8234D3A0;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x8234b050
	ctx.lr = 0x8234D388;
	sub_8234B050(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234b200
	ctx.lr = 0x8234D39C;
	sub_8234B200(ctx, base);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234D3A0:
	// lbz r11,140(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 140);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234d3fc
	if (ctx.cr0.eq) goto loc_8234D3FC;
	// lwz r3,100(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x8234d3fc
	if (!ctx.cr6.eq) goto loc_8234D3FC;
	// bl 0x823628b8
	ctx.lr = 0x8234D3C0;
	sub_823628B8(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x8234d3e4
	if (ctx.cr6.eq) goto loc_8234D3E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-29952
	ctx.r5.s64 = ctx.r11.s64 + -29952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D3E4;
	sub_82260F30(ctx, base);
loc_8234D3E4:
	// lwz r3,100(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8234D3F0;
	sub_8235CB28(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x8234d4dc
	goto loc_8234D4DC;
loc_8234D3FC:
	// lwz r11,100(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8234d420
	if (!ctx.cr6.lt) goto loc_8234D420;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8234d424
	goto loc_8234D424;
loc_8234D420:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8234D424:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8234d44c
	if (ctx.cr6.eq) goto loc_8234D44C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-29952
	ctx.r5.s64 = ctx.r11.s64 + -29952;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1653
	ctx.r7.s64 = 1653;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D44C;
	sub_82260F30(ctx, base);
loc_8234D44C:
	// lwz r11,140(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 140);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234d4dc
	if (!ctx.cr0.eq) goto loc_8234D4DC;
	// li r3,87
	ctx.r3.s64 = 87;
	// lwz r4,0(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8235eed0
	ctx.lr = 0x8234D468;
	sub_8235EED0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82347d08
	ctx.lr = 0x8234D474;
	sub_82347D08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x8234d498
	if (!ctx.cr0.eq) goto loc_8234D498;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-30104
	ctx.r5.s64 = ctx.r11.s64 + -30104;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,1658
	ctx.r7.s64 = 1658;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234D498;
	sub_82260F30(ctx, base);
loc_8234D498:
	// lis r28,-32248
	ctx.r28.s64 = -2113404928;
	// lwz r11,56(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 56);
	// stw r26,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r10,r28,-32312
	ctx.r10.s64 = ctx.r28.s64 + -32312;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,-12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + -12);
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x8233f040
	ctx.lr = 0x8234D4C4;
	sub_8233F040(ctx, base);
	// lwz r11,-32312(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + -32312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// stw r26,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r26.u32);
	// bl 0x82361f60
	ctx.lr = 0x8234D4DC;
	sub_82361F60(ctx, base);
loc_8234D4DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82352B30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82352B38;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8233ee50
	ctx.lr = 0x82352B50;
	sub_8233EE50(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r31,164(r22)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r22.u32 + 164);
	// bl 0x8235cb28
	ctx.lr = 0x82352B60;
	sub_8235CB28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r20,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r20,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// stw r31,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r21,164(r22)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r22.u32 + 164);
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// stw r20,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r20,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x8233ee50
	ctx.lr = 0x82352B98;
	sub_8233EE50(ctx, base);
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r14,168(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lis r7,-32248
	ctx.r7.s64 = -2113404928;
	// lwz r18,164(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// addi r11,r11,-5640
	ctx.r11.s64 = ctx.r11.s64 + -5640;
	// addi r9,r9,-28392
	ctx.r9.s64 = ctx.r9.s64 + -28392;
	// addi r7,r7,-28404
	ctx.r7.s64 = ctx.r7.s64 + -28404;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lis r17,-32248
	ctx.r17.s64 = -2113404928;
	// stw r9,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r19,r10,4136
	ctx.r19.s64 = ctx.r10.s64 + 4136;
	// stw r7,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// addi r16,r8,-14148
	ctx.r16.s64 = ctx.r8.s64 + -14148;
	// addi r15,r6,-28840
	ctx.r15.s64 = ctx.r6.s64 + -28840;
loc_82352BE0:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,2136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82352c5c
	if (ctx.cr0.eq) goto loc_82352C5C;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82352C00;
	sub_82325520(ctx, base);
	// addic. r31,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r31.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82352c34
	if (ctx.cr0.eq) goto loc_82352C34;
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lis r10,-32203
	ctx.r10.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,6056
	ctx.r6.s64 = ctx.r10.s64 + 6056;
	// addi r5,r9,5784
	ctx.r5.s64 = ctx.r9.s64 + 5784;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,1456(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// bl 0x8234de88
	ctx.lr = 0x82352C30;
	sub_8234DE88(ctx, base);
	// b 0x82352c38
	goto loc_82352C38;
loc_82352C34:
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82352C38:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,132(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// stw r31,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// bl 0x8235cb28
	ctx.lr = 0x82352C48;
	sub_8235CB28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// stw r26,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// b 0x82352c60
	goto loc_82352C60;
loc_82352C5C:
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82352C60:
	// lwz r31,28(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 28);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823534f8
	if (ctx.cr6.eq) goto loc_823534F8;
	// b 0x82352c78
	goto loc_82352C78;
loc_82352C74:
	// lwz r26,80(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82352C78:
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823534e8
	if (ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352C98;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823534e8
	if (!ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352CB4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823534e8
	if (!ctx.cr0.eq) goto loc_823534E8;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r23,r31,28
	ctx.r23.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82352d18
	if (ctx.cr6.eq) goto loc_82352D18;
	// lbz r11,5(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 5);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82352cf4
	if (ctx.cr0.eq) goto loc_82352CF4;
	// lwz r10,80(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r9,228(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
	// stw r9,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82352d14
	goto loc_82352D14;
loc_82352CF4:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352D04;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352d18
	if (ctx.cr0.eq) goto loc_82352D18;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r20,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r20.u32);
loc_82352D14:
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82352D18:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352D2C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352d54
	if (ctx.cr0.eq) goto loc_82352D54;
	// lwz r11,948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// lwz r11,948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_82352D54:
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82352d7c
	if (!ctx.cr6.eq) goto loc_82352D7C;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82352d7c
	if (!ctx.cr6.eq) goto loc_82352D7C;
	// lwz r11,948(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 948);
	// lwz r10,132(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 132);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,132(r11)
	REX_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
loc_82352D7C:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// li r4,272
	ctx.r4.s64 = 272;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82352D90;
	sub_82325520(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82352dc8
	if (ctx.cr0.eq) goto loc_82352DC8;
	// lwz r9,12(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stb r20,264(r11)
	REX_STORE_U8(ctx.r11.u32 + 264, ctx.r20.u8);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r9,260(r11)
	REX_STORE_U32(ctx.r11.u32 + 260, ctx.r9.u32);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// b 0x82352dcc
	goto loc_82352DCC;
loc_82352DC8:
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
loc_82352DCC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352DE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82352f20
	if (ctx.cr0.eq) goto loc_82352F20;
	// lwz r9,12(r22)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2136);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353460
	if (ctx.cr0.eq) goto loc_82353460;
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82352e2c
	if (ctx.cr6.lt) goto loc_82352E2C;
	// addi r10,r31,236
	ctx.r10.s64 = ctx.r31.s64 + 236;
loc_82352E0C:
	// lwz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82352ea4
	if (ctx.cr6.eq) goto loc_82352EA4;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82352e0c
	if (!ctx.cr6.gt) goto loc_82352E0C;
loc_82352E2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82352E30:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353460
	if (ctx.cr0.eq) goto loc_82353460;
	// lwz r11,2716(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 2716);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82353460
	if (!ctx.cr6.lt) goto loc_82353460;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82351740
	ctx.lr = 0x82352E50;
	sub_82351740(ctx, base);
	// clrlwi. r29,r3,24
	ctx.r29.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82352e78
	if (ctx.cr0.eq) goto loc_82352E78;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82362ba0
	ctx.lr = 0x82352E78;
	sub_82362BA0(ctx, base);
loc_82352E78:
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82352efc
	if (!ctx.cr6.eq) goto loc_82352EFC;
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82352eac
	if (!ctx.cr6.lt) goto loc_82352EAC;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82352eb4
	goto loc_82352EB4;
loc_82352EA4:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82352e30
	goto loc_82352E30;
loc_82352EAC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8235cb28
	ctx.lr = 0x82352EB4;
	sub_8235CB28(ctx, base);
loc_82352EB4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// bl 0x82351bf8
	ctx.lr = 0x82352EC4;
	sub_82351BF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82352edc
	if (ctx.cr0.eq) goto loc_82352EDC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82362ba0
	ctx.lr = 0x82352EDC;
	sub_82362BA0(ctx, base);
loc_82352EDC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82352efc
	if (!ctx.cr6.eq) goto loc_82352EFC;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82352efc
	if (!ctx.cr0.eq) goto loc_82352EFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82351e08
	ctx.lr = 0x82352EF8;
	sub_82351E08(ctx, base);
	// b 0x82353460
	goto loc_82353460;
loc_82352EFC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352F10;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x823534e8
	goto loc_823534E8;
loc_82352F20:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ff4
	if (ctx.cr0.eq) goto loc_82352FF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a7e8
	ctx.lr = 0x82352F38;
	sub_8234A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ff4
	if (ctx.cr0.eq) goto loc_82352FF4;
	// lwz r11,236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82352f54
	if (ctx.cr6.eq) goto loc_82352F54;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82352f58
	goto loc_82352F58;
loc_82352F54:
	// lwz r11,84(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
loc_82352F58:
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// addi r10,r19,6
	ctx.r10.s64 = ctx.r19.s64 + 6;
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82352f78
	if (ctx.cr0.eq) goto loc_82352F78;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82352f7c
	if (!ctx.cr6.gt) goto loc_82352F7C;
loc_82352F78:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82352F7C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82352ff4
	if (!ctx.cr0.eq) goto loc_82352FF4;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352fa4
	if (ctx.cr0.eq) goto loc_82352FA4;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82350668
	ctx.lr = 0x82352F9C;
	sub_82350668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82352ff4
	if (ctx.cr0.eq) goto loc_82352FF4;
loc_82352FA4:
	// lwz r5,12(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r30,92(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,2720(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 2720);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82352ff4
	if (!ctx.cr6.lt) goto loc_82352FF4;
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,164(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 164);
	// bl 0x8235d5a0
	ctx.lr = 0x82352FC4;
	sub_8235D5A0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82362ba0
	ctx.lr = 0x82352FD4;
	sub_82362BA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82352FE8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x823534e8
	goto loc_823534E8;
loc_82352FF4:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82353064
	if (ctx.cr6.lt) goto loc_82353064;
	// addi r28,r1,160
	ctx.r28.s64 = ctx.r1.s64 + 160;
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
loc_8235300C:
	// lwz r27,0(r30)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82353030
	if (!ctx.cr6.eq) goto loc_82353030;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,1158
	ctx.r7.s64 = 1158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353030;
	sub_82260F30(ctx, base);
loc_82353030:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,12(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r4,164(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 164);
	// bl 0x8235d5a0
	ctx.lr = 0x82353040;
	sub_8235D5A0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// ble cr6,0x8235300c
	if (!ctx.cr6.gt) goto loc_8235300C;
	// lwz r14,168(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r18,164(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
loc_82353064:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,108(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353130
	if (ctx.cr0.eq) goto loc_82353130;
	// lwz r10,80(r18)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r18.u32 + 80);
	// addi r11,r19,6
	ctx.r11.s64 = ctx.r19.s64 + 6;
	// mulli r9,r10,12
	ctx.r9.s64 = static_cast<int64_t>(ctx.r10.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823530a0
	if (ctx.cr0.eq) goto loc_823530A0;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823530a4
	if (!ctx.cr6.gt) goto loc_823530A4;
loc_823530A0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823530A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823530b8
	if (ctx.cr0.eq) goto loc_823530B8;
	// lwz r11,80(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823530dc
	if (ctx.cr6.eq) goto loc_823530DC;
loc_823530B8:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82353130
	if (!ctx.cr6.eq) goto loc_82353130;
	// lwz r11,80(r14)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r14.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82353130
	if (!ctx.cr6.eq) goto loc_82353130;
	// lwz r11,224(r18)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r18.u32 + 224);
	// lwz r10,224(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 224);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82353130
	if (!ctx.cr6.gt) goto loc_82353130;
loc_823530DC:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r18,r14
	ctx.r18.u64 = ctx.r14.u64;
	// mr r14,r11
	ctx.r14.u64 = ctx.r11.u64;
	// stw r11,168(r1)
	REX_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// stw r18,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r18.u32);
	// stw r10,136(r31)
	REX_STORE_U32(ctx.r31.u32 + 136, ctx.r10.u32);
	// stw r9,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// lbz r9,154(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 154);
	// lbz r8,153(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 153);
	// lbz r11,159(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 159);
	// lbz r10,160(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 160);
	// stb r10,159(r31)
	REX_STORE_U8(ctx.r31.u32 + 159, ctx.r10.u8);
	// stb r8,154(r31)
	REX_STORE_U8(ctx.r31.u32 + 154, ctx.r8.u8);
	// stb r9,153(r31)
	REX_STORE_U8(ctx.r31.u32 + 153, ctx.r9.u8);
	// stb r11,160(r31)
	REX_STORE_U8(ctx.r31.u32 + 160, ctx.r11.u8);
	// lwz r11,204(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 208);
	// stw r10,204(r31)
	REX_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// stw r11,208(r31)
	REX_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
loc_82353130:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r10,2136(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8235329c
	if (ctx.cr0.eq) goto loc_8235329C;
	// lwz r11,2716(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2716);
	// lwz r28,84(r1)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8235329c
	if (!ctx.cr6.lt) goto loc_8235329C;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82353184
	if (ctx.cr6.eq) goto loc_82353184;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82353184
	if (!ctx.cr0.eq) goto loc_82353184;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82353188
	if (!ctx.cr0.eq) goto loc_82353188;
loc_82353184:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82353188:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353244
	if (ctx.cr0.eq) goto loc_82353244;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353244
	if (!ctx.cr6.gt) goto loc_82353244;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x823531f4
	if (ctx.cr6.lt) goto loc_823531F4;
	// rlwinm r29,r26,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_823531AC:
	// lwz r11,132(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823531c4
	if (!ctx.cr6.lt) goto loc_823531C4;
	// lwz r11,136(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// add r3,r29,r11
	ctx.r3.u64 = ctx.r29.u64 + ctx.r11.u64;
	// b 0x823531d0
	goto loc_823531D0;
loc_823531C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8235cb28
	ctx.lr = 0x823531D0;
	sub_8235CB28(ctx, base);
loc_823531D0:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// bl 0x82351bf8
	ctx.lr = 0x823531E0;
	sub_82351BF8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82353204
	if (!ctx.cr0.eq) goto loc_82353204;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bge 0x823531ac
	if (!ctx.cr0.lt) goto loc_823531AC;
loc_823531F4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82351e08
	ctx.lr = 0x82353200;
	sub_82351E08(ctx, base);
	// b 0x8235329c
	goto loc_8235329C;
loc_82353204:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,0(r23)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x82362ba0
	ctx.lr = 0x82353210;
	sub_82362BA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,96(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq cr6,0x823534e8
	if (ctx.cr6.eq) goto loc_823534E8;
	// addi r4,r24,-4
	ctx.r4.s64 = ctx.r24.s64 + -4;
	// lwz r3,-4(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + -4);
	// bl 0x823256a8
	ctx.lr = 0x82353240;
	sub_823256A8(ctx, base);
	// b 0x823534e8
	goto loc_823534E8;
loc_82353244:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8235329c
	if (ctx.cr6.eq) goto loc_8235329C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82353254:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82353398
	if (!ctx.cr6.eq) goto loc_82353398;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82353254
	if (ctx.cr6.lt) goto loc_82353254;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82353274:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353294
	if (ctx.cr0.eq) goto loc_82353294;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,1224
	ctx.r7.s64 = 1224;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353294;
	sub_82260F30(ctx, base);
loc_82353294:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82351c50
	ctx.lr = 0x8235329C;
	sub_82351C50(ctx, base);
loc_8235329C:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82353460
	if (ctx.cr6.lt) goto loc_82353460;
	// addi r25,r1,164
	ctx.r25.s64 = ctx.r1.s64 + 164;
	// addi r27,r31,28
	ctx.r27.s64 = ctx.r31.s64 + 28;
loc_823532B4:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353428
	if (ctx.cr0.eq) goto loc_82353428;
	// lwz r29,0(r25)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82351e50
	ctx.lr = 0x823532D8;
	sub_82351E50(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353428
	if (ctx.cr0.eq) goto loc_82353428;
	// lwz r11,228(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353300
	if (ctx.cr0.eq) goto loc_82353300;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,56(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x82350668
	ctx.lr = 0x823532F8;
	sub_82350668(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353428
	if (ctx.cr0.eq) goto loc_82353428;
loc_82353300:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353314;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bgt cr6,0x82353428
	if (ctx.cr6.gt) goto loc_82353428;
	// lbz r11,164(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 164);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82353428
	if (!ctx.cr0.eq) goto loc_82353428;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235f180
	ctx.lr = 0x82353334;
	sub_8235F180(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82353428
	if (!ctx.cr0.eq) goto loc_82353428;
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r7,159(r29)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r29.u32 + 159);
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// lbz r8,153(r29)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r29.u32 + 153);
	// addi r9,r11,158
	ctx.r9.s64 = ctx.r11.s64 + 158;
	// addi r9,r10,152
	ctx.r9.s64 = ctx.r10.s64 + 152;
	// lbz r9,158(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 158);
	// lbz r6,152(r10)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r10.u32 + 152);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// stb r9,158(r11)
	REX_STORE_U8(ctx.r11.u32 + 158, ctx.r9.u8);
	// rlwinm r7,r5,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// and r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 & ctx.r8.u64;
	// xor r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	// stb r11,152(r10)
	REX_STORE_U8(ctx.r10.u32 + 152, ctx.r11.u8);
	// lwz r11,-28900(r17)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r17.u32 + -28900);
	// lwz r10,104(r27)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r27.u32 + 104);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823533a0
	if (!ctx.cr6.eq) goto loc_823533A0;
	// lwz r11,132(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 132);
	// stw r11,104(r27)
	REX_STORE_U32(ctx.r27.u32 + 104, ctx.r11.u32);
	// b 0x82353408
	goto loc_82353408;
loc_82353398:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82353274
	goto loc_82353274;
loc_823533A0:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
loc_823533A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823533C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r26,0(r31)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823533E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,88(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 88);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823533FC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x823533a4
	if (ctx.cr6.lt) goto loc_823533A4;
loc_82353408:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,236(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 236);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82353418;
	sub_8233F040(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82353438
	goto loc_82353438;
loc_82353428:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82353438;
	sub_8233F040(ctx, base);
loc_82353438:
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,56(r27)
	REX_STORE_U32(ctx.r27.u32 + 56, ctx.r11.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r10,32(r27)
	REX_STORE_U32(ctx.r27.u32 + 32, ctx.r10.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// stwu r20,4(r27)
	ea = 4 + ctx.r27.u32;
	REX_STORE_U32(ea, ctx.r20.u32);
	ctx.r27.u32 = ea;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x823532b4
	if (!ctx.cr6.gt) goto loc_823532B4;
loc_82353460:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82353494
	if (!ctx.cr6.gt) goto loc_82353494;
	// addi r29,r23,-4
	ctx.r29.s64 = ctx.r23.s64 + -4;
loc_82353474:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwzu r4,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82362ba0
	ctx.lr = 0x82353484;
	sub_82362BA0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82353474
	if (ctx.cr6.lt) goto loc_82353474;
loc_82353494:
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823534c8
	if (ctx.cr6.eq) goto loc_823534C8;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823534c8
	if (!ctx.cr0.eq) goto loc_823534C8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r10,r19,4
	ctx.r10.s64 = ctx.r19.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x823534cc
	if (!ctx.cr0.eq) goto loc_823534CC;
loc_823534C8:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823534CC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823534e8
	if (ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823534e8
	if (!ctx.cr0.eq) goto loc_823534E8;
	// lwz r11,224(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 224);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_823534E8:
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82352c74
	if (!ctx.cr6.eq) goto loc_82352C74;
loc_823534F8:
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// mr r26,r20
	ctx.r26.u64 = ctx.r20.u64;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82353504:
	// lwz r11,56(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8235351c
	if (!ctx.cr6.gt) goto loc_8235351C;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82353528
	goto loc_82353528;
loc_8235351C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r27,r10,r26
	ctx.r27.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
loc_82353528:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353658
	if (ctx.cr0.eq) goto loc_82353658;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823623a8
	ctx.lr = 0x8235353C;
	sub_823623A8(ctx, base);
	// lwz r28,28(r27)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r27.u32 + 28);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82353640
	goto loc_82353640;
loc_82353548:
	// lwz r11,228(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 228);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235363c
	if (ctx.cr0.eq) goto loc_8235363C;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353568;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8235363c
	if (ctx.cr0.eq) goto loc_8235363C;
	// lwz r31,28(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82353594
	if (!ctx.cr6.eq) goto loc_82353594;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// lwz r5,104(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 104);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r7,1318
	ctx.r7.s64 = 1318;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82353594;
	sub_82260F30(ctx, base);
loc_82353594:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,12(r22)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r4,164(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 164);
	// bl 0x8235d5a0
	ctx.lr = 0x823535A4;
	sub_8235D5A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x8233f040
	ctx.lr = 0x823535B8;
	sub_8233F040(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r9,r29,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// addi r8,r9,91
	ctx.r8.s64 = ctx.r9.s64 + 91;
	// addi r9,r31,-4
	ctx.r9.s64 = ctx.r31.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823535D0:
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r30
	REX_STORE_U32(ctx.r7.u32 + ctx.r30.u32, ctx.r10.u32);
	// bdnz 0x823535d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823535D0;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8235361c
	if (ctx.cr6.eq) goto loc_8235361C;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235361c
	if (!ctx.cr0.eq) goto loc_8235361C;
	// lwz r11,80(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 80);
	// addi r10,r19,4
	ctx.r10.s64 = ctx.r19.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82353620
	if (!ctx.cr0.eq) goto loc_82353620;
loc_8235361C:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82353620:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235363c
	if (ctx.cr0.eq) goto loc_8235363C;
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8235363c
	if (!ctx.cr0.eq) goto loc_8235363C;
	// lwz r11,224(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 224);
	// stw r11,56(r30)
	REX_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_8235363C:
	// lwz r28,8(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
loc_82353640:
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82353548
	if (!ctx.cr6.eq) goto loc_82353548;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// b 0x82353504
	goto loc_82353504;
loc_82353658:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x823624c8
	ctx.lr = 0x82353660;
	sub_823624C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823536dc
	if (ctx.cr0.eq) goto loc_823536DC;
	// lwz r29,88(r21)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r21.u32 + 88);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82353680
	if (ctx.cr6.eq) goto loc_82353680;
	// lwz r10,8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// b 0x82353684
	goto loc_82353684;
loc_82353680:
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
loc_82353684:
	// lwz r21,0(r10)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// li r31,1
	ctx.r31.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8235376c
	if (!ctx.cr6.gt) goto loc_8235376C;
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x823536ac
	if (!ctx.cr6.lt) goto loc_823536AC;
loc_823536A0:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x823536b0
	goto loc_823536B0;
loc_823536AC:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_823536B0:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,148(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,0(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8235cb28
	ctx.lr = 0x823536C0;
	sub_8235CB28(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r28,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823536a0
	if (ctx.cr6.lt) goto loc_823536A0;
	// b 0x8235376c
	goto loc_8235376C;
loc_823536DC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82362b58
	ctx.lr = 0x823536E4;
	sub_82362B58(ctx, base);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353710
	if (ctx.cr0.eq) goto loc_82353710;
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235ca68
	ctx.lr = 0x82353704;
	sub_8235CA68(ctx, base);
	// addi r30,r31,-1
	ctx.r30.s64 = ctx.r31.s64 + -1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x82353714
	goto loc_82353714;
loc_82353710:
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_82353714:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r31,84(r21)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r21.u32 + 84);
	// bl 0x823628b8
	ctx.lr = 0x82353720;
	sub_823628B8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82353764
	goto loc_82353764;
loc_82353728:
	// lwz r11,84(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 84);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8235376c
	if (ctx.cr6.eq) goto loc_8235376C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362b58
	ctx.lr = 0x8235373C;
	sub_82362B58(ctx, base);
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 2136);
	// lwz r31,84(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82353764
	if (ctx.cr0.eq) goto loc_82353764;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8235ca68
	ctx.lr = 0x8235375C;
	sub_8235CA68(ctx, base);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stw r30,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82353764:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82353728
	if (!ctx.cr6.eq) goto loc_82353728;
loc_8235376C:
	// lwz r11,148(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82352be0
	if (!ctx.cr6.eq) goto loc_82352BE0;
	// lwz r3,12(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823537a0
	if (ctx.cr0.eq) goto loc_823537A0;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823537a0
	if (ctx.cr6.eq) goto loc_823537A0;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-28456
	ctx.r4.s64 = ctx.r11.s64 + -28456;
	// bl 0x82113c30
	ctx.lr = 0x823537A0;
	sub_82113C30(ctx, base);
loc_823537A0:
	// lwz r3,12(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// lwz r11,2136(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 2136);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823537e4
	if (ctx.cr0.eq) goto loc_823537E4;
	// lwz r5,84(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823537c8
	if (ctx.cr6.eq) goto loc_823537C8;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r4,r11,-28516
	ctx.r4.s64 = ctx.r11.s64 + -28516;
	// bl 0x82113c30
	ctx.lr = 0x823537C8;
	sub_82113C30(ctx, base);
loc_823537C8:
	// lwz r5,96(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x823537e4
	if (ctx.cr6.eq) goto loc_823537E4;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// addi r4,r11,-28576
	ctx.r4.s64 = ctx.r11.s64 + -28576;
	// bl 0x82113c30
	ctx.lr = 0x823537E4;
	sub_82113C30(ctx, base);
loc_823537E4:
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82353800
	if (ctx.cr6.eq) goto loc_82353800;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r3,12(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// addi r4,r11,-28628
	ctx.r4.s64 = ctx.r11.s64 + -28628;
	// bl 0x82113c30
	ctx.lr = 0x82353800;
	sub_82113C30(ctx, base);
loc_82353800:
	// lwz r11,12(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,1393(r11)
	REX_STORE_U8(ctx.r11.u32 + 1393, ctx.r10.u8);
	// lwz r4,136(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r3,140(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x823256a8
	ctx.lr = 0x82353818;
	sub_823256A8(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,156(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x823256a8
	ctx.lr = 0x82353824;
	sub_823256A8(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235BC18) {
	REX_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235BE44) {
	REX_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x8235bdc8
	// FATAL: unresolved function 0x8235BDC8 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BE48 to 0x8235BDC8");
	return;
}

