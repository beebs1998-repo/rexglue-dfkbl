#include "dfkbl_funcs.45.h"

DEFINE_REX_FUNC(sub_82091768) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094398
	sub_82094398(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091880) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094bb0
	sub_82094BB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091970) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820959f0
	sub_820959F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091C40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82096218
	sub_82096218(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82091EE8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820964e0
	sub_820964E0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820921C8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82095370
	sub_82095370(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092598) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82095590
	sub_82095590(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820928F0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x820971f0
	sub_820971F0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82092B08) {
	REX_FUNC_PROLOGUE();
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,21768(r10)
	REX_STORE_U32(ctx.r10.u32 + 21768, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82093E18) {
	REX_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32190
	ctx.r10.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r10,21824
	ctx.r3.s64 = ctx.r10.s64 + 21824;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x820a6450
	sub_820A6450(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82093F58) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,25928
	ctx.r3.s64 = ctx.r11.s64 + 25928;
	// b 0x820b3820
	sub_820B3820(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82094178) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 1572864;
	// addi r3,r3,3040
	ctx.r3.s64 = ctx.r3.s64 + 3040;
	// b 0x820aee18
	sub_820AEE18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820949E0) {
	REX_FUNC_PROLOGUE();
	// addi r11,r4,1572
	ctx.r11.s64 = ctx.r4.s64 + 1572;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r3
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094B48) {
	REX_FUNC_PROLOGUE();
	// lis r11,238
	ctx.r11.s64 = 15597568;
	// ori r11,r11,5540
	ctx.r11.u64 = ctx.r11.u64 | 5540;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82094D58) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,238
	ctx.r3.s64 = ctx.r3.s64 + 15597568;
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// b 0x820b7140
	sub_820B7140(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820953E8) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,19632
	ctx.r3.s64 = ctx.r3.s64 + 19632;
	// b 0x820a1fb0
	sub_820A1FB0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82095650) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82095658;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,23704
	ctx.r30.s64 = ctx.r3.s64 + 23704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a6f00
	ctx.lr = 0x8209566C;
	sub_820A6F00(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,6152(r31)
	REX_STORE_U32(ctx.r31.u32 + 6152, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,6148(r31)
	REX_STORE_U32(ctx.r31.u32 + 6148, ctx.r29.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x820a7160
	ctx.lr = 0x82095688;
	sub_820A7160(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x820a7160
	ctx.lr = 0x82095698;
	sub_820A7160(ctx, base);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820a7160
	ctx.lr = 0x820956A8;
	sub_820A7160(ctx, base);
	// add. r10,r3,r28
	ctx.r10.u64 = ctx.r3.u64 + ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x820956c4
	if (!ctx.cr0.gt) goto loc_820956C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,6152(r31)
	REX_STORE_U32(ctx.r31.u32 + 6152, ctx.r29.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,6148(r31)
	REX_STORE_U32(ctx.r31.u32 + 6148, ctx.r11.u32);
	// stw r10,6160(r31)
	REX_STORE_U32(ctx.r31.u32 + 6160, ctx.r10.u32);
loc_820956C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096910) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,23704
	ctx.r3.s64 = ctx.r3.s64 + 23704;
	// b 0x820a69d0
	sub_820A69D0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82096F20) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209c2c0
	sub_8209C2C0(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820971D0) {
	REX_FUNC_PROLOGUE();
	// addis r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 2359296;
	// addi r3,r3,21888
	ctx.r3.s64 = ctx.r3.s64 + 21888;
	// b 0x8209dfd8
	sub_8209DFD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82097948) {
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
	// addis r3,r3,238
	ctx.r3.s64 = ctx.r3.s64 + 15597568;
	// addi r3,r3,4200
	ctx.r3.s64 = ctx.r3.s64 + 4200;
	// bl 0x820b7298
	ctx.lr = 0x82097960;
	sub_820B7298(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x820e8428
	ctx.lr = 0x82097968;
	sub_820E8428(ctx, base);
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209BA10) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82094bd8
	sub_82094BD8(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209BA20) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82095d80
	sub_82095D80(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209BAD8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32190
	ctx.r11.s64 = -2109603840;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,26084(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 26084);
	// b 0x82097118
	sub_82097118(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8209BCF0) {
	REX_FUNC_PROLOGUE();
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,26620
	ctx.r11.u64 = ctx.r11.u64 | 26620;
	// lwzx r3,r3,r11
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209C030) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x8209c104
	if (ctx.cr6.eq) goto loc_8209C104;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// blt cr6,0x8209c04c
	if (ctx.cr6.lt) goto loc_8209C04C;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
loc_8209C04C:
	// srawi r10,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 31;
	// xor r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// subf. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u64 - ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8209c104
	if (!ctx.cr0.gt) goto loc_8209C104;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r9,15
	ctx.r9.s64 = 15;
loc_8209C064:
	// add. r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x8209c084
	if (!ctx.cr0.lt) goto loc_8209C084;
loc_8209C06C:
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.u64 = static_cast<uint64_t>(-1) - ctx.r11.u64;
	// divwu r10,r10,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r10.u32 / ctx.r9.u32 : 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r10,r10,r6
	ctx.r10.u64 = ctx.r6.u64 - ctx.r10.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_8209C084:
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// blt cr6,0x8209c09c
	if (ctx.cr6.lt) goto loc_8209C09C;
	// divwu r10,r11,r9
	ctx.r10.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r4,r10,r6
	ctx.r4.u64 = ctx.r6.u64 - ctx.r10.u64;
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
loc_8209C09C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x8209c0e0
	if (ctx.cr6.lt) goto loc_8209C0E0;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x8209c0e0
	if (!ctx.cr6.lt) goto loc_8209C0E0;
	// srawi r10,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 5;
	// addze r6,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 5;
	// rlwinm r6,r6,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// subf r4,r6,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r6.u64;
	// addi r10,r10,23056
	ctx.r10.s64 = ctx.r10.s64 + 23056;
	// slw r6,r8,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r3
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// and r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 & ctx.r10.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x8209c100
	if (!ctx.cr6.eq) goto loc_8209C100;
loc_8209C0E0:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8209c0f0
	if (!ctx.cr6.gt) goto loc_8209C0F0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x8209c0f4
	goto loc_8209C0F4;
loc_8209C0F0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_8209C0F4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8209c084
	if (!ctx.cr6.lt) goto loc_8209C084;
	// b 0x8209c06c
	goto loc_8209C06C;
loc_8209C100:
	// bdnz 0x8209c064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8209C064;
loc_8209C104:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8209F3E0) {
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
	// lwz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 140);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x8209f434
	if (ctx.cr6.lt) goto loc_8209F434;
	// bne cr6,0x8209f470
	if (!ctx.cr6.eq) goto loc_8209F470;
	// lis r11,201
	ctx.r11.s64 = 13172736;
	// ori r10,r11,42056
	ctx.r10.u64 = ctx.r11.u64 | 42056;
	// lwzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8209f42c
	if (ctx.cr6.eq) goto loc_8209F42C;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,26408
	ctx.r10.u64 = ctx.r11.u64 | 26408;
	// lwzx r9,r3,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8209f470
	if (!ctx.cr6.eq) goto loc_8209F470;
loc_8209F42C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8209f46c
	goto loc_8209F46C;
loc_8209F434:
	// lwz r11,136(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8209f470
	if (ctx.cr6.eq) goto loc_8209F470;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x8209f090
	ctx.lr = 0x8209F44C;
	sub_8209F090(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8209f468
	if (ctx.cr6.eq) goto loc_8209F468;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8209f468
	if (!ctx.cr6.eq) goto loc_8209F468;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8209c978
	ctx.lr = 0x8209F468;
	sub_8209C978(ctx, base);
loc_8209F468:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8209F46C:
	// stw r11,140(r31)
	REX_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_8209F470:
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

DEFINE_REX_FUNC(sub_820A0C58) {
	REX_FUNC_PROLOGUE();
	// lwz r8,2200(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 2200);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,-1
	ctx.r7.s64 = -1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r11,40
	ctx.r10.s64 = ctx.r11.s64 + 40;
loc_820A0C78:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x820a0cf4
	if (ctx.cr6.gt) goto loc_820A0CF4;
	// lis r12,-32246
	ctx.r12.s64 = -2113273856;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3232
	ctx.r12.s64 = ctx.r12.s64 + 3232;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820A0CF8;
	case 1:
		goto loc_820A0CF4;
	case 2:
		goto loc_820A0CF4;
	case 3:
		goto loc_820A0CF4;
	case 4:
		goto loc_820A0CF4;
	case 5:
		goto loc_820A0CF4;
	case 6:
		goto loc_820A0CF4;
	case 7:
		goto loc_820A0CF4;
	case 8:
		goto loc_820A0CF4;
	case 9:
		goto loc_820A0CF4;
	case 10:
		goto loc_820A0CF4;
	case 11:
		goto loc_820A0CF4;
	case 12:
		goto loc_820A0CF4;
	case 13:
		goto loc_820A0CF8;
	case 14:
		goto loc_820A0CF8;
	case 15:
		goto loc_820A0CF4;
	case 16:
		goto loc_820A0CF4;
	case 17:
		goto loc_820A0CF4;
	case 18:
		goto loc_820A0CF4;
	case 19:
		goto loc_820A0CF8;
	case 20:
		goto loc_820A0CF8;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820A0CF4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_820A0CF8:
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

DEFINE_REX_FUNC(sub_820A1F08) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lfs f0,0(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f1,4(r4)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lfs f0,4596(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4596);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A2D58) {
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
	// lwz r4,2244(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2244);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_820A2D6C:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x820a2d7c
	if (!ctx.cr6.gt) goto loc_820A2D7C;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// b 0x820a2d84
	goto loc_820A2D84;
loc_820A2D7C:
	// lwz r11,2204(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 2204);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_820A2D84:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x820a0c58
	ctx.lr = 0x820A2D8C;
	sub_820A0C58(ctx, base);
	// mulli r11,r3,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r3.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bgt cr6,0x820a2db4
	if (ctx.cr6.gt) goto loc_820A2DB4;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bge cr6,0x820a2d6c
	if (!ctx.cr6.lt) goto loc_820A2D6C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x820a2d6c
	if (ctx.cr6.eq) goto loc_820A2D6C;
	// b 0x820a2dc4
	goto loc_820A2DC4;
loc_820A2DB4:
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// blt cr6,0x820a2dc4
	if (ctx.cr6.lt) goto loc_820A2DC4;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x820a2d6c
	if (!ctx.cr6.gt) goto loc_820A2D6C;
loc_820A2DC4:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x820a2030
	ctx.lr = 0x820A2DCC;
	sub_820A2030(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A3D10) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,4660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4660);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A46FC) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
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

DEFINE_REX_FUNC(sub_820A5828) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820A5830;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215eb94
	ctx.lr = 0x820A5838;
	__savefpr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// fmr f27,f4
	ctx.f27.f64 = ctx.f4.f64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r28,r9,-2
	ctx.r28.s64 = ctx.r9.s64 + -2;
	// lfs f0,2288(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2288);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x820a5870
	if (!ctx.cr6.lt) goto loc_820A5870;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
loc_820A5870:
	// fcmpu cr6,f27,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f27.f64, ctx.f0.f64);
	// bge cr6,0x820a587c
	if (!ctx.cr6.lt) goto loc_820A587C;
	// fmr f27,f0
	ctx.f27.f64 = ctx.f0.f64;
loc_820A587C:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,233
	ctx.r3.s64 = 233;
	// bl 0x82092198
	ctx.lr = 0x820A5888;
	sub_82092198(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,233
	ctx.r3.s64 = 233;
	// lfs f31,2236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2236);
	ctx.f31.f64 = double(temp.f32);
	// fnmsubs f26,f1,f31,f28
	ctx.f26.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f31.f64, -ctx.f28.f64)));
	// bl 0x820921b0
	ctx.lr = 0x820A58A0;
	sub_820921B0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// fnmsubs f27,f1,f31,f27
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f31.f64, -ctx.f27.f64)));
	// li r3,237
	ctx.r3.s64 = 237;
	// bl 0x82092198
	ctx.lr = 0x820A58B0;
	sub_82092198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,242
	ctx.r3.s64 = 242;
	// fdivs f23,f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f23.f64 = double(float(ctx.f26.f64 / ctx.f1.f64));
	// bl 0x82092198
	ctx.lr = 0x820A58C0;
	sub_82092198(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,239
	ctx.r3.s64 = 239;
	// fdivs f25,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f28.f64 / ctx.f1.f64));
	// bl 0x820921b0
	ctx.lr = 0x820A58D0;
	sub_820921B0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,0
	ctx.r8.s64 = 0;
	// fdivs f24,f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f24.f64 = double(float(ctx.f27.f64 / ctx.f1.f64));
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,233
	ctx.r3.s64 = 233;
	// lfs f31,2280(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5900;
	sub_82092160(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,242
	ctx.r3.s64 = 242;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5924;
	sub_82092160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,233
	ctx.r3.s64 = 233;
	// bl 0x82092198
	ctx.lr = 0x820A5930;
	sub_82092198(ctx, base);
	// fadds f28,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,241
	ctx.r3.s64 = 241;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5958;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a596c
	if (ctx.cr6.eq) goto loc_820A596C;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A596C;
	sub_820B3E10(ctx, base);
loc_820A596C:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,237
	ctx.r3.s64 = 237;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5990;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a59a4
	if (ctx.cr6.eq) goto loc_820A59A4;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A59A4;
	sub_820B3E10(ctx, base);
loc_820A59A4:
	// fadds f28,f26,f28
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = double(float(ctx.f26.f64 + ctx.f28.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,234
	ctx.r3.s64 = 234;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82092160
	ctx.lr = 0x820A59CC;
	sub_82092160(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,243
	ctx.r3.s64 = 243;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82092160
	ctx.lr = 0x820A59F0;
	sub_82092160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,233
	ctx.r3.s64 = 233;
	// bl 0x820921b0
	ctx.lr = 0x820A59FC;
	sub_820921B0(ctx, base);
	// fadds f29,f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64 + ctx.f29.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,241
	ctx.r3.s64 = 241;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5A24;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5a38
	if (ctx.cr6.eq) goto loc_820A5A38;
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A5A38;
	sub_820B3E10(ctx, base);
loc_820A5A38:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,239
	ctx.r3.s64 = 239;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5A5C;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5a70
	if (ctx.cr6.eq) goto loc_820A5A70;
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A5A70;
	sub_820B3E10(ctx, base);
loc_820A5A70:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,239
	ctx.r3.s64 = 239;
	// bl 0x82092198
	ctx.lr = 0x820A5A7C;
	sub_82092198(ctx, base);
	// fadds f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,240
	ctx.r3.s64 = 240;
	// fadds f1,f0,f26
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f26.f64));
	// bl 0x82092160
	ctx.lr = 0x820A5AA4;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5ab8
	if (ctx.cr6.eq) goto loc_820A5AB8;
	// fmr f2,f24
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A5AB8;
	sub_820B3E10(ctx, base);
loc_820A5AB8:
	// fadds f29,f27,f29
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f27.f64 + ctx.f29.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,235
	ctx.r3.s64 = 235;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5AE0;
	sub_82092160(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,244
	ctx.r3.s64 = 244;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5B04;
	sub_82092160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,235
	ctx.r3.s64 = 235;
	// bl 0x82092198
	ctx.lr = 0x820A5B10;
	sub_82092198(ctx, base);
	// fadds f30,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64 + ctx.f30.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,238
	ctx.r3.s64 = 238;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5B38;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5b4c
	if (ctx.cr6.eq) goto loc_820A5B4C;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A5B4C;
	sub_820B3E10(ctx, base);
loc_820A5B4C:
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,241
	ctx.r3.s64 = 241;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5B70;
	sub_82092160(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820a5b84
	if (ctx.cr6.eq) goto loc_820A5B84;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x820b3e10
	ctx.lr = 0x820A5B84;
	sub_820B3E10(ctx, base);
loc_820A5B84:
	// fadds f30,f26,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f26.f64 + ctx.f30.f64));
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r3,236
	ctx.r3.s64 = 236;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5BAC;
	sub_82092160(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// li r3,245
	ctx.r3.s64 = 245;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820A5BD0;
	sub_82092160(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8215ebe0
	ctx.lr = 0x820A5BE0;
	__restfpr_23(ctx, base);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820A6EE4) {
	REX_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820A9018) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AEAFC) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,13,18,19
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x3000) | (ctx.r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AFBE0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-21912
	ctx.r3.s64 = ctx.r11.s64 + -21912;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820AFC40) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32197
	ctx.r11.s64 = -2110062592;
	// addi r3,r11,-21528
	ctx.r3.s64 = ctx.r11.s64 + -21528;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820B0788) {
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
	// beq cr6,0x820b0884
	if (ctx.cr6.eq) goto loc_820B0884;
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
	ctx.lr = 0x820B07C0;
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
	ctx.lr = 0x820B07DC;
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
	ctx.lr = 0x820B07F8;
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
	ctx.lr = 0x820B0814;
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
	ctx.lr = 0x820B0830;
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
	ctx.lr = 0x820B084C;
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
	ctx.lr = 0x820B0868;
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
	ctx.lr = 0x820B0884;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_820B0884:
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

DEFINE_REX_FUNC(sub_820B2DC8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820B2DD0;
	__savegprlr_28(ctx, base);
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
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2DF8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B2E08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2e3c
	if (ctx.cr6.eq) goto loc_820B2E3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2E20;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2e3c
	if (ctx.cr6.eq) goto loc_820B2E3C;
	// addi r11,r31,34
	ctx.r11.s64 = ctx.r31.s64 + 34;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r30
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x820b2e48
	if (!ctx.cr6.gt) goto loc_820B2E48;
loc_820B2E3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_820B2E48:
	// li r31,1
	ctx.r31.s64 = 1;
loc_820B2E4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,280(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 280);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2E64;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B2E74;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820b2ea4
	if (ctx.cr6.eq) goto loc_820B2EA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B2E8C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x820b2ea4
	if (ctx.cr6.eq) goto loc_820B2EA4;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,33
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 33, ctx.xer);
	// blt cr6,0x820b2e4c
	if (ctx.cr6.lt) goto loc_820B2E4C;
	// b 0x820b2eb0
	goto loc_820B2EB0;
loc_820B2EA4:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x820b2ed4
	if (!ctx.cr6.eq) goto loc_820B2ED4;
loc_820B2EB0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r30,140
	ctx.r11.s64 = ctx.r30.s64 + 140;
loc_820B2EB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x820b2ed8
	if (ctx.cr6.gt) goto loc_820B2ED8;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// blt cr6,0x820b2eb8
	if (ctx.cr6.lt) goto loc_820B2EB8;
loc_820B2ED4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_820B2ED8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B5AE0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820B5AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,3984
	ctx.r29.s64 = ctx.r3.s64 + 3984;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x820b5010
	ctx.lr = 0x820B5B04;
	sub_820B5010(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820b5b6c
	if (!ctx.cr6.eq) goto loc_820B5B6C;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x820b5b6c
	if (!ctx.cr6.eq) goto loc_820B5B6C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820b5a68
	ctx.lr = 0x820B5B24;
	sub_820B5A68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r10,4000(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4000);
	// mulli r11,r11,308
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(308));
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r9,-30140
	ctx.r4.s64 = ctx.r9.s64 + -30140;
	// addi r9,r31,4540
	ctx.r9.s64 = ctx.r31.s64 + 4540;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x820e8b48
	ctx.lr = 0x820B5B54;
	sub_820E8B48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,4012(r31)
	REX_STORE_U32(ctx.r31.u32 + 4012, ctx.r3.u32);
	// stb r11,5152(r31)
	REX_STORE_U8(ctx.r31.u32 + 5152, ctx.r11.u8);
	// stb r11,5153(r31)
	REX_STORE_U8(ctx.r31.u32 + 5153, ctx.r11.u8);
	// stb r11,5154(r31)
	REX_STORE_U8(ctx.r31.u32 + 5154, ctx.r11.u8);
	// stb r11,5155(r31)
	REX_STORE_U8(ctx.r31.u32 + 5155, ctx.r11.u8);
loc_820B5B6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820B7058) {
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
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,44(r3)
	REX_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	REX_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	REX_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// addi r11,r4,12
	ctx.r11.s64 = ctx.r4.s64 + 12;
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,244(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 244);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x820B70C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,248(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 248);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x820B70D8;
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

DEFINE_REX_FUNC(sub_820B9B28) {
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
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x820b9b5c
	if (!ctx.cr6.eq) goto loc_820B9B5C;
	// lwz r4,2412(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2412);
	// bl 0x820b9a38
	ctx.lr = 0x820B9B44;
	sub_820B9A38(ctx, base);
	// lwz r4,2416(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 2416);
	// bl 0x820b9ab0
	ctx.lr = 0x820B9B4C;
	sub_820B9AB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_820B9B5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,2456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f13,2104(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4552(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4552);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b9b80
	if (!ctx.cr6.gt) goto loc_820B9B80;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,2456(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2456, temp.u32);
loc_820B9B80:
	// lfs f0,2456(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2456);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b9b90
	if (!ctx.cr6.lt) goto loc_820B9B90;
	// stfs f13,2456(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2456, temp.u32);
loc_820B9B90:
	// lfs f0,2460(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x820b9ba4
	if (!ctx.cr6.gt) goto loc_820B9BA4;
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// stfs f0,2460(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 2460, temp.u32);
loc_820B9BA4:
	// lfs f0,2460(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2460);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x820b9bb4
	if (!ctx.cr6.lt) goto loc_820B9BB4;
	// stfs f13,2460(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 2460, temp.u32);
loc_820B9BB4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820BD3A8) {
	REX_FUNC_PROLOGUE();
	// lbz r11,2528(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2528);
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bd44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD44C;
	// bdzf 4*cr6+eq,0x820bd3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD3E0;
	// bdzf 4*cr6+eq,0x820bd44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD44C;
	// bdzf 4*cr6+eq,0x820bd3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD3E0;
	// bdzf 4*cr6+eq,0x820bd44c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD44C;
	// bdzf 4*cr6+eq,0x820bd3e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD3E0;
	// bne cr6,0x820bd44c
	if (!ctx.cr6.eq) goto loc_820BD44C;
loc_820BD3E0:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bd414
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD414;
	// bdzf 4*cr6+eq,0x820bd41c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD41C;
	// bdzf 4*cr6+eq,0x820bd424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD424;
	// bdzf 4*cr6+eq,0x820bd42c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD42C;
	// bdzf 4*cr6+eq,0x820bd434
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD434;
	// bdzf 4*cr6+eq,0x820bd43c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD43C;
	// bne cr6,0x820bd444
	if (!ctx.cr6.eq) goto loc_820BD444;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820BD414:
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_820BD41C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
loc_820BD424:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_820BD42C:
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
loc_820BD434:
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
loc_820BD43C:
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
loc_820BD444:
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
loc_820BD44C:
	// cmplwi cr6,r4,7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 7, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820bd480
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD480;
	// bdzf 4*cr6+eq,0x820bd488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD488;
	// bdzf 4*cr6+eq,0x820bd490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD490;
	// bdzf 4*cr6+eq,0x820bd498
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD498;
	// bdzf 4*cr6+eq,0x820bd4a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD4A0;
	// bdzf 4*cr6+eq,0x820bd4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820BD4A8;
	// bne cr6,0x820bd4b0
	if (!ctx.cr6.eq) goto loc_820BD4B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820BD480:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_820BD488:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_820BD490:
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_820BD498:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_820BD4A0:
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
loc_820BD4A8:
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
loc_820BD4B0:
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820C36E8) {
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
	// lbz r11,2529(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 2529);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x820c373c
	if (ctx.cr6.eq) goto loc_820C373C;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x820c3774
	if (ctx.cr6.eq) goto loc_820C3774;
	// bl 0x82091e58
	ctx.lr = 0x820C371C;
	sub_82091E58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r30,4223(r31)
	REX_STORE_U8(ctx.r31.u32 + 4223, ctx.r30.u8);
	// stb r30,4222(r31)
	REX_STORE_U8(ctx.r31.u32 + 4222, ctx.r30.u8);
	// stb r30,4221(r31)
	REX_STORE_U8(ctx.r31.u32 + 4221, ctx.r30.u8);
	// stb r30,4220(r31)
	REX_STORE_U8(ctx.r31.u32 + 4220, ctx.r30.u8);
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
loc_820C373C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bc488
	ctx.lr = 0x820C3744;
	sub_820BC488(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820c375c
	if (!ctx.cr6.eq) goto loc_820C375C;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
loc_820C3754:
	// stb r30,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r30.u8);
	// stb r30,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r30.u8);
loc_820C375C:
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
loc_820C3774:
	// bl 0x82091e88
	ctx.lr = 0x820C3778;
	sub_82091E88(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820c3788
	if (!ctx.cr6.eq) goto loc_820C3788;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82091e98
	ctx.lr = 0x820C3788;
	sub_82091E98(ctx, base);
loc_820C3788:
	// lbz r11,3909(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 3909);
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r30.u8);
	// stb r11,2528(r31)
	REX_STORE_U8(ctx.r31.u32 + 2528, ctx.r11.u8);
	// b 0x820c3754
	goto loc_820C3754;
}

DEFINE_REX_FUNC(sub_820C5B60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x820C5B68;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,-1
	ctx.r24.s64 = -1;
	// addi r30,r3,4224
	ctx.r30.s64 = ctx.r3.s64 + 4224;
	// bl 0x820919e0
	ctx.lr = 0x820C5B7C;
	sub_820919E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x820919f0
	ctx.lr = 0x820C5B84;
	sub_820919F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82091a00
	ctx.lr = 0x820C5B8C;
	sub_82091A00(ctx, base);
	// lbz r11,4225(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 4225);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820c5bbc
	if (ctx.cr6.lt) goto loc_820C5BBC;
	// beq cr6,0x820c5c30
	if (ctx.cr6.eq) goto loc_820C5C30;
	// stb r28,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r28,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r28.u8);
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5BBC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,4244(r31)
	REX_STORE_U32(ctx.r31.u32 + 4244, ctx.r28.u32);
loc_820C5BC4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82091f18
	ctx.lr = 0x820C5BCC;
	sub_82091F18(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x820c5be4
	if (ctx.cr6.eq) goto loc_820C5BE4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,50
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 50, ctx.xer);
	// blt cr6,0x820c5bc4
	if (ctx.cr6.lt) goto loc_820C5BC4;
	// b 0x820c5be8
	goto loc_820C5BE8;
loc_820C5BE4:
	// stw r29,4244(r31)
	REX_STORE_U32(ctx.r31.u32 + 4244, ctx.r29.u32);
loc_820C5BE8:
	// lwz r11,4244(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4244);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x820c5c00
	if (!ctx.cr6.lt) goto loc_820C5C00;
	// stw r11,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// stw r28,4240(r31)
	REX_STORE_U32(ctx.r31.u32 + 4240, ctx.r28.u32);
	// b 0x820c5c1c
	goto loc_820C5C1C;
loc_820C5C00:
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,4240(r31)
	REX_STORE_U32(ctx.r31.u32 + 4240, ctx.r11.u32);
	// stw r10,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r10.u32);
	// bge 0x820c5c1c
	if (!ctx.cr0.lt) goto loc_820C5C1C;
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// stw r11,4240(r31)
	REX_STORE_U32(ctx.r31.u32 + 4240, ctx.r11.u32);
loc_820C5C1C:
	// lbz r11,1(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 1);
	// stb r28,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r28.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// stb r11,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
loc_820C5C30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820bce30
	ctx.lr = 0x820C5C38;
	sub_820BCE30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820c3840
	ctx.lr = 0x820C5C40;
	sub_820C3840(ctx, base);
	// lbz r11,2(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x820c5e70
	if (ctx.cr6.gt) goto loc_820C5E70;
	// beq cr6,0x820c5e20
	if (ctx.cr6.eq) goto loc_820C5E20;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820c5cc4
	if (ctx.cr6.lt) goto loc_820C5CC4;
	// bne cr6,0x820c5e5c
	if (!ctx.cr6.eq) goto loc_820C5E5C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17232
	ctx.r4.s64 = ctx.r11.s64 + -17232;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a1fb0
	ctx.lr = 0x820C5C78;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x820c5c9c
	if (ctx.cr6.eq) goto loc_820C5C9C;
loc_820C5C80:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x820c5e88
	if (!ctx.cr6.eq) goto loc_820C5E88;
	// stb r28,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5C9C:
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x820a0700
	ctx.lr = 0x820C5CA8;
	sub_820A0700(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,2530(r31)
	REX_STORE_U8(ctx.r31.u32 + 2530, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,2529(r31)
	REX_STORE_U8(ctx.r31.u32 + 2529, ctx.r11.u8);
	// stb r28,2531(r31)
	REX_STORE_U8(ctx.r31.u32 + 2531, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5CC4:
	// clrlwi r11,r25,26
	ctx.r11.u64 = ctx.r25.u32 & 0x3F;
	// rlwinm r11,r11,0,30,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5d7c
	if (ctx.cr6.eq) goto loc_820C5D7C;
	// clrlwi r9,r26,27
	ctx.r9.u64 = ctx.r26.u32 & 0x1F;
	// lwz r10,4240(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4240);
	// lwz r11,4236(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4236);
	// rlwinm r9,r9,0,31,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x820c5d18
	if (ctx.cr6.eq) goto loc_820C5D18;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// bge 0x820c5d58
	if (!ctx.cr0.lt) goto loc_820C5D58;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r28.u32);
	// bne cr6,0x820c5d10
	if (!ctx.cr6.eq) goto loc_820C5D10;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x820c5d54
	goto loc_820C5D54;
loc_820C5D10:
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// b 0x820c5d54
	goto loc_820C5D54;
loc_820C5D18:
	// rlwinm r8,r26,0,26,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x3E;
	// rlwinm r8,r8,0,30,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFE3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x820c5d58
	if (ctx.cr6.eq) goto loc_820C5D58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x820c5d58
	if (!ctx.cr6.gt) goto loc_820C5D58;
	// li r11,8
	ctx.r11.s64 = 8;
	// cmpwi cr6,r10,49
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 49, ctx.xer);
	// stw r11,4236(r31)
	REX_STORE_U32(ctx.r31.u32 + 4236, ctx.r11.u32);
	// bne cr6,0x820c5d50
	if (!ctx.cr6.eq) goto loc_820C5D50;
	// stw r28,4240(r31)
	REX_STORE_U32(ctx.r31.u32 + 4240, ctx.r28.u32);
	// b 0x820c5d58
	goto loc_820C5D58;
loc_820C5D50:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_820C5D54:
	// stw r11,4240(r31)
	REX_STORE_U32(ctx.r31.u32 + 4240, ctx.r11.u32);
loc_820C5D58:
	// lwz r11,4240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4240);
	// lwz r10,4236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4236);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x820c5e88
	if (ctx.cr6.eq) goto loc_820C5E88;
	// bl 0x82092720
	ctx.lr = 0x820C5D70;
	sub_82092720(ctx, base);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5D7C:
	// rlwinm r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5dd0
	if (ctx.cr6.eq) goto loc_820C5DD0;
	// bl 0x82092798
	ctx.lr = 0x820C5D8C;
	sub_82092798(ctx, base);
	// lwz r11,4240(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4240);
	// lwz r10,4236(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4236);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4244(r31)
	REX_STORE_U32(ctx.r31.u32 + 4244, ctx.r11.u32);
	// cmpwi cr6,r11,50
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 50, ctx.xer);
	// blt cr6,0x820c5dac
	if (ctx.cr6.lt) goto loc_820C5DAC;
	// addi r11,r11,-50
	ctx.r11.s64 = ctx.r11.s64 + -50;
	// stw r11,4244(r31)
	REX_STORE_U32(ctx.r31.u32 + 4244, ctx.r11.u32);
loc_820C5DAC:
	// lwz r3,4244(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4244);
	// bl 0x82091f18
	ctx.lr = 0x820C5DB4;
	sub_82091F18(ctx, base);
	// li r11,100
	ctx.r11.s64 = 100;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5DD0:
	// rlwinm r11,r27,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5df8
	if (ctx.cr6.eq) goto loc_820C5DF8;
	// bl 0x82092770
	ctx.lr = 0x820C5DE0;
	sub_82092770(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5DF8:
	// rlwinm r11,r27,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820c5e88
	if (ctx.cr6.eq) goto loc_820C5E88;
	// bl 0x82092720
	ctx.lr = 0x820C5E08;
	sub_82092720(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r11,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r11.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5E20:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-17304
	ctx.r4.s64 = ctx.r11.s64 + -17304;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a1fb0
	ctx.lr = 0x820C5E3C;
	sub_820A1FB0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x820c5c80
	if (!ctx.cr6.eq) goto loc_820C5C80;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x820a0700
	ctx.lr = 0x820C5E50;
	sub_820A0700(ctx, base);
	// li r11,19
	ctx.r11.s64 = 19;
	// stb r28,1(r30)
	REX_STORE_U8(ctx.r30.u32 + 1, ctx.r28.u8);
	// stb r11,0(r30)
	REX_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
loc_820C5E5C:
	// stb r28,2(r30)
	REX_STORE_U8(ctx.r30.u32 + 2, ctx.r28.u8);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stb r28,3(r30)
	REX_STORE_U8(ctx.r30.u32 + 3, ctx.r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
loc_820C5E70:
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x820c5e5c
	if (!ctx.cr6.eq) goto loc_820C5E5C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x820a0700
	ctx.lr = 0x820C5E84;
	sub_820A0700(ctx, base);
	// lwz r24,4244(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 4244);
loc_820C5E88:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D0068) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x820D0070;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8215eb94
	ctx.lr = 0x820D0078;
	__savefpr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,2656(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 2656);
	ctx.f1.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f31,2280(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2280);
	ctx.f31.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lfs f30,2104(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f30.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82092160
	ctx.lr = 0x820D00B4;
	sub_82092160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820b3ea8
	ctx.lr = 0x820D00BC;
	sub_820B3EA8(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,2656(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r29.u32 + 2656);
	ctx.f0.f64 = double(temp.f32);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f29,4488(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 4488);
	ctx.f29.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// fadds f13,f0,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// lfs f30,2096(r5)
	temp.u32 = REX_LOAD_U32(ctx.r5.u32 + 2096);
	ctx.f30.f64 = double(temp.f32);
	// fsubs f1,f13,f30
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// bl 0x82092160
	ctx.lr = 0x820D00F8;
	sub_82092160(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x820b3ea8
	ctx.lr = 0x820D0100;
	sub_820B3EA8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82092198
	ctx.lr = 0x820D010C;
	sub_82092198(ctx, base);
	// fsubs f12,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 - ctx.f1.f64));
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// fmuls f29,f12,f30
	ctx.f29.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x820921b0
	ctx.lr = 0x820D0120;
	sub_820921B0(ctx, base);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// lfs f0,4408(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4408);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f11,f0,f1
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// fmuls f28,f11,f30
	ctx.f28.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// bl 0x82092160
	ctx.lr = 0x820D0154;
	sub_82092160(ctx, base);
	// lwz r11,2664(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2664);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r10,r11,22
	ctx.r10.u64 = ctx.r11.u32 & 0x3FF;
	// stw r10,2664(r29)
	REX_STORE_U32(ctx.r29.u32 + 2664, ctx.r10.u32);
	// bl 0x82092198
	ctx.lr = 0x820D0170;
	sub_82092198(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,4
	ctx.r3.s64 = 4;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// bl 0x820921b0
	ctx.lr = 0x820D0180;
	sub_820921B0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,30840
	ctx.r8.s64 = 2021130240;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfs f23,2112(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2112);
	ctx.f23.f64 = double(temp.f32);
	// ori r30,r8,30841
	ctx.r30.u64 = ctx.r8.u64 | 30841;
	// lfs f24,-12516(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + -12516);
	ctx.f24.f64 = double(temp.f32);
	// lfs f25,2220(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2220);
	ctx.f25.f64 = double(temp.f32);
loc_820D01A8:
	// lwz r11,2664(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 2664);
	// lis r7,128
	ctx.r7.s64 = 8388608;
	// li r8,1
	ctx.r8.s64 = 1;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// mulhw r9,r11,r30
	ctx.r9.s64 = (int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32)) >> 32;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r4,r5,r11
	ctx.r4.u64 = ctx.r11.u64 - ctx.r5.u64;
	// subfic r11,r4,17
	ctx.xer.ca = ctx.r4.u32 <= 17;
	ctx.r11.u64 = static_cast<uint64_t>(17) - ctx.r4.u64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r10,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmadds f3,f10,f25,f31
	ctx.f3.f64 = double(float(std::fma(ctx.f10.f64, ctx.f25.f64, ctx.f31.f64)));
	// fmuls f8,f9,f24
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f24.f64));
	// fsubs f7,f3,f31
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f31.f64));
	// fmr f4,f3
	ctx.f4.f64 = ctx.f3.f64;
	// fmuls f6,f8,f23
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f23.f64));
	// fmuls f5,f7,f26
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f26.f64));
	// fmuls f1,f7,f27
	ctx.f1.f64 = double(float(ctx.f7.f64 * ctx.f27.f64));
	// fctiwz f0,f6
	ctx.f0.s64 = std::isnan(ctx.f6.f64) ? int64_t(0x80000000U) : (ctx.f6.f64 >= double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f6.f64));
	// stfd f0,96(r1)
	REX_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r5,100(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r7,r5,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// fnmsubs f2,f5,f30,f28
	ctx.f2.f64 = double(float(-std::fma(ctx.f5.f64, ctx.f30.f64, -ctx.f28.f64)));
	// fnmsubs f1,f1,f30,f29
	ctx.f1.f64 = double(float(-std::fma(ctx.f1.f64, ctx.f30.f64, -ctx.f29.f64)));
	// bl 0x82092160
	ctx.lr = 0x820D024C;
	sub_82092160(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x820d01a8
	if (ctx.cr6.lt) goto loc_820D01A8;
	// lis r7,-32640
	ctx.r7.s64 = -2139095040;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f31.f64;
	// li r8,1
	ctx.r8.s64 = 1;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// ori r7,r7,32896
	ctx.r7.u64 = ctx.r7.u64 | 32896;
	// fmr f2,f28
	ctx.f2.f64 = ctx.f28.f64;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82092160
	ctx.lr = 0x820D0280;
	sub_82092160(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8215ebe0
	ctx.lr = 0x820D028C;
	__restfpr_23(ctx, base);
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D8908) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x820D8910;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8930
	if (!ctx.cr6.eq) goto loc_820D8930;
	// stw r28,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r28.u32);
loc_820D8930:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,56(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8944
	if (!ctx.cr6.eq) goto loc_820D8944;
	// stw r28,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r28.u32);
loc_820D8944:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,60(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8958
	if (!ctx.cr6.eq) goto loc_820D8958;
	// stw r28,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
loc_820D8958:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x820d8978
	if (ctx.cr6.eq) goto loc_820D8978;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
loc_820D8978:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,52(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x820d898c
	if (ctx.cr6.gt) goto loc_820D898C;
	// stw r28,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r28.u32);
loc_820D898C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x820d89b0
	if (ctx.cr6.gt) goto loc_820D89B0;
	// lwz r10,68(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,56
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 56, ctx.xer);
	// ble cr6,0x820d89b0
	if (!ctx.cr6.gt) goto loc_820D89B0;
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r10,68(r11)
	REX_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
loc_820D89B0:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820d89e8
	if (!ctx.cr6.eq) goto loc_820D89E8;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r28,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r9,12(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x820d89e8
	if (!ctx.cr6.eq) goto loc_820D89E8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d89e8
	if (!ctx.cr6.eq) goto loc_820D89E8;
	// stw r30,120(r11)
	REX_STORE_U32(ctx.r11.u32 + 120, ctx.r30.u32);
loc_820D89E8:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// li r9,2
	ctx.r9.s64 = 2;
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820d8a08
	if (!ctx.cr6.eq) goto loc_820D8A08;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r9,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r9,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_820D8A08:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8a28
	if (!ctx.cr6.eq) goto loc_820D8A28;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8a28
	if (!ctx.cr6.eq) goto loc_820D8A28;
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_820D8A28:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820d8abc
	if (ctx.cr6.gt) goto loc_820D8ABC;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-30128
	ctx.r12.s64 = ctx.r12.s64 + -30128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D8A78;
	case 1:
		goto loc_820D8A78;
	case 2:
		goto loc_820D8ABC;
	case 3:
		goto loc_820D8A78;
	case 4:
		goto loc_820D8A98;
	case 5:
		goto loc_820D8A78;
	case 6:
		goto loc_820D8A98;
	case 7:
		goto loc_820D8A98;
	case 8:
		goto loc_820D8A98;
	case 9:
		goto loc_820D8AB4;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D8A78:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x820d8abc
	if (ctx.cr6.lt) goto loc_820D8ABC;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x820d8ab8
	if (ctx.cr6.gt) goto loc_820D8AB8;
	// stw r30,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// b 0x820d8abc
	goto loc_820D8ABC;
loc_820D8A98:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820d8ab8
	if (ctx.cr6.eq) goto loc_820D8AB8;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x820d8abc
	if (!ctx.cr6.eq) goto loc_820D8ABC;
	// b 0x820d8ab8
	goto loc_820D8AB8;
loc_820D8AB4:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
loc_820D8AB8:
	// stw r28,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
loc_820D8ABC:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820d8b7c
	if (ctx.cr6.gt) goto loc_820D8B7C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29980
	ctx.r12.s64 = ctx.r12.s64 + -29980;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D8B0C;
	case 1:
		goto loc_820D8B0C;
	case 2:
		goto loc_820D8B7C;
	case 3:
		goto loc_820D8B0C;
	case 4:
		goto loc_820D8B5C;
	case 5:
		goto loc_820D8B0C;
	case 6:
		goto loc_820D8B5C;
	case 7:
		goto loc_820D8B5C;
	case 8:
		goto loc_820D8B5C;
	case 9:
		goto loc_820D8B5C;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D8B0C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8b2c
	if (!ctx.cr6.eq) goto loc_820D8B2C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8b2c
	if (!ctx.cr6.eq) goto loc_820D8B2C;
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
loc_820D8B2C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x820d8b4c
	if (!ctx.cr6.eq) goto loc_820D8B4C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8b4c
	if (!ctx.cr6.eq) goto loc_820D8B4C;
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
loc_820D8B4C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// b 0x820d8b68
	goto loc_820D8B68;
loc_820D8B5C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
loc_820D8B68:
	// bne cr6,0x820d8b7c
	if (!ctx.cr6.eq) goto loc_820D8B7C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8b7c
	if (!ctx.cr6.eq) goto loc_820D8B7C;
	// stw r30,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
loc_820D8B7C:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820d8d48
	if (ctx.cr6.gt) goto loc_820D8D48;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-29784
	ctx.r12.s64 = ctx.r12.s64 + -29784;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D8BD0;
	case 1:
		goto loc_820D8BD0;
	case 2:
		goto loc_820D8D48;
	case 3:
		goto loc_820D8BD0;
	case 4:
		goto loc_820D8C7C;
	case 5:
		goto loc_820D8BD0;
	case 6:
		goto loc_820D8C7C;
	case 7:
		goto loc_820D8C7C;
	case 8:
		goto loc_820D8C7C;
	case 9:
		goto loc_820D8D08;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D8BD0:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bgt cr6,0x820d8bfc
	if (ctx.cr6.gt) goto loc_820D8BFC;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8bfc
	if (!ctx.cr6.eq) goto loc_820D8BFC;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8bfc
	if (!ctx.cr6.eq) goto loc_820D8BFC;
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
loc_820D8BFC:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// blt cr6,0x820d8c3c
	if (ctx.cr6.lt) goto loc_820D8C3C;
	// cmpwi cr6,r10,10
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 10, ctx.xer);
	// bgt cr6,0x820d8c3c
	if (ctx.cr6.gt) goto loc_820D8C3C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8c3c
	if (!ctx.cr6.eq) goto loc_820D8C3C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8c3c
	if (!ctx.cr6.eq) goto loc_820D8C3C;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820d8c3c
	if (!ctx.cr6.gt) goto loc_820D8C3C;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
loc_820D8C3C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 11, ctx.xer);
	// blt cr6,0x820d8d48
	if (ctx.cr6.lt) goto loc_820D8D48;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x820d8d48
	if (!ctx.cr6.gt) goto loc_820D8D48;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8C7C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8ca0
	if (!ctx.cr6.eq) goto loc_820D8CA0;
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8CA0:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820d8cc8
	if (ctx.cr6.eq) goto loc_820D8CC8;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820d8cc8
	if (ctx.cr6.eq) goto loc_820D8CC8;
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8CC8:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d8cf4
	if (ctx.cr6.eq) goto loc_820D8CF4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x820d8cf4
	if (ctx.cr6.eq) goto loc_820D8CF4;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// ble cr6,0x820d8d48
	if (!ctx.cr6.gt) goto loc_820D8D48;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8CF4:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820d8d48
	if (!ctx.cr6.gt) goto loc_820D8D48;
	// stw r9,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8D08:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d2c
	if (!ctx.cr6.eq) goto loc_820D8D2C;
	// stw r30,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// b 0x820d8d48
	goto loc_820D8D48;
loc_820D8D2C:
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8d48
	if (!ctx.cr6.eq) goto loc_820D8D48;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// ble cr6,0x820d8d48
	if (!ctx.cr6.gt) goto loc_820D8D48;
	// stw r29,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
loc_820D8D48:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,140(r11)
	REX_STORE_U32(ctx.r11.u32 + 140, ctx.r30.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,144(r10)
	REX_STORE_U32(ctx.r10.u32 + 144, ctx.r30.u32);
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// lwz r8,24(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 24);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x820d8de8
	if (!ctx.cr6.eq) goto loc_820D8DE8;
	// stw r28,140(r9)
	REX_STORE_U32(ctx.r9.u32 + 140, ctx.r28.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r28,144(r10)
	REX_STORE_U32(ctx.r10.u32 + 144, ctx.r28.u32);
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r8,36(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 36);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x820d8d90
	if (!ctx.cr6.eq) goto loc_820D8D90;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r28,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r28.u32);
loc_820D8D90:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,28(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8da4
	if (!ctx.cr6.eq) goto loc_820D8DA4;
	// stw r28,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r28.u32);
loc_820D8DA4:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bne cr6,0x820d8dc4
	if (!ctx.cr6.eq) goto loc_820D8DC4;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,108(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8dc4
	if (!ctx.cr6.eq) goto loc_820D8DC4;
	// stw r28,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r28.u32);
loc_820D8DC4:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820d8e20
	if (!ctx.cr6.eq) goto loc_820D8E20;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,124(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x820d8e20
	if (!ctx.cr6.lt) goto loc_820D8E20;
	// stw r28,124(r11)
	REX_STORE_U32(ctx.r11.u32 + 124, ctx.r28.u32);
	// b 0x820d8e20
	goto loc_820D8E20;
loc_820D8DE8:
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// bne cr6,0x820d8dfc
	if (!ctx.cr6.eq) goto loc_820D8DFC;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_820D8DFC:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// bne cr6,0x820d8e20
	if (!ctx.cr6.eq) goto loc_820D8E20;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// ble cr6,0x820d8e20
	if (!ctx.cr6.gt) goto loc_820D8E20;
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r10,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_820D8E20:
	// lwz r11,4296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4296);
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// bne cr6,0x820d8e4c
	if (!ctx.cr6.eq) goto loc_820D8E4C;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820d8e4c
	if (!ctx.cr6.gt) goto loc_820D8E4C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_820D8E4C:
	// lwz r11,4296(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4296);
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// bne cr6,0x820d8e78
	if (!ctx.cr6.eq) goto loc_820D8E78;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820d8e78
	if (!ctx.cr6.lt) goto loc_820D8E78;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,44(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,40(r11)
	REX_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
loc_820D8E78:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820d8edc
	if (ctx.cr6.gt) goto loc_820D8EDC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d8edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8EDC;
	// bdzf 4*cr6+eq,0x820d8ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8EA4;
	// bdzf 4*cr6+eq,0x820d8ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8EA4;
	// bdzf 4*cr6+eq,0x820d8ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8EA4;
	// bne cr6,0x820d8ebc
	if (!ctx.cr6.eq) goto loc_820D8EBC;
loc_820D8EA4:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x820d8edc
	if (!ctx.cr6.eq) goto loc_820D8EDC;
	// lwz r10,104(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 104);
	// b 0x820d8ed0
	goto loc_820D8ED0;
loc_820D8EBC:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// bne cr6,0x820d8edc
	if (!ctx.cr6.eq) goto loc_820D8EDC;
	// lwz r10,116(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
loc_820D8ED0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8edc
	if (!ctx.cr6.eq) goto loc_820D8EDC;
	// stw r30,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
loc_820D8EDC:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820d8f58
	if (ctx.cr6.gt) goto loc_820D8F58;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d8f58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8F58;
	// bdzf 4*cr6+eq,0x820d8f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8F08;
	// bdzf 4*cr6+eq,0x820d8f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8F08;
	// bdzf 4*cr6+eq,0x820d8f08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D8F08;
	// bne cr6,0x820d8f38
	if (!ctx.cr6.eq) goto loc_820D8F38;
loc_820D8F08:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8f58
	if (!ctx.cr6.eq) goto loc_820D8F58;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x820d8f58
	if (!ctx.cr6.eq) goto loc_820D8F58;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,100(r10)
	REX_STORE_U32(ctx.r10.u32 + 100, ctx.r30.u32);
	// b 0x820d8f58
	goto loc_820D8F58;
loc_820D8F38:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8f58
	if (!ctx.cr6.eq) goto loc_820D8F58;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8f58
	if (!ctx.cr6.eq) goto loc_820D8F58;
	// stw r30,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r30.u32);
loc_820D8F58:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8f90
	if (!ctx.cr6.eq) goto loc_820D8F90;
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// li r10,7
	ctx.r10.s64 = 7;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x820d8f7c
	if (!ctx.cr6.gt) goto loc_820D8F7C;
	// stw r10,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r10.u32);
loc_820D8F7C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r9,84(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// ble cr6,0x820d8f90
	if (!ctx.cr6.gt) goto loc_820D8F90;
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_820D8F90:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8fb0
	if (!ctx.cr6.eq) goto loc_820D8FB0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,80(r11)
	REX_STORE_U32(ctx.r11.u32 + 80, ctx.r30.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,84(r10)
	REX_STORE_U32(ctx.r10.u32 + 84, ctx.r30.u32);
loc_820D8FB0:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8fc4
	if (!ctx.cr6.eq) goto loc_820D8FC4;
	// stw r30,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r30.u32);
loc_820D8FC4:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// bne cr6,0x820d8fe0
	if (!ctx.cr6.eq) goto loc_820D8FE0;
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// b 0x820d8fe4
	goto loc_820D8FE4;
loc_820D8FE0:
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
loc_820D8FE4:
	// bne cr6,0x820d8ff8
	if (!ctx.cr6.eq) goto loc_820D8FF8;
	// lwz r10,88(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 88);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d8ff8
	if (!ctx.cr6.eq) goto loc_820D8FF8;
	// stw r28,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r28.u32);
loc_820D8FF8:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x820d9400
	if (ctx.cr6.gt) goto loc_820D9400;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-28640
	ctx.r12.s64 = ctx.r12.s64 + -28640;
	// lwzx r0,r12,r0
	ctx.r0.u64 = REX_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_820D9048;
	case 1:
		goto loc_820D9048;
	case 2:
		goto loc_820D9400;
	case 3:
		goto loc_820D9048;
	case 4:
		goto loc_820D9228;
	case 5:
		goto loc_820D9048;
	case 6:
		goto loc_820D9228;
	case 7:
		goto loc_820D9228;
	case 8:
		goto loc_820D9228;
	case 9:
		goto loc_820D9380;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_820D9048:
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x820d90dc
	if (ctx.cr6.lt) goto loc_820D90DC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x820d90dc
	if (ctx.cr6.gt) goto loc_820D90DC;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// bne cr6,0x820d90a4
	if (!ctx.cr6.eq) goto loc_820D90A4;
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d90dc
	if (!ctx.cr6.gt) goto loc_820D90DC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-7
	ctx.r8.s64 = ctx.r11.s64 + -7;
	// b 0x820d90c8
	goto loc_820D90C8;
loc_820D90A4:
	// addi r7,r11,-9
	ctx.r7.s64 = ctx.r11.s64 + -9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d90dc
	if (!ctx.cr6.gt) goto loc_820D90DC;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
loc_820D90C8:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r6.u32);
loc_820D90DC:
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// blt cr6,0x820d917c
	if (ctx.cr6.lt) goto loc_820D917C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x820d917c
	if (ctx.cr6.gt) goto loc_820D917C;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// bne cr6,0x820d913c
	if (!ctx.cr6.eq) goto loc_820D913C;
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-5
	ctx.r4.s64 = ctx.r11.s64 + -5;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d917c
	if (!ctx.cr6.gt) goto loc_820D917C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-7
	ctx.r8.s64 = ctx.r11.s64 + -7;
	// b 0x820d9164
	goto loc_820D9164;
loc_820D913C:
	// addi r7,r11,-9
	ctx.r7.s64 = ctx.r11.s64 + -9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-5
	ctx.r4.s64 = ctx.r11.s64 + -5;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d917c
	if (!ctx.cr6.gt) goto loc_820D917C;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
loc_820D9164:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,-5
	ctx.r6.s64 = ctx.r11.s64 + -5;
	// stw r6,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r6.u32);
loc_820D917C:
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// blt cr6,0x820d9400
	if (ctx.cr6.lt) goto loc_820D9400;
	// rotlwi r8,r9,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r10,12(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// bne cr6,0x820d91e8
	if (!ctx.cr6.eq) goto loc_820D91E8;
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-11
	ctx.r4.s64 = ctx.r11.s64 + -11;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r11,-7
	ctx.r8.s64 = ctx.r11.s64 + -7;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,-11
	ctx.r6.s64 = ctx.r11.s64 + -11;
	// b 0x820d93fc
	goto loc_820D93FC;
loc_820D91E8:
	// addi r7,r11,-9
	ctx.r7.s64 = ctx.r11.s64 + -9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-11
	ctx.r4.s64 = ctx.r11.s64 + -11;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r6,r11,-11
	ctx.r6.s64 = ctx.r11.s64 + -11;
	// b 0x820d93fc
	goto loc_820D93FC;
loc_820D9228:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820d92d4
	if (ctx.cr6.eq) goto loc_820D92D4;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x820d92d4
	if (ctx.cr6.eq) goto loc_820D92D4;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,80(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// bne cr6,0x820d9298
	if (!ctx.cr6.eq) goto loc_820D9298;
	// addi r7,r10,-7
	ctx.r7.s64 = ctx.r10.s64 + -7;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r10,-7
	ctx.r8.s64 = ctx.r10.s64 + -7;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// b 0x820d9400
	goto loc_820D9400;
loc_820D9298:
	// addi r7,r10,-9
	ctx.r7.s64 = ctx.r10.s64 + -9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r10,-9
	ctx.r8.s64 = ctx.r10.s64 + -9;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// b 0x820d9400
	goto loc_820D9400;
loc_820D92D4:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9334
	if (ctx.cr6.eq) goto loc_820D9334;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x820d9334
	if (ctx.cr6.eq) goto loc_820D9334;
	// lwz r8,4284(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,80(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r10,-9
	ctx.r7.s64 = ctx.r10.s64 + -9;
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r10,-9
	ctx.r8.s64 = ctx.r10.s64 + -9;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// b 0x820d9400
	goto loc_820D9400;
loc_820D9334:
	// lwz r8,4284(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,80(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 80);
	// lwz r9,12(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 12);
	// addi r7,r10,-7
	ctx.r7.s64 = ctx.r10.s64 + -7;
	// lwz r6,88(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 88);
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r10,r5,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// lwz r10,80(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r10,-7
	ctx.r8.s64 = ctx.r10.s64 + -7;
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r7,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r6,88(r11)
	REX_STORE_U32(ctx.r11.u32 + 88, ctx.r6.u32);
	// b 0x820d9400
	goto loc_820D9400;
loc_820D9380:
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwz r11,16(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,12(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,80(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 80);
	// lwz r6,88(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 88);
	// bne cr6,0x820d93c8
	if (!ctx.cr6.eq) goto loc_820D93C8;
	// addi r7,r11,-7
	ctx.r7.s64 = ctx.r11.s64 + -7;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-7
	ctx.r8.s64 = ctx.r11.s64 + -7;
	// b 0x820d93ec
	goto loc_820D93EC;
loc_820D93C8:
	// addi r7,r11,-9
	ctx.r7.s64 = ctx.r11.s64 + -9;
	// cntlzw r5,r7
	ctx.r5.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r11,r5,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r6,r4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x820d9400
	if (!ctx.cr6.gt) goto loc_820D9400;
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r11,80(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r11,-9
	ctx.r8.s64 = ctx.r11.s64 + -9;
loc_820D93EC:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r11,r7,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_820D93FC:
	// stw r6,88(r9)
	REX_STORE_U32(ctx.r9.u32 + 88, ctx.r6.u32);
loc_820D9400:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r3,5252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820daef8
	ctx.lr = 0x820D941C;
	sub_820DAEF8(ctx, base);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r9,80(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 80);
	// cmpw cr6,r9,r3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, ctx.xer);
	// ble cr6,0x820d9450
	if (!ctx.cr6.gt) goto loc_820D9450;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,5252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,8(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,16(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x820daef8
	ctx.lr = 0x820D9448;
	sub_820DAEF8(ctx, base);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r3,80(r10)
	REX_STORE_U32(ctx.r10.u32 + 80, ctx.r3.u32);
loc_820D9450:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,84(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// lwz r9,80(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x820d9470
	if (!ctx.cr6.gt) goto loc_820D9470;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// stw r10,84(r11)
	REX_STORE_U32(ctx.r11.u32 + 84, ctx.r10.u32);
loc_820D9470:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bgt cr6,0x820d9500
	if (ctx.cr6.gt) goto loc_820D9500;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d9500
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D9500;
	// bdzf 4*cr6+eq,0x820d949c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D949C;
	// bdzf 4*cr6+eq,0x820d949c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D949C;
	// bdzf 4*cr6+eq,0x820d949c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D949C;
	// bne cr6,0x820d94d0
	if (!ctx.cr6.eq) goto loc_820D94D0;
loc_820D949C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9500
	if (ctx.cr6.eq) goto loc_820D9500;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820d9500
	if (!ctx.cr6.lt) goto loc_820D9500;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,96(r11)
	REX_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// b 0x820d9500
	goto loc_820D9500;
loc_820D94D0:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9500
	if (ctx.cr6.eq) goto loc_820D9500;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,112(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// lwz r9,72(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x820d9500
	if (!ctx.cr6.lt) goto loc_820D9500;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
loc_820D9500:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// addi r11,r11,-21
	ctx.r11.s64 = ctx.r11.s64 + -21;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x820d9584
	if (ctx.cr6.gt) goto loc_820D9584;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x820d9584
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D9584;
	// bdzf 4*cr6+eq,0x820d9528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D9528;
	// bdzf 4*cr6+eq,0x820d9528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_820D9528;
	// bne cr6,0x820d955c
	if (!ctx.cr6.eq) goto loc_820D955C;
loc_820D9528:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820d9584
	if (!ctx.cr6.eq) goto loc_820D9584;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bne cr6,0x820d9584
	if (!ctx.cr6.eq) goto loc_820D9584;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x820d9584
	if (!ctx.cr6.gt) goto loc_820D9584;
	// b 0x820d9580
	goto loc_820D9580;
loc_820D955C:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r9,44(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x820d9584
	if (!ctx.cr6.eq) goto loc_820D9584;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,512
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 512, ctx.xer);
	// bne cr6,0x820d9584
	if (!ctx.cr6.eq) goto loc_820D9584;
loc_820D9580:
	// stw r28,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r28.u32);
loc_820D9584:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820d95e0
	if (!ctx.cr6.eq) goto loc_820D95E0;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d95e0
	if (!ctx.cr6.eq) goto loc_820D95E0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r30,148(r11)
	REX_STORE_U32(ctx.r11.u32 + 148, ctx.r30.u32);
	// lwz r10,4284(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,152(r10)
	REX_STORE_U32(ctx.r10.u32 + 152, ctx.r30.u32);
	// lwz r9,4284(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,156(r9)
	REX_STORE_U32(ctx.r9.u32 + 156, ctx.r30.u32);
	// lwz r8,4284(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,160(r8)
	REX_STORE_U32(ctx.r8.u32 + 160, ctx.r30.u32);
	// lwz r7,4284(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,164(r7)
	REX_STORE_U32(ctx.r7.u32 + 164, ctx.r30.u32);
	// lwz r6,4284(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,168(r6)
	REX_STORE_U32(ctx.r6.u32 + 168, ctx.r30.u32);
	// lwz r5,4284(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,172(r5)
	REX_STORE_U32(ctx.r5.u32 + 172, ctx.r30.u32);
	// lwz r4,4284(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,176(r4)
	REX_STORE_U32(ctx.r4.u32 + 176, ctx.r30.u32);
loc_820D95E0:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820d95f4
	if (!ctx.cr6.eq) goto loc_820D95F4;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r30,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
loc_820D95F4:
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// lwz r10,148(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9614
	if (ctx.cr6.eq) goto loc_820D9614;
	// lwz r10,152(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 152);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d9614
	if (!ctx.cr6.eq) goto loc_820D9614;
	// stw r28,152(r11)
	REX_STORE_U32(ctx.r11.u32 + 152, ctx.r28.u32);
loc_820D9614:
	// lwz r11,5252(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 5252);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x820d9628
	if (!ctx.cr6.eq) goto loc_820D9628;
	// lwz r11,4284(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4284);
	// stw r29,44(r11)
	REX_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
loc_820D9628:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_820D98F4) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d9910
	if (!ctx.cr6.eq) goto loc_820D9910;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9928
	if (ctx.cr6.eq) goto loc_820D9928;
loc_820D9910:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820d9928
	if (ctx.cr6.eq) goto loc_820D9928;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x820d99b4
	if (!ctx.cr6.eq) goto loc_820D99B4;
loc_820D9928:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_820D99B4:
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820D9CFC) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x820d9d18
	if (!ctx.cr6.eq) goto loc_820D9D18;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x820d9d40
	if (ctx.cr6.eq) goto loc_820D9D40;
loc_820D9D18:
	// lwz r10,4284(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4284);
	// lwz r9,40(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r8,44(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x820d99b0
	// ERROR: conditional branch to unknown address 0x820D99B0
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9D28 to 0x820D99B0");
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x820d99b0
	// ERROR: conditional branch to unknown address 0x820D99B0
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9D34 to 0x820D99B0");
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x820d99b0
	// ERROR: conditional branch to unknown address 0x820D99B0
	if (ctx.cr6.eq) REX_FATAL("Unresolved branch from 0x820D9D3C to 0x820D99B0");
loc_820D9D40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF030) {
	REX_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bgt cr6,0x820ff050
	if (ctx.cr6.gt) goto loc_820FF050;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x820ff050
	if (ctx.cr6.lt) goto loc_820FF050;
	// sth r4,5136(r3)
	REX_STORE_U16(ctx.r3.u32 + 5136, ctx.r4.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_820FF050:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF3A0) {
	REX_FUNC_PROLOGUE();
	// lwz r10,24(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,60(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 60);
	// addi r9,r11,14
	ctx.r9.s64 = ctx.r11.s64 + 14;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,60(r10)
	REX_STORE_U32(ctx.r10.u32 + 60, ctx.r3.u32);
	// stwx r5,r7,r10
	REX_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r5.u32);
	// stwx r4,r6,r10
	REX_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_820FF950) {
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
	// bl 0x820ff8f0
	ctx.lr = 0x820FF970;
	sub_820FF8F0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x820ff988
	if (ctx.cr6.eq) goto loc_820FF988;
	// bl 0x8215e470
	ctx.lr = 0x820FF984;
	sub_8215E470(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_820FF988:
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

DEFINE_REX_FUNC(sub_82100290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82100298;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,112
	ctx.r3.s64 = 112;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x820ef558
	ctx.lr = 0x821002AC;
	sub_820EF558(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82100378
	if (ctx.cr6.eq) goto loc_82100378;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stw r3,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r8,r10,6160
	ctx.r8.s64 = ctx.r10.s64 + 6160;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r9,6128
	ctx.r7.s64 = ctx.r9.s64 + 6128;
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,68(r3)
	REX_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r7,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r7.u32);
	// li r6,84
	ctx.r6.s64 = 84;
	// stw r10,72(r3)
	REX_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// li r4,82
	ctx.r4.s64 = 82;
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,105
	ctx.r29.s64 = 105;
	// lwz r9,28(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r28,100
	ctx.r28.s64 = 100;
	// stw r9,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// stw r10,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r10.u32);
	// lfd f0,1792(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 1792);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stfd f0,48(r11)
	REX_STORE_U64(ctx.r11.u32 + 48, ctx.f0.u64);
	// stb r4,85(r11)
	REX_STORE_U8(ctx.r11.u32 + 85, ctx.r4.u8);
	// stfd f0,40(r11)
	REX_STORE_U64(ctx.r11.u32 + 40, ctx.f0.u64);
	// stb r3,86(r11)
	REX_STORE_U8(ctx.r11.u32 + 86, ctx.r3.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r5,28(r11)
	REX_STORE_U32(ctx.r11.u32 + 28, ctx.r5.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// stb r6,84(r11)
	REX_STORE_U8(ctx.r11.u32 + 84, ctx.r6.u8);
	// stb r29,87(r11)
	REX_STORE_U8(ctx.r11.u32 + 87, ctx.r29.u8);
	// stb r28,88(r11)
	REX_STORE_U8(ctx.r11.u32 + 88, ctx.r28.u8);
	// stb r10,89(r11)
	REX_STORE_U8(ctx.r11.u32 + 89, ctx.r10.u8);
	// stw r10,56(r11)
	REX_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,60(r11)
	REX_STORE_U32(ctx.r11.u32 + 60, ctx.r10.u32);
	// lwz r8,4(r30)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r8,64(r11)
	REX_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
	// stw r5,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r9,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x8210b5c8
	ctx.lr = 0x8210036C;
	sub_8210B5C8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_82100378:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821058C0) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82105944
	if (ctx.cr6.lt) goto loc_82105944;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bge cr6,0x82105944
	if (!ctx.cr6.lt) goto loc_82105944;
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
loc_82105900:
	// lwzx r6,r10,r9
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82105920
	if (ctx.cr6.eq) goto loc_82105920;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82105900
	if (ctx.cr6.lt) goto loc_82105900;
	// blr 
	return;
loc_82105920:
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
	// lwz r3,8(r10)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// blr 
	return;
loc_82105944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82106740) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82106784
	if (ctx.cr6.eq) goto loc_82106784;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210676c
	if (ctx.cr6.eq) goto loc_8210676C;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8210676c
	if (ctx.cr6.eq) goto loc_8210676C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_8210676C:
	// lwz r11,60(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8210678c
	if (!ctx.cr6.eq) goto loc_8210678C;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821067a0
	if (!ctx.cr6.eq) goto loc_821067A0;
loc_82106784:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8210678C:
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821067a0
	if (!ctx.cr6.eq) goto loc_821067A0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_821067A0:
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
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

DEFINE_REX_FUNC(sub_82107CC8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r3)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r3.u32 + 140, temp.u32);
	// lfs f13,4(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,144(r3)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lfs f12,8(r4)
	temp.u32 = REX_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,148(r3)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82107F80) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82107F88;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,400(r3)
	temp.u32 = REX_LOAD_U32(ctx.r3.u32 + 400);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lfs f31,2096(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 2096);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82160048
	ctx.lr = 0x82107FB4;
	sub_82160048(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lfs f12,400(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,420(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f1,f12,f31
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f30,f13,f11
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// bl 0x82160048
	ctx.lr = 0x82107FCC;
	sub_82160048(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lfs f9,420(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,400(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,416(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f1,f8,f31
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmuls f6,f10,f9
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f29,f6,f7
	ctx.f29.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// bl 0x82160048
	ctx.lr = 0x82107FEC;
	sub_82160048(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// lfs f4,400(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 400);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,424(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f4,f31
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f31.f64));
	// fmuls f31,f3,f5
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f5.f64));
	// bl 0x82160048
	ctx.lr = 0x82108004;
	sub_82160048(ctx, base);
	// frsp f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f1.f64));
	// lfs f1,424(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,416(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f29
	ctx.f13.u64 = ctx.f29.u64 ^ 0x8000000000000000;
	// lfs f12,420(r31)
	temp.u32 = REX_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f30
	ctx.f11.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// fneg f10,f31
	ctx.f10.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f30,180(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// stfs f12,184(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// addi r30,r31,272
	ctx.r30.s64 = ctx.r31.s64 + 272;
	// stfs f13,188(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 188, temp.u32);
	// addi r29,r31,176
	ctx.r29.s64 = ctx.r31.s64 + 176;
	// stfs f11,192(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f12,196(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// stfs f29,200(r31)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 200, temp.u32);
	// stfs f30,204(r31)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// fmuls f9,f1,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f12,208(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 208, temp.u32);
	// stfs f29,212(r31)
	temp.f32 = float(ctx.f29.f64);
	REX_STORE_U32(ctx.r31.u32 + 212, temp.u32);
	// stfs f11,216(r31)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r31.u32 + 216, temp.u32);
	// stfs f12,220(r31)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r31.u32 + 220, temp.u32);
	// stfs f31,228(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 228, temp.u32);
	// stfs f1,232(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 232, temp.u32);
	// stfs f10,240(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 240, temp.u32);
	// stfs f1,244(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 244, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stfs f1,256(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f8,248(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f8,260(r31)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stfs f10,264(r31)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// stfs f1,268(r31)
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stfs f13,176(r31)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// fneg f7,f8
	ctx.f7.u64 = ctx.f8.u64 ^ 0x8000000000000000;
	// stfs f7,224(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 224, temp.u32);
	// stfs f7,236(r31)
	temp.f32 = float(ctx.f7.f64);
	REX_STORE_U32(ctx.r31.u32 + 236, temp.u32);
	// bl 0x820f1648
	ctx.lr = 0x8210809C;
	sub_820F1648(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,88(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x821080B0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,0(r8)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r5,4(r8)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r4,8(r8)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,28(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 28);
	// stw r6,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r4,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821080E0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32189
	ctx.r10.s64 = -2109538304;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f6,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f6.f64 = double(temp.f32);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r10,-30128
	ctx.r11.s64 = ctx.r10.s64 + -30128;
	// lwz r6,4(r3)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r27,8(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,96(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lfs f30,2280(r9)
	temp.u32 = REX_LOAD_U32(ctx.r9.u32 + 2280);
	ctx.f30.f64 = double(temp.f32);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lfs f31,2104(r7)
	temp.u32 = REX_LOAD_U32(ctx.r7.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// fadds f12,f6,f30
	ctx.f12.f64 = double(float(ctx.f6.f64 + ctx.f30.f64));
	// stfs f31,144(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f31,148(r1)
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// stw r8,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stfs f30,152(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r6,116(r1)
	REX_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stfs f0,-30128(r10)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r10.u32 + -30128, temp.u32);
	// stw r27,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// bl 0x820f1528
	ctx.lr = 0x82108148;
	sub_820F1528(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82108184
	if (!ctx.cr6.eq) goto loc_82108184;
	// lfs f13,84(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x82108184
	if (!ctx.cr6.eq) goto loc_82108184;
	// lfs f13,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// bne cr6,0x82108184
	if (!ctx.cr6.eq) goto loc_82108184;
	// lfs f0,112(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,120(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82108184:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f12,88(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f13,132(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f12,136(r1)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f30,140(r1)
	temp.f32 = float(ctx.f30.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// bl 0x820f24c8
	ctx.lr = 0x821081A8;
	sub_820F24C8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x820f23e0
	ctx.lr = 0x821081B4;
	sub_820F23E0(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82107e48
	ctx.lr = 0x821081C0;
	sub_82107E48(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x820f1728
	ctx.lr = 0x821081CC;
	sub_820F1728(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// li r29,8
	ctx.r29.s64 = 8;
loc_821081D8:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x820f1578
	ctx.lr = 0x821081E8;
	sub_820F1578(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82108208
	if (ctx.cr6.eq) goto loc_82108208;
	// lfs f0,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,168(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,-8(r30)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r30.u32 + -8, temp.u32);
	// stfs f13,-4(r30)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r30.u32 + -4, temp.u32);
	// stfs f12,0(r30)
	temp.f32 = float(ctx.f12.f64);
	REX_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_82108208:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x821081d8
	if (!ctx.cr0.eq) goto loc_821081D8;
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = REX_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82110EB0) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82110ee8
	if (ctx.cr6.eq) goto loc_82110EE8;
loc_82110ED0:
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
loc_82110EE8:
	// lwz r11,104(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82110f88
	if (ctx.cr6.eq) goto loc_82110F88;
	// lhz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,358
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 358, ctx.xer);
	// beq cr6,0x82110f88
	if (ctx.cr6.eq) goto loc_82110F88;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x820ef2e0
	ctx.lr = 0x82110F08;
	sub_820EF2E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110ed0
	if (ctx.cr6.eq) goto loc_82110ED0;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82110F30;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r9,46(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 46);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// bne cr6,0x82110fd4
	if (!ctx.cr6.eq) goto loc_82110FD4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82110fd4
	if (ctx.cr6.lt) goto loc_82110FD4;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82110fd4
	if (!ctx.cr0.gt) goto loc_82110FD4;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_82110F60:
	// lbz r9,2(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 2);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lbz r8,1(r11)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// stb r9,1(r11)
	REX_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// stbu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	REX_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82110f60
	if (ctx.cr6.lt) goto loc_82110F60;
	// b 0x82110fd4
	goto loc_82110FD4;
loc_82110F88:
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8216a850
	ctx.lr = 0x82110F9C;
	sub_8216A850(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82110ed0
	if (ctx.cr6.eq) goto loc_82110ED0;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,28(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,116(r31)
	REX_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82110FCC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r8.u32);
loc_82110FD4:
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

DEFINE_REX_FUNC(sub_82116198) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// addi r11,r11,8008
	ctx.r11.s64 = ctx.r11.s64 + 8008;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821161d4
	if (ctx.cr6.eq) goto loc_821161D4;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823751a4
	ctx.lr = 0x821161CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375194
	ctx.lr = 0x821161D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_821161D4:
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

DEFINE_REX_FUNC(sub_821167E8) {
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
	ctx.lr = 0x82116818;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211682C;
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

DEFINE_REX_FUNC(sub_82116E38) {
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
	// lwz r10,36(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82116e74
	if (!ctx.cr6.lt) goto loc_82116E74;
	// bl 0x82374f94
	ctx.lr = 0x82116E68;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82116e74
	if (ctx.cr6.eq) goto loc_82116E74;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82116E74:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82116e88
	if (ctx.cr6.eq) goto loc_82116E88;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82116ef8
	if (ctx.cr6.eq) goto loc_82116EF8;
loc_82116E88:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82116ee8
	if (ctx.cr6.gt) goto loc_82116EE8;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x821160e0
	ctx.lr = 0x82116EB4;
	sub_821160E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82116ef8
	if (ctx.cr0.eq) goto loc_82116EF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r3,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// b 0x82116ef8
	goto loc_82116EF8;
loc_82116EE8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,8064
	ctx.r3.s64 = ctx.r11.s64 + 8064;
	// bl 0x8216b168
	ctx.lr = 0x82116EF4;
	sub_8216B168(ctx, base);
	// twi 31,r0,22
	ppc_trap(ctx, base, 22);
loc_82116EF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82116f10
	if (ctx.cr6.eq) goto loc_82116F10;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82116f14
	goto loc_82116F14;
loc_82116F10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82116F14:
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

DEFINE_REX_FUNC(sub_821193D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821193D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-17520
	ctx.r30.s64 = ctx.r11.s64 + -17520;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82115fc8
	ctx.lr = 0x821193F0;
	sub_82115FC8(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82119404
	if (!ctx.cr6.eq) goto loc_82119404;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16387
	ctx.r31.u64 = ctx.r31.u64 | 16387;
	// b 0x82119440
	goto loc_82119440;
loc_82119404:
	// lis r5,8343
	ctx.r5.s64 = 546766848;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,10
	ctx.r5.u64 = ctx.r5.u64 | 10;
	// li r4,104
	ctx.r4.s64 = 104;
	// bl 0x821160e0
	ctx.lr = 0x8211941C;
	sub_821160E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8211942c
	if (ctx.cr0.eq) goto loc_8211942C;
	// bl 0x82122e48
	ctx.lr = 0x82119428;
	sub_82122E48(ctx, base);
	// b 0x82119430
	goto loc_82119430;
loc_8211942C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82119430:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119454
	if (ctx.cr6.eq) goto loc_82119454;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r3,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82119440:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82116060
	ctx.lr = 0x82119448;
	sub_82116060(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82119454:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82119440
	goto loc_82119440;
}

DEFINE_REX_FUNC(sub_82119EC0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82119EC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,64(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 64);
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8211a014
	if (ctx.cr6.eq) goto loc_8211A014;
	// lwz r11,56(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82119efc
	if (ctx.cr0.eq) goto loc_82119EFC;
	// lis r30,-30570
	ctx.r30.s64 = -2003435520;
	// ori r30,r30,1
	ctx.r30.u64 = ctx.r30.u64 | 1;
	// b 0x8211a014
	goto loc_8211A014;
loc_82119EFC:
	// lwz r11,60(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r4,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r4.u32);
	// stw r4,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r4.u32);
	// stw r11,60(r31)
	REX_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// bl 0x82127d50
	ctx.lr = 0x82119F14;
	sub_82127D50(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8211a014
	if (ctx.cr0.lt) goto loc_8211A014;
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82119f34
	if (ctx.cr6.eq) goto loc_82119F34;
	// bl 0x82125fe0
	ctx.lr = 0x82119F2C;
	sub_82125FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82119f38
	goto loc_82119F38;
loc_82119F34:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82119F38:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8211a014
	if (ctx.cr6.lt) goto loc_8211A014;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm. r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82119fe4
	if (ctx.cr0.eq) goto loc_82119FE4;
	// lwz r3,48(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// lwz r4,132(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// bl 0x82116590
	ctx.lr = 0x82119F5C;
	sub_82116590(ctx, base);
	// stw r28,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x821194f0
	ctx.lr = 0x82119F6C;
	sub_821194F0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x8211a014
	if (ctx.cr0.lt) goto loc_8211A014;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r5,140(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82126d70
	ctx.lr = 0x82119F94;
	sub_82126D70(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119FB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8211a014
	if (ctx.cr6.lt) goto loc_8211A014;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82119fe4
	if (!ctx.cr6.eq) goto loc_82119FE4;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r4,4919
	ctx.r4.s64 = 322371584;
	// ori r4,r4,61441
	ctx.r4.u64 = ctx.r4.u64 | 61441;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82119FE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82119FE4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8211a014
	if (ctx.cr6.lt) goto loc_8211A014;
	// lwz r3,140(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// lis r5,4919
	ctx.r5.s64 = 322371584;
	// lwz r11,120(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// ori r5,r5,61441
	ctx.r5.u64 = ctx.r5.u64 | 61441;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,44(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8211A010;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8211A014:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211D7A8) {
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
	// lwz r11,448(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 448);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8211d7f4
	if (!ctx.cr6.gt) goto loc_8211D7F4;
loc_8211D7D0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8211b4f0
	ctx.lr = 0x8211D7DC;
	sub_8211B4F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8211d810
	if (ctx.cr0.eq) goto loc_8211D810;
	// lwz r11,448(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 448);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8211d7d0
	if (ctx.cr6.lt) goto loc_8211D7D0;
loc_8211D7F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8211D7F8:
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
loc_8211D810:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8211d7f8
	goto loc_8211D7F8;
}

DEFINE_REX_FUNC(sub_8211E3D0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8211E3D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,468(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 468);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8211e498
	if (!ctx.cr6.eq) goto loc_8211E498;
	// bl 0x8211db90
	ctx.lr = 0x8211E3F0;
	sub_8211DB90(ctx, base);
	// lbz r11,466(r30)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + 466);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// subf. r11,r3,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8211e498
	if (ctx.cr0.eq) goto loc_8211E498;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e458
	if (ctx.cr6.eq) goto loc_8211E458;
	// addi r28,r30,500
	ctx.r28.s64 = ctx.r30.s64 + 500;
	// addi r29,r30,140
	ctx.r29.s64 = ctx.r30.s64 + 140;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_8211E414:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e428
	if (ctx.cr6.eq) goto loc_8211E428;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8211e42c
	goto loc_8211E42C;
loc_8211E428:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8211E42C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e43c
	if (ctx.cr6.eq) goto loc_8211E43C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8211e440
	goto loc_8211E440;
loc_8211E43C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211E440:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,32(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x82119718
	ctx.lr = 0x8211E450;
	sub_82119718(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x8211e414
	if (!ctx.cr0.eq) goto loc_8211E414;
loc_8211E458:
	// lwz r11,524(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 524);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8211e46c
	if (ctx.cr6.eq) goto loc_8211E46C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8211e470
	goto loc_8211E470;
loc_8211E46C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8211E470:
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x8211e494
	if (!ctx.cr6.eq) goto loc_8211E494;
	// li r4,254
	ctx.r4.s64 = 254;
	// lwz r3,472(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 472);
	// bl 0x8211bae8
	ctx.lr = 0x8211E488;
	sub_8211BAE8(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stb r11,466(r30)
	REX_STORE_U8(ctx.r30.u32 + 466, ctx.r11.u8);
	// b 0x8211e498
	goto loc_8211E498;
loc_8211E494:
	// stb r27,466(r30)
	REX_STORE_U8(ctx.r30.u32 + 466, ctx.r27.u8);
loc_8211E498:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8211FEE8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8211FEF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8211ff0c
	if (!ctx.cr6.eq) goto loc_8211FF0C;
	// li r29,32
	ctx.r29.s64 = 32;
	// b 0x8211ff24
	goto loc_8211FF24;
loc_8211FF0C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8211ff1c
	if (!ctx.cr6.eq) goto loc_8211FF1C;
	// li r29,16
	ctx.r29.s64 = 16;
	// b 0x8211ff24
	goto loc_8211FF24;
loc_8211FF1C:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// addi r29,r11,18
	ctx.r29.s64 = ctx.r11.s64 + 18;
loc_8211FF24:
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x8211ff34
	if (!ctx.cr6.eq) goto loc_8211FF34;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x8211ff4c
	goto loc_8211FF4C;
loc_8211FF34:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8211ff44
	if (!ctx.cr6.eq) goto loc_8211FF44;
	// li r30,18
	ctx.r30.s64 = 18;
	// b 0x8211ff4c
	goto loc_8211FF4C;
loc_8211FF44:
	// lhz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 16);
	// addi r30,r11,18
	ctx.r30.s64 = ctx.r11.s64 + 18;
loc_8211FF4C:
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
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821160e0
	ctx.lr = 0x8211FF68;
	sub_821160E0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8211ff90
	if (ctx.cr0.eq) goto loc_8211FF90;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x8211FF80;
	sub_8215E640(ctx, base);
	// subf r5,r29,r30
	ctx.r5.u64 = ctx.r30.u64 - ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r31,r29
	ctx.r3.u64 = ctx.r31.u64 + ctx.r29.u64;
	// bl 0x8215ec60
	ctx.lr = 0x8211FF90;
	sub_8215EC60(ctx, base);
loc_8211FF90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82121798) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821217A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// addi r29,r3,28
	ctx.r29.s64 = ctx.r3.s64 + 28;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821217C4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,364(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 364);
	// b 0x821217f4
	goto loc_821217F4;
loc_821217CC:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821217e8
	if (ctx.cr6.eq) goto loc_821217E8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x821217ec
	goto loc_821217EC;
loc_821217E8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821217EC:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82121800
	if (ctx.cr6.eq) goto loc_82121800;
loc_821217F4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821217cc
	if (!ctx.cr6.eq) goto loc_821217CC;
	// b 0x82121824
	goto loc_82121824;
loc_82121800:
	// addi r3,r30,340
	ctx.r3.s64 = ctx.r30.s64 + 340;
	// bl 0x82126ff8
	ctx.lr = 0x82121808;
	sub_82126FF8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82121820;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82118bc8
	ctx.lr = 0x82121824;
	sub_82118BC8(ctx, base);
loc_82121824:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82121838;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821221B0) {
	REX_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82121168
	sub_82121168(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82122F38) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_82122F4C:
	// mfmsr r9
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.r9.u64 = REX_CHECK_GLOBAL_LOCK();
	// mtmsrd r13,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_ENTER_GLOBAL_LOCK();
	// lwarx r10,0,r11
	ea = ctx.r11.u32;
	ctx.reserved.u32 = *(uint32_t*)REX_RAW_ADDR(ea);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ea = ctx.r11.u32;
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(REX_RAW_ADDR(ea)), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	std::atomic_thread_fence(std::memory_order_seq_cst);
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	REX_LEAVE_GLOBAL_LOCK();
	// bne 0x82122f4c
	if (!ctx.cr0.eq) goto loc_82122F4C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82122fa8
	if (!ctx.cr6.eq) goto loc_82122FA8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82122f94
	if (ctx.cr6.eq) goto loc_82122F94;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,56(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82122F90;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82122f98
	goto loc_82122F98;
loc_82122F94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82122F98:
	// bl 0x82118bc8
	ctx.lr = 0x82122F9C;
	sub_82118BC8(ctx, base);
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// addi r3,r11,-17520
	ctx.r3.s64 = ctx.r11.s64 + -17520;
	// bl 0x82116060
	ctx.lr = 0x82122FA8;
	sub_82116060(ctx, base);
loc_82122FA8:
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

DEFINE_REX_FUNC(sub_82125D38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82125D40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82125e94
	if (!ctx.cr6.eq) goto loc_82125E94;
	// lwz r5,52(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r11,48(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 48);
	// lhz r9,40(r3)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r3.u32 + 40);
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// subf r10,r5,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r5.u64;
	// lwz r11,44(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r29,r9,r8
	ctx.r29.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r27,0(r24)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r30,0(r7)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82125da4
	if (ctx.cr6.lt) goto loc_82125DA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82125D98;
	sub_8215E640(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// b 0x82125e90
	goto loc_82125E90;
loc_82125DA4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82125dbc
	if (ctx.cr6.eq) goto loc_82125DBC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8215e640
	ctx.lr = 0x82125DB4;
	sub_8215E640(ctx, base);
	// lwz r5,52(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// add r30,r5,r30
	ctx.r30.u64 = ctx.r5.u64 + ctx.r30.u64;
loc_82125DBC:
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 40);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
	// twllei r11,0
	if (ctx.r11.s32 == 0 || ctx.r11.u32 < 0u) ppc_trap(ctx, base, 0);
	// lhz r4,36(r31)
	ctx.r4.u64 = REX_LOAD_U16(ctx.r31.u32 + 36);
	// divwu r11,r5,r11
	ctx.r11.u64 = uint32_t(ctx.r11.u32 ? ctx.r5.u32 / ctx.r11.u32 : 0);
	// lhz r3,38(r31)
	ctx.r3.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// subf r29,r11,r10
	ctx.r29.u64 = ctx.r10.u64 - ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82140538
	ctx.lr = 0x82125DE4;
	sub_82140538(ctx, base);
	// lhz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 40);
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r7,38(r31)
	ctx.r7.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// mullw r26,r11,r29
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82125e24
	if (!ctx.cr6.eq) goto loc_82125E24;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mullw r4,r7,r3
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82125E1C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82125e90
	goto loc_82125E90;
loc_82125E24:
	// lwz r10,48(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r8,56(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r29,r10,r11
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// mullw r28,r7,r11
	ctx.r28.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82125E50;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// lhz r10,38(r31)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r31.u32 + 38);
	// add r3,r28,r27
	ctx.r3.u64 = ctx.r28.u64 + ctx.r27.u64;
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r28,r29,r26
	ctx.r28.u64 = ctx.r26.u64 - ctx.r29.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82125E78;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r3,r29,r30
	ctx.r3.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8215e640
	ctx.lr = 0x82125E88;
	sub_8215E640(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// subf r11,r28,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r28.u64;
loc_82125E90:
	// stw r11,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82125E94:
	// lwz r11,4(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 4);
	// stw r11,4(r25)
	REX_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8212C528) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8212C530;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,118(r5)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r5.u32 + 118);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r28,56(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 56);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8212c6c8
	if (!ctx.cr6.gt) goto loc_8212C6C8;
	// lwz r9,456(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 456);
	// lwz r10,268(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 268);
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// addi r26,r10,-1
	ctx.r26.s64 = ctx.r10.s64 + -1;
	// sraw r30,r11,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r30.s64 = ctx.r11.s32 >> temp.u32;
	// cmpw cr6,r30,r26
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8212c578
	if (ctx.cr6.lt) goto loc_8212C578;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_8212C578:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C58C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212c6d0
	if (ctx.cr6.lt) goto loc_8212C6D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8212c654
	if (!ctx.cr6.lt) goto loc_8212C654;
loc_8212C5BC:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	REX_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
loc_8212C5CC:
	// fcfid f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f0.s64);
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// beq cr6,0x8212c5e4
	if (ctx.cr6.eq) goto loc_8212C5E4;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_8212C5E4:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stfsx f0,r11,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// lwz r10,484(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8212C600;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212c6d0
	if (ctx.cr6.lt) goto loc_8212C6D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// sth r11,202(r31)
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r11.u16);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x8212c644
	if (!ctx.cr6.lt) goto loc_8212C644;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,88(r1)
	REX_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x8212c5cc
	goto loc_8212C5CC;
loc_8212C644:
	// lhz r9,202(r31)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x8212c5bc
	if (ctx.cr6.lt) goto loc_8212C5BC;
loc_8212C654:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8212c6b4
	if (!ctx.cr6.lt) goto loc_8212C6B4;
loc_8212C660:
	// lwz r11,484(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 484);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8212C674;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8212c6d0
	if (ctx.cr6.lt) goto loc_8212C6D0;
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// sth r9,202(r31)
	REX_STORE_U16(ctx.r31.u32 + 202, ctx.r9.u16);
	// cmpw cr6,r9,r26
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8212c660
	if (ctx.cr6.lt) goto loc_8212C660;
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x8212c660
	if (ctx.cr6.lt) goto loc_8212C660;
loc_8212C6B4:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,268(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 268);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8212c6d0
	if (!ctx.cr6.gt) goto loc_8212C6D0;
loc_8212C6C8:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_8212C6D0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x8212c6f0
	if (!ctx.cr6.eq) goto loc_8212C6F0;
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// sth r11,490(r29)
	REX_STORE_U16(ctx.r29.u32 + 490, ctx.r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8212C6F0:
	// lhz r11,202(r31)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r31.u32 + 202);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// sth r9,490(r29)
	REX_STORE_U16(ctx.r29.u32 + 490, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82131D60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r17,20628(r23)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r23.u32 + 20628);
	// lwz r16,7520(r8)
	ctx.r16.u64 = REX_LOAD_U32(ctx.r8.u32 + 7520);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82131D70;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82374f34
	ctx.lr = 0x82131D90;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// b 0x82131dbc
	sub_82131DBC(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82131D68) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82131D70;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	REX_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x82374f34
	ctx.lr = 0x82131D90;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// b 0x82131dbc
	sub_82131DBC(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82133B38) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133B60;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82133B78;
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

DEFINE_REX_FUNC(sub_821343E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821343F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82134368
	ctx.lr = 0x82134400;
	sub_82134368(ctx, base);
	// lwz r30,212(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 212);
	// b 0x82134474
	goto loc_82134474;
loc_82134408:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82134424
	if (ctx.cr6.eq) goto loc_82134424;
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82134428
	goto loc_82134428;
loc_82134424:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82134428:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82134458
	if (ctx.cr6.eq) goto loc_82134458;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82134474
	if (!ctx.cr6.eq) goto loc_82134474;
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82134458
	if (ctx.cr6.eq) goto loc_82134458;
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82134474
	if (!ctx.cr6.eq) goto loc_82134474;
loc_82134458:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x8211a1b8
	ctx.lr = 0x82134460;
	sub_8211A1B8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82134474
	if (ctx.cr6.eq) goto loc_82134474;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82118bc8
	ctx.lr = 0x82134474;
	sub_82118BC8(ctx, base);
loc_82134474:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82134408
	if (!ctx.cr6.eq) goto loc_82134408;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82135758) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U16(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,357
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 357, ctx.xer);
	// bne cr6,0x821357a4
	if (!ctx.cr6.eq) goto loc_821357A4;
	// lhz r8,8(r11)
	ctx.r8.u64 = REX_LOAD_U16(ctx.r11.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// addi r9,r11,10
	ctx.r9.s64 = ctx.r11.s64 + 10;
loc_82135780:
	// lhzu r11,20(r9)
	ea = 20 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi r7,r11,24
	ctx.r7.u64 = ctx.r11.u32 & 0xFF;
	// rlwinm r11,r11,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFFFFFF;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// or r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 | ctx.r11.u64;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blt cr6,0x82135780
	if (ctx.cr6.lt) goto loc_82135780;
	// blr 
	return;
loc_821357A4:
	// cmplwi cr6,r10,358
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 358, ctx.xer);
	// beq cr6,0x821357b4
	if (ctx.cr6.eq) goto loc_821357B4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x821357bc
	if (!ctx.cr6.eq) goto loc_821357BC;
loc_821357B4:
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_821357BC:
	// lhz r11,2(r11)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x821357d0
	if (!ctx.cr6.eq) goto loc_821357D0;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_821357D0:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x821357e0
	if (!ctx.cr6.eq) goto loc_821357E0;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_821357E0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r10,-32193
	ctx.r10.s64 = -2109800448;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-25312
	ctx.r10.s64 = ctx.r10.s64 + -25312;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8213ACA0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8213ACA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r30,0(r3)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r11,-4
	ctx.r8.s64 = ctx.r11.s64 + -4;
	// lwz r27,20(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r26,32(r3)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8213ACD0:
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8213acd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213ACD0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8213ad18
	if (!ctx.cr6.eq) goto loc_8213AD18;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_8213ACF8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8213acf8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213ACF8;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8215ec60
	ctx.lr = 0x8213AD14;
	sub_8215EC60(ctx, base);
	// b 0x8213adb0
	goto loc_8213ADB0;
loc_8213AD18:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r7,6
	ctx.r7.s64 = 6;
	// lfs f13,0(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// lfs f12,4(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f10,4(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// fadds f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f9,8(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f7,8(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lfs f6,12(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// lfs f4,12(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// lfs f1,16(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,20(r10)
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f3,f1
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// lfs f12,20(r11)
	temp.u32 = REX_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fadds f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	REX_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f8,124(r1)
	temp.f32 = float(ctx.f8.f64);
	REX_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f5,128(r1)
	temp.f32 = float(ctx.f5.f64);
	REX_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f2,132(r1)
	temp.f32 = float(ctx.f2.f64);
	REX_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// stfs f13,136(r1)
	temp.f32 = float(ctx.f13.f64);
	REX_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	REX_STORE_U32(ctx.r1.u32 + 140, temp.u32);
loc_8213AD88:
	// lwzu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r11.u64 = REX_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8213ad88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213AD88;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_8213ADA4:
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x8213ada4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213ADA4;
loc_8213ADB0:
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvrx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v63.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvlx128 v62,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v62.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lvrx128 v60,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lvlx128 v59,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvrx128 v57,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvlx128 v56,r0,r5
	temp.u32 = ctx.r5.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v56.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvrx128 v55,r10,r4
	temp.u32 = ctx.r10.u32 + ctx.r4.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v55.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// rlwinm r6,r31,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// lvlx128 v54,r0,r3
	temp.u32 = ctx.r3.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v54.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v53,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v53.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r28,4
	ctx.r28.s64 = 4;
	// lvlx128 v52,r0,r9
	temp.u32 = ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v61,v62,v63
	simde_mm_store_si128((simde__m128i*)ctx.v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v62.u8), simde_mm_load_si128((simde__m128i*)ctx.v63.u8)));
	// lvrx128 v51,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v58,v59,v60
	simde_mm_store_si128((simde__m128i*)ctx.v58.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)ctx.v60.u8)));
	// lvlx128 v50,r0,r7
	temp.u32 = ctx.r7.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v57,v56,v57
	simde_mm_store_si128((simde__m128i*)ctx.v57.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)ctx.v57.u8)));
	// vor128 v12,v54,v55
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)ctx.v55.u8)));
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// vor128 v13,v52,v53
	simde_mm_store_si128((simde__m128i*)ctx.v13.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v52.u8), simde_mm_load_si128((simde__m128i*)ctx.v53.u8)));
	// vor128 v0,v50,v51
	simde_mm_store_si128((simde__m128i*)ctx.v0.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v50.u8), simde_mm_load_si128((simde__m128i*)ctx.v51.u8)));
	// beq cr6,0x8213aec8
	if (ctx.cr6.eq) goto loc_8213AEC8;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// ble cr6,0x8213b034
	if (!ctx.cr6.gt) goto loc_8213B034;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_8213AE48:
	// lvehx v11,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v11.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v12,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v61.f32)));
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// vperm v6,v11,v11,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsplth v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkhsb128 v49,v5,v96
	simde_mm_store_si128((simde__m128i*)ctx.v49.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcsxwfp128 v63,v49,15
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v49.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v48,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v48,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v48.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x8213ae98
	if (ctx.cr6.eq) goto loc_8213AE98;
	// lvlx128 v47,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v47.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v46,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v46.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v45,v47,v46
	simde_mm_store_si128((simde__m128i*)ctx.v45.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v47.u8), simde_mm_load_si128((simde__m128i*)ctx.v46.u8)));
	// lvlx128 v44,r0,r11
	temp.u32 = ctx.r11.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v44.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v44
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v63,v63,v45
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v45.f32)));
loc_8213AE98:
	// vpermwi128 v43,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v43.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// stvlx128 v63,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// rlwinm r9,r31,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xC;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stvewx128 v43,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne cr6,0x8213ae48
	if (!ctx.cr6.eq) goto loc_8213AE48;
loc_8213AEC8:
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// ble cr6,0x8213b034
	if (!ctx.cr6.gt) goto loc_8213B034;
	// rlwinm r29,r27,1,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFF8;
	// vaddfp128 v63,v61,v61
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v61.f32), simde_mm_load_ps(ctx.v61.f32)));
	// clrlwi r27,r27,30
	ctx.r27.u64 = ctx.r27.u32 & 0x3;
	// vaddfp128 v62,v58,v58
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v58.f32), simde_mm_load_ps(ctx.v58.f32)));
	// li r8,0
	ctx.r8.s64 = 0;
	// vaddfp128 v61,v57,v57
	simde_mm_store_ps(ctx.v61.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v57.f32), simde_mm_load_ps(ctx.v57.f32)));
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8213b030
	if (ctx.cr6.eq) goto loc_8213B030;
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r9,r31,864
	ctx.r9.s64 = ctx.r31.s64 + 864;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r7,80
	ctx.r7.s64 = 80;
loc_8213AF1C:
	// dcbt r3,r8
	// dcbt r0,r9
	// add r9,r8,r30
	ctx.r9.u64 = ctx.r8.u64 + ctx.r30.u64;
	// lvlx128 v42,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v42.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lvlx128 v41,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v41.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v42,v41,4,3
	simde_mm_store_ps(ctx.v42.f32, simde_mm_blend_ps(simde_mm_load_ps(ctx.v42.f32), simde_mm_permute_ps(simde_mm_load_ps(ctx.v41.f32), 57), 4));
	// vupkhsb128 v40,v42,v96
	simde_mm_store_si128((simde__m128i*)ctx.v40.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v42.s16), simde_mm_load_si128((simde__m128i*)ctx.v42.s16))));
	// vcsxwfp128 v60,v40,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v40.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v59,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v59.u8, simde_mm_load_si128((simde__m128i*)ctx.v60.u8));
	// vmrghw128 v11,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v11.u32, simde_mm_unpackhi_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// vmrglw128 v10,v60,v60
	simde_mm_store_si128((simde__m128i*)ctx.v10.u32, simde_mm_unpacklo_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), simde_mm_load_si128((simde__m128i*)ctx.v60.u32)));
	// beq cr6,0x8213afc4
	if (ctx.cr6.eq) goto loc_8213AFC4;
	// vspltw128 v9,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v9.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// lvx128 v8,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v7,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v7.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v6,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw128 v5,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v5.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// lvx128 v3,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v3.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vspltw v4,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v4.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmaddfp v9,v9,v0,v8
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v9.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v8.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v11,v13,v8
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v8.f32)));
	// vmaddfp v8,v7,v12,v6
	simde_mm_store_ps(ctx.v8.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v7.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// lvx128 v6,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// lvx128 v7,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v9,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v8,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v8.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vmaddfp v11,v10,v13,v6
	simde_mm_store_ps(ctx.v11.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v13.f32)), simde_mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v5,v0,v7
	simde_mm_store_ps(ctx.v9.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v5.f32), simde_mm_load_ps(ctx.v0.f32)), simde_mm_load_ps(ctx.v7.f32)));
	// vmaddfp v10,v4,v12,v3
	simde_mm_store_ps(ctx.v10.f32, simde_mm_add_ps(simde_mm_mul_ps(simde_mm_load_ps(ctx.v4.f32), simde_mm_load_ps(ctx.v12.f32)), simde_mm_load_ps(ctx.v3.f32)));
	// vaddfp128 v0,v0,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v13,v13,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v12,v12,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v11,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v11.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v9,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v9.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v10.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// b 0x8213b01c
	goto loc_8213B01C;
loc_8213AFC4:
	// vaddfp128 v39,v13,v62
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v39.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vspltw128 v34,v59,2
	simde_mm_store_si128((simde__m128i*)ctx.v34.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v59.u32), 0x55));
	// vaddfp128 v37,v0,v61
	simde_mm_store_ps(ctx.v37.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v61.f32)));
	// vspltw128 v38,v60,0
	simde_mm_store_si128((simde__m128i*)ctx.v38.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v60.u32), 0xFF));
	// vaddfp128 v35,v12,v63
	simde_mm_store_ps(ctx.v35.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v12.f32), simde_mm_load_ps(ctx.v63.f32)));
	// vspltw128 v36,v11,2
	simde_mm_store_si128((simde__m128i*)ctx.v36.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v11.u32), 0x55));
	// vspltw128 v33,v10,2
	simde_mm_store_si128((simde__m128i*)ctx.v33.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v10.u32), 0x55));
	// vmulfp128 v32,v11,v13
	simde_mm_store_ps(ctx.v32.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v11.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v60,v38,v0
	simde_mm_store_ps(ctx.v60.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v38.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v59,v36,v12
	simde_mm_store_ps(ctx.v59.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v36.f32), simde_mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v56,v10,v39
	simde_mm_store_ps(ctx.v56.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v10.f32), simde_mm_load_ps(ctx.v39.f32)));
	// vmulfp128 v55,v34,v37
	simde_mm_store_ps(ctx.v55.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v34.f32), simde_mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v54,v33,v35
	simde_mm_store_ps(ctx.v54.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v33.f32), simde_mm_load_ps(ctx.v35.f32)));
	// stvx128 v32,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v32.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v13,v39,v62
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v39.f32), simde_mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v0,v37,v61
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v37.f32), simde_mm_load_ps(ctx.v61.f32)));
	// stvx128 v60,r0,r31
	ea = (ctx.r31.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// vaddfp128 v12,v35,v63
	simde_mm_store_ps(ctx.v12.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v35.f32), simde_mm_load_ps(ctx.v63.f32)));
	// stvx128 v59,r31,r4
	ea = (ctx.r31.u32 + ctx.r4.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v59.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v56,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v56.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v55,r31,r5
	ea = (ctx.r31.u32 + ctx.r5.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v55.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r7
	ea = (ctx.r31.u32 + ctx.r7.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)REX_RAW_ADDR(ea), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v54.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
loc_8213B01C:
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// addi r9,r31,864
	ctx.r9.s64 = ctx.r31.s64 + 864;
	// bdnz 0x8213af1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213AF1C;
loc_8213B030:
	// add r30,r29,r30
	ctx.r30.u64 = ctx.r29.u64 + ctx.r30.u64;
loc_8213B034:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8213b0b0
	if (ctx.cr6.eq) goto loc_8213B0B0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_8213B040:
	// lvehx v12,r0,r30
	ea = (ctx.r30.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v12.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v7.u8, simde_mm_load_si128((simde__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm v6,v12,v12,v7
	simde_mm_store_si128((simde__m128i*)ctx.v6.u8, rex::ppc::simde_mm_perm_epi8_(simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v12.u8), simde_mm_load_si128((simde__m128i*)ctx.v7.u8)));
	// vsplth v5,v6,0
	simde_mm_store_si128((simde__m128i*)ctx.v5.u16, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)ctx.v6.u16), simde_mm_set1_epi16(short(0xF0E))));
	// vupkhsb128 v53,v5,v96
	simde_mm_store_si128((simde__m128i*)ctx.v53.s32, simde_mm_cvtepi16_epi32(simde_mm_unpackhi_epi64(simde_mm_load_si128((simde__m128i*)ctx.v5.s16), simde_mm_load_si128((simde__m128i*)ctx.v5.s16))));
	// vcsxwfp128 v63,v53,15
	ctx.fpscr.enableFlushMode();
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_cvtepi32_ps(simde_mm_load_si128((simde__m128i*)ctx.v53.u32)), simde_mm_castsi128_ps(simde_mm_set1_epi32(int(0x38000000)))));
	// vor128 v52,v63,v63
	simde_mm_store_si128((simde__m128i*)ctx.v52.u8, simde_mm_load_si128((simde__m128i*)ctx.v63.u8));
	// vmulfp128 v63,v63,v0
	simde_mm_store_ps(ctx.v63.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v0,v0,v57
	simde_mm_store_ps(ctx.v0.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v0.f32), simde_mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v62,v52,v13
	simde_mm_store_ps(ctx.v62.f32, simde_mm_mul_ps(simde_mm_load_ps(ctx.v52.f32), simde_mm_load_ps(ctx.v13.f32)));
	// vaddfp128 v13,v13,v58
	simde_mm_store_ps(ctx.v13.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v13.f32), simde_mm_load_ps(ctx.v58.f32)));
	// beq cr6,0x8213b08c
	if (ctx.cr6.eq) goto loc_8213B08C;
	// lvlx128 v51,r0,r31
	temp.u32 = ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v51.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v50.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v49,v51,v50
	simde_mm_store_si128((simde__m128i*)ctx.v49.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)ctx.v51.u8), simde_mm_load_si128((simde__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	simde_mm_store_si128((simde__m128i*)ctx.v48.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(temp.u32 & ~0xF)), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v62,v62,v48
	simde_mm_store_ps(ctx.v62.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v62.f32), simde_mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v63,v63,v49
	simde_mm_store_ps(ctx.v63.f32, simde_mm_add_ps(simde_mm_load_ps(ctx.v63.f32), simde_mm_load_ps(ctx.v49.f32)));
loc_8213B08C:
	// vpermwi128 v47,v62,17
	simde_mm_store_si128((simde__m128i*)ctx.v47.u32, simde_mm_shuffle_epi32(simde_mm_load_si128((simde__m128i*)ctx.v62.u32), 0xEE));
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stvlx128 v63,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		REX_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// stvrx128 v63,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		REX_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// stvewx128 v47,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v47,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x3;
	REX_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x8213b040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8213B040;
loc_8213B0B0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8214F720) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8214f730
	if (!ctx.cr6.eq) goto loc_8214F730;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// blt cr6,0x8214f8b0
	if (ctx.cr6.lt) goto loc_8214F8B0;
loc_8214F730:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bgt cr6,0x8214f8b0
	if (ctx.cr6.gt) goto loc_8214F8B0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8214f8b0
	if (!ctx.cr6.gt) goto loc_8214F8B0;
	// cmpwi cr6,r3,8000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8000, ctx.xer);
	// bgt cr6,0x8214f750
	if (ctx.cr6.gt) goto loc_8214F750;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F750:
	// cmpwi cr6,r3,11025
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11025, ctx.xer);
	// bgt cr6,0x8214f760
	if (ctx.cr6.gt) goto loc_8214F760;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F760:
	// cmpwi cr6,r3,16000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 16000, ctx.xer);
	// bgt cr6,0x8214f770
	if (ctx.cr6.gt) goto loc_8214F770;
	// li r11,512
	ctx.r11.s64 = 512;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F770:
	// cmpwi cr6,r3,22050
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22050, ctx.xer);
	// bgt cr6,0x8214f780
	if (ctx.cr6.gt) goto loc_8214F780;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F780:
	// cmpwi cr6,r3,32000
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 32000, ctx.xer);
	// bgt cr6,0x8214f798
	if (ctx.cr6.gt) goto loc_8214F798;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x8214f7c0
	if (!ctx.cr6.eq) goto loc_8214F7C0;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x8214f834
	goto loc_8214F834;
loc_8214F798:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,44100
	ctx.r10.u64 = ctx.r11.u64 | 44100;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8214f7b0
	if (ctx.cr6.gt) goto loc_8214F7B0;
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F7B0:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,48000
	ctx.r10.u64 = ctx.r11.u64 | 48000;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8214f7c8
	if (ctx.cr6.gt) goto loc_8214F7C8;
loc_8214F7C0:
	// li r11,2048
	ctx.r11.s64 = 2048;
	// b 0x8214f7e0
	goto loc_8214F7E0;
loc_8214F7C8:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r10,r11,30464
	ctx.r10.u64 = ctx.r11.u64 | 30464;
	// li r11,4096
	ctx.r11.s64 = 4096;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8214f7e0
	if (!ctx.cr6.gt) goto loc_8214F7E0;
	// li r11,8192
	ctx.r11.s64 = 8192;
loc_8214F7E0:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x8214f830
	if (!ctx.cr6.eq) goto loc_8214F830;
	// rlwinm r10,r6,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x6;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8214f800
	if (!ctx.cr6.eq) goto loc_8214F800;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8214F800:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bne cr6,0x8214f818
	if (!ctx.cr6.eq) goto loc_8214F818;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8214F818:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x8214f8a8
	if (!ctx.cr6.eq) goto loc_8214F8A8;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8214F830:
	// bge cr6,0x8214f8a8
	if (!ctx.cr6.lt) goto loc_8214F8A8;
loc_8214F834:
	// srawi r10,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 1;
	// mullw r8,r11,r4
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r7,r9,7
	ctx.r7.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r7,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8214f878
	if (!ctx.cr6.eq) goto loc_8214F878;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x8214f888
	if (!ctx.cr6.eq) goto loc_8214F888;
	// mullw r9,r11,r3
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
loc_8214F878:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bgt cr6,0x8214f8a8
	if (ctx.cr6.gt) goto loc_8214F8A8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8214f8a8
	if (!ctx.cr6.eq) goto loc_8214F8A8;
loc_8214F888:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r11,r4
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// divwu r9,r9,r3
	ctx.r9.u64 = uint32_t(ctx.r3.u32 ? ctx.r9.u32 / ctx.r3.u32 : 0);
	// addi r8,r9,7
	ctx.r8.s64 = ctx.r9.s64 + 7;
	// rlwinm r7,r8,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8214f888
	if (ctx.cr6.eq) goto loc_8214F888;
loc_8214F8A8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
loc_8214F8B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82151670) {
	REX_FUNC_PROLOGUE();
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82152788) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82152790;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,184(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 184);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-2956
	ctx.r11.s64 = ctx.r11.s64 + -2956;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x821527cc
	if (ctx.cr6.eq) goto loc_821527CC;
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821527c8
	if (ctx.cr6.eq) goto loc_821527C8;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// b 0x821527cc
	goto loc_821527CC;
loc_821527C8:
	// bl 0x82118bc8
	ctx.lr = 0x821527CC;
	sub_82118BC8(ctx, base);
loc_821527CC:
	// addi r29,r31,132
	ctx.r29.s64 = ctx.r31.s64 + 132;
	// b 0x821527ec
	goto loc_821527EC;
loc_821527D4:
	// lwz r11,36(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821527e8
	if (ctx.cr6.eq) goto loc_821527E8;
	// stw r28,36(r3)
	REX_STORE_U32(ctx.r3.u32 + 36, ctx.r28.u32);
	// b 0x821527ec
	goto loc_821527EC;
loc_821527E8:
	// bl 0x82118bc8
	ctx.lr = 0x821527EC;
	sub_82118BC8(ctx, base);
loc_821527EC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82151c10
	ctx.lr = 0x821527F4;
	sub_82151C10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x821527d4
	if (!ctx.cr0.eq) goto loc_821527D4;
	// lwz r3,252(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 252);
	// addi r30,r31,252
	ctx.r30.s64 = ctx.r31.s64 + 252;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215281c
	if (ctx.cr6.eq) goto loc_8215281C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8215281C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8215281C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x821517d8
	ctx.lr = 0x82152824;
	sub_821517D8(ctx, base);
	// addi r3,r31,256
	ctx.r3.s64 = ctx.r31.s64 + 256;
	// bl 0x821517d8
	ctx.lr = 0x8215282C;
	sub_821517D8(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82152840
	if (ctx.cr6.eq) goto loc_82152840;
	// bl 0x82118bc8
	ctx.lr = 0x8215283C;
	sub_82118BC8(ctx, base);
	// stw r28,120(r31)
	REX_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
loc_82152840:
	// stw r28,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821525e8
	ctx.lr = 0x8215284C;
	sub_821525E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215c2f8
	ctx.lr = 0x82152854;
	sub_8215C2F8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82156E78) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// std r7,48(r1)
	REX_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,56(r1)
	REX_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// lwz r9,52(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 52);
	// slw r10,r3,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 6;
	// lwzx r7,r8,r6
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82156ec8
	if (ctx.cr6.lt) goto loc_82156EC8;
loc_82156EA4:
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r4)
	REX_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r7,r6
	ctx.r3.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82156ea4
	if (!ctx.cr6.lt) goto loc_82156EA4;
loc_82156EC8:
	// lwz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,56(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 56);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r9,6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 6, ctx.xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// ble cr6,0x82156f08
	if (!ctx.cr6.gt) goto loc_82156F08;
	// addi r10,r9,-7
	ctx.r10.s64 = ctx.r9.s64 + -7;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r9,-6
	ctx.r7.s64 = ctx.r9.s64 + -6;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sraw r3,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r3.s64 = ctx.r6.s32 >> temp.u32;
	// b 0x82156f10
	goto loc_82156F10;
loc_82156F08:
	// subfic r10,r9,6
	ctx.xer.ca = ctx.r9.u32 <= 6;
	ctx.r10.u64 = static_cast<uint64_t>(6) - ctx.r9.u64;
	// slw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
loc_82156F10:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215B690) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8215B6A0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8215b6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8215B6A0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215B738) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8215B740;
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
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x8215b6b0
	ctx.lr = 0x8215B760;
	sub_8215B6B0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bgt cr6,0x8215b774
	if (ctx.cr6.gt) goto loc_8215B774;
	// neg r10,r30
	ctx.r10.s64 = static_cast<int64_t>(-ctx.r30.u64);
loc_8215B774:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,34464
	ctx.r11.u64 = ctx.r11.u64 | 34464;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8215b924
	if (ctx.cr6.gt) goto loc_8215B924;
	// srawi r10,r29,31
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 31;
	// xor r9,r29,r10
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r10.u64;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x8215b924
	if (ctx.cr6.gt) goto loc_8215B924;
	// subf r11,r30,r29
	ctx.r11.u64 = ctx.r29.u64 - ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bgt cr6,0x8215b924
	if (ctx.cr6.gt) goto loc_8215B924;
	// subf. r10,r30,r11
	ctx.r10.u64 = ctx.r11.u64 - ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8215b924
	if (!ctx.cr0.gt) goto loc_8215B924;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8215b924
	if (!ctx.cr6.gt) goto loc_8215B924;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821407f0
	ctx.lr = 0x8215B7C4;
	sub_821407F0(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215b7e4
	if (!ctx.cr6.eq) goto loc_8215B7E4;
loc_8215B7D0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8215B7E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x8215B7F4;
	sub_8215EC60(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8215b838
	if (!ctx.cr6.gt) goto loc_8215B838;
	// addi r10,r28,-8
	ctx.r10.s64 = ctx.r28.s64 + -8;
loc_8215B808:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lfdu f0,8(r10)
	ctx.fpscr.disableFlushMode();
	ea = 8 + ctx.r10.u32;
	ctx.f0.u64 = REX_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// subf r9,r11,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r6,r8
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r6.u32 + ctx.r8.u32, temp.u32);
	// lwz r5,8(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x8215b808
	if (ctx.cr6.lt) goto loc_8215B808;
loc_8215B838:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x821407f0
	ctx.lr = 0x8215B848;
	sub_821407F0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x8215b7d0
	if (ctx.cr6.eq) goto loc_8215B7D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8215ec60
	ctx.lr = 0x8215B868;
	sub_8215EC60(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addic. r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfs f31,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f31.f64 = double(temp.f32);
	// ble 0x8215b8a4
	if (!ctx.cr0.gt) goto loc_8215B8A4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215B884:
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8215b884
	if (ctx.cr6.lt) goto loc_8215B884;
loc_8215B8A4:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8215b908
	if (!ctx.cr6.lt) goto loc_8215B908;
	// mulli r3,r11,-4
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-4));
	// bl 0x821407f0
	ctx.lr = 0x8215B8B8;
	sub_821407F0(ctx, base);
	// stw r3,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8215b7d0
	if (ctx.cr6.eq) goto loc_8215B7D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r11,-4
	ctx.r5.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(-4));
	// bl 0x8215ec60
	ctx.lr = 0x8215B8D4;
	sub_8215EC60(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// neg. r9,r10
	ctx.r9.s64 = static_cast<int64_t>(-ctx.r10.u64);
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x8215b908
	if (!ctx.cr0.gt) goto loc_8215B908;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8215B8E8:
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f31,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	REX_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// neg r7,r8
	ctx.r7.s64 = static_cast<int64_t>(-ctx.r8.u64);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8215b8e8
	if (ctx.cr6.lt) goto loc_8215B8E8;
loc_8215B908:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
loc_8215B924:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(__savegprlr_24) {
	REX_FUNC_PROLOGUE();
	// std r24,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r24.u64);
	// std r25,-64(r1)
	REX_STORE_U64(ctx.r1.u32 + -64, ctx.r25.u64);
	// std r26,-56(r1)
	REX_STORE_U64(ctx.r1.u32 + -56, ctx.r26.u64);
	// std r27,-48(r1)
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.r27.u64);
	// std r28,-40(r1)
	REX_STORE_U64(ctx.r1.u32 + -40, ctx.r28.u64);
	// std r29,-32(r1)
	REX_STORE_U64(ctx.r1.u32 + -32, ctx.r29.u64);
	// std r30,-24(r1)
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restgprlr_14) {
	REX_FUNC_PROLOGUE();
	// ld r14,-152(r1)
	ctx.r14.u64 = REX_LOAD_U64(ctx.r1.u32 + -152);
	// ld r15,-144(r1)
	ctx.r15.u64 = REX_LOAD_U64(ctx.r1.u32 + -144);
	// ld r16,-136(r1)
	ctx.r16.u64 = REX_LOAD_U64(ctx.r1.u32 + -136);
	// ld r17,-128(r1)
	ctx.r17.u64 = REX_LOAD_U64(ctx.r1.u32 + -128);
	// ld r18,-120(r1)
	ctx.r18.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// ld r19,-112(r1)
	ctx.r19.u64 = REX_LOAD_U64(ctx.r1.u32 + -112);
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

DEFINE_REX_FUNC(__savefpr_22) {
	REX_FUNC_PROLOGUE();
	// stfd f22,-80(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -80, ctx.f22.u64);
	// stfd f23,-72(r12)
	REX_STORE_U64(ctx.r12.u32 + -72, ctx.f23.u64);
	// stfd f24,-64(r12)
	REX_STORE_U64(ctx.r12.u32 + -64, ctx.f24.u64);
	// stfd f25,-56(r12)
	REX_STORE_U64(ctx.r12.u32 + -56, ctx.f25.u64);
	// stfd f26,-48(r12)
	REX_STORE_U64(ctx.r12.u32 + -48, ctx.f26.u64);
	// stfd f27,-40(r12)
	REX_STORE_U64(ctx.r12.u32 + -40, ctx.f27.u64);
	// stfd f28,-32(r12)
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

DEFINE_REX_FUNC(__savefpr_31) {
	REX_FUNC_PROLOGUE();
	// stfd f31,-8(r12)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r12.u32 + -8, ctx.f31.u64);
	// blr 
	return;
}

DEFINE_REX_FUNC(__restfpr_20) {
	REX_FUNC_PROLOGUE();
	// lfd f20,-96(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f20.u64 = REX_LOAD_U64(ctx.r12.u32 + -96);
	// lfd f21,-88(r12)
	ctx.f21.u64 = REX_LOAD_U64(ctx.r12.u32 + -88);
	// lfd f22,-80(r12)
	ctx.f22.u64 = REX_LOAD_U64(ctx.r12.u32 + -80);
	// lfd f23,-72(r12)
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

DEFINE_REX_FUNC(sub_8215F318) {
	REX_FUNC_PROLOGUE();
	// fctidz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = std::isnan(ctx.f1.f64) ? int64_t(0x8000000000000000ULL) : (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fabs f11,f1
	ctx.f11.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lfd f13,-9888(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// lfd f0,12656(r10)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r10.u32 + 12656);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fsub f0,f0,f11
	ctx.f0.f64 = ctx.f0.f64 - ctx.f11.f64;
	// fneg f11,f11
	ctx.f11.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// fsub f10,f12,f1
	ctx.f10.f64 = ctx.f12.f64 - ctx.f1.f64;
	// fadd f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 + ctx.f13.f64;
	// fsel f13,f10,f12,f13
	ctx.f13.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f13.f64;
	// fsel f0,f0,f13,f1
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f13.f64 : ctx.f1.f64;
	// fsel f1,f11,f1,f0
	ctx.f1.f64 = ctx.f11.f64 >= 0.0 ? ctx.f1.f64 : ctx.f0.f64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8215F9D0) {
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
	// lis r30,-32193
	ctx.r30.s64 = -2109800448;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-24656(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24656);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8215fa24
	if (ctx.cr6.eq) goto loc_8215FA24;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8215fa10
	if (!ctx.cr6.eq) goto loc_8215FA10;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82375364
	ctx.lr = 0x8215FA08;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-24656(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -24656);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_8215FA10:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82375374
	ctx.lr = 0x8215FA1C;
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8215f910
	ctx.lr = 0x8215FA24;
	sub_8215F910(ctx, base);
loc_8215FA24:
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

DEFINE_REX_FUNC(sub_82160B80) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// cmplwi r5,8
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt 0x82160bd8
	if (ctx.cr0.lt) goto loc_82160BD8;
	// li r0,7
	ctx.r0.s64 = 7;
	// rlwinm r7,r5,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFF;
	// and r0,r5,r0
	ctx.r0.u64 = ctx.r5.u64 & ctx.r0.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// ld r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// ld r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82160bac
	goto loc_82160BAC;
loc_82160BA4:
	// ldu r6,8(r4)
	ea = 8 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U64(ea);
	ctx.r4.u32 = ea;
	// ldu r5,8(r3)
	ea = 8 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U64(ea);
	ctx.r3.u32 = ea;
loc_82160BAC:
	// cmpd r5,r6
	ctx.cr0.compare<int64_t>(ctx.r5.s64, ctx.r6.s64, ctx.xer);
	// bdnzt eq,0x82160ba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_82160BA4;
	// beq 0x82160bcc
	if (ctx.cr0.eq) goto loc_82160BCC;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmpld r5,r6
	ctx.cr0.compare<uint64_t>(ctx.r5.u64, ctx.r6.u64, ctx.xer);
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82160BCC:
	// mr r5,r0
	ctx.r5.u64 = ctx.r0.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82160BD8:
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// beq 0x82160c08
	if (ctx.cr0.eq) goto loc_82160C08;
	// lbz r6,0(r4)
	ctx.r6.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// lbz r5,0(r3)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x82160bf8
	goto loc_82160BF8;
loc_82160BF0:
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = REX_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// lbzu r5,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r5.u64 = REX_LOAD_U8(ea);
	ctx.r3.u32 = ea;
loc_82160BF8:
	// cmpw r5,r6
	ctx.cr0.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bdnzt eq,0x82160bf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0 && ctx.cr0.eq) goto loc_82160BF0;
	// subf r3,r6,r5
	ctx.r3.u64 = ctx.r5.u64 - ctx.r6.u64;
	// blr 
	return;
loc_82160C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(__savevmx_27) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__savevmx_69) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
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

DEFINE_REX_FUNC(__restvmx_74) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v74.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v75.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	ea = (ctx.r11.u32 + ctx.r12.u32) & ~0xF;
	simde_mm_store_si128((simde__m128i*)ctx.v76.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)REX_RAW_ADDR(ea)), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
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

DEFINE_REX_FUNC(sub_82164C60) {
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
	// addi r11,r11,-23456
	ctx.r11.s64 = ctx.r11.s64 + -23456;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82164cb0
	if (ctx.cr6.lt) goto loc_82164CB0;
	// addi r10,r11,608
	ctx.r10.s64 = ctx.r11.s64 + 608;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82164cb0
	if (ctx.cr6.gt) goto loc_82164CB0;
	// subf r11,r11,r3
	ctx.r11.u64 = ctx.r3.u64 - ctx.r11.u64;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82164530
	ctx.lr = 0x82164CA0;
	sub_82164530(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82164cb8
	goto loc_82164CB8;
loc_82164CB0:
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x823751a4
	ctx.lr = 0x82164CB8;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82164CB8:
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

DEFINE_REX_FUNC(sub_82166440) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	REX_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x823753b4
	ctx.lr = 0x82166458;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = REX_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167270) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x821642b0
	ctx.lr = 0x82167284;
	sub_821642B0(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = REX_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82167590) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// lwz r10,-31596(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -31596);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821675b4
	if (!ctx.cr6.eq) goto loc_821675B4;
	// lis r8,-32189
	ctx.r8.s64 = -2109538304;
	// li r10,-3
	ctx.r10.s64 = -3;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,-31596(r11)
	REX_STORE_U32(ctx.r11.u32 + -31596, ctx.r9.u32);
	// stw r10,21708(r8)
	REX_STORE_U32(ctx.r8.u32 + 21708, ctx.r10.u32);
loc_821675B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82169BE0) {
	REX_FUNC_PROLOGUE();
	// srawi r11,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 5;
	// lis r10,-32188
	ctx.r10.s64 = -2109472768;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-31872
	ctx.r10.s64 = ctx.r10.s64 + -31872;
	// clrlwi r11,r3,27
	ctx.r11.u64 = ctx.r3.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(72));
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// b 0x82375194
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8216A150) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8216A158;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r30,8(r5)
	REX_STORE_U32(ctx.r5.u32 + 8, ctx.r30.u32);
	// li r27,16462
	ctx.r27.s64 = 16462;
	// stw r30,4(r5)
	REX_STORE_U32(ctx.r5.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r30,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r30.u32);
	// beq cr6,0x8216a340
	if (ctx.cr6.eq) goto loc_8216A340;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_8216A184:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8215e640
	ctx.lr = 0x8216A194;
	sub_8215E640(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r10,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r7,88(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rotlwi r5,r6,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r6.u32);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r6,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0x1;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r10,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r10,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// or r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 | ctx.r4.u64;
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r8,r11,r7
	ctx.r8.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216a210
	if (ctx.cr6.lt) goto loc_8216A210;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8216a214
	if (!ctx.cr6.lt) goto loc_8216A214;
loc_8216A210:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8216A214:
	// stw r8,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216a250
	if (ctx.cr6.eq) goto loc_8216A250;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216a238
	if (ctx.cr6.lt) goto loc_8216A238;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8216a23c
	if (!ctx.cr6.lt) goto loc_8216A23C;
loc_8216A238:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8216A23C:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216a250
	if (ctx.cr6.eq) goto loc_8216A250;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8216A250:
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8216a270
	if (ctx.cr6.lt) goto loc_8216A270;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x8216a274
	if (!ctx.cr6.lt) goto loc_8216A274;
loc_8216A270:
	// li r9,1
	ctx.r9.s64 = 1;
loc_8216A274:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x8216a28c
	if (ctx.cr6.eq) goto loc_8216A28C;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8216A28C:
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r11,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r6,4(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r6,r10,r7
	ctx.r6.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r9,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8216a2e8
	if (ctx.cr6.lt) goto loc_8216A2E8;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8216a2ec
	if (!ctx.cr6.lt) goto loc_8216A2EC;
loc_8216A2E8:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8216A2EC:
	// stw r10,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8216a328
	if (ctx.cr6.eq) goto loc_8216A328;
	// addi r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8216a310
	if (ctx.cr6.lt) goto loc_8216A310;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x8216a314
	if (!ctx.cr6.lt) goto loc_8216A314;
loc_8216A310:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8216A314:
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8216a328
	if (ctx.cr6.eq) goto loc_8216A328;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8216A328:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bne 0x8216a184
	if (!ctx.cr0.eq) goto loc_8216A184;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8216a3cc
	if (!ctx.cr6.eq) goto loc_8216A3CC;
loc_8216A340:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// addis r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 65536;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8216a340
	if (ctx.cr6.eq) goto loc_8216A340;
	// b 0x8216a3cc
	goto loc_8216A3CC;
loc_8216A388:
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r27,16
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFF;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r9,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// lwz r7,0(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r9,r7,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8216A3CC:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8216a388
	if (ctx.cr0.eq) goto loc_8216A388;
	// sth r27,0(r31)
	REX_STORE_U16(ctx.r31.u32 + 0, ctx.r27.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82172C50) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(9936));
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r4,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r4.u32);
	// stw r5,108(r11)
	REX_STORE_U32(ctx.r11.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821733C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3cc
	ctx.lr = 0x821733D0;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,768
	ctx.r9.s64 = 768;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,24
	ctx.r7.s64 = 24;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r29,r6,22040
	ctx.r29.s64 = ctx.r6.s64 + 22040;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x82173428;
	sub_8215E640(ctx, base);
	// addi r11,r30,96
	ctx.r11.s64 = ctx.r30.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = ctx.r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x8217345C;
	sub_8215E640(ctx, base);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	ctx.r22.s64 = 524288;
	// lis r29,1
	ctx.r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r28,768
	ctx.r28.s64 = 768;
	// li r27,8978
	ctx.r27.s64 = 8978;
	// ori r30,r30,65535
	ctx.r30.u64 = ctx.r30.u64 | 65535;
	// li r26,8205
	ctx.r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// li r25,8704
	ctx.r25.s64 = 8704;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	ctx.r23.s64 = 8832;
	// li r21,8962
	ctx.r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	ctx.r22.u64 = ctx.r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	ctx.r20.s64 = 131072;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r20,r20,8320
	ctx.r20.u64 = ctx.r20.u64 | 8320;
	// li r18,0
	ctx.r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// lis r17,16
	ctx.r17.s64 = 1048576;
	// ori r29,r17,16
	ctx.r29.u64 = ctx.r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r25.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r5.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r23.u32);
	ctx.r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r22.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r20.u32);
	ctx.r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r19.u32);
	ctx.r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r18.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// subf r11,r31,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r31.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r3,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e41c
	__restgprlr_17(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82177268) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x82177270;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,19900(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82177440
	if (ctx.cr6.lt) goto loc_82177440;
	// lwz r11,19904(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821772a0
	if (!ctx.cr6.eq) goto loc_821772A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82177440
	goto loc_82177440;
loc_821772A0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,19892(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 19892);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r25,24(r26)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lis r8,4138
	ctx.r8.s64 = 271187968;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// ori r8,r8,4352
	ctx.r8.u64 = ctx.r8.u64 | 4352;
	// std r29,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// std r29,16(r11)
	REX_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// rlwimi r8,r10,31,26,26
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// std r29,24(r11)
	REX_STORE_U64(ctx.r11.u32 + 24, ctx.r29.u64);
	// stw r29,32(r11)
	REX_STORE_U32(ctx.r11.u32 + 32, ctx.r29.u32);
	// or r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r31,r26,20
	ctx.r31.s64 = ctx.r26.s64 + 20;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// andi. r10,r10,222
	ctx.r10.u64 = ctx.r10.u64 & 222;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82172390
	ctx.lr = 0x82177304;
	sub_82172390(ctx, base);
	// lwz r11,19924(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19924);
	// rlwinm. r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82177328
	if (ctx.cr0.eq) goto loc_82177328;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19920(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 19920);
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bl 0x82172390
	ctx.lr = 0x82177328;
	sub_82172390(ctx, base);
loc_82177328:
	// lwz r11,19912(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19912);
	// rlwinm. r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82177364
	if (ctx.cr0.eq) goto loc_82177364;
	// stw r28,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r25,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r25.u64;
	// stw r11,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82172390
	ctx.lr = 0x82177354;
	sub_82172390(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,19908(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 19908);
	// bl 0x82172390
	ctx.lr = 0x82177364;
	sub_82172390(ctx, base);
loc_82177364:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// addi r28,r1,116
	ctx.r28.s64 = ctx.r1.s64 + 116;
	// addi r29,r30,368
	ctx.r29.s64 = ctx.r30.s64 + 368;
loc_82177370:
	// lwz r11,9564(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 9564);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8217739c
	if (!ctx.cr6.eq) goto loc_8217739C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82175710
	ctx.lr = 0x82177390;
	sub_82175710(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8217739c
	if (!ctx.cr0.lt) goto loc_8217739C;
	// stw r3,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r3.u32);
loc_8217739C:
	// lwz r11,-240(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + -240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821773d0
	if (ctx.cr6.eq) goto loc_821773D0;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addic r10,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r10.s64 = ctx.r27.s64 + -1;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// subfe r5,r10,r27
	temp.u8 = (~ctx.r10.u32 + ctx.r27.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r27.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r10.u64 + ctx.r27.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r29,-352
	ctx.r3.s64 = ctx.r29.s64 + -352;
	// stw r11,4(r28)
	REX_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// bl 0x82176888
	ctx.lr = 0x821773C4;
	sub_82176888(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821773d0
	if (!ctx.cr0.lt) goto loc_821773D0;
	// stw r3,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r3.u32);
loc_821773D0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// addi r29,r29,9936
	ctx.r29.s64 = ctx.r29.s64 + 9936;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x82177370
	if (ctx.cr6.lt) goto loc_82177370;
	// lwz r11,19952(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 19952);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r29,4(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// stw r25,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// stw r10,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	REX_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82172390
	ctx.lr = 0x8217741C;
	sub_82172390(ctx, base);
	// stw r29,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82177438
	if (ctx.cr6.lt) goto loc_82177438;
	// lwz r11,36(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x8217743c
	if (!ctx.cr6.lt) goto loc_8217743C;
loc_82177438:
	// stw r11,19900(r30)
	REX_STORE_U32(ctx.r30.u32 + 19900, ctx.r11.u32);
loc_8217743C:
	// lwz r3,19900(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 19900);
loc_82177440:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217D870) {
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
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// addi r4,r11,23040
	ctx.r4.s64 = ctx.r11.s64 + 23040;
	// bl 0x8215e640
	ctx.lr = 0x8217D890;
	sub_8215E640(ctx, base);
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

DEFINE_REX_FUNC(sub_8217E0A8) {
	REX_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8217e0b8
	if (!ctx.cr6.eq) goto loc_8217E0B8;
	// blr 
	return;
loc_8217E0B8:
	// b 0x82181178
	sub_82181178(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8217F8E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8217F8F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,21748(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 21748);
	// stw r4,156(r1)
	REX_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	REX_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f934
	if (ctx.cr6.eq) goto loc_8217F934;
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// lwz r11,21796(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 21796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8217f934
	if (!ctx.cr6.eq) goto loc_8217F934;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F934;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217F934:
	// lwz r11,23576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f958
	if (ctx.cr6.eq) goto loc_8217F958;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,156
	ctx.r4.s64 = ctx.r1.s64 + 156;
	// li r3,1
	ctx.r3.s64 = 1;
	// bctrl 
	ctx.lr = 0x8217F958;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217F958:
	// lwz r30,10956(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 10956);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r29,15112(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 15112);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,164(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r28,15108(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 15108);
	// bl 0x8217f838
	ctx.lr = 0x8217F974;
	sub_8217F838(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8217f9b4
	if (ctx.cr6.eq) goto loc_8217F9B4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8217F988:
	// lwz r9,156(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 156);
	// rlwinm r8,r30,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// and r30,r7,r29
	ctx.r30.u64 = ctx.r7.u64 & ctx.r29.u64;
	// lwzx r9,r10,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r8,r28
	REX_STORE_U32(ctx.r8.u32 + ctx.r28.u32, ctx.r9.u32);
	// lwz r9,164(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 164);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8217f988
	if (ctx.cr6.lt) goto loc_8217F988;
loc_8217F9B4:
	// lwz r3,21748(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 21748);
	// stw r30,10956(r31)
	REX_STORE_U32(ctx.r31.u32 + 10956, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8217f9d4
	if (ctx.cr6.eq) goto loc_8217F9D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8217F9D4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217F9D4:
	// lwz r11,23576(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 23576);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8217f9f8
	if (ctx.cr6.eq) goto loc_8217F9F8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bctrl 
	ctx.lr = 0x8217F9F8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8217F9F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82181A18) {
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
	// bl 0x82374f94
	ctx.lr = 0x82181A34;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82181a48
	if (!ctx.cr6.eq) goto loc_82181A48;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1596(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1596);
	// b 0x82181a50
	goto loc_82181A50;
loc_82181A48:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,1592(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 1592);
loc_82181A50:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,15184
	ctx.r31.s64 = ctx.r11.s64 + 15184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823751a4
	ctx.lr = 0x82181A60;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,176(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 176);
	// lwz r3,164(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82181A70;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82375194
	ctx.lr = 0x82181A78;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

DEFINE_REX_FUNC(sub_821825A8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821825B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_821825C8:
	// lwz r11,52(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 52);
	// twllei r30,0
	if (ctx.r30.s32 == 0 || ctx.r30.u32 < 0u) ppc_trap(ctx, base, 0);
	// subf r11,r4,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r4.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw. r11,r11,r30
	ctx.r11.u64 = uint32_t((ctx.r30.s32 && !(ctx.r11.s32 == INT32_MIN && ctx.r30.s32 == -1)) ? ctx.r11.s32 / ctx.r30.s32 : 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	if (ctx.r10.s32 == -1 || ctx.r10.u32 > 4294967295u) ppc_trap(ctx, base, 0);
	// ble 0x82182634
	if (!ctx.cr0.gt) goto loc_82182634;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82182604
	if (ctx.cr6.lt) goto loc_82182604;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82182604:
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subf r31,r11,r31
	ctx.r31.u64 = ctx.r31.u64 - ctx.r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x82182630
	if (ctx.cr6.eq) goto loc_82182630;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82182624:
	// lwzu r10,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r10.u64 = REX_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	REX_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bdnz 0x82182624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82182624;
loc_82182630:
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82182634:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82182650
	if (ctx.cr6.eq) goto loc_82182650;
	// stw r4,48(r29)
	REX_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82181038
	ctx.lr = 0x82182648;
	sub_82181038(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// b 0x821825c8
	goto loc_821825C8;
loc_82182650:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82185158) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e4
	ctx.lr = 0x82185160;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r25,13808(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 13808);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,24200(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 24200);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-20384
	ctx.r29.s64 = ctx.r11.s64 + -20384;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_82185180:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// addi r11,r11,137
	ctx.r11.s64 = ctx.r11.s64 + 137;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,64(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821851BC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,404
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 404, ctx.xer);
	// blt cr6,0x82185180
	if (ctx.cr6.lt) goto loc_82185180;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// addi r27,r31,1152
	ctx.r27.s64 = ctx.r31.s64 + 1152;
	// addi r26,r11,-19168
	ctx.r26.s64 = ctx.r11.s64 + -19168;
loc_821851DC:
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// addi r29,r26,8
	ctx.r29.s64 = ctx.r26.s64 + 8;
loc_821851E4:
	// rlwinm r11,r30,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -4);
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r8,r11,117
	ctx.r8.s64 = ctx.r11.s64 + 117;
	// addi r11,r11,238
	ctx.r11.s64 = ctx.r11.s64 + 238;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r8,r31
	REX_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + -8);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,468(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 468);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82185224;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplwi cr6,r30,80
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 80, ctx.xer);
	// blt cr6,0x821851e4
	if (ctx.cr6.lt) goto loc_821851E4;
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// srd r6,r10,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821704c8
	ctx.lr = 0x82185258;
	sub_821704C8(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,24
	ctx.r27.s64 = ctx.r27.s64 + 24;
	// cmplwi cr6,r28,26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 26, ctx.xer);
	// blt cr6,0x821851dc
	if (ctx.cr6.lt) goto loc_821851DC;
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,12368(r31)
	REX_STORE_U32(ctx.r31.u32 + 12368, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,12372(r31)
	REX_STORE_U32(ctx.r31.u32 + 12372, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8217d8a8
	ctx.lr = 0x82185284;
	sub_8217D8A8(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821756c0
	ctx.lr = 0x82185290;
	sub_821756C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216d2d8
	ctx.lr = 0x8218529C;
	sub_8216D2D8(ctx, base);
	// clrlwi r4,r24,31
	ctx.r4.u64 = ctx.r24.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216c160
	ctx.lr = 0x821852A8;
	sub_8216C160(ctx, base);
	// lbz r10,10940(r31)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r31.u32 + 10940);
	// stw r23,12892(r31)
	REX_STORE_U32(ctx.r31.u32 + 12892, ctx.r23.u32);
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82185378
	if (!ctx.cr0.eq) goto loc_82185378;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82185378
	if (!ctx.cr0.eq) goto loc_82185378;
	// lbz r11,12363(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 12363);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82185378
	if (!ctx.cr0.eq) goto loc_82185378;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821852dc
	if (ctx.cr0.eq) goto loc_821852DC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8218536c
	goto loc_8218536C;
loc_821852DC:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82185364
	if (ctx.cr0.eq) goto loc_82185364;
	// lwz r11,12616(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12616);
	// lwz r9,12904(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12904);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x821852fc
	if (ctx.cr6.eq) goto loc_821852FC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185364
	if (!ctx.cr6.eq) goto loc_82185364;
loc_821852FC:
	// lwz r11,12620(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12620);
	// lwz r9,12908(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12908);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82185314
	if (ctx.cr6.eq) goto loc_82185314;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185364
	if (!ctx.cr6.eq) goto loc_82185364;
loc_82185314:
	// lwz r11,12624(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12624);
	// lwz r9,12912(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12912);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218532c
	if (ctx.cr6.eq) goto loc_8218532C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185364
	if (!ctx.cr6.eq) goto loc_82185364;
loc_8218532C:
	// lwz r11,12628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12628);
	// lwz r9,12916(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12916);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82185344
	if (ctx.cr6.eq) goto loc_82185344;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185364
	if (!ctx.cr6.eq) goto loc_82185364;
loc_82185344:
	// lwz r11,12632(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12632);
	// lwz r9,12920(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12920);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8218535c
	if (ctx.cr6.eq) goto loc_8218535C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82185364
	if (!ctx.cr6.eq) goto loc_82185364;
loc_8218535C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82185368
	goto loc_82185368;
loc_82185364:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82185368:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_8218536C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8218537c
	if (!ctx.cr0.eq) goto loc_8218537C;
loc_82185378:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_8218537C:
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r23,12888(r31)
	REX_STORE_U32(ctx.r31.u32 + 12888, ctx.r23.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,10932(r31)
	REX_STORE_U32(ctx.r31.u32 + 10932, ctx.r23.u32);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stw r23,10936(r31)
	REX_STORE_U32(ctx.r31.u32 + 10936, ctx.r23.u32);
	// stw r10,12884(r31)
	REX_STORE_U32(ctx.r31.u32 + 12884, ctx.r10.u32);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,10940(r31)
	REX_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// bne 0x821853b8
	if (!ctx.cr0.eq) goto loc_821853B8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82173f08
	ctx.lr = 0x821853B8;
	sub_82173F08(ctx, base);
loc_821853B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e434
	__restgprlr_23(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218D830) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8218D838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8218d728
	ctx.lr = 0x8218D84C;
	sub_8218D728(ctx, base);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8218D850:
	// lwz r30,0(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x8218d878
	goto loc_8218D878;
loc_8218D85C:
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8218d874
	if (ctx.cr6.eq) goto loc_8218D874;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8218d728
	ctx.lr = 0x8218D874;
	sub_8218D728(ctx, base);
loc_8218D874:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8218D878:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8218d85c
	if (ctx.cr6.lt) goto loc_8218D85C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8218d850
	if (!ctx.cr6.eq) goto loc_8218D850;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8218E700) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8218E708;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82180e90
	ctx.lr = 0x8218E730;
	sub_82180E90(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8218e74c
	if (!ctx.cr6.gt) goto loc_8218E74C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82180060
	ctx.lr = 0x8218E74C;
	sub_82180060(ctx, base);
loc_8218E74C:
	// or r11,r29,r28
	ctx.r11.u64 = ctx.r29.u64 | ctx.r28.u64;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82180018
	ctx.lr = 0x8218E768;
	sub_82180018(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8218e77c
	if (!ctx.cr6.eq) goto loc_8218E77C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8218e794
	goto loc_8218E794;
loc_8218E77C:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r4,r11,-16384
	ctx.r4.s64 = ctx.r11.s64 + -1073741824;
loc_8218E794:
	// lwz r11,11324(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 11324);
	// li r5,0
	ctx.r5.s64 = 0;
	// mulli r11,r11,108
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(108));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r11,11360
	ctx.r3.s64 = ctx.r11.s64 + 11360;
	// bl 0x823756a4
	ctx.lr = 0x8218E7AC;
	__imp__KeInsertQueueDpc(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821901E8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x821901F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,284(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 284);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r8,300(r1)
	REX_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r9,308(r1)
	REX_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mulli r3,r11,12
	ctx.r3.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// stw r10,316(r1)
	REX_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x8218f000
	ctx.lr = 0x82190230;
	sub_8218F000(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// bne cr6,0x82190244
	if (!ctx.cr6.eq) goto loc_82190244;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821905d0
	goto loc_821905D0;
loc_82190244:
	// lwz r11,268(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 268);
	// lwz r20,280(r26)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r26.u32 + 280);
	// lwz r19,272(r26)
	ctx.r19.u64 = REX_LOAD_U32(ctx.r26.u32 + 272);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r22,268(r26)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r26.u32 + 268);
	// lwz r18,288(r26)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r26.u32 + 288);
	// lwz r21,260(r26)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// bne cr6,0x8219026c
	if (!ctx.cr6.eq) goto loc_8219026C;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82190270
	goto loc_82190270;
loc_8219026C:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82190270:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82190284
	if (ctx.cr6.eq) goto loc_82190284;
	// add r24,r11,r25
	ctx.r24.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_82190284:
	// lwz r11,668(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 668);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82190298
	if (!ctx.cr6.eq) goto loc_82190298;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x8219029c
	goto loc_8219029C;
loc_82190298:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_8219029C:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821902b0
	if (ctx.cr6.eq) goto loc_821902B0;
	// add r23,r11,r25
	ctx.r23.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_821902B0:
	// lwz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 284);
	// addi r27,r24,8
	ctx.r27.s64 = ctx.r24.s64 + 8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821904b4
	if (!ctx.cr6.lt) goto loc_821904B4;
loc_821902C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// clrlwi. r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x821902dc
	if (ctx.cr0.eq) goto loc_821902DC;
	// lhz r28,6(r27)
	ctx.r28.u64 = REX_LOAD_U16(ctx.r27.u32 + 6);
loc_821902DC:
	// subf r11,r24,r27
	ctx.r11.u64 = ctx.r27.u64 - ctx.r24.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// srawi r29,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 3;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r23
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x821902fc
	if (ctx.cr6.eq) goto loc_821902FC;
	// add r31,r11,r25
	ctx.r31.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_821902FC:
	// lwz r11,260(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 260);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,256(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 256);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,292(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 292);
	// addi r4,r10,8
	ctx.r4.s64 = ctx.r10.s64 + 8;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x8219038c
	if (!ctx.cr6.lt) goto loc_8219038C;
loc_82190324:
	// subf r8,r10,r11
	ctx.r8.u64 = ctx.r11.u64 - ctx.r10.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r5
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
loc_82190338:
	// lbz r7,0(r9)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r14,0(r8)
	ctx.r14.u64 = REX_LOAD_U8(ctx.r8.u32 + 0);
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// subf r7,r14,r7
	ctx.r7.u64 = ctx.r7.u64 - ctx.r14.u64;
	// beq 0x8219035c
	if (ctx.cr0.eq) goto loc_8219035C;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82190338
	if (ctx.cr6.eq) goto loc_82190338;
loc_8219035C:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x8219038c
	if (ctx.cr0.eq) goto loc_8219038C;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x82190378
	if (ctx.cr0.eq) goto loc_82190378;
	// lhz r9,6(r11)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r11.u32 + 6);
loc_82190378:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x82190324
	if (ctx.cr6.lt) goto loc_82190324;
loc_8219038C:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x82190424
	if (!ctx.cr6.lt) goto loc_82190424;
	// subf r9,r10,r11
	ctx.r9.u64 = ctx.r11.u64 - ctx.r10.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// srawi r7,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// ble cr6,0x821903d0
	if (!ctx.cr6.gt) goto loc_821903D0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_821903B0:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi. r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x821903c0
	if (!ctx.cr0.eq) goto loc_821903C0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_821903C0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x821903b0
	if (ctx.cr6.lt) goto loc_821903B0;
loc_821903D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8219048c
	if (ctx.cr6.eq) goto loc_8219048C;
	// mulli r10,r29,12
	ctx.r10.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(12));
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_821903F0:
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r30,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r30.u32);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi. r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82190410
	if (!ctx.cr0.eq) goto loc_82190410;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82190410:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x821903f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821903F0;
	// b 0x8219048c
	goto loc_8219048C;
loc_82190424:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82190484
	if (ctx.cr6.eq) goto loc_82190484;
	// mulli r11,r29,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r29.u64 * static_cast<uint64_t>(12));
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82190444:
	// stw r20,-4(r11)
	REX_STORE_U32(ctx.r11.u32 + -4, ctx.r20.u32);
	// add r10,r8,r21
	ctx.r10.u64 = ctx.r8.u64 + ctx.r21.u64;
	// stw r22,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r22.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi. r7,r10,30
	ctx.r7.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82190474
	if (!ctx.cr0.eq) goto loc_82190474;
	// rlwinm r10,r10,25,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x3;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r19,r10,r19
	ctx.r19.u64 = ctx.r10.u64 + ctx.r19.u64;
loc_82190474:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82190444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82190444;
loc_82190484:
	// add r21,r28,r21
	ctx.r21.u64 = ctx.r28.u64 + ctx.r21.u64;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
loc_8219048C:
	// lwz r11,284(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 284);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821902c8
	if (ctx.cr6.lt) goto loc_821902C8;
	// lwz r29,316(r1)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r30,308(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r31,300(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 300);
loc_821904B4:
	// lwz r11,656(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 656);
	// lwz r5,284(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 284);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821904cc
	if (!ctx.cr6.eq) goto loc_821904CC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821904d0
	goto loc_821904D0;
loc_821904CC:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_821904D0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821904e4
	if (!ctx.cr6.eq) goto loc_821904E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821904e8
	goto loc_821904E8;
loc_821904E4:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_821904E8:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x821905b4
	if (ctx.cr0.eq) goto loc_821905B4;
	// lbz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r6,r11
	ctx.r6.s64 = ctx.r11.s8;
loc_82190500:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82190574
	if (ctx.cr6.eq) goto loc_82190574;
loc_8219050C:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82190514:
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r4,0(r9)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r8,r4,r8
	ctx.r8.u64 = ctx.r8.u64 - ctx.r4.u64;
	// beq 0x82190538
	if (ctx.cr0.eq) goto loc_82190538;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82190514
	if (ctx.cr6.eq) goto loc_82190514;
loc_82190538:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82190574
	if (ctx.cr0.eq) goto loc_82190574;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82190544:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82190544
	if (!ctx.cr6.eq) goto loc_82190544;
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8219050c
	if (!ctx.cr0.eq) goto loc_8219050C;
loc_82190574:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82190578:
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82190578
	if (!ctx.cr6.eq) goto loc_82190578;
	// subf r10,r7,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r7.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x821905a8
	if (!ctx.cr0.eq) goto loc_821905A8;
	// add r18,r11,r18
	ctx.r18.u64 = ctx.r11.u64 + ctx.r18.u64;
loc_821905A8:
	// lbzux r11,r7,r11
	ea = ctx.r7.u32 + ctx.r11.u32;
	ctx.r11.u64 = REX_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82190500
	if (!ctx.cr0.eq) goto loc_82190500;
loc_821905B4:
	// stw r3,0(r17)
	REX_STORE_U32(ctx.r17.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r20,0(r16)
	REX_STORE_U32(ctx.r16.u32 + 0, ctx.r20.u32);
	// stw r21,0(r15)
	REX_STORE_U32(ctx.r15.u32 + 0, ctx.r21.u32);
	// stw r19,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r19.u32);
	// stw r22,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// stw r18,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
loc_821905D0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A0290) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x821A0298;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r20,0
	ctx.r20.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a0390
	if (ctx.cr6.eq) goto loc_821A0390;
	// lwz r24,20(r3)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r22,4
	ctx.r22.s64 = 4;
	// lwz r25,24(r3)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// bgt cr6,0x821a02cc
	if (ctx.cr6.gt) goto loc_821A02CC;
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
loc_821A02CC:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r27,4
	ctx.r27.s64 = 4;
	// bgt cr6,0x821a02dc
	if (ctx.cr6.gt) goto loc_821A02DC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
loc_821A02DC:
	// rlwinm r5,r23,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x8215ec60
	ctx.lr = 0x821A02EC;
	sub_8215EC60(ctx, base);
loc_821A02EC:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x821a035c
	if (ctx.cr6.eq) goto loc_821A035C;
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
loc_821A02FC:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x821a0334
	if (ctx.cr6.eq) goto loc_821A0334;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_821A030C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8219ff10
	ctx.lr = 0x821A0318;
	sub_8219FF10(ctx, base);
	// mr. r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt 0x821a0390
	if (ctx.cr0.lt) goto loc_821A0390;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x821a030c
	if (ctx.cr6.lt) goto loc_821A030C;
loc_821A0334:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x821a034c
	if (!ctx.cr6.lt) goto loc_821A034C;
	// subf r11,r31,r25
	ctx.r11.u64 = ctx.r25.u64 - ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_821A0344:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0344;
loc_821A034C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r29,r22
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x821a02fc
	if (ctx.cr6.lt) goto loc_821A02FC;
loc_821A035C:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x821a0384
	if (!ctx.cr6.lt) goto loc_821A0384;
	// subf r11,r29,r24
	ctx.r11.u64 = ctx.r24.u64 - ctx.r29.u64;
loc_821A0368:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x821a037c
	if (ctx.cr6.eq) goto loc_821A037C;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_821A0374:
	// lwz r26,12(r26)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r26.u32 + 12);
	// bdnz 0x821a0374
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821A0374;
loc_821A037C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821a0368
	if (!ctx.cr0.eq) goto loc_821A0368;
loc_821A0384:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r21,r21,64
	ctx.r21.s64 = ctx.r21.s64 + 64;
	// bne 0x821a02ec
	if (!ctx.cr0.eq) goto loc_821A02EC;
loc_821A0390:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821A1768) {
	REX_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821a1778
	if (ctx.cr6.eq) goto loc_821A1778;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a17d4
	if (ctx.cr6.eq) goto loc_821A17D4;
loc_821A1778:
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a17d4
	if (!ctx.cr6.eq) goto loc_821A17D4;
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
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x821a17d4
	if (ctx.cr6.gt) goto loc_821A17D4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821a17d4
	if (ctx.cr6.eq) goto loc_821A17D4;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821a17d4
	if (!ctx.cr6.eq) goto loc_821A17D4;
	// lwz r10,4(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x821a17d4
	if (!ctx.cr6.eq) goto loc_821A17D4;
	// lwz r4,28(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x821a0888
	sub_821A0888(ctx, base);
	return;
loc_821A17D4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A2020) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821a2108
	if (ctx.cr6.eq) goto loc_821A2108;
	// not r11,r4
	ctx.r11.u64 = ~ctx.r4.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x821a2108
	if (!ctx.cr6.eq) goto loc_821A2108;
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
	// beq cr6,0x821a2070
	if (ctx.cr6.eq) goto loc_821A2070;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x821a2108
	if (ctx.cr6.eq) goto loc_821A2108;
loc_821A2070:
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bge cr6,0x821a2108
	if (!ctx.cr6.lt) goto loc_821A2108;
	// lwz r9,20(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x821a2108
	if (!ctx.cr6.eq) goto loc_821A2108;
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x821a2108
	if (!ctx.cr6.eq) goto loc_821A2108;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x821a20e0
	if (ctx.cr6.lt) goto loc_821A20E0;
	// beq cr6,0x821a20d0
	if (ctx.cr6.eq) goto loc_821A20D0;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x821a20c0
	if (ctx.cr6.lt) goto loc_821A20C0;
	// bne cr6,0x821a2108
	if (!ctx.cr6.eq) goto loc_821A2108;
	// lfd f0,24(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 24);
	// b 0x821a20fc
	goto loc_821A20FC;
loc_821A20C0:
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821a20f8
	goto loc_821A20F8;
loc_821A20D0:
	// lwa r11,24(r11)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r11.u32 + 24));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821a20f8
	goto loc_821A20F8;
loc_821A20E0:
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
loc_821A20F8:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
loc_821A20FC:
	// frsp f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
loc_821A2108:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821A51D8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821A51E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,44
	ctx.r3.s64 = 44;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x8216b018
	ctx.lr = 0x821A51FC;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821a5230
	if (ctx.cr0.eq) goto loc_821A5230;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r3.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,28(r3)
	REX_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// stw r29,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r29,40(r3)
	REX_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// b 0x821a5234
	goto loc_821A5234;
loc_821A5230:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_821A5234:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821a5248
	if (!ctx.cr6.eq) goto loc_821A5248;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x821a52d4
	goto loc_821A52D4;
loc_821A5248:
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a52b8
	if (ctx.cr6.eq) goto loc_821A52B8;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x821a52b8
	if (!ctx.cr6.eq) goto loc_821A52B8;
	// lwz r11,20(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a52b8
	if (ctx.cr6.eq) goto loc_821A52B8;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x821a52b8
	if (!ctx.cr6.eq) goto loc_821A52B8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 9, ctx.xer);
	// bne cr6,0x821a52b8
	if (!ctx.cr6.eq) goto loc_821A52B8;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821a52b8
	if (ctx.cr6.eq) goto loc_821A52B8;
	// stw r11,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// stw r11,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,896(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 896);
	// stw r11,40(r31)
	REX_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,852(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 852);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r31,896(r30)
	REX_STORE_U32(ctx.r30.u32 + 896, ctx.r31.u32);
	// stw r11,852(r30)
	REX_STORE_U32(ctx.r30.u32 + 852, ctx.r11.u32);
	// b 0x821a52d4
	goto loc_821A52D4;
loc_821A52B8:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// bl 0x821a5098
	ctx.lr = 0x821A52C8;
	sub_821A5098(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821A52D4;
	sub_8216B138(ctx, base);
loc_821A52D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821AA010) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,632(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 632);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x821b0160
	ctx.lr = 0x821AA038;
	sub_821B0160(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821aa15c
	if (ctx.cr6.eq) goto loc_821AA15C;
	// lwz r6,632(r30)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r30.u32 + 632);
	// lwz r11,0(r6)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// b 0x821aa074
	goto loc_821AA074;
loc_821AA050:
	// lbz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x821aa068
	if (ctx.cr6.eq) goto loc_821AA068;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821aa07c
	if (!ctx.cr6.eq) goto loc_821AA07C;
loc_821AA068:
	// lwz r11,632(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 632);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
loc_821AA074:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x821aa050
	if (ctx.cr6.lt) goto loc_821AA050;
loc_821AA07C:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r10,r31,2
	ctx.r10.s64 = ctx.r31.s64 + 2;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
loc_821AA088:
	// lwz r9,0(r6)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r6.u32 + 0);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821aa128
	if (!ctx.cr6.lt) goto loc_821AA128;
	// lbz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r31.u32 + 0);
	// extsb r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	// cmpwi cr6,r7,92
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 92, ctx.xer);
	// bne cr6,0x821aa100
	if (!ctx.cr6.eq) goto loc_821AA100;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821aa0c8
	if (!ctx.cr6.lt) goto loc_821AA0C8;
	// lbz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10, ctx.xer);
	// bne cr6,0x821aa0c8
	if (!ctx.cr6.eq) goto loc_821AA0C8;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x821aa120
	goto loc_821AA120;
loc_821AA0C8:
	// cmpwi cr6,r7,92
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 92, ctx.xer);
	// bne cr6,0x821aa100
	if (!ctx.cr6.eq) goto loc_821AA100;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x821aa100
	if (!ctx.cr6.lt) goto loc_821AA100;
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,13
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 13, ctx.xer);
	// bne cr6,0x821aa100
	if (!ctx.cr6.eq) goto loc_821AA100;
	// lbz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 10, ctx.xer);
	// bne cr6,0x821aa100
	if (!ctx.cr6.eq) goto loc_821AA100;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x821aa120
	goto loc_821AA120;
loc_821AA100:
	// cmpwi cr6,r7,13
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 13, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x821aa120
	if (ctx.cr6.eq) goto loc_821AA120;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r8,r5,r9
	REX_STORE_U8(ctx.r5.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_821AA120:
	// cmplwi cr6,r5,255
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 255, ctx.xer);
	// blt cr6,0x821aa088
	if (ctx.cr6.lt) goto loc_821AA088;
loc_821AA128:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32252
	ctx.r9.s64 = -2113667072;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,7340
	ctx.r6.s64 = ctx.r9.s64 + 7340;
	// stbx r10,r5,r11
	REX_STORE_U8(ctx.r5.u32 + ctx.r11.u32, ctx.r10.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,640
	ctx.r4.s64 = ctx.r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x821afae0
	ctx.lr = 0x821AA150;
	sub_821AFAE0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,84(r30)
	REX_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// stw r11,80(r30)
	REX_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_821AA15C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_821AD358) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x821AD360;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,676(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 676);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x821ad450
	if (ctx.cr6.lt) goto loc_821AD450;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821ad398
	if (!ctx.cr6.eq) goto loc_821AD398;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r30,r11,9925
	ctx.r30.s64 = ctx.r11.s64 + 9925;
loc_821AD398:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x8216b018
	ctx.lr = 0x821AD3A4;
	sub_8216B018(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821ad3b4
	if (ctx.cr0.eq) goto loc_821AD3B4;
	// bl 0x821a9b20
	ctx.lr = 0x821AD3B0;
	sub_821A9B20(ctx, base);
	// b 0x821ad3b8
	goto loc_821AD3B8;
loc_821AD3B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821AD3B8:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,628(r31)
	REX_STORE_U32(ctx.r31.u32 + 628, ctx.r3.u32);
	// bne cr6,0x821ad3d0
	if (!ctx.cr6.eq) goto loc_821AD3D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821ad450
	goto loc_821AD450;
loc_821AD3D0:
	// addi r8,r31,24
	ctx.r8.s64 = ctx.r31.s64 + 24;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x821a9e60
	ctx.lr = 0x821AD3E8;
	sub_821A9E60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ad450
	if (ctx.cr0.lt) goto loc_821AD450;
	// lwz r11,688(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 688);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821ad42c
	if (ctx.cr6.eq) goto loc_821AD42C;
	// lwz r3,20(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ad42c
	if (ctx.cr6.eq) goto loc_821AD42C;
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 628);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r4,76(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// subf r6,r9,r10
	ctx.r6.u64 = ctx.r10.u64 - ctx.r9.u64;
	// bl 0x82254e90
	ctx.lr = 0x821AD424;
	sub_82254E90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ad450
	if (ctx.cr0.lt) goto loc_821AD450;
loc_821AD42C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821acc78
	ctx.lr = 0x821AD438;
	sub_821ACC78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821ad450
	if (ctx.cr0.lt) goto loc_821AD450;
	// lwz r11,628(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 628);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,636(r31)
	REX_STORE_U32(ctx.r31.u32 + 636, ctx.r26.u32);
	// stw r11,632(r31)
	REX_STORE_U32(ctx.r31.u32 + 632, ctx.r11.u32);
loc_821AD450:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B0AD8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821B0AE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x821b0b40
	if (!ctx.cr6.lt) goto loc_821B0B40;
	// lbz r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,39
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 39, ctx.xer);
	// bne cr6,0x821b0b40
	if (!ctx.cr6.eq) goto loc_821B0B40;
	// addi r31,r4,1
	ctx.r31.s64 = ctx.r4.s64 + 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821b0560
	ctx.lr = 0x821B0B10;
	sub_821B0560(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821b0b40
	if (ctx.cr0.eq) goto loc_821B0B40;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r3,r31
	ctx.r11.u64 = ctx.r3.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821b0b40
	if (!ctx.cr6.lt) goto loc_821B0B40;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,39
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 39, ctx.xer);
	// bne cr6,0x821b0b40
	if (!ctx.cr6.eq) goto loc_821B0B40;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x821b0b44
	goto loc_821B0B44;
loc_821B0B40:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B0B44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B1188) {
	REX_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x821B1190;
	__savegprlr_18(ctx, base);
	// mullw. r20,r5,r6
	ctx.r20.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq 0x821b1304
	if (ctx.cr0.eq) goto loc_821B1304;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bne cr6,0x821b11e4
	if (!ctx.cr6.eq) goto loc_821B11E4;
	// rlwinm. r11,r7,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x400;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x821b11e4
	if (!ctx.cr0.eq) goto loc_821B11E4;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_821B11B8:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// addi r7,r6,3
	ctx.r7.s64 = ctx.r6.s64 + 3;
	// rlwinm r22,r7,30,2,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r21,r22,r5
	ctx.r21.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r5.s32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x821b11ec
	if (!ctx.cr6.lt) goto loc_821B11EC;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r7
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// b 0x821b11f0
	goto loc_821B11F0;
loc_821B11E4:
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x821b11b8
	goto loc_821B11B8;
loc_821B11EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B11F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821b1204
	if (!ctx.cr6.eq) goto loc_821B1204;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821b1318
	goto loc_821B1318;
loc_821B1204:
	// lwz r28,16(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r28,r21
	ctx.r7.u64 = ctx.r28.u64 + ctx.r21.u64;
	// rlwinm. r4,r4,0,25,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r7,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// beq 0x821b1220
	if (ctx.cr0.eq) goto loc_821B1220;
	// stw r7,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
loc_821B1220:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821b12f4
	if (ctx.cr6.eq) goto loc_821B12F4;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
loc_821B1238:
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821b12e0
	if (ctx.cr6.eq) goto loc_821B12E0;
	// rlwinm r23,r5,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
loc_821B1250:
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// lwz r4,8(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x821b1268
	if (ctx.cr6.eq) goto loc_821B1268;
	// lwz r7,0(r26)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x821b1274
	goto loc_821B1274;
loc_821B1268:
	// add r7,r27,r30
	ctx.r7.u64 = ctx.r27.u64 + ctx.r30.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r7,r8
	ctx.r7.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_821B1274:
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x821b128c
	if (!ctx.cr6.lt) goto loc_821B128C;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// b 0x821b1290
	goto loc_821B1290;
loc_821B128C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821B1290:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b12d4
	if (ctx.cr6.eq) goto loc_821B12D4;
	// rlwinm r7,r30,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r31,84(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r4,r30,30
	ctx.r4.u64 = ctx.r30.u32 & 0x3;
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// stw r4,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + ctx.r28.u64;
	// stw r31,104(r11)
	REX_STORE_U32(ctx.r11.u32 + 104, ctx.r31.u32);
	// subf r18,r28,r7
	ctx.r18.u64 = ctx.r7.u64 - ctx.r28.u64;
	// stw r7,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// lwz r31,0(r10)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r18,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// stw r7,112(r11)
	REX_STORE_U32(ctx.r11.u32 + 112, ctx.r7.u32);
loc_821B12D4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r26,r23,r26
	ctx.r26.u64 = ctx.r23.u64 + ctx.r26.u64;
	// bdnz 0x821b1250
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B1250;
loc_821B12E0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// add r27,r27,r6
	ctx.r27.u64 = ctx.r27.u64 + ctx.r6.u64;
	// add r29,r29,r22
	ctx.r29.u64 = ctx.r29.u64 + ctx.r22.u64;
	// bne 0x821b1238
	if (!ctx.cr0.eq) goto loc_821B1238;
loc_821B12F4:
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r21,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_821B1304:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821b1314
	if (ctx.cr6.eq) goto loc_821B1314;
	// stw r20,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
loc_821B1314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B1318:
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821B7080) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x821B7088;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x8216b018
	ctx.lr = 0x821B70A8;
	sub_8216B018(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x821b70bc
	if (!ctx.cr0.eq) goto loc_821B70BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821b711c
	goto loc_821B711C;
loc_821B70BC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b4170
	ctx.lr = 0x821B70CC;
	sub_821B4170(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821b710c
	if (ctx.cr6.eq) goto loc_821B710C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r31.u64;
loc_821B70E0:
	// lwz r9,8(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 20);
	// lwzx r9,r8,r9
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bdnz 0x821b70e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821B70E0;
loc_821B710C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x821B7118;
	sub_8216B138(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_821B711C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821C5710) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821C5718;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x821c57b4
	if (!ctx.cr6.eq) goto loc_821C57B4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// lfd f31,1792(r11)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_821C5754:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r4,136(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 136);
	// bl 0x8220ea28
	ctx.lr = 0x821C576C;
	sub_8220EA28(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821c5790
	if (!ctx.cr6.lt) goto loc_821C5790;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821c5794
	goto loc_821C5794;
loc_821C5790:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C5794:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c57a0
	if (ctx.cr6.eq) goto loc_821C57A0;
	// stw r29,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r29.u32);
loc_821C57A0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x821c5754
	if (!ctx.cr0.eq) goto loc_821C5754;
loc_821C57AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821c59e8
	goto loc_821C59E8;
loc_821C57B4:
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821c5908
	if (!ctx.cr6.eq) goto loc_821C5908;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821c5840
	if (!ctx.cr6.eq) goto loc_821C5840;
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821c5808
	if (!ctx.cr6.eq) goto loc_821C5808;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C57F0:
	// lwz r10,28(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821c57f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C57F0;
	// b 0x821c57ac
	goto loc_821C57AC;
loc_821C5808:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_821C581C:
	// lwz r9,24(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r8,24(r28)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r28.u32 + 24);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x821c581c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821C581C;
	// b 0x821c57ac
	goto loc_821C57AC;
loc_821C5840:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfd f1,1792(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
	// blt cr6,0x821c5894
	if (ctx.cr6.lt) goto loc_821C5894;
	// beq cr6,0x821c587c
	if (ctx.cr6.eq) goto loc_821C587C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821c586c
	if (ctx.cr6.lt) goto loc_821C586C;
	// bne cr6,0x821c58ac
	if (!ctx.cr6.eq) goto loc_821C58AC;
	// lfd f1,24(r29)
	ctx.f1.u64 = REX_LOAD_U64(ctx.r29.u32 + 24);
	// b 0x821c58ac
	goto loc_821C58AC;
loc_821C586C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
	// b 0x821c5888
	goto loc_821C5888;
loc_821C587C:
	// lwa r11,24(r29)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r29.u32 + 24));
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_821C5888:
	// li r30,2
	ctx.r30.s64 = 2;
	// fcfid f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(ctx.f0.s64);
	// b 0x821c58ac
	goto loc_821C58AC;
loc_821C5894:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821c58a8
	if (ctx.cr6.eq) goto loc_821C58A8;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f1,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
loc_821C58A8:
	// li r30,23
	ctx.r30.s64 = 23;
loc_821C58AC:
	// lwz r3,8(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,120(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 120);
	// bl 0x8220ea28
	ctx.lr = 0x821C58C0;
	sub_8220EA28(ctx, base);
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x821c58e4
	if (!ctx.cr6.lt) goto loc_821C58E4;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x821c58e8
	goto loc_821C58E8;
loc_821C58E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_821C58E8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821c57ac
	if (ctx.cr6.eq) goto loc_821C57AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// stw r9,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x821c57ac
	goto loc_821C57AC;
loc_821C5908:
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821c5928
	if (!ctx.cr6.eq) goto loc_821C5928;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c3a90
	ctx.lr = 0x821C5924;
	sub_821C3A90(ctx, base);
	// b 0x821c59e8
	goto loc_821C59E8;
loc_821C5928:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x821c59c8
	if (!ctx.cr6.eq) goto loc_821C59C8;
loc_821C5930:
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c59c8
	if (ctx.cr6.eq) goto loc_821C59C8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x821c5970
	if (!ctx.cr6.eq) goto loc_821C5970;
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x821c595c
	if (!ctx.cr6.eq) goto loc_821C595C;
	// lwz r30,28(r4)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
loc_821C595C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821c5710
	ctx.lr = 0x821C596C;
	sub_821C5710(ctx, base);
	// b 0x821c59a0
	goto loc_821C59A0;
loc_821C5970:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x821c59c8
	if (ctx.cr6.eq) goto loc_821C59C8;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,14
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 14, ctx.xer);
	// bne cr6,0x821c59c8
	if (!ctx.cr6.eq) goto loc_821C59C8;
	// lwz r11,24(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 24);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,20(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mullw r30,r11,r10
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x821c3a90
	ctx.lr = 0x821C59A0;
	sub_821C3A90(ctx, base);
loc_821C59A0:
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821c59e8
	if (ctx.cr0.lt) goto loc_821C59E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x821c59b8
	if (ctx.cr6.eq) goto loc_821C59B8;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_821C59B8:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x821c5930
	if (!ctx.cr6.eq) goto loc_821C5930;
	// b 0x821c57ac
	goto loc_821C57AC;
loc_821C59C8:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,12164
	ctx.r6.s64 = ctx.r11.s64 + 12164;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x821b34c0
	ctx.lr = 0x821C59E0;
	sub_821B34C0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821C59E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CA188) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r11,13328
	ctx.r8.s64 = ctx.r11.s64 + 13328;
	// li r9,15
	ctx.r9.s64 = 15;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r8,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r9,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// ld r11,0(r4)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,16(r3)
	REX_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// ld r10,8(r4)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r4.u32 + 8);
	// std r10,24(r3)
	REX_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,0(r5)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// std r10,32(r3)
	REX_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// std r11,40(r3)
	REX_STORE_U64(ctx.r3.u32 + 40, ctx.r11.u64);
	// ld r11,16(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 16);
	// std r11,48(r3)
	REX_STORE_U64(ctx.r3.u32 + 48, ctx.r11.u64);
	// ld r11,24(r5)
	ctx.r11.u64 = REX_LOAD_U64(ctx.r5.u32 + 24);
	// std r11,56(r3)
	REX_STORE_U64(ctx.r3.u32 + 56, ctx.r11.u64);
	// bne cr6,0x821ca21c
	if (!ctx.cr6.eq) goto loc_821CA21C;
	// lwz r3,24(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821ca21c
	if (ctx.cr6.eq) goto loc_821CA21C;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821CA218;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
loc_821CA21C:
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

DEFINE_REX_FUNC(sub_821CB2B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821CB2C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x821c7078
	ctx.lr = 0x821CB2D8;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821cb2f0
	if (ctx.cr0.eq) goto loc_821CB2F0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x821c8088
	ctx.lr = 0x821CB2EC;
	sub_821C8088(ctx, base);
	// b 0x821cb2f4
	goto loc_821CB2F4;
loc_821CB2F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821CB2F4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821cb310
	if (ctx.cr6.eq) goto loc_821CB310;
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// stw r11,24(r3)
	REX_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lwz r11,108(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 108);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,108(r29)
	REX_STORE_U32(ctx.r29.u32 + 108, ctx.r11.u32);
loc_821CB310:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821CB850) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x821cb8a4
	if (ctx.cr6.lt) goto loc_821CB8A4;
	// beq cr6,0x821cb894
	if (ctx.cr6.eq) goto loc_821CB894;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x821cb880
	if (ctx.cr6.lt) goto loc_821CB880;
	// beq cr6,0x821cb878
	if (ctx.cr6.eq) goto loc_821CB878;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_821CB878:
	// lfd f0,8(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 8);
	// b 0x821cb8c4
	goto loc_821CB8C4;
loc_821CB880:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
loc_821CB88C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x821cb8c4
	goto loc_821CB8C4;
loc_821CB894:
	// lwa r11,8(r5)
	ctx.r11.s64 = int32_t(REX_LOAD_U32(ctx.r5.u32 + 8));
	// std r11,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x821cb88c
	goto loc_821CB88C;
loc_821CB8A4:
	// lwz r11,8(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821cb8bc
	if (ctx.cr6.eq) goto loc_821CB8BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// b 0x821cb8c4
	goto loc_821CB8C4;
loc_821CB8BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_821CB8C4:
	// stfd f0,0(r4)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r4.u32 + 0, ctx.f0.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821CC668) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,7852
	ctx.r10.s64 = ctx.r10.s64 + 7852;
loc_821CC690:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x821cc6b4
	if (ctx.cr0.eq) goto loc_821CC6B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc690
	if (ctx.cr6.eq) goto loc_821CC690;
loc_821CC6B4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc6ec
	if (ctx.cr0.eq) goto loc_821CC6EC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8211fe78
	ctx.lr = 0x821CC6CC;
	sub_8211FE78(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stb r10,335(r1)
	REX_STORE_U8(ctx.r1.u32 + 335, ctx.r10.u8);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r9,5760
	ctx.r6.s64 = ctx.r9.s64 + 5760;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// b 0x821cc848
	goto loc_821CC848;
loc_821CC6EC:
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821cc854
	if (!ctx.cr6.eq) goto loc_821CC854;
	// lwz r11,40(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x821cc79c
	if (ctx.cr6.gt) goto loc_821CC79C;
	// lis r12,-32251
	ctx.r12.s64 = -2113601536;
	// addi r12,r12,32240
	ctx.r12.s64 = ctx.r12.s64 + 32240;
	// lbzx r0,r12,r11
	ctx.r0.u64 = REX_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32227
	ctx.r12.s64 = -2112028672;
	// nop 
	// addi r12,r12,-14544
	ctx.r12.s64 = ctx.r12.s64 + -14544;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u32) {
	case 0:
		goto loc_821CC730;
	case 1:
		goto loc_821CC73C;
	case 2:
		goto loc_821CC758;
	case 3:
		goto loc_821CC758;
	case 4:
		goto loc_821CC758;
	case 5:
		goto loc_821CC764;
	case 6:
		goto loc_821CC764;
	case 7:
		goto loc_821CC764;
	case 8:
		goto loc_821CC764;
	case 9:
		goto loc_821CC770;
	case 10:
		goto loc_821CC778;
	case 11:
		goto loc_821CC79C;
	case 12:
		goto loc_821CC784;
	case 13:
		goto loc_821CC790;
	default:
		__builtin_trap(); // Switch case out of range
	}
loc_821CC730:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8928
	ctx.r5.s64 = ctx.r11.s64 + 8928;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC73C:
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
loc_821CC740:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,8916
	ctx.r5.s64 = ctx.r11.s64 + 8916;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a4f40
	ctx.lr = 0x821CC754;
	sub_821A4F40(ctx, base);
	// b 0x821cc7b0
	goto loc_821CC7B0;
loc_821CC758:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-30412
	ctx.r5.s64 = ctx.r11.s64 + -30412;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC764:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r5,r11,-30428
	ctx.r5.s64 = ctx.r11.s64 + -30428;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC770:
	// lwz r6,48(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x821cc740
	goto loc_821CC740;
loc_821CC778:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8804
	ctx.r5.s64 = ctx.r11.s64 + 8804;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC784:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8792
	ctx.r5.s64 = ctx.r11.s64 + 8792;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC790:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8780
	ctx.r5.s64 = ctx.r11.s64 + 8780;
	// b 0x821cc7a4
	goto loc_821CC7A4;
loc_821CC79C:
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r5,r11,8772
	ctx.r5.s64 = ctx.r11.s64 + 8772;
loc_821CC7A4:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x821a4f40
	ctx.lr = 0x821CC7B0;
	sub_821A4F40(ctx, base);
loc_821CC7B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r10,-30456
	ctx.r6.s64 = ctx.r10.s64 + -30456;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821afae0
	ctx.lr = 0x821CC7D0;
	sub_821AFAE0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x821cc854
	if (!ctx.cr6.eq) goto loc_821CC854;
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r6,r11,-12576
	ctx.r6.s64 = ctx.r11.s64 + -12576;
	// lwz r7,-12576(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + -12576);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821cc854
	if (ctx.cr6.eq) goto loc_821CC854;
	// lwz r8,48(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
loc_821CC7F4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_821CC7FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r5,0(r10)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r5,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r5.u64;
	// beq 0x821cc820
	if (ctx.cr0.eq) goto loc_821CC820;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x821cc7fc
	if (ctx.cr6.eq) goto loc_821CC7FC;
loc_821CC820:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x821cc838
	if (ctx.cr0.eq) goto loc_821CC838;
	// lwzu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r7.u64 = REX_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x821cc7f4
	if (!ctx.cr6.eq) goto loc_821CC7F4;
	// b 0x821cc854
	goto loc_821CC854;
loc_821CC838:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,3000
	ctx.r5.s64 = 3000;
	// addi r6,r10,-30616
	ctx.r6.s64 = ctx.r10.s64 + -30616;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_821CC848:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// bl 0x821afae0
	ctx.lr = 0x821CC854;
	sub_821AFAE0(ctx, base);
loc_821CC854:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

DEFINE_REX_FUNC(sub_821D3F00) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,172(r1)
	REX_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x821d2a50
	ctx.lr = 0x821D3F2C;
	sub_821D2A50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821d3f54
	if (!ctx.cr0.lt) goto loc_821D3F54;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,3058
	ctx.r5.s64 = 3058;
	// addi r6,r11,-28436
	ctx.r6.s64 = ctx.r11.s64 + -28436;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821cc878
	ctx.lr = 0x821D3F4C;
	sub_821CC878(ctx, base);
loc_821D3F4C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821d3fbc
	goto loc_821D3FBC;
loc_821D3F54:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x821c7078
	ctx.lr = 0x821D3F5C;
	sub_821C7078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821d3f74
	if (ctx.cr0.eq) goto loc_821D3F74;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,112(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x821c8920
	ctx.lr = 0x821D3F70;
	sub_821C8920(ctx, base);
	// b 0x821d3f78
	goto loc_821D3F78;
loc_821D3F74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821D3F78:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x821d3f4c
	if (ctx.cr6.eq) goto loc_821D3F4C;
	// addi r11,r1,172
	ctx.r11.s64 = ctx.r1.s64 + 172;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821d3fac
	if (ctx.cr6.eq) goto loc_821D3FAC;
loc_821D3F8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 8, ctx.xer);
	// bne cr6,0x821d3fac
	if (!ctx.cr6.eq) goto loc_821D3FAC;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x821d3f8c
	if (!ctx.cr6.eq) goto loc_821D3F8C;
loc_821D3FAC:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r3,172(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 172);
loc_821D3FBC:
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

DEFINE_REX_FUNC(sub_821DE808) {
	REX_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821de818
	if (ctx.cr6.eq) goto loc_821DE818;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_821DE818:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821de824
	if (ctx.cr6.eq) goto loc_821DE824;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_821DE824:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x821de838
	if (!ctx.cr6.eq) goto loc_821DE838;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_821DE838:
	// lwz r8,0(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	ctx.r11.s64 = 271187968;
	// ori r11,r11,4352
	ctx.r11.u64 = ctx.r11.u64 | 4352;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821de858
	if (!ctx.cr6.eq) goto loc_821DE858;
loc_821DE850:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_821DE858:
	// rlwinm r11,r8,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821de8b0
	if (ctx.cr6.eq) goto loc_821DE8B0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_821DE8B0:
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_821DE8B4:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x821de918
	if (!ctx.cr0.eq) goto loc_821DE918;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x821de850
	if (ctx.cr6.eq) goto loc_821DE850;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x821de8f8
	if (!ctx.cr6.eq) goto loc_821DE8F8;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x821de8ec
	if (!ctx.cr6.gt) goto loc_821DE8EC;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821de920
	if (ctx.cr6.eq) goto loc_821DE920;
loc_821DE8EC:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_821DE8F0:
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x821de918
	goto loc_821DE918;
loc_821DE8F8:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 512, ctx.xer);
	// blt cr6,0x821de90c
	if (ctx.cr6.lt) goto loc_821DE90C;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x821de8f0
	goto loc_821DE8F0;
loc_821DE90C:
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// bne cr6,0x821de918
	if (!ctx.cr6.eq) goto loc_821DE918;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
loc_821DE918:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x821de8b4
	goto loc_821DE8B4;
loc_821DE920:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x821de930
	if (ctx.cr6.eq) goto loc_821DE930;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,0(r5)
	REX_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_821DE930:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x821de944
	if (ctx.cr6.eq) goto loc_821DE944;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_821DE944:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821E0A98) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x821E0AA0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,96(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 96);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// stw r10,88(r4)
	REX_STORE_U32(ctx.r4.u32 + 88, ctx.r10.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x821e0ad4
	if (!ctx.cr6.eq) goto loc_821E0AD4;
	// li r25,2
	ctx.r25.s64 = 2;
loc_821E0AD4:
	// lwz r10,124(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0b74
	if (ctx.cr6.eq) goto loc_821E0B74;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// beq cr6,0x821e0b50
	if (ctx.cr6.eq) goto loc_821E0B50;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// beq cr6,0x821e0b50
	if (ctx.cr6.eq) goto loc_821E0B50;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// beq cr6,0x821e0b50
	if (ctx.cr6.eq) goto loc_821E0B50;
	// cmplwi cr6,r11,30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30, ctx.xer);
	// beq cr6,0x821e0b50
	if (ctx.cr6.eq) goto loc_821E0B50;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// beq cr6,0x821e0b28
	if (ctx.cr6.eq) goto loc_821E0B28;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x821e0b28
	if (ctx.cr6.eq) goto loc_821E0B28;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x821e0b28
	if (ctx.cr6.eq) goto loc_821E0B28;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x821e0b28
	if (ctx.cr6.eq) goto loc_821E0B28;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x821e0b74
	if (!ctx.cr6.eq) goto loc_821E0B74;
loc_821E0B28:
	// lwz r11,72(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0b74
	if (ctx.cr6.eq) goto loc_821E0B74;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x821e0b74
	if (!ctx.cr6.eq) goto loc_821E0B74;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2026
	ctx.r5.s64 = 2026;
	// addi r6,r11,-10976
	ctx.r6.s64 = ctx.r11.s64 + -10976;
	// b 0x821e0b5c
	goto loc_821E0B5C;
loc_821E0B50:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,2025
	ctx.r5.s64 = 2025;
	// addi r6,r11,-11056
	ctx.r6.s64 = ctx.r11.s64 + -11056;
loc_821E0B5C:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x821afae0
	ctx.lr = 0x821E0B68;
	sub_821AFAE0(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x821e1464
	goto loc_821E1464;
loc_821E0B74:
	// lwz r30,60(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r28,r11,-11136
	ctx.r28.s64 = ctx.r11.s64 + -11136;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x821e0c48
	if (ctx.cr6.eq) goto loc_821E0C48;
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x821e0c48
	if (!ctx.cr6.eq) goto loc_821E0C48;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e0ba8
	if (!ctx.cr6.eq) goto loc_821E0BA8;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_821E0BA8:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0bd0
	if (ctx.cr6.eq) goto loc_821E0BD0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2014
	ctx.r5.s64 = 2014;
	// addi r6,r11,-11200
	ctx.r6.s64 = ctx.r11.s64 + -11200;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0BCC;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0BD0:
	// lwz r10,40(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0c48
	if (ctx.cr6.eq) goto loc_821E0C48;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x821e0c2c
	if (ctx.cr6.lt) goto loc_821E0C2C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x821e0c2c
	if (ctx.cr6.gt) goto loc_821E0C2C;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e0c00
	if (!ctx.cr6.eq) goto loc_821E0C00;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_821E0C00:
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0c24
	if (ctx.cr6.eq) goto loc_821E0C24;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0C20;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0C24:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// b 0x821e0c48
	goto loc_821E0C48;
loc_821E0C2C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2008
	ctx.r5.s64 = 2008;
	// addi r6,r11,-11288
	ctx.r6.s64 = ctx.r11.s64 + -11288;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0C44;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0C48:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// lis r27,3328
	ctx.r27.s64 = 218103808;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0d14
	if (ctx.cr6.eq) goto loc_821E0D14;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 25, ctx.xer);
	// bne cr6,0x821e0d14
	if (!ctx.cr6.eq) goto loc_821E0D14;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821e0c78
	if (ctx.cr6.lt) goto loc_821E0C78;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x821e0c88
	if (!ctx.cr6.gt) goto loc_821E0C88;
loc_821E0C78:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// blt cr6,0x821e0ca4
	if (ctx.cr6.lt) goto loc_821E0CA4;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bgt cr6,0x821e0ca4
	if (ctx.cr6.gt) goto loc_821E0CA4;
loc_821E0C88:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2021
	ctx.r5.s64 = 2021;
	// addi r6,r11,-11340
	ctx.r6.s64 = ctx.r11.s64 + -11340;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0CA0;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0CA4:
	// lwz r30,64(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e0cbc
	if (!ctx.cr6.eq) goto loc_821E0CBC;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_821E0CBC:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0cec
	if (ctx.cr6.eq) goto loc_821E0CEC;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x821e0cec
	if (ctx.cr6.eq) goto loc_821E0CEC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2019
	ctx.r5.s64 = 2019;
	// addi r6,r11,-11388
	ctx.r6.s64 = ctx.r11.s64 + -11388;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0CE8;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0CEC:
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0d14
	if (ctx.cr6.eq) goto loc_821E0D14;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2020
	ctx.r5.s64 = 2020;
	// addi r6,r11,-11464
	ctx.r6.s64 = ctx.r11.s64 + -11464;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0D10;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0D14:
	// addi r24,r26,68
	ctx.r24.s64 = ctx.r26.s64 + 68;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_821E0D20:
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e0dbc
	if (ctx.cr6.eq) goto loc_821E0DBC;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// cmplwi cr6,r11,81
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 81, ctx.xer);
	// beq cr6,0x821e0dac
	if (ctx.cr6.eq) goto loc_821E0DAC;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x821e0dac
	if (ctx.cr6.eq) goto loc_821E0DAC;
	// cmplwi cr6,r11,47
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 47, ctx.xer);
	// beq cr6,0x821e0dac
	if (ctx.cr6.eq) goto loc_821E0DAC;
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x821e0d5c
	if (!ctx.cr6.eq) goto loc_821E0D5C;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_821E0D5C:
	// lwz r11,40(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0dac
	if (ctx.cr6.eq) goto loc_821E0DAC;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x821e0d78
	if (!ctx.cr6.eq) goto loc_821E0D78;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
loc_821E0D78:
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0d9c
	if (ctx.cr6.eq) goto loc_821E0D9C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2009
	ctx.r5.s64 = 2009;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0D98;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E0D9C:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e0dac
	if (ctx.cr6.eq) goto loc_821E0DAC;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_821E0DAC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x821e0d20
	if (ctx.cr6.lt) goto loc_821E0D20;
loc_821E0DBC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821e0988
	ctx.lr = 0x821E0DC8;
	sub_821E0988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821e1464
	if (ctx.cr0.lt) goto loc_821E1464;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r30,48(r26)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// add r23,r25,r11
	ctx.r23.u64 = ctx.r25.u64 + ctx.r11.u64;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bne cr6,0x821e0f10
	if (!ctx.cr6.eq) goto loc_821E0F10;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x821e0df8
	if (ctx.cr6.lt) goto loc_821E0DF8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821e0e08
	if (!ctx.cr6.gt) goto loc_821E0E08;
loc_821E0DF8:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821e0f10
	if (ctx.cr6.lt) goto loc_821E0F10;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x821e0f10
	if (ctx.cr6.gt) goto loc_821E0F10;
loc_821E0E08:
	// lwz r10,72(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 72);
	// lis r9,1792
	ctx.r9.s64 = 117440512;
	// li r30,2
	ctx.r30.s64 = 2;
	// lwz r11,20(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x821e0ec0
	if (ctx.cr6.gt) goto loc_821E0EC0;
	// beq cr6,0x821e0eb8
	if (ctx.cr6.eq) goto loc_821E0EB8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0eac
	if (ctx.cr6.eq) goto loc_821E0EAC;
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0ea4
	if (ctx.cr6.eq) goto loc_821E0EA4;
	// lis r9,512
	ctx.r9.s64 = 33554432;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0e9c
	if (ctx.cr6.eq) goto loc_821E0E9C;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e0f0c
	if (ctx.cr6.eq) goto loc_821E0F0C;
	// lis r9,1024
	ctx.r9.s64 = 67108864;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0e94
	if (ctx.cr6.eq) goto loc_821E0E94;
	// lis r8,1280
	ctx.r8.s64 = 83886080;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e0f0c
	if (ctx.cr6.eq) goto loc_821E0F0C;
	// lis r10,1536
	ctx.r10.s64 = 100663296;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_821E0E70:
	// bne cr6,0x821e0f10
	if (!ctx.cr6.eq) goto loc_821E0F10;
loc_821E0E74:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2013
	ctx.r5.s64 = 2013;
	// addi r6,r11,-11516
	ctx.r6.s64 = ctx.r11.s64 + -11516;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E0E8C;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
	// b 0x821e0f10
	goto loc_821E0F10;
loc_821E0E94:
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// b 0x821e0eb0
	goto loc_821E0EB0;
loc_821E0E9C:
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// b 0x821e0eb0
	goto loc_821E0EB0;
loc_821E0EA4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x821e0eb0
	goto loc_821E0EB0;
loc_821E0EAC:
	// lis r11,256
	ctx.r11.s64 = 16777216;
loc_821E0EB0:
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// b 0x821e0f10
	goto loc_821E0F10;
loc_821E0EB8:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// b 0x821e0eb0
	goto loc_821E0EB0;
loc_821E0EC0:
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e0f0c
	if (ctx.cr6.eq) goto loc_821E0F0C;
	// lis r9,2304
	ctx.r9.s64 = 150994944;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0e74
	if (ctx.cr6.eq) goto loc_821E0E74;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0e74
	if (ctx.cr6.eq) goto loc_821E0E74;
	// lis r9,2816
	ctx.r9.s64 = 184549376;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x821e0f04
	if (ctx.cr6.eq) goto loc_821E0F04;
	// lis r8,3072
	ctx.r8.s64 = 201326592;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x821e0f0c
	if (ctx.cr6.eq) goto loc_821E0F0C;
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// b 0x821e0e70
	goto loc_821E0E70;
loc_821E0F04:
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// b 0x821e0eb0
	goto loc_821E0EB0;
loc_821E0F0C:
	// stw r9,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
loc_821E0F10:
	// lwz r11,84(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x821e0f20
	if (ctx.cr6.eq) goto loc_821E0F20;
	// oris r30,r30,16384
	ctx.r30.u64 = ctx.r30.u64 | 1073741824;
loc_821E0F20:
	// lwz r11,64(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e0f30
	if (ctx.cr6.eq) goto loc_821E0F30;
	// oris r30,r30,4096
	ctx.r30.u64 = ctx.r30.u64 | 268435456;
loc_821E0F30:
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x821e0f44
	if (ctx.cr6.lt) goto loc_821E0F44;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x821e0f54
	if (!ctx.cr6.gt) goto loc_821E0F54;
loc_821E0F44:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// blt cr6,0x821e0f60
	if (ctx.cr6.lt) goto loc_821E0F60;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bgt cr6,0x821e0f60
	if (ctx.cr6.gt) goto loc_821E0F60;
loc_821E0F54:
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// rlwinm r11,r11,24,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF000000;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_821E0F60:
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r11,41
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 41, ctx.xer);
	// beq cr6,0x821e0f7c
	if (ctx.cr6.eq) goto loc_821E0F7C;
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x821e0f7c
	if (ctx.cr6.eq) goto loc_821E0F7C;
	// cmplwi cr6,r11,94
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 94, ctx.xer);
	// bne cr6,0x821e0f88
	if (!ctx.cr6.eq) goto loc_821E0F88;
loc_821E0F7C:
	// lwz r11,56(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 56);
	// rlwinm r11,r11,16,13,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x70000;
	// or r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 | ctx.r30.u64;
loc_821E0F88:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r10,92(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x821e0fd0
	if (!ctx.cr6.eq) goto loc_821E0FD0;
	// lwz r10,56(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 56);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821E0FD0:
	// lwz r10,60(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 60);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e10f8
	if (ctx.cr6.eq) goto loc_821E10F8;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x821e10f8
	if (!ctx.cr6.eq) goto loc_821E10F8;
	// lwz r11,56(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x821e1030
	if (!ctx.cr6.eq) goto loc_821E1030;
	// lwz r11,32(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821e1030
	if (!ctx.cr6.eq) goto loc_821E1030;
	// lwz r11,48(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// beq cr6,0x821e1028
	if (ctx.cr6.eq) goto loc_821E1028;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x821e1028
	if (ctx.cr6.eq) goto loc_821E1028;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// bne cr6,0x821e1030
	if (!ctx.cr6.eq) goto loc_821E1030;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// b 0x821e102c
	goto loc_821E102C;
loc_821E1028:
	// lis r11,7
	ctx.r11.s64 = 458752;
loc_821E102C:
	// stw r11,32(r10)
	REX_STORE_U32(ctx.r10.u32 + 32, ctx.r11.u32);
loc_821E1030:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// lwz r8,52(r26)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r26.u32 + 52);
	// rlwimi r9,r11,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r11,r11,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	// lwz r6,32(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 32);
	// rlwinm r8,r8,0,4,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFF00000;
	// lwz r5,40(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,12,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0000;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// beq cr6,0x821e107c
	if (ctx.cr6.eq) goto loc_821E107C;
	// ori r11,r11,8192
	ctx.r11.u64 = ctx.r11.u64 | 8192;
loc_821E107C:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// lwz r10,40(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e10f8
	if (ctx.cr6.eq) goto loc_821E10F8;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821E10F8:
	// lwz r10,64(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x821e1164
	if (ctx.cr6.eq) goto loc_821E1164;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r9,25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 25, ctx.xer);
	// bne cr6,0x821e1164
	if (!ctx.cr6.eq) goto loc_821E1164;
	// lwz r9,16(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,0,27,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r5,24(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r10,36(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r7,0,4,7
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrlwi r6,r5,21
	ctx.r6.u64 = ctx.r5.u32 & 0x7FF;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 | ctx.r6.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stwx r10,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821E1164:
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x821e11d4
	if (!ctx.cr6.eq) goto loc_821E11D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_821E1178:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e140c
	if (ctx.cr6.eq) goto loc_821E140C;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 5, ctx.xer);
	// blt cr6,0x821e11b4
	if (ctx.cr6.lt) goto loc_821E11B4;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bgt cr6,0x821e11b4
	if (ctx.cr6.gt) goto loc_821E11B4;
	// lfd f0,24(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r8.u32 + 24);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,80(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r7,r11,r8
	REX_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
loc_821E11B4:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x821e1178
	if (ctx.cr6.lt) goto loc_821E1178;
	// b 0x821e140c
	goto loc_821E140C;
loc_821E11D4:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x821e1234
	if (!ctx.cr6.eq) goto loc_821E1234;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_821E11E4:
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x821e140c
	if (ctx.cr6.eq) goto loc_821E140C;
	// lwz r7,16(r8)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r8.u32 + 16);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x821e1204
	if (ctx.cr6.eq) goto loc_821E1204;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x821e1214
	if (!ctx.cr6.eq) goto loc_821E1214;
loc_821E1204:
	// lwz r7,92(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,24(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 24);
	// stwx r8,r11,r7
	REX_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r8.u32);
loc_821E1214:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// blt cr6,0x821e11e4
	if (ctx.cr6.lt) goto loc_821E11E4;
	// b 0x821e140c
	goto loc_821E140C;
loc_821E1234:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x821e1268
	if (!ctx.cr6.eq) goto loc_821E1268;
	// lwz r10,0(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,92(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// b 0x821e140c
	goto loc_821E140C;
loc_821E1268:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// addi r28,r11,-11580
	ctx.r28.s64 = ctx.r11.s64 + -11580;
loc_821E1278:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e140c
	if (ctx.cr6.eq) goto loc_821E140C;
	// lwz r10,56(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x821e12dc
	if (!ctx.cr6.eq) goto loc_821E12DC;
	// lwz r10,36(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x821e12dc
	if (!ctx.cr6.eq) goto loc_821E12DC;
	// lwz r10,48(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 48);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// beq cr6,0x821e12d4
	if (ctx.cr6.eq) goto loc_821E12D4;
	// cmplwi cr6,r10,7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 7, ctx.xer);
	// beq cr6,0x821e12d4
	if (ctx.cr6.eq) goto loc_821E12D4;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// beq cr6,0x821e12d4
	if (ctx.cr6.eq) goto loc_821E12D4;
	// cmplwi cr6,r10,78
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 78, ctx.xer);
	// beq cr6,0x821e12d4
	if (ctx.cr6.eq) goto loc_821E12D4;
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// beq cr6,0x821e12d4
	if (ctx.cr6.eq) goto loc_821E12D4;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// bne cr6,0x821e12dc
	if (!ctx.cr6.eq) goto loc_821E12DC;
loc_821E12D4:
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// stw r10,36(r11)
	REX_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
loc_821E12DC:
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r9,r10,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r10,r10,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// lwz r6,36(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r8,r8,0,4,7
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF000000;
	// lwz r5,40(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// clrlwi r9,r7,21
	ctx.r9.u64 = ctx.r7.u32 & 0x7FF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r6,0,8,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF0000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// beq cr6,0x821e1328
	if (ctx.cr6.eq) goto loc_821E1328;
	// ori r10,r10,8192
	ctx.r10.u64 = ctx.r10.u64 | 8192;
loc_821E1328:
	// lwz r9,96(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r8,92(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r8
	REX_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r10,96(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r10.u32);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e13fc
	if (ctx.cr6.eq) goto loc_821E13FC;
	// lwz r9,56(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x821e13a8
	if (!ctx.cr6.eq) goto loc_821E13A8;
	// lwz r10,16(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x821e138c
	if (!ctx.cr6.eq) goto loc_821E138C;
	// lwz r10,20(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e138c
	if (!ctx.cr6.eq) goto loc_821E138C;
	// lwz r10,24(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x821e138c
	if (!ctx.cr6.eq) goto loc_821E138C;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x821e13fc
	if (ctx.cr6.eq) goto loc_821E13FC;
loc_821E138C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,2007
	ctx.r5.s64 = 2007;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E13A0;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
	// b 0x821e13fc
	goto loc_821E13FC;
loc_821E13A8:
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lis r8,-128
	ctx.r8.s64 = -8388608;
	// lwz r7,20(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r8,r9,20,9,11
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x700000) | (ctx.r8.u64 & 0xFFFFFFFFFF8FFFFF);
	// lwz r6,24(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r9,r9,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r7,r7,0,4,7
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF000000;
	// lwz r5,92(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 92);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r8,r6,21
	ctx.r8.u64 = ctx.r6.u32 & 0x7FF;
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r11,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stwx r11,r10,r5
	REX_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r11.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r31)
	REX_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_821E13FC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x821e1278
	if (ctx.cr6.lt) goto loc_821E1278;
loc_821E140C:
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x821e1434
	if (ctx.cr6.eq) goto loc_821E1434;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-11624
	ctx.r6.s64 = ctx.r11.s64 + -11624;
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// bl 0x821afae0
	ctx.lr = 0x821E1430;
	sub_821AFAE0(ctx, base);
	// stw r22,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r22.u32);
loc_821E1434:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x821e1448
	if (ctx.cr6.eq) goto loc_821E1448;
	// lwz r11,96(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,104(r31)
	REX_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// b 0x821e1460
	goto loc_821E1460;
loc_821E1448:
	// addi r4,r26,16
	ctx.r4.s64 = ctx.r26.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821df2f8
	ctx.lr = 0x821E1454;
	sub_821DF2F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x821e1460
	if (!ctx.cr0.lt) goto loc_821E1460;
	// stw r22,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
loc_821E1460:
	// li r3,0
	ctx.r3.s64 = 0;
loc_821E1464:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821EAAF8) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r6,r10,-7404
	ctx.r6.s64 = ctx.r10.s64 + -7404;
	// addi r5,r9,-7428
	ctx.r5.s64 = ctx.r9.s64 + -7428;
	// lwz r11,536(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 536);
	// addi r4,r8,-7436
	ctx.r4.s64 = ctx.r8.s64 + -7436;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

DEFINE_REX_FUNC(sub_821FAA78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x821FAA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,260(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x821faaa8
	if (ctx.cr6.eq) goto loc_821FAAA8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x821fabe0
	goto loc_821FABE0;
loc_821FAAA8:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x8220dd98
	ctx.lr = 0x821FAAB0;
	sub_8220DD98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x821faac4
	if (ctx.cr0.eq) goto loc_821FAAC4;
	// bl 0x8220d6a0
	ctx.lr = 0x821FAABC;
	sub_8220D6A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x821faac8
	goto loc_821FAAC8;
loc_821FAAC4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_821FAAC8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x821faadc
	if (!ctx.cr6.eq) goto loc_821FAADC;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x821fabdc
	goto loc_821FABDC;
loc_821FAADC:
	// lis r4,28800
	ctx.r4.s64 = 1887436800;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,6
	ctx.r5.s64 = 6;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220de30
	ctx.lr = 0x821FAAF8;
	sub_8220DE30(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x821fabcc
	if (ctx.cr0.lt) goto loc_821FABCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,260(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8220d6f0
	ctx.lr = 0x821FAB0C;
	sub_8220D6F0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x821fabcc
	if (ctx.cr0.lt) goto loc_821FABCC;
	// lwz r9,260(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r8,16(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,16(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
loc_821FAB34:
	// lwz r10,260(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stwx r10,r11,r9
	REX_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x821fab34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_821FAB34;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,120(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 120);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// bl 0x8220ea28
	ctx.lr = 0x821FAB6C;
	sub_8220EA28(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x821fab84
	if (!ctx.cr6.eq) goto loc_821FAB84;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x821fabe0
	goto loc_821FABE0;
loc_821FAB84:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,16(r10)
	REX_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FABAC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x821fabbc
	if (ctx.cr0.eq) goto loc_821FABBC;
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x821fabcc
	goto loc_821FABCC;
loc_821FABBC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,260(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 260);
	// bl 0x8220e150
	ctx.lr = 0x821FABC8;
	sub_8220E150(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_821FABCC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82113c30
	ctx.lr = 0x821FABD4;
	sub_82113C30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ddf0
	ctx.lr = 0x821FABDC;
	sub_8220DDF0(ctx, base);
loc_821FABDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_821FABE0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_821FDE60) {
	REX_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_821FDF20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x821FDF28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x821fdf54
	if (ctx.cr6.eq) goto loc_821FDF54;
	// stw r10,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_821FDF54:
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,136(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fdfcc
	if (!ctx.cr6.eq) goto loc_821FDFCC;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,44(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x821fdfa4
	if (ctx.cr6.lt) goto loc_821FDFA4;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,4505
	ctx.r5.s64 = 4505;
	// addi r6,r10,6368
	ctx.r6.s64 = ctx.r10.s64 + 6368;
loc_821FDF88:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8221ff00
	ctx.lr = 0x821FDF98;
	sub_8221FF00(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x821fe0e4
	goto loc_821FE0E4;
loc_821FDFA4:
	// lwz r9,80(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x821fe03c
	if (ctx.cr6.eq) goto loc_821FE03C;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x821fe03c
	if (ctx.cr6.lt) goto loc_821FE03C;
	// subf r11,r9,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r9.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x821fe03c
	goto loc_821FE03C;
loc_821FDFCC:
	// lwz r10,140(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 140);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe000
	if (!ctx.cr6.eq) goto loc_821FE000;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x821fe03c
	if (ctx.cr6.lt) goto loc_821FE03C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,4508
	ctx.r5.s64 = 4508;
	// addi r6,r10,6328
	ctx.r6.s64 = ctx.r10.s64 + 6328;
	// b 0x821fdf88
	goto loc_821FDF88;
loc_821FE000:
	// lwz r10,132(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 132);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe08c
	if (!ctx.cr6.eq) goto loc_821FE08C;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,344(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 344);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE02C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x821fe0dc
	if (ctx.cr0.lt) goto loc_821FE0DC;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
loc_821FE03C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x821fe064
	if (ctx.cr6.eq) goto loc_821FE064;
	// lis r9,-128
	ctx.r9.s64 = -8388608;
	// rlwinm r8,r10,0,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	// rlwimi r9,r10,20,9,11
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x700000) | (ctx.r9.u64 & 0xFFFFFFFFFF8FFFFF);
	// clrlwi r11,r11,21
	ctx.r11.u64 = ctx.r11.u32 & 0x7FF;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_821FE064:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,336(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 336);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x821FE080;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// b 0x821fe0e4
	goto loc_821FE0E4;
loc_821FE08C:
	// lwz r10,144(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 144);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x821fe0c4
	if (!ctx.cr6.eq) goto loc_821FE0C4;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// li r10,19
	ctx.r10.s64 = 19;
	// lwz r9,52(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r11,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x821fe03c
	if (ctx.cr6.lt) goto loc_821FE03C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r5,4549
	ctx.r5.s64 = 4549;
	// addi r6,r10,6284
	ctx.r6.s64 = ctx.r10.s64 + 6284;
	// b 0x821fdf88
	goto loc_821FDF88;
loc_821FE0C4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,6236
	ctx.r6.s64 = ctx.r11.s64 + 6236;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8221ff00
	ctx.lr = 0x821FE0DC;
	sub_8221FF00(ctx, base);
loc_821FE0DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_821FE0E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82203030) {
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
	// bl 0x821fef38
	ctx.lr = 0x82203050;
	sub_821FEF38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82203064
	if (ctx.cr0.eq) goto loc_82203064;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8216b138
	ctx.lr = 0x82203064;
	sub_8216B138(ctx, base);
loc_82203064:
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

DEFINE_REX_FUNC(sub_82203F18) {
	REX_FUNC_PROLOGUE();
	// lwz r10,260(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 260);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r8,8272
	ctx.r8.s64 = 542113792;
	// stw r11,352(r3)
	REX_STORE_U32(ctx.r3.u32 + 352, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,0,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8220401c
	if (!ctx.cr6.eq) goto loc_8220401C;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r11,2,10,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// lwz r8,20(r3)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,12
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFFF;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r6,r6,0,23,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82203f80
	if (ctx.cr0.eq) goto loc_82203F80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82203fa8
	goto loc_82203FA8;
loc_82203F80:
	// lwz r6,0(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r8
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwz r6,4(r6)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r6,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822040ac
	if (ctx.cr0.eq) goto loc_822040AC;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_82203FA8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82204094
	if (ctx.cr6.eq) goto loc_82204094;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// subf r10,r6,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r6.u64;
	// lfd f0,26280(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r5.u32 + 26280);
loc_82203FC4:
	// lwzx r5,r10,r11
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lfd f13,32(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r5.u32 + 32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x822040ac
	if (!ctx.cr6.eq) goto loc_822040AC;
	// lwz r5,0(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r5,r8
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// lwz r5,60(r5)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r5.u32 + 60);
	// rlwinm r5,r5,0,11,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82204008
	if (ctx.cr6.eq) goto loc_82204008;
	// lwz r5,108(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r5,r5,0,20,20
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x822040ac
	if (!ctx.cr0.eq) goto loc_822040AC;
loc_82204008:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82203fc4
	if (ctx.cr6.lt) goto loc_82203FC4;
	// b 0x82204094
	goto loc_82204094;
loc_8220401C:
	// lis r8,8256
	ctx.r8.s64 = 541065216;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822040ac
	if (!ctx.cr6.eq) goto loc_822040AC;
	// clrlwi. r9,r11,12
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,8(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,2,10,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFFFC;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// beq 0x82204094
	if (ctx.cr0.eq) goto loc_82204094;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// subf r7,r6,r11
	ctx.r7.u64 = ctx.r11.u64 - ctx.r6.u64;
loc_82204048:
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r5,r7,r10
	ctx.r5.u64 = REX_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822040ac
	if (!ctx.cr6.eq) goto loc_822040AC;
	// lwz r5,20(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// lwzx r11,r11,r5
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// lwz r11,60(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// rlwinm r11,r11,0,11,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82204084
	if (ctx.cr6.eq) goto loc_82204084;
	// lwz r11,108(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822040ac
	if (!ctx.cr0.eq) goto loc_822040AC;
loc_82204084:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82204048
	if (ctx.cr6.lt) goto loc_82204048;
loc_82204094:
	// lis r4,4
	ctx.r4.s64 = 262144;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x822033b0
	sub_822033B0(ctx, base);
	return;
loc_822040AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82208860) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82208868;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,52(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82208888
	if (!ctx.cr6.eq) goto loc_82208888;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82208aa4
	goto loc_82208AA4;
loc_82208888:
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// lis r30,4336
	ctx.r30.s64 = 284164096;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r9,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFF00000;
	// clrlwi r29,r9,12
	ctx.r29.u64 = ctx.r9.u32 & 0xFFFFF;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x822088f0
	if (ctx.cr6.eq) goto loc_822088F0;
	// lis r9,29520
	ctx.r9.s64 = 1934622720;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822088e8
	if (ctx.cr6.eq) goto loc_822088E8;
	// lis r9,29536
	ctx.r9.s64 = 1935671296;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822088e0
	if (ctx.cr6.eq) goto loc_822088E0;
	// lis r9,29552
	ctx.r9.s64 = 1936719872;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x822088f0
	if (ctx.cr6.eq) goto loc_822088F0;
	// lis r9,29568
	ctx.r9.s64 = 1937768448;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822088f4
	if (!ctx.cr6.eq) goto loc_822088F4;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x822088f4
	goto loc_822088F4;
loc_822088E0:
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x822088f4
	goto loc_822088F4;
loc_822088E8:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x822088f4
	goto loc_822088F4;
loc_822088F0:
	// li r10,5
	ctx.r10.s64 = 5;
loc_822088F4:
	// li r4,94
	ctx.r4.s64 = 94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// bl 0x82207320
	ctx.lr = 0x82208904;
	sub_82207320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
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
	ctx.lr = 0x82208944;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,324(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 324);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,16(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208974;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,312(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 312);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8220899C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bne cr6,0x82208aac
	if (!ctx.cr6.eq) goto loc_82208AAC;
	// bctrl 
	ctx.lr = 0x822089E8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r5,12(r10)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208A18;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208A40;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r10,88(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// xoris r5,r10,256
	ctx.r5.u64 = ctx.r10.u64 ^ 16777216;
loc_82208A50:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
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
	ctx.lr = 0x82208A6C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,308(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 308);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208A88;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x821feb40
	ctx.lr = 0x82208A98;
	sub_821FEB40(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82208AA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82208AAC:
	// bctrl 
	ctx.lr = 0x82208AB0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,332(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r4,8(r10)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208AE0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,80(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,316(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 316);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82208B08;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,260(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,328(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 328);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bctrl 
	ctx.lr = 0x82208B48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lwz r10,260(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 260);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,92(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,332(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 332);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82208B7C;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82208aa4
	if (ctx.cr0.lt) goto loc_82208AA4;
	// lwz r5,88(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82208a50
	goto loc_82208A50;
}

DEFINE_REX_FUNC(sub_8220F640) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r5)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + 20);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwz r11,64(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 64);
	// lwz r10,64(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8220f66c
	if (!ctx.cr6.lt) goto loc_8220F66C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8220F66C:
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

DEFINE_REX_FUNC(sub_82210EA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82210EB0;
	__savegprlr_19(ctx, base);
	// stfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,20(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r28,0(r5)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// lwzx r11,r26,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r20,24(r11)
	ctx.r20.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r23,20(r11)
	ctx.r23.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
loc_82210F08:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822110e0
	if (!ctx.cr6.eq) goto loc_822110E0;
	// lwz r11,72(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82210f30
	if (ctx.cr6.eq) goto loc_82210F30;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822110e0
	if (!ctx.cr6.gt) goto loc_822110E0;
loc_82210F30:
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82210f68
	if (ctx.cr6.eq) goto loc_82210F68;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
loc_82210F44:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82210f68
	if (ctx.cr6.eq) goto loc_82210F68;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
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
	// bne cr6,0x82210f44
	if (!ctx.cr6.eq) goto loc_82210F44;
loc_82210F68:
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822110e0
	if (!ctx.cr6.eq) goto loc_822110E0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x822110e0
	if (!ctx.cr6.eq) goto loc_822110E0;
	// stw r10,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x82211070
	if (!ctx.cr6.gt) goto loc_82211070;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r5,r22,4
	ctx.r5.s64 = ctx.r22.s64 + 4;
	// subf r3,r22,r11
	ctx.r3.u64 = ctx.r11.u64 - ctx.r22.u64;
loc_82210F9C:
	// lwz r4,0(r5)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r5.u32 + 0);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_82210FA4:
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x8221104c
	if (!ctx.cr6.eq) goto loc_8221104C;
	// lwz r11,72(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82210fcc
	if (ctx.cr6.eq) goto loc_82210FCC;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8221104c
	if (!ctx.cr6.gt) goto loc_8221104C;
loc_82210FCC:
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221104c
	if (!ctx.cr6.eq) goto loc_8221104C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221104c
	if (!ctx.cr6.eq) goto loc_8221104C;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8221104c
	if (!ctx.cr6.eq) goto loc_8221104C;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// beq cr6,0x82211034
	if (ctx.cr6.eq) goto loc_82211034;
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
loc_82211010:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82211034
	if (ctx.cr6.eq) goto loc_82211034;
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
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
	// bne cr6,0x82211010
	if (!ctx.cr6.eq) goto loc_82211010;
loc_82211034:
	// lwz r8,20(r10)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + 20);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x8221104c
	if (!ctx.cr6.eq) goto loc_8221104C;
	// lwz r11,24(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8221105c
	if (ctx.cr6.eq) goto loc_8221105C;
loc_8221104C:
	// lwz r7,52(r10)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82210fa4
	if (!ctx.cr6.eq) goto loc_82210FA4;
	// b 0x82211070
	goto loc_82211070;
loc_8221105C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwx r7,r3,r5
	REX_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r7.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82210f9c
	if (ctx.cr6.lt) goto loc_82210F9C;
loc_82211070:
	// cmplw cr6,r6,r24
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x822110e0
	if (!ctx.cr6.eq) goto loc_822110E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x822110c4
	if (ctx.cr6.eq) goto loc_822110C4;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
loc_8221108C:
	// lwz r10,0(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r30,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822110bc
	if (ctx.cr6.eq) goto loc_822110BC;
	// lwz r8,20(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r10,r8,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// subf r10,r10,r21
	ctx.r10.u64 = ctx.r21.u64 - ctx.r10.u64;
	// mullw r10,r10,r10
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_822110BC:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8221108c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8221108C;
loc_822110C4:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822110e0
	if (!ctx.cr6.gt) goto loc_822110E0;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// bl 0x8215e640
	ctx.lr = 0x822110E0;
	sub_8215E640(ctx, base);
loc_822110E0:
	// lwz r10,52(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82210f08
	if (!ctx.cr6.eq) goto loc_82210F08;
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// beq cr6,0x82211108
	if (ctx.cr6.eq) goto loc_82211108;
	// rlwinm r5,r24,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8215e640
	ctx.lr = 0x82211104;
	sub_8215E640(ctx, base);
	// b 0x822112b8
	goto loc_822112B8;
loc_82211108:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220eac8
	ctx.lr = 0x82211124;
	sub_8220EAC8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8221113c
	if (!ctx.cr6.eq) goto loc_8221113C;
loc_82211130:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x822112bc
	goto loc_822112BC;
loc_8221113C:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r25
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r4,r11,r26
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82211154;
	sub_8220D6F0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82211270
	if (ctx.cr6.eq) goto loc_82211270;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// lfd f31,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
loc_8221116C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwzx r10,r31,r22
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r22.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r26,r31,r22
	ctx.r26.u64 = ctx.r31.u64 + ctx.r22.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r5,0(r19)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r4,136(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// bl 0x8220ea28
	ctx.lr = 0x82211194;
	sub_8220EA28(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stwx r3,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82211130
	if (ctx.cr6.eq) goto loc_82211130;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r20,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r20.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r23,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r23.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,52(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 52);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,52(r11)
	REX_STORE_U32(ctx.r11.u32 + 52, ctx.r10.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,20(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 20);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r11,52(r10)
	REX_STORE_U32(ctx.r10.u32 + 52, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r11,r31
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// blt cr6,0x8221116c
	if (ctx.cr6.lt) goto loc_8221116C;
loc_82211270:
	// cmplw cr6,r27,r21
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x822112a0
	if (!ctx.cr6.gt) goto loc_822112A0;
	// subf r10,r21,r27
	ctx.r10.u64 = ctx.r27.u64 - ctx.r21.u64;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82211284:
	// lwz r10,24(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lwz r9,-4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + -4);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bdnz 0x82211284
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82211284;
loc_822112A0:
	// lwz r11,24(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 24);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// lwz r11,0(r19)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r19.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r11.u32);
loc_822112B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822112BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82225240) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x8222527c
	if (ctx.cr6.eq) goto loc_8222527C;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// bl 0x82224e48
	ctx.lr = 0x82225274;
	sub_82224E48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82225280
	if (ctx.cr0.lt) goto loc_82225280;
loc_8222527C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82225280:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82226E38) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x82226E40;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r15,-1
	ctx.r15.s64 = -1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r15,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r15.u32);
	// bl 0x822173b0
	ctx.lr = 0x82226E5C;
	sub_822173B0(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r14,0
	ctx.r14.s64 = 0;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// stw r14,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82226eb8
	if (ctx.cr6.eq) goto loc_82226EB8;
	// lwz r6,20(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r5,136(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
loc_82226E84:
	// lwzx r11,r10,r6
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwz r4,4(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82226ea4
	if (!ctx.cr6.eq) goto loc_82226EA4;
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82226ea4
	if (ctx.cr6.gt) goto loc_82226EA4;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
loc_82226EA4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82226e84
	if (ctx.cr6.lt) goto loc_82226E84;
	// stw r9,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_82226EB8:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8216b018
	ctx.lr = 0x82226ED4;
	sub_8216B018(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r27.u32);
	// bne 0x82226eec
	if (!ctx.cr0.eq) goto loc_82226EEC;
loc_82226EE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8222761c
	goto loc_8222761C;
loc_82226EEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82226EFC;
	sub_8215EC60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82226f5c
	if (!ctx.cr6.gt) goto loc_82226F5C;
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
loc_82226F10:
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
	// bne cr6,0x82226f48
	if (!ctx.cr6.eq) goto loc_82226F48;
	// lwz r10,12(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,16(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r27
	ctx.r7.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82226f48
	if (ctx.cr6.gt) goto loc_82226F48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r11,r10,r27
	REX_STORE_U32(ctx.r10.u32 + ctx.r27.u32, ctx.r11.u32);
loc_82226F48:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82226f10
	if (ctx.cr6.lt) goto loc_82226F10;
loc_82226F5C:
	// lwz r17,12(r31)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stw r14,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822275b4
	if (ctx.cr6.eq) goto loc_822275B4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r16,r14
	ctx.r16.u64 = ctx.r14.u64;
	// lfd f30,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// lfd f31,1792(r10)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r10.u32 + 1792);
loc_82226F80:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r29,r11,r16
	ctx.r29.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82227578
	if (ctx.cr0.eq) goto loc_82227578;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
	// bl 0x8220d718
	ctx.lr = 0x82226FAC;
	sub_8220D718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8222762c
	if (ctx.cr0.eq) goto loc_8222762C;
loc_82226FB4:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82223898
	ctx.lr = 0x82226FD8;
	sub_82223898(ctx, base);
	// subfic r11,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r3.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 & ctx.r28.u64;
	// bl 0x8220d718
	ctx.lr = 0x82226FF8;
	sub_8220D718(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82226fb4
	if (!ctx.cr0.eq) goto loc_82226FB4;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8222762c
	if (!ctx.cr6.eq) goto loc_8222762C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8220d770
	ctx.lr = 0x82227010;
	sub_8220D770(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8222762c
	if (!ctx.cr0.eq) goto loc_8222762C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r20,r14
	ctx.r20.u64 = ctx.r14.u64;
	// bl 0x8220d718
	ctx.lr = 0x8222702C;
	sub_8220D718(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82227044
	if (ctx.cr0.eq) goto loc_82227044;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// twllei r26,0
	if (ctx.r26.s32 == 0 || ctx.r26.u32 < 0u) ppc_trap(ctx, base, 0);
	// divwu r22,r11,r26
	ctx.r22.u64 = uint32_t(ctx.r26.u32 ? ctx.r11.u32 / ctx.r26.u32 : 0);
	// b 0x82227048
	goto loc_82227048;
loc_82227044:
	// mr r22,r14
	ctx.r22.u64 = ctx.r14.u64;
loc_82227048:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r23,r14
	ctx.r23.u64 = ctx.r14.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// std r14,0(r11)
	REX_STORE_U64(ctx.r11.u32 + 0, ctx.r14.u64);
	// std r14,8(r11)
	REX_STORE_U64(ctx.r11.u32 + 8, ctx.r14.u64);
	// beq cr6,0x82227578
	if (ctx.cr6.eq) goto loc_82227578;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r18,80(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// mr r24,r14
	ctx.r24.u64 = ctx.r14.u64;
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// addi r19,r11,-4
	ctx.r19.s64 = ctx.r11.s64 + -4;
loc_82227074:
	// addi r10,r24,4
	ctx.r10.s64 = ctx.r24.s64 + 4;
	// lwzx r11,r10,r19
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822273d8
	if (!ctx.cr6.eq) goto loc_822273D8;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// li r25,1
	ctx.r25.s64 = 1;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82227154
	if (!ctx.cr6.lt) goto loc_82227154;
	// subf r11,r11,r26
	ctx.r11.u64 = ctx.r26.u64 - ctx.r11.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822270A0:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8222714c
	if (!ctx.cr6.eq) goto loc_8222714C;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82227140
	if (ctx.cr6.eq) goto loc_82227140;
	// lwz r8,8(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r9,r14
	ctx.r9.u64 = ctx.r14.u64;
	// rlwinm r6,r26,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
loc_822270C8:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,4(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82227140
	if (!ctx.cr6.eq) goto loc_82227140;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r3,r10,r4
	ctx.r3.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// lwzx r4,r11,r4
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r4,8(r4)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82227140
	if (!ctx.cr6.eq) goto loc_82227140;
	// lwz r4,20(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r4,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82227140
	if (!ctx.cr6.eq) goto loc_82227140;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r22
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x822270c8
	if (ctx.cr6.lt) goto loc_822270C8;
loc_82227140:
	// cmplw cr6,r7,r22
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x8222714c
	if (!ctx.cr6.eq) goto loc_8222714C;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
loc_8222714C:
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x822270a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822270A0;
loc_82227154:
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// rlwimi r4,r25,0,12,31
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFF) | (ctx.r4.u64 & 0xFFFFFFFFFFF00000);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220eac8
	ctx.lr = 0x8222716C;
	sub_8220EAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822276d0
	if (ctx.cr6.eq) goto loc_822276D0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82227190;
	sub_8220D6F0(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// ble cr6,0x822272e4
	if (!ctx.cr6.gt) goto loc_822272E4;
	// rlwinm r4,r26,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// subf r27,r23,r26
	ctx.r27.u64 = ctx.r26.u64 - ctx.r23.u64;
loc_822271AC:
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwzx r11,r9,r3
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x822272dc
	if (!ctx.cr6.eq) goto loc_822272DC;
	// mr r6,r14
	ctx.r6.u64 = ctx.r14.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82227290
	if (ctx.cr6.eq) goto loc_82227290;
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r14
	ctx.r8.u64 = ctx.r14.u64;
loc_822271D4:
	// add r11,r8,r7
	ctx.r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r15,20(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r24,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r14,r15,r10
	ctx.r14.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r10.u32);
	// lwzx r15,r11,r15
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r14,4(r14)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r15,4(r15)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + 4);
	// cmplw cr6,r14,r15
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8222724c
	if (!ctx.cr6.eq) goto loc_8222724C;
	// lwz r15,20(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r14,r15,r10
	ctx.r14.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r10.u32);
	// lwzx r15,r11,r15
	ctx.r15.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r14,8(r14)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r14.u32 + 8);
	// lwz r15,8(r15)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r15.u32 + 8);
	// cmplw cr6,r14,r15
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x8222724c
	if (!ctx.cr6.eq) goto loc_8222724C;
	// lwz r15,20(r31)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r15,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r15.u32 + ctx.r10.u32);
	// lwzx r11,r11,r15
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r15.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8222724c
	if (!ctx.cr6.eq) goto loc_8222724C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// add r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x822271d4
	if (ctx.cr6.lt) goto loc_822271D4;
loc_8222724C:
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// blt cr6,0x822272d4
	if (ctx.cr6.lt) goto loc_822272D4;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// rlwinm r8,r25,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82227264:
	// lwz r7,8(r29)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r15,8(r30)
	ctx.r15.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stwx r6,r9,r3
	REX_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r6.u32);
	// lwzx r7,r11,r7
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stwx r7,r10,r15
	REX_STORE_U32(ctx.r10.u32 + ctx.r15.u32, ctx.r7.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x82227264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227264;
	// li r14,0
	ctx.r14.s64 = 0;
	// li r15,-1
	ctx.r15.s64 = -1;
loc_82227290:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822272cc
	if (ctx.cr6.eq) goto loc_822272CC;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stwx r11,r5,r10
	REX_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
loc_822272CC:
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// b 0x822272dc
	goto loc_822272DC;
loc_822272D4:
	// li r14,0
	ctx.r14.s64 = 0;
	// li r15,-1
	ctx.r15.s64 = -1;
loc_822272DC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x822271ac
	if (!ctx.cr0.eq) goto loc_822271AC;
loc_822272E4:
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,20480
	ctx.r10.s64 = 1342177280;
	// rlwinm r11,r11,0,0,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822273d8
	if (!ctx.cr6.eq) goto loc_822273D8;
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82227314
	if (!ctx.cr6.eq) goto loc_82227314;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x822273c0
	goto loc_822273C0;
loc_82227314:
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// lwz r4,136(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x8222732C;
	sub_8220EA28(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r3,0(r21)
	REX_STORE_U32(ctx.r21.u32 + 0, ctx.r3.u32);
	// stw r3,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x822276d0
	if (ctx.cr6.eq) goto loc_822276D0;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,20(r10)
	REX_STORE_U32(ctx.r10.u32 + 20, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r10,24(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r10,24(r11)
	REX_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// bl 0x82215988
	ctx.lr = 0x822273B0;
	sub_82215988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8222761c
	if (ctx.cr0.lt) goto loc_8222761C;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
loc_822273C0:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
loc_822273D8:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmplw cr6,r23,r26
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82227074
	if (ctx.cr6.lt) goto loc_82227074;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82227574
	if (ctx.cr6.eq) goto loc_82227574;
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// bne cr6,0x822274a0
	if (!ctx.cr6.eq) goto loc_822274A0;
	// lis r4,8256
	ctx.r4.s64 = 541065216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x8220eac8
	ctx.lr = 0x82227410;
	sub_8220EAC8(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82227420:
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,24(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,72(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 72);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r7
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// lwz r8,0(r8)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,0,0,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFF00000;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82227494
	if (!ctx.cr6.eq) goto loc_82227494;
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r8,r7,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,72(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 72);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r14,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r14.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r8,24(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,72(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 72);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82227494:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82227420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227420;
	// b 0x822274b4
	goto loc_822274B4;
loc_822274A0:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwimi r4,r11,28,0,11
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFF00000) | (ctx.r4.u64 & 0xFFFFFFFF000FFFFF);
	// bl 0x8220eac8
	ctx.lr = 0x822274B0;
	sub_8220EAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_822274B4:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x82226ee0
	if (ctx.cr6.eq) goto loc_82226EE0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x822274D4;
	sub_8220D6F0(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r27,r20,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r28,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r28.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8215e640
	ctx.lr = 0x82227510;
	sub_8215E640(ctx, base);
	// cmplwi cr6,r20,2
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 2, ctx.xer);
	// beq cr6,0x8222756c
	if (ctx.cr6.eq) goto loc_8222756C;
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82227548
	if (!ctx.cr6.eq) goto loc_82227548;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,120(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 120);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8220ea28
	ctx.lr = 0x8222753C;
	sub_8220EA28(ctx, base);
	// stw r3,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822276d0
	if (ctx.cr6.eq) goto loc_822276D0;
loc_82227548:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8222756c
	if (ctx.cr6.eq) goto loc_8222756C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_82227558:
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,84(r1)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r9,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82227558
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82227558;
loc_8222756C:
	// addi r11,r18,1
	ctx.r11.s64 = ctx.r18.s64 + 1;
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82227574:
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
loc_82227578:
	// lwz r11,96(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// addi r16,r16,4
	ctx.r16.s64 = ctx.r16.s64 + 4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82226f80
	if (ctx.cr6.lt) goto loc_82226F80;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x822275b4
	if (ctx.cr6.eq) goto loc_822275B4;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_822275A0:
	// lwz r10,24(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r14,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r14.u32);
	// bdnz 0x822275a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822275A0;
loc_822275B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218838
	ctx.lr = 0x822275BC;
	sub_82218838(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822275d0
	if (ctx.cr0.eq) goto loc_822275D0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8222760c
	if (ctx.cr6.lt) goto loc_8222760C;
loc_822275D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82213478
	ctx.lr = 0x822275D8;
	sub_82213478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822275ec
	if (ctx.cr0.eq) goto loc_822275EC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8222760c
	if (ctx.cr6.lt) goto loc_8222760C;
loc_822275EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82218f38
	ctx.lr = 0x822275F4;
	sub_82218F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82227608
	if (ctx.cr0.eq) goto loc_82227608;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x8222760c
	if (ctx.cr6.lt) goto loc_8222760C;
loc_82227608:
	// mr r30,r14
	ctx.r30.u64 = ctx.r14.u64;
loc_8222760C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8216b138
	ctx.lr = 0x82227618;
	sub_8216B138(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8222761C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_8222762C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r6,12(r29)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r5,4(r29)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x8220eac8
	ctx.lr = 0x82227640;
	sub_8220EAC8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x822276d0
	if (ctx.cr6.eq) goto loc_822276D0;
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8220d6f0
	ctx.lr = 0x82227664;
	sub_8220D6F0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,8(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8215e640
	ctx.lr = 0x82227678;
	sub_8215E640(ctx, base);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,16(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x8215e640
	ctx.lr = 0x8222768C;
	sub_8215E640(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82227578
	if (!ctx.cr6.gt) goto loc_82227578;
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
loc_822276A0:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,20(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r9,r9,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stw r28,72(r9)
	REX_STORE_U32(ctx.r9.u32 + 72, ctx.r28.u32);
	// lwz r9,12(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x822276a0
	if (ctx.cr6.lt) goto loc_822276A0;
	// b 0x82227578
	goto loc_82227578;
loc_822276D0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// lwz r27,88(r1)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x8222760c
	goto loc_8222760C;
}

DEFINE_REX_FUNC(sub_8223D378) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8223D380;
	__savegprlr_26(ctx, base);
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lwz r11,112(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D3AC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,108(r26)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r26.u32 + 108);
	// lwz r11,116(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8223D3C8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8223d3dc
	if (ctx.cr6.eq) goto loc_8223D3DC;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_8223D3DC:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bne cr6,0x8223d400
	if (!ctx.cr6.eq) goto loc_8223D400;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8223d4b4
	if (!ctx.cr6.eq) goto loc_8223D4B4;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8223d4ac
	goto loc_8223D4AC;
loc_8223D400:
	// cmplwi cr6,r29,5
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 5, ctx.xer);
	// bne cr6,0x8223d434
	if (!ctx.cr6.eq) goto loc_8223D434;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d4b4
	if (!ctx.cr6.eq) goto loc_8223D4B4;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8223d4ac
	if (ctx.cr6.eq) goto loc_8223D4AC;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8223d460
	goto loc_8223D460;
loc_8223D434:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bne cr6,0x8223d468
	if (!ctx.cr6.eq) goto loc_8223D468;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8223d4b4
	if (!ctx.cr6.eq) goto loc_8223D4B4;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8223d4ac
	if (ctx.cr6.eq) goto loc_8223D4AC;
loc_8223D460:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8223d4ac
	goto loc_8223D4AC;
loc_8223D468:
	// cmplwi cr6,r29,11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 11, ctx.xer);
	// bne cr6,0x8223d484
	if (!ctx.cr6.eq) goto loc_8223D484;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x8223d4b4
	if (!ctx.cr6.lt) goto loc_8223D4B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8223d4a8
	goto loc_8223D4A8;
loc_8223D484:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bne cr6,0x8223d4a0
	if (!ctx.cr6.eq) goto loc_8223D4A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8223d4b4
	if (!ctx.cr6.lt) goto loc_8223D4B4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8223d4a8
	goto loc_8223D4A8;
loc_8223D4A0:
	// cmplwi cr6,r29,65535
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 65535, ctx.xer);
	// bne cr6,0x8223d4b4
	if (!ctx.cr6.eq) goto loc_8223D4B4;
loc_8223D4A8:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_8223D4AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8223d4bc
	goto loc_8223D4BC;
loc_8223D4B4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8223D4BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82240710) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r11,0,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82240744
	if (ctx.cr0.eq) goto loc_82240744;
	// li r4,1
	ctx.r4.s64 = 1;
loc_8224073C:
	// bl 0x822045a8
	ctx.lr = 0x82240740;
	sub_822045A8(ctx, base);
	// b 0x82240824
	goto loc_82240824;
loc_82240744:
	// rlwinm. r10,r11,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224075c
	if (ctx.cr0.eq) goto loc_8224075C;
	// rlwinm. r9,r11,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8224075c
	if (ctx.cr0.eq) goto loc_8224075C;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x8224073c
	goto loc_8224073C;
loc_8224075C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8224076c
	if (ctx.cr6.eq) goto loc_8224076C;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8224073c
	goto loc_8224073C;
loc_8224076C:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8224077c
	if (ctx.cr0.eq) goto loc_8224077C;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x8224073c
	goto loc_8224073C;
loc_8224077C:
	// andi. r10,r11,8224
	ctx.r10.u64 = ctx.r11.u64 & 8224;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi cr6,r10,8224
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8224, ctx.xer);
	// bne cr6,0x82240790
	if (!ctx.cr6.eq) goto loc_82240790;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8224073c
	goto loc_8224073C;
loc_82240790:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r9,r11,0,13,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FFE0;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// rlwinm r9,r9,0,26,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFC003F;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822407b0
	if (!ctx.cr6.eq) goto loc_822407B0;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x8224073c
	goto loc_8224073C;
loc_822407B0:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407c0
	if (ctx.cr0.eq) goto loc_822407C0;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x8224073c
	goto loc_8224073C;
loc_822407C0:
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407d8
	if (ctx.cr0.eq) goto loc_822407D8;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407d8
	if (ctx.cr0.eq) goto loc_822407D8;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x8224073c
	goto loc_8224073C;
loc_822407D8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407f0
	if (ctx.cr0.eq) goto loc_822407F0;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822407f0
	if (ctx.cr0.eq) goto loc_822407F0;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x8224073c
	goto loc_8224073C;
loc_822407F0:
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8224081c
	if (ctx.cr0.eq) goto loc_8224081C;
	// lwz r11,72(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 72);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,24(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,4500
	ctx.r5.s64 = 4500;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r10,20008
	ctx.r6.s64 = ctx.r10.s64 + 20008;
	// lwzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r4,60(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8221ff00
	ctx.lr = 0x8224081C;
	sub_8221FF00(ctx, base);
loc_8224081C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82240824:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82242B00) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82242B10:
	// srw r11,r4,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82242b44
	if (ctx.cr6.lt) goto loc_82242B44;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bgt cr6,0x82242b44
	if (ctx.cr6.gt) goto loc_82242B44;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82242b74
	if (!ctx.cr6.gt) goto loc_82242B74;
	// mulli r10,r11,3
	ctx.r10.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(3));
	// addi r7,r10,-3
	ctx.r7.s64 = ctx.r10.s64 + -3;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// slw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// b 0x82242b5c
	goto loc_82242B5C;
loc_82242B44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82242b58
	if (ctx.cr6.eq) goto loc_82242B58;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82242b74
	if (!ctx.cr6.eq) goto loc_82242B74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82242B58:
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
loc_82242B5C:
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmpwi cr6,r9,12
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 12, ctx.xer);
	// blt cr6,0x82242b10
	if (ctx.cr6.lt) goto loc_82242B10;
	// blr 
	return;
loc_82242B74:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82243CA0) {
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
	// lwz r3,316(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 316);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243cd0
	if (ctx.cr6.eq) goto loc_82243CD0;
	// bl 0x8224f680
	ctx.lr = 0x82243CCC;
	sub_8224F680(ctx, base);
	// stw r30,316(r31)
	REX_STORE_U32(ctx.r31.u32 + 316, ctx.r30.u32);
loc_82243CD0:
	// lwz r3,312(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 312);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243ce4
	if (ctx.cr6.eq) goto loc_82243CE4;
	// bl 0x821786e8
	ctx.lr = 0x82243CE0;
	sub_821786E8(ctx, base);
	// stw r30,312(r31)
	REX_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
loc_82243CE4:
	// lwz r3,128(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82243d04
	if (ctx.cr6.eq) goto loc_82243D04;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82243D00;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
loc_82243D04:
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

DEFINE_REX_FUNC(sub_82245BB0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d4
	ctx.lr = 0x82245BB8;
	__savegprlr_19(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// li r22,1
	ctx.r22.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r3,16
	ctx.r27.s64 = ctx.r3.s64 + 16;
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82246714
	if (!ctx.cr6.eq) goto loc_82246714;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r21,r3,24
	ctx.r21.s64 = ctx.r3.s64 + 24;
	// addi r10,r11,-31656
	ctx.r10.s64 = ctx.r11.s64 + -31656;
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
loc_82245BF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x82245c18
	if (ctx.cr0.eq) goto loc_82245C18;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82245bf4
	if (ctx.cr6.eq) goto loc_82245BF4;
loc_82245C18:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82246714
	if (!ctx.cr0.eq) goto loc_82246714;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82245C30;
	sub_8215EC60(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// stw r22,32(r20)
	REX_STORE_U32(ctx.r20.u32 + 32, ctx.r22.u32);
	// stb r19,0(r29)
	REX_STORE_U8(ctx.r29.u32 + 0, ctx.r19.u8);
	// b 0x82245c54
	goto loc_82245C54;
loc_82245C40:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245c78
	if (!ctx.cr6.eq) goto loc_82245C78;
loc_82245C54:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245C60;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245c40
	if (!ctx.cr0.lt) goto loc_82245C40;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245C6C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31684
	ctx.r5.s64 = ctx.r11.s64 + -31684;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245C78:
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
loc_82245C7C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82245c90
	if (!ctx.cr6.eq) goto loc_82245C90;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,44
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 44, ctx.xer);
	// beq cr6,0x82245d6c
	if (ctx.cr6.eq) goto loc_82245D6C;
loc_82245C90:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82245cac
	if (!ctx.cr6.eq) goto loc_82245CAC;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// stw r11,0(r20)
	REX_STORE_U32(ctx.r20.u32 + 0, ctx.r11.u32);
	// lwz r5,0(r21)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// b 0x82245d34
	goto loc_82245D34;
loc_82245CAC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82245d14
	if (!ctx.cr6.eq) goto loc_82245D14;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// beq cr6,0x82245cdc
	if (ctx.cr6.eq) goto loc_82245CDC;
	// cmpwi cr6,r11,93
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 93, ctx.xer);
	// beq cr6,0x82245cdc
	if (ctx.cr6.eq) goto loc_82245CDC;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x82245cdc
	if (ctx.cr6.eq) goto loc_82245CDC;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x82246708
	if (!ctx.cr6.eq) goto loc_82246708;
loc_82245CDC:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f0678
	ctx.lr = 0x82245CEC;
	sub_821F0678(ctx, base);
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,91
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 91, ctx.xer);
	// bne cr6,0x82245d04
	if (!ctx.cr6.eq) goto loc_82245D04;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822466fc
	if (!ctx.cr6.eq) goto loc_822466FC;
loc_82245D04:
	// addi r11,r11,-93
	ctx.r11.s64 = ctx.r11.s64 + -93;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r30,r11,27,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82245d40
	goto loc_82245D40;
loc_82245D14:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82246708
	if (!ctx.cr6.eq) goto loc_82246708;
	// li r5,10
	ctx.r5.s64 = 10;
	// lwz r3,0(r21)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r30,r19
	ctx.r30.u64 = ctx.r19.u64;
	// bl 0x82161688
	ctx.lr = 0x82245D30;
	sub_82161688(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82245D34:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x821f0678
	ctx.lr = 0x82245D40;
	sub_821F0678(ctx, base);
loc_82245D40:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245D4C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822466a8
	if (ctx.cr0.lt) goto loc_822466A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82245d40
	if (ctx.cr6.eq) goto loc_82245D40;
	// b 0x82245c7c
	goto loc_82245C7C;
loc_82245D6C:
	// lwz r11,0(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82245d9c
	if (ctx.cr6.eq) goto loc_82245D9C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82245D7C:
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82245d7c
	if (!ctx.cr6.eq) goto loc_82245D7C;
	// subf r11,r29,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82245dbc
	if (!ctx.cr0.eq) goto loc_82245DBC;
loc_82245D9C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31704
	ctx.r5.s64 = ctx.r11.s64 + -31704;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245DA8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245dd4
	if (!ctx.cr6.eq) goto loc_82245DD4;
loc_82245DBC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245DC8;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245da8
	if (!ctx.cr0.lt) goto loc_82245DA8;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245DD4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82245de8
	if (ctx.cr6.eq) goto loc_82245DE8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31724
	ctx.r5.s64 = ctx.r11.s64 + -31724;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245DE8:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-7352
	ctx.r3.s64 = ctx.r11.s64 + -7352;
	// bl 0x82242778
	ctx.lr = 0x82245DFC;
	sub_82242778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245e10
	if (!ctx.cr0.lt) goto loc_82245E10;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31748
	ctx.r5.s64 = ctx.r11.s64 + -31748;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245E10:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,20(r20)
	REX_STORE_U32(ctx.r20.u32 + 20, ctx.r11.u32);
	// b 0x82245e30
	goto loc_82245E30;
loc_82245E1C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245e48
	if (!ctx.cr6.eq) goto loc_82245E48;
loc_82245E30:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245E3C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245e1c
	if (!ctx.cr0.lt) goto loc_82245E1C;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245E48:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82245e7c
	if (ctx.cr6.eq) goto loc_82245E7C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82245e7c
	if (ctx.cr6.eq) goto loc_82245E7C;
loc_82245E5C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31776
	ctx.r5.s64 = ctx.r11.s64 + -31776;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245E68:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245e94
	if (!ctx.cr6.eq) goto loc_82245E94;
loc_82245E7C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245E88;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245e68
	if (!ctx.cr0.lt) goto loc_82245E68;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245E94:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82245ea8
	if (ctx.cr6.eq) goto loc_82245EA8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31796
	ctx.r5.s64 = ctx.r11.s64 + -31796;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245EA8:
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// lwz r4,0(r21)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r11,-7408
	ctx.r3.s64 = ctx.r11.s64 + -7408;
	// bl 0x82242778
	ctx.lr = 0x82245EBC;
	sub_82242778(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245ed0
	if (!ctx.cr0.lt) goto loc_82245ED0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31820
	ctx.r5.s64 = ctx.r11.s64 + -31820;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245ED0:
	// lwz r11,112(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,16(r20)
	REX_STORE_U32(ctx.r20.u32 + 16, ctx.r11.u32);
	// b 0x82245ef0
	goto loc_82245EF0;
loc_82245EDC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245f08
	if (!ctx.cr6.eq) goto loc_82245F08;
loc_82245EF0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245EFC;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245edc
	if (!ctx.cr0.lt) goto loc_82245EDC;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245F08:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82245f34
	if (ctx.cr6.eq) goto loc_82245F34;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82245f34
	if (ctx.cr6.eq) goto loc_82245F34;
	// b 0x82245e5c
	goto loc_82245E5C;
loc_82245F20:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245f4c
	if (!ctx.cr6.eq) goto loc_82245F4C;
loc_82245F34:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245F40;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245f20
	if (!ctx.cr0.lt) goto loc_82245F20;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245F4C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82245f80
	if (ctx.cr6.eq) goto loc_82245F80;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,91
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 91, ctx.xer);
	// beq cr6,0x82245f80
	if (ctx.cr6.eq) goto loc_82245F80;
loc_82245F60:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31868
	ctx.r5.s64 = ctx.r11.s64 + -31868;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245F6C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245f98
	if (!ctx.cr6.eq) goto loc_82245F98;
loc_82245F80:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245F8C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245f6c
	if (!ctx.cr0.lt) goto loc_82245F6C;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245F98:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82245fac
	if (ctx.cr6.eq) goto loc_82245FAC;
loc_82245FA0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31912
	ctx.r5.s64 = ctx.r11.s64 + -31912;
	// b 0x822466d8
	goto loc_822466D8;
loc_82245FAC:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,24(r20)
	REX_STORE_U32(ctx.r20.u32 + 24, ctx.r11.u32);
	// b 0x82245fcc
	goto loc_82245FCC;
loc_82245FB8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82245fe4
	if (!ctx.cr6.eq) goto loc_82245FE4;
loc_82245FCC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82245FD8;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245fb8
	if (!ctx.cr0.lt) goto loc_82245FB8;
	// b 0x822466a8
	goto loc_822466A8;
loc_82245FE4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82246010
	if (ctx.cr6.eq) goto loc_82246010;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x82246010
	if (ctx.cr6.eq) goto loc_82246010;
	// b 0x82245f60
	goto loc_82245F60;
loc_82245FFC:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82246028
	if (!ctx.cr6.eq) goto loc_82246028;
loc_82246010:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x8224601C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82245ffc
	if (!ctx.cr0.lt) goto loc_82245FFC;
	// b 0x822466a8
	goto loc_822466A8;
loc_82246028:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82245fa0
	if (!ctx.cr6.eq) goto loc_82245FA0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,28(r20)
	REX_STORE_U32(ctx.r20.u32 + 28, ctx.r11.u32);
	// b 0x82246050
	goto loc_82246050;
loc_8224603C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82246068
	if (!ctx.cr6.eq) goto loc_82246068;
loc_82246050:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x8224605C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224603c
	if (!ctx.cr0.lt) goto loc_8224603C;
	// b 0x822466a8
	goto loc_822466A8;
loc_82246068:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82246094
	if (ctx.cr6.eq) goto loc_82246094;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,93
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 93, ctx.xer);
	// beq cr6,0x82246094
	if (ctx.cr6.eq) goto loc_82246094;
	// b 0x82245f60
	goto loc_82245F60;
loc_82246080:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822460ac
	if (!ctx.cr6.eq) goto loc_822460AC;
loc_82246094:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822460A0;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246080
	if (!ctx.cr0.lt) goto loc_82246080;
	// b 0x822466a8
	goto loc_822466A8;
loc_822460AC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x822460d8
	if (ctx.cr6.eq) goto loc_822460D8;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// beq cr6,0x822460d8
	if (ctx.cr6.eq) goto loc_822460D8;
	// b 0x82245e5c
	goto loc_82245E5C;
loc_822460C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822460f0
	if (!ctx.cr6.eq) goto loc_822460F0;
loc_822460D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822460E4;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822460c4
	if (!ctx.cr0.lt) goto loc_822460C4;
	// b 0x822466a8
	goto loc_822466A8;
loc_822460F0:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x822466f0
	if (!ctx.cr6.eq) goto loc_822466F0;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x822466f0
	if (ctx.cr6.lt) goto loc_822466F0;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164f38
	ctx.lr = 0x82246114;
	sub_82164F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82246128
	if (!ctx.cr0.eq) goto loc_82246128;
loc_8224611C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31956
	ctx.r5.s64 = ctx.r11.s64 + -31956;
	// b 0x822466d8
	goto loc_822466D8;
loc_82246128:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164fd8
	ctx.lr = 0x82246138;
	sub_82164FD8(ctx, base);
	// extsb r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,98
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 98, ctx.xer);
	// beq cr6,0x82246184
	if (ctx.cr6.eq) goto loc_82246184;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82246178
	if (ctx.cr6.eq) goto loc_82246178;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82246170
	if (ctx.cr6.eq) goto loc_82246170;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x82246168
	if (ctx.cr6.eq) goto loc_82246168;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-31984
	ctx.r5.s64 = ctx.r11.s64 + -31984;
	// b 0x822466d8
	goto loc_822466D8;
loc_82246168:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8224617c
	goto loc_8224617C;
loc_82246170:
	// stw r22,4(r20)
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r22.u32);
	// b 0x82246188
	goto loc_82246188;
loc_82246178:
	// li r11,2
	ctx.r11.s64 = 2;
loc_8224617C:
	// stw r11,4(r20)
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// b 0x82246188
	goto loc_82246188;
loc_82246184:
	// stw r19,4(r20)
	REX_STORE_U32(ctx.r20.u32 + 4, ctx.r19.u32);
loc_82246188:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164f38
	ctx.lr = 0x82246198;
	sub_82164F38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x822461f4
	if (ctx.cr0.eq) goto loc_822461F4;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r11,1(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 1);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164fd8
	ctx.lr = 0x822461B0;
	sub_82164FD8(ctx, base);
	// cmpwi cr6,r3,120
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 120, ctx.xer);
	// bne cr6,0x822461f4
	if (!ctx.cr6.eq) goto loc_822461F4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,12(r20)
	REX_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// stw r11,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// b 0x822461dc
	goto loc_822461DC;
loc_822461C8:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8224628c
	if (!ctx.cr6.eq) goto loc_8224628C;
loc_822461DC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822461E8;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822461c8
	if (!ctx.cr0.lt) goto loc_822461C8;
	// b 0x822466a8
	goto loc_822466A8;
loc_822461F4:
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x8224622c
	if (!ctx.cr6.gt) goto loc_8224622C;
loc_82246204:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lbzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82164f58
	ctx.lr = 0x82246214;
	sub_82164F58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8224611c
	if (ctx.cr0.eq) goto loc_8224611C;
	// lwz r11,44(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82246204
	if (ctx.cr6.lt) goto loc_82246204;
loc_8224622C:
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// bl 0x82169c08
	ctx.lr = 0x82246238;
	sub_82169C08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8224611c
	if (ctx.cr0.lt) goto loc_8224611C;
	// stw r3,8(r20)
	REX_STORE_U32(ctx.r20.u32 + 8, ctx.r3.u32);
	// b 0x8224625c
	goto loc_8224625C;
loc_82246248:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82246274
	if (!ctx.cr6.eq) goto loc_82246274;
loc_8224625C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82246268;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246248
	if (!ctx.cr0.lt) goto loc_82246248;
	// b 0x822466a8
	goto loc_822466A8;
loc_82246274:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82246288
	if (!ctx.cr6.eq) goto loc_82246288;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// beq cr6,0x822462d8
	if (ctx.cr6.eq) goto loc_822462D8;
loc_82246288:
	// stw r22,12(r20)
	REX_STORE_U32(ctx.r20.u32 + 12, ctx.r22.u32);
loc_8224628C:
	// stw r19,44(r20)
	REX_STORE_U32(ctx.r20.u32 + 44, ctx.r19.u32);
	// stw r19,40(r20)
	REX_STORE_U32(ctx.r20.u32 + 40, ctx.r19.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822466b8
	if (!ctx.cr6.eq) goto loc_822466B8;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x822466b8
	if (!ctx.cr6.eq) goto loc_822466B8;
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82246354
	if (!ctx.cr6.eq) goto loc_82246354;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32024
	ctx.r5.s64 = ctx.r11.s64 + -32024;
	// b 0x822466d8
	goto loc_822466D8;
loc_822462C4:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822462f0
	if (!ctx.cr6.eq) goto loc_822462F0;
loc_822462D8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822462E4;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x822462c4
	if (!ctx.cr0.lt) goto loc_822462C4;
	// b 0x822466a8
	goto loc_822466A8;
loc_822462F0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8224611c
	if (!ctx.cr6.eq) goto loc_8224611C;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,8(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 8);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x8224611c
	if (ctx.cr0.lt) goto loc_8224611C;
	// stw r11,12(r20)
	REX_STORE_U32(ctx.r20.u32 + 12, ctx.r11.u32);
	// b 0x82246328
	goto loc_82246328;
loc_82246314:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8224628c
	if (!ctx.cr6.eq) goto loc_8224628C;
loc_82246328:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82246334;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246314
	if (!ctx.cr0.lt) goto loc_82246314;
	// b 0x822466a8
	goto loc_822466A8;
loc_82246340:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x8224636c
	if (!ctx.cr6.eq) goto loc_8224636C;
loc_82246354:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82246360;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246340
	if (!ctx.cr0.lt) goto loc_82246340;
	// b 0x822466a8
	goto loc_822466A8;
loc_8224636C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8224638c
	if (ctx.cr6.eq) goto loc_8224638C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,123
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 123, ctx.xer);
	// beq cr6,0x8224638c
	if (ctx.cr6.eq) goto loc_8224638C;
loc_82246380:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32068
	ctx.r5.s64 = ctx.r11.s64 + -32068;
	// b 0x822466d8
	goto loc_822466D8;
loc_8224638C:
	// lwz r11,4(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r29,12(r20)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r20.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822463a4
	if (ctx.cr6.eq) goto loc_822463A4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x822463a8
	if (!ctx.cr6.eq) goto loc_822463A8;
loc_822463A4:
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_822463A8:
	// rlwinm r4,r29,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r4,40(r20)
	REX_STORE_U32(ctx.r20.u32 + 40, ctx.r4.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x821e99f8
	ctx.lr = 0x822463BC;
	sub_821E99F8(ctx, base);
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// stw r3,44(r20)
	REX_STORE_U32(ctx.r20.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82246650
	if (ctx.cr6.eq) goto loc_82246650;
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r24,r11,4172
	ctx.r24.s64 = ctx.r11.s64 + 4172;
	// addi r25,r10,4180
	ctx.r25.s64 = ctx.r10.s64 + 4180;
loc_822463E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822463EC;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822466a8
	if (ctx.cr0.lt) goto loc_822466A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x822463e0
	if (ctx.cr6.eq) goto loc_822463E0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8224644c
	if (!ctx.cr6.eq) goto loc_8224644C;
	// lbz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r10,45
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 45, ctx.xer);
	// bne cr6,0x8224644c
	if (!ctx.cr6.eq) goto loc_8224644C;
	// li r30,-1
	ctx.r30.s64 = -1;
loc_82246424:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x82246430;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822466a8
	if (ctx.cr0.lt) goto loc_822466A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82246424
	if (ctx.cr6.eq) goto loc_82246424;
loc_8224644C:
	// lwz r10,4(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82246530
	if (ctx.cr6.lt) goto loc_82246530;
	// beq cr6,0x8224651c
	if (ctx.cr6.eq) goto loc_8224651C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bge cr6,0x822465d4
	if (!ctx.cr6.lt) goto loc_822465D4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82246484
	if (ctx.cr6.eq) goto loc_82246484;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82246484
	if (ctx.cr6.eq) goto loc_82246484;
	// ble cr6,0x82246488
	if (!ctx.cr6.gt) goto loc_82246488;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// ble cr6,0x822464a0
	if (!ctx.cr6.gt) goto loc_822464A0;
	// b 0x82246488
	goto loc_82246488;
loc_82246484:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82246488:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x822464e8
	if (ctx.cr6.eq) goto loc_822464E8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x822464c4
	if (ctx.cr6.eq) goto loc_822464C4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82246544
	if (!ctx.cr6.eq) goto loc_82246544;
loc_822464A0:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// lfd f0,0(r21)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r21.u32 + 0);
	// std r11,112(r1)
	REX_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f13,112(r1)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 112);
loc_822464B0:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82246514
	goto loc_82246514;
loc_822464C4:
	// lwa r10,0(r21)
	ctx.r10.s64 = int32_t(REX_LOAD_U32(ctx.r21.u32 + 0));
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r10,120(r1)
	REX_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// std r11,128(r1)
	REX_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f13,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 128);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lfd f0,120(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// b 0x822464b0
	goto loc_822464B0;
loc_822464E8:
	// extsw r10,r30
	ctx.r10.s64 = ctx.r30.s32;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// std r10,136(r1)
	REX_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// std r11,144(r1)
	REX_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f13,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f0,136(r1)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82246514:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	REX_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// b 0x822465d4
	goto loc_822465D4;
loc_8224651C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82246544
	if (!ctx.cr6.eq) goto loc_82246544;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mullw r11,r30,r11
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// b 0x822465d0
	goto loc_822465D0;
loc_82246530:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82246550
	if (!ctx.cr6.eq) goto loc_82246550;
	// lwz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x822465d0
	if (!ctx.cr6.gt) goto loc_822465D0;
loc_82246544:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32096
	ctx.r5.s64 = ctx.r11.s64 + -32096;
	// b 0x822466d8
	goto loc_822466D8;
loc_82246550:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82246544
	if (!ctx.cr6.eq) goto loc_82246544;
	// lwz r8,0(r21)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82246564:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r7.u64;
	// beq 0x82246588
	if (ctx.cr0.eq) goto loc_82246588;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82246564
	if (ctx.cr6.eq) goto loc_82246564;
loc_82246588:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82246598
	if (!ctx.cr0.eq) goto loc_82246598;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// b 0x822465d0
	goto loc_822465D0;
loc_82246598:
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_822465A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.u64 = ctx.r9.u64 - ctx.r8.u64;
	// beq 0x822465c4
	if (ctx.cr0.eq) goto loc_822465C4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x822465a0
	if (ctx.cr6.eq) goto loc_822465A0;
loc_822465C4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82246544
	if (!ctx.cr0.eq) goto loc_82246544;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_822465D0:
	// stw r11,0(r28)
	REX_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_822465D4:
	// addi r11,r29,-1
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8224661c
	if (ctx.cr6.eq) goto loc_8224661C;
loc_822465E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822465EC;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x822466a8
	if (ctx.cr0.lt) goto loc_822466A8;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x822465e0
	if (ctx.cr6.eq) goto loc_822465E0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8224661c
	if (ctx.cr6.eq) goto loc_8224661C;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,44
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 44, ctx.xer);
	// bne cr6,0x82246630
	if (!ctx.cr6.eq) goto loc_82246630;
loc_8224661C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r29
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x822463e0
	if (ctx.cr6.lt) goto loc_822463E0;
	// b 0x82246650
	goto loc_82246650;
loc_82246630:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32156
	ctx.r5.s64 = ctx.r11.s64 + -32156;
	// b 0x822466d8
	goto loc_822466D8;
loc_8224663C:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x82246668
	if (!ctx.cr6.eq) goto loc_82246668;
loc_82246650:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x8224665C;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8224663c
	if (!ctx.cr0.lt) goto loc_8224663C;
	// b 0x822466a8
	goto loc_822466A8;
loc_82246668:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82246694
	if (ctx.cr6.eq) goto loc_82246694;
	// lbz r11,0(r21)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r21.u32 + 0);
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x82246694
	if (ctx.cr6.eq) goto loc_82246694;
	// b 0x82246380
	goto loc_82246380;
loc_82246680:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82245c6c
	if (ctx.cr6.eq) goto loc_82245C6C;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bne cr6,0x822466b8
	if (!ctx.cr6.eq) goto loc_822466B8;
loc_82246694:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82242238
	ctx.lr = 0x822466A0;
	sub_82242238(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82246680
	if (!ctx.cr0.lt) goto loc_82246680;
loc_822466A8:
	// stw r22,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r22.u32);
	// li r23,-1
	ctx.r23.s64 = -1;
	// stw r22,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r22.u32);
	// b 0x82246718
	goto loc_82246718;
loc_822466B8:
	// lwz r11,32(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82246718
	if (!ctx.cr6.eq) goto loc_82246718;
	// lwz r11,36(r20)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r20.u32 + 36);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82246718
	if (!ctx.cr6.eq) goto loc_82246718;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32212
	ctx.r5.s64 = ctx.r11.s64 + -32212;
loc_822466D8:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,32604
	ctx.r4.s64 = ctx.r10.s64 + 32604;
	// bl 0x822444a0
	ctx.lr = 0x822466E8;
	sub_822444A0(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// b 0x82246718
	goto loc_82246718;
loc_822466F0:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32240
	ctx.r5.s64 = ctx.r11.s64 + -32240;
	// b 0x822466d8
	goto loc_822466D8;
loc_822466FC:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32284
	ctx.r5.s64 = ctx.r11.s64 + -32284;
	// b 0x822466d8
	goto loc_822466D8;
loc_82246708:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r5,r11,-32304
	ctx.r5.s64 = ctx.r11.s64 + -32304;
	// b 0x822466d8
	goto loc_822466D8;
loc_82246714:
	// li r23,280
	ctx.r23.s64 = 280;
loc_82246718:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x8215e424
	__restgprlr_19(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82260890) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82260898;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x822608c4
	if (ctx.cr6.lt) goto loc_822608C4;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x822608c8
	if (!ctx.cr6.gt) goto loc_822608C8;
loc_822608C4:
	// bl 0x823712d0
	ctx.lr = 0x822608C8;
	sub_823712D0(ctx, base);
loc_822608C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.u64 = ctx.r10.u64 - ctx.r11.u64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x82260910
	if (!ctx.cr6.lt) goto loc_82260910;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822607f8
	ctx.lr = 0x822608F8;
	sub_822607F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82260910:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822627C0) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8226280c
	if (!ctx.cr0.eq) goto loc_8226280C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822627f8
	if (ctx.cr0.eq) goto loc_822627F8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r4,r11,-13300
	ctx.r4.s64 = ctx.r11.s64 + -13300;
	// b 0x82262800
	goto loc_82262800;
loc_822627F8:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-30764
	ctx.r4.s64 = ctx.r11.s64 + -30764;
loc_82262800:
	// bl 0x8224efb8
	ctx.lr = 0x82262804;
	sub_8224EFB8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	REX_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_8226280C:
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

DEFINE_REX_FUNC(sub_82264388) {
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
	// bl 0x82314920
	ctx.lr = 0x822643A4;
	sub_82314920(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822643d0
	if (!ctx.cr0.eq) goto loc_822643D0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,1512
	ctx.r6.s64 = ctx.r11.s64 + 1512;
	// addi r5,r10,1500
	ctx.r5.s64 = ctx.r10.s64 + 1500;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822643D0;
	sub_82260F30(ctx, base);
loc_822643D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82264D20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x82264D28;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-14148
	ctx.r27.s64 = ctx.r11.s64 + -14148;
	// addi r26,r10,1512
	ctx.r26.s64 = ctx.r10.s64 + 1512;
	// bne cr6,0x82264d64
	if (!ctx.cr6.eq) goto loc_82264D64;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,1956
	ctx.r5.s64 = ctx.r11.s64 + 1956;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264D64;
	sub_82260F30(ctx, base);
loc_82264D64:
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82264d78
	if (ctx.cr0.eq) goto loc_82264D78;
	// lwz r31,8(r4)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
loc_82264D78:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82264df0
	if (ctx.cr6.eq) goto loc_82264DF0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// addi r28,r11,1824
	ctx.r28.s64 = ctx.r11.s64 + 1824;
loc_82264D88:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82264da0
	if (ctx.cr6.eq) goto loc_82264DA0;
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82264db8
	if (!ctx.cr6.eq) goto loc_82264DB8;
loc_82264DA0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1088
	ctx.r7.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82264DB8;
	sub_82260F30(ctx, base);
loc_82264DB8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822645d0
	ctx.lr = 0x82264DC0;
	sub_822645D0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x82264DD8;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82314a28
	ctx.lr = 0x82264DE4;
	sub_82314A28(ctx, base);
	// lwz r4,16(r30)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82264d88
	if (!ctx.cr6.eq) goto loc_82264D88;
loc_82264DF0:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82264e00
	if (ctx.cr0.eq) goto loc_82264E00;
	// lwz r3,0(r4)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82314a28
	ctx.lr = 0x82264E00;
	sub_82314A28(ctx, base);
loc_82264E00:
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82264e28
	if (!ctx.cr6.eq) goto loc_82264E28;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823148c0
	ctx.lr = 0x82264E14;
	sub_823148C0(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82264E28;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82264E28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82266538) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82266540;
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
	// addi r29,r10,2336
	ctx.r29.s64 = ctx.r10.s64 + 2336;
	// bne cr6,0x8226657c
	if (!ctx.cr6.eq) goto loc_8226657C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,1396
	ctx.r5.s64 = ctx.r11.s64 + 1396;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8226657C;
	sub_82260F30(ctx, base);
loc_8226657C:
	// lwz r11,2448(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	REX_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x82266704
	if (!ctx.cr0.eq) goto loc_82266704;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822665b0
	if (ctx.cr6.eq) goto loc_822665B0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2440
	ctx.r5.s64 = ctx.r11.s64 + 2440;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,241
	ctx.r7.s64 = 241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x822665B0;
	sub_82260F30(ctx, base);
loc_822665B0:
	// lwz r4,2444(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82314e20
	ctx.lr = 0x822665BC;
	sub_82314E20(ctx, base);
	// b 0x822665e4
	goto loc_822665E4;
loc_822665C0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266118
	ctx.lr = 0x822665C8;
	sub_82266118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822665DC;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822660e0
	ctx.lr = 0x822665E4;
	sub_822660E0(ctx, base);
loc_822665E4:
	// lwz r3,2440(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x82265e08
	ctx.lr = 0x822665EC;
	sub_82265E08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x822665c0
	if (!ctx.cr0.eq) goto loc_822665C0;
	// lwz r4,2440(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82315060
	ctx.lr = 0x82266600;
	sub_82315060(ctx, base);
	// b 0x82266628
	goto loc_82266628;
loc_82266604:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266118
	ctx.lr = 0x8226660C;
	sub_82266118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266620;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822660e0
	ctx.lr = 0x82266628;
	sub_822660E0(ctx, base);
loc_82266628:
	// lwz r3,2436(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82265e08
	ctx.lr = 0x82266630;
	sub_82265E08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82266604
	if (!ctx.cr0.eq) goto loc_82266604;
	// lwz r4,2436(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82315060
	ctx.lr = 0x82266644;
	sub_82315060(ctx, base);
	// b 0x8226666c
	goto loc_8226666C;
loc_82266648:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82266118
	ctx.lr = 0x82266650;
	sub_82266118(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266664;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822660e0
	ctx.lr = 0x8226666C;
	sub_822660E0(ctx, base);
loc_8226666C:
	// lwz r3,2428(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x82265e08
	ctx.lr = 0x82266674;
	sub_82265E08(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82266648
	if (!ctx.cr0.eq) goto loc_82266648;
	// lwz r4,2428(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82315060
	ctx.lr = 0x82266688;
	sub_82315060(ctx, base);
	// b 0x822666a0
	goto loc_822666A0;
loc_8226668C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822666A0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822666A0:
	// lwz r3,2432(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x82265270
	ctx.lr = 0x822666A8;
	sub_82265270(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8226668c
	if (!ctx.cr0.eq) goto loc_8226668C;
	// lwz r4,2432(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82314be0
	ctx.lr = 0x822666BC;
	sub_82314BE0(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82267eb0
	ctx.lr = 0x822666C4;
	sub_82267EB0(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822666d4
	if (ctx.cr6.eq) goto loc_822666D4;
	// bl 0x82315778
	ctx.lr = 0x822666D4;
	sub_82315778(ctx, base);
loc_822666D4:
	// lwz r4,44(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x822666f0
	if (ctx.cr6.eq) goto loc_822666F0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822666F0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_822666F0:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82266704;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82266704:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8226D538) {
	REX_FUNC_PROLOGUE();
	// lwz r9,0(r3)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r8,r9,7,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8226D550:
	// rlwinm r7,r9,27,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0xFF;
	// li r6,1
	ctx.r6.s64 = 1;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r7,r6,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// or r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 | ctx.r3.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8226d550
	if (ctx.cr6.lt) goto loc_8226D550;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226DB28) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226db70
	if (ctx.cr0.eq) goto loc_8226DB70;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,125
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 125, ctx.xer);
	// beq cr6,0x8226db54
	if (ctx.cr6.eq) goto loc_8226DB54;
	// cmplwi cr6,r11,124
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 124, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x8226db58
	if (!ctx.cr6.eq) goto loc_8226DB58;
loc_8226DB54:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8226DB58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226db70
	if (!ctx.cr0.eq) goto loc_8226DB70;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8226db74
	if (ctx.cr0.eq) goto loc_8226DB74;
loc_8226DB70:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8226DB74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8226F100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8226F108;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226f12c
	if (!ctx.cr0.eq) goto loc_8226F12C;
loc_8226F124:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226f1e4
	goto loc_8226F1E4;
loc_8226F12C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82330488
	ctx.lr = 0x8226F13C;
	sub_82330488(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r10,r11,0,4,6
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x8226f1e0
	if (ctx.cr0.eq) goto loc_8226F1E0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8226F154:
	// rlwinm r10,r11,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and. r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8226f124
	if (ctx.cr0.eq) goto loc_8226F124;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,30,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1FFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// li r7,2
	ctx.r7.s64 = 2;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// slw r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r8,r6
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r7,r10,1,27,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1E;
	// li r6,-1
	ctx.r6.s64 = -1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// slw r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	// srw r4,r9,r7
	ctx.r4.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r7.u8 & 0x3F));
	// lfdx f1,r10,r6
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = REX_LOAD_U64(ctx.r10.u32 + ctx.r6.u32);
	// bl 0x8232a4c8
	ctx.lr = 0x8226F1C0;
	sub_8232A4C8(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bne cr6,0x8226f124
	if (!ctx.cr6.eq) goto loc_8226F124;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rlwinm r10,r11,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8226f154
	if (ctx.cr6.lt) goto loc_8226F154;
loc_8226F1E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226F1E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82275608) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x82275610;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82275638
	if (!ctx.cr6.eq) goto loc_82275638;
loc_8227562C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x822758c4
	goto loc_822758C4;
loc_82275638:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r11,r11,0,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8227562c
	if (!ctx.cr6.eq) goto loc_8227562C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82173a48
	ctx.lr = 0x8227565C;
	sub_82173A48(ctx, base);
	// stw r30,64(r31)
	REX_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,4(r10)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// stw r28,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// beq 0x82275688
	if (ctx.cr0.eq) goto loc_82275688;
	// stb r4,41(r31)
	REX_STORE_U8(ctx.r31.u32 + 41, ctx.r4.u8);
loc_82275688:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82275738
	if (ctx.cr6.eq) goto loc_82275738;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8227562c
	if (!ctx.cr6.eq) goto loc_8227562C;
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227562c
	if (ctx.cr6.lt) goto loc_8227562C;
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8227562c
	if (ctx.cr6.gt) goto loc_8227562C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8227562c
	if (!ctx.cr0.eq) goto loc_8227562C;
	// cmplwi cr6,r9,24564
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24564, ctx.xer);
	// bgt cr6,0x8227562c
	if (ctx.cr6.gt) goto loc_8227562C;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8227562c
	if (!ctx.cr0.eq) goto loc_8227562C;
	// stb r4,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r4.u8);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x3F;
	// b 0x82275800
	goto loc_82275800;
loc_82275738:
	// addi r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 + 3;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8227562c
	if (ctx.cr6.lt) goto loc_8227562C;
	// clrldi r8,r28,32
	ctx.r8.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// bgt cr6,0x8227562c
	if (ctx.cr6.gt) goto loc_8227562C;
	// lwz r9,4(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,12
	ctx.r8.s64 = 12;
	// divwu r8,r9,r8
	ctx.r8.u64 = uint32_t(ctx.r8.u32 ? ctx.r9.u32 / ctx.r8.u32 : 0);
	// mulli r8,r8,12
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(12));
	// stw r9,36(r31)
	REX_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// subf. r8,r8,r9
	ctx.r8.u64 = ctx.r9.u64 - ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x8227562c
	if (!ctx.cr0.eq) goto loc_8227562C;
	// cmplwi cr6,r9,24552
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 24552, ctx.xer);
	// bgt cr6,0x8227562c
	if (ctx.cr6.gt) goto loc_8227562C;
	// lwz r6,88(r1)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// add r5,r9,r6
	ctx.r5.u64 = ctx.r9.u64 + ctx.r6.u64;
	// subf r9,r6,r5
	ctx.r9.u64 = ctx.r5.u64 - ctx.r6.u64;
	// clrlwi. r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8227562c
	if (!ctx.cr0.eq) goto loc_8227562C;
	// stb r3,40(r31)
	REX_STORE_U8(ctx.r31.u32 + 40, ctx.r3.u8);
	// addi r9,r11,36
	ctx.r9.s64 = ctx.r11.s64 + 36;
	// lwz r8,20(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// stw r9,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,28(r31)
	REX_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,29,25,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7C;
	// lwz r7,24(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stw r9,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r7,28(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r9,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	REX_STORE_U32(ctx.r31.u32 + 24, ctx.r8.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// stw r9,52(r31)
	REX_STORE_U32(ctx.r31.u32 + 52, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
loc_82275800:
	// lwz r11,12(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r9,32(r31)
	REX_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// clrldi r9,r6,32
	ctx.r9.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// lwz r4,92(r1)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,36(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// stw r11,56(r31)
	REX_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// cmpld cr6,r8,r11
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x8227562c
	if (ctx.cr6.gt) goto loc_8227562C;
	// cntlzw r11,r27
	ctx.r11.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// lbz r9,40(r31)
	ctx.r9.u64 = REX_LOAD_U8(ctx.r31.u32 + 40);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x8227562c
	if (!ctx.cr6.eq) goto loc_8227562C;
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275860
	if (ctx.cr6.eq) goto loc_82275860;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82275864
	goto loc_82275864;
loc_82275860:
	// stw r3,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82275864:
	// lwz r11,16(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227587c
	if (ctx.cr6.eq) goto loc_8227587C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82275880
	goto loc_82275880;
loc_8227587C:
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
loc_82275880:
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82275898
	if (ctx.cr6.eq) goto loc_82275898;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// b 0x8227589c
	goto loc_8227589C;
loc_82275898:
	// stw r3,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
loc_8227589C:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r9,6
	ctx.r9.s64 = 6;
	// stw r10,68(r31)
	REX_STORE_U32(ctx.r31.u32 + 68, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r11,r11,r9
	ctx.r11.u64 = uint32_t(ctx.r9.u32 ? ctx.r11.u32 / ctx.r9.u32 : 0);
	// stw r28,72(r31)
	REX_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// stw r6,76(r31)
	REX_STORE_U32(ctx.r31.u32 + 76, ctx.r6.u32);
	// stw r11,84(r31)
	REX_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r4,80(r31)
	REX_STORE_U32(ctx.r31.u32 + 80, ctx.r4.u32);
	// stw r5,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
loc_822758C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8227FC50) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8227FC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8227fb90
	ctx.lr = 0x8227FC78;
	sub_8227FB90(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8227fcb4
	if (!ctx.cr6.eq) goto loc_8227FCB4;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8227fcac
	if (ctx.cr0.eq) goto loc_8227FCAC;
	// lwz r3,0(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,792(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8227fca4
	if (ctx.cr6.eq) goto loc_8227FCA4;
	// li r4,3518
	ctx.r4.s64 = 3518;
	// bl 0x8225b1a0
	ctx.lr = 0x8227FCA4;
	sub_8225B1A0(ctx, base);
loc_8227FCA4:
	// li r4,3565
	ctx.r4.s64 = 3565;
	// bl 0x8225b1a0
	ctx.lr = 0x8227FCAC;
	sub_8225B1A0(ctx, base);
loc_8227FCAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8227fcec
	goto loc_8227FCEC;
loc_8227FCB4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// clrlwi r3,r31,28
	ctx.r3.u64 = ctx.r31.u32 & 0xF;
	// rlwinm r29,r31,30,2,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFC;
	// bl 0x8227a018
	ctx.lr = 0x8227FCC4;
	sub_8227A018(ctx, base);
	// rlwinm r11,r31,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 24) & 0xFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r29,58
	ctx.r9.u64 = ctx.r29.u64 & 0x3F;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// sld r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// ldx r9,r11,r30
	ctx.r9.u64 = REX_LOAD_U64(ctx.r11.u32 + ctx.r30.u32);
	// rlwimi r3,r31,0,0,27
	ctx.r3.u64 = (__builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFF0) | (ctx.r3.u64 & 0xFFFFFFFF0000000F);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r30
	REX_STORE_U64(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u64);
loc_8227FCEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82281428) {
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
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82281460
	if (ctx.cr6.eq) goto loc_82281460;
	// rlwinm r11,r4,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// lwz r5,12(r4)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,148(r11)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + 148);
	// bl 0x8227a448
	ctx.lr = 0x8228145C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82281460:
	// stw r31,16(r4)
	REX_STORE_U32(ctx.r4.u32 + 16, ctx.r31.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r4.u32);
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

DEFINE_REX_FUNC(sub_82282E18) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282e64
	if (!ctx.cr0.eq) goto loc_82282E64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282e64
	if (ctx.cr0.eq) goto loc_82282E64;
loc_82282E3C:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,14336
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14336, ctx.xer);
	// bne cr6,0x82282ef8
	if (!ctx.cr6.eq) goto loc_82282EF8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282e64
	if (!ctx.cr0.eq) goto loc_82282E64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282e3c
	if (!ctx.cr6.eq) goto loc_82282E3C;
loc_82282E64:
	// lwz r11,28(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282e9c
	if (!ctx.cr0.eq) goto loc_82282E9C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282e9c
	if (ctx.cr0.eq) goto loc_82282E9C;
loc_82282E78:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm. r10,r10,7,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282ef8
	if (!ctx.cr0.eq) goto loc_82282EF8;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282e9c
	if (!ctx.cr0.eq) goto loc_82282E9C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282e78
	if (!ctx.cr6.eq) goto loc_82282E78;
loc_82282E9C:
	// lwz r11,36(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282ee0
	if (!ctx.cr0.eq) goto loc_82282EE0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82282ee0
	if (ctx.cr0.eq) goto loc_82282EE0;
loc_82282EB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d438
	ctx.lr = 0x82282EBC;
	sub_8226D438(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82282ef8
	if (ctx.cr0.eq) goto loc_82282EF8;
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82282ee0
	if (!ctx.cr0.eq) goto loc_82282EE0;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82282eb4
	if (!ctx.cr6.eq) goto loc_82282EB4;
loc_82282EE0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82282EE4:
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
loc_82282EF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82282ee4
	goto loc_82282EE4;
}

DEFINE_REX_FUNC(sub_82287648) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e8
	ctx.lr = 0x82287650;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
loc_8228765C:
	// lwz r11,12(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8228767c
	if (ctx.cr6.eq) goto loc_8228767C;
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8228767c
	if (ctx.cr0.eq) goto loc_8228767C;
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// b 0x8228765c
	goto loc_8228765C;
loc_8228767C:
	// lwz r11,36(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822876c0
	if (!ctx.cr0.eq) goto loc_822876C0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822876c0
	if (ctx.cr0.eq) goto loc_822876C0;
loc_82287694:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10624
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10624, ctx.xer);
	// beq cr6,0x822876cc
	if (ctx.cr6.eq) goto loc_822876CC;
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822876c0
	if (!ctx.cr0.eq) goto loc_822876C0;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82287694
	if (!ctx.cr6.eq) goto loc_82287694;
loc_822876C0:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822876CC;
	sub_8225B1A0(ctx, base);
loc_822876CC:
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x822876DC;
	sub_8226DBE8(ctx, base);
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// ori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 | 1;
	// ori r10,r27,1
	ctx.r10.u64 = ctx.r27.u64 | 1;
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// lwz r11,112(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 112);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
	// stw r26,112(r28)
	REX_STORE_U32(ctx.r28.u32 + 112, ctx.r26.u32);
loc_82287704:
	// lwz r29,8(r30)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
loc_82287708:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82287790
	if (ctx.cr6.eq) goto loc_82287790;
	// lwz r30,4(r29)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82283958
	ctx.lr = 0x8228772C;
	sub_82283958(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287788
	if (!ctx.cr0.eq) goto loc_82287788;
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82287764
	if (!ctx.cr0.eq) goto loc_82287764;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82287764
	if (ctx.cr0.eq) goto loc_82287764;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82287770
	if (!ctx.cr6.gt) goto loc_82287770;
loc_82287764:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822fade8
	ctx.lr = 0x82287770;
	sub_822FADE8(ctx, base);
loc_82287770:
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
loc_82287788:
	// lwz r29,12(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// b 0x82287708
	goto loc_82287708;
loc_82287790:
	// lwz r11,0(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82287838
	if (!ctx.cr0.eq) goto loc_82287838;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82287838
	if (ctx.cr0.eq) goto loc_82287838;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
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
	// bne 0x82287804
	if (!ctx.cr0.eq) goto loc_82287804;
	// rlwinm r11,r4,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
	ctx.lr = 0x82287804;
	sub_8225B140(ctx, base);
loc_82287804:
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82287820
	if (ctx.cr6.eq) goto loc_82287820;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82287824
	if (!ctx.cr6.eq) goto loc_82287824;
loc_82287820:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82287824:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82287704
	if (ctx.cr0.eq) goto loc_82287704;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82287838;
	sub_8225B1A0(ctx, base);
loc_82287838:
	// lwz r10,976(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 976);
	// addi r11,r28,972
	ctx.r11.s64 = ctx.r28.s64 + 972;
	// stw r10,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,976(r28)
	REX_STORE_U32(ctx.r28.u32 + 976, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e438
	__restgprlr_24(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82294750) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,804(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 804);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lwz r10,40(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r10,r10,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82294774
	if (ctx.cr0.eq) goto loc_82294774;
	// li r3,32
	ctx.r3.s64 = 32;
	// blr 
	return;
loc_82294774:
	// lwz r11,48(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.u64 = static_cast<uint64_t>(0) - ctx.r11.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xC;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82294A68) {
	REX_FUNC_PROLOGUE();
	// clrldi r10,r4,58
	ctx.r10.u64 = ctx.r4.u64 & 0x3F;
	// rlwinm r11,r4,26,6,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 26) & 0x3FFFFFF;
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// sld r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r10.u8 & 0x7F));
	// bge cr6,0x82294aac
	if (!ctx.cr6.lt) goto loc_82294AAC;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82294A88:
	// ld r8,0(r10)
	ctx.r8.u64 = REX_LOAD_U64(ctx.r10.u32 + 0);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82294ab4
	if (!ctx.cr6.eq) goto loc_82294AB4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82294a88
	if (ctx.cr6.lt) goto loc_82294A88;
loc_82294AAC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82294AB4:
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// cntlzd r10,r10
	ctx.r10.u64 = ctx.r10.u64 == 0 ? 64 : __builtin_clzll(ctx.r10.u64);
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addi r3,r11,63
	ctx.r3.s64 = ctx.r11.s64 + 63;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82294E28) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82294E30;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82294E44:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x82294e5c
	if (!ctx.cr6.gt) goto loc_82294E5C;
	// bl 0x82294b38
	ctx.lr = 0x82294E58;
	sub_82294B38(ctx, base);
	// b 0x82294e64
	goto loc_82294E64;
loc_82294E5C:
	// addi r4,r4,3
	ctx.r4.s64 = ctx.r4.s64 + 3;
	// bl 0x82294bb0
	ctx.lr = 0x82294E64;
	sub_82294BB0(ctx, base);
loc_82294E64:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82294eb8
	if (ctx.cr6.eq) goto loc_82294EB8;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x82294ec4
	if (ctx.cr6.eq) goto loc_82294EC4;
	// lis r10,-27863
	ctx.r10.s64 = -1826029568;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1186
	ctx.r9.s64 = 1186;
	// ori r10,r10,13532
	ctx.r10.u64 = ctx.r10.u64 | 13532;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// srd r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82294ed4
	if (!ctx.cr6.lt) goto loc_82294ED4;
	// add r11,r3,r29
	ctx.r11.u64 = ctx.r3.u64 + ctx.r29.u64;
	// rlwinm r4,r11,0,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x82294e44
	if (!ctx.cr6.gt) goto loc_82294E44;
loc_82294EB8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82294EBC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
loc_82294EC4:
	// clrlwi r11,r3,30
	ctx.r11.u64 = ctx.r3.u32 & 0x3;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// b 0x82294ed8
	goto loc_82294ED8;
loc_82294ED4:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
loc_82294ED8:
	// rlwimi r11,r3,2,0,27
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFF0) | (ctx.r11.u64 & 0xFFFFFFFF0000000F);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82294ebc
	goto loc_82294EBC;
}

DEFINE_REX_FUNC(sub_822965E8) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822965F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r10,r4,40
	ctx.r10.s64 = static_cast<int64_t>(ctx.r4.u64 * static_cast<uint64_t>(40));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r9,28,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x822966e0
	if (ctx.cr6.lt) goto loc_822966E0;
	// beq cr6,0x822966b8
	if (ctx.cr6.eq) goto loc_822966B8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x822966ac
	if (ctx.cr6.lt) goto loc_822966AC;
	// beq cr6,0x82296688
	if (ctx.cr6.eq) goto loc_82296688;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,4080
	ctx.r10.s64 = 267386880;
	// rlwinm r11,r11,0,3,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1FF00000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82296648
	if (ctx.cr6.gt) goto loc_82296648;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x82296648;
	sub_8225B1A0(ctx, base);
loc_82296648:
	// rlwinm. r11,r9,0,16,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229667c
	if (ctx.cr0.eq) goto loc_8229667C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82296558
	ctx.lr = 0x82296658;
	sub_82296558(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8229666c
	if (!ctx.cr0.eq) goto loc_8229666C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229666C;
	sub_8225B1A0(ctx, base);
loc_8229666C:
	// lwz r5,24(r3)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// li r4,4509
	ctx.r4.s64 = 4509;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x8229667C;
	sub_8225B1A0(ctx, base);
loc_8229667C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x822966a4
	goto loc_822966A4;
loc_82296688:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8226d690
	ctx.lr = 0x82296690;
	sub_8226D690(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82294750
	ctx.lr = 0x8229669C;
	sub_82294750(ctx, base);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// stw r28,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_822966A4:
	// stw r11,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x8229670c
	goto loc_8229670C;
loc_822966AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,256
	ctx.r10.s64 = 256;
	// b 0x82296704
	goto loc_82296704;
loc_822966B8:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r9,16
	ctx.r9.s64 = 16;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// b 0x82296704
	goto loc_82296704;
loc_822966E0:
	// lwz r11,48(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// li r9,128
	ctx.r9.s64 = 128;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r10.u64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
loc_82296704:
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	REX_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8229670C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229B240) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x8229B248;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,101
	ctx.r6.s64 = 101;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x8229B26C;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x8229b290
	if (ctx.cr6.eq) goto loc_8229B290;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x8229B28C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8229B290:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281428
	ctx.lr = 0x8229B298;
	sub_82281428(ctx, base);
	// stw r3,44(r28)
	REX_STORE_U32(ctx.r28.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8229b2d8
	if (ctx.cr6.eq) goto loc_8229B2D8;
	// rlwinm r11,r28,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// addi r10,r31,-36
	ctx.r10.s64 = ctx.r31.s64 + -36;
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
loc_8229B2D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8229F400) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm. r10,r11,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229f420
	if (ctx.cr0.eq) goto loc_8229F420;
	// rlwinm. r10,r4,0,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229f420
	if (ctx.cr0.eq) goto loc_8229F420;
loc_8229F418:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8229F420:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8229f430
	if (ctx.cr0.eq) goto loc_8229F430;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8229f418
	if (!ctx.cr0.eq) goto loc_8229F418;
loc_8229F430:
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8229f444
	if (ctx.cr0.eq) goto loc_8229F444;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_8229F444:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822A4298) {
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
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r11,r11,27,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0xFF;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r4,r11,30
	ctx.r4.u64 = ctx.r11.u32 & 0x3;
	// bl 0x822c6150
	ctx.lr = 0x822A42C8;
	sub_822C6150(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r4,r11,27
	ctx.r4.u64 = ctx.r11.u32 & 0x1F;
	// bl 0x822a4240
	ctx.lr = 0x822A42D4;
	sub_822A4240(ctx, base);
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

DEFINE_REX_FUNC(sub_822A49F8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c0
	ctx.lr = 0x822A4A00;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r14,340(r1)
	ctx.r14.u64 = REX_LOAD_U32(ctx.r1.u32 + 340);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// stw r30,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r30.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// mr r15,r30
	ctx.r15.u64 = ctx.r30.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// beq cr6,0x822a4b40
	if (ctx.cr6.eq) goto loc_822A4B40;
	// lwz r18,324(r1)
	ctx.r18.u64 = REX_LOAD_U32(ctx.r1.u32 + 324);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
loc_822A4A48:
	// li r25,0
	ctx.r25.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x822a4af0
	if (ctx.cr6.eq) goto loc_822A4AF0;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// subf r29,r24,r16
	ctx.r29.u64 = ctx.r16.u64 - ctx.r24.u64;
	// subf r28,r24,r17
	ctx.r28.u64 = ctx.r17.u64 - ctx.r24.u64;
loc_822A4A64:
	// lwzx r3,r28,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwzx r11,r30,r26
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822a4a98
	if (!ctx.cr6.eq) goto loc_822A4A98;
	// lwzx r10,r29,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwzx r9,r30,r18
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822a4a98
	if (!ctx.cr6.eq) goto loc_822A4A98;
	// lwz r10,0(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lwzx r9,r30,r23
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x822a4af0
	if (ctx.cr6.eq) goto loc_822A4AF0;
loc_822A4A98:
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822a4ae0
	if (!ctx.cr6.eq) goto loc_822A4AE0;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,16000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16000, ctx.xer);
	// bne cr6,0x822a4ae0
	if (!ctx.cr6.eq) goto loc_822A4AE0;
	// lwzx r5,r29,r31
	ctx.r5.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8232a6d8
	ctx.lr = 0x822A4AC4;
	sub_8232A6D8(ctx, base);
	// lwzx r5,r30,r18
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r18.u32);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lwzx r4,r30,r23
	ctx.r4.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r23.u32);
	// lwzx r3,r30,r26
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r26.u32);
	// bl 0x8232a6d8
	ctx.lr = 0x822A4AD8;
	sub_8232A6D8(ctx, base);
	// fcmpu cr6,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f31.f64, ctx.f1.f64);
	// beq cr6,0x822a4af0
	if (ctx.cr6.eq) goto loc_822A4AF0;
loc_822A4AE0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x822a4a64
	if (ctx.cr6.lt) goto loc_822A4A64;
loc_822A4AF0:
	// cmplw cr6,r27,r20
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x822a4b18
	if (!ctx.cr6.eq) goto loc_822A4B18;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822a4b58
	if (ctx.cr0.eq) goto loc_822A4B58;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r14)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r14.u32 + 0);
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r14)
	REX_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x822a4b2c
	goto loc_822A4B2C;
loc_822A4B18:
	// li r11,3
	ctx.r11.s64 = 3;
	// slw r10,r27,r19
	ctx.r10.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r19.u8 & 0x3F));
	// slw r11,r11,r19
	ctx.r11.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r19.u8 & 0x3F));
	// andc r11,r15,r11
	ctx.r11.u64 = ctx.r15.u64 & ~ctx.r11.u64;
	// or r15,r11,r10
	ctx.r15.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_822A4B2C:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x822a4a48
	if (ctx.cr6.lt) goto loc_822A4A48;
loc_822A4B40:
	// lwz r11,332(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r15,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r15.u32);
loc_822A4B4C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8215e410
	__restgprlr_14(ctx, base);
	return;
loc_822A4B58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x822a4b4c
	goto loc_822A4B4C;
}

DEFINE_REX_FUNC(sub_822A6FA8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x822A6FB0;
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
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822A6FE0;
	sub_8232D9E0(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// beq cr6,0x822a7004
	if (ctx.cr6.eq) goto loc_822A7004;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822A7000;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A7004:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822A700C;
	sub_82281428(ctx, base);
	// stw r3,44(r31)
	REX_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x822a7030
	if (ctx.cr6.eq) goto loc_822A7030;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,12(r28)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// bl 0x8227a448
	ctx.lr = 0x822A702C;
	sub_8227A448(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_822A7030:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822A7038;
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
	ctx.lr = 0x822A7068;
	sub_822761F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822A7E80) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r30,r3,1
	ctx.r30.u64 = ctx.r3.u64 | 1;
	// stw r10,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r30,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	REX_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// bl 0x8226e2d8
	ctx.lr = 0x822A7EC0;
	sub_8226E2D8(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
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
	// stw r30,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
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

DEFINE_REX_FUNC(sub_822AAB78) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822AAB80;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r25,r4,4
	ctx.r25.s64 = ctx.r4.s64 + 4;
loc_822AAB90:
	// lwz r31,0(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822aadc4
	if (ctx.cr6.eq) goto loc_822AADC4;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822aadb0
	if (ctx.cr6.eq) goto loc_822AADB0;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r10,r8,7,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822aadb0
	if (ctx.cr0.eq) goto loc_822AADB0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822aabf8
	if (ctx.cr6.eq) goto loc_822AABF8;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// rlwinm r8,r8,27,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0xFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,7,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 7) & 0x7;
loc_822AABD4:
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
	// blt cr6,0x822aabd4
	if (ctx.cr6.lt) goto loc_822AABD4;
loc_822AABF8:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_822AAC04:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822aac78
	if (ctx.cr6.eq) goto loc_822AAC78;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subfic r10,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r10.u64 = static_cast<uint64_t>(31) - ctx.r10.u64;
	// addi r9,r10,11
	ctx.r9.s64 = ctx.r10.s64 + 11;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r27
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// bne cr6,0x822aac3c
	if (!ctx.cr6.eq) goto loc_822AAC3C;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// b 0x822aac44
	goto loc_822AAC44;
loc_822AAC3C:
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x822aadb0
	if (!ctx.cr6.eq) goto loc_822AADB0;
loc_822AAC44:
	// lwz r9,0(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r6,r9,27,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// andc r8,r28,r8
	ctx.r8.u64 = ctx.r28.u64 & ~ctx.r8.u64;
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// or r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r10,r9,27
	ctx.r10.u64 = ctx.r9.u32 & 0x1F;
	// subf r11,r7,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r7.u64;
	// b 0x822aac04
	goto loc_822AAC04;
loc_822AAC78:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r9,r10,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// beq 0x822aac98
	if (ctx.cr0.eq) goto loc_822AAC98;
	// rlwinm. r9,r11,0,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aac98
	if (ctx.cr0.eq) goto loc_822AAC98;
loc_822AAC90:
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x822aacc0
	goto loc_822AACC0;
loc_822AAC98:
	// rlwinm. r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aaca8
	if (ctx.cr0.eq) goto loc_822AACA8;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822aac90
	if (!ctx.cr0.eq) goto loc_822AAC90;
loc_822AACA8:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aacbc
	if (ctx.cr0.eq) goto loc_822AACBC;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne 0x822aacc0
	if (!ctx.cr0.eq) goto loc_822AACC0;
loc_822AACBC:
	// li r9,1
	ctx.r9.s64 = 1;
loc_822AACC0:
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aadb0
	if (ctx.cr0.eq) goto loc_822AADB0;
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aacdc
	if (ctx.cr0.eq) goto loc_822AACDC;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aacdc
	if (ctx.cr0.eq) goto loc_822AACDC;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_822AACDC:
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm. r9,r9,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aacf0
	if (ctx.cr0.eq) goto loc_822AACF0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822AACF0:
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aad04
	if (ctx.cr0.eq) goto loc_822AAD04;
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822aad04
	if (ctx.cr0.eq) goto loc_822AAD04;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_822AAD04:
	// or r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 | ctx.r11.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8229f450
	ctx.lr = 0x822AAD10;
	sub_8229F450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aadb0
	if (ctx.cr0.eq) goto loc_822AADB0;
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822aad30
	goto loc_822AAD30;
loc_822AAD28:
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// lwz r10,8(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
loc_822AAD30:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822aad28
	if (!ctx.cr6.eq) goto loc_822AAD28;
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
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
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwinm r10,r10,27,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xFF;
	// stw r29,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// rlwinm r8,r10,27,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x6;
	// rlwinm r7,r10,29,29,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x6;
	// srw r8,r28,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r7,r28,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r7.u8 & 0x3F));
	// rlwimi r7,r8,2,28,29
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF3);
	// rlwinm r8,r10,31,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x6;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// clrlwi r7,r7,28
	ctx.r7.u64 = ctx.r7.u32 & 0xF;
	// srw r8,r28,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r8.u8 & 0x3F));
	// srw r10,r28,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwimi r8,r7,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r8,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822a9bd0
	ctx.lr = 0x822AADB0;
	sub_822A9BD0(ctx, base);
loc_822AADB0:
	// lwz r11,0(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x822aab90
	if (!ctx.cr6.eq) goto loc_822AAB90;
	// addi r25,r31,8
	ctx.r25.s64 = ctx.r31.s64 + 8;
	// b 0x822aab90
	goto loc_822AAB90;
loc_822AADC4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226dc78
	ctx.lr = 0x822AADCC;
	sub_8226DC78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r5,652(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// beq 0x822aadf0
	if (ctx.cr0.eq) goto loc_822AADF0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82334408
	ctx.lr = 0x822AADE8;
	sub_82334408(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// b 0x822aaee8
	goto loc_822AAEE8;
loc_822AADF0:
	// bl 0x822d4d48
	ctx.lr = 0x822AADF4;
	sub_822D4D48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x822aaee4
	if (ctx.cr0.eq) goto loc_822AAEE4;
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r11,r11,9,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aae78
	if (ctx.cr0.eq) goto loc_822AAE78;
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// oris r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 8388608;
	// stw r11,8(r29)
	REX_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// bl 0x8228cb48
	ctx.lr = 0x822AAE1C;
	sub_8228CB48(ctx, base);
	// sth r3,18(r29)
	REX_STORE_U16(ctx.r29.u32 + 18, ctx.r3.u16);
	// lwz r3,660(r26)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r26.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822aae54
	if (!ctx.cr0.eq) goto loc_822AAE54;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822aae54
	if (ctx.cr0.eq) goto loc_822AAE54;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822aae60
	if (!ctx.cr6.gt) goto loc_822AAE60;
loc_822AAE54:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822AAE5C;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822AAE60:
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
loc_822AAE78:
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm. r31,r11,13,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822aaea0
	if (ctx.cr0.eq) goto loc_822AAEA0;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r27,40
	ctx.r11.s64 = ctx.r27.s64 + 40;
loc_822AAE90:
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
	// bdnz 0x822aae90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822AAE90;
loc_822AAEA0:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r5,652(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 652);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82334408
	ctx.lr = 0x822AAEB4;
	sub_82334408(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822aaedc
	if (ctx.cr6.eq) goto loc_822AAEDC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_822AAEC4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r5,660(r26)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r26.u32 + 660);
	// bl 0x822c5ef0
	ctx.lr = 0x822AAED4;
	sub_822C5EF0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x822aaec4
	if (!ctx.cr0.eq) goto loc_822AAEC4;
loc_822AAEDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x822aaee8
	goto loc_822AAEE8;
loc_822AAEE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822AAEE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822BF6B8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x822BF6C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x822bf744
	if (ctx.cr6.eq) goto loc_822BF744;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
loc_822BF6F4:
	// and. r11,r8,r6
	ctx.r11.u64 = ctx.r8.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822bf738
	if (ctx.cr0.eq) goto loc_822BF738;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x822bf714
	if (!ctx.cr6.eq) goto loc_822BF714;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,12(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// clrlwi r28,r7,27
	ctx.r28.u64 = ctx.r7.u32 & 0x1F;
loc_822BF714:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,27,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3;
	// andc r7,r30,r7
	ctx.r7.u64 = ctx.r30.u64 & ~ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r30,r7,r11
	ctx.r30.u64 = ctx.r7.u64 | ctx.r11.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_822BF738:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// bdnz 0x822bf6f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BF6F4;
loc_822BF744:
	// bl 0x82281260
	ctx.lr = 0x822BF748;
	sub_82281260(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// rlwimi r10,r11,25,4,6
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xE000000) | (ctx.r10.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x822bf76c
	if (ctx.cr6.eq) goto loc_822BF76C;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_822BF764:
	// rlwimi r30,r30,2,0,29
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC) | (ctx.r30.u64 & 0xFFFFFFFF00000003);
	// bdnz 0x822bf764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822BF764;
loc_822BF76C:
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwimi r11,r30,5,19,26
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0x1FE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE01F);
	// rlwimi r11,r28,0,27,31
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1F) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822C0240) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d0
	ctx.lr = 0x822C0248;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r21,r4,48
	ctx.r21.s64 = ctx.r4.s64 + 48;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// b 0x822c0284
	goto loc_822C0284;
loc_822C0270:
	// lwz r28,52(r28)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r28.u32 + 52);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822c0308
	if (ctx.cr6.eq) goto loc_822C0308;
	// lwz r11,48(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 48);
	// addi r20,r28,48
	ctx.r20.s64 = ctx.r28.s64 + 48;
loc_822C0284:
	// rlwinm. r11,r11,2,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0270
	if (ctx.cr0.eq) goto loc_822C0270;
	// lwz r11,36(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 36);
	// addi r27,r28,32
	ctx.r27.s64 = ctx.r28.s64 + 32;
	// li r22,1
	ctx.r22.s64 = 1;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r26,0
	ctx.r26.s64 = 0;
	// bne 0x822c033c
	if (!ctx.cr0.eq) goto loc_822C033C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c033c
	if (ctx.cr0.eq) goto loc_822C033C;
loc_822C02B0:
	// lwz r11,8(r7)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14976, ctx.xer);
	// bne cr6,0x822c0320
	if (!ctx.cr6.eq) goto loc_822C0320;
	// lwz r9,0(r7)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r7.u32 + 0);
loc_822C02C4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c0318
	if (ctx.cr6.eq) goto loc_822C0318;
	// lwz r8,12(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,8(r8)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// blt cr6,0x822c02ec
	if (ctx.cr6.lt) goto loc_822C02EC;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// ble cr6,0x822c02f0
	if (!ctx.cr6.gt) goto loc_822C02F0;
loc_822C02EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C02F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0300
	if (ctx.cr0.eq) goto loc_822C0300;
	// cmplwi cr6,r10,94
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 94, ctx.xer);
	// bne cr6,0x822c0314
	if (!ctx.cr6.eq) goto loc_822C0314;
loc_822C0300:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x822c02c4
	goto loc_822C02C4;
loc_822C0308:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822C0314;
	sub_8225B1A0(ctx, base);
loc_822C0314:
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
loc_822C0318:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822c033c
	if (!ctx.cr6.eq) goto loc_822C033C;
loc_822C0320:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c033c
	if (!ctx.cr0.eq) goto loc_822C033C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c02b0
	if (!ctx.cr6.eq) goto loc_822C02B0;
loc_822C033C:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lis r25,-1
	ctx.r25.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// bne cr6,0x822c05d0
	if (!ctx.cr6.eq) goto loc_822C05D0;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r6,93
	ctx.r6.s64 = 93;
	// beq cr6,0x822c0378
	if (ctx.cr6.eq) goto loc_822C0378;
	// li r6,91
	ctx.r6.s64 = 91;
loc_822C0378:
	// bl 0x8232d9e0
	ctx.lr = 0x822C037C;
	sub_8232D9E0(ctx, base);
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// addi r11,r28,24
	ctx.r11.s64 = ctx.r28.s64 + 24;
	// addi r31,r10,36
	ctx.r31.s64 = ctx.r10.s64 + 36;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r8,r31,-36
	ctx.r8.s64 = ctx.r31.s64 + -36;
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r9,28(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r8,28(r28)
	REX_STORE_U32(ctx.r28.u32 + 28, ctx.r8.u32);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822c042c
	if (ctx.cr6.eq) goto loc_822C042C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,92
	ctx.r6.s64 = 92;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822C03E8;
	sub_8232D9E0(ctx, base);
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r8,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r8)
	REX_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x822814f0
	ctx.lr = 0x822C0428;
	sub_822814F0(ctx, base);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_822C042C:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,117
	ctx.r6.s64 = 117;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822C0448;
	sub_8232D9E0(ctx, base);
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// rlwinm r10,r3,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// ori r8,r11,1
	ctx.r8.u64 = ctx.r11.u64 | 1;
	// addi r11,r10,36
	ctx.r11.s64 = ctx.r10.s64 + 36;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
	// cmplw cr6,r28,r23
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r23.u32, ctx.xer);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,4(r27)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,36(r9)
	REX_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r27)
	REX_STORE_U32(ctx.r27.u32 + 4, ctx.r7.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// oris r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 33554432;
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq cr6,0x822c05c0
	if (ctx.cr6.eq) goto loc_822C05C0;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822C04A4;
	sub_82279AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822C04B0;
	sub_82281428(ctx, base);
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822c04dc
	if (ctx.cr6.eq) goto loc_822C04DC;
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82279aa8
	ctx.lr = 0x822C04D0;
	sub_82279AA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82281428
	ctx.lr = 0x822C04DC;
	sub_82281428(ctx, base);
loc_822C04DC:
	// lwz r11,48(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 48);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822c05ac
	if (ctx.cr6.eq) goto loc_822C05AC;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c05ac
	if (!ctx.cr0.eq) goto loc_822C05AC;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822c05ac
	if (ctx.cr0.eq) goto loc_822C05AC;
loc_822C0500:
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c0538
	if (ctx.cr6.eq) goto loc_822C0538;
	// lwz r10,0(r20)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x822c053c
	if (!ctx.cr0.eq) goto loc_822C053C;
loc_822C0538:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C053C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822c0594
	if (ctx.cr0.eq) goto loc_822C0594;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822c057c
	if (ctx.cr6.eq) goto loc_822C057C;
	// lwz r10,0(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r9,40(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r8,r10,13
	ctx.r8.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r8,r22,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// and. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// bne 0x822c0580
	if (!ctx.cr0.eq) goto loc_822C0580;
loc_822C057C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822C0580:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c0594
	if (!ctx.cr0.eq) goto loc_822C0594;
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// oris r10,r10,512
	ctx.r10.u64 = ctx.r10.u64 | 33554432;
	// stw r10,48(r11)
	REX_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
loc_822C0594:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c05ac
	if (!ctx.cr0.eq) goto loc_822C05AC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822c0500
	if (!ctx.cr6.eq) goto loc_822C0500;
loc_822C05AC:
	// stw r26,0(r19)
	REX_STORE_U32(ctx.r19.u32 + 0, ctx.r26.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r24,0(r18)
	REX_STORE_U32(ctx.r18.u32 + 0, ctx.r24.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e420
	__restgprlr_18(ctx, base);
	return;
loc_822C05C0:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822814f0
	ctx.lr = 0x822C05CC;
	sub_822814F0(ctx, base);
	// b 0x822c04dc
	goto loc_822C04DC;
loc_822C05D0:
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822c04dc
	if (ctx.cr6.eq) goto loc_822C04DC;
	// lwz r9,0(r26)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_822C05E0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822c0644
	if (ctx.cr6.eq) goto loc_822C0644;
	// lwz r11,0(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822c0600
	if (!ctx.cr0.eq) goto loc_822C0600;
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// beq 0x822c0604
	if (ctx.cr0.eq) goto loc_822C0604;
loc_822C0600:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822C0604:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822c0628
	if (ctx.cr0.eq) goto loc_822C0628;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwinm r10,r10,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r10,91
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 91, ctx.xer);
	// beq cr6,0x822c0630
	if (ctx.cr6.eq) goto loc_822C0630;
	// cmplwi cr6,r10,92
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 92, ctx.xer);
	// beq cr6,0x822c0638
	if (ctx.cr6.eq) goto loc_822C0638;
loc_822C0628:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x822c05e0
	goto loc_822C05E0;
loc_822C0630:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// b 0x822c063c
	goto loc_822C063C;
loc_822C0638:
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_822C063C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x822c04dc
	if (!ctx.cr6.eq) goto loc_822C04DC;
loc_822C0644:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822C0650;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822CB100) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822CB108;
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
	// li r6,51
	ctx.r6.s64 = 51;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CB134;
	sub_8232D9E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281260
	ctx.lr = 0x822CB144;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82281428
	ctx.lr = 0x822CB150;
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
	ctx.lr = 0x822CB168;
	sub_822761F8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822CBB30) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x822CBB38;
	__savegprlr_25(ctx, base);
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8232d9e0
	ctx.lr = 0x822CBB6C;
	sub_8232D9E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82281260
	ctx.lr = 0x822CBB7C;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBB88;
	sub_82281428(ctx, base);
	// stw r3,44(r25)
	REX_STORE_U32(ctx.r25.u32 + 44, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82281260
	ctx.lr = 0x822CBB98;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBBA4;
	sub_82281428(ctx, base);
	// stw r3,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82281260
	ctx.lr = 0x822CBBB4;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82281428
	ctx.lr = 0x822CBBC0;
	sub_82281428(ctx, base);
	// lwz r11,44(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 44);
	// stw r3,52(r25)
	REX_STORE_U32(ctx.r25.u32 + 52, ctx.r3.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,8(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
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
	// stw r10,8(r25)
	REX_STORE_U32(ctx.r25.u32 + 8, ctx.r10.u32);
	// bl 0x822761f8
	ctx.lr = 0x822CBBF0;
	sub_822761F8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822D01F0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// std r4,32(r1)
	REX_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// std r5,40(r1)
	REX_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d029c
	if (!ctx.cr0.eq) goto loc_822D029C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d029c
	if (ctx.cr0.eq) goto loc_822D029C;
loc_822D0214:
	// lwz r8,8(r7)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r7.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822d027c
	if (ctx.cr6.eq) goto loc_822D027C;
	// addi r11,r7,24
	ctx.r11.s64 = ctx.r7.s64 + 24;
loc_822D0228:
	// lwz r10,-8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r5,32(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 32);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x822d0260
	if (!ctx.cr6.eq) goto loc_822D0260;
	// lwz r10,-4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r5,36(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 36);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x822d0260
	if (!ctx.cr6.eq) goto loc_822D0260;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,40(r1)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r1.u32 + 40);
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// rlwinm. r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x822d0264
	if (ctx.cr0.eq) goto loc_822D0264;
loc_822D0260:
	// li r10,0
	ctx.r10.s64 = 0;
loc_822D0264:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d02a4
	if (!ctx.cr0.eq) goto loc_822D02A4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x822d0228
	if (ctx.cr6.lt) goto loc_822D0228;
loc_822D027C:
	// rlwinm r11,r7,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d029c
	if (!ctx.cr0.eq) goto loc_822D029C;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d0214
	if (!ctx.cr6.eq) goto loc_822D0214;
loc_822D029C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_822D02A4:
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_822D39A0) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3c4
	ctx.lr = 0x822D39A8;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// li r15,0
	ctx.r15.s64 = 0;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bne 0x822d39f0
	if (!ctx.cr0.eq) goto loc_822D39F0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822d39f0
	if (ctx.cr0.eq) goto loc_822D39F0;
loc_822D39D0:
	// rlwinm r10,r11,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822d39f0
	if (!ctx.cr0.eq) goto loc_822D39F0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822d39d0
	if (!ctx.cr6.eq) goto loc_822D39D0;
loc_822D39F0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// mr r20,r15
	ctx.r20.u64 = ctx.r15.u64;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// bl 0x8229f4c0
	ctx.lr = 0x822D3A08;
	sub_8229F4C0(ctx, base);
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// mr r18,r15
	ctx.r18.u64 = ctx.r15.u64;
	// stw r15,128(r1)
	REX_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// li r16,1
	ctx.r16.s64 = 1;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,120(r1)
	REX_STORE_U32(ctx.r1.u32 + 120, ctx.r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,124(r1)
	REX_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_822D3A34:
	// lwz r11,124(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3a54
	if (ctx.cr6.eq) goto loc_822D3A54;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,128(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 128);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x822d3a58
	if (!ctx.cr6.eq) goto loc_822D3A58;
loc_822D3A54:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822D3A58:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3d98
	if (!ctx.cr0.eq) goto loc_822D3D98;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8227aca8
	ctx.lr = 0x822D3A68;
	sub_8227ACA8(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~ctx.r17.u64;
	// lwz r22,0(r3)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne 0x822d3a84
	if (!ctx.cr0.eq) goto loc_822D3A84;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3A84:
	// rlwinm r10,r18,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r18,27
	ctx.r9.u64 = ctx.r18.u32 & 0x1F;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3a34
	if (!ctx.cr0.eq) goto loc_822D3A34;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822d0080
	ctx.lr = 0x822D3AA4;
	sub_822D0080(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3c00
	if (ctx.cr0.eq) goto loc_822D3C00;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// mr r25,r16
	ctx.r25.u64 = ctx.r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r24,r10,r11
	ctx.r24.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_822D3AC8:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// stw r15,96(r1)
	REX_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,88(r1)
	REX_STORE_U32(ctx.r1.u32 + 88, ctx.r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,92(r1)
	REX_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// b 0x822d3af8
	goto loc_822D3AF8;
loc_822D3AF4:
	// lwz r11,92(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 92);
loc_822D3AF8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3b14
	if (ctx.cr6.eq) goto loc_822D3B14;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,96(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x822d3b18
	if (!ctx.cr6.eq) goto loc_822D3B18;
loc_822D3B14:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822D3B18:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3bd8
	if (!ctx.cr0.eq) goto loc_822D3BD8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8227aca8
	ctx.lr = 0x822D3B28;
	sub_8227ACA8(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~ctx.r17.u64;
	// lwz r29,0(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// clrlwi. r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne 0x822d3b44
	if (!ctx.cr0.eq) goto loc_822D3B44;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3B44:
	// rlwinm r31,r27,29,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r27,27
	ctx.r30.u64 = ctx.r27.u32 & 0x1F;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// srw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3af4
	if (!ctx.cr0.eq) goto loc_822D3AF4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d0080
	ctx.lr = 0x822D3B64;
	sub_822D0080(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3af4
	if (ctx.cr0.eq) goto loc_822D3AF4;
	// lwz r11,4(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,16(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 16);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d3af4
	if (!ctx.cr6.eq) goto loc_822D3AF4;
	// lwz r10,24(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822d3af4
	if (!ctx.cr6.eq) goto loc_822D3AF4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x822d3af4
	if (!ctx.cr6.eq) goto loc_822D3AF4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne cr6,0x822d3bbc
	if (!ctx.cr6.eq) goto loc_822D3BBC;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3BBC:
	// lwzx r10,r31,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// slw r9,r16,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r30.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// stwx r10,r31,r11
	REX_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x822d3af4
	if (!ctx.cr6.eq) goto loc_822D3AF4;
loc_822D3BD8:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// blt cr6,0x822d3bf0
	if (ctx.cr6.lt) goto loc_822D3BF0;
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// mr r23,r16
	ctx.r23.u64 = ctx.r16.u64;
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// ble cr6,0x822d3ac8
	if (!ctx.cr6.gt) goto loc_822D3AC8;
loc_822D3BF0:
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3c00
	if (ctx.cr0.eq) goto loc_822D3C00;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x822d3a34
	goto loc_822D3A34;
loc_822D3C00:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822d00d0
	ctx.lr = 0x822D3C08;
	sub_822D00D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3a34
	if (ctx.cr0.eq) goto loc_822D3A34;
	// lwz r11,4(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 4);
	// mr r24,r16
	ctx.r24.u64 = ctx.r16.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 & ctx.r11.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r10,r11
	ctx.r23.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_822D3C34:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x822d3c64
	goto loc_822D3C64;
loc_822D3C60:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_822D3C64:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3c80
	if (ctx.cr6.eq) goto loc_822D3C80;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x822d3c84
	if (!ctx.cr6.eq) goto loc_822D3C84;
loc_822D3C80:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822D3C84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3d70
	if (!ctx.cr0.eq) goto loc_822D3D70;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8227aca8
	ctx.lr = 0x822D3C94;
	sub_8227ACA8(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~ctx.r17.u64;
	// lwz r31,0(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// clrlwi. r28,r11,31
	ctx.r28.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne 0x822d3cb0
	if (!ctx.cr0.eq) goto loc_822D3CB0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3CB0:
	// rlwinm r30,r27,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r27,27
	ctx.r29.u64 = ctx.r27.u32 & 0x1F;
	// lwzx r11,r30,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// srw r11,r11,r29
	ctx.r11.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r29.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3c60
	if (!ctx.cr0.eq) goto loc_822D3C60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822d00d0
	ctx.lr = 0x822D3CD0;
	sub_822D00D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3c60
	if (ctx.cr0.eq) goto loc_822D3C60;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,16(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 16);
	// clrlwi r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 & ctx.r10.u64;
	// subfe r8,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// lwz r8,16(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r9,24(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 24);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
	// lwz r11,28(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r9,28(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 28);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
	// lwz r11,36(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r10,36(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne cr6,0x822d3d54
	if (!ctx.cr6.eq) goto loc_822D3D54;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3D54:
	// lwzx r10,r30,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// slw r9,r16,r29
	ctx.r9.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r29.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplwi cr6,r26,4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 4, ctx.xer);
	// stwx r10,r30,r11
	REX_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r17,80(r1)
	ctx.r17.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// bne cr6,0x822d3c60
	if (!ctx.cr6.eq) goto loc_822D3C60;
loc_822D3D70:
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// blt cr6,0x822d3a34
	if (ctx.cr6.lt) goto loc_822D3A34;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// ble cr6,0x822d3c34
	if (!ctx.cr6.gt) goto loc_822D3C34;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmplwi cr6,r26,2
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 2, ctx.xer);
	// bne cr6,0x822d3a34
	if (!ctx.cr6.eq) goto loc_822D3A34;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// b 0x822d3a34
	goto loc_822D3A34;
loc_822D3D98:
	// addi r11,r20,-1
	ctx.r11.s64 = ctx.r20.s64 + -1;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r15
	ctx.r27.u64 = ctx.r15.u64;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x822d3db4
	if (!ctx.cr6.gt) goto loc_822D3DB4;
	// subf r28,r11,r19
	ctx.r28.u64 = ctx.r19.u64 - ctx.r11.u64;
	// b 0x822d3dc0
	goto loc_822D3DC0;
loc_822D3DB4:
	// subf r11,r19,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r19.u64;
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// add r30,r11,r20
	ctx.r30.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_822D3DC0:
	// lwz r11,4(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 4);
	// mr r31,r15
	ctx.r31.u64 = ctx.r15.u64;
	// stw r15,112(r1)
	REX_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// stw r21,104(r1)
	REX_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stw r11,108(r1)
	REX_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// b 0x822d3df0
	goto loc_822D3DF0;
loc_822D3DEC:
	// lwz r11,108(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 108);
loc_822D3DF0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822d3e0c
	if (ctx.cr6.eq) goto loc_822D3E0C;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,112(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 112);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// bne cr6,0x822d3e10
	if (!ctx.cr6.eq) goto loc_822D3E10;
loc_822D3E0C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_822D3E10:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3ef0
	if (!ctx.cr0.eq) goto loc_822D3EF0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8227aca8
	ctx.lr = 0x822D3E20;
	sub_8227ACA8(ctx, base);
	// not r11,r17
	ctx.r11.u64 = ~ctx.r17.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r17,4
	ctx.r11.s64 = ctx.r17.s64 + 4;
	// bne 0x822d3e3c
	if (!ctx.cr0.eq) goto loc_822D3E3C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
loc_822D3E3C:
	// rlwinm r9,r29,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r29,27
	ctx.r8.u64 = ctx.r29.u32 & 0x1F;
	// lwzx r11,r9,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822d3dec
	if (!ctx.cr0.eq) goto loc_822D3DEC;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822d3e8c
	if (!ctx.cr0.eq) goto loc_822D3E8C;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822d3e8c
	if (ctx.cr0.eq) goto loc_822D3E8C;
loc_822D3E6C:
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
	// bne 0x822d3e8c
	if (!ctx.cr0.eq) goto loc_822D3E8C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x822d3e6c
	if (!ctx.cr6.eq) goto loc_822D3E6C;
loc_822D3E8C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x822d3eac
	if (!ctx.cr6.gt) goto loc_822D3EAC;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_822D3EA4:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bdnz 0x822d3ea4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_822D3EA4;
loc_822D3EAC:
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x822d3ebc
	if (!ctx.cr6.eq) goto loc_822D3EBC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822D3EBC:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822d3ee8
	if (ctx.cr0.eq) goto loc_822D3EE8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822d3ed4
	if (ctx.cr6.eq) goto loc_822D3ED4;
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// b 0x822d3ee8
	goto loc_822D3EE8;
loc_822D3ED4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822d3ee4
	if (ctx.cr6.eq) goto loc_822D3EE4;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// b 0x822d3ee8
	goto loc_822D3EE8;
loc_822D3EE4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_822D3EE8:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
	// b 0x822d3dec
	goto loc_822D3DEC;
loc_822D3EF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8215e414
	__restgprlr_15(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822F1500) {
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
	// lwz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
loc_822F1524:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f15cc
	if (ctx.cr6.eq) goto loc_822F15CC;
	// lwz r11,12(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r31,40(r5)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r10,48(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r30,r10,13
	ctx.r30.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	ctx.r30.u64 = ctx.r30.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r30,r4,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f15bc
	if (ctx.cr0.eq) goto loc_822F15BC;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f1594
	if (ctx.cr6.eq) goto loc_822F1594;
	// lwz r10,48(r8)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r31,40(r11)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r30,r10,13
	ctx.r30.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r30,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r30,r30,27
	ctx.r30.u64 = ctx.r30.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r30,r4,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f15bc
	if (ctx.cr0.eq) goto loc_822F15BC;
loc_822F1594:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x822f15b4
	if (!ctx.cr6.eq) goto loc_822F15B4;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822f15ac
	if (!ctx.cr6.eq) goto loc_822F15AC;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// b 0x822f15bc
	goto loc_822F15BC;
loc_822F15AC:
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x822f15c4
	if (!ctx.cr6.eq) goto loc_822F15C4;
loc_822F15B4:
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822F15BC:
	// lwz r9,4(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// b 0x822f1524
	goto loc_822F1524;
loc_822F15C4:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822F15CC;
	sub_8225B1A0(ctx, base);
loc_822F15CC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
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

DEFINE_REX_FUNC(sub_822F2408) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x822F2410;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// clrlwi. r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r20,1
	ctx.r20.s64 = 1;
	// bne 0x822f2508
	if (!ctx.cr0.eq) goto loc_822F2508;
	// lwz r11,48(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 48);
	// lwz r10,40(r5)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r5.u32 + 40);
	// clrlwi r8,r11,13
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r8,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2468
	if (ctx.cr0.eq) goto loc_822F2468;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// b 0x822f2b00
	goto loc_822F2B00;
loc_822F2468:
	// lwz r10,12(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2484
	if (ctx.cr6.eq) goto loc_822F2484;
	// lwz r11,8(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne cr6,0x822f2488
	if (!ctx.cr6.eq) goto loc_822F2488;
loc_822F2484:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F2488:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f24b0
	if (!ctx.cr0.eq) goto loc_822F24B0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x822f24a0
	if (ctx.cr6.eq) goto loc_822F24A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
loc_822F24A0:
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x822f24b0
	if (!ctx.cr6.eq) goto loc_822F24B0;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// b 0x822f2b00
	goto loc_822F2B00;
loc_822F24B0:
	// lwz r9,8(r23)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F24B8:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x822f2500
	if (ctx.cr6.eq) goto loc_822F2500;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r8,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r7,r20,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r6,40(r11)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r6
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f24f4
	if (ctx.cr0.eq) goto loc_822F24F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f24fc
	if (!ctx.cr6.eq) goto loc_822F24FC;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_822F24F4:
	// lwz r9,12(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 12);
	// b 0x822f24b8
	goto loc_822F24B8;
loc_822F24FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822F2500:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x822f2b00
	if (!ctx.cr6.eq) goto loc_822F2B00;
loc_822F2508:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bne cr6,0x822f251c
	if (!ctx.cr6.eq) goto loc_822F251C;
	// li r4,4800
	ctx.r4.s64 = 4800;
	// bl 0x8225b1a0
	ctx.lr = 0x822F251C;
	sub_8225B1A0(ctx, base);
loc_822F251C:
	// bl 0x82276288
	ctx.lr = 0x822F2520;
	sub_82276288(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x822f2558
	if (!ctx.cr6.eq) goto loc_822F2558;
	// rlwinm r9,r31,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r8)
	REX_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// stw r9,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// b 0x822f2584
	goto loc_822F2584;
loc_822F2558:
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r7,4(r10)
	REX_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r7,4(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r7,r7,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r7)
	REX_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_822F2584:
	// lwz r11,20(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2758
	if (!ctx.cr0.eq) goto loc_822F2758;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f2758
	if (ctx.cr0.eq) goto loc_822F2758;
loc_822F259C:
	// lwz r11,8(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,14336
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14336, ctx.xer);
	// bne cr6,0x822f273c
	if (!ctx.cr6.eq) goto loc_822F273C;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_822F25B4:
	// lwz r30,0(r28)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x822f271c
	if (ctx.cr6.eq) goto loc_822F271C;
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x822f2708
	if (ctx.cr6.eq) goto loc_822F2708;
	// lwz r10,48(r21)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f2708
	if (ctx.cr0.eq) goto loc_822F2708;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2708
	if (!ctx.cr0.eq) goto loc_822F2708;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x822f26d4
	if (!ctx.cr6.eq) goto loc_822F26D4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8232da88
	ctx.lr = 0x822F2638;
	sub_8232DA88(ctx, base);
	// lwz r11,660(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 660);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f26b4
	if (ctx.cr6.eq) goto loc_822F26B4;
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// sth r11,18(r3)
	REX_STORE_U16(ctx.r3.u32 + 18, ctx.r11.u16);
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// rlwimi r11,r20,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r11,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lwz r3,660(r22)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r22.u32 + 660);
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f2690
	if (!ctx.cr0.eq) goto loc_822F2690;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r11.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f2690
	if (ctx.cr0.eq) goto loc_822F2690;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,12(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x822f269c
	if (!ctx.cr6.gt) goto loc_822F269C;
loc_822F2690:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822fade8
	ctx.lr = 0x822F2698;
	sub_822FADE8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_822F269C:
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
loc_822F26B4:
	// lwz r11,40(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 40);
	// rlwinm. r11,r11,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f26d4
	if (ctx.cr0.eq) goto loc_822F26D4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,513
	ctx.r10.s64 = 513;
	// rlwimi r11,r10,24,27,30
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1E) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE1);
	// rlwimi r11,r10,24,7,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1000000) | (ctx.r11.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r11,8(r31)
	REX_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_822F26D4:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x822f26e8
	goto loc_822F26E8;
loc_822F26E0:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
loc_822F26E8:
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822f26e0
	if (!ctx.cr6.eq) goto loc_822F26E0;
	// lwz r10,4(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r30,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r31,16(r30)
	REX_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
loc_822F2708:
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x822f25b4
	if (!ctx.cr6.eq) goto loc_822F25B4;
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// b 0x822f25b4
	goto loc_822F25B4;
loc_822F271C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f273c
	if (ctx.cr6.eq) goto loc_822F273C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82281260
	ctx.lr = 0x822F2730;
	sub_82281260(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82281428
	ctx.lr = 0x822F273C;
	sub_82281428(ctx, base);
loc_822F273C:
	// rlwinm r11,r29,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2758
	if (!ctx.cr0.eq) goto loc_822F2758;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f259c
	if (!ctx.cr6.eq) goto loc_822F259C;
loc_822F2758:
	// addi r24,r23,8
	ctx.r24.s64 = ctx.r23.s64 + 8;
	// lwz r28,8(r23)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r23.u32 + 8);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_822F2768:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x822f28fc
	if (ctx.cr6.eq) goto loc_822F28FC;
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r29,4(r28)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r10,r11,13
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFF;
	// rlwinm r11,r10,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,40(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 40);
	// slw r10,r20,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r11
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f28e4
	if (ctx.cr0.eq) goto loc_822F28E4;
	// lwz r10,48(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 48);
	// clrlwi r9,r10,13
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFF;
	// rlwinm r10,r9,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r9,r20,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// and. r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f28e4
	if (!ctx.cr0.eq) goto loc_822F28E4;
	// lwz r11,16(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x822f27d8
	if (!ctx.cr6.gt) goto loc_822F27D8;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_822F27D8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82338968
	ctx.lr = 0x822F27E8;
	sub_82338968(ctx, base);
	// lwz r11,36(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 36);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822f28e4
	if (!ctx.cr0.eq) goto loc_822F28E4;
	// lwz r11,32(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r30,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r30.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822f28e4
	if (ctx.cr0.eq) goto loc_822F28E4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// cmplwi cr6,r11,86
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 86, ctx.xer);
	// beq cr6,0x822f2840
	if (ctx.cr6.eq) goto loc_822F2840;
	// cmplwi cr6,r11,87
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 87, ctx.xer);
	// beq cr6,0x822f2840
	if (ctx.cr6.eq) goto loc_822F2840;
	// cmplwi cr6,r11,89
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 89, ctx.xer);
	// beq cr6,0x822f2840
	if (ctx.cr6.eq) goto loc_822F2840;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// beq cr6,0x822f2840
	if (ctx.cr6.eq) goto loc_822F2840;
	// cmplwi cr6,r11,84
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 84, ctx.xer);
	// beq cr6,0x822f2840
	if (ctx.cr6.eq) goto loc_822F2840;
	// cmplwi cr6,r11,85
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 85, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x822f2844
	if (!ctx.cr6.eq) goto loc_822F2844;
loc_822F2840:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_822F2844:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f28e4
	if (ctx.cr0.eq) goto loc_822F28E4;
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// rlwinm r6,r11,18,29,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x7;
	// rlwinm r5,r11,13,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// rlwinm r4,r11,25,25,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	// bl 0x8226d728
	ctx.lr = 0x822F2864;
	sub_8226D728(ctx, base);
	// addi r11,r30,-16
	ctx.r11.s64 = ctx.r30.s64 + -16;
	// add r31,r3,r11
	ctx.r31.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x822f287c
	if (!ctx.cr6.eq) goto loc_822F287C;
	// stw r25,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_822F287C:
	// lwz r11,8(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r11,r11,0,18,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r11,10880
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10880, ctx.xer);
	// bne cr6,0x822f28e4
	if (!ctx.cr6.eq) goto loc_822F28E4;
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
loc_822F2890:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822f28b8
	if (ctx.cr6.eq) goto loc_822F28B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x822f28b0
	if (ctx.cr6.eq) goto loc_822F28B0;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822f2890
	goto loc_822F2890;
loc_822F28B0:
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x822f28bc
	goto loc_822F28BC;
loc_822F28B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822F28BC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822f28e4
	if (ctx.cr0.eq) goto loc_822F28E4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,84
	ctx.r4.s64 = 84;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8226d728
	ctx.lr = 0x822F28D8;
	sub_8226D728(ctx, base);
	// lwz r11,-4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + -4);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// stwx r25,r3,r11
	REX_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r25.u32);
loc_822F28E4:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x822f28f4
	if (!ctx.cr6.eq) goto loc_822F28F4;
	// addi r26,r28,12
	ctx.r26.s64 = ctx.r28.s64 + 12;
loc_822F28F4:
	// lwz r28,0(r26)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// b 0x822f2768
	goto loc_822F2768;
loc_822F28FC:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82338b20
	ctx.lr = 0x822F290C;
	sub_82338B20(ctx, base);
	// stw r27,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// lwz r10,76(r23)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r23.u32 + 76);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r11,76(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwimi r10,r11,0,0,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFF80000) | (ctx.r10.u64 & 0xFFFFFFFF0007FFFF);
	// stw r10,76(r25)
	REX_STORE_U32(ctx.r25.u32 + 76, ctx.r10.u32);
	// bl 0x822f4320
	ctx.lr = 0x822F2928;
	sub_822F4320(ctx, base);
	// lwz r11,48(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 48);
	// rlwinm. r10,r11,9,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822f299c
	if (ctx.cr0.eq) goto loc_822F299C;
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r9,76(r25)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r25.u32 + 76);
	// rlwimi r11,r10,0,9,7
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r11.u64 & 0x800000);
	// stw r11,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r11.u32);
	// lwz r11,76(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 76);
	// rlwimi r11,r9,0,10,8
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF) | (ctx.r11.u64 & 0x400000);
	// lwz r10,48(r25)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r25.u32 + 48);
	// stw r11,76(r25)
	REX_STORE_U32(ctx.r25.u32 + 76, ctx.r11.u32);
	// lwz r9,76(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 76);
	// rlwimi r9,r11,0,9,7
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF) | (ctx.r9.u64 & 0x800000);
	// stw r9,76(r25)
	REX_STORE_U32(ctx.r25.u32 + 76, ctx.r9.u32);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r9,112(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 112);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r9,112(r25)
	REX_STORE_U32(ctx.r25.u32 + 112, ctx.r9.u32);
	// lwz r9,76(r21)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r21.u32 + 76);
	// rlwimi r9,r11,0,8,6
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF) | (ctx.r9.u64 & 0x1000000);
	// stw r9,76(r25)
	REX_STORE_U32(ctx.r25.u32 + 76, ctx.r9.u32);
	// lwz r11,76(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 76);
	// rlwimi r11,r9,0,7,5
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF) | (ctx.r11.u64 & 0x2000000);
	// stw r11,76(r25)
	REX_STORE_U32(ctx.r25.u32 + 76, ctx.r11.u32);
	// lwz r11,108(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 108);
	// stw r11,108(r25)
	REX_STORE_U32(ctx.r25.u32 + 108, ctx.r11.u32);
	// lwz r11,72(r21)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r21.u32 + 72);
	// stw r11,72(r25)
	REX_STORE_U32(ctx.r25.u32 + 72, ctx.r11.u32);
	// stw r10,48(r25)
	REX_STORE_U32(ctx.r25.u32 + 48, ctx.r10.u32);
loc_822F299C:
	// lwz r11,20(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 20);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2afc
	if (!ctx.cr0.eq) goto loc_822F2AFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822f2afc
	if (ctx.cr0.eq) goto loc_822F2AFC;
loc_822F29B4:
	// lwz r31,8(r25)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r25.u32 + 8);
loc_822F29B8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f2ae0
	if (ctx.cr6.eq) goto loc_822F2AE0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822f1500
	ctx.lr = 0x822F29D8;
	sub_822F1500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822f29e8
	if (ctx.cr0.eq) goto loc_822F29E8;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822f29b8
	goto loc_822F29B8;
loc_822F29E8:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r28,16(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
loc_822F29FC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x822f2a7c
	if (ctx.cr6.eq) goto loc_822F2A7C;
	// lwz r11,12(r10)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,40(r21)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r21.u32 + 40);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,48(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 48);
	// clrlwi r6,r9,13
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r6,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822f2a74
	if (ctx.cr0.eq) goto loc_822F2A74;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x822f2a6c
	if (ctx.cr6.eq) goto loc_822F2A6C;
	// lwz r9,48(r8)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r7,40(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi r6,r9,13
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFF;
	// rlwinm r9,r6,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r6,r6,27
	ctx.r6.u64 = ctx.r6.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// slw r6,r20,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x822f2a74
	if (ctx.cr0.eq) goto loc_822F2A74;
loc_822F2A6C:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_822F2A74:
	// lwz r10,4(r10)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x822f29fc
	goto loc_822F29FC;
loc_822F2A7C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822f2b08
	if (ctx.cr6.eq) goto loc_822F2B08;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82281428
	ctx.lr = 0x822F2A90;
	sub_82281428(ctx, base);
	// lwz r31,0(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
loc_822F2A94:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822f2ad0
	if (ctx.cr6.eq) goto loc_822F2AD0;
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822f1500
	ctx.lr = 0x822F2AB8;
	sub_822F1500(ctx, base);
	// cmplw cr6,r29,r3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x822f2ac8
	if (ctx.cr6.eq) goto loc_822F2AC8;
	// lwz r31,12(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// b 0x822f2a94
	goto loc_822F2A94;
loc_822F2AC8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x822f2ae0
	if (!ctx.cr6.eq) goto loc_822F2AE0;
loc_822F2AD0:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82281b70
	ctx.lr = 0x822F2AE0;
	sub_82281B70(ctx, base);
loc_822F2AE0:
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,40(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 40);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x822f2afc
	if (!ctx.cr0.eq) goto loc_822F2AFC;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822f29b4
	if (!ctx.cr6.eq) goto loc_822F29B4;
loc_822F2AFC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_822F2B00:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
loc_822F2B08:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822F2B14;
	sub_8225B1A0(ctx, base);
}

DEFINE_REX_FUNC(sub_822FD7C0) {
	REX_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x822fd7d8
	if (ctx.cr0.eq) goto loc_822FD7D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x822fd7e4
	goto loc_822FD7E4;
loc_822FD7D8:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
loc_822FD7E4:
	// stw r11,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x822fd7f8
	if (ctx.cr6.eq) goto loc_822FD7F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x822fd7fc
	goto loc_822FD7FC;
loc_822FD7F8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_822FD7FC:
	// stw r11,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x822faa28
	sub_822FAA28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_822FDF10) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x822FDF18;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x823042e0
	ctx.lr = 0x822FDF34;
	sub_823042E0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,564(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 564);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822f9950
	ctx.lr = 0x822FDF44;
	sub_822F9950(ctx, base);
	// lwz r10,12(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// mulli r27,r31,40
	ctx.r27.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(40));
	// lwz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 4);
	// lwzx r9,r27,r10
	ctx.r9.u64 = REX_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r31,r9,29,18,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x3FFF;
	// bne 0x822fdf90
	if (!ctx.cr0.eq) goto loc_822FDF90;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x822fdf90
	if (ctx.cr0.eq) goto loc_822FDF90;
loc_822FDF70:
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x822fdf90
	if (!ctx.cr0.eq) goto loc_822FDF90;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x822fdf70
	if (!ctx.cr6.eq) goto loc_822FDF70;
loc_822FDF90:
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x822fe02c
	if (ctx.cr6.eq) goto loc_822FE02C;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x822fdfac
	if (ctx.cr6.eq) goto loc_822FDFAC;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FDFAC;
	sub_8225B1A0(ctx, base);
loc_822FDFAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822fd710
	ctx.lr = 0x822FDFB8;
	sub_822FD710(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x822fe020
	if (!ctx.cr6.eq) goto loc_822FE020;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,0,18,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r10,16000
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16000, ctx.xer);
	// bne cr6,0x822fe020
	if (!ctx.cr6.eq) goto loc_822FE020;
	// rlwinm r4,r11,30,18,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFF;
	// bl 0x822c6038
	ctx.lr = 0x822FDFE4;
	sub_822C6038(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x822fe020
	if (!ctx.cr6.eq) goto loc_822FE020;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822fe064
	if (ctx.cr6.eq) goto loc_822FE064;
	// ld r10,80(r1)
	ctx.r10.u64 = REX_LOAD_U64(ctx.r1.u32 + 80);
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// rlwinm r5,r11,0,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// std r10,0(r30)
	REX_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// bl 0x8215eac8
	ctx.lr = 0x822FE01C;
	sub_8215EAC8(ctx, base);
	// b 0x822fe064
	goto loc_822FE064;
loc_822FE020:
	// li r4,4801
	ctx.r4.s64 = 4801;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x822FE02C;
	sub_8225B1A0(ctx, base);
loc_822FE02C:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x822fe064
	if (ctx.cr0.lt) goto loc_822FE064;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_822FE040:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822fd710
	ctx.lr = 0x822FE04C;
	sub_822FD710(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stwu r11,-8(r30)
	ea = -8 + ctx.r30.u32;
	REX_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r30)
	REX_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bge 0x822fe040
	if (!ctx.cr0.lt) goto loc_822FE040;
loc_822FE064:
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82303820) {
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
	// lwz r11,40(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823039c8
	if (ctx.cr6.eq) goto loc_823039C8;
	// lwz r10,16(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8230385c
	if (ctx.cr6.lt) goto loc_8230385C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x8225b1a0
	ctx.lr = 0x8230385C;
	sub_8225B1A0(ctx, base);
loc_8230385C:
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8230387c
	if (ctx.cr0.eq) goto loc_8230387C;
	// li r4,4801
	ctx.r4.s64 = 4801;
	// bl 0x8225b1a0
	ctx.lr = 0x8230387C;
	sub_8225B1A0(ctx, base);
loc_8230387C:
	// lwz r9,20(r4)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r9,16383
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16383, ctx.xer);
	// ble cr6,0x82303890
	if (!ctx.cr6.gt) goto loc_82303890;
	// li r4,3519
	ctx.r4.s64 = 3519;
	// bl 0x8225b1a0
	ctx.lr = 0x82303890;
	sub_8225B1A0(ctx, base);
loc_82303890:
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// li r5,32
	ctx.r5.s64 = 32;
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwzx r7,r11,r10
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r7,r9,3,15,28
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x1FFF8) | (ctx.r7.u64 & 0xFFFFFFFFFFFE0007);
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r7,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r30,r8,0,29,31
	ctx.r30.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFFF8);
	// stwx r30,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r8,40(r4)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,20(r11)
	REX_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,16(r11)
	REX_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r6,12(r11)
	REX_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// oris r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 134217728;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,112
	ctx.r10.u64 = ctx.r10.u64 | 112;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r9,20,10,12
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x380000) | (ctx.r10.u64 & 0xFFFFFFFFFFC7FFFF);
	// stw r10,8(r11)
	REX_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r6,40(r4)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r4.u32 + 40);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// mulli r11,r11,40
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(40));
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82303740
	ctx.lr = 0x823039C8;
	sub_82303740(ctx, base);
loc_823039C8:
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

DEFINE_REX_FUNC(sub_82314770) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82314778;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-14148
	ctx.r31.s64 = ctx.r11.s64 + -14148;
	// addi r30,r10,12784
	ctx.r30.s64 = ctx.r10.s64 + 12784;
	// bne cr6,0x823147b8
	if (!ctx.cr6.eq) goto loc_823147B8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,10752
	ctx.r5.s64 = ctx.r11.s64 + 10752;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,482
	ctx.r7.s64 = 482;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823147B8;
	sub_82260F30(ctx, base);
loc_823147B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x823147dc
	if (!ctx.cr6.eq) goto loc_823147DC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,1420
	ctx.r5.s64 = ctx.r11.s64 + 1420;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,483
	ctx.r7.s64 = 483;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823147DC;
	sub_82260F30(ctx, base);
loc_823147DC:
	// lwz r4,280(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 280);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823147f0
	if (ctx.cr6.eq) goto loc_823147F0;
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82316ee0
	ctx.lr = 0x823147F0;
	sub_82316EE0(ctx, base);
loc_823147F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82314E20) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82314E28;
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
	// addi r29,r10,13032
	ctx.r29.s64 = ctx.r10.s64 + 13032;
	// bne cr6,0x82314e68
	if (!ctx.cr6.eq) goto loc_82314E68;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,12752
	ctx.r5.s64 = ctx.r11.s64 + 12752;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,445
	ctx.r7.s64 = 445;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314E68;
	sub_82260F30(ctx, base);
loc_82314E68:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82314e8c
	if (!ctx.cr6.eq) goto loc_82314E8C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,2028
	ctx.r5.s64 = ctx.r11.s64 + 2028;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,446
	ctx.r7.s64 = 446;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314E8C;
	sub_82260F30(ctx, base);
loc_82314E8C:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bgt cr6,0x82314eb4
	if (ctx.cr6.gt) goto loc_82314EB4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,13256
	ctx.r5.s64 = ctx.r11.s64 + 13256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314EB4;
	sub_82260F30(ctx, base);
loc_82314EB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822656f0
	ctx.lr = 0x82314EBC;
	sub_822656F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82314ee0
	if (ctx.cr0.eq) goto loc_82314EE0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,13220
	ctx.r5.s64 = ctx.r11.s64 + 13220;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,451
	ctx.r7.s64 = 451;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82314EE0;
	sub_82260F30(ctx, base);
loc_82314EE0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822655a8
	ctx.lr = 0x82314EE8;
	sub_822655A8(ctx, base);
	// bl 0x82265828
	ctx.lr = 0x82314EEC;
	sub_82265828(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8215ec60
	ctx.lr = 0x82314EFC;
	sub_8215EC60(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82314a28
	ctx.lr = 0x82314F08;
	sub_82314A28(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12(r31)
	REX_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82316540) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3dc
	ctx.lr = 0x82316548;
	__savegprlr_21(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-14148
	ctx.r29.s64 = ctx.r11.s64 + -14148;
	// addi r28,r10,14104
	ctx.r28.s64 = ctx.r10.s64 + 14104;
	// bne cr6,0x82316588
	if (!ctx.cr6.eq) goto loc_82316588;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,14312
	ctx.r5.s64 = ctx.r11.s64 + 14312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,496
	ctx.r7.s64 = 496;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316588;
	sub_82260F30(ctx, base);
loc_82316588:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x823165ac
	if (!ctx.cr6.eq) goto loc_823165AC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,14304
	ctx.r5.s64 = ctx.r11.s64 + 14304;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,497
	ctx.r7.s64 = 497;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823165AC;
	sub_82260F30(ctx, base);
loc_823165AC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x822673c8
	ctx.lr = 0x823165B4;
	sub_822673C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x822673c8
	ctx.lr = 0x823165C0;
	sub_822673C8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x823165e8
	if (!ctx.cr6.eq) goto loc_823165E8;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,14776
	ctx.r5.s64 = ctx.r11.s64 + 14776;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,516
	ctx.r7.s64 = 516;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823165E8;
	sub_82260F30(ctx, base);
loc_823165E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8231660c
	if (!ctx.cr6.eq) goto loc_8231660C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,14768
	ctx.r5.s64 = ctx.r11.s64 + 14768;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,517
	ctx.r7.s64 = 517;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231660C;
	sub_82260F30(ctx, base);
loc_8231660C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82101610
	ctx.lr = 0x82316614;
	sub_82101610(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82101610
	ctx.lr = 0x82316620;
	sub_82101610(ctx, base);
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// bne cr6,0x82316644
	if (!ctx.cr6.eq) goto loc_82316644;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,14724
	ctx.r5.s64 = ctx.r11.s64 + 14724;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,518
	ctx.r7.s64 = 518;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316644;
	sub_82260F30(ctx, base);
loc_82316644:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82315790
	ctx.lr = 0x8231664C;
	sub_82315790(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82315790
	ctx.lr = 0x82316658;
	sub_82315790(ctx, base);
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x823167c4
	if (!ctx.cr6.lt) goto loc_823167C4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r26,r10,14680
	ctx.r26.s64 = ctx.r10.s64 + 14680;
	// addi r25,r9,14636
	ctx.r25.s64 = ctx.r9.s64 + 14636;
	// addi r24,r8,14588
	ctx.r24.s64 = ctx.r8.s64 + 14588;
	// addi r27,r11,14540
	ctx.r27.s64 = ctx.r11.s64 + 14540;
loc_82316688:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82266c10
	ctx.lr = 0x82316698;
	sub_82266C10(ctx, base);
	// lwz r11,240(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823167b0
	if (ctx.cr6.eq) goto loc_823167B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82266c10
	ctx.lr = 0x823166B4;
	sub_82266C10(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823167c4
	if (ctx.cr6.eq) goto loc_823167C4;
	// lwz r11,372(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,212(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82316714
	if (ctx.cr6.eq) goto loc_82316714;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x823166f0
	if (ctx.cr6.lt) goto loc_823166F0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,554
	ctx.r7.s64 = 554;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823166F0;
	sub_82260F30(ctx, base);
loc_823166F0:
	// lwz r11,212(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82316714
	if (ctx.cr6.lt) goto loc_82316714;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316714;
	sub_82260F30(ctx, base);
loc_82316714:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82316718:
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// addi r11,r1,244
	ctx.r11.s64 = ctx.r1.s64 + 244;
	// lwzx r10,r31,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82316774
	if (ctx.cr6.eq) goto loc_82316774;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x82316750
	if (ctx.cr6.lt) goto loc_82316750;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,568
	ctx.r7.s64 = 568;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316750;
	sub_82260F30(ctx, base);
loc_82316750:
	// lwzx r11,r31,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// blt cr6,0x82316774
	if (ctx.cr6.lt) goto loc_82316774;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,569
	ctx.r7.s64 = 569;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82316774;
	sub_82260F30(ctx, base);
loc_82316774:
	// addi r11,r1,260
	ctx.r11.s64 = ctx.r1.s64 + 260;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823167c4
	if (!ctx.cr6.eq) goto loc_823167C4;
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// addi r10,r1,196
	ctx.r10.s64 = ctx.r1.s64 + 196;
	// lwzx r11,r31,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r10,r31,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823167c4
	if (!ctx.cr6.eq) goto loc_823167C4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x82316718
	if (ctx.cr6.lt) goto loc_82316718;
loc_823167B0:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x82316688
	if (ctx.cr6.lt) goto loc_82316688;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823167c8
	goto loc_823167C8;
loc_823167C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823167C8:
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x8215e42c
	__restgprlr_21(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231D988) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8231D990;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,28(r3)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82318258
	ctx.lr = 0x8231D9A4;
	sub_82318258(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r30.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x8231da80
	if (ctx.cr6.lt) goto loc_8231DA80;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bge cr6,0x8231db20
	if (!ctx.cr6.lt) goto loc_8231DB20;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x8231d9e0
	if (!ctx.cr6.eq) goto loc_8231D9E0;
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r10,17,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// b 0x8231d9f8
	goto loc_8231D9F8;
loc_8231D9E0:
	// li r11,86
	ctx.r11.s64 = 86;
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r8,r9,16,3,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0x1FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFE000FFFF);
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_8231D9F8:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r3,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231da30
	if (ctx.cr0.eq) goto loc_8231DA30;
	// lwz r9,32(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231DA30:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231da48
	if (ctx.cr0.eq) goto loc_8231DA48;
	// lwz r9,44(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231DA48:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231da6c
	if (ctx.cr0.eq) goto loc_8231DA6C;
	// lwz r11,28(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231DA6C:
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231db20
	if (ctx.cr0.eq) goto loc_8231DB20;
	// lwz r11,40(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// b 0x8231db18
	goto loc_8231DB18;
loc_8231DA80:
	// li r9,86
	ctx.r9.s64 = 86;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r9,r11,16,3,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFE000FFFF);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r9,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// sth r3,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lwz r9,4(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	REX_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x8231dacc
	if (ctx.cr0.eq) goto loc_8231DACC;
	// lwz r9,28(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 28);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231DACC:
	// lwz r9,16(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm. r9,r9,0,8,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x8231dae4
	if (ctx.cr0.eq) goto loc_8231DAE4;
	// lwz r9,40(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 40);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8231DAE4:
	// lwz r9,20(r30)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231db08
	if (ctx.cr0.eq) goto loc_8231DB08;
	// lwz r11,32(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231DB08:
	// lwz r11,20(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8231db20
	if (ctx.cr0.eq) goto loc_8231DB20;
	// lwz r11,44(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
loc_8231DB18:
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8231DB20:
	// li r9,108
	ctx.r9.s64 = 108;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// sth r9,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r9.u16);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,0(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r8,0,16,2
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r8,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r8,23360(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 23360);
	// sth r8,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// lwz r8,23360(r29)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r29.u32 + 23360);
	// sth r8,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r8.u16);
	// lwz r8,0(r11)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r8,r10,18,8,15
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r8,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// sth r9,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r9.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r10,18,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8231FD38) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8231FD40;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r10,4(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r27,28(r3)
	ctx.r27.u64 = REX_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r23,r11,-14148
	ctx.r23.s64 = ctx.r11.s64 + -14148;
	// lhz r9,0(r4)
	ctx.r9.u64 = REX_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r25,r10,16
	ctx.r25.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r10,22,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0xFC0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// clrlwi r29,r9,19
	ctx.r29.u64 = ctx.r9.u32 & 0x1FFF;
	// addi r22,r10,16040
	ctx.r22.s64 = ctx.r10.s64 + 16040;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x8231fdb4
	if (!ctx.cr6.eq) goto loc_8231FDB4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,17664
	ctx.r5.s64 = ctx.r11.s64 + 17664;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,12039
	ctx.r7.s64 = 12039;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231FDB4;
	sub_82260F30(ctx, base);
loc_8231FDB4:
	// lhz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// lis r10,-4370
	ctx.r10.s64 = -286392320;
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// ori r10,r10,61166
	ctx.r10.u64 = ctx.r10.u64 | 61166;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r27
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8231ff58
	if (!ctx.cr6.eq) goto loc_8231FF58;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82318258
	ctx.lr = 0x8231FDE4;
	sub_82318258(ctx, base);
	// lhz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// li r8,65
	ctx.r8.s64 = 65;
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// clrlwi r9,r29,30
	ctx.r9.u64 = ctx.r29.u32 & 0x3;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// addi r10,r11,4200
	ctx.r10.s64 = ctx.r11.s64 + 4200;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r3,r6,r27
	REX_STORE_U32(ctx.r6.u32 + ctx.r27.u32, ctx.r3.u32);
	// sth r8,2(r31)
	REX_STORE_U16(ctx.r31.u32 + 2, ctx.r8.u16);
	// lwz r6,0(r31)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r6,r6,0,16,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFE000FFFF;
	// stw r6,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// sth r3,6(r31)
	REX_STORE_U16(ctx.r31.u32 + 6, ctx.r3.u16);
	// lwz r7,4(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r7,r10,18,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// sth r26,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r26.u16);
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r7,r8,16,8,15
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r7,0(r11)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x8231fe5c
	if (!ctx.cr6.eq) goto loc_8231FE5C;
	// rlwinm r7,r7,0,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x8231fe60
	goto loc_8231FE60;
loc_8231FE5C:
	// rlwimi r7,r10,0,29,31
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFF8);
loc_8231FE60:
	// rlwinm r5,r29,30,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8231fe7c
	if (!ctx.cr6.eq) goto loc_8231FE7C;
	// rlwinm r7,r7,0,28,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// b 0x8231fe80
	goto loc_8231FE80;
loc_8231FE7C:
	// rlwimi r7,r10,4,25,27
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFF8F);
loc_8231FE80:
	// rlwinm r6,r29,28,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x3;
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// bne cr6,0x8231fe9c
	if (!ctx.cr6.eq) goto loc_8231FE9C;
	// rlwinm r7,r7,0,24,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// b 0x8231fea0
	goto loc_8231FEA0;
loc_8231FE9C:
	// rlwimi r7,r10,8,21,23
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x700) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF8FF);
loc_8231FEA0:
	// stw r7,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// rlwinm r7,r29,26,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3;
	// lwz r4,0(r11)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bne cr6,0x8231febc
	if (!ctx.cr6.eq) goto loc_8231FEBC;
	// rlwinm r4,r4,0,20,16
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// b 0x8231fec0
	goto loc_8231FEC0;
loc_8231FEBC:
	// rlwimi r4,r10,12,17,19
	ctx.r4.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7000) | (ctx.r4.u64 & 0xFFFFFFFFFFFF8FFF);
loc_8231FEC0:
	// stw r4,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// sth r26,2(r11)
	REX_STORE_U16(ctx.r11.u32 + 2, ctx.r26.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwimi r9,r8,16,8,15
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stb r10,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// bne cr6,0x8231fef4
	if (!ctx.cr6.eq) goto loc_8231FEF4;
	// rlwinm r9,r9,0,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// b 0x8231fef8
	goto loc_8231FEF8;
loc_8231FEF4:
	// rlwimi r9,r10,0,29,31
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
loc_8231FEF8:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bne cr6,0x8231ff10
	if (!ctx.cr6.eq) goto loc_8231FF10;
	// rlwinm r9,r9,0,28,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFF8F;
	// b 0x8231ff14
	goto loc_8231FF14;
loc_8231FF10:
	// rlwimi r9,r10,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
loc_8231FF14:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r6,1
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 1, ctx.xer);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bne cr6,0x8231ff2c
	if (!ctx.cr6.eq) goto loc_8231FF2C;
	// rlwinm r9,r9,0,24,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF8FF;
	// b 0x8231ff30
	goto loc_8231FF30;
loc_8231FF2C:
	// rlwimi r9,r10,8,21,23
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
loc_8231FF30:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// bne cr6,0x8231ff48
	if (!ctx.cr6.eq) goto loc_8231FF48;
	// rlwinm r9,r9,0,20,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF8FFF;
	// b 0x8231ff4c
	goto loc_8231FF4C;
loc_8231FF48:
	// rlwimi r9,r10,12,17,19
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x7000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF8FFF);
loc_8231FF4C:
	// stw r9,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_8231FF58:
	// lhz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// rlwinm r11,r11,6,20,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFC0;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r11,4200
	ctx.r11.s64 = ctx.r11.s64 + 4200;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r27
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// blt cr6,0x8231ff94
	if (ctx.cr6.lt) goto loc_8231FF94;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r11,17620
	ctx.r5.s64 = ctx.r11.s64 + 17620;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// li r7,12179
	ctx.r7.s64 = 12179;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8231FF94;
	sub_82260F30(ctx, base);
loc_8231FF94:
	// mulli r11,r30,28
	ctx.r11.s64 = static_cast<int64_t>(ctx.r30.u64 * static_cast<uint64_t>(28));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// rlwinm r10,r29,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 23) & 0x1;
	// clrlwi r9,r29,30
	ctx.r9.u64 = ctx.r29.u32 & 0x3;
	// addi r8,r30,444
	ctx.r8.s64 = ctx.r30.s64 + 444;
	// rlwinm r7,r29,24,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0x1;
	// stw r10,12456(r11)
	REX_STORE_U32(ctx.r11.u32 + 12456, ctx.r10.u32);
	// rlwinm r10,r29,30,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3;
	// stw r9,12436(r11)
	REX_STORE_U32(ctx.r11.u32 + 12436, ctx.r9.u32);
	// rlwinm r9,r29,28,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0x3;
	// stw r10,12440(r11)
	REX_STORE_U32(ctx.r11.u32 + 12440, ctx.r10.u32);
	// rlwinm r6,r29,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3;
	// stw r9,12444(r11)
	REX_STORE_U32(ctx.r11.u32 + 12444, ctx.r9.u32);
	// mulli r8,r8,28
	ctx.r8.s64 = static_cast<int64_t>(ctx.r8.u64 * static_cast<uint64_t>(28));
	// stw r7,12452(r11)
	REX_STORE_U32(ctx.r11.u32 + 12452, ctx.r7.u32);
	// stw r6,12448(r11)
	REX_STORE_U32(ctx.r11.u32 + 12448, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r11,4(r28)
	ctx.r11.u64 = REX_LOAD_U16(ctx.r28.u32 + 4);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stwx r11,r8,r27
	REX_STORE_U32(ctx.r8.u32 + ctx.r27.u32, ctx.r11.u32);
	// stw r26,0(r24)
	REX_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82329970) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x82329978;
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
	// addi r29,r10,22176
	ctx.r29.s64 = ctx.r10.s64 + 22176;
	// bne cr6,0x823299b4
	if (!ctx.cr6.eq) goto loc_823299B4;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,14904
	ctx.r5.s64 = ctx.r11.s64 + 14904;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1032
	ctx.r7.s64 = 1032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823299B4;
	sub_82260F30(ctx, base);
loc_823299B4:
	// lwz r11,52(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823299dc
	if (!ctx.cr6.eq) goto loc_823299DC;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,22568
	ctx.r5.s64 = ctx.r11.s64 + 22568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1033
	ctx.r7.s64 = 1033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x823299DC;
	sub_82260F30(ctx, base);
loc_823299DC:
	// lwz r3,52(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82266e68
	ctx.lr = 0x823299E4;
	sub_82266E68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82329628
	ctx.lr = 0x823299F0;
	sub_82329628(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8232A460) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a480
	if (ctx.cr0.eq) goto loc_8232A480;
	// bl 0x82329a50
	ctx.lr = 0x8232A480;
	sub_82329A50(ctx, base);
loc_8232A480:
	// rlwinm. r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a498
	if (ctx.cr0.eq) goto loc_8232A498;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f2,1792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// bl 0x821648f8
	ctx.lr = 0x8232A494;
	sub_821648F8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
loc_8232A498:
	// rlwinm. r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232a4b4
	if (ctx.cr0.eq) goto loc_8232A4B4;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	REX_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// xoris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 ^ 2147483648;
	// stw r11,132(r1)
	REX_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// lfs f1,132(r1)
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f1.f64 = double(temp.f32);
loc_8232A4B4:
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

DEFINE_REX_FUNC(sub_8232B338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8232B340;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x8232b3a0
	if (ctx.cr6.eq) goto loc_8232B3A0;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
loc_8232B374:
	// lwz r11,4(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82371118
	ctx.lr = 0x8232B388;
	sub_82371118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8232b3ac
	if (ctx.cr0.eq) goto loc_8232B3AC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r27,r27,12
	ctx.r27.s64 = ctx.r27.s64 + 12;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x8232b374
	if (ctx.cr6.lt) goto loc_8232B374;
loc_8232B3A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8232B3A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
loc_8232B3AC:
	// mulli r11,r31,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r31.u64 * static_cast<uint64_t>(12));
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,4,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82166430
	ctx.lr = 0x8232B3CC;
	sub_82166430(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// add r29,r3,r30
	ctx.r29.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8232b444
	if (ctx.cr0.eq) goto loc_8232B444;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r10,0,15,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8232b3a0
	if (!ctx.cr0.eq) goto loc_8232B3A0;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,4824
	ctx.r4.s64 = ctx.r10.s64 + 4824;
	// bl 0x8215f2c0
	ctx.lr = 0x8232B3FC;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b40c
	if (!ctx.cr0.eq) goto loc_8232B40C;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x8232b428
	goto loc_8232B428;
loc_8232B40C:
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lwz r3,80(r1)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,9828
	ctx.r4.s64 = ctx.r11.s64 + 9828;
	// bl 0x8215f2c0
	ctx.lr = 0x8232B41C;
	sub_8215F2C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8232b3a0
	if (!ctx.cr0.eq) goto loc_8232B3A0;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8232B428:
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8232a0a8
	ctx.lr = 0x8232B440;
	sub_8232A0A8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_8232B444:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r8,260(r1)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r1.u32 + 260);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82329ed0
	ctx.lr = 0x8232B460;
	sub_82329ED0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232b3a0
	if (ctx.cr0.eq) goto loc_8232B3A0;
	// lwz r11,268(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232b478
	if (ctx.cr6.eq) goto loc_8232B478;
	// stb r25,0(r11)
	REX_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
loc_8232B478:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8232b3a4
	goto loc_8232B3A4;
}

DEFINE_REX_FUNC(sub_8232ED60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x8232ED68;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,10,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x380000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ed94
	if (ctx.cr0.eq) goto loc_8232ED94;
loc_8232ED8C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8232efc8
	goto loc_8232EFC8;
loc_8232ED94:
	// lwz r11,0(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// li r23,0
	ctx.r23.s64 = 0;
loc_8232ED9C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8232edb0
	if (ctx.cr6.eq) goto loc_8232EDB0;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// b 0x8232ed9c
	goto loc_8232ED9C;
loc_8232EDB0:
	// lis r11,-32214
	ctx.r11.s64 = -2111176704;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8229f4c0
	ctx.lr = 0x8232EDC4;
	sub_8229F4C0(ctx, base);
	// lwz r29,0(r22)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r22.u32 + 0);
loc_8232EDC8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8232ee94
	if (ctx.cr6.eq) goto loc_8232EE94;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r25,12(r29)
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,0(r24)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r27,r11,2,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// rlwinm r26,r11,7,29,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
loc_8232EDEC:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8232ee84
	if (ctx.cr6.eq) goto loc_8232EE84;
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r10,r27,24
	ctx.r10.u64 = ctx.r27.u32 & 0xFF;
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8232ee78
	if (!ctx.cr6.eq) goto loc_8232EE78;
	// rlwinm r11,r11,7,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x7;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8232ee78
	if (!ctx.cr6.eq) goto loc_8232EE78;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8232ee34
	if (ctx.cr6.eq) goto loc_8232EE34;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8232b130
	ctx.lr = 0x8232EE28;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232ee40
	if (!ctx.cr0.eq) goto loc_8232EE40;
	// b 0x8232ee78
	goto loc_8232EE78;
loc_8232EE34:
	// lwz r11,12(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8232ee78
	if (!ctx.cr6.eq) goto loc_8232EE78;
loc_8232EE40:
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// bne 0x8232ee58
	if (!ctx.cr0.eq) goto loc_8232EE58;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8232EE58:
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrlwi r9,r30,27
	ctx.r9.u64 = ctx.r30.u32 & 0x1F;
	// li r28,1
	ctx.r28.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	REX_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
loc_8232EE78:
	// lwz r31,4(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// b 0x8232edec
	goto loc_8232EDEC;
loc_8232EE84:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ed8c
	if (ctx.cr0.eq) goto loc_8232ED8C;
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x8232edc8
	goto loc_8232EDC8;
loc_8232EE94:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8232efc4
	if (ctx.cr6.eq) goto loc_8232EFC4;
	// addi r5,r23,-1
	ctx.r5.s64 = ctx.r23.s64 + -1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8232c980
	ctx.lr = 0x8232EEAC;
	sub_8232C980(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232ed8c
	if (!ctx.cr0.eq) goto loc_8232ED8C;
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r11,25,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232eef4
	if (ctx.cr0.eq) goto loc_8232EEF4;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// ble cr6,0x8232eeec
	if (!ctx.cr6.gt) goto loc_8232EEEC;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x8232eeec
	if (ctx.cr6.eq) goto loc_8232EEEC;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x8232eeec
	if (ctx.cr6.eq) goto loc_8232EEEC;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x8232eef4
	if (!ctx.cr6.gt) goto loc_8232EEF4;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8232eef4
	if (ctx.cr6.gt) goto loc_8232EEF4;
loc_8232EEEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x8232eef8
	goto loc_8232EEF8;
loc_8232EEF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8232EEF8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ef54
	if (ctx.cr0.eq) goto loc_8232EF54;
	// lwz r4,44(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r3,44(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x8232b130
	ctx.lr = 0x8232EF10;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ef2c
	if (ctx.cr0.eq) goto loc_8232EF2C;
	// lwz r4,48(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r3,48(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x8232b130
	ctx.lr = 0x8232EF24;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8232ef54
	if (!ctx.cr0.eq) goto loc_8232EF54;
loc_8232EF2C:
	// lwz r4,44(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 44);
	// lwz r3,48(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 48);
	// bl 0x8232b130
	ctx.lr = 0x8232EF38;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ed8c
	if (ctx.cr0.eq) goto loc_8232ED8C;
	// lwz r4,48(r22)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r22.u32 + 48);
	// lwz r3,44(r24)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r24.u32 + 44);
	// bl 0x8232b130
	ctx.lr = 0x8232EF4C;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ed8c
	if (ctx.cr0.eq) goto loc_8232ED8C;
loc_8232EF54:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8232efc4
	if (!ctx.cr6.lt) goto loc_8232EFC4;
	// addi r11,r31,11
	ctx.r11.s64 = ctx.r31.s64 + 11;
	// subf r30,r22,r24
	ctx.r30.u64 = ctx.r24.u64 - ctx.r22.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r22
	ctx.r31.u64 = ctx.r11.u64 + ctx.r22.u64;
loc_8232EF78:
	// lwzx r3,r30,r31
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,4,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ef9c
	if (ctx.cr0.eq) goto loc_8232EF9C;
	// bl 0x8232b130
	ctx.lr = 0x8232EF90;
	sub_8232B130(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8232ed8c
	if (ctx.cr0.eq) goto loc_8232ED8C;
	// b 0x8232efac
	goto loc_8232EFAC;
loc_8232EF9C:
	// lwz r11,12(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8232ed8c
	if (!ctx.cr6.eq) goto loc_8232ED8C;
loc_8232EFAC:
	// lwz r11,8(r24)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,13,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 13) & 0x7;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8232ef78
	if (ctx.cr6.lt) goto loc_8232EF78;
loc_8232EFC4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8232EFC8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82335098) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3d8
	ctx.lr = 0x823350A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r21,28(r4)
	ctx.r21.u64 = REX_LOAD_U32(ctx.r4.u32 + 28);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// bl 0x8226dbe8
	ctx.lr = 0x823350C8;
	sub_8226DBE8(ctx, base);
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// ori r10,r3,1
	ctx.r10.u64 = ctx.r3.u64 | 1;
	// ori r11,r26,1
	ctx.r11.u64 = ctx.r26.u64 | 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	REX_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8233510c
	if (!ctx.cr0.eq) goto loc_8233510C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233510c
	if (ctx.cr0.eq) goto loc_8233510C;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82335118
	if (!ctx.cr6.gt) goto loc_82335118;
loc_8233510C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fade8
	ctx.lr = 0x82335118;
	sub_822FADE8(ctx, base);
loc_82335118:
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
	// stwx r24,r11,r3
	REX_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r24.u32);
loc_82335130:
	// lwz r29,0(r27)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r27.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82335138:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823352a4
	if (ctx.cr6.eq) goto loc_823352A4;
	// lwz r31,12(r29)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82335168
	if (!ctx.cr6.eq) goto loc_82335168;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x8233515c
	if (!ctx.cr6.eq) goto loc_8233515C;
	// clrlwi. r11,r22,24
	ctx.r11.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82335294
	if (ctx.cr0.eq) goto loc_82335294;
loc_8233515C:
	// li r4,4800
	ctx.r4.s64 = 4800;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8225b1a0
	ctx.lr = 0x82335168;
	sub_8225B1A0(ctx, base);
loc_82335168:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8229abd0
	ctx.lr = 0x82335170;
	sub_8229ABD0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82335294
	if (ctx.cr0.eq) goto loc_82335294;
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bne cr6,0x82335294
	if (!ctx.cr6.eq) goto loc_82335294;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233519c
	if (ctx.cr0.eq) goto loc_8233519C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822a4200
	ctx.lr = 0x82335198;
	sub_822A4200(ctx, base);
	// b 0x823351c8
	goto loc_823351C8;
loc_8233519C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_823351A0:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8233529c
	if (!ctx.cr0.eq) goto loc_8233529C;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-40
	ctx.xer.ca = ctx.r11.u32 > 39;
	ctx.r11.s64 = ctx.r11.s64 + -40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233529c
	if (ctx.cr0.eq) goto loc_8233529C;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823351a0
	if (!ctx.cr6.eq) goto loc_823351A0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_823351C8:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82335294
	if (ctx.cr0.eq) goto loc_82335294;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r28,1
	ctx.r28.s64 = 1;
	// bl 0x822a8f48
	ctx.lr = 0x823351E0;
	sub_822A8F48(ctx, base);
loc_823351E0:
	// lwz r11,88(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82335214
	if (!ctx.cr6.eq) goto loc_82335214;
	// lwz r11,80(r1)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// addic r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82335218
	if (ctx.cr6.eq) goto loc_82335218;
loc_82335214:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82335218:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82335240
	if (!ctx.cr0.eq) goto loc_82335240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822a7fb8
	ctx.lr = 0x82335228;
	sub_822A7FB8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x823351e0
	if (!ctx.cr6.eq) goto loc_823351E0;
	// ori r11,r31,1
	ctx.r11.u64 = ctx.r31.u64 | 1;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82335240:
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82335270
	if (!ctx.cr0.eq) goto loc_82335270;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r3,r11,-4
	ctx.xer.ca = ctx.r11.u32 > 3;
	ctx.r3.s64 = ctx.r11.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82335270
	if (ctx.cr0.eq) goto loc_82335270;
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8233527c
	if (!ctx.cr6.gt) goto loc_8233527C;
loc_82335270:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822fade8
	ctx.lr = 0x8233527C;
	sub_822FADE8(ctx, base);
loc_8233527C:
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
loc_82335294:
	// lwz r29,4(r29)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r29.u32 + 4);
	// b 0x82335138
	goto loc_82335138;
loc_8233529C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823351c8
	goto loc_823351C8;
loc_823352A4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82335378
	if (!ctx.cr0.eq) goto loc_82335378;
	// rlwinm r11,r27,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
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
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r27.u32 + 8);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,8(r27)
	REX_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82335324
	if (ctx.cr0.eq) goto loc_82335324;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82335330
	goto loc_82335330;
loc_82335324:
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82335330:
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82335378
	if (!ctx.cr0.eq) goto loc_82335378;
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
loc_82335364:
	// lwz r11,12(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8225b140
	ctx.lr = 0x82335378;
	sub_8225B140(ctx, base);
loc_82335378:
	// lwz r10,0(r26)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r26.u32 + 0);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x823353ec
	if (!ctx.cr0.eq) goto loc_823353EC;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823353ec
	if (ctx.cr0.eq) goto loc_823353EC;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x823353e8
	if (ctx.cr0.eq) goto loc_823353E8;
	// lwz r11,8(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 8);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// bne 0x82335378
	if (!ctx.cr0.eq) goto loc_82335378;
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
	// lwz r10,0(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82335364
	goto loc_82335364;
loc_823353E8:
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_823353EC:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x823353fc
	if (!ctx.cr6.eq) goto loc_823353FC;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82335130
	if (!ctx.cr0.eq) goto loc_82335130;
loc_823353FC:
	// rlwinm r11,r24,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi. r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,36(r10)
	REX_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	REX_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// rlwinm r10,r25,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// beq 0x82335460
	if (ctx.cr0.eq) goto loc_82335460;
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r11,-36
	ctx.r8.s64 = ctx.r11.s64 + -36;
	// addi r7,r10,-36
	ctx.r7.s64 = ctx.r10.s64 + -36;
	// stw r6,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// lwz r6,0(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,0(r6)
	REX_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,0(r10)
	REX_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x82335484
	goto loc_82335484;
loc_82335460:
	// lwz r6,4(r10)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r10.u32 + 4);
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// addi r7,r11,-36
	ctx.r7.s64 = ctx.r11.s64 + -36;
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
loc_82335484:
	// lwz r10,8(r24)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r24.u32 + 8);
	// addi r11,r23,972
	ctx.r11.s64 = ctx.r23.s64 + 972;
	// rlwinm r11,r10,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,8(r24)
	REX_STORE_U32(ctx.r24.u32 + 8, ctx.r11.u32);
	// lwz r11,976(r23)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r23.u32 + 976);
	// stw r11,0(r30)
	REX_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r30,976(r23)
	REX_STORE_U32(ctx.r23.u32 + 976, ctx.r30.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8215e428
	__restgprlr_20(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8233EF10) {
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
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233ef54
	if (!ctx.cr0.eq) goto loc_8233EF54;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,31992
	ctx.r6.s64 = ctx.r11.s64 + 31992;
	// addi r5,r10,31968
	ctx.r5.s64 = ctx.r10.s64 + 31968;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8233EF54;
	sub_82260F30(ctx, base);
loc_8233EF54:
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	ctx.r11.s64 = ctx.r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	REX_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,228(r31)
	REX_STORE_U32(ctx.r31.u32 + 228, ctx.r10.u32);
	// stw r11,20(r31)
	REX_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82340B48) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82340B50;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r3,184
	ctx.r3.s64 = ctx.r3.s64 + 184;
	// bl 0x8235b2c8
	ctx.lr = 0x82340B6C;
	sub_8235B2C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82340e54
	if (ctx.cr0.eq) goto loc_82340E54;
	// lwz r3,168(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x823624a0
	ctx.lr = 0x82340B7C;
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
	// beq cr6,0x82340bb0
	if (ctx.cr6.eq) goto loc_82340BB0;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,32292
	ctx.r5.s64 = ctx.r11.s64 + 32292;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2104
	ctx.r7.s64 = 2104;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82340BB0;
	sub_82260F30(ctx, base);
loc_82340BB0:
	// lwz r9,168(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 168);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r26,88(r1)
	ctx.r26.u64 = REX_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
loc_82340BD0:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82340be0
	if (!ctx.cr6.gt) goto loc_82340BE0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// b 0x82340bec
	goto loc_82340BEC;
loc_82340BE0:
	// lwz r10,8(r9)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82340BEC:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82340c04
	if (ctx.cr0.eq) goto loc_82340C04;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82340bd0
	goto loc_82340BD0;
loc_82340C04:
	// lwz r11,116(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 116);
	// lis r10,-32206
	ctx.r10.s64 = -2110652416;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r10,24568
	ctx.r6.s64 = ctx.r10.s64 + 24568;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r28,32(r11)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r11.u32 + 32);
	// bl 0x8233cbe8
	ctx.lr = 0x82340C28;
	sub_8233CBE8(ctx, base);
	// lis r11,-32206
	ctx.r11.s64 = -2110652416;
	// lwz r7,12(r31)
	ctx.r7.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r11,24568
	ctx.r6.s64 = ctx.r11.s64 + 24568;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8233cb48
	ctx.lr = 0x82340C44;
	sub_8233CB48(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82360d50
	ctx.lr = 0x82340C50;
	sub_82360D50(ctx, base);
	// li r29,32
	ctx.r29.s64 = 32;
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8235f338
	ctx.lr = 0x82340C6C;
	sub_8235F338(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r30,r11,31768
	ctx.r30.s64 = ctx.r11.s64 + 31768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// bl 0x8233f698
	ctx.lr = 0x82340C88;
	sub_8233F698(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f18
	ctx.lr = 0x82340C94;
	sub_82361F18(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82340C9C;
	sub_8235EF60(ctx, base);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r25,r11,32260
	ctx.r25.s64 = ctx.r11.s64 + 32260;
	// bne 0x82340cc4
	if (!ctx.cr0.eq) goto loc_82340CC4;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2130
	ctx.r7.s64 = 2130;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82340CC4;
	sub_82260F30(ctx, base);
loc_82340CC4:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82361428
	ctx.lr = 0x82340CD0;
	sub_82361428(ctx, base);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r29.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8235feb8
	ctx.lr = 0x82340D00;
	sub_8235FEB8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82340D0C;
	sub_8233F698(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f18
	ctx.lr = 0x82340D18;
	sub_82361F18(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82340D20;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340d40
	if (!ctx.cr0.eq) goto loc_82340D40;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2139
	ctx.r7.s64 = 2139;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82340D40;
	sub_82260F30(ctx, base);
loc_82340D40:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82360e58
	ctx.lr = 0x82340D4C;
	sub_82360E58(ctx, base);
	// lwz r11,-4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + -4);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r27,60(r3)
	REX_STORE_U32(ctx.r3.u32 + 60, ctx.r27.u32);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r29,84(r3)
	REX_STORE_U32(ctx.r3.u32 + 84, ctx.r29.u32);
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x8235f338
	ctx.lr = 0x82340D74;
	sub_8235F338(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,136(r22)
	REX_STORE_U32(ctx.r22.u32 + 136, ctx.r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x8235feb8
	ctx.lr = 0x82340D9C;
	sub_8235FEB8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f698
	ctx.lr = 0x82340DA8;
	sub_8233F698(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f18
	ctx.lr = 0x82340DB4;
	sub_82361F18(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82340DBC;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340ddc
	if (!ctx.cr0.eq) goto loc_82340DDC;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82340DDC;
	sub_82260F30(ctx, base);
loc_82340DDC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x82340DE8;
	sub_8235EED0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// stw r27,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r29,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// bl 0x8235f338
	ctx.lr = 0x82340E08;
	sub_8235F338(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// bl 0x8233f698
	ctx.lr = 0x82340E1C;
	sub_8233F698(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82361f18
	ctx.lr = 0x82340E28;
	sub_82361F18(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8235ef60
	ctx.lr = 0x82340E30;
	sub_8235EF60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82340e54
	if (!ctx.cr0.eq) goto loc_82340E54;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r11,32200
	ctx.r5.s64 = ctx.r11.s64 + 32200;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// li r7,2161
	ctx.r7.s64 = 2161;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x82340E54;
	sub_82260F30(ctx, base);
loc_82340E54:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234A850) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8234A858;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234a7e8
	ctx.lr = 0x8234A864;
	sub_8234A7E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234a924
	if (ctx.cr0.eq) goto loc_8234A924;
	// lwz r10,16(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r10,r11,4136
	ctx.r10.s64 = ctx.r11.s64 + 4136;
	// beq cr6,0x8234a8a8
	if (ctx.cr6.eq) goto loc_8234A8A8;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234a8a8
	if (!ctx.cr0.eq) goto loc_8234A8A8;
	// lwz r11,80(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 80);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r9
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234a8ac
	if (!ctx.cr0.eq) goto loc_8234A8AC;
loc_8234A8A8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234A8AC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234a924
	if (ctx.cr0.eq) goto loc_8234A924;
	// lwz r4,236(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// lwz r11,16(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8234a8ec
	if (ctx.cr6.eq) goto loc_8234A8EC;
	// lwz r11,228(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8234a8ec
	if (!ctx.cr0.eq) goto loc_8234A8EC;
	// lwz r11,80(r4)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(12));
	// lbzx r11,r11,r10
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8234a8f0
	if (!ctx.cr0.eq) goto loc_8234A8F0;
loc_8234A8EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234A8F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8234a924
	if (ctx.cr0.eq) goto loc_8234A924;
	// lwz r11,952(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 952);
	// lwz r30,2736(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 2736);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d3b8
	ctx.lr = 0x8234A908;
	sub_8236D3B8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8236d3b8
	ctx.lr = 0x8234A918;
	sub_8236D3B8(ctx, base);
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8234a928
	if (ctx.cr6.eq) goto loc_8234A928;
loc_8234A924:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8234A928:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8234CB88) {
	REX_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3ec
	ctx.lr = 0x8234CB90;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,140(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 140);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234cbb4
	if (!ctx.cr0.eq) goto loc_8234CBB4;
	// lbz r11,141(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 141);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8234cd9c
	if (ctx.cr0.eq) goto loc_8234CD9C;
loc_8234CBB4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82347d08
	ctx.lr = 0x8234CBBC;
	sub_82347D08(ctx, base);
	// lwz r9,100(r28)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r31,56(r3)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r3.u32 + 56);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8234cbec
	if (!ctx.cr6.lt) goto loc_8234CBEC;
	// lwz r11,8(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8234cbf0
	goto loc_8234CBF0;
loc_8234CBEC:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8234CBF0:
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8234cca0
	if (!ctx.cr6.eq) goto loc_8234CCA0;
	// lwz r11,4(r9)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8234cc2c
	if (ctx.cr6.eq) goto loc_8234CC2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31904
	ctx.r6.s64 = ctx.r11.s64 + -31904;
	// addi r5,r10,-30088
	ctx.r5.s64 = ctx.r10.s64 + -30088;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,680
	ctx.r7.s64 = 680;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234CC2C;
	sub_82260F30(ctx, base);
loc_8234CC2C:
	// lwz r11,16(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lbz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234cd88
	if (!ctx.cr0.eq) goto loc_8234CD88;
	// li r3,83
	ctx.r3.s64 = 83;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x8235eed0
	ctx.lr = 0x8234CC48;
	sub_8235EED0(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-32328
	ctx.r11.s64 = ctx.r11.s64 + -32328;
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r26.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f4,2104(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = REX_LOAD_U32(ctx.r10.u32 + 2104);
	ctx.f4.f64 = double(temp.f32);
	// lwz r11,4(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r4,16(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x8235feb8
	ctx.lr = 0x8234CC84;
	sub_8235FEB8(ctx, base);
	// lwz r11,228(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,228(r30)
	REX_STORE_U32(ctx.r30.u32 + 228, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82361f18
	ctx.lr = 0x8234CC9C;
	sub_82361F18(ctx, base);
	// b 0x8234cd88
	goto loc_8234CD88;
loc_8234CCA0:
	// lwz r3,16(r29)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r29.u32 + 16);
	// lbz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8234cd88
	if (!ctx.cr0.eq) goto loc_8234CD88;
	// lwz r11,104(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r30,4(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// blt cr6,0x8234cd04
	if (ctx.cr6.lt) goto loc_8234CD04;
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bge cr6,0x8234ccd8
	if (!ctx.cr6.lt) goto loc_8234CCD8;
	// bl 0x82350850
	ctx.lr = 0x8234CCCC;
	sub_82350850(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r30,-3
	ctx.r30.s64 = ctx.r30.s64 + -3;
	// b 0x8234cd04
	goto loc_8234CD04;
loc_8234CCD8:
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
	// li r7,703
	ctx.r7.s64 = 703;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8234CCFC;
	sub_82260F30(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,80(r1)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r1.u32 + 80);
loc_8234CD04:
	// li r3,102
	ctx.r3.s64 = 102;
	// lwz r4,12(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82360db8
	ctx.lr = 0x8234CD10;
	sub_82360DB8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r31,56(r3)
	REX_STORE_U32(ctx.r3.u32 + 56, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r31,r11,-32328
	ctx.r31.s64 = ctx.r11.s64 + -32328;
	// stw r26,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r26.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,-32328(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + -32328);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,128(r3)
	REX_STORE_U32(ctx.r3.u32 + 128, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8234CD48;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233f040
	ctx.lr = 0x8234CD58;
	sub_8233F040(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,132(r25)
	REX_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// lwz r11,228(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 228);
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r25)
	REX_STORE_U32(ctx.r25.u32 + 228, ctx.r11.u32);
	// bl 0x82361f18
	ctx.lr = 0x8234CD78;
	sub_82361F18(ctx, base);
	// lwz r3,104(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 104);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8234CD84;
	sub_8235CB28(ctx, base);
	// stw r25,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
loc_8234CD88:
	// lwz r3,100(r28)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r28.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x8235cb28
	ctx.lr = 0x8234CD94;
	sub_8235CB28(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_8234CD9C:
	// addi r4,r29,20
	ctx.r4.s64 = ctx.r29.s64 + 20;
	// lbz r5,124(r29)
	ctx.r5.u64 = REX_LOAD_U8(ctx.r29.u32 + 124);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8234a9a0
	ctx.lr = 0x8234CDAC;
	sub_8234A9A0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,136(r29)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r29.u32 + 136);
	// bl 0x8234b2c8
	ctx.lr = 0x8234CDB8;
	sub_8234B2C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8215e43c
	__restgprlr_25(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82351BF8) {
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
	// lbz r11,264(r4)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r4.u32 + 264);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82351c28
	if (!ctx.cr0.eq) goto loc_82351C28;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82351810
	ctx.lr = 0x82351C28;
	sub_82351810(ctx, base);
loc_82351C28:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8235cde0
	ctx.lr = 0x82351C34;
	sub_8235CDE0(ctx, base);
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

DEFINE_REX_FUNC(sub_82353EC0) {
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
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82353EDC:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = REX_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82353EF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82353edc
	if (!ctx.cr0.eq) goto loc_82353EDC;
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

DEFINE_REX_FUNC(sub_82354750) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82354758;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354778;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823547f4
	if (ctx.cr0.eq) goto loc_823547F4;
	// lwz r31,44(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823547cc
	if (ctx.cr6.eq) goto loc_823547CC;
	// lis r11,-32192
	ctx.r11.s64 = -2109734912;
	// addi r29,r11,-5640
	ctx.r29.s64 = ctx.r11.s64 + -5640;
loc_82354798:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r11,24(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r11,r11,52
	ctx.r11.s64 = static_cast<int64_t>(ctx.r11.u64 * static_cast<uint64_t>(52));
	// lwzx r11,r11,r29
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823547dc
	if (!ctx.cr0.eq) goto loc_823547DC;
	// bl 0x8235edc0
	ctx.lr = 0x823547B4;
	sub_8235EDC0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x823547ec
	if (!ctx.cr6.lt) goto loc_823547EC;
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354798
	if (!ctx.cr6.eq) goto loc_82354798;
loc_823547CC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r28)
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// lwz r3,44(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x82354898
	goto loc_82354898;
loc_823547DC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823547E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823547E4:
	// stb r11,0(r28)
	REX_STORE_U8(ctx.r28.u32 + 0, ctx.r11.u8);
	// b 0x82354898
	goto loc_82354898;
loc_823547EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x823547e0
	goto loc_823547E0;
loc_823547F4:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354808;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354844
	if (ctx.cr0.eq) goto loc_82354844;
	// lwz r31,44(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x8235482c
	goto loc_8235482C;
loc_82354818:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8235edc0
	ctx.lr = 0x82354820;
	sub_8235EDC0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bge cr6,0x823547ec
	if (!ctx.cr6.lt) goto loc_823547EC;
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8235482C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354818
	if (!ctx.cr6.eq) goto loc_82354818;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235483C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823547e4
	goto loc_823547E4;
loc_82354844:
	// lwz r3,8(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82354858;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82354894
	if (ctx.cr0.eq) goto loc_82354894;
	// lwz r31,44(r30)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r30.u32 + 44);
	// b 0x8235487c
	goto loc_8235487C;
loc_82354868:
	// lwz r3,40(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8235edc0
	ctx.lr = 0x82354870;
	sub_8235EDC0(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// blt cr6,0x8235488c
	if (ctx.cr6.lt) goto loc_8235488C;
	// lwz r31,8(r31)
	ctx.r31.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
loc_8235487C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82354868
	if (!ctx.cr6.eq) goto loc_82354868;
	// b 0x823547cc
	goto loc_823547CC;
loc_8235488C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8235483c
	goto loc_8235483C;
loc_82354894:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82354898:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82358A88) {
	REX_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82358A90) {
	REX_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82358A98) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32252
	ctx.r11.s64 = -2113667072;
	// addi r3,r11,4188
	ctx.r3.s64 = ctx.r11.s64 + 4188;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82358AA8) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-26224
	ctx.r3.s64 = ctx.r11.s64 + -26224;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82358AD8) {
	REX_FUNC_PROLOGUE();
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// blt cr6,0x82358b0c
	if (ctx.cr6.lt) goto loc_82358B0C;
	// cmpwi cr6,r6,5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 5, ctx.xer);
	// bgt cr6,0x82358b0c
	if (ctx.cr6.gt) goto loc_82358B0C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-31816
	ctx.r6.s64 = ctx.r11.s64 + -31816;
	// addi r5,r10,4180
	ctx.r5.s64 = ctx.r10.s64 + 4180;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,1686
	ctx.r7.s64 = 1686;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82260f30
	sub_82260F30(ctx, base);
	return;
loc_82358B0C:
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stbx r6,r11,r3
	REX_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u8);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82359230) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f8
	ctx.lr = 0x82359238;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,76(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359250;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82359328
	if (ctx.cr0.eq) goto loc_82359328;
	// lwz r11,228(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82359328
	if (ctx.cr0.eq) goto loc_82359328;
	// lwz r29,240(r31)
	ctx.r29.u64 = REX_LOAD_U32(ctx.r31.u32 + 240);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lwz r28,236(r31)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r31.u32 + 236);
	// addi r30,r11,-26340
	ctx.r30.s64 = ctx.r11.s64 + -26340;
	// lwz r11,128(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 128);
	// lwz r9,128(r29)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,8(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,80(r1)
	REX_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r9,84(r1)
	REX_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// beq cr6,0x82359328
	if (ctx.cr6.eq) goto loc_82359328;
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823592A4;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82359328
	if (ctx.cr0.eq) goto loc_82359328;
	// lwz r11,0(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823592C0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82359328
	if (ctx.cr0.eq) goto loc_82359328;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823592CC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r5,r11
	ctx.r11.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823592ec
	if (!ctx.cr0.eq) goto loc_823592EC;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r5,r10
	ctx.r10.u64 = REX_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82359330
	if (ctx.cr0.eq) goto loc_82359330;
loc_823592EC:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82359328
	if (!ctx.cr6.eq) goto loc_82359328;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpwi cr6,r5,4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 4, ctx.xer);
	// blt cr6,0x823592cc
	if (ctx.cr6.lt) goto loc_823592CC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233f040
	ctx.lr = 0x82359310;
	sub_8233F040(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,128(r31)
	REX_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r10,132(r31)
	REX_STORE_U32(ctx.r31.u32 + 132, ctx.r10.u32);
	// bl 0x8233ef10
	ctx.lr = 0x82359328;
	sub_8233EF10(ctx, base);
loc_82359328:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e448
	__restgprlr_28(ctx, base);
	return;
loc_82359330:
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82359348;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,112
	ctx.r11.s64 = ctx.r3.s64 + 112;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82359328
	goto loc_82359328;
}

DEFINE_REX_FUNC(sub_8235B2C8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f0
	ctx.lr = 0x8235B2D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,33
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 33, ctx.xer);
	// bne cr6,0x8235b310
	if (!ctx.cr6.eq) goto loc_8235B310;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-25336
	ctx.r6.s64 = ctx.r11.s64 + -25336;
	// addi r5,r10,-24928
	ctx.r5.s64 = ctx.r10.s64 + -24928;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,537
	ctx.r7.s64 = 537;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235B310;
	sub_82260F30(ctx, base);
loc_8235B310:
	// lbz r11,1872(r29)
	ctx.r11.u64 = REX_LOAD_U8(ctx.r29.u32 + 1872);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8235b378
	if (ctx.cr0.eq) goto loc_8235B378;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8235B324:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8235aee0
	ctx.lr = 0x8235B330;
	sub_8235AEE0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8235b350
	if (ctx.cr0.eq) goto loc_8235B350;
	// lwz r11,0(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8235b350
	if (!ctx.cr6.eq) goto loc_8235B350;
	// lwz r11,64(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 64);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8235b36c
	if (ctx.cr6.eq) goto loc_8235B36C;
loc_8235B350:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,16
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 16, ctx.xer);
	// blt cr6,0x8235b324
	if (ctx.cr6.lt) goto loc_8235B324;
loc_8235B360:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8235B364:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8215e440
	__restgprlr_26(ctx, base);
	return;
loc_8235B36C:
	// stw r31,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_8235B370:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8235b364
	goto loc_8235B364;
loc_8235B378:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,1040
	ctx.r11.s64 = ctx.r29.s64 + 1040;
loc_8235B380:
	// lwz r9,-64(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + -64);
	// cmpw cr6,r9,r28
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x8235b398
	if (!ctx.cr6.eq) goto loc_8235B398;
	// lwz r9,0(r11)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x8235b3ac
	if (ctx.cr6.eq) goto loc_8235B3AC;
loc_8235B398:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// blt cr6,0x8235b380
	if (ctx.cr6.lt) goto loc_8235B380;
	// b 0x8235b360
	goto loc_8235B360;
loc_8235B3AC:
	// stw r10,0(r26)
	REX_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x8235b370
	goto loc_8235B370;
}

DEFINE_REX_FUNC(sub_8235BCC4) {
	REX_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235BF58) {
	REX_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x8235bec4
	// FATAL: unresolved function 0x8235BEC4 (no CallTarget in FunctionNode)
	REX_FATAL("Unresolved call from 0x8235BF5C to 0x8235BEC4");
	return;
}

DEFINE_REX_FUNC(sub_8235C918) {
	REX_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,8(r4)
	REX_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// beq cr6,0x8235c92c
	if (ctx.cr6.eq) goto loc_8235C92C;
	// stw r4,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_8235C92C:
	// stw r3,4(r4)
	REX_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	REX_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_8235CF60) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3f4
	ctx.lr = 0x8235CF68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235CF84;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,8(r28)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	ctx.r31.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8235d03c
	if (ctx.cr6.eq) goto loc_8235D03C;
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8235d03c
	if (!ctx.cr6.gt) goto loc_8235D03C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8235CFB8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235cfd0
	if (!ctx.cr6.lt) goto loc_8235CFD0;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// b 0x8235cfdc
	goto loc_8235CFDC;
loc_8235CFD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8235cb28
	ctx.lr = 0x8235CFDC;
	sub_8235CB28(ctx, base);
loc_8235CFDC:
	// lwz r11,12(r28)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r28.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8235CFF0;
	REX_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8235d010
	if (ctx.cr0.eq) goto loc_8235D010;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8235cfb8
	if (ctx.cr6.lt) goto loc_8235CFB8;
	// b 0x8235d03c
	goto loc_8235D03C;
loc_8235D010:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8235d03c
	if (!ctx.cr6.lt) goto loc_8235D03C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	REX_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// subf r11,r30,r11
	ctx.r11.u64 = ctx.r11.u64 - ctx.r30.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// bl 0x8215e640
	ctx.lr = 0x8235D03C;
	sub_8215E640(ctx, base);
loc_8235D03C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8215e444
	__restgprlr_27(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_8235EBD8) {
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
	ctx.lr = 0x8235EBF8;
	sub_8235D3C8(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14832
	ctx.r11.s64 = ctx.r11.s64 + -14832;
	// stw r10,48(r31)
	REX_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	REX_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1428);
	// stw r11,16(r31)
	REX_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,1428(r30)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r30.u32 + 1428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1428(r30)
	REX_STORE_U32(ctx.r30.u32 + 1428, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_8235F338) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3fc
	ctx.lr = 0x8235F340;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// blt cr6,0x8235f37c
	if (ctx.cr6.lt) goto loc_8235F37C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r6,r11,-13408
	ctx.r6.s64 = ctx.r11.s64 + -13408;
	// addi r5,r10,-13156
	ctx.r5.s64 = ctx.r10.s64 + -13156;
	// addi r4,r9,-14148
	ctx.r4.s64 = ctx.r9.s64 + -14148;
	// li r7,251
	ctx.r7.s64 = 251;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82260f30
	ctx.lr = 0x8235F37C;
	sub_82260F30(ctx, base);
loc_8235F37C:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// lwz r10,32(r29)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + 32);
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// addi r8,r31,7
	ctx.r8.s64 = ctx.r31.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	REX_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r29)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + 12);
	// stwx r11,r9,r30
	REX_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// stwx r29,r8,r30
	REX_STORE_U32(ctx.r8.u32 + ctx.r30.u32, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8215e44c
	__restgprlr_29(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_82360318) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-12008
	ctx.r3.s64 = ctx.r11.s64 + -12008;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823603A0) {
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
	// li r4,118
	ctx.r4.s64 = 118;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8235fd90
	ctx.lr = 0x823603C0;
	sub_8235FD90(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-11992
	ctx.r10.s64 = ctx.r10.s64 + -11992;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,80(r3)
	REX_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r10,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// stw r11,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
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

DEFINE_REX_FUNC(sub_82360AD0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-10040
	ctx.r3.s64 = ctx.r11.s64 + -10040;
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_82360B68) {
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
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8235fd90
	ctx.lr = 0x82360B8C;
	sub_8235FD90(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-9904
	ctx.r11.s64 = ctx.r11.s64 + -9904;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,16(r3)
	REX_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// stw r11,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,20(r3)
	REX_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lwz r11,228(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 228);
	// ori r11,r11,24
	ctx.r11.u64 = ctx.r11.u64 | 24;
	// stw r11,228(r3)
	REX_STORE_U32(ctx.r3.u32 + 228, ctx.r11.u32);
	// lwz r3,2736(r30)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r30.u32 + 2736);
	// bl 0x8233f0e8
	ctx.lr = 0x82360BC0;
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

DEFINE_REX_FUNC(sub_82361BB8) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x8215e3e0
	ctx.lr = 0x82361BC0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r22,164(r11)
	ctx.r22.u64 = REX_LOAD_U32(ctx.r11.u32 + 164);
	// lwz r10,72(r22)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r22.u32 + 72);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82361bfc
	if (!ctx.cr6.eq) goto loc_82361BFC;
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82361bf0
	goto loc_82361BF0;
loc_82361BE4:
	// lwz r10,72(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 72);
	// stw r10,76(r11)
	REX_STORE_U32(ctx.r11.u32 + 76, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82361BF0:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82361be4
	if (!ctx.cr6.eq) goto loc_82361BE4;
loc_82361BFC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82361a60
	ctx.lr = 0x82361C08;
	sub_82361A60(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r5,28(r31)
	ctx.r5.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8233f350
	ctx.lr = 0x82361C18;
	sub_8233F350(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r24,28(r31)
	ctx.r24.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// ble cr6,0x82361d8c
	if (!ctx.cr6.gt) goto loc_82361D8C;
	// rlwinm r29,r24,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_82361C2C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r26,1
	ctx.r26.s64 = 1;
	// lwzx r25,r29,r11
	ctx.r25.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
loc_82361C40:
	// lwz r11,60(r25)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r25.u32 + 60);
	// lwz r10,4(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82361c58
	if (!ctx.cr6.gt) goto loc_82361C58;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82361c64
	goto loc_82361C64;
loc_82361C58:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwzx r28,r10,r27
	ctx.r28.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
loc_82361C64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361ca0
	if (ctx.cr0.eq) goto loc_82361CA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,72(r28)
	ctx.r4.u64 = REX_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x82361a10
	ctx.lr = 0x82361C7C;
	sub_82361A10(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r29,r30
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82361c94
	if (!ctx.cr6.lt) goto loc_82361C94;
	// stwx r11,r29,r30
	REX_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82361C94:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82361c40
	goto loc_82361C40;
loc_82361CA0:
	// lwz r11,36(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 36);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r30,1456(r11)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + 1456);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82325520
	ctx.lr = 0x82361CB4;
	sub_82325520(ctx, base);
	// addic. r11,r3,4
	ctx.xer.ca = ctx.r3.u32 > 4294967291;
	ctx.r11.s64 = ctx.r3.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,0(r3)
	REX_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// beq 0x82361ccc
	if (ctx.cr0.eq) goto loc_82361CCC;
	// stw r23,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// b 0x82361cd0
	goto loc_82361CD0;
loc_82361CCC:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82361CD0:
	// stw r24,0(r11)
	REX_STORE_U32(ctx.r11.u32 + 0, ctx.r24.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// stw r10,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,20(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r10,r29,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r9
	REX_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r29,r10
	REX_STORE_U32(ctx.r29.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 20);
	// lwzx r11,r29,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r10
	ctx.r30.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82361d74
	goto loc_82361D74;
loc_82361D28:
	// lwz r28,0(r30)
	ctx.r28.u64 = REX_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82361a10
	ctx.lr = 0x82361D38;
	sub_82361A10(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r10,r9,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82361d68
	if (!ctx.cr6.eq) goto loc_82361D68;
	// lwz r10,4(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r10,r11,r10
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stwx r10,r9,r11
	REX_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// b 0x82361d70
	goto loc_82361D70;
loc_82361D68:
	// lwz r10,8(r31)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// stwx r3,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82361D70:
	// lwz r30,4(r30)
	ctx.r30.u64 = REX_LOAD_U32(ctx.r30.u32 + 4);
loc_82361D74:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82361d28
	if (!ctx.cr6.eq) goto loc_82361D28;
	// addi r24,r24,-1
	ctx.r24.s64 = ctx.r24.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// cmplwi cr6,r24,1
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 1, ctx.xer);
	// bgt cr6,0x82361c2c
	if (ctx.cr6.gt) goto loc_82361C2C;
loc_82361D8C:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r23,4(r11)
	REX_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82361de8
	if (ctx.cr6.lt) goto loc_82361DE8;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82361DA8:
	// lwz r11,4(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82361dd4
	if (ctx.cr6.eq) goto loc_82361DD4;
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r8,r10,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = REX_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// stwx r8,r10,r11
	REX_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
loc_82361DD4:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82361da8
	if (!ctx.cr6.gt) goto loc_82361DA8;
loc_82361DE8:
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82361e48
	if (ctx.cr6.lt) goto loc_82361E48;
loc_82361DF4:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// bne cr6,0x82361e04
	if (!ctx.cr6.eq) goto loc_82361E04;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82361e1c
	goto loc_82361E1C;
loc_82361E04:
	// lwz r11,8(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,24(r31)
	ctx.r9.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r11,r10,r11
	ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r9
	ctx.r3.u64 = REX_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82361E1C:
	// lwz r11,24(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r4,r10,r11
	ctx.r4.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r3,84(r4)
	REX_STORE_U32(ctx.r4.u32 + 84, ctx.r3.u32);
	// beq cr6,0x82361e38
	if (ctx.cr6.eq) goto loc_82361E38;
	// bl 0x823624e0
	ctx.lr = 0x82361E38;
	sub_823624E0(ctx, base);
loc_82361E38:
	// lwz r11,28(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82361df4
	if (!ctx.cr6.gt) goto loc_82361DF4;
loc_82361E48:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823617a8
	ctx.lr = 0x82361E50;
	sub_823617A8(ctx, base);
	// lwz r11,76(r22)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r22.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82361e80
	if (!ctx.cr6.eq) goto loc_82361E80;
	// lwz r11,32(r31)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,136(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 136);
	// b 0x82361e74
	goto loc_82361E74;
loc_82361E68:
	// lwz r10,76(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 76);
	// stw r10,72(r11)
	REX_STORE_U32(ctx.r11.u32 + 72, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
loc_82361E74:
	// lwz r10,8(r11)
	ctx.r10.u64 = REX_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82361e68
	if (!ctx.cr6.eq) goto loc_82361E68;
loc_82361E80:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8215e430
	__restgprlr_22(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823701C0) {
	REX_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	REX_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	REX_STORE_U64(ctx.r1.u32 + -24, ctx.f30.u64);
	// stfd f31,-16(r1)
	REX_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	REX_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,1792(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + 1792);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x823701f0
	if (!ctx.cr6.eq) goto loc_823701F0;
	// b 0x823702a8
	goto loc_823702A8;
loc_823701F0:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,5952
	ctx.r11.s64 = ctx.r11.s64 + 5952;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82370250
	if (!ctx.cr6.gt) goto loc_82370250;
	// lfd f13,-40(r11)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r11.u32 + -40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8237021c
	if (!ctx.cr6.gt) goto loc_8237021C;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f0,-9888(r11)
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// b 0x823702a0
	goto loc_823702A0;
loc_8237021C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfd f31,26280(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = REX_LOAD_U64(ctx.r11.u32 + 26280);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x82160da0
	ctx.lr = 0x8237022C;
	sub_82160DA0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = REX_LOAD_U64(ctx.r11.u32 + -9888);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,4696(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 4696);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x823702a0
	goto loc_823702A0;
loc_82370250:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lfd f12,-16(r11)
	ctx.f12.u64 = REX_LOAD_U64(ctx.r11.u32 + -16);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lfd f11,16(r11)
	ctx.f11.u64 = REX_LOAD_U64(ctx.r11.u32 + 16);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfd f9,8(r11)
	ctx.f9.u64 = REX_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = REX_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,5992(r10)
	ctx.f13.u64 = REX_LOAD_U64(ctx.r10.u32 + 5992);
	// lfd f10,5984(r9)
	ctx.f10.u64 = REX_LOAD_U64(ctx.r9.u32 + 5984);
	// lfd f7,-9888(r8)
	ctx.f7.u64 = REX_LOAD_U64(ctx.r8.u32 + -9888);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -std::fma(ctx.f6.f64, ctx.f13.f64, -ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = std::fma(ctx.f13.f64, ctx.f6.f64, -ctx.f10.f64);
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f9.f64);
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = std::fma(ctx.f12.f64, ctx.f6.f64, ctx.f8.f64);
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_823702A0:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_823702A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = REX_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = REX_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = REX_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

DEFINE_REX_FUNC(sub_823747A0) {
	REX_FUNC_PROLOGUE();
	// lis r11,-32189
	ctx.r11.s64 = -2109538304;
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r3,r11,-30408
	ctx.r3.s64 = ctx.r11.s64 + -30408;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8215ec60
	sub_8215EC60(ctx, base);
	return;
}

DEFINE_REX_FUNC(sub_823748D8) {
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
	// li r5,498
	ctx.r5.s64 = 498;
	// addi r31,r11,-30728
	ctx.r31.s64 = ctx.r11.s64 + -30728;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,30
	ctx.r3.s64 = ctx.r31.s64 + 30;
	// bl 0x8215ec60
	ctx.lr = 0x82374900;
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
	ctx.lr = 0x82374914;
	sub_8215E640(ctx, base);
	// li r5,440
	ctx.r5.s64 = 440;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,600
	ctx.r3.s64 = ctx.r31.s64 + 600;
	// bl 0x8215ec60
	ctx.lr = 0x82374924;
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

